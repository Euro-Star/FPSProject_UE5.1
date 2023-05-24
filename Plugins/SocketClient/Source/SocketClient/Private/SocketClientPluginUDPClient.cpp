// Copyright 2017-2019 David Romanski (Socke). All Rights Reserved.

#include "SocketClientPluginUDPClient.h"
#include "SocketClientBPLibrary.h"
#include <SocketSubsystem.h>
#include <Common/UdpSocketReceiver.h>
#include "SocketClientPluginTCPClient.h"

USocketClientPluginUDPClient::USocketClientPluginUDPClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) 
{
	//This prevents the garbage collector from killingand deleting the class from RAM.
	this->AddToRoot();
}

void USocketClientPluginUDPClient::init(USocketClientBPLibrary* mainLibP, FString domainOrIPP, int32 portP, FString connectionIDP){
	mainLib = mainLibP;
	connectionID = connectionIDP;
	domainOrIP = domainOrIPP;
	port = portP;

	UDPThread = new FServerUDPConnectionThread(this, mainLibP, domainOrIPP, portP);
}

void USocketClientPluginUDPClient::sendMessage(FString message, FString packetName)
{
	if (UDPSendThread != nullptr) 
	{
		//UDPSendThread->SendMessage(message, domainOrIP, port);
		UDPSendThread->SendMessage(message, packetName);
	}
}

void USocketClientPluginUDPClient::closeConnection()
{
	if (udpSocketReceiver != nullptr) {
		udpSocketReceiver->Stop();
		udpSocketReceiver = nullptr;
	}

	setRun(false);
	UDPThread = nullptr;
	if (UDPSendThread != nullptr) {
		UDPSendThread->pauseThread(false);
	}

	UDPSendThread = nullptr;
}

FString USocketClientPluginUDPClient::fBytesToString(const TArray<uint8>& InArray)
{
	FString ResultString;
	FFileHelper::BufferToString(ResultString, InArray.GetData(), InArray.Num());
	return ResultString;
}

void USocketClientPluginUDPClient::UDPReceiver(const FArrayReaderPtr& ArrayReaderPtr, const FIPv4Endpoint& EndPt) 
{
	if (FSocketClientModule::isShuttingDown)
		return;

	TSharedPtr<FInternetAddr> peerAddr = EndPt.ToInternetAddr();
	FString ipGlobal = peerAddr->ToString(false);
	int32 portGlobal = peerAddr->GetPort();

	//switch to gamethread
	USocketClientBPLibrary* socketClientBPLibraryGlobal = mainLib;
	FString clientConnectionIDGlobal = connectionID;
	char* Data = (char*)ArrayReaderPtr->GetData();
	FString recvMessage = FString(UTF8_TO_TCHAR(Data));
	TArray<uint8> byteArray;
	byteArray.Append(ArrayReaderPtr->GetData(), ArrayReaderPtr->Num());

	AsyncTask(ENamedThreads::GameThread, [recvMessage, byteArray, ipGlobal, portGlobal, socketClientBPLibraryGlobal, clientConnectionIDGlobal]() 
	{
		if (FSocketClientModule::isShuttingDown)
			return;

		const int32 HeaderSize = 4;

		TArray<uint8> PendingArray = byteArray;
		while (PendingArray.Num() > HeaderSize)
		{
			int32 PacketNameSize	= PendingArray[0] | (PendingArray[1] << 8);
			int32 PacketSize		= PendingArray[2] | (PendingArray[3] << 8);

			TArray<uint8>		PacketData;
			TArray<uint8>		PacketName;

			PacketData.SetNumUninitialized(PacketSize);
			PacketName.SetNumUninitialized(PacketNameSize);

			int removeSize = PacketSize + HeaderSize + PacketNameSize;
			int memcpySize = PendingArray.Num() - removeSize;

			if (PendingArray.Num() < HeaderSize + PacketNameSize + PacketSize)
			{
				// Not enough data for a complete packet, wait for more.
				break;
			}

			FMemory::Memcpy(PacketName.GetData(), PendingArray.GetData() + HeaderSize, PacketNameSize);
			FMemory::Memcpy(PacketData.GetData(), PendingArray.GetData() + HeaderSize + PacketNameSize, PacketSize);

			FString PacketDataStr;
			FString PacketNameStr;
			FFileHelper::BufferToString(PacketDataStr, PacketData.GetData(), PacketData.Num());
			FFileHelper::BufferToString(PacketNameStr, PacketName.GetData(), PacketName.Num());

			TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
			TSharedRef<TJsonReader<TCHAR>> Reader = TJsonReaderFactory<TCHAR>::Create(PacketDataStr);
			if (FJsonSerializer::Deserialize(Reader, JsonObject))
			{
				if (USocketClientBPLibrary::GetSocketClientTarget()->OnReceiveUDPMessageEventDelegate.IsBound())
				{
					socketClientBPLibraryGlobal->OnReceiveUDPMessageEventDelegate.Broadcast(PacketNameStr, JsonObject, clientConnectionIDGlobal);
				}
			}
			else
			{
				if (GEngine)
				{
					GEngine->AddOnScreenDebugMessage(-1, 20.0f, FColor::Green, FString::Printf(TEXT("Failed to deserialize JSON packet: %s"), *PacketDataStr));
				}
			}
			PendingArray.RemoveAt(0, PacketNameSize + PacketSize + HeaderSize);
		}

		PendingArray.Empty();
	});
}

bool USocketClientPluginUDPClient::isRun()
{
	return run;
}

void USocketClientPluginUDPClient::setRun(bool runP) 
{
	run = runP;
}

FString USocketClientPluginUDPClient::getConnectionID()
{
	return connectionID;
}

void USocketClientPluginUDPClient::setSocket(FSocket* socketP)
{
	socket = socketP;
}

void USocketClientPluginUDPClient::setUDPSendThread(FServerUDPSendMessageThread* udpSendThreadP) 
{
	UDPSendThread = udpSendThreadP;
}

void USocketClientPluginUDPClient::setUDPSocketReceiver(FUdpSocketReceiver* udpSocketReceiverP) 
{
	udpSocketReceiver = udpSocketReceiverP;
}


FSocket* USocketClientPluginUDPClient::getSocket()
{
	return socket;
}

uint32 FServerUDPSendMessageThread::Run()
{
	FSocket* socket = udpClient->getSocket();
	FString connectionID = udpClient->getConnectionID();

	while (udpClient->isRun() && socket != nullptr)
	{
		if (udpClient->isRun() && messageQueue.IsEmpty() == false) {

			TSharedRef<FInternetAddr> addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
			bool bIsValid;
			addr->SetIp(*ip, bIsValid);
			addr->SetPort(port);
			int32 sent = 0;
			TArray<uint8> byteArray;
			if (bIsValid) 
			{
				while (messageQueue.IsEmpty() == false) 
				{
					FSocketQueue m;
					messageQueue.Dequeue(m);
					FTCHARToUTF8 Convert(*m.messageQueue);
					byteArray.Append(m.byteArrayQueue.GetData(), m.byteArrayQueue.Num());
					sendBytes(socket, byteArray, sent, addr);
				}
			}
			else 
			{
				UE_LOG(LogTemp, Error, TEXT("Can't send to %s:%i"), *ip, port);
			}

		}

		if (udpClient->isRun()) {
			pauseThread(true);
			//workaround. suspend do not work on all platforms. lets sleep
			while (paused && udpClient->isRun()) {
				FPlatformProcess::Sleep(0.01);
			}
		}
	}

	if (socket != nullptr) {
		socket->Close();
		socket = nullptr;
		udpClient->setSocket(nullptr);
	}
	thread = nullptr;
	return 0;
}

void FServerUDPSendMessageThread::SendMessage(FString str, FString packetname)
{
	if (str.Len() > 0)
	{
		int32 lowerPoint = 0;
		FString message = JsonPacketKeyLower(lowerPoint, str);
		TArray<uint8> jsonStr = fStringToBytes(message);

		int32 PacketSize = jsonStr.Num();

		TArray<uint8> Bytes;
		Bytes.Add(packetname.Len());
		Bytes.Add(packetname.Len() >> 8);
		Bytes.Add(PacketSize);
		Bytes.Add(PacketSize >> 8);
		Bytes.Append(fStringToBytes(packetname));
		Bytes.Append(jsonStr);

		FSocketQueue newQueue;
		newQueue.sent = 0;
		newQueue.messageQueue = str;
		newQueue.byteArrayQueue = Bytes;
		messageQueue.Enqueue(newQueue);
	}
	pauseThread(false);
}

uint32 FServerUDPConnectionThread::Run()
{
	FString connectionID = udpClient->getConnectionID();

	if (socket == nullptr || socket == NULL) 
	{
		// create the socket
		FString socketName;
		ISocketSubsystem* socketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);

		TSharedPtr<class FInternetAddr> addr = socketSubsystem->CreateInternetAddr();
		bool validIP = true;
		addr->SetPort(port);
		addr->SetIp(*ip, validIP);

		if (socket = socketSubsystem->CreateSocket(NAME_DGram, *socketName, addr->GetProtocolType()))
		{
			socket->SetReuseAddr(true);
			socket->SetNonBlocking(true);
			socket->SetBroadcast(true);
			USocketClientBPLibrary::GetSocketClientTarget()->OnRocketClientUDPConnectionEventDelegate.Broadcast(true, "UDP Server Connection successful : " + ip + ":" + FString::FromInt(port) + "|" + connectionID, connectionID);
		}

		FTimespan ThreadWaitTime = FTimespan::FromMilliseconds(100);
		FUdpSocketReceiver* udpSocketReceiver = new FUdpSocketReceiver(socket, ThreadWaitTime, TEXT("SocketClientBPLibUDPReceiverThread"));
		udpSocketReceiver->OnDataReceived().BindUObject(udpClient, &USocketClientPluginUDPClient::UDPReceiver);
		udpSocketReceiver->Start();
		udpClient->setUDPSocketReceiver(udpSocketReceiver);

		udpClient->setSocket(socket);
		udpClient->setRun(true);
		udpClient->setUDPSendThread(new FServerUDPSendMessageThread(udpClient, socketClient, ip, port));
	}

	thread = nullptr;
	return 0;
}

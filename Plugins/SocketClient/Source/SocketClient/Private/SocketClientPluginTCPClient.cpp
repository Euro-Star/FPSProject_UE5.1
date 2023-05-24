// Copyright 2017-2019 David Romanski (Socke). All Rights Reserved.

#include "SocketClientPluginTCPClient.h"
#include "SocketClientBPLibrary.h"
#include <SocketSubsystem.h>


USocketClientPluginTCPClient::USocketClientPluginTCPClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	//This prevents the garbage collector from killingand deleting the class from RAM.
	this->AddToRoot();
}

void USocketClientPluginTCPClient::connect(USocketClientBPLibrary* mainLibP, FString domainOrIPP, int32 portP, FString connectionIDP){
	mainLib = mainLibP;
	connectionID = connectionIDP;
	domainOrIP = domainOrIPP;
	port = portP;
	tcpConnectionThread = new FServerConnectionThread(mainLib, connectionID, domainOrIP, port, this);
}

void USocketClientPluginTCPClient::sendMessage(FString message, FString packetName)
{
	if (run && tcpSendThread != nullptr) 
	{
		tcpSendThread->sendMessage(message, packetName);
	}
}

void USocketClientPluginTCPClient::closeConnection()
{
	setRun(false);
	tcpConnectionThread = nullptr;
	tcpSendThread = nullptr;
	mainLib = nullptr;
}

bool USocketClientPluginTCPClient::isRun()
{
	return run;
}

void USocketClientPluginTCPClient::setRun(bool runP) 
{
	run = runP;
}

FString USocketClientPluginTCPClient::getConnectionID()
{
	return connectionID;
}

void USocketClientPluginTCPClient::setSocket(FSocket* socketP)
{
	socket = socketP;
}

FSocket* USocketClientPluginTCPClient::getSocket()
{
	return socket;
}

void USocketClientPluginTCPClient::createSendThread()
{
	tcpSendThread = new FSendDataToServerThread(mainLib, this, connectionID);
}

uint32 FServerConnectionThread::Run()
{
	FString ip = ipOrDomain;
	int32 portGlobal = port;
	FString clientConnectionIDGlobal = clientConnectionID;
	USocketClientBPLibrary* socketClientGlobal = socketClient;
	USocketClientPluginTCPClient* tcpClientGlobal = tcpClient;

	ISocketSubsystem* sSS = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
	if (sSS == nullptr) return 0;

	TSharedRef<FInternetAddr> addr = sSS->CreateInternetAddr();
	bool bIsValid;
	addr->SetIp(*ip, bIsValid);
	addr->SetPort(port);

	if (bIsValid) {
		// create the socket
		FSocket* socket = sSS->CreateSocket(NAME_Stream, TEXT("socketClient"), addr->GetProtocolType());
		tcpClient->setSocket(socket);

		//socket options
		if (socket != nullptr) {
			socket->SetNoDelay(true);
			socket->SetNonBlocking(true);
			int32 BufferSize = 2 * 1024 * 1024;
			socket->SetSendBufferSize(2 * 1024 * 1024, BufferSize);
			socket->SetReceiveBufferSize(2 * 1024 * 1024, BufferSize);
		}

		if (bool bIsConnect = socket->Connect(*addr))
		{		
			// try to connect to the server
			tcpClient->setRun(true);
			tcpClient->createSendThread();

			USocketClientBPLibrary::GetSocketClientTarget()->OnRocketClientTCPConnectionEventDelegate.Broadcast(true, "Server Connection successful : " + ip + ":" + FString::FromInt(portGlobal) + "|" + clientConnectionIDGlobal, clientConnectionID);
			int64 ticks1;
			int64 ticks2;
			TArray<uint8> byteDataArray;
			bool inCollectMessageStatus = false;

			uint32 DataSize;
			while (socket != nullptr && tcpClient->isRun())
			{
				ticks1 = FDateTime::Now().GetTicks();
				socket->Wait(ESocketWaitConditions::WaitForReadOrWrite, FTimespan::FromSeconds(0.1));
				ticks2 = FDateTime::Now().GetTicks();

				bool hasData = socket->HasPendingData(DataSize);
				if (!hasData && ticks1 == ticks2) {
					UE_LOG(LogTemp, Display, TEXT("TCP connection broken. End Loop"));
					break;
				}

				if (hasData) 
				{
					byteDataArray.SetNumUninitialized(DataSize);
					int32 BytesRead = 0;
					if (socket->Recv(byteDataArray.GetData(), byteDataArray.Num(), BytesRead)) {

						recvPacket(byteDataArray);
					}
				}
				byteDataArray.Empty();
			}

			// DisConnect Server
			if (tcpClient->isRun())
			{
				if (GEngine)
				{
					GEngine->AddOnScreenDebugMessage(-1, 20.0f, FColor::Green, TEXT("Server Connection Close"));
				}
			}

			tcpClient->setRun(false);
			if (socket != nullptr)
			{
				socket->Close();
				sSS->DestroySocket(socket);
				socket = nullptr;
			}
			thread = nullptr;
		}
		else
		{
			const TCHAR* socketErr = sSS->GetSocketError(SE_GET_LAST_ERROR_CODE);
			USocketClientBPLibrary::GetSocketClientTarget()->OnRocketClientTCPConnectionEventDelegate.Broadcast(true, "Connection failed : " + FString(socketErr) + "|" + ip + ":" + FString::FromInt(portGlobal) + "|" + clientConnectionIDGlobal, clientConnectionID);
		}
	}
	return 0;
}

void FServerConnectionThread::recvPacket(const TArray<uint8>& byteArray)
{
	const int32 HeaderSize = 4;
	TArray<uint8> PendingArray = byteArray;
	while (PendingArray.Num() > HeaderSize)
	{
		int32 PacketNameSize = 0;
		int32 PacketSize = 0;

		PacketNameSize	= PendingArray[0] | (PendingArray[1] << 8);
		PacketSize		= PendingArray[2] | (PendingArray[3] << 8);

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

		FString PacketDataStr = fBytesToString(PacketData);
		FString PacketNameStr = fBytesToString(PacketName);
		TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

		TSharedRef<TJsonReader<TCHAR>> Reader = TJsonReaderFactory<TCHAR>::Create(PacketDataStr);
		if (FJsonSerializer::Deserialize(Reader, JsonObject))
		{
			if(USocketClientBPLibrary::GetSocketClientTarget()->OnReceiveTCPMessageEventDelegate.IsBound())
			{
				USocketClientBPLibrary::GetSocketClientTarget()->OnReceiveTCPMessageEventDelegate.Broadcast(PacketNameStr, JsonObject, clientConnectionID);
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
}


FString FServerConnectionThread::fBytesToString(const TArray<uint8>& InArray)
{
	FString ResultString;
	FFileHelper::BufferToString(ResultString, InArray.GetData(), InArray.Num());
	return ResultString;
}



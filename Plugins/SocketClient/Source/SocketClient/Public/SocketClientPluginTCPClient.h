// Copyright 2017-2019 David Romanski (Socke). All Rights Reserved.
#pragma once

#include "SocketClient.h"
#include "SocketClientBPLibrary.h"
#include <Sockets.h>
#include "SocketClientPluginTCPClient.generated.h"

class USocketClientBPLibrary;
class FServerConnectionThread;
class FSendDataToServerThread;

UCLASS(Blueprintable, BlueprintType)
class USocketClientPluginTCPClient : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	void connect(USocketClientBPLibrary* mainLib, FString domainOrIP, int32 port, FString connectionID);
	void sendMessage(FString message, FString packetName);
	void closeConnection();

	bool isRun();
	void setRun(bool runP);
	FString getConnectionID();

	void setSocket(FSocket* socket);
	FSocket* getSocket();

	void createSendThread();
	
private:
	bool run = false;
	FString connectionID;
	FString domainOrIP;
	int32 port;
	FSocket* socket = nullptr;

	FServerConnectionThread* tcpConnectionThread = nullptr;
	FSendDataToServerThread* tcpSendThread = nullptr;
	USocketClientBPLibrary* mainLib = nullptr;

};

/* asynchronous Thread*/
class FServerConnectionThread : public FRunnable {

public:

	FServerConnectionThread(USocketClientBPLibrary* socketClientP, FString clientConnectionIDP, FString ipOrDomainP, int32 portP, USocketClientPluginTCPClient* tcpClientP) :
		socketClient(socketClientP),
		clientConnectionID(clientConnectionIDP),
		ipOrDomain(ipOrDomainP),
		port(portP),
		tcpClient(tcpClientP)
	{
		FString threadName = "FServerConnectionThread" + FGuid::NewGuid().ToString();
		thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
	}

	virtual uint32 Run() override;

	void recvPacket(const TArray<uint8>& byteArray);

	FString fBytesToString(const TArray<uint8>& InArray);

protected:
	USocketClientBPLibrary* socketClient = nullptr;
	FString						clientConnectionID;
	FString						originalIP;
	FString ipOrDomain;
	int32 port;
	USocketClientPluginTCPClient* tcpClient = nullptr;
	bool noPacketDelay = false;
	bool noPacketBlocking = false;



	FRunnableThread* thread = nullptr;
};

/* asynchronous Thread*/
class FSendDataToServerThread : public FRunnable {

public:
	FSendDataToServerThread(USocketClientBPLibrary* socketClientLibP, USocketClientPluginTCPClient* tcpClientP, FString clientConnectionIDP) :
		socketClientLib(socketClientLibP),
		tcpClient(tcpClientP),
		clientConnectionID(clientConnectionIDP) {
		FString threadName = "FSendDataToServerThread" + FGuid::NewGuid().ToString();
		thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
	}

	virtual uint32 Run() override {

		if (tcpClient == nullptr) {
			UE_LOG(LogTemp, Error, TEXT("Class is not initialized."));
			return 0;
		}

		FString clientConnectionIDGlobal = clientConnectionID;
		USocketClientBPLibrary* socketClientLibGlobal = socketClientLib;

		// get the socket
		FSocket* socket = tcpClient->getSocket();

		while (tcpClient->isRun()) {
			// try to connect to the server
			if (socket == nullptr) {
				UE_LOG(LogTemp, Error, TEXT("Connection not exist."));
				break;
			}

			if (socket != nullptr && socket->GetConnectionState() == ESocketConnectionState::SCS_Connected) 
			{
				while (!messageQueue.IsEmpty()) {
					FSocketQueue* m = messageQueue.Peek();
					int32 sent = 0;

					if (socket->Send(m->byteArrayQueue.GetData() + m->sent, m->byteArrayQueue.Num() - m->sent, sent))
					{
						m->sent += sent;

						if (m->byteArrayQueue.Num() == sent)
						{
							FSocketQueue popData;
							messageQueue.Dequeue(popData);
						}
					}
				}
			}

			if (tcpClient->isRun()) {
				pauseThread(true);
				//workaround. suspend do not work on all platforms. lets sleep
				while (paused && tcpClient->isRun()) {
					FPlatformProcess::Sleep(0.01);
				}
			}
		}
		thread = nullptr;
		return 0;
	}

	void sendMessage(FString str, FString packetname)
	{
		int32 BytesSent = 0;
		int32 lowerPoint = 0;

		TArray<uint8> Bytes;
		FString message = JsonPacketKeyLower(lowerPoint, str);
		TArray<uint8> jsonStr = fStringToBytes(message);

		int32 PacketSize = jsonStr.Num();

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

		pauseThread(false);
	}

	FString JsonPacketKeyLower(int32& start, FString str)
	{
		if (start == -1)
			return str;

		int32 firstIdx = str.Find("\"", ESearchCase::IgnoreCase, ESearchDir::FromStart, start);
		int32 secondIdx = str.Find("\"", ESearchCase::IgnoreCase, ESearchDir::FromStart, firstIdx + 1);

		if (str.Len() > secondIdx + 1)
		{
			if (str[secondIdx + 1] == ':')
			{
				int32 strLength = (secondIdx - firstIdx) - 1;
				FString replaceStr = str.Mid(firstIdx + 1, strLength);
				str = str.Replace(*replaceStr, *replaceStr.ToLower());
			}
		}

		return JsonPacketKeyLower(secondIdx, str);
	}

	TArray<uint8> fStringToBytes(FString InString)
	{
		FTCHARToUTF8 ToUtf8Converter(InString.GetCharArray().GetData());
		auto Utf8StringSize = ToUtf8Converter.Length();
		auto Utf8String = ToUtf8Converter.Get();

		TArray<uint8> ResultBytes;
		ResultBytes.Append((uint8*)((UTF8CHAR*)Utf8String), Utf8StringSize);
		return ResultBytes;
	}

	void pauseThread(bool pause) {
		paused = pause;
		if (thread != nullptr)
			thread->Suspend(pause);
	}

	TQueue<FSocketQueue> messageQueue;
	USocketClientBPLibrary* socketClientLib;
	USocketClientPluginTCPClient* tcpClient = nullptr;
	FString clientConnectionID;
	FRunnableThread* thread = nullptr;
	bool					run;
	bool					paused;
};
// Copyright 2017-2019 David Romanski (Socke). All Rights Reserved.
#pragma once

#include "SocketClient.h"
#include "SocketClientBPLibrary.h"
#include <Sockets.h>
#include "Common/UdpSocketReceiver.h"
#include "SocketClientPluginUDPClient.generated.h"


class USocketClientBPLibrary;
class FServerConnectionThread;
class FSendDataToServerThread;

class FUdpSocketReceiver;
class FServerUDPConnectionThread;
class FServerUDPSendMessageThread;
struct FIPv4Endpoint;

UCLASS(Blueprintable, BlueprintType)
class USocketClientPluginUDPClient : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	void init(USocketClientBPLibrary* mainLib, FString domainOrIP, int32 port, FString connectionID);
	void sendMessage(FString message, FString packetName);
	void closeConnection();

	FString fBytesToString(const TArray<uint8>& InArray);
	void UDPReceiver(const FArrayReaderPtr& ArrayReaderPtr, const FIPv4Endpoint& EndPt);

	bool isRun();
	void setRun(bool runP);
	FString getConnectionID();

	void setSocket(FSocket* socket);

	void setUDPSendThread(FServerUDPSendMessageThread* udpSendThreadP);
	void setUDPSocketReceiver(FUdpSocketReceiver* udpSocketReceiverP);

	FSocket* getSocket();
	
public:
	bool run = false;
	FString connectionID;
	FString domainOrIP;
	int32 port;

	FServerConnectionThread* udpConnectionThread = nullptr;
	FSendDataToServerThread* udpSendThread = nullptr;
	USocketClientBPLibrary* mainLib = nullptr;

	FUdpSocketReceiver* udpSocketReceiver = nullptr;
	FSocket* socket = nullptr;
	FServerUDPConnectionThread* UDPThread = nullptr;
	FServerUDPSendMessageThread* UDPSendThread = nullptr;
};

/* asynchronous Threads*/
class FServerUDPSendMessageThread : public FRunnable 
{
public:

	FServerUDPSendMessageThread(USocketClientPluginUDPClient* udpClientP, USocketClientBPLibrary* socketClientP, FString mySocketipP, int32 mySocketportP) :
		udpClient(udpClientP),
		socketClient(socketClientP),
		ip(mySocketipP),
		port(mySocketportP) 
	{
		FString threadName = "FServerUDPSendMessageThread_" + FGuid::NewGuid().ToString();
		thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
	}

	virtual uint32 Run() override;


	void SendMessage(FString str, FString packetname);

	void pauseThread(bool pause) {
		paused = pause;
		if (thread != nullptr)
			thread->Suspend(pause);
	}

	void sendBytes(FSocket*& socketP, TArray<uint8>& byteArray, int32& sent, TSharedRef<FInternetAddr>& addr) 
	{
		if (byteArray.Num() > maxPacketSize) 
		{
			TArray<uint8> byteArrayTemp;
			for (int32 i = 0; i < byteArray.Num(); i++) 
			{
				byteArrayTemp.Add(byteArray[i]);
				if (byteArrayTemp.Num() == maxPacketSize) 
				{
					sent = 0;
					socketP->SendTo(byteArrayTemp.GetData(), byteArrayTemp.Num(), sent, *addr);
					byteArrayTemp.Empty();
				}
			}
			if (byteArrayTemp.Num() > 0) 
			{
				sent = 0;
				socketP->SendTo(byteArrayTemp.GetData(), byteArrayTemp.Num(), sent, *addr);
				byteArrayTemp.Empty();
			}
		}
		else 
		{
			sent = 0;
			socketP->SendTo(byteArray.GetData(), byteArray.Num(), sent, *addr);
		}

		byteArray.Empty();
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

protected:
	USocketClientPluginUDPClient* udpClient = nullptr;
	USocketClientBPLibrary* socketClient = nullptr;
	FRunnableThread*		thread = nullptr;

	FString					ip;
	int32					port;
	bool					paused;
	TQueue<FSocketQueue>	messageQueue;

	int32					maxPacketSize = 65507;
};


class FServerUDPConnectionThread : public FRunnable 
{
public:
	FServerUDPConnectionThread(USocketClientPluginUDPClient* udpClientP, USocketClientBPLibrary* socketClientP, FString ipP, int32 portP) :
		udpClient(udpClientP),
		socketClient(socketClientP),
		ip(ipP),
		port(portP) {
		FString threadName = "FServerUDPConnectionThread_" + FGuid::NewGuid().ToString();
		thread = FRunnableThread::Create(this, *threadName, 0, EThreadPriority::TPri_Normal);
	}

	virtual uint32 Run() override;

protected:
	USocketClientPluginUDPClient* udpClient = nullptr;
	USocketClientBPLibrary* socketClient = nullptr;
	FRunnableThread*		thread = nullptr;

	FString					ip;
	int32					port;
	bool					reuseSocket = false;
	FSocket*				socket = nullptr;
};

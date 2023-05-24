// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include <Templates/SharedPointer.h>
#include <Dom/JsonObject.h>
#include "SocketClientBPLibrary.generated.h"

struct FSocketQueue 
{
	FString messageQueue;
	TArray<uint8> byteArrayQueue;
	int32		sent;
};

class USocketClientPluginTCPClient;
class USocketClientPluginUDPClient;

UCLASS(BlueprintType)
class SOCKETCLIENT_API USocketClientBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	DECLARE_MULTICAST_DELEGATE_ThreeParams(FreceiveTCPMessageEventDelegate, FString, TSharedPtr<FJsonObject>, FString);
	FreceiveTCPMessageEventDelegate			OnReceiveTCPMessageEventDelegate;
	DECLARE_MULTICAST_DELEGATE_ThreeParams(FsocketClientTCPConnectionEventDelegate, bool, FString, FString);
	FsocketClientTCPConnectionEventDelegate OnRocketClientTCPConnectionEventDelegate;

	DECLARE_MULTICAST_DELEGATE_ThreeParams(FreceiveUDPMessageEventDelegate, FString, TSharedPtr<FJsonObject>, FString);
	FreceiveUDPMessageEventDelegate			OnReceiveUDPMessageEventDelegate;
	DECLARE_MULTICAST_DELEGATE_ThreeParams(FsocketClientUDPConnectionEventDelegate, bool, FString, FString);
	FsocketClientUDPConnectionEventDelegate OnRocketClientUDPConnectionEventDelegate;

public:
	UFUNCTION(BlueprintCallable, Category = "SocketClient|TCP")
	void ConnectTCPAndUDP(FString domain, int32 tcpPort, int32 udpPort, FString& connectionID)
	{
		ConnectSocketClientTCP(domain, tcpPort, connectionID);
		SocketClientInitUDPReceiver(domain, udpPort, connectionID);
	}

	UFUNCTION(BlueprintCallable, Category = "SocketClient|TCP")
	void ConnectSocketClientTCP(FString domain, int32 port, FString& connectionID, bool noPacketDelay = false);
	UFUNCTION(BlueprintCallable, Category = "SocketClient|UDP")
	void SocketClientInitUDPReceiver(FString domain, int32 port, FString& connectionID, bool noPacketDelay = false);

	UFUNCTION(BlueprintCallable, Category = "SocketClient|TCP")
	void SocketClientSendTCP(FString connectionID, FString packetName, FString message);
	UFUNCTION(BlueprintCallable, Category = "SocketClient|UDP")
	void SocketClientSendUDP(FString connectionID, FString packetName, FString message);

	void DisconnectAllServer(FString connectId);
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SocketClient")
		static USocketClientBPLibrary* GetSocketClientTarget();
	static USocketClientBPLibrary* socketClientBPLibrary;

private:
	TMap<FString, USocketClientPluginTCPClient*> tcpClients;
	TMap<FString, USocketClientPluginUDPClient*> udpClients;
};

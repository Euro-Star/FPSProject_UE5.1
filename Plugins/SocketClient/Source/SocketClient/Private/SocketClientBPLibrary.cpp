// Copyright Epic Games, Inc. All Rights Reserved.

#include "SocketClientBPLibrary.h"
#include "SocketClient.h"
#include "SocketClientPluginTCPClient.h"
#include "SocketClientPluginUDPClient.h"

USocketClientBPLibrary* USocketClientBPLibrary::socketClientBPLibrary;

USocketClientBPLibrary::USocketClientBPLibrary(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	socketClientBPLibrary = this;
}

USocketClientBPLibrary* USocketClientBPLibrary::GetSocketClientTarget()
{
	return socketClientBPLibrary;
}

void USocketClientBPLibrary::ConnectSocketClientTCP(FString domain, int32 port, FString& connectionID, bool noPacketDelay/*, bool noPacketBlocking*/) 
{
	if (tcpClients.Contains(connectionID))
	{
		if (USocketClientPluginTCPClient* client = tcpClients.FindRef(connectionID))
		{
			client->closeConnection();
			client = nullptr;
			tcpClients.Remove(connectionID);
		}
	}

	USocketClientPluginTCPClient* tcpClient = NewObject<USocketClientPluginTCPClient>(USocketClientPluginTCPClient::StaticClass());
	connectionID = FGuid::NewGuid().ToString();
	tcpClients.Add(connectionID, tcpClient);
	tcpClient->connect(this, domain, port, connectionID);
}

void USocketClientBPLibrary::SocketClientInitUDPReceiver(FString domain, int32 port, FString& connectionID, bool noPacketDelay /*= false*/)
{
	if (udpClients.Contains(connectionID))
	{
		if (USocketClientPluginUDPClient* client = udpClients.FindRef(connectionID))
		{
			client->closeConnection();
			udpClients.Remove(connectionID);
			client = nullptr;
		}
	}

	USocketClientPluginUDPClient* udpClient = NewObject<USocketClientPluginUDPClient>(USocketClientPluginUDPClient::StaticClass());
	udpClients.Add(connectionID, udpClient);
	udpClient->init(this, domain, port, connectionID);
}

void USocketClientBPLibrary::SocketClientSendTCP(FString connectionID, FString packetName, FString message) {

	if (connectionID.IsEmpty() || tcpClients.Find(connectionID) == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Connection not found (socketClientSendTCPMessage). %s"), *connectionID);
		return;
	}

	if(USocketClientPluginTCPClient* tcpClient = *tcpClients.Find(connectionID))
	{
		tcpClient->sendMessage(message, packetName);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Connection not found (socketClientSendTCPMessage). %s"), *connectionID);
	}
}
void USocketClientBPLibrary::SocketClientSendUDP(FString connectionID, FString packetName, FString message) {

	if (connectionID.IsEmpty() || udpClients.Find(connectionID) == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("Connection not found (socketClientSendUDPMessage). %s"), *connectionID);
		return;
	}

	USocketClientPluginUDPClient* udpClient = *udpClients.Find(connectionID);
	udpClient->sendMessage(message, packetName);
}

void USocketClientBPLibrary::DisconnectAllServer(FString connectId)
{
	if (tcpClients.Contains(connectId))
	{
		if (USocketClientPluginTCPClient* client = tcpClients.FindRef(connectId))
		{
			client->closeConnection();
			tcpClients.Remove(connectId);
			client = nullptr;
		}
	}
	if (udpClients.Contains(connectId))
	{
		if (USocketClientPluginUDPClient* client = udpClients.FindRef(connectId))
		{
			client->closeConnection();
			udpClients.Remove(connectId);
			client = nullptr;
		}
	}
}

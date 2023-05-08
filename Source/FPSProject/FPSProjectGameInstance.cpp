// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSProjectGameInstance.h"

void UFPSProjectGameInstance::Init()
{
	Super::Init();

	ConnectServer();
}

void UFPSProjectGameInstance::ConnectServer()
{
	DisConnectServer();

	//TCPSocketComp = new TCPSocketClient(IP, Port, this);
	//UDPSocketComp = new UDPSocketClient(EnterIP, 2231, this);
}

void UFPSProjectGameInstance::DisConnectServer()
{
}

void UFPSProjectGameInstance::ReConnectServer(FString ip, int32 tcpPort, int32 udpPort, int32 sessonid)
{
}

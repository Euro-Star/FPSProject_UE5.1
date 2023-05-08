// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RecvThread.h"

/**
 * 
 */


class FPSPROJECT_API TCPSocketClient
{
private:
    FSocket* Socket;
    FString ServerAddress;
    int32 ServerPort;
    FRecvThread* RecvThread;

public:
    TCPSocketClient(FString InServerAddress, int32 InServerPort);
    ~TCPSocketClient();

    FRunnableThread* thread;
    bool Connect();
    bool HasPendingData();
    void SendData(const TArray<uint8>& Data);
    bool ReceiveData(TArray<uint8>& OutData);

};
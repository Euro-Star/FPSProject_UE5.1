// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Containers/Queue.h"
#include "Networking.h"
#include "Sockets.h"
#include "SocketSubsystem.h"


/**
 * 
 */
class FPSPROJECT_API FRecvThread : public FRunnable
{
private:
    FSocket* Socket;
    TQueue<TArray<uint8>, EQueueMode::Mpsc> RecvQueue;
    FRunnableThread* Thread;
    bool bIsRunning;

public:
    // 생성자 선언과 동시에 변수 초기화 (C++ 11부터 지원)
    FRecvThread(FSocket* InSocket)
        : Socket(InSocket)
        , Thread(nullptr)
        , bIsRunning(false)
    {
    }

    ~FRecvThread()
    {
        if (Thread != nullptr)
        {
            Thread->Kill(true);
            delete Thread;
        }
    }
    
    void Start()
    {
        if (Thread == nullptr)
        {
            bIsRunning = true;
            Thread = FRunnableThread::Create(this, TEXT("FRecvThread"), 0, TPri_AboveNormal);
        }
    }

    uint32 Run() override
    {
        while (bIsRunning)      // Thread 돌아가는 중 Recv
        {
            TArray<uint8> RecvData;
            int32 BytesRead;
            if (Socket->Recv(RecvData.GetData(), RecvData.Num(), BytesRead))
            {
                RecvQueue.Enqueue(RecvData);
            }
        }

        return 0;
    }

    void Stop()
    {
        bIsRunning = false;
    }

    TQueue<TArray<uint8>, EQueueMode::Mpsc>& GetRecvQueue()
    {
        return RecvQueue;
    }
};

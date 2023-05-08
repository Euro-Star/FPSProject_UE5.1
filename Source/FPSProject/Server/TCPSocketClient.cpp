// Fill out your copyright notice in the Description page of Project Settings.


#include "Server/TCPSocketClient.h"

inline TCPSocketClient::TCPSocketClient(FString InServerAddress, int32 InServerPort)
    : Socket(nullptr)
    , ServerAddress(InServerAddress)
    , ServerPort(InServerPort)
    , RecvThread(nullptr)
{
   // thread = FRunnableThread::Create(this, TEXT("ServerThread"));
}

inline TCPSocketClient::~TCPSocketClient()
{
    if (RecvThread != nullptr)
    {
        RecvThread->Stop();
    }

    if (Socket != nullptr)
    {
        Socket->Close();
        ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(Socket);
    }
    if (RecvThread != nullptr)
    {
        delete RecvThread;
    }
}

inline bool TCPSocketClient::Connect()
{
    ISocketSubsystem* SocketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
    TSharedRef<FInternetAddr> Addr = SocketSubsystem->CreateInternetAddr();

    bool bIsValid;
    Addr->SetIp(*ServerAddress, bIsValid);
    Addr->SetPort(ServerPort);

    if (!bIsValid)
    {
        UE_LOG(LogTemp, Error, TEXT("Invalid IP address."));
        return false;
    }

    Socket = SocketSubsystem->CreateSocket(NAME_Stream, TEXT("TCP_Client"), true);
    if (!Socket->Connect(*Addr))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to connect to server."));
        return false;
    }

    RecvThread = new FRecvThread(Socket);
    RecvThread->Start();

    return true;
}

inline void TCPSocketClient::SendData(const TArray<uint8>& Data)
{
    int32 BytesSent;
    Socket->Send(Data.GetData(), Data.Num(), BytesSent);
}

inline bool TCPSocketClient::ReceiveData(TArray<uint8>& OutData)
{
    return RecvThread->GetRecvQueue().Dequeue(OutData);
}

inline bool TCPSocketClient::HasPendingData()
{
    return !RecvThread->GetRecvQueue().IsEmpty();
}

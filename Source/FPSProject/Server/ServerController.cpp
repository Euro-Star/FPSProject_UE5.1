// Fill out your copyright notice in the Description page of Project Settings.


#include "ServerController.h"

inline AServerController::AServerController()
    : TcpClient(nullptr)
{
    UE_LOG(LogTemp, Log, TEXT("Connected to server."));

}

inline void AServerController::BeginPlay()
{
    APlayerController::BeginPlay();

    TcpClient = new TCPSocketClient(TEXT("127.0.0.1"), 1998);
    if (TcpClient->Connect())
    {
        UE_LOG(LogTemp, Log, TEXT("Connected to server."));
    }
}

inline void AServerController::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    if (TcpClient != nullptr)
    {
        delete TcpClient;
        TcpClient = nullptr;
    }

    APlayerController::EndPlay(EndPlayReason);
}

inline void AServerController::Tick(float DeltaTime)
{
    APlayerController::Tick(DeltaTime);

    if (TcpClient != nullptr && TcpClient->thread != nullptr)
    {
        if (TcpClient->HasPendingData())
        {
            TArray<uint8> ReceivedData;
            if (TcpClient->ReceiveData(ReceivedData))
            {
				int32 headerSize = 4;

					uint32 PacketNameSize = 0;
					uint32 PacketSize = 0;

					PacketNameSize = ReceivedData[0];
					PacketNameSize |= ReceivedData[1] << 8;
					PacketSize = ReceivedData[2];
					PacketSize |= ReceivedData[3] << 8;

					TArray<uint8>		UseData;
					TArray<uint8>		PacketName;

					UseData.SetNumUninitialized(PacketSize);
					PacketName.SetNumUninitialized(PacketNameSize);

					int removeSize = PacketSize + headerSize + PacketNameSize;
					int memcpySize = ReceivedData.Num() - removeSize;

					if (memcpySize < 0)
						return;

					TArray<uint8> NewPendingArray;
					NewPendingArray.SetNumUninitialized(memcpySize);

					memcpy(PacketName.GetData(), ReceivedData.GetData() + headerSize, PacketNameSize);
					memcpy(UseData.GetData(), ReceivedData.GetData() + headerSize + PacketNameSize, PacketSize);

					FString StringData = FBytesToString(UseData);
					TSharedRef<TJsonReader<TCHAR>> Reader = TJsonReaderFactory<TCHAR>::Create(StringData);
					TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
					FJsonSerializer::Deserialize(Reader, JsonObject);

					TSharedPtr<FRecvPacket_Wrapper> jsonWrap = MakeShareable(new FRecvPacket_Wrapper());
					jsonWrap->Packet = JsonObject;
					jsonWrap->packetname = FBytesToString(PacketName);

					if (HandleFunc.Contains(jsonWrap->packetname) == false)
					{
						FString temp = "AServerController::" + jsonWrap->packetname;
						FName FunctionName = STATIC_FUNCTION_FNAME(*temp);

						if (FindFunction(FunctionName))
						{
							FPacketHandlerFunc tempFunc;
							tempFunc.__Internal_AddDynamic(this, &AServerController::PacketFunction, FunctionName);
							HandleFunc.Add(jsonWrap->packetname, tempFunc);
						}
					}
					if (HandleFunc.Contains(jsonWrap->packetname))
					{
						if (HandleFunc[jsonWrap->packetname].IsBound())
						{
							HandleFunc[jsonWrap->packetname].Broadcast(*jsonWrap);
						}
					}

				}

        }
    }
}

inline void AServerController::SendDataToServer(const TArray<uint8>& Data)
{
    if (TcpClient != nullptr)
    {
        TcpClient->SendData(Data);
    }
}

FString AServerController::FBytesToString(const TArray<uint8>& InArray)
{
	FString ResultString;
	FFileHelper::BufferToString(ResultString, InArray.GetData(), InArray.Num());
	return ResultString;
}
// Fill out your copyright notice in the Description page of Project Settings.


#include "PacketExecutor.h"

// Add default functionality here for any IPacketExecutor functions that are not pure virtual.

void IPacketExecutor::RecvPacketQueueExcute(TQueue<TSharedPtr<FRecvPacket_Wrapper>, EQueueMode::Mpsc>& JsonQueue, TMap<FString, FPacketHandlerFunc>& FuncDele)
{
	UObject* thisObject = Cast<UObject>(this);
	while (!JsonQueue.IsEmpty())
	{
		TSharedPtr<FRecvPacket_Wrapper>	data;
		if (JsonQueue.Dequeue(data))
		{
			FRecvPacket_Wrapper wrapper = *data.Get();

			const FString FunctionNameStr = wrapper.packetname;

			if(!FuncDele.Contains(FunctionNameStr))
			{
				const FName FunctionName{ FunctionNameStr };

				if (thisObject->FindFunction(FunctionName))
				{
					FPacketHandlerFunc& HandlerFunc = FuncDele.FindOrAdd(FunctionNameStr);
					if (!HandlerFunc.IsBound())
					{
						HandlerFunc.BindUFunction(thisObject, FunctionName);
					}
				}
			}

			if (FuncDele.Contains(FunctionNameStr))
			{
				if (FuncDele[FunctionNameStr].IsBound())
				{
					FuncDele[FunctionNameStr].Execute(wrapper);
				}
			}
			else
			{
				if (GEngine)
				{
					GEngine->AddOnScreenDebugMessage(-1, 20.0f, FColor::Red, TEXT("RecvPacketQueueExcute in Packet Is Null"));
				}
			}
		}
	}
}

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatusComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FPSPROJECT_API UStatusComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStatusComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

protected:
	bool bZoomIn = false;
	bool bReload = false;
	bool bRun = false;
	bool bDie = false;
	bool bFire = false;

public:
	UFUNCTION(BlueprintCallable)
	bool IsZoomin() { return bZoomIn; };

	UFUNCTION(BlueprintCallable)
	bool IsReload() { return bReload; };

	UFUNCTION(BlueprintCallable)
	bool IsRun() { return bRun; };

	UFUNCTION(BlueprintCallable)
	bool IsDie() { return bDie; };

	UFUNCTION(BlueprintCallable)
	bool IsFire() { return bFire; };

	UFUNCTION(BlueprintCallable)
	void SetZoomin(bool _bZoomin);

	UFUNCTION(BlueprintCallable)
	void SetReload(bool _bReload);

	UFUNCTION(BlueprintCallable)
	void SetRun(bool _bRun);

	UFUNCTION(BlueprintCallable)
	void SetDie(bool _bDie);

	UFUNCTION(BlueprintCallable)
	void SetFire(bool _bFire);
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Components/StatusComponent.h"

// Sets default values for this component's properties
UStatusComponent::UStatusComponent()
{

}


// Called when the game starts
void UStatusComponent::BeginPlay()
{
	Super::BeginPlay();
	
}

void UStatusComponent::SetZoomin(bool _bZoomin)
{
	bZoomIn = _bZoomin;
}

void UStatusComponent::SetReload(bool _bReload)
{
	bReload = _bReload;
}

void UStatusComponent::SetRun(bool _bRun)
{
	bRun = _bRun;
}

void UStatusComponent::SetDie(bool _bDie)
{
	bDie = _bDie;
}

void UStatusComponent::SetFire(bool _bFire)
{
	bFire = _bFire;
}


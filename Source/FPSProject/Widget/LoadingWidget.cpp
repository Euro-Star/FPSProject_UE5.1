// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/LoadingWidget.h"
#include "Components/ProgressBar.h"

void ULoadingWidget::UpdateLoadingBar(float Percent)
{
	LoadingBar->SetPercent(Percent);
}

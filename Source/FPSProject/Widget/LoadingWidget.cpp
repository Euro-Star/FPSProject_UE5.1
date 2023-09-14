// Fill out your copyright notice in the Description page of Project Settings.


#include "Widget/LoadingWidget.h"
#include "Components/ProgressBar.h"


void ULoadingWidget::UpdateLoadingBar(float _Percent, bool bComplete)
{
	if (bComplete)
	{
		Percent = 1.0f;
	}

	LoadingBar->SetPercent(_Percent);
}

void ULoadingWidget::FakeLoading()
{
	GetWorld()->GetTimerManager().SetTimer(LoadingTimer, FTimerDelegate::CreateLambda([=]() {
		{
			if (Percent > 0.8f)
			{
				GetWorld()->GetTimerManager().ClearTimer(LoadingTimer);
			}
			else if (Percent < 0.8f)
			{
				Percent += 0.05f;
				UpdateLoadingBar(Percent);
			}
		}
		}), 0.05f, true, 1.0f);
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "HUDWidget.h"

void UHUDWidget::SetHealthPercent(float NewPercent)
{
	if (NewPercent >= 0.0f && NewPercent <= 1.0f) {
		HealthBar->SetPercent(NewPercent);
	}
}

// Fill out your copyright notice in the Description page of Project Settings.

#include "InGameHUD.h"

AInGameHUD::AInGameHUD()
{
}

void AInGameHUD::DrawHUD()
{
	Super::DrawHUD();
}

void AInGameHUD::BeginPlay()
{
	Super::BeginPlay();
	if (comboWidget==nullptr)
	{
		comboWidget = CreateWidget<UComboWidget>(GetWorld(), comboWidgetClass);
		if (comboWidget)
		{
			comboWidget->AddToViewport();
		}
	}
}

void AInGameHUD::Tick(float Delta)
{
	Super::Tick(Delta);
}

void AInGameHUD::UpdateComboCount(int32 value)
{
	if (comboWidget)
	{
		comboWidget->UpdateComboCount(value);
	}
}

void AInGameHUD::ResetCombo()
{
	if (comboWidget)
	{
		comboWidget->ResetCombo();
	}
}

void AInGameHUD::UpdateNodeName(FString string)
{
	if (comboWidget == nullptr)
	{
		comboWidget = CreateWidget<UComboWidget>(GetWorld(), comboWidgetClass);
		comboWidget->AddToViewport();
	}
		comboWidget->UpdateNodeName(string);
	
	
	
	
}

void AInGameHUD::CreateWidgets(FString string)
{
	comboWidget->CreateWidgets(string);
}


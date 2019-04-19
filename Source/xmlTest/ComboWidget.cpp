// Fill out your copyright notice in the Description page of Project Settings.

#include "ComboWidget.h"

UComboWidget::UComboWidget(const FObjectInitializer& ObjectInitializer):Super(ObjectInitializer)
{

}

void UComboWidget::NativeConstruct()
{
	Super::NativeConstruct();
}

void UComboWidget::UpdateComboCout(int value)
{
	if (TXTCombo->Visibility == ESlateVisibility::Hidden)
	{
		TXTCombo->SetVisibility(ESlateVisibility::Visible);
	}
	TXTCombo->SetText(FText::FromString(FString::FromInt(value) + "x Combo"));
}
void UComboWidget::ReserCombo()
{
	if (TXTCombo)
	{
		TXTCombo->SetVisibility(ESlateVisibility::Hidden);
	}
}

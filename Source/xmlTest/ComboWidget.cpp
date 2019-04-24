// Fill out your copyright notice in the Description page of Project Settings.

#include "ComboWidget.h"

UComboWidget::UComboWidget(const FObjectInitializer& ObjectInitializer):UUserWidget(ObjectInitializer)
{

}


void UComboWidget::NativeConstruct()
{
	UUserWidget::NativeConstruct();
}

void UComboWidget::UpdateComboCount(int value)
{
	if (TXTCombo->Visibility == ESlateVisibility::Hidden)
	{
		TXTCombo->SetVisibility(ESlateVisibility::Visible);
	}
	TXTCombo->SetText(FText::FromString(FString::FromInt(value) + "x Combo"));
}
void UComboWidget::ResetCombo()
{
	if (TXTCombo)
	{
		TXTCombo->SetVisibility(ESlateVisibility::Hidden);
	}
}

void UComboWidget::UpdateNodeName(FString& string)
{
	FText toText = FText::FromString(string);
	nodeName->SetText(toText);
}

void UComboWidget::CreateWidgets(FString string)
{
	UTextBlock* textBlock = WidgetTree->ConstructWidget<UTextBlock>();
	childrenVerticalBox->AddChild(textBlock);
	FText toText = FText::FromString(string);
	textBlock->SetText(toText);

}



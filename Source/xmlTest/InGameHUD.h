// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Components/WidgetComponent.h"
#include "ComboWidget.h"
#include "InGameHUD.generated.h"

/**
 * 
 */
UCLASS()
class XMLTEST_API AInGameHUD : public AHUD
{
	GENERATED_BODY()
public:
	AInGameHUD();

	virtual void DrawHUD() override;
	virtual void BeginPlay() override;
	virtual void Tick(float Delta) override;

	UFUNCTION()
		void UpdateComboCount(int32 value);
	UFUNCTION()
		void ResetCombo();
	void UpdateNodeName(FString string);
	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
		TSubclassOf<UUserWidget> comboWidgetClass;
	UComboWidget* comboWidget;
	void CreateWidgets(FString string);
	
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UObjectGlobals.h"
#include "Runtime/UMG/Public/Components/EditableTextBox.h"
#include "ComboWidget.generated.h"
enum class Direction { TOP_LEFT, TOP_RIGHT, BOTTOM_LEFT, BOTTOM_RIGHT };

// error!
enum class WindowsCorner { TOP_LEFT, TOP_RIGHT, BOTTOM_LEFT, BOTTOM_RIGHT };


/**
 * 
 */
UCLASS()
class XMLTEST_API UComboWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UComboWidget(const FObjectInitializer& ObjectInitializer);
	virtual void NativeConstruct() override;
	void UpdateComboCout(int value);
	void ReserCombo();

	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (BindWidget))
		class UEditableTextBox* TXTCombo;
};

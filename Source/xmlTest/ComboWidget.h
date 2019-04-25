// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UObjectGlobals.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components//CanvasPanel.h"
#include "ComboWidget.generated.h"




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
	void UpdateComboCount(int value);
	void ResetCombo();
	
	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (BindWidget))
		class UTextBlock* TXTCombo;
	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (BindWidget))
		class UTextBlock* nodeName;
	UPROPERTY(EditAnywhere, BluePrintReadWrite, meta = (BindWidget))
		class UVerticalBox* childrenVerticalBox;
	void UpdateNodeName(FString &string);
	//xmlReader supply for info
	class AXMLReadTest* xmlReader;
	void CreateWidgets(FString string);
};

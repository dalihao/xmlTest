// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "XmlUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class XMLTEST_API UXmlUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	//Bind Widget can use the same variable in blueprint userWidget
	UPROPERTY(EDitAnywhere, BlueprintReadWrite, meta = (BindWidget))
		class UButton* button;
	
};

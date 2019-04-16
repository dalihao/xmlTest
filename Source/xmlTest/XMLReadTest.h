// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "XMLParser/Public/XmlParser.h"
#include "XMLReadTest.generated.h"

//#define DEBUG
UCLASS()
class XMLTEST_API AXMLReadTest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AXMLReadTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	class FXmlFile *xmlFile = new FXmlFile(TEXT("D://test.xml"));
	//class FXmlFile *xmlFile = nullptr;
	class FXmlNode* pNode;
	//pNode=XmlFile->GetRootNode();
};

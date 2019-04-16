// Fill out your copyright notice in the Description page of Project Settings.

#include "XMLReadTest.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
AXMLReadTest::AXMLReadTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
#ifdef DEBUG
	if (xmlFile->IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("Read Correct"))

	}
	else
		UE_LOG(LogTemp, Warning, TEXT("Read incorrectly"))
#endif
#ifdef DEBUG
		pNode = xmlFile->GetRootNode();
	if(pNode)
	{
		FString tag = pNode->GetTag();
		UE_LOG(LogTemp, Warning, TEXT("Node Correct"))
			//UKismetSystemLibrary::PrintString();
			UKismetSystemLibrary::PrintString(this,tag);


	}
	else
		UE_LOG(LogTemp, Warning, TEXT("Node incorrectly"))
#endif
}

// Called when the game starts or when spawned
void AXMLReadTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AXMLReadTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


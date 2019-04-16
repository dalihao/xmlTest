// Fill out your copyright notice in the Description page of Project Settings.

#include "XMLReadTest.h"

// Sets default values
AXMLReadTest::AXMLReadTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
#if 0
	if (xmlFile->IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("Read Correct"))

	}
	else
		UE_LOG(LogTemp, Warning, TEXT("Read incorrectly"))
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


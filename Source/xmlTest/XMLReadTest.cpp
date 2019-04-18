// Fill out your copyright notice in the Description page of Project Settings.

#include "XMLReadTest.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetStringLibrary.h"

// Sets default values
AXMLReadTest::AXMLReadTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
#ifdef DEBUG
	if (xmlFile->IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("Read Correct"))
			pNode = xmlFile->GetRootNode();
		
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("Read incorrectly"))
#endif

		//Get Tag of root node
#ifdef DEBUG
		if (pNode)
		{
			tag = pNode->GetTag();

			UE_LOG(LogTemp, Warning, TEXT("Node Correct"))
				//UKismetSystemLibrary::PrintString(this, tag);


		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Node incorrectly"))
		}
#endif
			//Get root node children's information
#ifdef DEBUG
			
	firstChildNode = pNode->GetFirstChildNode();
	//UKismetSystemLibrary::PrintString(this, firstChildNode->GetTag());
	//rootNodeChildrenNodes = pNode->GetChildrenNodes();
	children = pNode->GetChildrenNodes();
	
	
#endif
		
}

// Called when the game starts or when spawned
void AXMLReadTest::BeginPlay()
{
	Super::BeginPlay();
	/*for (int i = 0; i < (pNode->GetChildrenNodes().Num()); i++)
	{
		UKismetSystemLibrary::PrintString(this);
	}*/
	const  int childrenCount = children.Num();
	for (int childIndex = 0; childIndex < childrenCount; childIndex++)
	{
		UKismetSystemLibrary::PrintString(this, children[childIndex]->GetTag());
		UKismetSystemLibrary::PrintString(this, children[childIndex]->GetContent());

	}
	
}

// Called every frame
void AXMLReadTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
#ifdef DEBUG
	/*UKismetSystemLibrary::PrintString(this, UKismetStringLibrary::Conv_IntToString(pNode->Children.Num()));
	UKismetSystemLibrary::PrintString(this, pNode->Tag);*/
	//UE_LOG(LogTemp, )
#endif

}


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
	children = pNode->GetChildrenNodes();
	
	
#endif
#if 1
	
		/*inGameHUD = Cast<AInGameHUD>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD());
	inGameHUD->UpdateComboCount(children.Num());*/
#endif
		
}

// Called when the game starts or when spawned
void AXMLReadTest::BeginPlay()
{
	Super::BeginPlay();
	//xmlRead 
	printALLNodes();
	
#if 0	
	//show rootNode's children nodes's information
	const  int childrenCount = children.Num();
	for (int childIndex = 0; childIndex < childrenCount; childIndex++)
	{
		UKismetSystemLibrary::PrintString(this, children[childIndex]->GetTag());
		UKismetSystemLibrary::PrintString(this, children[childIndex]->GetContent());

	}

#endif

#ifdef DEBUG
	//Cast to InGameHUD,and modify its properties

	
#endif
}

// Called every frame
void AXMLReadTest::Tick(float DeltaTime) 
{
	Super::Tick(DeltaTime);

#ifdef DEBUG
	
#endif

}

void AXMLReadTest::printALLNodes()
{
	//int level = 0;
	//TArray<FXmlNode*> children;
	//for (int i = 0; i < ((pNode->GetChildrenNodes()).Num()); i++)
	//{
	//	for (int j = 0; j < (pNode->GetChildrenNodes()[i]->GetChildrenNodes().Num()); j++)
	//	{
	//		UKismetSystemLibrary::PrintString(this, pNode->GetChildrenNodes()[i]->GetChildrenNodes()[j]->GetTag());

	//	}
	//	//UKismetSystemLibrary::PrintString(this,pNode->GetChildrenNodes()[i]->GetTag());
	//}
	inGameHUD = Cast<AInGameHUD>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD());
	if (inGameHUD)
	{
		FString tag = firstChildNode->GetTag();
		inGameHUD->UpdateNodeName(tag);
		int childrenCount = children.Num();
		for (int i = 0; i < childrenCount; i++)
		{
			inGameHUD->CreateWidgets(children[i]->GetTag());
		}

	}
	else
		UKismetSystemLibrary::PrintString(this, "nullptr");

}


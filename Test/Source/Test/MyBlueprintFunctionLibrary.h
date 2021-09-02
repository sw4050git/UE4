// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Blueprint/UserWidget.h"
#include "CPP_NpcBase.h"
#include "MyBlueprintFunctionLibrary.generated.h"



/**
 * 
 */
UCLASS()

class TEST_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "MyBlueprintFunctionLibrary")
	static void TestFunction(ACPP_NpcBase *Npc);
};

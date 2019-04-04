// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "Object.h"
#include "ObjectMacros.h"
#include "Casts.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HelperNodes.generated.h"

UCLASS()
class UHelperNodes : public UBlueprintFunctionLibrary
    {
        GENERATED_BODY()
UFUNCTION(BlueprintPure, Category = "Utilities", meta = (DeterminesOutputType = "Class"))
static UObject* GetDefaultObject(UClass* Class);

};

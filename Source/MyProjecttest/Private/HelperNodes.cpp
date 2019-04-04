// Fill out your copyright notice in the Description page of Project Settings.

#include <MyProjecttest/Public/HelperNodes.h>

#include "HelperNodes.h"
#include "MyProjecttest.h"

/*UObject* UHelperNodes::GetDefaultObject(TSubclassOf<UObject> ObjectClass)
{
    return GetDefaultObject(UClass* UClass);
}*/

UObject *UHelperNodes::GetDefaultObject(UClass *Class) {
    return Class->GetDefaultObject(true);
}



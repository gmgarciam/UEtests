// Fill out your copyright notice in the Description page of Project Settings.

#include "MyObject.h"
#include "UObject/ObjectMacros.h"




template< class T >
T* ConstructObject
        (
                UClass* Class,
                UObject* Outer = (UObject*)GetTransientPackage(),
                FName Name=NAME_None,
                EObjectFlags SetFlags=RF_NoFlags,
                UObject const* Template=NULL,
                bool bCopyTransientsFromClassDefaults=false,
                struct FObjectInstancingGraph* InstanceGraph=NULL
        );
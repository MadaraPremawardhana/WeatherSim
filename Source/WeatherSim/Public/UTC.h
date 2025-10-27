// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UTC.generated.h"

UCLASS()
class WEATHERSIM_API AUTC : public AActor
{
	GENERATED_BODY()
	
public:
    // Sets default values for this actor's properties
    AUTC();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable, Category = "Time Conversion")
    FDateTime ConvertToUTC(int32 UnixTimestamp, float TimezoneOffset);

};

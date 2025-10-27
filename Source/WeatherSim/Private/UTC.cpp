// Fill out your copyright notice in the Description page of Project Settings.


#include "UTC.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Misc/DateTime.h"

// Sets default values
AUTC::AUTC()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	

}

// Called when the game starts or when spawned
void AUTC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUTC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FDateTime AUTC::ConvertToUTC(int32 UnixTimestamp, float TimezoneOffset)
{

    // Make sure timestamp is in seconds (convert if needed)
    if (UnixTimestamp > 1000000000000) // looks like milliseconds
    {
        UnixTimestamp /= 1000;
    }

    // Calculate the timezone offset in seconds
    int32 TimezoneOffsetSeconds = FMath::RoundToInt(TimezoneOffset * 3600);

    // Convert from Unix timestamp (assumed UTC)
    FDateTime LocalDateTime = FDateTime::FromUnixTimestamp(UnixTimestamp);

    // Adjust if local time includes timezone offset (subtract to get UTC)
    FDateTime UtcDateTime = LocalDateTime - FTimespan(0, 0, TimezoneOffsetSeconds);

    return UtcDateTime;
}

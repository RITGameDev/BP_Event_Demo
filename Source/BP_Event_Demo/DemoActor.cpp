// Fill out your copyright notice in the Description page of Project Settings.

#include "DemoActor.h"

// Sets default values
ADemoActor::ADemoActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADemoActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADemoActor::SimpleBPFunction()
{
    UE_LOG( LogTemp, Warning, TEXT( __FUNCTION__ ) );
}

int32 ADemoActor::SimpleNativeEvent_Implementation( int32 aParam )
{
    UE_LOG( LogTemp, Warning, TEXT( __FUNCTION__ ) );
    return int32();
}

// Called every frame
void ADemoActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    PlayerBehaviorTick();

}

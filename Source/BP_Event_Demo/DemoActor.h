// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DemoActor.generated.h"

UCLASS()
class BP_EVENT_DEMO_API ADemoActor : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ADemoActor();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;


    /** this can be overridden in blueprints to add in some more functoinality if need be */
    UFUNCTION( BlueprintImplementableEvent, Category = "Demo Items", meta = ( DisplayName = "Player Behavior ~ Demo Item" ) )
    void PlayerBehaviorTick() const;



public:
    // Called every frame
    virtual void Tick( float DeltaTime ) override;

};

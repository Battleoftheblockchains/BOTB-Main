// Fill out your copyright notice in the Description page of Project Settings.


#include "BOTBCharBase.h"

// Sets default values
ABOTBCharBase::ABOTBCharBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABOTBCharBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABOTBCharBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABOTBCharBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


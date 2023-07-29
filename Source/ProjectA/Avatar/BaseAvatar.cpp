// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAvatar.h"

// Sets default values
ABaseAvatar::ABaseAvatar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseAvatar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseAvatar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseAvatar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


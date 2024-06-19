// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingCube.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"

// Sets default values
AMovingCube::AMovingCube()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Cube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));
	RootComponent = Cube;


	MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("CubePhysics"));
	JumpForce = 700;
	Is_Land = true;



	//CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("FloatingPawnMovement"));


}

// Called when the game starts or when spawned
void AMovingCube::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMovingCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!Is_Land)
	{
		if (GetActorLocation().Z <= 100.f)
		{
			Land();
		}
	}
}

void AMovingCube::MoveForward(float value)
{
	if (value != 0.0f)
	{
		FVector Forward = GetActorForwardVector();
		AddActorLocalOffset(Forward * value * 1000.0f*GetWorld()->DeltaRealTimeSeconds);
	}
		/*FVector Forward = GetActorForwardVector();
		AddActorLocalOffset(Forward * value * 100.0f*GetWorld()->DeltaRealTimeSeconds);*/
	/*	AddMovementInput(GetActorForwardVector() * value);*/

}
void AMovingCube::Right(float value)
{
	if (value != 0.0f) {
		FVector right = GetActorRightVector();
		AddActorLocalOffset(right * value * 1000.0f * GetWorld()->DeltaRealTimeSeconds);
	}
}
void AMovingCube::Jump()
{
	if (Is_Land)
	{
		FVector Jumpvelociy = FVector(0, 0, JumpForce);
		Cube->AddImpulse(Jumpvelociy, NAME_None, true);
		Is_Land = false;
	}
}

void AMovingCube::Land()
{
	Is_Land = true;
}


// Called to bind functionality to input
void AMovingCube::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AMovingCube::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("Right"), this, &AMovingCube::Right);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed,this, &AMovingCube::Jump);

}


// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Floater.generated.h"

UCLASS()
class FIRSTPROJECT_API AFloater : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloater();

	

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "ActorMeshComponents")
	UStaticMeshComponent* StaticMesh;

	// Location used by SetActorLocation() when BeginPlay() is called
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Floater Variables")
	FVector InitialLocation;

	// Location of the Actor when dragged in from the editor
	UPROPERTY(VisibleInstanceOnly, BlueprintReadWrite, Category = "Floater Variables")
	FVector PlacedLocation;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Floater Variables")
	FVector WorldOrigin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floater Variables")
	FVector InitialDirection;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Floater Variables")
	FVector InitialForce;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Floater Variables")
	FVector InitialTorque;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floater Variables")
	bool bShouldFloat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floater Variables")
	bool bInitiliazeFloaterLocations;

private:
	float RunningTime;

	float BaseZLocation;

public:

	// Amplitude
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floater Variables")
	float A;

	// Period
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floater Variables")
	float B;

	// Phase Shift
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floater Variables")
	float C;

	// Vertical Shift
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floater Variables")
	float D;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

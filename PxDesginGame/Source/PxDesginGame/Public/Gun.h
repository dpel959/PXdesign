// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

class AController;
class ABullet;

UCLASS()
class PXDESGINGAME_API AGun : public AActor
{
    GENERATED_BODY()
	
 public:	
	// Sets default values for this actor's properties
	AGun();

	void PullTrigger();

	void SetBulletType(int32 ToBulletType);
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

 protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

 private:
	// COMPONENT
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
	UParticleSystem* MuzzleFlash;
	
	// VARIABLE
	UPROPERTY(EditAnywhere)
	float MaxRange = 30000.0f;

	UPROPERTY(EditAnywhere)
	float Damage = 10.0f;

	UPROPERTY(EditAnywhere)
	USoundBase* MuzzleSound;

	// ProjectileBase
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="ProjectileBase", meta=(AllowPrivateAccess="true"))
	TSubclassOf<class AProjectileBase> ProjectileBaseClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="ProjectileBase", meta=(AllowPrivateAccess="true"))
	USceneComponent* ProjectileSpawnPoint;

	UPROPERTY()
	int32 bulletType;
	
	// Function
	bool GunTrace(FHitResult& Hit, FVector& ShotDirection);

	AController* GetOwnerController() const;

	

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectileBase.generated.h"

UENUM()
enum class BulletType
{
	UP,
	DOWN,
	RIGHT,
	LEFT,
	FORWARD,
	BACKWARD,
};


class UStaticMeshComponent;
class UProjectileMovementComponent;


UCLASS()
class PXDESGINGAME_API AProjectileBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectileBase();

        // Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetBulleType(int32 ToBulletType);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	// Function
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& hit);

	void SetGravity();
	
	// Variable
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta=(AllowPrivateAccess="true"))
	UProjectileMovementComponent* ProjectileMovement;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta=(AllowPrivateAccess="true"))
	UStaticMeshComponent* ProjectileMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Damage", meta=(AllowPrivateAccess="true"))
	TSubclassOf<UDamageType> DamageType;

	UPROPERTY(EditAnywhere)
	UParticleSystem* ImpactEffect;

	UPROPERTY(EditAnywhere)
	USoundBase* ImpactSound;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Damage", meta=(AllowPrivateAccess="true"))
	float MovementSpeed = 1000.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Damage", meta=(AllowPrivateAccess="true"))
	float Damage = 50.0;

	UPROPERTY(EditAnywhere)
	float gravityEffectSpeed = 2000.0f;

	UPROPERTY(EditAnywhere, Category="BulletType")
	BulletType bulletType;


};

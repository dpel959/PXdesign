// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileBase.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GravityMoveComponent.h"
#include "Gun.h"

// Sets default values
AProjectileBase::AProjectileBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	ProjectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BulletMesh"));
	RootComponent = ProjectileMesh;
	
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Bullet Movement"));
	ProjectileMovement->InitialSpeed = MovementSpeed;
	ProjectileMovement->MaxSpeed = MovementSpeed;
	InitialLifeSpan = 3.0f; // 3ÃÊÈÄ ÇØ´ç Actor ÆÄ±«
}

void AProjectileBase::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& hit)
{
	AActor* MyOwner = GetOwner();
	if(!MyOwner)
		return;
	AActor* Player = MyOwner->GetOwner();
	
	if(OtherActor && OtherActor != this && OtherActor != MyOwner)
	{
		UGravityMoveComponent* GravityMoveComponent = OtherActor->FindComponentByClass<UGravityMoveComponent>();
		if(GravityMoveComponent)
		{
			// Ãæµ¹ ÈÄ ÀÌµ¿ Ã³¸®
			GravityMoveComponent->SetStateMove();
			switch(bulletType)
			{
			case BulletType::UP:
				GravityMoveComponent->AddForceAttack(gravityEffectSpeed/3*2, Player->GetActorUpVector());
				break;
			case BulletType::DOWN:
				GravityMoveComponent->AddForceAttack(-1 * gravityEffectSpeed/3*2, Player->GetActorUpVector());
				break;
			case BulletType::LEFT:
				GravityMoveComponent->AddForceAttack(gravityEffectSpeed, Player->GetActorRightVector());
				break;
			case BulletType::RIGHT:
				GravityMoveComponent->AddForceAttack(-1 *gravityEffectSpeed, Player->GetActorRightVector());
				break;
			case BulletType::FORWARD:
				GravityMoveComponent->AddForceAttack(gravityEffectSpeed, Player->GetActorForwardVector());
				break;
			case BulletType::BACKWARD:
				GravityMoveComponent->AddForceAttack(-1 *gravityEffectSpeed, Player->GetActorForwardVector());
				break;
			}
		}
		// ÃÑ¾Ë ÂøÅº È¿°ú »ý¼º
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(),ImpactEffect, hit.Location, NormalImpulse.Rotation());
		// ÃÑ¾Ë ÂøÅº ÁöÁ¡¿¡ ÂøÅº ¼Ò¸® »ý¼º
		UGameplayStatics::SpawnSoundAtLocation(GetWorld(), ImpactSound, hit.Location);
	}
	Destroy();
	
}


// Called when the game starts or when spawned
void AProjectileBase::BeginPlay()
{
	Super::BeginPlay();

	// Binding
	ProjectileMesh->OnComponentHit.AddDynamic(this, &AProjectileBase::OnHit);
}

// Called every frame
void AProjectileBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectileBase::SetBulleType(int32 ToBulletType)
{
	switch(ToBulletType)
	{
	case 1:
		bulletType = BulletType::UP;
		break;
	case 2:
		bulletType = BulletType::DOWN;
		break;
	case 3:
		bulletType = BulletType::RIGHT;
		break;
	case 4:
		bulletType = BulletType::LEFT;
		break;
	case 5:
		bulletType = BulletType::FORWARD;
		break;
	case 6:
		bulletType = BulletType::BACKWARD;
		break;
	}
}





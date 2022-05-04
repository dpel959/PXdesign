// Fill out your copyright notice in the Description page of Project Settings.


#include "Gun.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "FTTPlayerCharacter.h"
#include "ProjectileBase.h"
#include "DrawDebugHelpers.h"


// Sets default values
AGun::AGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);
	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);

	// Bullet
	ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Bullet"));
	ProjectileSpawnPoint->SetupAttachment(Root);
}

AController* AGun::GetOwnerController() const
{
	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if(!OwnerPawn)
		return nullptr;
	return OwnerPawn->GetController();
}

// Line Trace로 총알 목표 지점 계산
void AGun::PullTrigger()
{
	UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, Mesh, TEXT("MuzzleFlashSocket"));
	UGameplayStatics::SpawnSoundAttached(MuzzleSound, Mesh, TEXT("MuzzleFlashSocket"));
	
	FHitResult hit;
	FVector ShotDirection; // 총알이 날라온 방향의 반대 방향 벡터

	// 총알 목표 지점 계산
	bool bSuccess = GunTrace(hit, ShotDirection);

	// 목표지점으로 총알 발사
	if(bSuccess)
	{
		if(!ProjectileBaseClass)
			return;
		FVector SpawnLocation = ProjectileSpawnPoint->GetComponentLocation();
		FRotator SpawnRotation = (hit.Location - SpawnLocation).GetUnsafeNormal().Rotation();
		AProjectileBase* Projectile = GetWorld()->SpawnActor<AProjectileBase>(ProjectileBaseClass, SpawnLocation, SpawnRotation);
		Projectile->SetBulleType(bulletType);
		Projectile->SetOwner(this);
	}
}


bool AGun::GunTrace(FHitResult& Hit, FVector& ShotDirection)
{
	AController* OwnerController = GetOwnerController();
	if(!OwnerController)
		return false;
	
	FVector PlayerLocation;
	FRotator PlayerRotation;
	OwnerController->GetPlayerViewPoint(PlayerLocation, PlayerRotation);
	ShotDirection = -PlayerRotation.Vector(); // 총을 쏜 방향의 반대방향을 알기 위해 -> out 파라미터
	
	FVector EndLocation = PlayerLocation + PlayerRotation.Vector() * MaxRange;
	FCollisionQueryParams CollisionQueryParams(TEXT(""), false, this);
	CollisionQueryParams.AddIgnoredActor(GetOwner()); // Ignore Actor 추가
	
	return GetWorld()->LineTraceSingleByChannel(
		Hit, // out 파라미터
		PlayerLocation,
		EndLocation,
		ECollisionChannel::ECC_GameTraceChannel11,
		CollisionQueryParams
	);
}

void AGun::SetBulletType(int32 ToBulletType)
{
	bulletType = ToBulletType;
}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


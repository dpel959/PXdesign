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

// Line Trace�� �Ѿ� ��ǥ ���� ���
void AGun::PullTrigger()
{
	UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, Mesh, TEXT("MuzzleFlashSocket"));
	UGameplayStatics::SpawnSoundAttached(MuzzleSound, Mesh, TEXT("MuzzleFlashSocket"));
	
	FHitResult hit;
	FVector ShotDirection; // �Ѿ��� ����� ������ �ݴ� ���� ����

	// �Ѿ� ��ǥ ���� ���
	bool bSuccess = GunTrace(hit, ShotDirection);

	// ��ǥ�������� �Ѿ� �߻�
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
	ShotDirection = -PlayerRotation.Vector(); // ���� �� ������ �ݴ������ �˱� ���� -> out �Ķ����
	
	FVector EndLocation = PlayerLocation + PlayerRotation.Vector() * MaxRange;
	FCollisionQueryParams CollisionQueryParams(TEXT(""), false, this);
	CollisionQueryParams.AddIgnoredActor(GetOwner()); // Ignore Actor �߰�
	
	return GetWorld()->LineTraceSingleByChannel(
		Hit, // out �Ķ����
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


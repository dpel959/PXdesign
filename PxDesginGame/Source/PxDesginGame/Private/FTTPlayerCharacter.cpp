// Fill out your copyright notice in the Description page of Project Settings.

#include "FTTPlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Gun.h"


// Sets default values
AFTTPlayerCharacter::AFTTPlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(RootComponent);
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void AFTTPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
        // Setting Gun
	Gun = GetWorld()->SpawnActor<AGun>(GunClass);
	GetMesh()->HideBoneByName(TEXT("weapon_r"), EPhysBodyOp::PBO_None);
	Gun->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("WeaponSocket"));
	// Actor ���̿� ������ ������ ������(Owner)�� �ִ�. �ַ� ��Ƽ�÷��� �Ǵ� �������� ���.. ���⼭�� ���� �����ϴ� ĳ���Ͱ� ������ �� �ʿ䰡 ������ ��� ����(������ ó��)
	Gun->SetOwner(this);
	// Health
	Health = MaxHealth;

	Death = false;

	// �ʱ� ������ UP
	bulletType = PlayerBulletType::UP;
	
}

// Called to bind functionality to input
void AFTTPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// AXIS
	PlayerInputComponent->BindAxis("MoveForward", this, &AFTTPlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFTTPlayerCharacter::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &AFTTPlayerCharacter::LookUp);
	PlayerInputComponent->BindAxis("LookRight", this, &AFTTPlayerCharacter::LookRight);

	// ACTION
	PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &AFTTPlayerCharacter::Jump);
    PlayerInputComponent->BindAction("Fire", EInputEvent::IE_Pressed, this, &AFTTPlayerCharacter::Shoot);
	PlayerInputComponent->BindAction("UP", EInputEvent::IE_Pressed, this, &AFTTPlayerCharacter::SetBulletTypeUP);
	PlayerInputComponent->BindAction("DOWN", EInputEvent::IE_Pressed, this, &AFTTPlayerCharacter::SetBulletTypeDown);
	PlayerInputComponent->BindAction("LEFT", EInputEvent::IE_Pressed, this, &AFTTPlayerCharacter::SetBulletTypeLeft);
	PlayerInputComponent->BindAction("RIGHT", EInputEvent::IE_Pressed, this, &AFTTPlayerCharacter::SetBulletTypeRight);
	PlayerInputComponent->BindAction("FORWARD", EInputEvent::IE_Pressed, this, &AFTTPlayerCharacter::SetBulletTypeForward);
	PlayerInputComponent->BindAction("BACKWARD", EInputEvent::IE_Pressed, this, &AFTTPlayerCharacter::SetBulletTypeBackward);

}

void AFTTPlayerCharacter::MoveForward(float AxisValue)
{
	AddMovementInput(GetActorForwardVector() * AxisValue);
}

void AFTTPlayerCharacter::MoveRight(float AxisValue)
{
	AddMovementInput(GetActorRightVector() * AxisValue);
}

// ������ ������ ĳ���� �ü� ���Ϸ� ȸ��
void AFTTPlayerCharacter::LookUp(float AxisValue)
{
	AddControllerPitchInput(AxisValue * RotationRate * GetWorld()->GetDeltaSeconds());
}

// ������ ������ ĳ���� �ü� �¿�� ȸ��
void AFTTPlayerCharacter::LookRight(float AxisValue)
{
	AddControllerYawInput(AxisValue * RotationRate * GetWorld()->GetDeltaSeconds());
}

void AFTTPlayerCharacter::SetBulletTypeUP()
{
	bulletType = PlayerBulletType::UP;
	Gun->SetBulletType(1);
}

void AFTTPlayerCharacter::SetBulletTypeDown()
{
	bulletType = PlayerBulletType::DOWN;
	Gun->SetBulletType(2);
}

void AFTTPlayerCharacter::SetBulletTypeLeft()
{
	bulletType = PlayerBulletType::LEFT;
	Gun->SetBulletType(3);
}

void AFTTPlayerCharacter::SetBulletTypeRight()
{
	bulletType = PlayerBulletType::RIGHT;
	Gun->SetBulletType(4);
}

void AFTTPlayerCharacter::SetBulletTypeForward()
{
	bulletType = PlayerBulletType::FORWARD;
	Gun->SetBulletType(5);
}


void AFTTPlayerCharacter::SetBulletTypeBackward()
{
	bulletType = PlayerBulletType::BACKWARD;
	Gun->SetBulletType(6);
}

void AFTTPlayerCharacter::Shoot()
{
	Gun->PullTrigger();
}

float AFTTPlayerCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
    float DamageToApply = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
    DamageToApply = FMath::Min(Health, DamageToApply);
    Health -= DamageToApply;
	if (Health <= 0)
		Death = true;
    return DamageToApply;
}

bool AFTTPlayerCharacter::IsDead() const
{
    return Death;
}

float AFTTPlayerCharacter::GetHeatlthPercent() const
{
	return Health / MaxHealth;
}

void AFTTPlayerCharacter::Jump()
{
	Super::Jump();
}


// Called every frame
void AFTTPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

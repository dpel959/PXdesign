// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FTTPlayerCharacter.generated.h"

UENUM(BlueprintType)
enum class PlayerBulletType : uint8
{
	UP,
	DOWN,
	RIGHT,
	LEFT,
	FORWARD,
	BACKWARD,
};

class USpringArmComponent;
class UCameraComponent;
class AGun;


UCLASS()
class PXDESGINGAME_API AFTTPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFTTPlayerCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// TakeDamage Function Override
	UFUNCTION(BlueprintCallable)
	virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	UFUNCTION(BlueprintPure)
	bool IsDead() const;

	UFUNCTION(BlueprintPure)
	float GetHeatlthPercent() const;

	void Shoot();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	// FUNCTION
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void LookUp(float AxisValue);
	void LookRight(float AxisValue);
	
	void SetBulletTypeUP();
	void SetBulletTypeDown();
	void SetBulletTypeLeft();
	void SetBulletTypeRight();
	void SetBulletTypeForward();
	void SetBulletTypeBackward();
	

	// VARIABLE
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Components", meta=(AllowPrivateAccess="true"))
	USpringArmComponent* SpringArm;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Components", meta=(AllowPrivateAccess="true"))
	UCameraComponent* Camera;
	
	UPROPERTY(EditAnywhere)
	float RotationRate = 10.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Death", meta=(AllowPrivateAccess="true"))
	bool Death;

    // 총의 클래스 정보
	UPROPERTY(EditAnywhere, Category="Gun")
	TSubclassOf<class AGun> GunClass;

	// 실제 총을 가리키는 포인터
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Gun", meta=(AllowPrivateAccess="true"))
	AGun* Gun;
	
	// HP
	UPROPERTY(EditDefaultsOnly)
	float MaxHealth = 100.0f;

	UPROPERTY(VisibleAnywhere)
	float Health;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Attack", meta=(AllowPrivateAccess="true"))
	bool IsShooting;

	// Function
	void Jump() override;

	// BulleType

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category="Bullet", meta=(AllowPrivateAccess="true"))
	PlayerBulletType bulletType;

};

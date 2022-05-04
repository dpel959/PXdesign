// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GravityMoveComponent.generated.h"

enum class EState
{
	IDLE,
	MOVE,
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PXDESGINGAME_API UGravityMoveComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGravityMoveComponent();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetStateIdle();
	void SetStateMove();
	void AddForceAttack(float _speed, FVector _direction);
	

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	// VARIABLE
	EState currentState = EState::IDLE;
	FTimerHandle GravityMoveTimerHandle;

	UPROPERTY(EditAnywhere)
	float speed;

	UPROPERTY(EditAnywhere)
	FVector direction = FVector::ZeroVector;
		
};

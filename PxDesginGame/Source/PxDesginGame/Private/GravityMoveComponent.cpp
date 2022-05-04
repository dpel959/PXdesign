// Fill out your copyright notice in the Description page of Project Settings.


#include "GravityMoveComponent.h"
#include "GameFramework/Actor.h"
#include "DestructibleComponent.h"

// Sets default values for this component's properties
UGravityMoveComponent::UGravityMoveComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGravityMoveComponent::BeginPlay()
{
	Super::BeginPlay();

}


// Called every frame
void UGravityMoveComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UGravityMoveComponent::SetStateIdle()
{
	currentState = EState::IDLE;
}

void UGravityMoveComponent::SetStateMove()
{
	currentState = EState::MOVE;

	GetWorld()->GetTimerManager().SetTimer(GravityMoveTimerHandle, this, &UGravityMoveComponent::SetStateIdle, 3.0f);
}

void UGravityMoveComponent::AddForceAttack(float _speed, FVector _direction)
{
	speed = _speed;
	direction = _direction;

	switch (currentState)
	{
		case EState::IDLE:
		{
			break;	
		}
		case EState::MOVE:
		{
			AActor* OwnerActor = GetOwner();
			UStaticMeshComponent* Mesh = OwnerActor->FindComponentByClass<UStaticMeshComponent>();
			//UDestructibleComponent* DMesh = OwnerActor->FindComponentByClass<UDestructibleComponent>();
			//if(DMesh)
			//{
			//	DMesh->AddImpulse(direction * speed, NAME_None, true);
			//}
			if(Mesh)
			{
				Mesh->AddImpulse(direction * speed, NAME_None, true);
			}
		}
		
	}
}

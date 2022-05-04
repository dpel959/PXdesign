// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FTTPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class PXDESGINGAME_API AFTTPlayerController : public APlayerController
{
	GENERATED_BODY()

    public:
    virtual void GameHasEnded(AActor* EndGameFocus, bool bIsWinner) override;

protected:
    virtual void BeginPlay() override;

private:
    UPROPERTY()
    UUserWidget* Hud;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<class UUserWidget> HudClass; 
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<class UUserWidget> WinScreenClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<class UUserWidget> LoseScreenClass;

    UPROPERTY(EditAnywhere)
    float RestartDelay = 5.0f;

    FTimerHandle RestartTimer;
	
};

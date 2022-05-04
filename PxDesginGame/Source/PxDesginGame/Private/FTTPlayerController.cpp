// Fill out your copyright notice in the Description page of Project Settings.


#include "FTTPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "TimerManager.h"

void AFTTPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// CrossHair �����ϱ�
	Hud = CreateWidget(this, HudClass);
	if(Hud != nullptr)
	{
	    Hud->AddToViewport();
	}
}

void AFTTPlayerController::GameHasEnded(AActor* EndGameFocus, bool bIsWinner)
{
	Super::GameHasEnded(EndGameFocus, bIsWinner);

	// CrossHair ȭ�鿡�� �Ⱥ��̰��ϱ�
	Hud->RemoveFromViewport();
	if(bIsWinner)
	{
		// Win Screen UI �����ϱ�
		UUserWidget* WinScreen = CreateWidget(this, WinScreenClass); // (this�� ����UI �����ϴ� ��ü, ���� UI Ŭ���� ����)
		if(WinScreen != nullptr)
		{
			WinScreen->AddToViewport();
		}
		
	}
	else
	{
		// Game Over UI �����ϱ�
		UUserWidget* LoseScreen = CreateWidget(this, LoseScreenClass); // (this�� ����UI �����ϴ� ��ü, ���� UI Ŭ���� ����)
		if(LoseScreen != nullptr)
		{
			LoseScreen->AddToViewport();
		}
	}
	
	GetWorld()->GetTimerManager().SetTimer(RestartTimer, this, &APlayerController::RestartLevel, RestartDelay);

}

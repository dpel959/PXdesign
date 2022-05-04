// Fill out your copyright notice in the Description page of Project Settings.


#include "FTTPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "TimerManager.h"

void AFTTPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// CrossHair 생성하기
	Hud = CreateWidget(this, HudClass);
	if(Hud != nullptr)
	{
	    Hud->AddToViewport();
	}
}

void AFTTPlayerController::GameHasEnded(AActor* EndGameFocus, bool bIsWinner)
{
	Super::GameHasEnded(EndGameFocus, bIsWinner);

	// CrossHair 화면에서 안보이게하기
	Hud->RemoveFromViewport();
	if(bIsWinner)
	{
		// Win Screen UI 생성하기
		UUserWidget* WinScreen = CreateWidget(this, WinScreenClass); // (this는 위젯UI 소유하는 객체, 위젯 UI 클래스 정보)
		if(WinScreen != nullptr)
		{
			WinScreen->AddToViewport();
		}
		
	}
	else
	{
		// Game Over UI 생성하기
		UUserWidget* LoseScreen = CreateWidget(this, LoseScreenClass); // (this는 위젯UI 소유하는 객체, 위젯 UI 클래스 정보)
		if(LoseScreen != nullptr)
		{
			LoseScreen->AddToViewport();
		}
	}
	
	GetWorld()->GetTimerManager().SetTimer(RestartTimer, this, &APlayerController::RestartLevel, RestartDelay);

}

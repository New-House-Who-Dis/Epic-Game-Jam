// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyMainMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class EPICGAMEJAM22_API UMyMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()

		virtual bool Initialize();

		UPROPERTY(meta = (BindWidget))
			class UCanvasPanel* Canvas;

		UPROPERTY(meta = (BindWidget))
			class UButton* StartButton;

		UPROPERTY(meta = (BindWidget))
			class UButton* OptionsButton;

		UPROPERTY(meta = (BindWidget))
			class UButton* ExitButton;

		UFUNCTION()
			void StartButtonClicked();

		UFUNCTION()
			void ExitButtonClicked();
	
};

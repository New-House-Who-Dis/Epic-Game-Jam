// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class EPICGAMEJAM22_API UMyUserWidget : public UUserWidget
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

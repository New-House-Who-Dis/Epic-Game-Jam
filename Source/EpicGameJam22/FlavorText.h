// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FlavorText.generated.h"

/**
 * 
 */
UCLASS()
class EPICGAMEJAM22_API UFlavorText : public UUserWidget
{
	GENERATED_BODY()

		virtual bool Initialize();

	UPROPERTY(meta = (BindWidget))
		class UTextBlock* Description;

	UPROPERTY(meta = (BindWidget))
		class UButton* Close;

	UPROPERTY(meta = (BindWidget))
		class UCanvasPanel* Canvas;
	
	UFUNCTION()
		void ExitUI();
};

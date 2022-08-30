// Fill out your copyright notice in the Description page of Project Settings.


#include "FlavorText.h"
#include "Components/Button.h"
#include "Components/CanvasPanel.h"
#include "Components/TextBlock.h"

bool UFlavorText::Initialize()
{
	Super::Initialize();

	Close->OnClicked.AddDynamic(this, &UFlavorText::ExitUI);
	return true;
}

void UFlavorText::ExitUI() 
{
	TArray<UWidget*> widgets = Canvas->GetAllChildren();
	for (int32 i = 0; i < widgets.Num(); i++) 
	{
		widgets[i]->SetVisibility(ESlateVisibility::Hidden);
	}
}
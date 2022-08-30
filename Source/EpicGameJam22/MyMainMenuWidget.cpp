// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMainMenuWidget.h"
#include "Components/Button.h"
#include "Components/CanvasPanel.h"
#include "Kismet/KismetSystemLibrary.h"

bool UMyMainMenuWidget::Initialize()
{
	Super::Initialize();
	StartButton->OnClicked.AddDynamic(this, &UMyMainMenuWidget::StartButtonClicked);
	ExitButton->OnClicked.AddDynamic(this, &UMyMainMenuWidget::ExitButtonClicked);
	return true;
}

void UMyMainMenuWidget::StartButtonClicked() 
{
	TArray<UWidget*> widgets;
	widgets = Canvas->GetAllChildren();
	for (int32 x = 0; x < widgets.Num(); x++)
		widgets[x]->SetVisibility(ESlateVisibility::Hidden);
}

void UMyMainMenuWidget::ExitButtonClicked()
{
	//FGenericPlatformMisc::RequestExit(true);
	UKismetSystemLibrary::QuitGame(ExitButton, 0, EQuitPreference::Quit, false);
}

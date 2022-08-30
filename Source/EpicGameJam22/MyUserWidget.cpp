// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget.h"
#include "Components/Button.h"
#include "Components/CanvasPanel.h"
#include "Kismet/KismetSystemLibrary.h"

bool UMyUserWidget::Initialize()
{
	Super::Initialize();
	StartButton->OnClicked.AddDynamic(this, &UMyUserWidget::StartButtonClicked);
	ExitButton->OnClicked.AddDynamic(this, &UMyUserWidget::ExitButtonClicked);
	return true;
}

void UMyUserWidget::StartButtonClicked() 
{
	TArray<UWidget*> widgets;
	widgets = Canvas->GetAllChildren();
	for (int32 x = 0; x < widgets.Num(); x++)
		widgets[x]->SetVisibility(ESlateVisibility::Hidden);
}

void UMyUserWidget::ExitButtonClicked()
{
	//FGenericPlatformMisc::RequestExit(true);
	UKismetSystemLibrary::QuitGame(ExitButton, 0, EQuitPreference::Quit, false);
}

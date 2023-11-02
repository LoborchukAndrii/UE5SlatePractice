// Fill out your copyright notice in the Description page of Project Settings.


#include "SimpleSHUD.h"
#include "Slates/SSimpleMainMenu.h"


void ASimpleSHUD::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine && GEngine->GameViewport)
	{
		MainMenuWidget = SNew(SSimpleMainMenu).OwningHUD(this);
		GEngine->GameViewport->AddViewportWidgetContent(SAssignNew(MainMenuContainer, SWeakWidget).PossiblyNullContent(MainMenuWidget.ToSharedRef()));
	}
}

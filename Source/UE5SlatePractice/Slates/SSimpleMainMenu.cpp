// Fill out your copyright notice in the Description page of Project Settings.


#include "SSimpleMainMenu.h"

#define LOCTEXT_NAMESPACE "Main Menu"

void SSimpleMainMenu::Construct(const FArguments& InArgs)
{
	const FMargin ContentPadding = FMargin(500.0f, 300.0f);

	const FText GameTitle = LOCTEXT("SlateText", "UE5 slate practice");
	const FText StartGameText = LOCTEXT("SlateText", "Start");
	const FText SettingsText = LOCTEXT("SlateText", "Settings");
	const FText ExiText = LOCTEXT("SlateText", "Exit");
	
	ChildSlot[
		SNew(SOverlay)
		
		+ SOverlay::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		[
			SNew(SImage)
			.ColorAndOpacity(FColor::Black)
		]
		
		+ SOverlay::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		.Padding(ContentPadding)
		[
			SNew(SVerticalBox)
			
			+ SVerticalBox::Slot()
			[
				SNew(STextBlock)
				.Text(GameTitle)
				.Justification(ETextJustify::Center)
			]
			
			+ SVerticalBox::Slot()
			[
				SNew(SButton)
				[
					SNew(STextBlock)
					.Text(StartGameText)
					.Justification(ETextJustify::Center)
				]
			]
			
			+ SVerticalBox::Slot()
			[
				SNew(SButton)
				[
					SNew(STextBlock)
					.Text(SettingsText)
					.Justification(ETextJustify::Center)
				]
			]

			+ SVerticalBox::Slot()
			[
				SNew(SButton)
				[
					SNew(STextBlock)
					.Text(ExiText)
					.Justification(ETextJustify::Center)
				]
				
			]
		]	
		];
}

#undef LOCTEXT_NAMESPACE

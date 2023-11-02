// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SlateBasics.h"
#include "SlateExtras.h"


/**
 * 
 */
class UE5SLATEPRACTICE_API SSimpleMainMenu : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS( SSimpleMainMenu ){}

	SLATE_ARGUMENT(TWeakObjectPtr<class ASimpleSHUD>, OwningHUD)
	
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

	TWeakObjectPtr<class ASlateHUD> OwningHUD;

	virtual bool SupportsKeyboardFocus() const override { return true; };
};

////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisPropertyMetadata.h"

using namespace Noesis;
using namespace Gui;

UNoesisPropertyMetadata::UNoesisPropertyMetadata(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisPropertyMetadata::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::PropertyMetadata* NoesisPropertyMetadata = NsDynamicCast<Noesis::Gui::PropertyMetadata*>(InNoesisComponent);
	check(NoesisPropertyMetadata);
}

void UNoesisPropertyMetadata::ClearInheritedValues()
{
	Noesis::Gui::PropertyMetadata* NoesisPropertyMetadata = NsDynamicCast<Noesis::Gui::PropertyMetadata*>(NoesisComponent.GetPtr());
	check(NoesisPropertyMetadata);
	return NoesisPropertyMetadata->ClearInheritedValues();
}

void UNoesisPropertyMetadata::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::PropertyMetadata* NoesisPropertyMetadata = NsDynamicCast<Noesis::Gui::PropertyMetadata*>(NoesisComponent.GetPtr());
	check(NoesisPropertyMetadata)


}

void UNoesisPropertyMetadata::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::PropertyMetadata* NoesisPropertyMetadata = NsDynamicCast<Noesis::Gui::PropertyMetadata*>(NoesisComponent.GetPtr());
	check(NoesisPropertyMetadata)


}


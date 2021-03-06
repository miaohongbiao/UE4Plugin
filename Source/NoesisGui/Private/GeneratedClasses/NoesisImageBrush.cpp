////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisImageBrush.h"

using namespace Noesis;
using namespace Gui;

UNoesisImageBrush::UNoesisImageBrush(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisImageBrush::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::ImageBrush* NoesisImageBrush = NsDynamicCast<Noesis::Gui::ImageBrush*>(InNoesisComponent);
	check(NoesisImageBrush);
}

class UNoesisImageSource* UNoesisImageBrush::GetImageSource()
{
	Noesis::Gui::ImageBrush* NoesisImageBrush = NsDynamicCast<Noesis::Gui::ImageBrush*>(NoesisComponent.GetPtr());
	check(NoesisImageBrush);
	return CastChecked<UNoesisImageSource>(Instance->FindUnrealComponentForNoesisComponent(NoesisImageBrush->GetImageSource()));
}

void UNoesisImageBrush::SetImageSource(class UNoesisImageSource* InImageSource)
{
	Noesis::Gui::ImageBrush* NoesisImageBrush = NsDynamicCast<Noesis::Gui::ImageBrush*>(NoesisComponent.GetPtr());
	check(NoesisImageBrush);
	NoesisImageBrush->SetImageSource(NsDynamicCast<ImageSource*>(InImageSource->NoesisComponent.GetPtr()));
}

void UNoesisImageBrush::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::ImageBrush* NoesisImageBrush = NsDynamicCast<Noesis::Gui::ImageBrush*>(NoesisComponent.GetPtr());
	check(NoesisImageBrush)


}

void UNoesisImageBrush::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::ImageBrush* NoesisImageBrush = NsDynamicCast<Noesis::Gui::ImageBrush*>(NoesisComponent.GetPtr());
	check(NoesisImageBrush)


}


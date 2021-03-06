////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisAnimationClock.h"

using namespace Noesis;
using namespace Gui;

UNoesisAnimationClock::UNoesisAnimationClock(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisAnimationClock::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::AnimationClock* NoesisAnimationClock = NsDynamicCast<Noesis::Gui::AnimationClock*>(InNoesisComponent);
	check(NoesisAnimationClock);
}

void UNoesisAnimationClock::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::AnimationClock* NoesisAnimationClock = NsDynamicCast<Noesis::Gui::AnimationClock*>(NoesisComponent.GetPtr());
	check(NoesisAnimationClock)


}

void UNoesisAnimationClock::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::AnimationClock* NoesisAnimationClock = NsDynamicCast<Noesis::Gui::AnimationClock*>(NoesisComponent.GetPtr());
	check(NoesisAnimationClock)


}


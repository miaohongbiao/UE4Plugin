////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisDoubleAnimationUsingKeyFrames.h"

using namespace Noesis;
using namespace Gui;

UNoesisDoubleAnimationUsingKeyFrames::UNoesisDoubleAnimationUsingKeyFrames(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisDoubleAnimationUsingKeyFrames::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::AnimationUsingKeyFrames<NsFloat32>* NoesisDoubleAnimationUsingKeyFrames = NsDynamicCast<Noesis::Gui::AnimationUsingKeyFrames<NsFloat32>*>(InNoesisComponent);
	check(NoesisDoubleAnimationUsingKeyFrames);
}

void UNoesisDoubleAnimationUsingKeyFrames::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::AnimationUsingKeyFrames<NsFloat32>* NoesisDoubleAnimationUsingKeyFrames = NsDynamicCast<Noesis::Gui::AnimationUsingKeyFrames<NsFloat32>*>(NoesisComponent.GetPtr());
	check(NoesisDoubleAnimationUsingKeyFrames)


}

void UNoesisDoubleAnimationUsingKeyFrames::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::AnimationUsingKeyFrames<NsFloat32>* NoesisDoubleAnimationUsingKeyFrames = NsDynamicCast<Noesis::Gui::AnimationUsingKeyFrames<NsFloat32>*>(NoesisComponent.GetPtr());
	check(NoesisDoubleAnimationUsingKeyFrames)


}


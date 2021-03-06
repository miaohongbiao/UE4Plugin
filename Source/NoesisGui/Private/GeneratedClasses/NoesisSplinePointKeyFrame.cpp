////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisSplinePointKeyFrame.h"

using namespace Noesis;
using namespace Gui;

UNoesisSplinePointKeyFrame::UNoesisSplinePointKeyFrame(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisSplinePointKeyFrame::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::SplineKeyFrame<Noesis::Drawing::Point>* NoesisSplinePointKeyFrame = NsDynamicCast<Noesis::Gui::SplineKeyFrame<Noesis::Drawing::Point>*>(InNoesisComponent);
	check(NoesisSplinePointKeyFrame);
}

class UNoesisKeySpline* UNoesisSplinePointKeyFrame::GetKeySpline()
{
	Noesis::Gui::SplineKeyFrame<Noesis::Drawing::Point>* NoesisSplinePointKeyFrame = NsDynamicCast<Noesis::Gui::SplineKeyFrame<Noesis::Drawing::Point>*>(NoesisComponent.GetPtr());
	check(NoesisSplinePointKeyFrame);
	return CastChecked<UNoesisKeySpline>(Instance->FindUnrealComponentForNoesisComponent(NoesisSplinePointKeyFrame->GetKeySpline()));
}

void UNoesisSplinePointKeyFrame::SetKeySpline(class UNoesisKeySpline* InKeySpline)
{
	Noesis::Gui::SplineKeyFrame<Noesis::Drawing::Point>* NoesisSplinePointKeyFrame = NsDynamicCast<Noesis::Gui::SplineKeyFrame<Noesis::Drawing::Point>*>(NoesisComponent.GetPtr());
	check(NoesisSplinePointKeyFrame);
	NoesisSplinePointKeyFrame->SetKeySpline(NsDynamicCast<KeySpline*>(InKeySpline->NoesisComponent.GetPtr()));
}

void UNoesisSplinePointKeyFrame::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::SplineKeyFrame<Noesis::Drawing::Point>* NoesisSplinePointKeyFrame = NsDynamicCast<Noesis::Gui::SplineKeyFrame<Noesis::Drawing::Point>*>(NoesisComponent.GetPtr());
	check(NoesisSplinePointKeyFrame)


}

void UNoesisSplinePointKeyFrame::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::SplineKeyFrame<Noesis::Drawing::Point>* NoesisSplinePointKeyFrame = NsDynamicCast<Noesis::Gui::SplineKeyFrame<Noesis::Drawing::Point>*>(NoesisComponent.GetPtr());
	check(NoesisSplinePointKeyFrame)


}


////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisContentControl.h"

using namespace Noesis;
using namespace Gui;

UNoesisContentControl::UNoesisContentControl(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisContentControl::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::ContentControl* NoesisContentControl = NsDynamicCast<Noesis::Gui::ContentControl*>(InNoesisComponent);
	check(NoesisContentControl);
}

class UNoesisBaseComponent* UNoesisContentControl::GetContent()
{
	Noesis::Gui::ContentControl* NoesisContentControl = NsDynamicCast<Noesis::Gui::ContentControl*>(NoesisComponent.GetPtr());
	check(NoesisContentControl);
	return CastChecked<UNoesisBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(NoesisContentControl->GetContent()));
}

void UNoesisContentControl::SetContent(class UNoesisBaseComponent* InContent)
{
	Noesis::Gui::ContentControl* NoesisContentControl = NsDynamicCast<Noesis::Gui::ContentControl*>(NoesisComponent.GetPtr());
	check(NoesisContentControl);
	NoesisContentControl->SetContent(NsDynamicCast<Core::BaseComponent*>(InContent->NoesisComponent.GetPtr()));
}

class UNoesisDataTemplate* UNoesisContentControl::GetContentTemplate()
{
	Noesis::Gui::ContentControl* NoesisContentControl = NsDynamicCast<Noesis::Gui::ContentControl*>(NoesisComponent.GetPtr());
	check(NoesisContentControl);
	return CastChecked<UNoesisDataTemplate>(Instance->FindUnrealComponentForNoesisComponent(NoesisContentControl->GetContentTemplate()));
}

void UNoesisContentControl::SetContentTemplate(class UNoesisDataTemplate* InContentTemplate)
{
	Noesis::Gui::ContentControl* NoesisContentControl = NsDynamicCast<Noesis::Gui::ContentControl*>(NoesisComponent.GetPtr());
	check(NoesisContentControl);
	NoesisContentControl->SetContentTemplate(NsDynamicCast<DataTemplate*>(InContentTemplate->NoesisComponent.GetPtr()));
}

class UNoesisDataTemplateSelector* UNoesisContentControl::GetContentTemplateSelector()
{
	Noesis::Gui::ContentControl* NoesisContentControl = NsDynamicCast<Noesis::Gui::ContentControl*>(NoesisComponent.GetPtr());
	check(NoesisContentControl);
	return CastChecked<UNoesisDataTemplateSelector>(Instance->FindUnrealComponentForNoesisComponent(NoesisContentControl->GetContentTemplateSelector()));
}

void UNoesisContentControl::SetContentTemplateSelector(class UNoesisDataTemplateSelector* InContentTemplateSelector)
{
	Noesis::Gui::ContentControl* NoesisContentControl = NsDynamicCast<Noesis::Gui::ContentControl*>(NoesisComponent.GetPtr());
	check(NoesisContentControl);
	NoesisContentControl->SetContentTemplateSelector(NsDynamicCast<DataTemplateSelector*>(InContentTemplateSelector->NoesisComponent.GetPtr()));
}

bool UNoesisContentControl::GetHasContent()
{
	Noesis::Gui::ContentControl* NoesisContentControl = NsDynamicCast<Noesis::Gui::ContentControl*>(NoesisComponent.GetPtr());
	check(NoesisContentControl);
	return NoesisContentControl->GetHasContent();
}

void UNoesisContentControl::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::ContentControl* NoesisContentControl = NsDynamicCast<Noesis::Gui::ContentControl*>(NoesisComponent.GetPtr());
	check(NoesisContentControl)


}

void UNoesisContentControl::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::ContentControl* NoesisContentControl = NsDynamicCast<Noesis::Gui::ContentControl*>(NoesisComponent.GetPtr());
	check(NoesisContentControl)


}


////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisHierarchicalDataTemplate.h"

using namespace Noesis;
using namespace Gui;

UNoesisHierarchicalDataTemplate::UNoesisHierarchicalDataTemplate(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisHierarchicalDataTemplate::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::HierarchicalDataTemplate* NoesisHierarchicalDataTemplate = NsDynamicCast<Noesis::Gui::HierarchicalDataTemplate*>(InNoesisComponent);
	check(NoesisHierarchicalDataTemplate);
}

class UNoesisStyle* UNoesisHierarchicalDataTemplate::GetItemContainerStyle()
{
	Noesis::Gui::HierarchicalDataTemplate* NoesisHierarchicalDataTemplate = NsDynamicCast<Noesis::Gui::HierarchicalDataTemplate*>(NoesisComponent.GetPtr());
	check(NoesisHierarchicalDataTemplate);
	return CastChecked<UNoesisStyle>(Instance->FindUnrealComponentForNoesisComponent(NoesisHierarchicalDataTemplate->GetItemContainerStyle()));
}

void UNoesisHierarchicalDataTemplate::SetItemContainerStyle(class UNoesisStyle* InItemContainerStyle)
{
	Noesis::Gui::HierarchicalDataTemplate* NoesisHierarchicalDataTemplate = NsDynamicCast<Noesis::Gui::HierarchicalDataTemplate*>(NoesisComponent.GetPtr());
	check(NoesisHierarchicalDataTemplate);
	NoesisHierarchicalDataTemplate->SetItemContainerStyle(NsDynamicCast<Style*>(InItemContainerStyle->NoesisComponent.GetPtr()));
}

class UNoesisDataTemplate* UNoesisHierarchicalDataTemplate::GetItemTemplate()
{
	Noesis::Gui::HierarchicalDataTemplate* NoesisHierarchicalDataTemplate = NsDynamicCast<Noesis::Gui::HierarchicalDataTemplate*>(NoesisComponent.GetPtr());
	check(NoesisHierarchicalDataTemplate);
	return CastChecked<UNoesisDataTemplate>(Instance->FindUnrealComponentForNoesisComponent(NoesisHierarchicalDataTemplate->GetItemTemplate()));
}

void UNoesisHierarchicalDataTemplate::SetItemTemplate(class UNoesisDataTemplate* InItemTemplate)
{
	Noesis::Gui::HierarchicalDataTemplate* NoesisHierarchicalDataTemplate = NsDynamicCast<Noesis::Gui::HierarchicalDataTemplate*>(NoesisComponent.GetPtr());
	check(NoesisHierarchicalDataTemplate);
	NoesisHierarchicalDataTemplate->SetItemTemplate(NsDynamicCast<DataTemplate*>(InItemTemplate->NoesisComponent.GetPtr()));
}

class UNoesisDataTemplateSelector* UNoesisHierarchicalDataTemplate::GetItemTemplateSelector()
{
	Noesis::Gui::HierarchicalDataTemplate* NoesisHierarchicalDataTemplate = NsDynamicCast<Noesis::Gui::HierarchicalDataTemplate*>(NoesisComponent.GetPtr());
	check(NoesisHierarchicalDataTemplate);
	return CastChecked<UNoesisDataTemplateSelector>(Instance->FindUnrealComponentForNoesisComponent(NoesisHierarchicalDataTemplate->GetItemTemplateSelector()));
}

void UNoesisHierarchicalDataTemplate::SetItemTemplateSelector(class UNoesisDataTemplateSelector* InItemTemplateSelector)
{
	Noesis::Gui::HierarchicalDataTemplate* NoesisHierarchicalDataTemplate = NsDynamicCast<Noesis::Gui::HierarchicalDataTemplate*>(NoesisComponent.GetPtr());
	check(NoesisHierarchicalDataTemplate);
	NoesisHierarchicalDataTemplate->SetItemTemplateSelector(NsDynamicCast<DataTemplateSelector*>(InItemTemplateSelector->NoesisComponent.GetPtr()));
}

class UNoesisBaseBinding* UNoesisHierarchicalDataTemplate::GetItemsSource()
{
	Noesis::Gui::HierarchicalDataTemplate* NoesisHierarchicalDataTemplate = NsDynamicCast<Noesis::Gui::HierarchicalDataTemplate*>(NoesisComponent.GetPtr());
	check(NoesisHierarchicalDataTemplate);
	return CastChecked<UNoesisBaseBinding>(Instance->FindUnrealComponentForNoesisComponent(NoesisHierarchicalDataTemplate->GetItemsSource()));
}

void UNoesisHierarchicalDataTemplate::SetItemsSource(class UNoesisBaseBinding* InItemsSource)
{
	Noesis::Gui::HierarchicalDataTemplate* NoesisHierarchicalDataTemplate = NsDynamicCast<Noesis::Gui::HierarchicalDataTemplate*>(NoesisComponent.GetPtr());
	check(NoesisHierarchicalDataTemplate);
	NoesisHierarchicalDataTemplate->SetItemsSource(NsDynamicCast<BaseBinding*>(InItemsSource->NoesisComponent.GetPtr()));
}

void UNoesisHierarchicalDataTemplate::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::HierarchicalDataTemplate* NoesisHierarchicalDataTemplate = NsDynamicCast<Noesis::Gui::HierarchicalDataTemplate*>(NoesisComponent.GetPtr());
	check(NoesisHierarchicalDataTemplate)


}

void UNoesisHierarchicalDataTemplate::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::HierarchicalDataTemplate* NoesisHierarchicalDataTemplate = NsDynamicCast<Noesis::Gui::HierarchicalDataTemplate*>(NoesisComponent.GetPtr());
	check(NoesisHierarchicalDataTemplate)


}


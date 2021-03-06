////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisTransformCollection.h"

using namespace Noesis;
using namespace Gui;

UNoesisTransformCollection::UNoesisTransformCollection(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisTransformCollection::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::TypedFreezableCollection<Noesis::Gui::Transform>* NoesisTransformCollection = NsDynamicCast<Noesis::Gui::TypedFreezableCollection<Noesis::Gui::Transform>*>(InNoesisComponent);
	check(NoesisTransformCollection);
}

void UNoesisTransformCollection::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::TypedFreezableCollection<Noesis::Gui::Transform>* NoesisTransformCollection = NsDynamicCast<Noesis::Gui::TypedFreezableCollection<Noesis::Gui::Transform>*>(NoesisComponent.GetPtr());
	check(NoesisTransformCollection)


}

void UNoesisTransformCollection::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::TypedFreezableCollection<Noesis::Gui::Transform>* NoesisTransformCollection = NsDynamicCast<Noesis::Gui::TypedFreezableCollection<Noesis::Gui::Transform>*>(NoesisComponent.GetPtr());
	check(NoesisTransformCollection)


}


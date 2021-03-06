////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "NoesisGuiPrivatePCH.h"
#include "GeneratedClasses/NoesisBaseTextBox.h"

using namespace Noesis;
using namespace Gui;

UNoesisBaseTextBox::UNoesisBaseTextBox(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UNoesisBaseTextBox::SetNoesisComponent(Noesis::Core::BaseComponent* InNoesisComponent)
{
	Super::SetNoesisComponent(InNoesisComponent);

	Noesis::Gui::BaseTextBox* NoesisBaseTextBox = NsDynamicCast<Noesis::Gui::BaseTextBox*>(InNoesisComponent);
	check(NoesisBaseTextBox);
}

bool UNoesisBaseTextBox::GetAcceptsReturn()
{
	Noesis::Gui::BaseTextBox* NoesisBaseTextBox = NsDynamicCast<Noesis::Gui::BaseTextBox*>(NoesisComponent.GetPtr());
	check(NoesisBaseTextBox);
	return NoesisBaseTextBox->GetAcceptsReturn();
}

void UNoesisBaseTextBox::SetAcceptsReturn(bool InAcceptsReturn)
{
	Noesis::Gui::BaseTextBox* NoesisBaseTextBox = NsDynamicCast<Noesis::Gui::BaseTextBox*>(NoesisComponent.GetPtr());
	check(NoesisBaseTextBox);
	NoesisBaseTextBox->SetAcceptsReturn(InAcceptsReturn);
}

bool UNoesisBaseTextBox::GetAcceptsTab()
{
	Noesis::Gui::BaseTextBox* NoesisBaseTextBox = NsDynamicCast<Noesis::Gui::BaseTextBox*>(NoesisComponent.GetPtr());
	check(NoesisBaseTextBox);
	return NoesisBaseTextBox->GetAcceptsTab();
}

void UNoesisBaseTextBox::SetAcceptsTab(bool InAcceptsTab)
{
	Noesis::Gui::BaseTextBox* NoesisBaseTextBox = NsDynamicCast<Noesis::Gui::BaseTextBox*>(NoesisComponent.GetPtr());
	check(NoesisBaseTextBox);
	NoesisBaseTextBox->SetAcceptsTab(InAcceptsTab);
}

class UNoesisBrush* UNoesisBaseTextBox::GetCaretBrush()
{
	Noesis::Gui::BaseTextBox* NoesisBaseTextBox = NsDynamicCast<Noesis::Gui::BaseTextBox*>(NoesisComponent.GetPtr());
	check(NoesisBaseTextBox);
	return CastChecked<UNoesisBrush>(Instance->FindUnrealComponentForNoesisComponent(NoesisBaseTextBox->GetCaretBrush()));
}

void UNoesisBaseTextBox::SetCaretBrush(class UNoesisBrush* InCaretBrush)
{
	Noesis::Gui::BaseTextBox* NoesisBaseTextBox = NsDynamicCast<Noesis::Gui::BaseTextBox*>(NoesisComponent.GetPtr());
	check(NoesisBaseTextBox);
	NoesisBaseTextBox->SetCaretBrush(NsDynamicCast<Brush*>(InCaretBrush->NoesisComponent.GetPtr()));
}

ENoesisScrollBarVisibility UNoesisBaseTextBox::GetHorizontalScrollBarVisibility()
{
	Noesis::Gui::BaseTextBox* NoesisBaseTextBox = NsDynamicCast<Noesis::Gui::BaseTextBox*>(NoesisComponent.GetPtr());
	check(NoesisBaseTextBox);
	return (ENoesisScrollBarVisibility)NoesisBaseTextBox->GetHorizontalScrollBarVisibility();
}

void UNoesisBaseTextBox::SetHorizontalScrollBarVisibility(ENoesisScrollBarVisibility InHorizontalScrollBarVisibility)
{
	Noesis::Gui::BaseTextBox* NoesisBaseTextBox = NsDynamicCast<Noesis::Gui::BaseTextBox*>(NoesisComponent.GetPtr());
	check(NoesisBaseTextBox);
	NoesisBaseTextBox->SetHorizontalScrollBarVisibility((Noesis::Gui::ScrollBarVisibility)InHorizontalScrollBarVisibility);
}

bool UNoesisBaseTextBox::GetIsReadOnly()
{
	Noesis::Gui::BaseTextBox* NoesisBaseTextBox = NsDynamicCast<Noesis::Gui::BaseTextBox*>(NoesisComponent.GetPtr());
	check(NoesisBaseTextBox);
	return NoesisBaseTextBox->GetIsReadOnly();
}

void UNoesisBaseTextBox::SetIsReadOnly(bool InIsReadOnly)
{
	Noesis::Gui::BaseTextBox* NoesisBaseTextBox = NsDynamicCast<Noesis::Gui::BaseTextBox*>(NoesisComponent.GetPtr());
	check(NoesisBaseTextBox);
	NoesisBaseTextBox->SetIsReadOnly(InIsReadOnly);
}

bool UNoesisBaseTextBox::GetIsSelectionActive()
{
	Noesis::Gui::BaseTextBox* NoesisBaseTextBox = NsDynamicCast<Noesis::Gui::BaseTextBox*>(NoesisComponent.GetPtr());
	check(NoesisBaseTextBox);
	return NoesisBaseTextBox->GetIsSelectionActive();
}

class UNoesisBrush* UNoesisBaseTextBox::GetSelectionBrush()
{
	Noesis::Gui::BaseTextBox* NoesisBaseTextBox = NsDynamicCast<Noesis::Gui::BaseTextBox*>(NoesisComponent.GetPtr());
	check(NoesisBaseTextBox);
	return CastChecked<UNoesisBrush>(Instance->FindUnrealComponentForNoesisComponent(NoesisBaseTextBox->GetSelectionBrush()));
}

void UNoesisBaseTextBox::SetSelectionBrush(class UNoesisBrush* InSelectionBrush)
{
	Noesis::Gui::BaseTextBox* NoesisBaseTextBox = NsDynamicCast<Noesis::Gui::BaseTextBox*>(NoesisComponent.GetPtr());
	check(NoesisBaseTextBox);
	NoesisBaseTextBox->SetSelectionBrush(NsDynamicCast<Brush*>(InSelectionBrush->NoesisComponent.GetPtr()));
}

float UNoesisBaseTextBox::GetSelectionOpacity()
{
	Noesis::Gui::BaseTextBox* NoesisBaseTextBox = NsDynamicCast<Noesis::Gui::BaseTextBox*>(NoesisComponent.GetPtr());
	check(NoesisBaseTextBox);
	return (float)NoesisBaseTextBox->GetSelectionOpacity();
}

void UNoesisBaseTextBox::SetSelectionOpacity(float InSelectionOpacity)
{
	Noesis::Gui::BaseTextBox* NoesisBaseTextBox = NsDynamicCast<Noesis::Gui::BaseTextBox*>(NoesisComponent.GetPtr());
	check(NoesisBaseTextBox);
	NoesisBaseTextBox->SetSelectionOpacity(InSelectionOpacity);
}

ENoesisScrollBarVisibility UNoesisBaseTextBox::GetVerticalScrollBarVisibility()
{
	Noesis::Gui::BaseTextBox* NoesisBaseTextBox = NsDynamicCast<Noesis::Gui::BaseTextBox*>(NoesisComponent.GetPtr());
	check(NoesisBaseTextBox);
	return (ENoesisScrollBarVisibility)NoesisBaseTextBox->GetVerticalScrollBarVisibility();
}

void UNoesisBaseTextBox::SetVerticalScrollBarVisibility(ENoesisScrollBarVisibility InVerticalScrollBarVisibility)
{
	Noesis::Gui::BaseTextBox* NoesisBaseTextBox = NsDynamicCast<Noesis::Gui::BaseTextBox*>(NoesisComponent.GetPtr());
	check(NoesisBaseTextBox);
	NoesisBaseTextBox->SetVerticalScrollBarVisibility((Noesis::Gui::ScrollBarVisibility)InVerticalScrollBarVisibility);
}

void UNoesisBaseTextBox::SelectionChanged_Private(Noesis::Core::BaseComponent* InSender, const Noesis::RoutedEventArgs& InArgs)
{
	if (!SelectionChanged.IsBound() || !Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisBaseComponent* Sender = CastChecked<UNoesisBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisRoutedEventArgs Args(Instance, InArgs);
	SelectionChanged.Broadcast(Sender, Args);
}

void UNoesisBaseTextBox::TextChanged_Private(Noesis::Core::BaseComponent* InSender, const Noesis::RoutedEventArgs& InArgs)
{
	if (!TextChanged.IsBound() || !Instance || Instance->HasAnyFlags(RF_BeginDestroyed))
		return;
	UNoesisBaseComponent* Sender = CastChecked<UNoesisBaseComponent>(Instance->FindUnrealComponentForNoesisComponent(InSender));
	FNoesisRoutedEventArgs Args(Instance, InArgs);
	TextChanged.Broadcast(Sender, Args);
}

void UNoesisBaseTextBox::BindEvents()
{
	Super::BindEvents();

	Noesis::Gui::BaseTextBox* NoesisBaseTextBox = NsDynamicCast<Noesis::Gui::BaseTextBox*>(NoesisComponent.GetPtr());
	check(NoesisBaseTextBox)

	SelectionChanged_Delegate = Noesis::MakeDelegate(this, &UNoesisBaseTextBox::SelectionChanged_Private);
	if (SelectionChanged.IsBound())
	{
		NoesisBaseTextBox->SelectionChanged() += SelectionChanged_Delegate;
	}
	TextChanged_Delegate = Noesis::MakeDelegate(this, &UNoesisBaseTextBox::TextChanged_Private);
	if (TextChanged.IsBound())
	{
		NoesisBaseTextBox->TextChanged() += TextChanged_Delegate;
	}

}

void UNoesisBaseTextBox::UnbindEvents()
{
	Super::UnbindEvents();

	Noesis::Gui::BaseTextBox* NoesisBaseTextBox = NsDynamicCast<Noesis::Gui::BaseTextBox*>(NoesisComponent.GetPtr());
	check(NoesisBaseTextBox)

	if (SelectionChanged.IsBound())
	{
		NoesisBaseTextBox->SelectionChanged() -= SelectionChanged_Delegate;
	}
	if (TextChanged.IsBound())
	{
		NoesisBaseTextBox->TextChanged() -= TextChanged_Delegate;
	}

}


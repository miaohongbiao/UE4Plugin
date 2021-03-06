////////////////////////////////////////////////////////////////////////////////////////////////////
// Noesis Engine - http://www.noesisengine.com
// Copyright (c) 2009-2010 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "NoesisEnums.h"
#include "NoesisStructs.h"
#include "NoesisEvents.h"
#include "GeneratedClasses/NoesisInputBinding.h"
#include "NoesisKeyBinding.generated.h"

UCLASS()
class NOESISGUI_API UNoesisKeyBinding : public UNoesisInputBinding
{
public:
	GENERATED_UCLASS_BODY()

	virtual void SetNoesisComponent(Noesis::Core::BaseComponent* NoesisComponent) override;

	// Property Key
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	int32 GetKey();

	// Property Modifiers
	UFUNCTION(BlueprintCallable, Category = "NoesisGui")
	int32 GetModifiers();

protected:

	virtual void BindEvents() override;
	virtual void UnbindEvents() override;

private:

};


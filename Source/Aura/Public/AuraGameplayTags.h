// Copyright Mind Crawler Studio

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

/**
 *  Aura GameplayTags
 *
 *  Singleton containing native Gameplay Tags
 */

struct FAuraGameplayTags
{
public:
 static const FAuraGameplayTags& Get() { return GameplayTags;}
 static void InitializeNativeGameplayTags();
protected:

private:
 static FAuraGameplayTags GameplayTags;
};
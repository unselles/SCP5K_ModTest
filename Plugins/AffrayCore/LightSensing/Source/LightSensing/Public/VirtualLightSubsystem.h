#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "VirtualLightSubsystem.generated.h"

UCLASS(Blueprintable)
class LIGHTSENSING_API UVirtualLightSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UVirtualLightSubsystem();

};


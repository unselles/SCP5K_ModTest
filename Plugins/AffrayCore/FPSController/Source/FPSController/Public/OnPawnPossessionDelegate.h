#pragma once
#include "CoreMinimal.h"
#include "OnPawnPossessionDelegate.generated.h"

class APawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPawnPossession, APawn*, Pawn);


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProjectileFindFloorResult.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FProjectileFindFloorResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFoundFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FloorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FloorNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> FloorComponent;
    
    PANDEMIC_API FProjectileFindFloorResult();
};


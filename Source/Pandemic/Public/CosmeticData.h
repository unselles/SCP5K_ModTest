#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CosmeticRequirements.h"
#include "CosmeticData.generated.h"

class UTexture2D;

UCLASS(Abstract, Blueprintable)
class PANDEMIC_API UCosmeticData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InternalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmeticRequirements Requirements;
    
    UCosmeticData();

};


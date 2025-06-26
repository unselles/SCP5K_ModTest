#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SAIInterestPoint.generated.h"

class UBillboardComponent;

UCLASS(Blueprintable)
class AISENTIENCE_API ASAIInterestPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* InterestRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InterestPriority;
    
public:
    ASAIInterestPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPriority() const;
    
};


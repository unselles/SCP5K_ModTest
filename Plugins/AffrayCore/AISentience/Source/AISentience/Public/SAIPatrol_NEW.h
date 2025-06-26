#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SAIPatrol_NEW.generated.h"

class UBillboardComponent;
class USplineComponent;

UCLASS(Blueprintable)
class AISENTIENCE_API ASAIPatrol_NEW : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* PatrolPathComponent;
    
public:
    ASAIPatrol_NEW(const FObjectInitializer& ObjectInitializer);

};


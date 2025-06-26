#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ESCP3199ActionState.h"
#include "BTService_Update3199ActionState.generated.h"

UCLASS(Blueprintable)
class PANDEMIC_API UBTService_Update3199ActionState : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BBEnumKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCeaseRelevant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCP3199ActionState BecomeRelevantActionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESCP3199ActionState CeaseRelevantActionState;
    
public:
    UBTService_Update3199ActionState();

};


#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "SAIBlackboardKeyValueSelector.generated.h"

class UBlackboardKeyType;

USTRUCT(BlueprintType)
struct FSAIBlackboardKeyValueSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlackboardKeyType* KeyType;
    
    AISENTIENCE_API FSAIBlackboardKeyValueSelector();
};


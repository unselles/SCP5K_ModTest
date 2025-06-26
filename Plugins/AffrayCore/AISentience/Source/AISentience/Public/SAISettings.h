#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GenericTeamAgentInterface.h"
#include "Engine/DeveloperSettings.h"
#include "ESAITeam.h"
#include "SAICoverGenerationSettings.h"
#include "TeamAttitude.h"
#include "SAISettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class AISENTIENCE_API USAISettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESAITeam, FTeamAttitude> TeamAttitudes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowReverseDefinitions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAICoverGenerationSettings CoverGenerationSettings;
    
    USAISettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ETeamAttitude::Type> GetAttitude(FGenericTeamId Of, FGenericTeamId Towards);
    
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TOCDialogueSource.generated.h"

class UDialogueComponent;

UCLASS(Blueprintable)
class PANDEMIC_API ATOCDialogueSource : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDialogueComponent* DialogueComponent;
    
    ATOCDialogueSource(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestStop(FName DialogueTableID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestReportToTOC(FName DialogueTableID);
    
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HordeSpawnerTrigger.generated.h"

class AHordeSpawner;

UCLASS(Blueprintable)
class AIHORDES_API AHordeSpawnerTrigger : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHordeSpawner*> Spawners;
    
    AHordeSpawnerTrigger(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};


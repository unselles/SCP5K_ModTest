#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "AimingCameraModifier.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class FPSCONTROLLER_API UAimingCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* AimingBlurMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* AimingScopeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DepthOfFieldAperature;
    
    UAimingCameraModifier();

};


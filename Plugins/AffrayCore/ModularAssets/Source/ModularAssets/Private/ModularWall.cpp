#include "ModularWall.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SplineComponent.h"

AModularWall::AModularWall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->SplineComponent = (USplineComponent*)RootComponent;
    this->MeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Mesh"));
    this->Mesh = NULL;
    this->AssetSize = 100.00f;
    this->Height = 100.00f;
    this->WallDirection = 1.00f;
    this->Thickness = 1.00f;
    this->MeshComponent->SetupAttachment(RootComponent);
}

void AModularWall::RefreshAsset() {
}



#include "DLSSSettings.h"

UDLSSSettings::UDLSSSettings() {
    this->bEnableDLSSD3D12 = true;
    this->bEnableDLSSD3D11 = true;
    this->bEnableDLSSVulkan = true;
    this->bEnableDLSSInEditorViewports = true;
    this->bEnableScreenpercentageManipulationInDLSSEditorViewports = true;
    this->bEnableDLSSInPlayInEditorViewports = true;
    this->bShowDLSSSDebugOnScreenMessages = true;
    this->bGenericDLSSBinaryExists = false;
    this->NVIDIANGXApplicationId = 0;
    this->bCustomDLSSBinaryExists = false;
    this->bAllowOTAUpdate = true;
    this->DLAAPreset = EDLSSPreset::Default;
    this->DLSSQualityPreset = EDLSSPreset::Default;
    this->DLSSBalancedPreset = EDLSSPreset::Default;
    this->DLSSPerformancePreset = EDLSSPreset::Default;
    this->DLSSUltraPerformancePreset = EDLSSPreset::Default;
}



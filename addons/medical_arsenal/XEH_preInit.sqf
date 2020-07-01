#include "script_component.hpp"
ADDON = false;

#include "initSettings.sqf"

if (GVAR(addCategory)) then {
    GVAR(medicalArsenalButton) = [
        ALL_MEDICAL_ITEMS,
        LLSTRING(Medications),
        "\z\ace\addons\medical_gui\data\categories\medication.paa"
    ] call ace_arsenal_fnc_addRightPanelButton;
};

ADDON = true;

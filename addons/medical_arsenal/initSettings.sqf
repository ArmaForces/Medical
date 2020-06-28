[
    QGVAR(addCategory),
    "CHECKBOX",
    LLSTRING(AddCategory),
    [LELSTRING(Main,SettingsCategory), LLSTRING(SettingsSubcategory)],
    true,
    false,
    {
        if (_this && isNil QGVAR(medicalArsenalButton)) then {
            GVAR(medicalArsenalButton) = [
                ALL_MEDICAL_ITEMS,
                LLSTRING(Medications),
                "\z\ace\addons\medical_gui\data\categories\medication.paa"
            ] call ace_arsenal_fnc_addRightPanelButton;
        };
    },
    true
] call CBA_fnc_addSetting;

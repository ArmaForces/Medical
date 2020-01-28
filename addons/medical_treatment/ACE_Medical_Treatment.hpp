class ACE_ADDON(medical_treatment) {
    class Bandaging {
        // Field dressing is normal average treatment
        // packing bandage is average treatment, higher reopen chance, longer reopening delay
        // elastic bandage is higher treatment, higher reopen chance, shorter reopen delay
        // quickclot is lower treatment, lower reopen chance, longer reopening delay
        class BasicBandage {
            effectiveness = 10;
            reopeningChance = 0;
            reopeningMinDelay = 0;
            reopeningMaxDelay = 0;
        };

        class FieldDressing {
            // How effect is the bandage for treating one wounds type injury
            effectiveness = 1;
            // What is the chance and delays (in seconds) of the treated default injury reopening
            reopeningChance = 0.1;
            reopeningMinDelay = 120;
            reopeningMaxDelay = 200;

            // Super efficiency
            class Abrasion {
                effectiveness = 10;
                reopeningChance = 0.1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 1800;
            };
            class AbrasionMinor: Abrasion {};
            class AbrasionMedium: Abrasion {
                effectiveness = 8;
                reopeningChance = 0.15;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 7;
                reopeningChance = 0.2;
            };

            // Standard efficiency
            class Avulsion: Abrasion {
                effectiveness = 4;
                reopeningChance = 0.4;
                reopeningMinDelay = 300;
                reopeningMaxDelay = 600;
            };
            class AvulsionMinor: Avulsion {};
            class AvulsionMedium: Avulsion {
                effectiveness = 3;
            };
            class AvulsionLarge: Avulsion {
                effectiveness = 2;
            };

            // Standard efficiency
            class Contusion: Abrasion {
                effectiveness = 4;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            // Standard efficiency
            class Crush: Abrasion {
                effectiveness = 4;
                reopeningChance = 0.2;
                reopeningMinDelay = 200;
                reopeningMaxDelay = 1000;
            };
            class CrushMinor: Crush {};
            class CrushMedium: Crush {
                effectiveness = 3;
                reopeningChance = 0.25;
            };
            class CrushLarge: Crush {
                effectiveness = 2;
                reopeningChance = 0.3;
            };

            // Super efficiency
            class Cut: Abrasion {
                effectiveness = 10;
                reopeningChance = 0.1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 1800;
            };
            class CutMinor: Cut {};
            class CutMedium: Cut {
                effectiveness = 9;
                reopeningChance = 0.2;
            };
            class CutLarge: Cut {
                effectiveness = 8;
                reopeningChance = 0.3;
            };

            // Super efficiency
            class Laceration: Abrasion {
                effectiveness = 10;
                reopeningChance = 0.2;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 1800;
            };
            class LacerationMinor: Laceration {};
            class LacerationMedium: Laceration {
                effectiveness = 9;
                reopeningChance = 0.3;
            };
            class LacerationLarge: Laceration {
                effectiveness = 8;
                reopeningChance = 0.4;
            };

            // Increased efficiency
            class VelocityWound: Abrasion {
                effectiveness = 6;
                reopeningChance = 0.6;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 1000;
            };
            class VelocityWoundMinor: VelocityWound {};
            class VelocityWoundMedium: VelocityWound {
                effectiveness = 5;
            };
            class VelocityWoundLarge: VelocityWound {
                effectiveness = 4;
            };

            // Increased efficiency
            class PunctureWound: Abrasion {
                effectiveness = 6;
                reopeningChance = 0.4;
                reopeningMinDelay = 360;
                reopeningMaxDelay = 900;
            };
            class PunctureWoundMinor: PunctureWound {};
            class PunctureWoundMedium: PunctureWound {
                effectiveness = 5;
            };
            class PunctureWoundLarge: PunctureWound {
                effectiveness = 4;
            };
        };

        class PackingBandage: fieldDressing {
            // Standard efficiency
            class Abrasion {
                effectiveness = 4;
                reopeningChance = 0.5;
                reopeningMinDelay = 800;
                reopeningMaxDelay = 1500;
            };
            class AbrasionMinor: Abrasion {};
            class AbrasionMedium: Abrasion {
                effectiveness = 3;
                reopeningChance = 0.6;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 2;
                reopeningChance = 0.7;
            };

            // Standard efficiency
            class Avulsion: Abrasion {
                effectiveness = 4;
                reopeningChance = 0.5;
                reopeningMinDelay = 1000;
                reopeningMaxDelay = 1600;
            };
            class AvulsionMinor: Avulsion {};
            class AvulsionMedium: Avulsion {
                effectiveness = 3;
            };
            class AvulsionLarge: Avulsion {
                effectiveness = 2;
            };

            // Standard efficiency
            class Contusion: Abrasion {
                effectiveness = 4;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            // Standard efficiency
            class Crush: Abrasion {
                effectiveness = 4;
                reopeningChance = 0.4;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 1000;
            };
            class CrushMinor: Crush {};
            class CrushMedium: Crush {
                effectiveness = 3;
                reopeningChance = 0.5;
            };
            class CrushLarge: Crush {
                effectiveness = 2;
                reopeningChance = 0.6;
            };

            // Standard efficiency
            class Cut: Abrasion {
                effectiveness = 4;
                reopeningChance = 0.4;
                reopeningMinDelay = 700;
                reopeningMaxDelay = 1000;
            };
            class CutMinor: Cut {};
            class CutMedium: Cut {
                effectiveness = 3;
                reopeningChance = 0.5;
            };
            class CutLarge: Cut {
                effectiveness = 1;
                reopeningChance = 0.6;
            };

            // Standard efficiency
            class Laceration: Abrasion {
                effectiveness = 4;
                reopeningChance = 0.6;
                reopeningMinDelay = 500;
                reopeningMaxDelay = 2000;
            };
            class LacerationMinor: Laceration {};
            class LacerationMedium: Laceration {
                effectiveness = 3;
                reopeningChance = 0.8;
            };
            class LacerationLarge: Laceration {
                effectiveness = 2;
                reopeningChance = 0.9;
            };

            // Super efficiency
            class VelocityWound: Abrasion {
                effectiveness = 10;
                reopeningChance = 1;
                reopeningMinDelay = 800;
                reopeningMaxDelay = 2000;
            };
            class VelocityWoundMinor: VelocityWound {};
            class VelocityWoundMedium: VelocityWound {
                effectiveness = 9;
            };
            class VelocityWoundLarge: VelocityWound {
                effectiveness = 8;
            };

            // Super efficiency
            class PunctureWound: Abrasion {
                effectiveness = 10;
                reopeningChance = 0.3;
                reopeningMinDelay = 1000;
                reopeningMaxDelay = 3000;
            };
            class PunctureWoundMinor: PunctureWound {};
            class PunctureWoundMedium: PunctureWound {
                effectiveness = 9;
            };
            class PunctureWoundLarge: PunctureWound {
                effectiveness = 8;
            };
        };

        class ElasticBandage: fieldDressing {
            // Standard efficiency
            class Abrasion {
                effectiveness = 4;
                reopeningChance = 0.5;
                reopeningMinDelay = 300;
                reopeningMaxDelay = 600;
            };
            class AbrasionMinor: Abrasion {};
            class AbrasionMedium: Abrasion {
                effectiveness = 3;
                reopeningChance = 0.6;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 2;
                reopeningChance = 0.7;
            };

            // Super efficiency
            class Avulsion: Abrasion {
                effectiveness = 10;
                reopeningChance = 0.1;
                reopeningMinDelay = 1000;
                reopeningMaxDelay = 1600;
            };
            class AvulsionMinor: Avulsion {};
            class AvulsionMedium: Avulsion {
                effectiveness = 9;
            };
            class AvulsionLarge: Avulsion {
                effectiveness = 8;
            };

            // Super efficiency
            class Contusion: Abrasion {
                effectiveness = 10;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            // Super efficiency
            class Crush: Abrasion {
                effectiveness = 10;
                reopeningChance = 0.1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 1000;
            };
            class CrushMinor: Crush {};
            class CrushMedium: Crush {
                effectiveness = 9;
                reopeningChance = 0.15;
            };
            class CrushLarge: Crush {
                effectiveness = 8;
                reopeningChance = 0.2;
            };

            // Standard efficiency
            class Cut: Abrasion {
                effectiveness = 4;
                reopeningChance = 0.5;
                reopeningMinDelay = 300;
                reopeningMaxDelay = 600;
            };
            class CutMinor: Cut {};
            class CutMedium: Cut {
                effectiveness = 3;
                reopeningChance = 0.6;
            };
            class CutLarge: Cut {
                effectiveness = 2;
                reopeningChance = 0.7;
            };

            // Standard efficiency
            class Laceration: Abrasion {
                effectiveness = 4;
                reopeningChance = 0.6;
                reopeningMinDelay = 300;
                reopeningMaxDelay = 600;
            };
            class LacerationMinor: Laceration {};
            class LacerationMedium: Laceration {
                effectiveness = 3;
                reopeningChance = 0.7;
            };
            class LacerationLarge: Laceration {
                effectiveness = 2;
                reopeningChance = 0.8;
            };

            // Increased efficiency
            class VelocityWound: Abrasion {
                effectiveness = 6;
                reopeningChance = 0.4;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 1000;
            };
            class VelocityWoundMinor: VelocityWound {};
            class VelocityWoundMedium: VelocityWound {
                effectiveness = 5;
            };
            class VelocityWoundLarge: VelocityWound {
                effectiveness = 4;
            };

            // Increased efficiency
            class PunctureWound: Abrasion {
                effectiveness = 6;
                reopeningChance = 0.4;
                reopeningMinDelay = 360;
                reopeningMaxDelay = 900;
            };
            class PunctureWoundMinor: PunctureWound {};
            class PunctureWoundMedium: PunctureWound {
                effectiveness = 5;
            };
            class PunctureWoundLarge: PunctureWound {
                effectiveness = 4;
            };
        };

        class QuikClot: fieldDressing {
            // Standard efficiency
            class Abrasion {
                effectiveness = 4;
                reopeningChance = 0.3;
                reopeningMinDelay = 800;
                reopeningMaxDelay = 1500;
            };
            class AbrasionMinor: Abrasion {};
            class AbrasionMedium: Abrasion {
                effectiveness = 3;
                reopeningChance = 0.4;
            };
            class AbrasionLarge: Abrasion {
                effectiveness = 2;
                reopeningChance = 0.5;
            };

            // Standard efficiency
            class Avulsion: Abrasion {
                effectiveness = 4;
                reopeningChance = 0.2;
                reopeningMinDelay = 1000;
                reopeningMaxDelay = 1600;
            };
            class AvulsionMinor: Avulsion {};
            class AvulsionMedium: Avulsion {
                effectiveness = 3;
            };
            class AvulsionLarge: Avulsion {
                effectiveness = 2;
            };

            // Standard efficiency
            class Contusion: Abrasion {
                effectiveness = 4;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ContusionMinor: Contusion {};
            class ContusionMedium: Contusion {};
            class ContusionLarge: Contusion {};

            // Standard efficiency
            class Crush: Abrasion {
                effectiveness = 4;
                reopeningChance = 0.5;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 1000;
            };
            class CrushMinor: Crush {};
            class CrushMedium: Crush {
                effectiveness = 3;
            };
            class CrushLarge: Crush {
                effectiveness = 2;
            };

            // Standard efficiency
            class Cut: Abrasion {
                effectiveness = 4;
                reopeningChance = 0.2;
                reopeningMinDelay = 700;
                reopeningMaxDelay = 1000;
            };
            class CutMinor: Cut {};
            class CutMedium: Cut {
                effectiveness = 3;
            };
            class CutLarge: Cut {
                effectiveness = 2;
            };

            // Standard efficiency
            class Laceration: Abrasion {
                effectiveness = 4;
                reopeningChance = 0.4;
                reopeningMinDelay = 500;
                reopeningMaxDelay = 2000;
            };
            class LacerationMinor: Laceration {};
            class LacerationMedium: Laceration {
                effectiveness = 3;
            };
            class LacerationLarge: Laceration {
                effectiveness = 2;
            };

            // Super efficiency
            class VelocityWound: Abrasion {
                effectiveness = 10;
                reopeningChance = 0.3;
                reopeningMinDelay = 1000;
                reopeningMaxDelay = 3000;
            };
            class VelocityWoundMinor: VelocityWound {};
            class VelocityWoundMedium: VelocityWound {
                effectiveness = 9;
            };
            class VelocityWoundLarge: VelocityWound {
                effectiveness = 8;
            };

            // Super efficiency
            class PunctureWound: Abrasion {
                effectiveness = 10;
                reopeningChance = 0.1;
                reopeningMinDelay = 1000;
                reopeningMaxDelay = 3000;
            };
            class PunctureWoundMinor: PunctureWound {};
            class PunctureWoundMedium: PunctureWound {
                effectiveness = 9;
            };
            class PunctureWoundLarge: PunctureWound {
                effectiveness = 8;
            };
        };
    };

    class Medication {
        // How much does the pain get reduced?
        painReduce = 0;
        // How much will the heart rate be increased when the HR is low (below 55)? {minIncrease, maxIncrease}
        hrIncreaseLow[] = {0, 0};    // _heartRate < 55
        hrIncreaseNormal[] = {0, 0}; // 55 <= _heartRate <= 110
        hrIncreaseHigh[] = {0, 0};   // 110 < _heartRate

        // How long until this medication has disappeared
        timeInSystem = 120;
        // How long until the maximum effect is reached
        timeTillMaxEffect = 30;
        // How many of this type of medication can be in the system before the patient overdoses?
        maxDose = 4;
        // Function to execute upon overdose. Arguments passed to call back are 0: unit <OBJECT>, 1: medicationClassName <STRING>
        onOverDose = "";
        // The viscosity of a fluid is a measure of its resistance to gradual deformation by shear stress or tensile stress. For liquids, it corresponds to the informal concept of "thickness". This value will increase/decrease the viscoty of the blood with the percentage given. Where 100 = max. Using the minus will decrease viscosity
        viscosityChange = 0;

        // specific details for the ACE_Morphine treatment action
        class Morphine {
            painReduce = 0.8;
            hrIncreaseLow[] = {-10, -20};
            hrIncreaseNormal[] = {-10, -30};
            hrIncreaseHigh[] = {-10, -35};
            timeInSystem = 1800;
            timeTillMaxEffect = 30;
            maxDose = 4;
            incompatibleMedication[] = {};
            viscosityChange = -10;
        };
        class Epinephrine {
            painReduce = 0;
            hrIncreaseLow[] = {10, 20};
            hrIncreaseNormal[] = {10, 50};
            hrIncreaseHigh[] = {10, 40};
            timeInSystem = 120;
            timeTillMaxEffect = 10;
            maxDose = 10;
            incompatibleMedication[] = {};
        };
        class Adenosine {
            painReduce = 0;
            hrIncreaseLow[] = {-7, -10};
            hrIncreaseNormal[] = {-15, -30};
            hrIncreaseHigh[] = {-15, -35};
            timeInSystem = 120;
            timeTillMaxEffect = 15;
            maxDose = 6;
            incompatibleMedication[] = {};
        };
        class PainKillers {
            painReduce = 0.1;
            timeInSystem = 600;
            timeTillMaxEffect = 60;
            maxDose = 10;
            incompatibleMedication[] = {};
            viscosityChange = 5;
        };
    };
    class IV {
        // volume is in millileters
        volume = 1000;
        ratio[] = {};
        type = "Blood";
        class BloodIV {
            volume = 1000;
            ratio[] = {"Plasma", 1};
        };
        class BloodIV_500: BloodIV {
            volume = 500;
        };
        class BloodIV_250: BloodIV {
            volume = 250;
        };
        class PlasmaIV: BloodIV {
            volume = 1000;
            ratio[] = {"Blood", 1};
            type = "Plasma";
        };
        class PlasmaIV_500: PlasmaIV {
            volume = 500;
        };
        class PlasmaIV_250: PlasmaIV {
            volume = 250;
        };
        class SalineIV: BloodIV {
            volume = 1000;
            type = "Saline";
            ratio[] = {};
        };
        class SalineIV_500: SalineIV {
            volume = 500;
        };
        class SalineIV_250: SalineIV {
            volume = 250;
        };
    };
};

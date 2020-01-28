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

            // The best choice for given wound
            class SuperEff {
                effectiveness = 10;
                reopeningChance = 0.1;
                reopeningMinDelay = 600;
                reopeningMaxDelay = 1800;
            };
            class SuperEffMinor: SuperEff {};
            class SuperEffMedium: SuperEff {
                effectiveness = 9;
            };
            class SuperEffLarge: SuperEff {
                effectiveness = 8;
            };

            // Will fix you almost like super
            class IncreasedEff {
                effectiveness = 6;
                reopeningChance = 0.3;
                reopeningMinDelay = 400;
                reopeningMaxDelay = 1200;
            };
            class IncreasedEffMinor: IncreasedEff {};
            class IncreasedEffMedium: IncreasedEff {
                effectiveness = 5;
            };
            class IncreasedEffLarge: IncreasedEff {
                effectiveness = 4;
            };

            // Still 2-3 times more efficiency than default ACE bandages
            class StandardEff {
                effectiveness = 4;
                reopeningChance = 0.4;
                reopeningMinDelay = 300;
                reopeningMaxDelay = 600;
            };
            class StandardEffMinor: StandardEff {};
            class StandardEffMedium: StandardEff {
                effectiveness = 3;
            };
            class StandardEffLarge: StandardEff {
                effectiveness = 2;
            };
        };

        class FieldDressing: BasicBandage {
            // Super efficiency
            class Abrasion: SuperEff {};
            class AbrasionMinor: SuperEffMinor {};
            class AbrasionMedium: SuperEffMedium {};
            class AbrasionLarge: SuperEffLarge {};

            // Standard efficiency
            class Avulsion: StandardEff {};
            class AvulsionMinor: StandardEffMinor {};
            class AvulsionMedium: StandardEffMedium {};
            class AvulsionLarge: StandardEffLarge {};

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
            class Crush: StandardEff {};
            class CrushMinor: StandardEffMinor {};
            class CrushMedium: StandardEffMedium {};
            class CrushLarge: StandardEffLarge {};

            // Super efficiency
            class Cut: SuperEff {};
            class CutMinor: SuperEffMinor {};
            class CutMedium: SuperEffMedium {};
            class CutLarge: SuperEffLarge {};

            // Super efficiency
            class Laceration: SuperEff {};
            class LacerationMinor: SuperEffMinor {};
            class LacerationMedium: SuperEffMedium {};
            class LacerationLarge: SuperEffLarge {};

            // Increased efficiency
            class VelocityWound: IncreasedEff {};
            class VelocityWoundMinor: IncreasedEffMinor {};
            class VelocityWoundMedium: IncreasedEffMedium {};
            class VelocityWoundLarge: IncreasedEffLarge {};

            // Increased efficiency
            class PunctureWound: IncreasedEff {};
            class PunctureWoundMinor: IncreasedEffMinor {};
            class PunctureWoundMedium: IncreasedEffMedium {};
            class PunctureWoundLarge: IncreasedEffLarge {};
        };

        class PackingBandage: BasicBandage {
            // Standard efficiency
            class Abrasion: StandardEff {};
            class AbrasionMinor: StandardEffMinor {};
            class AbrasionMedium: StandardEffMedium {};
            class AbrasionLarge: StandardEffLarge {};

            // Standard efficiency
            class Avulsion: StandardEff {};
            class AvulsionMinor: StandardEffMinor {};
            class AvulsionMedium: StandardEffMedium {};
            class AvulsionLarge: StandardEffLarge {};

            // Standard efficiency
            class Contusion: StandardEff {};
            class ContusionMinor: StandardEffMinor {};
            class ContusionMedium: StandardEffMedium {};
            class ContusionLarge: StandardEffLarge {};

            // Standard efficiency
            class Crush: StandardEff {};
            class CrushMinor: StandardEffMinor {};
            class CrushMedium: StandardEffMedium {};
            class CrushLarge: StandardEffLarge {};

            // Standard efficiency
            class Cut: StandardEff {};
            class CutMinor: StandardEffMinor {};
            class CutMedium: StandardEffMedium {};
            class CutLarge: StandardEffLarge {};

            // Standard efficiency
            class Laceration: StandardEff {};
            class LacerationMinor: StandardEffMinor {};
            class LacerationMedium: StandardEffMedium {};
            class LacerationLarge: StandardEffLarge {};

            // Super efficiency
            class VelocityWound: SuperEff {};
            class VelocityWoundMinor: SuperEffMinor {};
            class VelocityWoundMedium: SuperEffMedium {};
            class VelocityWoundLarge: SuperEffLarge {};

            // Super efficiency
            class PunctureWound: SuperEff {};
            class PunctureWoundMinor: SuperEffMinor {};
            class PunctureWoundMedium: SuperEffMedium {};
            class PunctureWoundLarge: SuperEffLarge {};
        };

        class ElasticBandage: BasicBandage {
            // Standard efficiency
            class Abrasion: StandardEff {};
            class AbrasionMinor: StandardEffMinor {};
            class AbrasionMedium: StandardEffMedium {};
            class AbrasionLarge: StandardEffLarge {};

            // Super efficiency
            class Avulsion: SuperEff {};
            class AvulsionMinor: SuperEffMinor {};
            class AvulsionMedium: SuperEffMedium {};
            class AvulsionLarge: SuperEffLarge {};

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
            class Crush: SuperEff {};
            class CrushMinor: SuperEffMinor {};
            class CrushMedium: SuperEffMedium {};
            class CrushLarge: SuperEffLarge {};

            // Standard efficiency
            class Cut: StandardEff {};
            class CutMinor: StandardEffMinor {};
            class CutMedium: StandardEffMedium {};
            class CutLarge: StandardEffLarge {};

            // Standard efficiency
            class Laceration: StandardEff {};
            class LacerationMinor: StandardEffMinor {};
            class LacerationMedium: StandardEffMedium {};
            class LacerationLarge: StandardEffLarge {};

            // Increased efficiency
            class VelocityWound: IncreasedEff {};
            class VelocityWoundMinor: IncreasedEffMinor {};
            class VelocityWoundMedium: IncreasedEffMedium {};
            class VelocityWoundLarge: IncreasedEffLarge {};

            // Increased efficiency
            class PunctureWound: IncreasedEff {};
            class PunctureWoundMinor: IncreasedEffMinor {};
            class PunctureWoundMedium: IncreasedEffMedium {};
            class PunctureWoundLarge: IncreasedEffLarge {};
        };

        class QuikClot: BasicBandage {
            // Standard efficiency
            class Abrasion: StandardEff {};
            class AbrasionMinor: StandardEffMinor {};
            class AbrasionMedium: StandardEffMedium {};
            class AbrasionLarge: StandardEffLarge {};

            // Standard efficiency
            class Avulsion: StandardEff {};
            class AvulsionMinor: StandardEffMinor {};
            class AvulsionMedium: StandardEffMedium {};
            class AvulsionLarge: StandardEffLarge {};

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
            class Crush: StandardEff {};
            class CrushMinor: StandardEffMinor {};
            class CrushMedium: StandardEffMedium {};
            class CrushLarge: StandardEffLarge {};

            // Standard efficiency
            class Cut: StandardEff {};
            class CutMinor: StandardEffMinor {};
            class CutMedium: StandardEffMedium {};
            class CutLarge: StandardEffLarge {};

            // Standard efficiency
            class Laceration: StandardEff {};
            class LacerationMinor: StandardEffMinor {};
            class LacerationMedium: StandardEffMedium {};
            class LacerationLarge: StandardEffLarge {};

            // Super efficiency
            class VelocityWound: SuperEff {};
            class VelocityWoundMinor: SuperEffMinor {};
            class VelocityWoundMedium: SuperEffMedium {};
            class VelocityWoundLarge: SuperEffLarge {};

            // Super efficiency
            class PunctureWound: SuperEff {};
            class PunctureWoundMinor: SuperEffMinor {};
            class PunctureWoundMedium: SuperEffMedium {};
            class PunctureWoundLarge: SuperEffLarge {};
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

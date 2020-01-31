class ACEGVAR(medical_treatment,actions) {
    class BasicBandage {
        treatmentTime = QUOTE(call ACEFUNC(medical_treatment,getBandageTime) / 2);
    };

    class ApplyTourniquet: BasicBandage {
        treatmentTime = 2.5;
    };
    class RemoveTourniquet: ApplyTourniquet {
        treatmentTime = 1.5;
    };

    class Splint: BasicBandage {
        treatmentTime = 5;
    };

    class Morphine;
    class Apap: Morphine {
        allowedSelections[] = {"head"};
        displayName = CSTRING(Inject_Apap);
        displayNameProgress = CSTRING(Injecting_Apap);
        items[] = {"AFMED_apap"};
        condition = "!((_this select 1) getVariable ['ACE_isUnconscious', false])";
        litter[] = { {"All", "", {"AFMED_MedicalLitter_apap"}} };
    };

    class BloodIV: BasicBandage {
        treatmentTime = 5;
    };
};

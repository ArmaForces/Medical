#define COMPONENT medical_arsenal
#include "\z\afmed\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_MEDICAL_ARSENAL
    #define DEBUG_MODE_FULL
#endif
    #ifdef DEBUG_SETTINGS_MEDICAL_ARSENAL
    #define DEBUG_SETTINGS DEBUG_SETTINGS_MEDICAL_ARSENAL
#endif

#include "\z\afmed\addons\main\script_macros.hpp"

#define ALL_MEDICAL_ITEMS [\
    "ACE_fieldDressing", "ACE_packingBandage", "ACE_elasticBandage", "ACE_quikclot",\
    "ACE_tourniquet", "ACE_splint",\
    "ACE_morphine", "ACE_adenosine", "ACE_atropine", "ACE_epinephrine",\
    "ACE_plasmaIV", "ACE_plasmaIV_500", "ACE_plasmaIV_250",\
    "ACE_bloodIV", "ACE_bloodIV_500", "ACE_bloodIV_250",\
    "ACE_salineIV", "ACE_salineIV_500", "ACE_salineIV_250",\
    "ACE_personalAidKit", "ACE_surgicalKit", "ACE_bodyBag",\
    "AFMED_apap"\
]

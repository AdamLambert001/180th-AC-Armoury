//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 200.146773 on Stable branch
// Generated with ALiVE version 1.12.1.2002131
//////////////////////////////////////////////////////////////////////////////////

class CfgFactionClasses {
    class O_SMArmy {
        displayName = "Seperatist Militia ";
        side = 0;
        flag = "\MRC\JLTS\Core_mod_droids\data\markers\flags\cis_ca.paa";
        icon = "\MRC\JLTS\Core_mod_droids\data\markers\flags\cis_ca.paa";
        priority = 0;
    };
};

class CfgGroups {
    class EAST {

        class O_SMArmy {
            name = "Seperatist Militia ";

            class Infantry {
                name = "Infantry";

                class o_smarmy_infantry_squad {
                    name = "Squad";
                    side = 0;
                    faction = "O_SMArmy";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "O_OSMArmy_Leader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "O_OSMArmy_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "O_OSMArmy_Medic_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "O_OSMArmy_AT_Soldier_02";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "O_OSMArmy_Auto_Rifleman_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "O_OSMArmy_Rifleman_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "O_OSMArmy_Rifleman_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "O_OSMArmy_Rifleman_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "O_OSMArmy_Rifleman_01";
                    };
                };

                class o_smarmy_infantry_fire_team {
                    name = "Fire Team";
                    side = 0;
                    faction = "O_SMArmy";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "O_OSMArmy_Rifleman_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "O_OSMArmy_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "O_OSMArmy_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "O_OSMArmy_Rifleman_01";
                    };
                };

            };

            class SpecOps {
                name = "SpecOps";

            };

            class Motorized {
                name = "Motorized";

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support";

            };

            class Mechanized {
                name = "Mechanized";

            };

            class Armored {
                name = "Armored";

            };

            class Artillery {
                name = "Artillery";

            };

            class Naval {
                name = "Naval";

            };

            class Air {
                name = "Air";

            };


        };

    };
};


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class I_PFFArmy_AT_Soldier_01;
    class I_PFFArmy_AT_Soldier_01_OCimport_01 : I_PFFArmy_AT_Soldier_01 { scope = 0; class EventHandlers; };
    class I_PFFArmy_AT_Soldier_01_OCimport_02 : I_PFFArmy_AT_Soldier_01_OCimport_01 { class EventHandlers; };

    class I_PFFArmy_AMG_Transport_01;
    class I_PFFArmy_AMG_Transport_01_OCimport_01 : I_PFFArmy_AMG_Transport_01 { scope = 0; class EventHandlers; class Turrets; };
    class I_PFFArmy_AMG_Transport_01_OCimport_02 : I_PFFArmy_AMG_Transport_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoGunner_1;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class I_PFFArmy_Medic_01;
    class I_PFFArmy_Medic_01_OCimport_01 : I_PFFArmy_Medic_01 { scope = 0; class EventHandlers; };
    class I_PFFArmy_Medic_01_OCimport_02 : I_PFFArmy_Medic_01_OCimport_01 { class EventHandlers; };

    class OPTRE_M813_TT;
    class OPTRE_M813_TT_OCimport_01 : OPTRE_M813_TT { scope = 0; class EventHandlers; class Turrets; };
    class OPTRE_M813_TT_OCimport_02 : OPTRE_M813_TT_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoGunner_1;
            class CargoGunner_02;
            class CargoGunner_03;
            class CargoGunner_04;
            class CargoGunner_05;
            class CargoGunner_06;
            class CargoGunner_07;
        };
    };

    class I_PFFArmy_Rifleman_01;
    class I_PFFArmy_Rifleman_01_OCimport_01 : I_PFFArmy_Rifleman_01 { scope = 0; class EventHandlers; };
    class I_PFFArmy_Rifleman_01_OCimport_02 : I_PFFArmy_Rifleman_01_OCimport_01 { class EventHandlers; };

    class I_PFFArmy_Auto_Rifleman_01;
    class I_PFFArmy_Auto_Rifleman_01_OCimport_01 : I_PFFArmy_Auto_Rifleman_01 { scope = 0; class EventHandlers; };
    class I_PFFArmy_Auto_Rifleman_01_OCimport_02 : I_PFFArmy_Auto_Rifleman_01_OCimport_01 { class EventHandlers; };

    class I_PFFArmy_AMG_Transport_Repurposed_01;
    class I_PFFArmy_AMG_Transport_Repurposed_01_OCimport_01 : I_PFFArmy_AMG_Transport_Repurposed_01 { scope = 0; class EventHandlers; class Turrets; };
    class I_PFFArmy_AMG_Transport_Repurposed_01_OCimport_02 : I_PFFArmy_AMG_Transport_Repurposed_01_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoGunner_1;
            class MainTurret;
        };
    };

    class I_PFFArmy_Leader_01;
    class I_PFFArmy_Leader_01_OCimport_01 : I_PFFArmy_Leader_01 { scope = 0; class EventHandlers; };
    class I_PFFArmy_Leader_01_OCimport_02 : I_PFFArmy_Leader_01_OCimport_01 { class EventHandlers; };


    class O_OSMArmy_AT_Soldier_02 : I_PFFArmy_AT_Soldier_01_OCimport_02 {
        author = "Wyvern Studios";
        scope = 2;
        scopeCurator = 2;
        displayName = "AT Soldier";
        side = 0;
        faction = "O_SMArmy";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "U_I_C_Soldier_Para_1_F";

        linkedItems[] = {"V_Chestrig_oli","H_Bandanna_camo","ItemMap","ItemGPS","SWLB_comlink_hush98_1","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_Chestrig_oli","H_Bandanna_camo","ItemMap","ItemGPS","SWLB_comlink_hush98_1","ItemCompass","ItemWatch"};

        weapons[] = {"JLTS_E5","JLTS_RPS6"};
        respawnWeapons[] = {"JLTS_E5","JLTS_RPS6"};

        magazines[] = {"JLTS_E5_mag","JLTS_RPS6_mag","JLTS_E5_mag"};
        respawnMagazines[] = {"JLTS_E5_mag","JLTS_RPS6_mag","JLTS_E5_mag"};

        backpack = "B_Carryall_cbr";

        ALiVE_orbatCreator_loadout[] = {{"JLTS_E5","","","",{"JLTS_E5_mag",100},{},""},{"JLTS_RPS6","","","",{"JLTS_RPS6_mag",1},{},""},{},{"U_I_C_Soldier_Para_1_F",{{"ACE_fieldDressing",3},{"ACE_elasticBandage",5},{"ACE_packingBandage",3},{"ACE_epinephrine",1},{"ACE_morphine",1},{"ACE_tourniquet",1}}},{"V_Chestrig_oli",{{"JLTS_credits_10",2},{"JLTS_credits_50",1},{"JLTS_E5_mag",10,100},{"442_thermal_det_mag",2,1}}},{"B_Carryall_cbr",{{"JLTS_RPS6_HE_mag",2,1},{"JLTS_RPS6_mag",2,1}}},"H_Bandanna_camo","",{},{"ItemMap","ItemGPS","SWLB_comlink_hush98_1","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OSMArmy_AMG_Transport_01 : I_PFFArmy_AMG_Transport_01_OCimport_02 {
        author = "Wyvern Studios";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMG Transport";
        side = 0;
        faction = "O_SMArmy";
        crew = "I_PFFArmy_Rifleman_01";

        class Turrets : Turrets {
            class CargoGunner_1 : CargoGunner_1 { gunnerType = "O_OSMArmy_Rifleman_01"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = "I_PFFArmy_Rifleman_01"; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = "I_PFFArmy_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'OPTRE_Vehicles\Warthog\data\warthog_ins_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "colorinnie";

    };

    class O_OSMArmy_Medic_01 : I_PFFArmy_Medic_01_OCimport_02 {
        author = "Wyvern Studios";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 0;
        faction = "O_SMArmy";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "U_I_C_Soldier_Para_4_F";

        linkedItems[] = {"mgsr_carrier_belt","H_Beret_CSAT_01_F","ItemMap","ItemGPS","SWLB_comlink_hush98_1","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"mgsr_carrier_belt","H_Beret_CSAT_01_F","ItemMap","ItemGPS","SWLB_comlink_hush98_1","ItemCompass","ItemWatch"};

        weapons[] = {"JLTS_E5"};
        respawnWeapons[] = {"JLTS_E5"};

        magazines[] = {"JLTS_E5_mag","JLTS_E5_mag"};
        respawnMagazines[] = {"JLTS_E5_mag","JLTS_E5_mag"};

        backpack = "ls_mandalorian_medic_backpack";

        ALiVE_orbatCreator_loadout[] = {{"JLTS_E5","","","",{"JLTS_E5_mag",100},{},""},{},{},{"U_I_C_Soldier_Para_4_F",{{"ACE_fieldDressing",3},{"ACE_elasticBandage",5},{"ACE_packingBandage",3},{"ACE_epinephrine",1},{"ACE_morphine",1},{"ACE_tourniquet",1}}},{"mgsr_carrier_belt",{{"JLTS_credits_10",2},{"JLTS_credits_50",1},{"JLTS_E5_mag",5,100}}},{"ls_mandalorian_medic_backpack",{{"ACE_elasticBandage",20},{"ACE_fieldDressing",15},{"ACE_packingBandage",15},{"ACE_quikclot",10},{"ACE_epinephrine",10},{"ACE_morphine",10},{"JLTS_drugs_deathstick",4},{"JLTS_drugs_medikit",1},{"JLTS_drugs_bacta",4},{"ACE_splint",4},{"ACE_surgicalKit",1},{"ACE_tourniquet",5},{"ACE_salineIV_250",2}}},"H_Beret_CSAT_01_F","G_Respirator_blue_F",{},{"ItemMap","ItemGPS","SWLB_comlink_hush98_1","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OSMArmy_AMG_Transport_Troop_Carrier_01 : OPTRE_M813_TT_OCimport_02 {
        author = "Wyvern Studios";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMG Transport (Troop Carrier)";
        side = 0;
        faction = "O_SMArmy";
        crew = "O_SMArmy_Rifleman_01";

        class Turrets : Turrets {
            class CargoGunner_1 : CargoGunner_1 { gunnerType = "O_OSMArmy_Rifleman_01"; };
            class CargoGunner_02 : CargoGunner_02 { gunnerType = "O_SMArmy_Rifleman_01"; };
            class CargoGunner_03 : CargoGunner_03 { gunnerType = "O_SMArmy_Rifleman_01"; };
            class CargoGunner_04 : CargoGunner_04 { gunnerType = "O_SMArmy_Rifleman_01"; };
            class CargoGunner_05 : CargoGunner_05 { gunnerType = "O_OSMArmy_Medic_01"; };
            class CargoGunner_06 : CargoGunner_06 { gunnerType = "O_OSMArmy_AT_Soldier_02"; };
            class CargoGunner_07 : CargoGunner_07 { gunnerType = "O_OSMArmy_Auto_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'OPTRE_Vehicles\Warthog\data\warthog_co.paa'];_unit setObjectTextureGlobal [1,'OPTRE_Vehicles\Warthog\data\warthog_addons_co.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "colorgreen";

    };

    class O_OSMArmy_Rifleman_01 : I_PFFArmy_Rifleman_01_OCimport_02 {
        author = "Wyvern Studios";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 0;
        faction = "O_SMArmy";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "U_I_C_Soldier_Para_4_F";

        linkedItems[] = {"V_Chestrig_oli","H_ShemagOpen_tan","ItemMap","ItemGPS","SWLB_comlink_hush98_1","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_Chestrig_oli","H_ShemagOpen_tan","ItemMap","ItemGPS","SWLB_comlink_hush98_1","ItemCompass","ItemWatch"};

        weapons[] = {"JLTS_E5"};
        respawnWeapons[] = {"JLTS_E5"};

        magazines[] = {"JLTS_E5_mag","JLTS_E5_mag"};
        respawnMagazines[] = {"JLTS_E5_mag","JLTS_E5_mag"};

        ALiVE_orbatCreator_loadout[] = {{"JLTS_E5","","","",{"JLTS_E5_mag",100},{},""},{},{},{"U_I_C_Soldier_Para_4_F",{{"ACE_fieldDressing",3},{"ACE_elasticBandage",5},{"ACE_packingBandage",3},{"ACE_epinephrine",1},{"ACE_morphine",1},{"ACE_tourniquet",1}}},{"V_Chestrig_oli",{{"JLTS_credits_10",2},{"JLTS_credits_50",1},{"JLTS_E5_mag",10,100},{"442_thermal_det_mag",2,1}}},{},"H_ShemagOpen_tan","",{},{"ItemMap","ItemGPS","SWLB_comlink_hush98_1","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OSMArmy_Auto_Rifleman_01 : I_PFFArmy_Auto_Rifleman_01_OCimport_02 {
        author = "Wyvern Studios";
        scope = 2;
        scopeCurator = 2;
        displayName = "Auto-Rifleman";
        side = 0;
        faction = "O_SMArmy";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "U_I_C_Soldier_Para_4_F";

        linkedItems[] = {"V_PlateCarrierIA1_dgtl","H_Booniehat_mgrn","ItemMap","ItemGPS","SWLB_comlink_hush98_1","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_PlateCarrierIA1_dgtl","H_Booniehat_mgrn","ItemMap","ItemGPS","SWLB_comlink_hush98_1","ItemCompass","ItemWatch"};

        weapons[] = {"JLTS_E5C_stock"};
        respawnWeapons[] = {"JLTS_E5C_stock"};

        magazines[] = {"JLTS_E5C_mag","JLTS_E5C_mag"};
        respawnMagazines[] = {"JLTS_E5C_mag","JLTS_E5C_mag"};

        backpack = "B_AssaultPack_rgr";

        ALiVE_orbatCreator_loadout[] = {{"JLTS_E5C_stock","","","",{"JLTS_E5C_mag",150},{},""},{},{},{"U_I_C_Soldier_Para_4_F",{{"ACE_fieldDressing",3},{"ACE_elasticBandage",5},{"ACE_packingBandage",3},{"ACE_epinephrine",1},{"ACE_morphine",1},{"ACE_tourniquet",1},{"JLTS_E5C_mag",3,150}}},{"V_PlateCarrierIA1_dgtl",{{"JLTS_credits_10",2},{"JLTS_credits_50",1},{"442_thermal_det_mag",2,1}}},{"B_AssaultPack_rgr",{{"JLTS_E5C_mag",10,150}}},"H_Booniehat_mgrn","G_Balaclava_blk",{},{"ItemMap","ItemGPS","SWLB_comlink_hush98_1","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_SMArmy_AMG_Transport_Repurposed_01 : I_PFFArmy_AMG_Transport_Repurposed_01_OCimport_02 {
        author = "Wyvern Studios";
        scope = 2;
        scopeCurator = 2;
        displayName = "AMG Transport (Repurposed)";
        side = 2;
        faction = "O_SMArmy";
        crew = "I_PFFArmy_Rifleman_01";

        class Turrets : Turrets {
            class CargoGunner_1 : CargoGunner_1 { gunnerType = "O_OSMArmy_Rifleman_01"; };
            class MainTurret : MainTurret { gunnerType = "I_PFFArmy_Rifleman_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class O_OSMArmy_Leader_01 : I_PFFArmy_Leader_01_OCimport_02 {
        author = "Wyvern Studios";
        scope = 2;
        scopeCurator = 2;
        displayName = "Leader";
        side = 0;
        faction = "O_SMArmy";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "mgsr_fatigues_short";

        linkedItems[] = {"mgsr_carrier_belt","H_Beret_blk","ItemMap","ItemGPS","SWLB_comlink_hush98_1","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"mgsr_carrier_belt","H_Beret_blk","ItemMap","ItemGPS","SWLB_comlink_hush98_1","ItemCompass","ItemWatch"};

        weapons[] = {"JLTS_E5"};
        respawnWeapons[] = {"JLTS_E5"};

        magazines[] = {"JLTS_E5_mag","JLTS_E5_mag"};
        respawnMagazines[] = {"JLTS_E5_mag","JLTS_E5_mag"};

        ALiVE_orbatCreator_loadout[] = {{"JLTS_E5","","","",{"JLTS_E5_mag",100},{},""},{},{},{"mgsr_fatigues_short",{{"ACE_fieldDressing",3},{"ACE_elasticBandage",5},{"ACE_packingBandage",3},{"ACE_epinephrine",1},{"ACE_morphine",1},{"ACE_tourniquet",1}}},{"mgsr_carrier_belt",{{"JLTS_credits_10",2},{"JLTS_credits_50",1},{"JLTS_E5_mag",5,100}}},{},"H_Beret_blk","mgsr_scarf_khaki",{},{"ItemMap","ItemGPS","SWLB_comlink_hush98_1","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};
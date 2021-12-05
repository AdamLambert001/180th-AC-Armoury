class CfgPatches
{
	class WV_Armory_Customs
	{
		author="Wyvern Studios";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"SWLB_clones",
			"SWLB_droids",
			"SWLB_main"
		};
		requiredVersion=0.1;
		units[]=
		{
			"180th_Trooper",
		};
		weapons[]=
		{
			"180th_Trooper_Helmet",
			"180th_Trooper_Uniform",
			"180th_Officer_Armor"
		};
	};
};
class CfgFactionClasses 
{
	class 180thACA
	{
	displayName = "180th Assault Corps - Armory";
	};
};
class CfgEditorSubcategories
{
	class WS_180th_Armory_Customs
	{
		displayName="Heroes of Wyvern Company";
	};
	

};
class CfgWeapons
{
	class SWLB_clone_P2_helmet;
	class SWLB_clone_ab_helmet;
	class SWLB_clone_P15_helmet;
	class SWLB_clone_ARF_P1_helmet;
	class SWLB_clone_ARF_P2_helmet;
	class SWLB_clone_barc_helmet;
	class SWLB_P2_SpecOps_Helmet;
	class SWLB_clone_pilot_P2_helmet;
	class SWLB_clone_eng_helmet;
	class ls_blueforHelmet_base;
	class HeadgearItem;
    class NVGoggles;
    class 180th_Paul_NVVisor: NVGoggles
	{
		author="Wyvern Studios";
		displayName="[180th Base] Clone NV Visor (Paul)";
		modelOptics="\SWLB_clones\SWLB_clone_nvg_optic_dummy.p3d";
		model="\SWLB_clones\swlb_clone_nvg_on.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\accessories\180th_Paul_NVG.paa" 
		};
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_ccVisor_ca.paa";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={2,3};
		class ItemInfo
		{
			type=616;
			uniformModel="\SWLB_clones\swlb_clone_nvg_on.p3d";
			modelOff="\SWLB_clones\swlb_clone_nvg_on.p3d";
			mass=20;
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class 180th_Jerry_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Jerry)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_CUSTOMS\data\helmets\180th_Jerry_Helmet.paa",
		};
	};
    class 180th_Paul_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Paul)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_CUSTOMS\data\helmets\180th_Paul_Helmet.paa",
		};
	};
    class 180th_Soviet_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Soviet)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_CUSTOMS\data\helmets\180th_Soviet_Helmet.paa",
		};
	};
    class 180th_King_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (King)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_CUSTOMS\data\helmets\180th_King_Helmet.paa",
		};
	};
    class 180th_Tom_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Tom)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_CUSTOMS\data\helmets\180th_Tom_Helmet.paa",
		};
	};
    class 180th_Roach_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helme (Roach)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Roach_Helmet.paa"
		};
	};
    class 180th_Incarnate_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Incarnate)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Incarnate_Helmet.paa"
		};
	};
    class 180th_Trash_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (TrashBag)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Judge_Helmet.paa"
		};
	};
    class 180th_Wayne_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Wayne)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Wayne_Helmet.paa"
		};
	};
      class 180th_Icarus_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Icarus)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Icarus_Helmet.paa"
		};
	};
	 class 180th_Jazz_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Jazz)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Jazz_Helmet.paa"
		};
	};
     class 180th_O_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (O)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_O_Helmet.paa"
		};
	};
    class 180th_Python_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Python)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Python_Helmet.paa"
		};
	};
	class 180th_Frost_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Frost)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_CUSTOMS\data\helmets\180th_Frost_Helmet.paa",
		};
	};
    class 180th_Hawk_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Hawk)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Hawk_Helmet.paa"
		};
	};
	   class 180th_Raccoon_INF_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Raccoon)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Raccoon_Helmet_I.paa"
		};
	};
	   class 180th_Echo_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Echo)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Echo_Helmet.paa"
		};
	};
      class 180th_Dread_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Dread)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Dread_Helmet.paa"
		};
	};
    class 180th_Fake_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Fake)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Fake_Helmet.paa"
		};
	};
    class 180th_Fire_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Fire)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Fire_Helmet.paa"
		};
	};
	class 180th_Jamison_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Jamison)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Jamison_Helmet.paa"
		};
	};
	class 180th_Jax_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Jax)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Jax_Helmet.paa"
		};
	};
	class 180th_Lorax_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Lorax)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Lorax_Helmet.paa"
		};
	};
	class 180th_Kat_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Kat)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Kat_Helmet.paa"
		};
	};
	class 180th_Pey_INF_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Pey)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Pey_Helmet.paa"
		};
	};
	class 180th_Green_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Green)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Green_Helmet.paa"
		};
	};
	class 180th_Gypsy_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Gypsy)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Gypsy_Helmet.paa"
		};
	};
	class 180th_Zodiac_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Zodiac)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Zodiac_Helmet.paa"
		};
	};
	class 180th_Degs_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Degs)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Degs_Helmet.paa"
		};
	};
	class 180th_Wrath_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Wrath)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Wrath_Helmet.paa"
		};
	};
		class 180th_Rattay_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Rattay)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Rattay_Helmet.paa"
		};
	};
	class 180th_Michael_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Michael)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Michael_Helmet.paa"
		};
	};
	class 180th_Shrieker_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Shrieker)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Shrieker_Helmet.paa"
		};
	};
	class 180th_Krieg_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Krieg)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Krieg_Helmet.paa"
		};
	};
	class 180th_Slav_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Slav)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Slav_Helmet.paa"
		};
	};
	class 180th_Relic_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Relic)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Relic_Helmet.paa"
		};
	};
	class 180th_Zarush_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Zarush)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Zarush_Helmet.paa"
		};
	};
	class 180th_Abor_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Abor)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Abor_Helmet.paa"
		};
	};
	class 180th_Kreed_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Kreed)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Kreed_Helmet.paa"
		};
	};
	class 180th_Kloud_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Kloud)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Kloud_Helmet.paa"
		};
	};
	class 180th_Reaper_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Reaper)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Reaper_Helmet.paa"
		};
	};
	class 180th_Hoplite_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Hoplite)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Hoplite_Helmet.paa"
		};
	};
	class 180th_Wallace_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Wallace)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Wallace_Helmet.paa"
		};
	};
    class 180th_Grape_Helmet: SWLB_clone_P2_helmet
	{
		displayName="Grape Man Helmet";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Grape_Man_Helmet.paa"
		};
	};
	class 180th_Nurse_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Misc.] Clone trooper helmet (Nurse)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Nurse_Helmet.paa"
		};
	};
	
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> DETACHMENT 
	 class 180th_Delta_Helmet: SWLB_clone_eng_helmet
	{
		displayName="[180th Customs] Clone trooper engineer helmet (Delta)";
        picture="\SWLB_clones\data\ui\icon_SWLB_clone_eng_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Delta_Helmet_ENG.paa",
		};
	};
	class 180th_Lucian_Helmet: SWLB_clone_eng_helmet
	{
		displayName="[180th Customs] Clone trooper engineer helmet (Lucian)";
        picture="\SWLB_clones\data\ui\icon_SWLB_clone_eng_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Lucian_Helmet_ENG.paa",
		};
	};
	class 180th_Catcher_Helmet: SWLB_clone_ARF_P1_helmet
	{
		displayName="[180th Customs] Clone arf trooper helmet (Catcher)";
      	picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_arf_p1_ca.paa";
		hiddenSelectionsTextures[]=
		{
		    "WS_A_CUSTOMS\data\helmets\180th_Catcher_ARF_Helmet.paa",
		};
	};
    class 180th_Cards_Arc_Helmet: SWLB_clone_P15_helmet
	{
		displayName="[180th Customs] Clone arc trooper helmet (Cards)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
		    "WS_A_CUSTOMS\data\helmets\180th_Cards_ARC_Helmet.paa",
		};
	};
	class 180th_Soviet_Arc_Helmet: SWLB_clone_P15_helmet
	{
		displayName="[180th Customs] Clone arc trooper helmet (Soviet)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
		    "WS_A_CUSTOMS\data\helmets\180th_Soviet_ARC_Helmet.paa",
		};
	};
	class 180th_Wrath_Arc_Helmet: SWLB_clone_P15_helmet
	{
		displayName="[180th Customs] Clone arc trooper helmet (Wrath)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
		    "WS_A_CUSTOMS\data\helmets\180th_Wrath_Helmet_ARC.paa",
		};
	};
	class 180th_Racc_Arc_Helmet: SWLB_clone_P15_helmet
	{
		displayName="[180th Customs] Clone arc trooper helmet (Raccoon)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
		    "WS_A_CUSTOMS\data\helmets\180th_Raccoon_Helmet_A.paa",
		};
	};
	class 180th_Psychic_Helmet: SWLB_P2_SpecOps_Helmet
	{
		displayName="[180th Customs] Clone communication specialist Helmet (Psychic)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Psychic_Helmet.paa"
		};
	};
    class 180th_Raccoon_Helmet: SWLB_clone_pilot_P2_helmet
	{
		displayName="[180th Customs] Clone pilot helmet (Raccoon)";
		picture = "\SWLB_clones\data\ui\icon_swlb_clone_pilot_p2_helmet_ca";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Raccoon_Helmet_v2.paa",
		};
	};
     class 180th_Pey_Helmet: SWLB_clone_pilot_P2_helmet
	{
		displayName="[180th Customs] Clone pilot helmet (Pey)";
		picture = "\SWLB_clones\data\ui\icon_swlb_clone_pilot_p2_helmet_ca";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Pey_Helmet_P.paa",
		};
	};
	 class 180th_Kroner_Helmet: SWLB_clone_pilot_P2_helmet
	{
		displayName="[180th Customs] Clone pilot helmet (Kroner)";
		picture = "\SWLB_clones\data\ui\icon_swlb_clone_pilot_p2_helmet_ca";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Kroner_Helmet.paa",
		};
	};
	  class 180th_Paul_Helmet_P: SWLB_clone_pilot_P2_helmet
	{
		displayName="[180th Customs] Clone pilot helmet (Paul)";
		picture = "\SWLB_clones\data\ui\icon_swlb_clone_pilot_p2_helmet_ca";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Paul_Helmet_P.paa",
		};
	};
	 class 180th_Fluke_Helmet: SWLB_clone_pilot_P2_helmet
	{
		displayName="[180th Customs] Clone pilot helmet (Fluke)";
		picture = "\SWLB_clones\data\ui\icon_swlb_clone_pilot_p2_helmet_ca";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Fluke_Helmet.paa",
		};
	};
	class 180th_Zero_Helmet: ls_blueforHelmet_base
	{
		scope=2;
		displayName="[180th Customs] Clone hazard trooper helmet (Zero)";
		model="ls_armor_bluefor\helmet\gar\desert\ls_gar_desert_helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"visor"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Zero_Helmet.paa",
			"ls_armor_bluefor\helmet\gar\desert\data\visor_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="ls_armor_bluefor\helmet\gar\desert\ls_gar_desert_helmet.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1",
				"visor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=50;
					passThrough=0.5;
				};
			};
		};
	};
    class SWLB_clone_basic_armor;
	class SWLB_clone_kama_armor;
	class SWLB_clone_officer_armor;
	class SWLB_clone_commander_armor;
	class SWLB_clone_airborne_armor;
	class SWLB_clone_airborne_nco_armor;
	class SWLB_clone_medic_armor;
	class SWLB_clone_cfr_armor;
	class SWLB_clone_recon_armor;
	class SWLB_clone_recon_nco_armor;
	class SWLB_clone_recon_officer_armor;
	class SWLB_clone_arc_armor;
	class SWLB_clone_assault_armor;
	class SWLB_clone_grenadier_armor;
	class SWLB_clone_specialist_armor;
	class VestItem;
    class 180th_Jerry_Armor: SWLB_clone_commander_armor
	{
		displayName="[180th Customs] Clone trooper captain vest (Jerry)";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_CUSTOMS\data\vests\180th_Officer_ACC.paa"
		};
	};
	class 180th_Test_Armor: SWLB_clone_commander_armor
	{
		displayName="[180th Customs] Clone trooper captain vest (Test)";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_CUSTOMS\data\vests\180th_Officer_Test_ACC.paa"
		};
	};
    class 180th_Cards_ARC_Armor: SWLB_clone_arc_armor
	{
		displayName="[180th Customs] Clone arc trooper vest (Cards)";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_CUSTOMS\data\vests\180th_Cards_ACC_ARC.paa",
			"\WS_A_CUSTOMS\data\vests\180th_Cards_ACC_OFF.paa"
		};
	};
	class 180th_Soviet_ARC_Armor: SWLB_clone_arc_armor
	{
		displayName="[180th Customs] Clone arc trooper vest (Soviet)";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_CUSTOMS\data\vests\180th_Soviet_ACC_ARC.paa",
			"\WS_A_CUSTOMS\data\vests\180th_Soviet_ACC_OFF.paa"
		};
	};
	  class 180th_Raccoon_ARC_Armor: SWLB_clone_arc_armor
	{
		displayName="[180th Customs] Clone arc trooper vest (Raccoon)";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_CUSTOMS\data\vests\180th_Racc_ACC_ARC.paa",
			"\WS_A_CUSTOMS\data\vests\180th_Raccoon_Vest_A.paa"
		};
	};
	 class 180th_Wrath_ARC_Armor: SWLB_clone_arc_armor
	{
		displayName="[180th Customs] Clone arc trooper vest (Wrath)";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_CUSTOMS\data\vests\180th_Wrath_ACC_ARC.paa",
			"\WS_A_CUSTOMS\data\vests\180th_Wrath_ACC_OFF.paa"
		};
	};
    class 180th_Raccoon_Vest: SWLB_clone_basic_armor
	{
		displayName="[180th Customs] Clone lieutenant Pauldron (Raccoon)";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_lieutenant_armor.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\WS_A_CUSTOMS\data\vests\180th_Raccoon_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_lieutenant_armor.p3d";
			containerClass="Supply40";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=6;
					PassThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=4;
					passThrough=0.30000001;
				};
			};
		};
	};

    class SWLB_clone_uniform;
	class UniformItem;
	class 180th_Jerry_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Jerry)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Jerry";
			containerClass="Supply140";
			mass=40;
		};
	};
		class 180th_Paul_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Paul)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Paul";
			containerClass="Supply140";
			mass=40;
		};
	};
		class 180th_Soviet_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Soviet)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Soviet";
			containerClass="Supply140";
			mass=40;
		};
	};
		class 180th_King_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (King)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_King";
			containerClass="Supply140";
			mass=40;
		};
	};
		class 180th_Tom_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Tom)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Tom";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Roach_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Roach)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Roach";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Cards_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Cards)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Cards";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Incarnate_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Incarnate)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Incarnate";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Delta_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Delta)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Delta";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Wayne_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Wayne)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Wayne";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Icarus_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Icarus)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Icarus";
			containerClass="Supply140";
			mass=40;
		};
	};

	class 180th_O_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (O)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_O";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Python_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Python)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Python";
			containerClass="Supply140";
			mass=40;
		};
	};

	class 180th_Hawk_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Hawk)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Hawk";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Wrath_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Wrath)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Wrath";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Frost_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Frost)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Frost";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Slav_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Slav)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Slav";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Lucian_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Lucian)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Lucian";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Raccoon_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Raccoon)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Raccoon";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Pey_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Pey)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Pey";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Kat_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Kat)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Kat";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Catcher_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Catcher)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Catcher";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Trashbag_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Trashbag)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Trashbag";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Lorax_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Lorax)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Lorax";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Wallace_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Wallace)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Wallace";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Jamison_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Jamison)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Jamison";
			containerClass="Supply140";
			mass=40;
		};
	};
		class 180th_Zodiac_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Zodiac)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Zodiac";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Michael_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Michael)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Michael";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Degs_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Degs)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Degs";
			containerClass="Supply140";
			mass=40;
		};
	};
		class 180th_Echo_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Echo)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Echo";
			containerClass="Supply140";
			mass=40;
		};
	};
		class 180th_Kroner_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Kroner)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Kroner";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Grape_Uniform: SWLB_clone_uniform
	{
		displayName="Grape Man Armor";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Grape";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Jazz_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Jazz)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Jazz";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Zero_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Zero)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Zero";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Zarush_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Zarush)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Zarush";
			containerClass="Supply140";
			mass=40;
		};
	};
		class 180th_Green_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Green)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Green";
			containerClass="Supply140";
			mass=40;
		};
	};

	class 180th_Psychic_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Psychic)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Psychic";
			containerClass="Supply140";
			mass=40;
		};
	};
		class 180th_Fire_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Fire)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Fire";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Relic_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Relic)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Relic";
			containerClass="Supply140";
			mass=40;
		};
	};
		class 180th_Kreed_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Kreed)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Kreed";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Kloud_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Kloud)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Kloud";
			containerClass="Supply140";
			mass=40;
		};
	};
		class 180th_Krieg_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Krieg)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Krieg";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Reaper_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Reaper)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Reaper";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Hoplite_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Hoplite)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Hoplite";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Abor_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Abor)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Abor";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Nurse_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Misc.] Clone trooper uniform (Nurse)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Nurse";
			containerClass="Supply140";
			mass=40;
		};
	};
};
class CfgVehicles
{
	class SWLB_clone_base_P2;
	class SWLB_clone_assault_base_P2;
	class SWLB_clone_cfr_base_P2;
	class SWLB_clone_medic_base_P2;
	class SWLB_clone_RTO_base_P2;
	class SWLB_clone_recon_base_P2;
	class SWLB_clone_recon_nco_base_P2;
	class SWLB_clone_recon_officer_base_P2;
	class SWLB_clone_airborne_base_P2;
	class SWLB_clone_airborne_nco_base_P2;
	class SWLB_clone_lieutenant_base_P2;
	class SWLB_clone_captain_base_P2;
	class SWLB_clone_commander_base_P2;
	class SWLB_clone_marshal_commander_base_P2;
	class SWLB_clone_arc_base_P2;
	class SWLB_clone_pilot_base_P2;
	class SWLB_clone_sniper_base_P2;
	class SWLB_clone_sg_base_P2;
	class SWLB_clone_at_base_P2;
	class SWLB_clone_engineer_base_P2;
	class SWLB_clone_eod_base_P2;
	class SWLB_clone_backpack_predef_light;
	class SWLB_clone_backpack_predef_heavy;
	class SWLB_clone_backpack_predef_medic;
	class SWLB_clone_backpack_predef_sg;
	class SWLB_clone_backpack_RTO;
	class SWLB_clone_backpack;
	class SWLB_clone_backpack_heavy;
	class SWLB_clone_backpack_medic;
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> BACKPACKS 
	class 180th_Cards_RTO_Backpack: SWLB_clone_backpack_RTO
	{
		displayName="[180th Customs] Clone trooper rto backpack (Cards)";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_CUSTOMS\data\accessories\180th_Cards_RTO_Backpack.paa",
			"",
			"",
			"",
			"\WS_A_CUSTOMS\data\accessories\180th_Cards_RTO_Backpack.paa"
		};
	};
	class 180th_Wallace_RTO_Backpack: SWLB_clone_backpack_RTO
	{
		displayName="[180th Customs] Clone trooper rto backpack (Wallace)";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_CUSTOMS\data\accessories\180th_Wallace_RTO_Backpack.paa",
			"",
			"",
			"",
			"\WS_A_CUSTOMS\data\accessories\180th_Wallace_RTO_Backpack.paa"
		};
	};
	class 180th_Roach_RTO_Backpack: SWLB_clone_backpack_RTO
	{
		displayName="[180th Customs] Clone trooper rto backpack (Roach)";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_CUSTOMS\data\accessories\180th_Roach_RTO_Backpack.paa",
			"",
			"",
			"",
			"\WS_A_CUSTOMS\data\accessories\180th_Roach_RTO_Backpack.paa"
		};
	};
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ARMOR 
	class 180th_Jerry: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Jerry_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Jerry_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Jerry_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Jerry_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Jerry_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Paul: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Paul_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Paul_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Paul_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Paul_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Paul_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Soviet: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Soviet_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Soviet_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Soviet_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Soviet_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Soviet_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_King: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_King_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_King_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_King_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_King_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_King_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Cards: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Cards_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Cards_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Cards_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Cards_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Cards_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Incarnate: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Incarnate_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Incarnate_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Incarnate_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Incarnate_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Incarnate_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Delta: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Delta_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Delta_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Delta_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Delta_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Delta_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Wayne: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Wayne_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Wayne_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Wayne_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Wayne_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Wayne_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Icarus: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Icarus_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Icarus_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Icarus_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Icarus_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Icarus_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_O: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_O_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_O_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_O_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_O_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_O_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Python: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Python_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Python_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Python_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Python_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Python_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Slav: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Slav_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Slav_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Slav_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Slav_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Slav_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Tom: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Tom_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Tom_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Tom_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Tom_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Tom_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Hawk: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Hawk_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Hawk_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Hawk_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Hawk_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Hawk_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Wrath: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Wrath_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Wrath_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Wrath_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Wrath_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Wrath_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Lucian: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Lucian_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Lucian_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Lucian_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Lucian_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Lucian_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Kat: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Kat_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Kat_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Kat_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Kat_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Kat_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Raccoon: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Raccoon_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Racc_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Racc_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Raccoon_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Raccoon_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Pey: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Pey_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Pey_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Pey_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Pey_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Pey_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Jazz: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Jazz_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Jazz_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Jazz_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Jazz_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Jazz_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Zarush: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Zarush_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Zarush_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Zarush_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Zarush_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Zarush_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Catcher: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Catcher_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Catcher_ARF_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Catcher_ARF_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Catcher_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Catcher_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Trashbag: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Trashbag_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Judge_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Judge_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Trashbag_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Trashbag_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Lorax: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Lorax_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Lorax_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Lorax_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Lorax_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Lorax_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Jamison: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Jamison_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Jamison_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Jamison_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Jamison_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Jamison_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Fire: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Fire_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Fire_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Fire_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Fire_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Fire_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Relic: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Relic_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Relic_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Relic_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Relic_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Relic_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Grape: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Grape_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Grape_Man_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Grape_Man_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Grape_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Grape_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Zero: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Zero_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Zero_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Zero_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Zero_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Zero_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
		class 180th_Psychic: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Psychic_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Psychic_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Psychic_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Psychic_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Psychic_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Echo: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Echo_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Echo_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Echo_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Echo_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Echo_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Green: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Green_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Green_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Green_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Green_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Green_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
		class 180th_Roach: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Roach_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Roach_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Roach_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Roach_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Roach_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Wallace: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Wallace_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Wallace_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Wallace_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Wallace_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Wallace_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Frost: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Frost_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Frost_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Frost_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Frost_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Frost_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
		class 180th_Degs: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Degs_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Degs_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Degs_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Degs_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Degs_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Kroner: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Kroner_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Kroner_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Kroner_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Kroner_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Kroner_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
		class 180th_Zodiac: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Zodiac_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Zodiac_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Zodiac_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Zodiac_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Zodiac_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
		class 180th_Michael: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Michael_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Michael_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Michael_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Michael_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Michael_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Kreed: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Kreed_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Kreed_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Kreed_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Kreed_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Kreed_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Kloud: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Kloud_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Kloud_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Kloud_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Kloud_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Kloud_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Krieg: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Krieg_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Krieg_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Krieg_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Krieg_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Krieg_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
		class 180th_Reaper: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Reaper_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Reaper_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Reaper_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Reaper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Reaper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Abor: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Abor_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Abor_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Abor_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Abor_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Abor_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Hoplite: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Hoplite_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Hoplite_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Hoplite_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Hoplite_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Hoplite_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Nurse: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Nurse_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Nurse_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Nurse_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Nurse_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Nurse_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
};
class cfgMods
{
	author="Raccoon";
	timepacked="1558046804";
};
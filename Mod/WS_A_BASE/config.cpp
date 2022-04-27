class CfgPatches
{
	class WS_Armory_Base
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
			"180th_Pilot",
			"180th_Engineer",
			"180th_BARC"
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
	class WS_180th_Armory_Base
	{
		displayName="Wyvern Company - Infantry";
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
	class SWLB_P1_Pilot_Helmet;
	class SWLB_clone_pilot_P2_helmet;
	class SWLB_clone_eng_helmet;
	class NVGoggles;
	class ls_blueforHelmet_base;
	class HeadgearItem;
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
    class SWLB_clone_uniform;
	class SWLB_CEE_Hazard_Vest;
	class SWLB_CEE_Tactical_Commander;
	class SWLB_CEE_Officer_Tactical;
	class SWLB_CEE_Force_Recon;
	class SWLB_CEE_Force_Recon_NCO;
	class SWLB_CEE_Force_Recon_Officer;
	class SWLB_CEE_Force_Recon_Commander;
	class SWLB_CEE_Heavy_Vest;


	class 180th_Clone_ccVisor: NVGoggles
	{
		author="Wyvern Studios";
		displayName="[180th Base] Clone commander visor";
		modelOptics="\SWLB_clones\SWLB_clone_nvg_optic_dummy.p3d";
		model="\SWLB_clones\SWLB_clone_ccVisor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_BASE\data\accessories\180th_Commander_Visor.paa" 
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
			uniformModel="\SWLB_clones\SWLB_clone_ccVisor.p3d";
			modelOff="\SWLB_clones\SWLB_clone_ccVisor.p3d";
			mass=20;
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class 180th_Clone_NVVisor_Eq: NVGoggles
	{
		author="Wyvern Studios";
		displayName="[180th Base] Clone NV Visor (Lower)";
		modelOptics="\SWLB_clones\SWLB_clone_nvg_optic_dummy.p3d";
		model="\SWLB_clones\swlb_clone_nvg_on.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_BASE\data\accessories\180th_NVG.paa" 
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
	class 180th_Clone_NVVisor: NVGoggles
	{
		author="Wyvern Studios";
		displayName="[180th Base] Clone NV Visor (Raised)";
		modelOptics="\SWLB_clones\SWLB_clone_nvg_optic_dummy.p3d";
		model="\SWLB_clones\swlb_clone_nvg_off.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_BASE\data\accessories\180th_NVG.paa" 
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
			modelOff="\SWLB_clones\swlb_clone_nvg_off.p3d";
			mass=20;
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class 180th_Recruit_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Base] Clone recruit helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_Recruit_Helmet.paa",
		};
	};
	class 180th_Trooper_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Base] Clone trooper helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_Trooper_Helmet.paa",
		};
	};
		class 180th_SCT_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Base] Senior clone trooper helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_SCT_Helmet.paa",
		};
	};
		class 180th_SGT_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Base] Clone sergeant helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_SGT_Helmet.paa",
		};
	};
	class 180th_LT_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Base] Clone lieutenant helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_LT_Helmet.paa",
		};
	};
	class 180th_CC_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Base] Clone captain helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_CC_Helmet.paa",
		};
	};
	class 180th_Arena_B_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Misc] Clone Arena Helmet (Blue)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\Blue_Team_Helmet.paa",
		};
	};
	class 180th_Arena_Y_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Misc] Clone Arena Helmet (Yellow)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\Yellow_Team_Helmet.paa",
		};
	};
	class 180th_Arena_R_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Misc] Clone Arena Helmet (Red)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\Red_Team_Helmet.paa",
		};
	};
	class 180th_Arena_G_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Misc] Clone Arena Helmet (Green)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\Green_Team_Helmet.paa",
		};
	};
	class 180th_Arena_GM_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Misc] Clone Arena Helmet (Master)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\Game_Master_Helmet.paa",
		};
	};
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> MOS 
	class 180th_Medic_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Base] Clone trooper medic helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_Medic_Helmet.paa",
		};
	};
	class 180th_Marksman_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Base] Clone marksman helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_Marksman_Helmet.paa",
		};
	};
	class 180th_EOD_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Base] Clone eod trooper helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_EOD_Helmet.paa",
		};
	};
	class 180th_Heavy_Gunner_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Base] Clone heavy gunner helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_HG_Helmet.paa",
		};
	};
	class 180th_JTAC_Helmet: SWLB_P2_SpecOps_Helmet
	{
		displayName="[180th Base] Clone communication specialist Helmet";
		hiddenSelectionsTextures[]=
		{
			"WS_A_BASE\data\helmets\180th_JTAC_Helmet.paa"
		};
	};
	class 180th_Riot_Helmet: SWLB_clone_P2_helmet 
	{
		displayName="[180th Base] Clone riot trooper helmet (WIP)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_Riot_Helmet.paa",
		};
	};
	class 180th_AAT_Helmet: SWLB_clone_P2_helmet 
	{
		displayName="[180th Base] Clone advanced rocket trooper helmet (WIP)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_AAT_Helmet.paa",
		};
	};
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> DETACHMENT 
	class 180th_ARF_Helmet: SWLB_clone_ARF_P1_helmet
	{
		displayName="[180th Base] Clone arf trooper helmet";
      	picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_arf_p1_ca.paa";
		hiddenSelectionsTextures[]=
		{
		    "WS_A_BASE\data\helmets\180th_ARF_Helmet.paa",
		};
	};
	class 180th_ARFM_Helmet: SWLB_clone_ARF_P1_helmet
	{
		displayName="[180th Base] Clone arf medic helmet";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_arf_p2_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"WS_A_BASE\data\helmets\180th_ARF_Medic_Helmet.paa",
			"",
			"WS_A_BASE\data\accessories\180th_ARF_Medic_Flaps.paa"
		};
	};
    class 180th_ARC_Helmet: SWLB_clone_P15_helmet
	{
		displayName="[180th Base] Clone arc trooper helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
		    "WS_A_BASE\data\helmets\180th_ARC_Helmet.paa",
		};
	};
    class 180th_Pilot_Helmet: SWLB_clone_pilot_P2_helmet
	{
		displayName="[180th Base] Clone pilot helmet (P2)";
		picture = "\SWLB_clones\data\ui\icon_swlb_clone_pilot_p2_helmet_ca";
		hiddenSelectionsTextures[]=
		{
			"WS_A_BASE\data\helmets\180th_Pilot_Helmet.paa",
		};
	};
	class 180th_P1_Pilot_Helmet: SWLB_P1_Pilot_Helmet
	{
		displayName = "[180th Base] Clone pilot helmet (P1)";
		picture = "\SWLB_clones\data\ui\icon_swlb_clone_pilot_p2_helmet_ca";
		hiddenSelectionsTextures[]=
		{
			"WS_A_BASE\data\helmets\180th_P1_Pilot_Helmet.paa",
			"WS_A_BASE\data\accessories\180th_Lifesupport.paa"
		};
	};
    class 180th_Airborne_Helmet: SWLB_clone_ab_helmet
	{
		displayName="[180th Base] Clone trooper airborne helmet";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_ab_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"WS_A_BASE\data\helmets\180th_Airborne_Helmet.paa",
		};
	};
    class 180th_Engineer_Helmet: SWLB_clone_eng_helmet
	{
		displayName="[180th Base] Clone trooper engineer helmet";
        picture="\SWLB_clones\data\ui\icon_SWLB_clone_eng_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"WS_A_BASE\data\helmets\180th_Engineer_Helmet.paa",
		};
	};
	class 180th_BARC_Helmet: SWLB_clone_barc_helmet
	{
		displayName="[180th Base] Clone barc trooper helmet";
        picture="\SWLB_clones\data\ui\icon_SWLB_clone_eng_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"WS_A_BASE\data\helmets\180th_BARC_Helmet.paa",
		};
	};
	class 180th_Hazard_Helmet: ls_blueforHelmet_base
	{
		scope=2;
		displayName="[180th Base] Clone hazard trooper helmet";
		model="ls_armor_bluefor\helmet\gar\desert\ls_gar_desert_helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"visor"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_BASE\data\helmets\180th_Hazard_Trooper_Helmet.paa",
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


	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> VESTS/ACCs

	class 180th_Trooper_Vest: SWLB_clone_basic_armor {
		displayName = "[180th base] Clone trooper vest";
	};

	class 180th_Grenadier_Vest: SWLB_clone_grenadier_armor {
		displayName = "[180th base] Clone grenadier vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa",
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa" 
		};
	};

	class 180th_NCO_Vest: SWLB_clone_recon_nco_armor {
		displayName = "[180th base] Clone NCO trooper vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa",
			"",
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa",
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa"  
		};
	};

	class 180th_Officer_Armor: SWLB_clone_officer_armor
	{
		displayName="[180th Base] Clone trooper officer vest";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\accessories\180th_Officer_ACC.paa"
		};
	};
    class 180th_Clone_Commander_Armor: SWLB_clone_commander_armor
	{
		displayName="[180th Base] Clone trooper commander vest";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\accessories\180th_Officer_ACC.paa"
		};
	};
    class 180th_Clone_ARC_Armor: SWLB_clone_arc_armor
	{
		displayName="[180th Base] Clone arc trooper vest";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\accessories\180th_ARC_Vest.paa",
			"\WS_A_BASE\data\accessories\180th_ARC_Officer_ACC.paa"
		};
	};
    class 180th_Clone_Kama_Vest: SWLB_clone_kama_armor
	{
		displayName="[180th Base] Clone trooper kama";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\accessories\180th_Officer_ACC.paa"
		};
	};
    class 180th_Lieutenant_Vest: SWLB_clone_basic_armor
	{
		displayName="[180th Base] Clone lieutenant Pauldron";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";
		model="\SWLB_clones\SWLB_clone_lieutenant_armor.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\accessories\180th_Officer_ACC.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\SWLB_clones\SWLB_clone_lieutenant_armor.p3d";
			containerClass="Supply60";
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
					armor=8;
					PassThrough=0.3000000;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=5;
					passThrough=0.3000000;
				};
			};
		};
	};



	class 180th_Heavy_Vest: SWLB_CEE_Heavy_Vest {
		displayName = "[180th base] Clone trooper Heavy Vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa",  
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa"
		};
	};

	class 180th_Medic_Vest: SWLB_clone_medic_armor {
		displayName = "[180th base] Clone trooper medic vest";
		hiddenSelectionsTextures[] = {"WS_A_BASE\data\accessories\180th_Medic_ACC.paa"};
	};

	class 180th_Detachment_Vest: SWLB_CEE_Hazard_Vest {
		displayName = "[180th base] Clone trooper special detachment vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa",
			"WS_A_BASE\data\accessories\180th_Officer_ACC.paa"
		};
	};

	class 180th_Tactical_NCO: SWLB_CEE_Tactical_Commander {
		displayName = "[180th base] Clone tactical NCO vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Officer_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa"
		};
	};

	class 180th_Tactical_LT: SWLB_CEE_Officer_Tactical {
		displayName = "[180th base] Clone tactical lieutenant vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Officer_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa"
		};
	};
	
	class 180th_Heavy_Specialist: SWLB_clone_airborne_armor {
		displayName = "[180th base] Clone heavy specialist vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Officer_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa"
		};
	};

	class 180th_Platoon_Medic_Vest: 180th_Heavy_Specialist {
		displayName = "[180th base] Clone platoon medic vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Medic_ACC.paa",
			"WS_A_BASE\data\accessories\180th_Officer_ACC.paa",
			"WS_A_BASE\data\accessories\180th_Medic_ACC.paa",
			"WS_A_BASE\data\accessories\180th_Medic_ACC.paa"
		};
	};

	class 180th_Recon: SWLB_CEE_Force_Recon {
		displayName = "[180th base] Clone recon trooper vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa"
		};
	};

	class 180th_Recon_NCO: SWLB_CEE_Force_Recon_NCO {
		displayName = "[180th base] Clone recon NCO vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Officer_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa"
		};
	};

	class 180th_Recon_LT: SWLB_CEE_Force_Recon_Officer {
		displayName = "[180th base] Clone recon lieutenant vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Officer_ACC.paa"
		};
	};

	class 180th_Recon_Commander: SWLB_CEE_Force_Recon_Commander {
		displayName = "[180th base] Clone recon commander vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Officer_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Officer_ACC.paa"
		};
	};


	class UniformItem;
	class 180th_Recruit_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Base] Clone recruit uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Recruit";
			containerClass="Supply140";
			mass=40;
		};
	};
    class 180th_Trooper_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Base] Clone trooper uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Trooper";
			containerClass="Supply140";
			mass=40;
		};
	};
	 class 180th_MTrooper_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Base] Clone trooper uniform (Medusa Company)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_MTrooper";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_WTrooper_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Base] Clone trooper uniform (weathered)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_WTrooper";
			containerClass="Supply140";
			mass=40;
		};
	};
	    class 180th_SCT_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Base] Clone senior trooper uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_SCT";
			containerClass="Supply140";
			mass=40;
		};
	};
	   class 180th_SGT_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Base] Clone sergeant uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_SGT";
			containerClass="Supply140";
			mass=40;
		};
	};
	 class 180th_LT_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Base] Clone lieutenant uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_LT";
			containerClass="Supply140";
			mass=40;
		};
	};
	 class 180th_CC_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Base] Clone captain uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_CC";
			containerClass="Supply140";
			mass=40;
		};
	};
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> MOS 
	  class 180th_Medic_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Base] Clone medic uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Medic";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_AT_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Base] Clone AT uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_AT";
			containerClass="Supply140";
			mass=40;
		};
	};
		class 180th_AR_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Base] Clone autorifleman uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_AR";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_EOD_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Base] Clone eod uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_EOD";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_GR_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Base] Clone grenadier uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_GR";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_MR_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Base] Clone marksman uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_MR";
			containerClass="Supply140";
			mass=40;
		};
	};
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> DETACHMENT 
	class 180th_Airborne_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Base] Clone airborne uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Airborne";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_ARF_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Base] Clone arf trooper uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_ARF";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_ARFM_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Base] Clone arf medic uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_ARFM";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_ARC_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Base] Clone arc trooper uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_ARC";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_BARC_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Base] Clone barc trooper uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_BARC";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Hazard_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Base] Clone hazard trooper uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Hazard";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Pilot_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Base] Clone pilot uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Pilot";
			containerClass="Supply140";
			mass=40;
		};
	};
		class 180th_Arena_B_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Misc] Clone Arena uniform (Blue)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_ArenaB";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Arena_Y_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Misc] Clone Arena uniform (Yellow)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_ArenaY";
			containerClass="Supply140";
			mass=40;
		};
	};
		class 180th_Arena_G_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Misc] Clone Arena uniform (Green)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_ArenaG";
			containerClass="Supply140";
			mass=40;
		};
	};
		class 180th_Arena_R_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Misc] Clone Arena uniform (Red)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_ArenaR";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Arena_GM_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Misc] Clone Arena uniform (Master)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_ArenaGM";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_Engineer_Uniform: SWLB_clone_uniform
	{
		displayName="[180th Base] Clone engineer uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Engineer";
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
	class SWLB_clone_bag;
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
	class B_Kitbag_rgr;
	class SWLB_clone_RTO_mini_backpack;
	class SWLB_clone_backpack_heavy;
	class SWLB_clone_backpack_medic;
	
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> BACKPACKS 
	class 180th_Clone_Backpack: SWLB_clone_backpack
	{
		displayName="[180th Base] Clone trooper backpack";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\accessories\180th_Clone_Backpack.paa",
			"\WS_A_BASE\data\accessories\180th_Clone_Backpack.paa",
			"",
			"",
			""
		};
	};
    class 180th_Clone_Heavy_Backpack: SWLB_clone_backpack_heavy
	{
		displayName="[180th Base] Clone trooper heavy backpack";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\accessories\180th_Clone_Backpack.paa",
	    	"\WS_A_BASE\data\accessories\180th_Clone_Backpack.paa",
			"\WS_A_BASE\data\accessories\180th_Clone_Backpack.paa",
			"",
			""
		};
	};
    class 180th_Clone_EOD_Backpack: SWLB_clone_backpack_heavy
	{
		displayName="[180th Base] Clone trooper EOD backpack";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\accessories\180th_EOD_Backpack.paa",
	    	"\WS_A_BASE\data\accessories\180th_EOD_Backpack.paa",
			"\WS_A_BASE\data\accessories\180th_EOD_Backpack.paa",
			"",
			""
		};
	};
	class 180th_Clone_Medic_Backpack: SWLB_clone_backpack_medic
	{
		displayName="[180th Base] Clone trooper Medic backpack";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\accessories\180th_Medic_Backpack.paa",
	    	"\WS_A_BASE\data\accessories\180th_Medic_Backpack.paa",
			"",
			"\WS_A_BASE\data\accessories\180th_Medic_Backpack.paa",
			""
		};
	};
	class 180th_Clone_RTO_Backpack: SWLB_clone_backpack_RTO
	{
		displayName="[180th Base] Clone trooper RTO backpack";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\accessories\180th_RTO_Backpack.paa",
			"",
			"",
			"",
			"\WS_A_BASE\data\accessories\180th_RTO_Backpack.paa"
		};
		tf_range = 60000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_additional_channel = 1;

	};
	class 180th_RTO_Mini_Pack: SWLB_clone_backpack
	{
		displayName="[180th Base] Clone trooper RTO mini pack";
		model="\SWLB_equipment\backpacks\SWLB_clone_RTO_mini_backpack.p3d";
		hiddenSelections[]=
		{
			"main",
			"accumulator"
		};
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\accessories\180th_Mini_RTO.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_accumulator_co.paa"
		};
		maximumload=1;
		picture="\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_RTO_mini_backpack_ca.paa";
		tf_range = 40000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_additional_channel = 1;

	};
	class 180th_Recon_RTO_Backpack: SWLB_clone_RTO_mini_backpack
	{
		author="Wyvern Studios";
		scopecurator=2;
		maximumload=200;
		displayName="[180th Base] Clone trooper recon RTO mini pack";
		model="\SWLB_CEE\data\SWLB_CEE_Recon_RTO_Backpack.p3d";
		picture="\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_RTO_mini_backpack_ca.paa";
		hiddenSelections[]=
		{
			"Accumulator",
			"Camo1",
			"Camo2",
			"Camo3",
			"Main"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_accumulator_co.paa",
			"\WS_A_BASE\data\accessories\180th_Clone_Bags.paa",
			"\WS_A_BASE\data\accessories\180th_Clone_Bags.paa",
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa",
			"\WS_A_BASE\data\accessories\180th_Mini_RTO.paa",
		};
		tf_range = 40000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_additional_channel = 1;
	};
	class 180th_clone_bags: B_Kitbag_rgr
	{
		author="Raccoon";
		scope=2;
		picture="\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_bag_ca.paa";
		displayName="[180th Base] Clone trooper bags";
		model="\SWLB_equipment\backpacks\SWLB_clone_bag.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\accessories\180th_Clone_Bags.paa",
			"\WS_A_BASE\data\accessories\180th_Clone_Bags.paa",
		};
		maximumload=100;
	};
	class 180th_bag_belt: SWLB_clone_bag
	{
		displayName="[180th Base] Clone trooper belt bag";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\accessories\180th_Clone_Bags.paa",
			""
		};
		maximumload=50;
	};
	class 180th_bag_leg: SWLB_clone_bag
	{
		displayName="[180th Base] Clone trooper leg bag";
		hiddenSelectionsTextures[]=
		{
			"",
			"\WS_A_BASE\data\accessories\180th_Clone_Bags.paa",
		};
		maximumload=50;
	};
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ARMOR 
		class 180th_Recruit: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_Recruit_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_Recruit_Armor1.paa",
			"WS_A_BASE\data\armor\180th_Recruit_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Recruit_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Recruit_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_Trooper: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_Trooper_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_Trooper_Armor1.paa",
			"WS_A_BASE\data\armor\180th_Trooper_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
		class 180th_MTrooper: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_MTrooper_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_Trooper_Medusa_Armor1.paa",
			"WS_A_BASE\data\armor\180th_Trooper_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_WTrooper: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_WTrooper_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_WTrooper_Armor1.paa",
			"WS_A_BASE\data\armor\180th_WTrooper_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_SCT: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_SCT_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_SCT_Armor1.paa",
			"WS_A_BASE\data\armor\180th_Trooper_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_SCT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_SCT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_SGT: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_SGT_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_SGT_Armor1.paa",
			"WS_A_BASE\data\armor\180th_Trooper_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_SGT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_SGT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
		class 180th_LT: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_LT_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_LT_Armor1.paa",
			"WS_A_BASE\data\armor\180th_Trooper_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_LT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_LT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
		class 180th_CC: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_CC_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_CC_Armor1.paa",
			"WS_A_BASE\data\armor\180th_Trooper_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_LT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_LT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> MOS penis
	class 180th_Medic: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_Medic_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_Medic_Armor1.paa",
			"WS_A_BASE\data\armor\180th_Trooper_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Medic_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"180th_Clone_Medic_Backpack"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Medic_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"180th_Clone_Medic_Backpack"
		};
	};
	class 180th_AT: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_AT_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_AT_Armor1.paa",
			"WS_A_BASE\data\armor\180th_Trooper_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"180th_Clone_Backpack"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"180th_Clone_Backpack"
		};
	};
	class 180th_AR: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_AR_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_Autorifleman_Armor1.paa",
			"WS_A_BASE\data\armor\180th_Trooper_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"180th_Clone_Backpack"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"180th_Clone_Backpack"
		};
	};
	class 180th_EOD: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_EOD_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_EOD_Armor1.paa",
			"WS_A_BASE\data\armor\180th_Trooper_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_EOD_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"180th_Clone_EOD_Backpack"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_EOD_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"180th_Clone_EOD_Backpack"
		};
	};
	class 180th_GR: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_GR_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_Grenadier_Armor1.paa",
			"WS_A_BASE\data\armor\180th_Trooper_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"180th_Clone_Backpack"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 180th_MR: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_MR_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_Marksman_Armor1.paa",
			"WS_A_BASE\data\armor\180th_Trooper_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Marksman_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Marksman_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> DETATCHMENTS
	class 180th_Airborne: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_Airborne_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_Airborne_Armor1.paa",
			"WS_A_BASE\data\armor\180th_Airborne_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Airborne_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Airborne_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	}; 
	class 180th_ARF: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_ARF_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_ARF_Armor1.paa",
			"WS_A_BASE\data\armor\180th_ARF_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_ARF_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_ARF_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	}; 
	class 180th_ARFM: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_ARFM_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_ARF_Medic_Armor1.paa",
			"WS_A_BASE\data\armor\180th_ARF_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_ARF_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"180th_Clone_Medic_Backpack"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_ARF_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"180th_Clone_Medic_Backpack"
		};
	}; 
	class 180th_ARC: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_ARC_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_ARC_Armor1.paa",
			"WS_A_BASE\data\armor\180th_ARC_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_ARC_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_ARC_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	}; 
	class 180th_BARC: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_BARC_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_BARC_Armor1.paa",
			"WS_A_BASE\data\armor\180th_BARC_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_BARC_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_BARC_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	}; 
	class 180th_Pilot: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_Pilot_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_Pilot_Armor1.paa",
			"WS_A_BASE\data\armor\180th_Pilot_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Pilot_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"180th_RTO_Mini_Pack"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Pilot_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink",
			"180th_RTO_Mini_Pack"
		};
	}; 
	class 180th_Hazard: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_Hazard_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_Hazard_Armor1.paa",
			"WS_A_BASE\data\armor\180th_Hazard_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Hazard_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Hazard_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	}; 
	class 180th_Engineer: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_Engineer_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_Engineer_Armor1.paa",
			"WS_A_BASE\data\armor\180th_Trooper_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Engineer_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Engineer_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	}; 
		class 180th_ArenaB: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_Arena_B_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\Blue_Team_Armor1.paa",
			"WS_A_BASE\data\armor\Blue_Team_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Arena_B_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Arena_B_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	}; 
	class 180th_ArenaY: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_Arena_Y_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\Yellow_Team_Armor1.paa",
			"WS_A_BASE\data\armor\Yellow_Team_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Arena_Y_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Arena_Y_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	}; 
		class 180th_ArenaR: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_Arena_R_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\Red_Team_Armor1.paa",
			"WS_A_BASE\data\armor\Red_Team_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Arena_R_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Arena_R_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	}; 
	class 180th_ArenaG: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_Arena_G_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\Green_Team_Armor1.paa",
			"WS_A_BASE\data\armor\Green_Team_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Arena_G_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Arena_G_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	}; 
	class 180th_ArenaGM: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_Arena_GM_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\Game_Master_Armor1.paa",
			"WS_A_BASE\data\armor\Game_Master_Armor2.paa",
		};
		linkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Arena_GM_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"180th_Arena_GM_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	}; 
};
class cfgMods
{
	author="Wyvern Studios";
	timepacked="031324032022";
};
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
			"180th_BARC",
			"180th_Jedi"
		};
		weapons[]=
		{
			"180th_Trooper_Helmet",
			"180th_Trooper_Uniform",
			"180th_Officer_Armor",
			"180th_Jedi_uniform"
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
class CfgWeapons {
	class ItemInfo;
	class UniformInfo;
	class NVGoggles;
	class lsd_blueforUniform_base;
	class ls_gar_phase2_helmet;
	class ls_sob_phase2SpecOp_helmet;
	class ls_gar_phase1Pilot_helmet;
	class ls_sob_phase1SpecOp_helmet;
	class ls_gar_phase1_helmet;
	class ls_gar_phase1Arf_helmet;
	class ls_gar_arc_helmet;
	class ls_gar_phase2Pilot_helmet;
	class ls_gar_airborne_helmet;
	class ls_gar_engineer_helmet;
	class ls_gar_barc_helmet;
	class ls_gar_clone_vest;
	class ls_gar_grenadier_vest;
	class ls_gar_reconNCO_vest;
	class ls_gar_officer_vest;
	class ls_gar_commander_vest;
	class ls_gar_arc_vest;
	class ls_gar_kama_vest;
	class ls_gar_lieutenant_vest;
	class ls_gar_heavy_vest;
	class ls_gar_heavyAlt_vest;
	class ls_gar_engineerNCO_vest;
	class ls_gar_engineer_vest;
	class ls_gar_specialist_vest;
	class ls_gar_medic_vest;
	class ls_gar_hazard_vest;
	class ls_gar_tacticalCommander_vest;
	class ls_gar_tacticalOfficer_vest;
	class ls_gar_airborne_vest;
	class ls_gar_forceRecon_vest;
	class ls_gar_forceReconNCO_vest;
	class ls_gar_forceReconOfficer_vest;
	class ls_gar_forceReconCommander_vest;
	class ls_gar_phase2_uniform;
	class ls_gar_standard_backpack;
	class ls_gar_medic_backpack;
	class ls_gar_radio_backpack;
	class ls_gar_rto_mini_backpack;
	class ls_gar_beltBag;
	class ls_gar_beltBag_leg;

	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Jedi
	class 180th_Jedi_uniform: lsd_blueforUniform_base {
		scope = 2;
		displayName = "[180th Misc] Jedi commander Harkon uniform";
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "180th_Jedi";
			containerClass = "Supply150";
			mass = 40;
		};
	};


	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>NVGS
	class 180th_Clone_ccVisor: NVGoggles
	{
		author="Wyvern Studios";
		displayName="[180th Base] Clone commander visor";
		modelOptics="\ls\core\core\characters_clone_legacy\equipment\nvgs\visor\lsd_gar_nvg_optic.p3d";
		model="\ls\core\core\characters_clone_legacy\equipment\nvgs\commander\lsd_gar_p2Commander_nvg.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_BASE\data\accessories\180th_Commander_Visor.paa" 
		};
		picture="\ls\core\core\characters_clone_legacy\_ui\icon_cloneVisor_cc_ca.paa";
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
			uniformModel="\ls\core\core\characters_clone_legacy\equipment\nvgs\commander\lsd_gar_p2Commander_nvg.p3d";
			modelOff="\ls\core\core\characters_clone_legacy\equipment\nvgs\commander\lsd_gar_p2Commander_nvg.p3d";
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
		modelOptics="\ls\core\core\characters_clone_legacy\equipment\nvgs\visor\lsd_gar_nvg_optic.p3d";
		model="\ls\core\core\characters_clone_legacy\equipment\nvgs\visor\lsd_gar_visor_nvg_on.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_BASE\data\accessories\180th_NVG.paa" 
		};
		picture="\ls\core\core\characters_clone_legacy\_ui\icon_cloneVisor_ca";
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
			uniformModel="\ls\core\core\characters_clone_legacy\equipment\nvgs\visor\lsd_gar_visor_nvg_on.p3d";
			modelOff="\ls\core\core\characters_clone_legacy\equipment\nvgs\visor\lsd_gar_visor_nvg_on.p3d";
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
		modelOptics="\ls\core\core\characters_clone_legacy\equipment\nvgs\visor\lsd_gar_nvg_optic.p3d";
		model="\ls\core\core\characters_clone_legacy\equipment\nvgs\visor\lsd_gar_visor_nvg_off.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_BASE\data\accessories\180th_NVG.paa" 
		};
		picture="\ls\core\core\characters_clone_legacy\_ui\icon_cloneVisor_ca";
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
			uniformModel="\ls\core\core\characters_clone_legacy\equipment\nvgs\visor\lsd_gar_visor_nvg_on.p3d";
			modelOff="\ls\core\core\characters_clone_legacy\equipment\nvgs\visor\lsd_gar_visor_nvg_off.p3d";
			mass=20;
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};

	//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Helmets
	class 180th_base_Helmet: ls_gar_phase2_helmet
	{
		scope=2;
		displayName="[180th Base] Clone Base helmet";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_Recruit_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Recruit_Helmet: 180th_base_Helmet
	{
		scope=2;
		displayName="[180th Base] Clone recruit helmet";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_Recruit_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Trooper_Helmet: 180th_base_Helmet
	{
		displayName="[180th Base] Clone trooper helmet";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_Trooper_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_SCT_Helmet: 180th_base_Helmet
	{
		displayName="[180th Base] Senior clone trooper helmet";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_SCT_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_SGT_Helmet: 180th_base_Helmet
	{
		displayName="[180th Base] Clone sergeant helmet";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_SGT_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_LT_Helmet: 180th_base_Helmet
	{
		displayName="[180th Base] Clone lieutenant helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_LT_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_CC_Helmet: 180th_base_Helmet
	{
		displayName="[180th Base] Clone captain helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_CC_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Arena_B_Helmet: 180th_base_Helmet
	{
		displayName="[180th Misc] Clone Arena Helmet (Blue)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\Blue_Team_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Arena_Y_Helmet: 180th_base_Helmet
	{
		displayName="[180th Misc] Clone Arena Helmet (Yellow)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\Yellow_Team_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Arena_R_Helmet: 180th_base_Helmet
	{
		displayName="[180th Misc] Clone Arena Helmet (Red)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\Red_Team_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Arena_G_Helmet: 180th_base_Helmet
	{
		displayName="[180th Misc] Clone Arena Helmet (Green)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\Green_Team_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Arena_GM_Helmet: 180th_base_Helmet
	{
		displayName="[180th Misc] Clone Arena Helmet (Master)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\Game_Master_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> MOS 
	class 180th_Medic_Helmet: 180th_base_Helmet
	{
		displayName="[180th Base] Clone trooper medic helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_Medic_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Marksman_Helmet: 180th_base_Helmet
	{
		displayName="[180th Base] Clone marksman helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_Marksman_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_EOD_Helmet: 180th_base_Helmet
	{
		displayName="[180th Base] Clone eod trooper helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_EOD_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Heavy_Gunner_Helmet: 180th_base_Helmet
	{
		displayName="[180th Base] Clone heavy gunner helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_HG_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_JTAC_Helmet: ls_sob_phase2SpecOp_helmet
	{
		displayName="[180th Base] Clone RTO Helmet";
		hiddenSelectionsTextures[]=
		{
			"WS_A_BASE\data\helmets\180th_JTAC_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\data\visor_co.paa"
		};
	};
	class 180th_Riot_Helmet: 180th_base_Helmet
	{
		displayName="[180th Base] Clone riot trooper helmet (WIP)";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_Riot_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_AAT_Helmet: 180th_base_Helmet
	{
		displayName="[180th Base] Clone advanced rocket trooper helmet (WIP)";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_AAT_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_P1_Pilot_Helmet: ls_gar_phase1Pilot_helmet
	{
		displayName = "[180th Base] P1 Clone pilot helmet";
		hiddenSelectionsTextures[]=
		{
			"WS_A_BASE\data\helmets\180th_P1_Pilot_Helmet.paa",
			"WS_A_BASE\data\accessories\180th_Lifesupport.paa"
			"\ls\core\addons\characters_clone_legacy\helmets\phase1Pilot\data\visor_co.paa",
		};
	};
	class 180th_P1_JTAC_Helmet: ls_sob_phase1SpecOp_helmet
	{
		displayName="[180th Base] P1 Clone RTO Helmet";
		hiddenSelectionsTextures[]=
		{
			"WS_A_BASE\data\helmets\180th_P1_JTAC_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase1SpecOp\data\visor_co.paa",
		};
	};
	class 180th_P1_Trooper_Helmet: ls_gar_phase1_helmet
	{
		displayName="[180th Base] P1 Clone trooper helmet";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_P1_Trooper_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa",
		};
	};
	class 180th_P1_SGT_Helmet: 180th_P1_Trooper_Helmet
	{
		displayName="[180th Base] P1 Clone sergeant helmet";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_P1_Sergeant_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa",
		};
	};
	class 180th_P1_LT_Helmet: 180th_P1_Trooper_Helmet
	{
		displayName="[180th Base] P1 Clone lieutenant helmet";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_P1_Lieutenant_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa",
		};
	};
	class 180th_P1_Trooper_Helmet_M: 180th_P1_Trooper_Helmet
	{
		displayName="[180th Base] P1 Clone trooper helmet (Dirty)";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_P1_Trooper_Helmet_M.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa",
		};
	};
	class 180th_P1_SGT_Helmet_M: 180th_P1_Trooper_Helmet
	{
		displayName="[180th Base] P1 Clone sergeant helmet (Dirty)";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_P1_Sergeant_Helmet_M.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa",
		};
	};
	class 180th_P1_LT_Helmet_M: 180th_P1_Trooper_Helmet
	{
		displayName="[180th Base] P1 Clone lieutenant helmet (Dirty)";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_BASE\data\helmets\180th_P1_Lieutenant_Helmet_M.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa",
		};
	};
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> DETACHMENT 
	class 180th_ARF_Helmet: ls_gar_phase1Arf_helmet
	{
		displayName="[180th Base] Clone arf trooper helmet";
		hiddenSelectionsTextures[]=
		{
		    "WS_A_BASE\data\helmets\180th_ARF_Helmet.paa",
			"",
			"\ls\core\addons\characters_clone_legacy\helmets\arf\data\visor_co.paa",
		};
	};
	class 180th_ARFM_Helmet: 180th_ARF_Helmet
	{
		displayName="[180th Base] Clone arf medic helmet";
		hiddenSelectionsTextures[]=
		{
			"WS_A_BASE\data\helmets\180th_ARF_Medic_Helmet.paa",
			"WS_A_BASE\data\accessories\180th_ARF_Medic_Flaps.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\arf\data\visor_co.paa",
			
		};
	};
    class 180th_ARC_Helmet: ls_gar_arc_helmet
	{
		displayName="[180th Base] Clone arc trooper helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
		    "WS_A_BASE\data\helmets\180th_ARC_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\arc\data\visor_co.paa",
			"WS_A_BASE\data\helmets\180th_ARC_Helmet.paa",
		};
	};
    class 180th_Pilot_Helmet: ls_gar_phase2Pilot_helmet
	{
		displayName="[180th Base] Clone pilot helmet (P2)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_BASE\data\helmets\180th_Pilot_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"
		};
	};
    class 180th_Airborne_Helmet: ls_gar_airborne_helmet
	{
		displayName="[180th Base] Clone trooper airborne helmet";
		hiddenSelectionsTextures[]=
		{
			"WS_A_BASE\data\helmets\180th_Airborne_Helmet.paa",
			"WS_A_BASE\data\helmets\180th_Airborne_Helmet.paa",
		};
	};
    class 180th_Engineer_Helmet: ls_gar_engineer_helmet
	{
		displayName="[180th Base] Clone trooper engineer helmet"; //helmets\engineer\data\light_co
		hiddenSelectionsTextures[]=
		{
			"WS_A_BASE\data\helmets\180th_Engineer_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\engineer\data\light_co.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\engineer\data\visor_co.paa"
		};
	};
	class 180th_BARC_Helmet: ls_gar_barc_helmet
	{
		displayName="[180th Base] Clone barc trooper helmet";
		hiddenSelectionsTextures[]=
		{
			"WS_A_BASE\data\helmets\180th_BARC_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\barc\data\visor_co.paa"
		};
	};


	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> VESTS/ACCs

	class 180th_Trooper_Vest: ls_gar_clone_vest {
		displayName = "[180th Base] Clone trooper vest";
	};

	class 180th_Grenadier_Vest: ls_gar_grenadier_vest {
		displayName = "[180th Base] Clone grenadier vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa",
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa" 
		};
	};

	class 180th_NCO_Vest: ls_gar_reconNCO_vest {
		displayName = "[180th Base] Clone NCO trooper vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa",
			"",
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa",
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa"  
		};
	};

	class 180th_Officer_Armor: ls_gar_officer_vest
	{
		displayName="[180th Base] Clone trooper officer vest";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\accessories\180th_Officer_ACC.paa"
		};
	};
    class 180th_Clone_Commander_Armor: ls_gar_commander_vest
	{
		displayName="[180th Base] Clone trooper commander vest";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\accessories\180th_Officer_ACC.paa"
		};
	};
    class 180th_Clone_ARC_Armor: ls_gar_arc_vest
	{
		displayName="[180th Base] Clone arc trooper vest";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\accessories\180th_ARC_Vest.paa",
			"\WS_A_BASE\data\accessories\180th_ARC_Officer_ACC.paa"
		};
	};
    class 180th_Clone_Kama_Vest: ls_gar_kama_vest
	{
		displayName="[180th Base] Clone trooper kama";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\accessories\180th_Officer_ACC.paa"
		};
	};
    class 180th_Lieutenant_Vest: ls_gar_lieutenant_vest
	{
		displayName="[180th Base] Clone lieutenant Pauldron";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_officer_armor_ca.paa";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\accessories\180th_Officer_ACC.paa"
		};
	};

	class 180th_Heavy_Vest: ls_gar_heavy_vest {
		displayName = "[180th Base] Clone Heavy Vest";
		hiddenSelectionsTextures[] = {
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa",  
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa"
		};
	};

	class 180th_Heavy_Alt_Vest: ls_gar_heavyAlt_vest {
		displayName = "[180th Base] Clone Heavy Alt Vest";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_airborne_armor_ca.paa";
		hiddenSelectionsTextures[] = {
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa",
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa", //WS_A_BASE\data\accessories\180th_Heavy_ACC.paa
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa", //WS_A_BASE\data\accessories\180th_Heavy_ACC.paa
			"WS_A_BASE\data\accessories\180th_Clone_Bags.paa"
		};
	};
	
	class 180th_Artillery_Vest: ls_gar_engineerNCO_vest {
		displayName = "[180th Base] Clone trooper Artillery Vest";
		hiddenSelectionTextures[] = {
		"WS_A_BASE\data\accessories\180th_Light_ACC.paa", 
		"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa", 
		"WS_A_BASE\data\accessories\180th_Officer_ACC.paa", 
		"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa", 
		"SWLB_CEE\data\SWLB_CEE_Engineer_Base.paa", 
		"WS_A_BASE\data\accessories\180th_ARC_Officer_ACC.paa"
		};
	};

	class 180th_EOD_Vest: ls_gar_engineer_vest {
		displayName = "[180th Base] Clone trooper EOD Vest";
		hiddenSelectionTextures[] = {
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa",
			"SWLB_CEE\data\SWLB_CEE_Engineer_Base.paa", 
		};
	};
	class 180th_Specialist_Vest: ls_gar_specialist_vest {
		displayName = "[180th Base] Clone trooper specialist vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa",
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa"
		};
	};

	class 180th_Medic_Vest: ls_gar_medic_vest {
		displayName = "[180th Base] Clone trooper medic vest";
		hiddenSelectionsTextures[] = {"WS_A_BASE\data\accessories\180th_Medic_ACC.paa"};
	};

	class 180th_Detachment_Vest: ls_gar_hazard_vest {
		displayName = "[180th Base] Clone special detachment vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa",
			"WS_A_BASE\data\accessories\180th_Officer_ACC.paa"
		};
	};

	class 180th_Tactical_NCO: ls_gar_tacticalCommander_vest {
		displayName = "[180th Base] Clone tactical NCO vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Officer_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa"
		};
	};

	class 180th_Tactical_LT: ls_gar_tacticalOfficer_vest {
		displayName = "[180th Base] Clone tactical lieutenant vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Officer_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa"
		};
	};
	
	class 180th_Heavy_Specialist: ls_gar_airborne_vest {
		displayName = "[180th Base] Clone Heavy Specialist vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Officer_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa"
		};
	};

	class 180th_Platoon_Medic_Vest: 180th_Heavy_Specialist {
		displayName = "[180th Base] Clone platoon medic vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Medic_ACC.paa",
			"WS_A_BASE\data\accessories\180th_Officer_ACC.paa",
			"WS_A_BASE\data\accessories\180th_Medic_ACC.paa",
			"WS_A_BASE\data\accessories\180th_Medic_ACC.paa"
		};
	};

	class 180th_Recon: ls_gar_forceRecon_vest {
		displayName = "[180th Base] Clone recon trooper vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa"
		};
	};

	class 180th_Recon_NCO: ls_gar_forceReconNCO_vest {
		displayName = "[180th Base] Clone recon NCO vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Officer_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Heavy_ACC.paa"
		};
	};

	class 180th_Recon_LT: ls_gar_forceReconOfficer_vest {
		displayName = "[180th Base] Clone recon lieutenant vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Officer_ACC.paa"
		};
	};

	class 180th_Recon_Commander: ls_gar_forceReconCommander_vest {
		displayName = "[180th Base] Clone recon commander vest";
		hiddenSelectionsTextures[] = 
		{
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Officer_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Light_ACC.paa", 
			"WS_A_BASE\data\accessories\180th_Officer_ACC.paa"
		};
	};

	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> UNIFORMS
	class UniformItem;
	class 180th_Recruit_Uniform: ls_gar_phase2_uniform
	{
		displayName="[180th Base] Clone recruit uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Recruit";
			containerClass="Supply140";
			mass=40;
		};
	};
    class 180th_Trooper_Uniform: 180th_Recruit_Uniform
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
	class 180th_P1_Pilot_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Base] P1 Clone pilot uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_P1_Pilot";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_P1_Trooper_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Base] P1 Clone trooper uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_P1_Trooper";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_P1_Trooper_Uniform_M: 180th_Recruit_Uniform
	{
		displayName="[180th Base] P1 Clone trooper uniform (Dirty)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_P1_Trooper_M";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_MTrooper_Uniform: 180th_Recruit_Uniform
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
	class 180th_WTrooper_Uniform: 180th_Recruit_Uniform
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
	class 180th_SCT_Uniform: 180th_Recruit_Uniform
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
	class 180th_P1_SGT_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Base] P1 Clone sergeant uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_P1_SGT";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_P1_SGT_Uniform_M: 180th_Recruit_Uniform
	{
		displayName="[180th Base] P1 Clone sergeant uniform (Dirty)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_P1_SGT_M";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_SGT_Uniform: 180th_Recruit_Uniform
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
	class 180th_P1_LT_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Base] P1 Clone lieutenant uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_P1_LT";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 180th_P1_LT_Uniform_M: 180th_Recruit_Uniform
	{
		displayName="[180th Base] P1 Clone lieutenant uniform (Dirty)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_P1_LT_M";
			containerClass="Supply140";
			mass=40;
		};
	};
	 class 180th_LT_Uniform: 180th_Recruit_Uniform
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
	 class 180th_CC_Uniform: 180th_Recruit_Uniform
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
	  class 180th_Medic_Uniform: 180th_Recruit_Uniform
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
	class 180th_AT_Uniform: 180th_Recruit_Uniform
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
		class 180th_AR_Uniform: 180th_Recruit_Uniform
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
	class 180th_EOD_Uniform: 180th_Recruit_Uniform
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
	class 180th_GR_Uniform: 180th_Recruit_Uniform
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
	class 180th_MR_Uniform: 180th_Recruit_Uniform
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
	class 180th_Airborne_Uniform: 180th_Recruit_Uniform
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
	class 180th_ARF_Uniform: 180th_Recruit_Uniform
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
	class 180th_ARFM_Uniform: 180th_Recruit_Uniform
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
	class 180th_ARC_Uniform: 180th_Recruit_Uniform
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
	class 180th_BARC_Uniform: 180th_Recruit_Uniform
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
	class 180th_Hazard_Uniform: 180th_Recruit_Uniform
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
	class 180th_Pilot_Uniform: 180th_Recruit_Uniform
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
		class 180th_Arena_B_Uniform: 180th_Recruit_Uniform
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
	class 180th_Arena_Y_Uniform: 180th_Recruit_Uniform
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
		class 180th_Arena_G_Uniform: 180th_Recruit_Uniform
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
		class 180th_Arena_R_Uniform: 180th_Recruit_Uniform
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
	class 180th_Arena_GM_Uniform: 180th_Recruit_Uniform
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
	class 180th_Engineer_Uniform: 180th_Recruit_Uniform
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
	class lsd_gar_phase2_base;
	class lsd_gar_jediCommander_base;
	class ls_gar_standard_backpack;
	class ls_gar_medic_backpack;
	class ls_gar_radio_backpack;
	class ls_gar_rto_mini_backpack;
	class ls_gar_beltBag;
	class ls_gar_beltBag_leg;

	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> BACKPACKS 
	class 180th_Clone_Backpack: ls_gar_standard_backpack
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
    class 180th_Clone_Heavy_Backpack: ls_gar_standard_backpack
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
    class 180th_Clone_EOD_Backpack: ls_gar_standard_backpack
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
	class 180th_Clone_Medic_Backpack: ls_gar_medic_backpack
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
	class 180th_Clone_RTO_Backpack: ls_gar_radio_backpack
	{
		displayName="[180th Base] Clone trooper RTO backpack";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\accessories\180th_RTO_Backpack.paa",
			"\WS_A_BASE\data\accessories\180th_RTO_Backpack.paa",
			"\WS_A_BASE\data\accessories\180th_RTO_Backpack.paa"
		};
		tf_range = 60000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_additional_channel = 1;

	};
	class 180th_RTO_Mini_Pack: ls_gar_rto_mini_backpack
	{
		displayName="[180th Base] Clone trooper RTO mini pack";
		hiddenSelections[]=
		{
			"main",
			"accumulator"
		};
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\accessories\180th_Mini_RTO.paa",
			"\ls\core\addons\characters_clone_legacy\backpacks\rto\data\accumulator_co.paa"
		};
		maximumload=1;
		tf_range = 40000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_additional_channel = 1;

	};
	class 180th_bag_belt: ls_gar_beltBag
	{
		displayName="[180th Base] Clone trooper belt bag";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\accessories\180th_Clone_Bags.paa",
			""
		};
		maximumload=50;
	};
	class 180th_bag_leg: ls_gar_beltBag_leg
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
	class 180th_Recruit: lsd_gar_phase2_base
	{
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
			"180th_Trooper_Vest",
			"180th_Recruit_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Recruit_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 180th_Trooper: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 180th_P1_Pilot: 180th_Recruit
	{
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_P1_Pilot_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_P1_Pilot_Armor1.paa",
			"WS_A_BASE\data\armor\180th_P1_Armor2.paa",
		};
		linkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_P1_Pilot_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_P1_Pilot_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 180th_P1_Trooper: 180th_Recruit
	{
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_P1_Trooper_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_P1_Trooper_Armor1.paa",
			"WS_A_BASE\data\armor\180th_P1_Armor2.paa",
		};
		linkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_P1_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_P1_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 180th_P1_Trooper_M: 180th_Recruit
	{
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_P1_Trooper_Uniform_M";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_P1_Trooper_Armor1_M.paa",
			"WS_A_BASE\data\armor\180th_P1_Armor2_M.paa",
		};
		linkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_P1_Trooper_Helmet_M",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_P1_Trooper_Helmet_M",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 180th_MTrooper: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 180th_WTrooper: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 180th_SCT: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_SCT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_SCT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 180th_P1_SGT: 180th_Recruit
	{
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_P1_SGT_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_P1_Sergeant_Armor1.paa",
			"WS_A_BASE\data\armor\180th_P1_Armor2.paa",
		};
		linkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_P1_SGT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_P1_SGT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 180th_P1_SGT_M: 180th_Recruit
	{
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_P1_SGT_Uniform_M";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_P1_Sergeant_Armor1_M.paa",
			"WS_A_BASE\data\armor\180th_P1_Armor2_M.paa",
		};
		linkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_P1_SGT_Helmet_M",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_P1_SGT_Helmet_M",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 180th_SGT: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_SGT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_SGT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 180th_P1_LT: 180th_Recruit
	{
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_P1_LT_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_P1_Lieutenant_Armor1.paa",
			"WS_A_BASE\data\armor\180th_P1_Armor2.paa",
		};
		linkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_P1_LT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_P1_LT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 180th_P1_LT_M: 180th_Recruit
	{
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformclass="180th_P1_LT_Uniform_M";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_BASE\data\armor\180th_P1_Lieutenant_Armor1_M.paa",
			"WS_A_BASE\data\armor\180th_P1_Armor2_M.paa",
		};
		linkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_P1_LT_Helmet_M",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_P1_LT_Helmet_M",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 180th_LT: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_LT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_LT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 180th_CC: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_LT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_LT_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> MOS penis
	class 180th_Medic: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_Medic_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"180th_Clone_Medic_Backpack"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Medic_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"180th_Clone_Medic_Backpack"
		};
	};
	class 180th_AT: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"180th_Clone_Backpack"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"180th_Clone_Backpack"
		};
	};
	class 180th_AR: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"180th_Clone_Backpack"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"180th_Clone_Backpack"
		};
	};
	class 180th_EOD: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_EOD_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"180th_Clone_EOD_Backpack"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_EOD_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"180th_Clone_EOD_Backpack"
		};
	};
	class 180th_GR: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"180th_Clone_Backpack"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 180th_MR: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_Marksman_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Marksman_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> DETATCHMENTS
	class 180th_Airborne: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_Airborne_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Airborne_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	}; 
	class 180th_ARF: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_ARF_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_ARF_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	}; 
	class 180th_ARFM: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_ARF_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"180th_Clone_Medic_Backpack"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_ARF_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"180th_Clone_Medic_Backpack"
		};
	}; 
	class 180th_ARC: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_ARC_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_ARC_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	}; 
	class 180th_BARC: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_BARC_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_BARC_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	}; 
	class 180th_Pilot: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_Pilot_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"180th_RTO_Mini_Pack"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Pilot_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"180th_RTO_Mini_Pack"
		};
	}; 
	class 180th_Hazard: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_Hazard_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Hazard_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	}; 
	class 180th_Engineer: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_Engineer_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Engineer_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	}; 
	class 180th_ArenaB: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_Arena_B_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Arena_B_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	}; 
	class 180th_ArenaY: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_Arena_Y_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Arena_Y_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	}; 
	class 180th_ArenaR: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_Arena_R_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Arena_R_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	}; 
	class 180th_ArenaG: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_Arena_G_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Arena_G_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	}; 
	class 180th_ArenaGM: 180th_Recruit
	{
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
			"180th_Trooper_Vest",
			"180th_Arena_GM_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Arena_GM_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 180th_Jedi: lsd_gar_jediCommander_base {
		faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Base";
		uniformClass = "180th_Jedi_Uniform";
		hiddenSelectionsTextures[] = {
			"\WS_A_BASE\data\armor\Jedi_Armor_co.paa",
			"\lsd_armor_bluefor\uniform\gar\jediCommander\data\robes_co.paa",
			"\lsd_armor_bluefor\uniform\gar\jediCommander\data\belt_co.paa",
			"\lsd_armor_bluefor\uniform\gar\jediCommander\data\undersuit_co.paa"
		};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};
		respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch"};

	};
};
class cfgMods
{
	author="Wyvern Studios";
	timepacked="031324032022";
};
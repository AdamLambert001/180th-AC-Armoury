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
    class 180th_Roach_NVVisor: NVGoggles
	{
		author="Wyvern Studios";
		displayName="[180th Customs] Clone NV Visor (Roach)";
		modelOptics="\SWLB_clones\SWLB_clone_nvg_optic_dummy.p3d";
		model="\SWLB_clones\swlb_clone_nvg_on.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\accessories\180th_Roach_NVG.paa" 
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
			mass=1;
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
	class 180th_Wallace_Pilot_Helmet: SWLB_clone_pilot_P2_helmet
	{
		displayName="[180th Customs] Clone pilot helmet (Wallace)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_CUSTOMS\data\helmets\180th_WallacePilot_Helmet.paa",
		};
	};
	class 180th_Roach_BARC_Helmet: SWLB_clone_barc_helmet
	{
		displayName="[180th Customs] Clone BARC helmet (Roach)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Roach_BARC_Helmet.paa"
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
		displayName="[180th Customs] Clone trooper helmet (Roach)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Roach_Helmet.paa"
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
	class 180th_Frost_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Frost)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_CUSTOMS\data\helmets\180th_Frost_Helmet.paa",
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
	class 180th_Kat_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Kat)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Kat_Helmet.paa"
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
	class 180th_Rattay_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Rattay)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Rattay_Helmet.paa"
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
	class 180th_Sniper_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Sniper)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Sniper_Helmet.paa"
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
	class 180th_Reaper_Helmet: SWLB_clone_P2_helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Reaper)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Reaper_Helmet.paa"
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
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Vests
    class 180th_Jerry_Armor: SWLB_clone_commander_armor
	{
		displayName="[180th Customs] Clone trooper captain vest (Jerry)";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\vests\180th_Officer_ACC.paa"
		};
	};
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Uniform
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
			containerClass="Supply180";
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


	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Backpack
	class 180th_Wallace_RTO_Backpack: SWLB_clone_backpack_RTO
	{
		displayName="[180th Customs] Clone trooper RTO backpack (Wallace)";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_CUSTOMS\data\accessories\180th_Wallace_RTO_Backpack.paa",
			"",
			"",
			"",
			"\WS_A_CUSTOMS\data\accessories\180th_Wallace_RTO_Backpack.paa"
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
	        "WS_A_CUSTOMS\data\armor\180th_Raccoon_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Raccoon_Armor2.paa",
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
};
class cfgMods
{
	author="Raccoon";
	timepacked="1558046804";
};
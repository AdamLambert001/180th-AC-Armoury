class CfgPatches
{
	class WS_Armory_Customs
	{
		author="Wyvern Studios";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"SWLB_clones",
			"SWLB_droids",
			"SWLB_main",
			"SWLB_CEE",
			"WS_A_BASE"
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
	class HeadgearItem;
    class NVGoggles;
	//new
	class 180th_base_Helmet;
	class 180th_JTAC_Helmet;
	class 180th_Pilot_Helmet;
	class 180th_BARC_Helmet;

    class 180th_Roach_NVVisor: NVGoggles
	{
		author="Wyvern Studios";
		displayName="[180th Customs] Clone NV Visor (Roach)";
		modelOptics="\SWLB_clones\SWLB_clone_nvg_optic_dummy.p3d";
		model="\SWLB_clones\swlb_clone_nvg_off.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\accessories\180th_Roach_NVG.paa" 
		};
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
			mass=1;
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};

	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> HELMETS
	class 180th_Jerry_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Jerry)";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_CUSTOMS\data\helmets\180th_Jerry_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Wallace_Pilot_Helmet: 180th_Pilot_Helmet
	{
		displayName="[180th Customs] Clone pilot helmet (Wallace)";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_CUSTOMS\data\helmets\180th_WallacePilot_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"
		};
	};
	class 180th_Roach_BARC_Helmet: 180th_BARC_Helmet
	{
		displayName="[180th Customs] Clone BARC helmet (Roach)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Roach_BARC_Helmet.paa"
		};
	};
    class 180th_Paul_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Paul)";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_CUSTOMS\data\helmets\180th_Paul_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
    class 180th_Soviet_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Soviet)";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_CUSTOMS\data\helmets\180th_Soviet_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
    class 180th_Tom_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Tom)";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_CUSTOMS\data\helmets\180th_Tom_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
    class 180th_Roach_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Roach)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Roach_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
    class 180th_Wayne_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Wayne)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Wayne_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
    class 180th_Icarus_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Icarus)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Icarus_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Frost_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Frost)";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_CUSTOMS\data\helmets\180th_Frost_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Raccoon_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Raccoon)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Raccoon_Helmet_I.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
    class 180th_Fire_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Fire)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Fire_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Jamison_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Jamison)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Jamison_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Kat_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Kat)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Kat_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Green_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Green)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Green_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Rattay_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Rattay)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Rattay_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Zarush_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Zarush)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Zarush_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Abor_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Abor)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Abor_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Kreed_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Kreed)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Kreed_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Hoplite_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Hoplite)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Hoplite_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Wallace_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Wallace)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Wallace_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Sniper_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Sniper)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Sniper_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Krieg_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Krieg)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Krieg_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Germ_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Germ)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Germ_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Raccoon_Pilot_Helmet: 180th_Pilot_Helmet
	{
		displayName="[180th Customs] Clone trooper Pilot helmet (Raccoon)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Raccoon_Pilot_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2Pilot\data\visor_co.paa"
		};
	};
    class 180th_Grape_Helmet: 180th_base_Helmet
	{
		displayName="Grape Man Helmet";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Grape_Man_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_O_JTAC_Helmet: 180th_JTAC_Helmet
	{
		displayName="[180th Customs] Clone trooper JTAC helmet (O)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_O_JTAC_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2SpecOp\data\visor_co.paa"
		};
	};
	class 180th_Kloud_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Kloud)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Kloud_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};
	class 180th_Koppo_Helmet: 180th_base_Helmet
	{
		displayName="[180th Customs] Clone trooper helmet (Koppo)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_CUSTOMS\data\helmets\180th_Koppo_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase2\data\visor_co.paa"
		};
	};

	class ItemInfo;
	class VestItem;
	//new
	class 180th_Clone_Commander_Armor;
	class 180th_Recon_NCO;

	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Vests
    class 180th_Jerry_Vest: 180th_Clone_Commander_Armor {
		displayName="[180th Customs] Clone trooper captain vest (Jerry)";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_BASE\data\accessories\180th_Officer_ACC.paa"
		};
	};
	class 180th_Roach_Vest: 180th_Recon_NCO {
		displayName = "[180th Customs] Clone NCO Vest (Roach)";
		hiddenSelectionsTextures[] = {
			"\WS_A_CUSTOMS\data\accessories\180th_Roach_Heavy.paa", //I made named Light as Heavy and Viceversa like a dumbass
			"\WS_A_CUSTOMS\data\accessories\180th_Roach_Officer.paa",
			"\WS_A_CUSTOMS\data\accessories\180th_Roach_Light.paa"
		};
	};

	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> UNIFORMS
	class UniformItem;
	class 180th_Recruit_Uniform;
	class 180th_Jerry_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Jerry)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Jerry";
			containerClass="Supply140";
			mass=20;
		};
	};
	class 180th_Soviet_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Soviet)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Soviet";
			containerClass="Supply140";
			mass=20;
		};
	};
	class 180th_Tom_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Tom)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Tom";
			containerClass="Supply140";
			mass=20;
		};
	};
	class 180th_Roach_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Roach)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Roach";
			containerClass="Supply180";
			mass=20;
		};
	};
	class 180th_Wayne_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Wayne)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Wayne";
			containerClass="Supply140";
			mass=20;
		};
	};
	class 180th_Icarus_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Icarus)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Icarus";
			containerClass="Supply140";
			mass=20;
		};
	};
	class 180th_Frost_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Frost)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Frost";
			containerClass="Supply140";
			mass=20;
		};
	};
	class 180th_Raccoon_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Raccoon)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Raccoon";
			containerClass="Supply140";
			mass=20;
		};
	};
	class 180th_Kat_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Kat)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Kat";
			containerClass="Supply140";
			mass=20;
		};
	};
	class 180th_Wallace_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Wallace)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Wallace";
			containerClass="Supply140";
			mass=20;
		};
	};
	class 180th_Jamison_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Jamison)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Jamison";
			containerClass="Supply140";
			mass=20;
		};
	};
	class 180th_Grape_Uniform: 180th_Recruit_Uniform
	{
		displayName="Grape Man Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Grape";
			containerClass="Supply140";
			mass=20;
		};
	};
	class 180th_Zarush_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Zarush)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Zarush";
			containerClass="Supply140";
			mass=20;
		};
	};
	class 180th_Green_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Green)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Green";
			containerClass="Supply140";
			mass=20;
		};
	};
	class 180th_Fire_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Fire)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Fire";
			containerClass="Supply140";
			mass=20;
		};
	};
	class 180th_Kreed_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Kreed)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Kreed";
			containerClass="Supply140";
			mass=20;
		};
	};
	class 180th_Hoplite_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Hoplite)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Hoplite";
			containerClass="Supply140";
			mass=20;
		};
	};
	class 180th_Abor_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Abor)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Abor";
			containerClass="Supply140";
			mass=20;
		};
	};
	class 180th_Krieg_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Krieg)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Krieg";
			containerClass="Supply140";
			mass=20;
		};
	};
	class 180th_Sniper_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Sniper)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Sniper";
			containerClass="Supply140";
			mass=20;
		};
	};
	class 180th_Kloud_Uniform: 180th_Recruit_Uniform
	{
		displayName="[180th Customs] Clone trooper uniform (Kloud)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="180th_Kloud";
			containerClass="Supply140";
			mass=20;
		};
	};
};

class CfgVehicles
{
	class 180th_Clone_Backpack;
	class 180th_Clone_Heavy_Backpack;
	class 180th_Clone_Medic_Backpack;
	class 180th_Clone_RTO_Backpack;
	class 180th_RTO_Mini_Pack;
	class 180th_Recon_RTO_Backpack;
	class 180th_Recruit;

	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> BACKPACKS
	class 180th_Wallace_RTO_Backpack: 180th_Clone_RTO_Backpack
	{
		displayName="[180th Customs] Clone RTO backpack (Wallace)";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_CUSTOMS\data\accessories\180th_Wallace_RTO_Backpack.paa",
			"",
			"",
			"",
			"\WS_A_CUSTOMS\data\accessories\180th_Wallace_RTO_Backpack.paa"
		};
	};
	class 180th_Roach_RTO_Mini: 180th_Recon_RTO_Backpack {
		maximumload=200;
		displayName="[180th Customs] Clone RTO Mini (Roach)";
		model="\SWLB_CEE\data\SWLB_CEE_Recon_RTO_Backpack.p3d";
		hiddenSelections[]= {
			"Accumulator",
			"Camo1",
			"Camo2",
			"Camo3",
			"Main"
		};
		hiddenSelectionsTextures[]= {
			"\WS_A_CUSTOMS\data\accessories\180th_Roach_RTO_Mini_1.paa",
			"\WS_A_CUSTOMS\data\accessories\180th_Roach_Bags.paa",
			"\WS_A_CUSTOMS\data\accessories\180th_Roach_Bags.paa",
			"\WS_A_CUSTOMS\data\accessories\180th_Roach_Light.paa",
			"\WS_A_CUSTOMS\data\accessories\180th_Roach_RTO_Mini_0.paa"
		};
		tf_range = 80000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_additional_channel = 1;
	};
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ARMOR 
	class 180th_Jerry: 180th_Recruit
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
			"180th_Trooper_Vest",
			"180th_Jerry_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Jerry_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
	};
	class 180th_Soviet: 180th_Recruit
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
			"180th_Trooper_Vest",
			"180th_Soviet_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Soviet_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
	};
	class 180th_Wayne: 180th_Recruit
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
			"180th_Trooper_Vest",
			"180th_Wayne_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Wayne_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
	};
	class 180th_Icarus: 180th_Recruit
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
			"180th_Trooper_Vest",
			"180th_Icarus_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Icarus_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
	};
	class 180th_Tom: 180th_Recruit
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
			"180th_Trooper_Vest",
			"180th_Tom_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Tom_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
	};
	class 180th_Kat: 180th_Recruit
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
			"180th_Trooper_Vest",
			"180th_Kat_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Kat_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
	};
	class 180th_Raccoon: 180th_Recruit
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
			"180th_Trooper_Vest",
			"180th_Raccoon_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Raccoon_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
	};
	class 180th_Zarush: 180th_Recruit
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
			"180th_Trooper_Vest",
			"180th_Zarush_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Zarush_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
	};
	class 180th_Jamison: 180th_Recruit
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
			"180th_Trooper_Vest",
			"180th_Jamison_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Jamison_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
		};
	};
	class 180th_Fire: 180th_Recruit
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
			"180th_Trooper_Vest",
			"180th_Fire_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Fire_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
	};
	class 180th_Grape: 180th_Recruit
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
			"180th_Trooper_Vest",
			"180th_Grape_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Grape_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
	};
	class 180th_Green: 180th_Recruit
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
			"180th_Trooper_Vest",
			"180th_Green_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Green_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
	};
	class 180th_Roach: 180th_Recruit
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Roach_Uniform";
		hiddenSelectionsTextures[]= {
	        "WS_A_CUSTOMS\data\armor\180th_Roach_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Roach_Armor2.paa",
		};
		linkedItems[]= {
			"180th_Roach_Helmet",
			"180th_Roach_RTO_Mini",
			"180th_Roach_Vest",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
		};
		respawnLinkedItems[]= {
			"180th_Roach_Helmet",
			"180th_Roach_RTO_Mini",
			"180th_Roach_Vest",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
		};
	};
	class 180th_Wallace: 180th_Recruit
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
			"180th_Trooper_Vest",
			"180th_Wallace_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Wallace_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
	};
	class 180th_Frost: 180th_Recruit
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
			"180th_Trooper_Vest",
			"180th_Frost_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Frost_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class 180th_Kreed: 180th_Recruit
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
			"180th_Trooper_Vest",
			"180th_Kreed_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Kreed_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
		};
	};
	class 180th_Abor: 180th_Recruit
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
			"180th_Trooper_Vest",
			"180th_Abor_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Abor_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
	};
	class 180th_Hoplite: 180th_Recruit
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
			"180th_Trooper_Vest",
			"180th_Hoplite_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Hoplite_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
	};
	class 180th_Krieg: 180th_Recruit
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
			"180th_Trooper_Vest",
			"180th_Krieg_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Krieg_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			
		};
	};
	class 180th_Sniper: 180th_Recruit
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
        faction = "180thACA";
		editorSubcategory="WS_180th_Armory_Customs";
		uniformclass="180th_Sniper_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_CUSTOMS\data\armor\180th_Sniper_Armor1.paa",
			"WS_A_CUSTOMS\data\armor\180th_Sniper_Armor2.paa",
		};
		linkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Sniper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Sniper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
		};
	};
	class 180th_Kloud: 180th_Recruit
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
			"180th_Trooper_Vest",
			"180th_Kloud_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"180th_Kloud_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
		};
	};
};
class cfgMods
{
	author="Wyvern Studios";
	timepacked="154027032022";
};
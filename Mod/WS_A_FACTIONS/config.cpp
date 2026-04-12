class CfgPatches
{
	class WV_Armory_Factions
	{
		author="Helix Studios";
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
			"51st_Trooper",
		};
		weapons[]=
		{
			"51st_Trooper_Helmet",
			"51st_Trooper_Uniform"
		};
	};
};
class CfgFactionClasses 
{
	class 51stDCA
	{
	displayName = "51st Defense Corps - Armory";
	};
};
class CfgEditorSubcategories
{
	class WS_180th_Armory_Factions
	{
		displayName="51st Defense Corps";
	};
	

};
class CfgWeapons
{
	class JMSLLTE_EmpTrooper_helmet;
	class JMSLLTE_EmpOfficerCap_black_helmet;
	class 180th_Clone_NVVisor;
	class ItemInfo;
	class ItemCore;
	class HeadgearItem;
	class 180th_P1_Trooper_Helmet;
	class ls_gar_phase1Arf_helmet;
	
	class 51st_Clone_NVVisor: 180th_Clone_NVVisor
	{
		author="Helix Studios";
		displayName="[51st] Clone NV Visor (Raised)";
		hiddenSelectionsTextures[]=
		{
			"WS_A_FACTIONS\data\accessories\51st_NVG.paa" 
		};
	};
	class 51st_Trooper_Helmet: 180th_P1_Trooper_Helmet
	{
		displayName="[51st] Clone trooper helmet";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_FACTIONS\data\helmets\51st_Trooper_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa",
		};
	};
	class 51st_Medic_Helmet: 180th_P1_Trooper_Helmet
	{
		displayName="[51st] Clone trooper medic helmet";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_FACTIONS\data\helmets\51st_Medic_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa",
		};
	};
	class 51st_Cordo_Helmet: 180th_P1_Trooper_Helmet
	{
		displayName="[51st] Clone trooper helmet (Cordo)";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_FACTIONS\data\helmets\51st_Cordo_Helmet.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase1\data\visor_co.paa",
			"\ls\core\addons\characters_clone_legacy\helmets\phase1\data\illum_co.paa",
		};
	};
	class 51st_ARF_Helmet: ls_gar_phase1Arf_helmet
	{
		displayName="[51st] Clone arf trooper helmet";
		hiddenSelectionsTextures[]=
		{
		    "WS_A_FACTIONS\data\helmets\51st_ARF_Helmet.paa",
			"",
			"\ls\core\addons\characters_clone_legacy\helmets\arf\data\visor_co.paa",
		};
	};
	class WS_74th_Trooper_helmet: JMSLLTE_EmpTrooper_helmet
	{
		scope=2;
		author="Raccoon";
		displayName="[CIS] 74th Trooper helmet";
		hiddenSelectionsTextures[]=
		{
			"WS_A_FACTIONS\data\helmets\74th_Trooper_Helmet.paa"
		};
	};
	class WS_74th_Medic_helmet: JMSLLTE_EmpTrooper_helmet
	{
		scope=2;
		author="Raccoon";
		displayName="[CIS] 74th Trooper helmet";
		hiddenSelectionsTextures[]=
		{
			"WS_A_FACTIONS\data\helmets\74th_Medic_Helmet.paa"
		};
	};
	class Medical_Officer_Cap: JMSLLTE_EmpOfficerCap_black_helmet
	{
		scope=2;
		author="Raccoon";
		displayName="[GAR] Medical Officer cap";
		hiddenSelectionsTextures[]=
		{
			 "WS_A_FACTIONS\data\helmets\Medical_Officer_Cap.paa",
		};
	};
	class Naval_Officer_Cap: JMSLLTE_EmpOfficerCap_black_helmet
	{
		scope=2;
		author="Raccoon";
		displayName="[GAR] Naval Officer cap";
		hiddenSelectionsTextures[]=
		{
			 "WS_A_FACTIONS\data\helmets\Naval_Officer_Cap.paa",
		};
	};

	//new
    class 180th_Recruit_Uniform;
	class JMSLLTE_EmpOfficer_black_F_CombatUniform;
	class Uniform_Base;
	class Vest_Camo_Base;
	class UniformItem;

	class 51st_Trooper_Uniform: 180th_Recruit_Uniform
	{
		displayName="[51st] Clone trooper uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="51st_Trooper";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 51st_Medic_Uniform: 180th_Recruit_Uniform
	{
		displayName="[51st] Clone medic uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="51st_Medic";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 51st_Cordo_Uniform: 180th_Recruit_Uniform
	{
		displayName="[51st] Clone trooper uniform (Cordo)";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="51st_Cordo";
			containerClass="Supply140";
			mass=40;
		};
	};
	class Naval_Officer_Uniform: JMSLLTE_EmpOfficer_black_F_CombatUniform
	{
		author="Raccoon";
		scope=2;
		displayName="[GAR] Naval Officer uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="WS_NavOfficer_F";
			Armor=10;
			modelSides[]={6};
			containerClass="Supply50";
			mass=10;
		};
	};
	class Medical_Officer_Uniform: Naval_Officer_Uniform
	{
		displayName="[GAR] Medical Officer uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="WS_MedOfficer_F";
			Armor=10;
			modelSides[]={6};
			containerClass="Supply50";
			mass=10;
		};
	};
	class Army_Officer_Uniform: Naval_Officer_Uniform
	{
		displayName="[GAR] Trooper uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="WS_ArmyOfficer_F";
			Armor=10;
			modelSides[]={6};
			containerClass="Supply50";
			mass=10;
		};
	};
	class Spec_Officer_Uniform: Naval_Officer_Uniform
	{
		displayName="[GAR] Special operations officer uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="WS_SpecOfficer_F";
			Armor=10;
			modelSides[]={6};
			containerClass="Supply50";
			mass=10;
		};
	};
	class Vic_Officer_Uniform: Naval_Officer_Uniform
	{
		displayName="[GAR] Vehicle operations officer uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="WS_VicOfficer_F";
			Armor=10;
			modelSides[]={6};
			containerClass="Supply50";
			mass=10;
		};
	};
	class Comp_Officer_Uniform: Naval_Officer_Uniform
	{
		displayName="[GAR] Officer uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="WS_CompOfficer_F";
			Armor=10;
			modelSides[]={6};
			containerClass="Supply50";
			mass=10;
		};
	};
	class WS_74th_Trooper_F_CombatUniform: Uniform_Base
	{
		author="Raccoon";
		scope=2;
		displayName="[CIS] 74th trooper suit";
		picture="\JMSLLTE_empire\data\ico\ico_officer.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="WS_74th_Trooper_F";
			Armor=10;
			modelSides[]={6};
			containerClass="Supply100";
			mass=30;
		};
	};
	class WS_74th_Medic_F_CombatUniform: WS_74th_Trooper_F_CombatUniform
	{
		displayName="[CIS] 74th medic suit";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="WS_74th_Medic_F";
			Armor=10;
			modelSides[]={6};
			containerClass="Supply100";
			mass=30;
		};
	};
	class WS_74th_Brigov_F_CombatUniform: WS_74th_Trooper_F_CombatUniform
	{
		displayName="[CIS] 74th Lieutenant Brigov suit";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="WS_74th_Brigov_F";
			Armor=10;
			modelSides[]={6};
			containerClass="Supply100";
			mass=30;
		};
	};
	class WS_74th_Pilot_CombatUniform: WS_74th_Trooper_F_CombatUniform
	{
		displayName="[CIS] 74th pilot uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="WS_74th_Pilot_F";
			Armor=10;
			modelSides[]={6};
			containerClass="Supply50";
			mass=10;
		};
	};
	class WS_GARNavyCrew_grey_F_CombatUniform: Uniform_Base
	{
		author="Raccoon";
		scope=2;
		displayName="[GAR] Navy crewman uniform";
		picture="\JMSLLTE_empire\data\ico\ico_officer.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="WS_GARNavyCrew_grey_F";
			Armor=10;
			modelSides[]={6};
			containerClass="Supply50";
			mass=10;
		};
	};
	class WS_51stBandCape_armor: Vest_Camo_Base
	{
		author="Raccoon";
		scope=2;
		side=3;
		displayName="[51st] Clone bandolier+cape";
		picture="\JMSLLTE_empire\vests\data\ico\ico_storm.paa";
		model="\JMSLLTE_empire\vests\StormtroperBandCape.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"JMSLLTE_empire\vests\data\stormcape_dirty_co.paa"
		};
	};
	class WS_OfficerChest_armor: Vest_Camo_Base
	{
		author="Raccoon";
		scope=2;
		side=3;
		displayName="Officer chest armor";
		picture="\JMSLLTE_empire\vests\data\ico\ico_storm.paa";
		model="\JMSLLTE_empire\vests\of_chestArmor.p3d";
	};
	class WS_TrooperCapeBelt_armor: Vest_Camo_Base
	{
		author="Raccoon";
		scope=2;
		side=3;
		displayName="[CIS] Trooper cape+belt";
		picture="\JMSLLTE_empire\vests\data\ico\ico_storm.paa";
		model="\JMSLLTE_empire\vests\TrooperCapeBelt.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"JMSLLTE_empire\vests\data\stormcape_dirty_co.paa"
		};
	};
};
class CfgVehicles
{
	//new
	class 180th_Clone_Backpack;
	class 180th_Clone_RTO_Backpack;
	class JMSLLTE_ST_Soldier_Base;
	class B_Kitbag_rgr;
	class mgsr_fatigues;
	class 180th_Recruit;
	class O_Soldier_base_F;

	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> BACKPACKS 
	class 51st_Clone_Backpack: 180th_Clone_Backpack
	{
		displayName="[51st] Clone trooper backpack";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_FACTIONS\data\accessories\51st_Backpack.paa",
			"\WS_A_FACTIONS\data\accessories\51st_Backpack.paa",
			"",
			"",
			""
		};
	};
	class 51st_Clone_RTO_Backpack: 180th_Clone_RTO_Backpack
	{
		displayName="[51st] Clone trooper rto backpack";
		hiddenSelectionsTextures[]=
		{
			"\WS_A_FACTIONS\data\accessories\51st_Backpack.paa",
			"",
			"",
			"",
			"\WS_A_FACTIONS\data\accessories\51st_Backpack.paa"
		};
	};
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ARMOR 
	class 51st_Trooper: 180th_Recruit
	{
        faction = "51stDCA";
		editorSubcategory="WS_180th_Armory_Factions";
		uniformclass="51st_Trooper_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_FACTIONS\data\armor\51st_Trooper_Armor1.paa",
			"WS_A_FACTIONS\data\armor\51st_Trooper_Armor2.paa",
		};
		linkedItems[]=
		{
			"180th_Trooper_Vest",
			"51st_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"51st_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
		};
	};
	class 51st_Medic: 180th_Recruit
	{
        faction = "51stDCA";
		editorSubcategory="WS_180th_Armory_Factions";
		uniformclass="51st_Medic_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_FACTIONS\data\armor\51st_Medic_Armor1.paa",
			"WS_A_FACTIONS\data\armor\51st_Trooper_Armor2.paa",
		};
		linkedItems[]=
		{
			"180th_Trooper_Vest",
			"51st_Medic_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"51st_Medic_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
		};
	};
	class 51st_Cordo: 180th_Recruit
	{
        faction = "51stDCA";
		editorSubcategory="WS_180th_Armory_Factions";
		uniformclass="51st_Cordo_Uniform";
		hiddenSelectionsTextures[]=
		{
	        "WS_A_FACTIONS\data\armor\51st_Cordo_Armor1.paa",
			"WS_A_FACTIONS\data\armor\51st_Trooper_Armor2.paa",
		};
		linkedItems[]=
		{
			"180th_Trooper_Vest",
			"51st_Cordo_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
		};
		respawnLinkedItems[]=
		{
			"180th_Trooper_Vest",
			"51st_Cordo_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
		};
	};
	class WS_MedOfficer_F: O_Soldier_base_F
	{
		author="Raccoon";
		scope=1;
		modelSides[]={6};
		model="\JMSLLTE_empire\officer.p3d";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_FACTIONS\data\armor\Medical_Officer_Body.paa"
		};
	};
	class WS_NavOfficer_F: O_Soldier_base_F
	{
		author="Raccoon";
		scope=1;
		modelSides[]={6};
		model="\JMSLLTE_empire\officer.p3d";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_FACTIONS\data\armor\Naval_Officer_Body.paa"
		};
	};
	class WS_ArmyOfficer_F: O_Soldier_base_F
	{
		author="Raccoon";
		scope=1;
		modelSides[]={6};
		model="\JMSLLTE_empire\officer.p3d";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_FACTIONS\data\armor\Trooper_Officer_Body.paa"
		};
	};
	class WS_SpecOfficer_F: O_Soldier_base_F
	{
		author="Raccoon";
		scope=1;
		modelSides[]={6};
		model="\JMSLLTE_empire\officer.p3d";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_FACTIONS\data\armor\Special_Forces_Officer_Body.paa"
		};
	};
	class WS_VicOfficer_F: O_Soldier_base_F
	{
		author="Raccoon";
		scope=1;
		modelSides[]={6};
		model="\JMSLLTE_empire\officer.p3d";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_FACTIONS\data\armor\Vehicle_Officer_Body.paa"
		};
	};
	class WS_CompOfficer_F: O_Soldier_base_F
	{
		author="Raccoon";
		scope=1;
		modelSides[]={6};
		model="\JMSLLTE_empire\officer.p3d";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_FACTIONS\data\armor\Company_Command_Officer_Body.paa"
		};
	};
	class WS_74th_Trooper_F: JMSLLTE_ST_Soldier_Base
	{
		author="Raccoon";
		scope=1;
		modelSides[]={6};
		model="\JMSLLTE_empire\trooper.p3d";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_FACTIONS\data\armor\74th_Trooper_Uniform.paa",
			"WS_A_FACTIONS\data\armor\74th_Trooper_Armor.paa"
		};
	};
	class WS_74th_Medic_F: JMSLLTE_ST_Soldier_Base
	{
		author="Raccoon";
		scope=1;
		modelSides[]={6};
		model="\JMSLLTE_empire\trooper.p3d";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_FACTIONS\data\armor\74th_Trooper_Uniform.paa",
			"WS_A_FACTIONS\data\armor\74th_Medic_Armor.paa"
		};
	};
	class WS_74th_Brigov_F: JMSLLTE_ST_Soldier_Base
	{
		author="Raccoon";
		scope=1;
		modelSides[]={6};
		model="\JMSLLTE_empire\trooper.p3d";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_FACTIONS\data\armor\74th_Trooper_Uniform.paa",
			"WS_A_FACTIONS\data\armor\74th_Brigov_Armor.paa"
		};
	};
	class WS_GARNavyCrew_grey_F: O_Soldier_base_F
	{
		author="Raccoon";
		scope=1;
		modelSides[]={6};
		model="\JMSLLTE_empire\navycrewman.p3d";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_FACTIONS\data\armor\Navy_Crewman_Uniform.paa"
		};
	};
	class WS_74th_Pilot_F: O_Soldier_base_F
	{
		author="Raccoon";
		scope=1;
		modelSides[]={6};
		model="\JMSLLTE_empire\navycrewman.p3d";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_FACTIONS\data\armor\74th_Pilot_Uniform.paa"
		};
	};
};
class cfgMods
{
	author="Helix Studios";
	timepacked="153727032022";
};
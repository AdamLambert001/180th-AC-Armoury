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
	class SWLB_clone_P2_helmet;
	class SWLB_clone_ab_helmet;
	class SWLB_clone_P1_helmet;
	class SWLB_clone_P15_helmet;
	class SWLB_clone_ARF_P1_helmet;
	class SWLB_clone_ARF_P2_helmet;
	class ls_redforHelmet_base;
	class SWLB_clone_barc_helmet;
	class SWLB_P2_SpecOps_Helmet;
	class SWLB_clone_pilot_P2_helmet;
	class SWLB_clone_eng_helmet;
	class JMSLLTE_EmpTrooper_helmet;
	class JMSLLTE_EmpOfficerCap_black_helmet;
	class NVGoggles;
	class ItemInfo;
	class ls_blueforHelmet_base;
	class ItemCore;
	class HeadgearItem;
	class 51st_Clone_NVVisor: NVGoggles
	{
		author="Helix Studios";
		displayName="[51st] Clone NV Visor (Raised)";
		modelOptics="\SWLB_clones\SWLB_clone_nvg_optic_dummy.p3d";
		model="\SWLB_clones\swlb_clone_nvg_off.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_FACTIONS\data\accessories\51st_NVG.paa" 
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
	class 51st_Trooper_Helmet: SWLB_clone_P1_helmet
	{
		displayName="[51st] Clone trooper helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_FACTIONS\data\helmets\51st_Trooper_Helmet.paa",
		};
	};
	class 51st_Medic_Helmet: SWLB_clone_P1_helmet
	{
		displayName="[51st] Clone trooper medic helmet";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_FACTIONS\data\helmets\51st_Medic_Helmet.paa",
		};
	};
	class 51st_Cordo_Helmet: SWLB_clone_P1_helmet
	{
		displayName="[51st] Clone trooper helmet (Cordo)";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_helmet_ca.paa";
		hiddenSelectionsTextures[]=
		{
	    	"WS_A_FACTIONS\data\helmets\51st_Cordo_Helmet.paa",
		};
	};
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> DETACHMENT 
	class 51st_ARF_Helmet: SWLB_clone_ARF_P1_helmet
	{
		displayName="[51st] Clone arf trooper helmet";
      	picture="\SWLB_clones\data\ui\icon_SWLB_clone_helmet_arf_p1_ca.paa";
		hiddenSelectionsTextures[]=
		{
		    "WS_A_FACTIONS\data\helmets\51st_ARF_Helmet.paa",
		};
	};
	class WS_74th_Trooper_helmet: JMSLLTE_EmpTrooper_helmet
	{
		scope=2;
		author="Raccoon";
		weaponPoolAvailable=1;
		displayName="[CIS] 74th Trooper helmet";
		picture="\JMSLLTE_empire\helmets\data\ico\ico_helm_storm.paa";
		model="JMSLLTE_empire\helmets\Trooper_helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_FACTIONS\data\helmets\74th_Trooper_Helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformmodel="JMSLLTE_empire\helmets\Trooper_helmet.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			material=-1;
			explosionShielding=1.2;
			minimalHit=0.0099999998;
			passThrough=0.0099999998;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=40;
					passThrough=0.1;
				};
			};
		};
	};
	class WS_74th_Medic_helmet: JMSLLTE_EmpTrooper_helmet
	{
		scope=2;
		author="Raccoon";
		weaponPoolAvailable=1;
		displayName="[CIS] 74th Trooper helmet";
		picture="\JMSLLTE_empire\helmets\data\ico\ico_helm_storm.paa";
		model="JMSLLTE_empire\helmets\Trooper_helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_FACTIONS\data\helmets\74th_Medic_Helmet.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformmodel="JMSLLTE_empire\helmets\Trooper_helmet.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			material=-1;
			explosionShielding=1.2;
			minimalHit=0.0099999998;
			passThrough=0.0099999998;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=40;
					passThrough=0.1;
				};
			};
		};
	};
	class Medical_Officer_Cap: JMSLLTE_EmpOfficerCap_black_helmet
	{
		scope=2;
		author="Raccoon";
		weaponPoolAvailable=1;
		displayName="[GAR] Medical Officer cap";
		picture="\JMSLLTE_empire\helmets\data\ico\ico_cap_bl.paa";
		model="JMSLLTE_empire\helmets\Officer_cap.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			 "WS_A_FACTIONS\data\helmets\Medical_Officer_Cap.paa",
		};
		class ItemInfo: HeadgearItem
		{
			mass=3;
			uniformmodel="JMSLLTE_empire\helmets\Officer_cap.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			material=-1;
			explosionShielding=0;
			minimalHit=0.0099999998;
			passThrough=0.0099999998;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=5;
					passThrough=0.1;
				};
			};
		};
	};
	class Naval_Officer_Cap: JMSLLTE_EmpOfficerCap_black_helmet
	{
		scope=2;
		author="Raccoon";
		weaponPoolAvailable=1;
		displayName="[GAR] Naval Officer cap";
		picture="\JMSLLTE_empire\helmets\data\ico\ico_cap_bl.paa";
		model="JMSLLTE_empire\helmets\Officer_cap.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			 "WS_A_FACTIONS\data\helmets\Naval_Officer_Cap.paa",
		};
		class ItemInfo: HeadgearItem
		{
			mass=3;
			uniformmodel="JMSLLTE_empire\helmets\Officer_cap.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			material=-1;
			explosionShielding=0;
			minimalHit=0.0099999998;
			passThrough=0.0099999998;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=5;
					passThrough=0.1;
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
	class Vest_Camo_Base;
	class JMSLLTE_EmpNavyCrew_grey_F;
	class SWLB_clone_assault_armor;
	class SWLB_clone_grenadier_armor;
	class SWLB_clone_specialist_armor;
	class VestItem;
	class Uniform_Base;
	class JMSLLTE_ST_Soldier_Base;
	class U_C_Poloshirt_blue;
	class JMSLLTE_EmpOfficer_black_F_CombatUniform;
    class SWLB_clone_uniform;
	class UniformItem;
	class 51st_Trooper_Uniform: SWLB_clone_uniform
	{
		displayName="[51st] Clone trooper uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="51st_Trooper";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 51st_Medic_Uniform: SWLB_clone_uniform
	{
		displayName="[51st] Clone medic uniform";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="51st_Medic";
			containerClass="Supply140";
			mass=40;
		};
	};
	class 51st_Cordo_Uniform: SWLB_clone_uniform
	{
		displayName="[51st] Clone trooper uniform (Cordo)";
		picture="\SWLB_units\data\ui\icon_SWLB_clone_5thTrooper_uniform_ca.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="51st_Cordo";
			containerClass="Supply140";
			mass=40;
		};
	};
	class Medical_Officer_Uniform: JMSLLTE_EmpOfficer_black_F_CombatUniform
	{
		author="Raccoon";
		scope=2;
		displayName="[GAR] Medical Officer uniform";
		picture="\JMSLLTE_empire\data\ico\ico_officer.paa";
		nakedUniform="U_BasicBody";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
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
	class Naval_Officer_Uniform: JMSLLTE_EmpOfficer_black_F_CombatUniform
	{
		author="Raccoon";
		scope=2;
		displayName="[GAR] Naval Officer uniform";
		picture="\JMSLLTE_empire\data\ico\ico_officer.paa";
		nakedUniform="U_BasicBody";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
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
	class Army_Officer_Uniform: JMSLLTE_EmpOfficer_black_F_CombatUniform
	{
		author="Raccoon";
		scope=2;
		displayName="[GAR] Trooper uniform";
		picture="\JMSLLTE_empire\data\ico\ico_officer.paa";
		nakedUniform="U_BasicBody";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
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
	class Spec_Officer_Uniform: JMSLLTE_EmpOfficer_black_F_CombatUniform
	{
		author="Raccoon";
		scope=2;
		displayName="[GAR] Special operations officer uniform";
		picture="\JMSLLTE_empire\data\ico\ico_officer.paa";
		nakedUniform="U_BasicBody";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
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
	class Vic_Officer_Uniform: JMSLLTE_EmpOfficer_black_F_CombatUniform
	{
		author="Raccoon";
		scope=2;
		displayName="[GAR] Vehicle operations officer uniform";
		picture="\JMSLLTE_empire\data\ico\ico_officer.paa";
		nakedUniform="U_BasicBody";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
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
		class Comp_Officer_Uniform: JMSLLTE_EmpOfficer_black_F_CombatUniform
	{
		author="Raccoon";
		scope=2;
		displayName="[GAR] Officer uniform";
		picture="\JMSLLTE_empire\data\ico\ico_officer.paa";
		nakedUniform="U_BasicBody";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
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
		nakedUniform="U_BasicBody";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
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
	class WS_74th_Medic_F_CombatUniform: Uniform_Base
	{
		author="Raccoon";
		scope=2;
		displayName="[CIS] 74th medic suit";
		picture="\JMSLLTE_empire\data\ico\ico_officer.paa";
		nakedUniform="U_BasicBody";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
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
	class WS_74th_Brigov_F_CombatUniform: Uniform_Base
	{
		author="Raccoon";
		scope=2;
		displayName="[CIS] 74th Lieutenant Brigov suit";
		picture="\JMSLLTE_empire\data\ico\ico_officer.paa";
		nakedUniform="U_BasicBody";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
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
	class WS_GARNavyCrew_grey_F_CombatUniform: Uniform_Base
	{
		author="Raccoon";
		scope=2;
		displayName="[GAR] Navy crewman uniform";
		picture="\JMSLLTE_empire\data\ico\ico_officer.paa";
		nakedUniform="U_BasicBody";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
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
	class WS_74th_Pilot_CombatUniform: Uniform_Base
	{
		author="Raccoon";
		scope=2;
		displayName="[CIS] 74th pilot uniform";
		picture="\JMSLLTE_empire\data\ico\ico_officer.paa";
		nakedUniform="U_BasicBody";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
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
		class ItemInfo: VestItem
		{
			uniformModel="\JMSLLTE_empire\vests\StormtroperBandCape.p3d";
			containerClass="Supply110";
			mass=20;
			modelsides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=5;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=10;
					passThrough=0.40000001;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=15;
					passThrough=0.40000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=10;
					passThrough=0.40000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=10;
					passThrough=0.40000001;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=0.2;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=15;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.40000001;
				};
			};
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
		class ItemInfo: VestItem
		{
			uniformModel="\JMSLLTE_empire\vests\of_chestArmor.p3d";
			containerClass="Supply80";
			mass=15;
			modelsides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=5;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=10;
					passThrough=0.40000001;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=15;
					passThrough=0.40000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=10;
					passThrough=0.40000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=5;
					passThrough=0.40000001;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=2;
					passThrough=0.2;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=3;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.40000001;
				};
			};
		};
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
		class ItemInfo: VestItem
		{
			uniformModel="\JMSLLTE_empire\vests\TrooperCapeBelt.p3d";
			containerClass="Supply90";
			mass=15;
			modelsides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=5;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=10;
					passThrough=0.40000001;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=15;
					passThrough=0.40000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=10;
					passThrough=0.40000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=5;
					passThrough=0.40000001;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=2;
					passThrough=0.2;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=5;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.40000001;
				};
			};
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
	class mgsr_fatigues;
	class SWLB_clone_RTO_mini_backpack;
	class SWLB_clone_backpack_heavy;
	class SWLB_clone_backpack_medic;
	class Land;
	class Man: Land
	{
		class EventHandlers;
	};
	class CAManBase: Man
	{
		class HitPoints;
	};
	class SoldierEB: CAManBase
	{
		class HitPoints: HitPoints
		{
			class HitFace;
			class HitNeck;
			class HitHead;
			class HitPelvis;
			class HitAbdomen;
			class HitDiaphragm;
			class HitChest;
			class HitBody;
			class HitArms;
			class HitHands;
			class HitLegs;
		};
	};
	class O_Soldier_base_F: SoldierEB
	{
		class EventHandlers;
	};
	class JMSLLTE_ST_Soldier_Base: O_Soldier_base_F
	{
		modelSides[]={0,1,2,3};
		ACE_GForceCoef=0;
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.1;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=4;
				material=-1;
				name="neck";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.1;
				radius=0.2;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor=4;
				material=-1;
				name="pelvis";
				passThrough=0.1;
				radius=0.2;
				explosionShielding=0.25;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitAbdomen: HitPelvis
			{
				armor=4;
				material=-1;
				name="spine1";
				passThrough=0.1;
				radius=0.15000001;
				explosionShielding=0.25;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=4;
				material=-1;
				name="spine2";
				passThrough=0.1;
				radius=0.15000001;
				explosionShielding=2;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=4;
				material=-1;
				name="spine3";
				passThrough=0.1;
				radius=0.15000001;
				explosionShielding=2;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=0.1;
				radius=0.16;
				explosionShielding=2;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor=10;
				material=-1;
				name="arms";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=0.25;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitHands: HitArms
			{
				armor=10;
				material=-1;
				name="hands";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=0.25;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs
			{
				armor=10;
				material=-1;
				name="legs";
				passThrough=0.1;
				radius=0.12;
				explosionShielding=0.25;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitLeftArm
			{
				armor=10;
				material=-1;
				name="hand_l";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=0.25;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				armor=10;
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=10;
				material=-1;
				name="leg_l";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=0.25;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				armor=10;
				name="leg_r";
			};
		};
	};
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> BACKPACKS 
	class 51st_Clone_Backpack: SWLB_clone_backpack
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
	class 51st_Clone_RTO_Backpack: SWLB_clone_backpack_RTO
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
	class 51st_Trooper: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
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
			"SWLB_clone_basic_armor",
			"51st_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"51st_Trooper_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 51st_Medic: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
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
			"SWLB_clone_basic_armor",
			"51st_Medic_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"51st_Medic_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
	};
	class 51st_Cordo: SWLB_clone_base_P2
	{
		editorPreview="\SWLB_units\data\ui\editorPreviews\SWLB_clone_212thTrooper.jpg";
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
			"SWLB_clone_basic_armor",
			"51st_Cordo_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
		};
		respawnLinkedItems[]=
		{
			"SWLB_clone_basic_armor",
			"51st_Cordo_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"SWLB_comlink"
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
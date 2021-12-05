class CfgPatches
{
	class armyDressu
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR"
		};
	};
	class REVAN_CAPE
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.80000001;
		requiredAddons[]={};
	};
	class arcaan_head
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR"
		};
		magazines[]={};
		ammo[]={};
	};
};
class CfgVehicles
{
	class B_Soldier_base_F;
	class JediBA_U: B_Soldier_base_F
	{
		author="Wyvern Studios";
		_generalMacro="I_Soldier_F";
		scope=2;
		displayName="[180th] General Harken Ponlau Battle Armor";
		nakedUniform="U_BasicBody";
		uniformClass="SS_JEDIBA_U";
		model="LFPmodels\data\jediBA.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
	};
	class Dural_U: B_Soldier_base_F
	{
		author="MAD Dural";
		_generalMacro="B_Soldier_F";
		scope=2;
		displayName="Sith_armor";
		nakedUniform="U_BasicBody";
		uniformClass="SS_DURAL_U";
		model="LFPmodels\data\Dural_armor.p3d";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ruTest\DATA\ru_test_co.paa"
		};
	};
};
class cfgWeapons
{
	class SWLB_clone_commando_basic_armor_k1;
	class Uniform_Base;
	class UniformItem;
	class HeadgearItem;
	class H_HelmetB;
	class ItemCore;
	class VestItem;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class SS_DURAL_U: Uniform_Base
	{
		author="MAD DURAL";
		scope=2;
		displayName="Sith Armor";
		picture="\A3\characters_f\data\ui\icon_u_c_poloshirt_tricolour_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="Dural_U";
			containerClass="Supply20";
			mass=80;
		};
	};
	class SS_JEDIBA_U: Uniform_Base
	{
		author="Wyvern Studios";
		scope=2;
		allowedSlots[]={450};
		displayName="[180th] General Harken Ponlau Battle Armor";
		model="LFPmodels\data\jediBA.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="LFPmodels\data\jediBA.p3d";
			uniformClass="JediBA_U";
			containerClass="Supply40";
			hiddenSelections[]=
			{
				"camo"
			};
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=10;
					passThrough=0.30000001;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=20;
					passThrough=0.30000001;
				};
			};
		};
	};
	
};
class CfgGlasses
{
	class None;
	class REVAN_CAPE: None
	{
		scope=2;
		displayname="Sith Cape";
		model="LFPmodels\data\revan_cape.p3d";
		picture="-";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"LFPmodels\data\revan_cape\cape_co.paa"
		};
		identityTypes[]=
		{
			"NoGlasses",
			1000
		};
	};
	class Shadow_mask: None
	{
		scope=2;
		displayname="Sith Mask";
		model="LFPmodels\data\sa_mask.p3d";
		picture="-";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"LFPmodels\data\samask\2_ca.paa"
		};
		identityTypes[]=
		{
			"NoGlasses",
			1000
		};
	};
};
class CfgHeads
{
	class Default_A3;
	class custom_head_valk: Default_A3
	{
		model="lfpmodels\data\arcaan_f.p3d";
	};
};
class CfgIdentities
{
	class Head_NATO;
	class Head_Euro;
	class Head_TK;
};
class cfgMods
{
	author="MГёrket";
	timepacked="1604861122";
};

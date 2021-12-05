class cfgpatches
{
	class 180_flags
	{
		author="Raccoon";
		requiredAddons[]={};
		weapons[]={};
		units[]=
		{
			""
		};
	};
};
class CfgEditorCategories
{
	class 180th_statics_props
	{
		displayName="180th Assault Corps";
	};
};
class CfgEditorSubcategories
{
	class 180th_flag_sub
	{
		displayName="Flags";
	};
};
class CfgVehicles
{
	class FlagCarrier;
	class 180_flag_base: FlagCarrier
	{
		author="Raccoon";
		displayName="=== Core ===";
		editorCategory="180th_statics_props";
		editorSubcategory="180th_flag_sub";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"flag",
					0
				}
			};
			hide[]={};
			verticalOffset=3.977;
			verticalOffsetWorld=0;
			init="''";
		};
	};
	class 180_flag_wyvern: 180_flag_base
	{
		scope=2;
		scopeCurator=2;
		displayName="Wyvern Company Flag";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '180th_ST\flags\data\180th_Wyvern_Flag.paa'";
		};
	};
	class 180_flag_wyvernDamaged: 180_flag_base
	{
		scope=2;
		scopeCurator=2;
		displayName="Wyvern Company (Damaged)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '180th_ST\flags\data\180th_Wyvern_Flag_D.paa'";
		};
	};
	class Rarefied_Air_Cavalry_Flag: 180_flag_base
	{
		scope=2;
		scopeCurator=2;
		displayName="Rarefied Air Cavalry";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '180th_ST\flags\data\Rarefield_Flag.paa'";
		};
	};
	class Rarefied_Air_Cavalry_Flag_Damaged: 180_flag_base
	{
		scope=2;
		scopeCurator=2;
		displayName="Rarefied Air Cavalry (Damaged)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '180th_ST\flags\data\Rarefield_Flag_Damaged.paa'";
		};
	};
};
class cfgMods
{
	author="";
	timepacked="1612347698";
};

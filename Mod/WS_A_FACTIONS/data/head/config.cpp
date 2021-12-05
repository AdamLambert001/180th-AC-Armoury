class CfgPatches
{
	class JMSLLTE_empireith_head_2
	{
		author="Raccoon";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F"
		};
	};
};
class CfgFaces
{
	class Default;
	class Man_A3: Default
	{
		class Default;
		class Head_Herd: Default
		{
			name="SW: Herdessan";
			displayname="SW: Herdessan";
			identityTypes[]=
			{
				"HeadHerd"
			};
			head="Head_Herd_head";
			texture="WS_A_FACTIONS\data\head\Herdessan_Tribal_Head.paa";
			disabled=0;
			material="\JMSLLTE_empire\head\mimb.rvmat";
			textureHL="\JMSLLTE_empire\data\hand\hl_black_bald_co.paa";
			materialHL="\JMSLLTE_empire\data\hand\Hand.rvmat";
			textureHL2="\JMSLLTE_empire\data\hand\hl_black_bald_co.paa";
			materialHL2="\JMSLLTE_empire\data\hand\Hand.rvmat";
		};
	};
};
class CfgHeads
{
	class Default_A3;
	class Head_Herd_head: Default_A3
	{
		model="\JMSLLTE_empire\head\mimbHead.p3d";
		class Wounds
		{
			tex[]={};
			mat[]={};
		};
	};
};
class CfgIdentities
{
	class HeadHerd
	{
		name="Herdessan";
	};
};

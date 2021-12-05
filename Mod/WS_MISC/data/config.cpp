class CfgPatches
{
	class 180th_misc
	{
		author="Raccoon";
		name="$-";
		requiredAddons[]=
		{
			"A3_data_F",
			"A3_characters_F",
			"A3_weapons_F",
			"A3_Dubbing_Radio_F",
			"A3_Dubbing_Radio_F_Data_ENG",
			"A3_Dubbing_Radio_F_Data_ENGB",
			"JLTS_functions"
		};
		weapons[]=
		{
			"-"
		};
		units[]=
		{
			"WS_Tribal_Horn_1", 
			"WS_Tribal_Horn_3",
			"WS_Tribal_Horn_4",
			"WS_Tribal_War_Drum_S",
			"WS_Sith_Hymn_S",
			"WS_74th_Chatter_S", 
			"WS_Outpost_Retaken", 
			"WS_Flag_Retaken", 
			"WS_TCW_Radio_Chatter_1_S", 
			"WS_TCW_Radio_Chatter_2_S", 
			"WS_TCW_Radio_Chatter_3_S", 
			"WS_TCW_Radio_Chatter_4_S", 
			"WS_TCW_Theme_S", 
			"WS_TCW_Battle_Ambience_S",
			"WS_EREN_S"
		};
		version=2.3;
		versionStr="2.3.0";
		versionAr[]={2,3,0};
		worlds[]={};
	};
};
class CfgFactionClasses
{
	class 180th_GAR
	{
		displayName="$STR_180th_names_FactionGAR";
	};
	class NO_CATEGORY;
	class WS_faction: NO_CATEGORY
	{
		displayName="Wyvern Studios";
		priority=0.1;
		side=7;
	};
};
class CfgMarkerClasses
{
	class 180th_GAR
	{
		displayName="180th Markers";
	};
	class 180th_locations
	{
		displayName="180th Markers";
	};
};
class CfgMusicClasses
{
	class Vangaurd
	{
		displayName="Operation Vanguard";
		author="Wyvern Studios";
	};
};
class CfgMusic
{
	class TribalHornDarkMS
	{
		name="[Wyvern Studios] Dark Horns";
		sound[]=
		{
			"\WS_MISC\data\Sounds\TribalHorn2Dark.ogg",
			1,
			1
		};
		musicClass="Vangaurd";
		duration=48;
	};
	class SithHymn
	{
		name="[Wyvern Studios] Sith Hymn";
		sound[]=
		{
			"\WS_MISC\data\Sounds\SithTheme.ogg",
			1,
			1
		};
		musicClass="Vangaurd";
		duration=48;
	};
};
class CfgSounds
{
	sounds[]=
	{
		"WS_Tribal_Horn1",
		"WS_Tribal_Horn2Dark",
		"WS_Tribal_Horn3",
		"WS_Tribal_Horn4",
		"WS_Tribal_War_Drum",
		"WS_Sith_Hymn",
		"WS_74th_Chatter",
		"WS_REP_OutpostRetaken",
		"WS_CIS_Flag_Taken",
		"WS_TCW_Radio_Chatter_1",
		"WS_TCW_Radio_Chatter_2",
		"WS_TCW_Radio_Chatter_3",
		"WS_TCW_Radio_Chatter_4",
		"WS_TCW_Theme",
		"WS_TCW_Battle_Ambience",
		"WS_EREN"
	};
	class WS_Tribal_Horn1
	{
		name="[Wyvern Studios] Tribal Horn 1";
		sound[]=
		{
			"\WS_MISC\data\Sounds\TribalHorn1.ogg",
			1,
			1
		};
		duration=33;
	};
	class WS_Tribal_Horn2Dark
	{
		name="[Wyvern Studios] Tribal Horn 2";
		sound[]=
		{
			"\WS_MISC\data\Sounds\TribalHorn2Dark.ogg",
			1,
			1
		};
		duration=33;
	};
	class WS_Tribal_Horn3
	{
		name="[Wyvern Studios] Tribal Horn 3";
		sound[]=
		{
			"\WS_MISC\data\Sounds\TribalHorn3.ogg",
			1,
			1
		};
		duration=33;
	};
	class WS_Tribal_Horn4
	{
		name="[Wyvern Studios] Tribal Horn 4";
		sound[]=
		{
			"\WS_MISC\data\Sounds\TribalHorn4.ogg",
			1,
			1
		};
		duration=33;
	};
	class WS_Tribal_War_Drum
	{
		name="[Wyvern Studios] Tribal War Drums";
		sound[]=
		{
			"\WS_MISC\data\Sounds\TribalWarDrum1.ogg",
			1,
			1
		};
		duration=33;
	};
	class WS_Sith_Hymn
	{
		name="[Wyvern Studios] Sith Hymn";
		sound[]=
		{
			"\WS_MISC\data\Sounds\SithTheme.ogg",
			1,
			1
		};
		duration=33;
	};
	class WS_74th_Chatter
	{
		name="[Wyvern Studios] CIS Radio Chatter (Human)";
		sound[]=
		{
			"\WS_MISC\data\Sounds\74thRadioChatter.ogg",
			1,
			1
		};
		duration=33;
	};
		class WS_REP_OutpostRetaken
	{
		name="[Wyvern Studios] Outpost Retaken (GAR)";
		sound[]=
		{
			"\WS_MISC\data\Sounds\AdmiralRetakenCommandPost.ogg",
			1,
			1
		};
		duration=33;
	};
	class WS_CIS_Flag_Taken
	{
		name="[Wyvern Studios] Flag Retaken (GAR)";
		sound[]=
		{
			"\WS_MISC\data\Sounds\CISFlagUnderControl.ogg",
			1,
			1
		};
		duration=33;
	};
	class WS_TCW_Radio_Chatter_1
	{
		name="[Wyvern Studios] Radio Chatter 1 (GAR)";
		sound[]=
		{
			"\WS_MISC\data\Sounds\TCWRadioChatter1.ogg",
			1,
			1
		};
		duration=33;
	};
	class WS_TCW_Radio_Chatter_2
	{
		name="[Wyvern Studios] Radio Chatter 2 (GAR)";
		sound[]=
		{
			"\WS_MISC\data\Sounds\TCWRadioChatter2.ogg",
			1,
			1
		};
		duration=33;
	};
	class WS_TCW_Radio_Chatter_3
	{
		name="[Wyvern Studios] Radio Chatter 3 (GAR)";
		sound[]=
		{
			"\WS_MISC\data\Sounds\TCWRadioChatter3.ogg",
			1,
			1
		};
		duration=33;
	};
	class WS_TCW_Radio_Chatter_4
	{
		name="[Wyvern Studios] Radio Chatter 4 (GAR)";
		sound[]=
		{
			"\WS_MISC\data\Sounds\TCWRadioChatter4.ogg",
			1,
			1
		};
		duration=33;
	};
	class WS_TCW_Theme
	{
		name="[Wyvern Studios] TCW Theme Song (GAR)";
		sound[]=
		{
			"\WS_MISC\data\Sounds\TCWTheme.ogg",
			1,
			1
		};
		duration=33;
	};
	class WS_TCW_Battle_Ambience
	{
		name="[Wyvern Studios] Battle Ambience (SW)";
		sound[]=
		{
			"\WS_MISC\data\Sounds\TCWBattleAmbience.ogg",
			1,
			1
		};
		duration=33;
	};
	class WS_EREN
	{
		name="[Wyvern Studios] EREN YEAGER";
		sound[]=
		{
			"\WS_MISC\data\Sounds\EREN.ogg",
			1,
			1
		};
		duration=1;
	};
};
class CfgSFX
{
	class WS_Tribal_Horn1_SFX
	{
		name="[Wyvern Studios] Tribal Horn 1";
		sounds[]=
		{
			"TribalHorn1SFX"
		};
		TribalHorn1SFX[]=
		{
			"\WS_MISC\data\Sounds\TribalHorn1.ogg",
			100,
			1,
			400,
			1,
			1,
			10,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
		class WS_Tribal_Horn2Dark_SFX
	{
		name="[Wyvern Studios] Tribal Horn 2";
		sounds[]=
		{
			"TribalHorn2DarkSFX"
		};
		TribalHorn2DarkSFX[]=
		{
			"\WS_MISC\data\Sounds\TribalHorn2Dark.ogg",
			100,
			1,
			400,
			1,
			1,
			10,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class WS_Tribal_Horn3_SFX
	{
		name="[Wyvern Studios] Tribal Horn 3";
		sounds[]=
		{
			"TribalHorn3SFX"
		};
		TribalHorn3kSFX[]=
		{
			"\WS_MISC\data\Sounds\TribalHorn3.ogg",
			100,
			1,
			400,
			1,
			1,
			10,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class WS_Tribal_Horn4_SFX
	{
		name="[Wyvern Studios] Tribal Horn 4";
		sounds[]=
		{
			"TribalHorn4SFX"
		};
		TribalHorn4DarkSFX[]=
		{
			"\WS_MISC\data\Sounds\TribalHorn4.ogg",
			100,
			1,
			400,
			1,
			1,
			10,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class WS_Tribal_War_Drum_SFX
	{
		name="[Wyvern Studios] Tribal War Drums";
		sounds[]=
		{
			"TribalWarDrumSFX"
		};
		TribalWarDrumSFX[]=
		{
			"\WS_MISC\data\Sounds\TribalWarDrum1.ogg",
			100,
			1,
			400,
			1,
			1,
			10,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class WS_Sith_Hymn_SFX
	{
		name="[Wyvern Studios] Sith Hymn";
		sounds[]=
		{
			"SithHymnSFX"
		};
		SithHymnSFX[]=
		{
			"\WS_MISC\data\Sounds\SithTheme.ogg",
			100,
			1,
			300,
			1,
			1,
			10,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class WS_74th_Chatter_SFX
	{
		name="[Wyvern Studios] CIS Radio Chatter (Human)";
		sounds[]=
		{
			"74thChatterSFX"
		};
		74thChatterSFX[]=
		{
			"\WS_MISC\data\Sounds\74thRadioChatter.ogg",
			100,
			1,
			50,
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class WS_REP_OutpostRetaken_SFX
	{
		name="[Wyvern Studios] Outpost Taken! (GAR)";
		sounds[]=
		{
			"OutpostRetakenSFX"
		};
		OutpostRetakenSFX[]=
		{
			"\WS_MISC\data\Sounds\AdmiralRetakenCommandPost.ogg",
			100,
			1,
			100,
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class WS_CIS_Flag_Taken_SFX
	{
		name="[Wyvern Studios] Flag Taken! (GAR)";
		sounds[]=
		{
			"FlagTakenSFX"
		};
		FlagTakenSFX[]=
		{
			"\WS_MISC\data\Sounds\CISFlagUnderControl.ogg",
			100,
			1,
			100,
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class WS_TCW_Radio_Chatter_1_SFX
	{
		name="[Wyvern Studios] Clone Radio Chatter 1 (GAR)";
		sounds[]=
		{
			"TCWRadioChatter1SFX"
		};
		TCWRadioChatter1SFX[]=
		{
			"\WS_MISC\data\Sounds\TCWRadioChatter1.ogg",
			100,
			1,
			50,
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class WS_TCW_Radio_Chatter_2_SFX
	{
		name="[Wyvern Studios] Clone Radio Chatter 2 (GAR)";
		sounds[]=
		{
			"TCWRadioChatter2SFX"
		};
		TCWRadioChatter2SFX[]=
		{
			"\WS_MISC\data\Sounds\TCWRadioChatter2.ogg",
			100,
			1,
			50,
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class WS_TCW_Radio_Chatter_3_SFX
	{
		name="[Wyvern Studios] Clone Radio Chatter 3 (GAR)";
		sounds[]=
		{
			"TCWRadioChatter3SFX"
		};
		TCWRadioChatter3SFX[]=
		{
			"\WS_MISC\data\Sounds\TCWRadioChatter3.ogg",
			100,
			1,
			50,
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class WS_TCW_Radio_Chatter_4_SFX
	{
		name="[Wyvern Studios] Clone Radio Chatter 4 (GAR)";
		sounds[]=
		{
			"TCWRadioChatter4SFX"
		};
		TCWRadioChatter4SFX[]=
		{
			"\WS_MISC\data\Sounds\TCWRadioChatter4.ogg",
			100,
			1,
			50,
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class WS_TCW_Theme_SFX
	{
		name="[Wyvern Studios] TCW Theme Song (GAR)";
		sounds[]=
		{
			"TCWThemeSFX"
		};
		TCWThemeSFX[]=
		{
			"\WS_MISC\data\Sounds\TCWTheme.ogg",
			100,
			1,
			225,
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class WS_TCW_Battle_Ambience_SFX
	{
		name="[Wyvern Studios] Battle Ambience (SW)";
		sounds[]=
		{
			"TCWBattleAmbienceSFX"
		};
		TCWBattleAmbienceSFX[]=
		{
			"\WS_MISC\data\Sounds\TCWBattleAmbience.ogg",
			100,
			1,
			75,
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
	class WS_EREN_SFX
	{
		name="[Wyvern Studios] EREN YEAGER!!!!";
		sounds[]=
		{
			"ERENSFX"
		};
		ERENSFX[]=
		{
			"\WS_MISC\data\Sounds\EREN.ogg",
			100,
			1,
			500,
			1,
			1,
			1,
			0
		};
		empty[]=
		{
			"",
			0,
			0,
			0,
			0,
			0,
			0,
			0
		};
	};
};
class cfgVehicles
{
	class Sound;
	class WS_Tribal_Horn_1: Sound
	{
		scope=2;
		sound="WS_Tribal_Horn1_SFX";
		displayName="[Wyvern Studios] Tribal Horn 1";
		vehicleClass="sounds";
	};
	class WS_Tribal_Horn_2_Dark: Sound
	{
		scope=2;
		sound="WS_Tribal_Horn2Dark_SFX";
		displayName="[Wyvern Studios] Tribal Horn 2";
		vehicleClass="sounds";
	};
	class WS_Tribal_Horn_3: Sound
	{
		scope=2;
		sound="WS_Tribal_Horn3_SFX";
		displayName="[Wyvern Studios] Tribal Horn 3";
		vehicleClass="sounds";
	};
	class WS_Tribal_Horn_4: Sound
	{
		scope=2;
		sound="WS_Tribal_Horn4_SFX";
		displayName="[Wyvern Studios] Tribal Horn 4";
		vehicleClass="sounds";
	};
	class WS_Tribal_War_Drum_S: Sound
	{
		scope=2;
		sound="WS_Tribal_War_Drum_SFX";
		displayName="[Wyvern Studios] Tribal War Drums";
		vehicleClass="sounds";
	};
	class WS_Sith_Hymn_S: Sound
	{
		scope=2;
		sound="WS_Tribal_Horn4_SFX";
		displayName="[Wyvern Studios] Sith Hymn";
		vehicleClass="sounds";
	};
	class WS_74th_Chatter_S: Sound
	{
		scope=2;
		sound="WS_74th_Chatter_SFX";
		displayName="[Wyvern Studios] CIS Radio Chatter (Human)";
		vehicleClass="sounds";
	};
	class WS_Outpost_Retaken: Sound
	{
		scope=2;
		sound="WS_REP_OutpostRetaken_SFX";
		displayName="[Wyvern Studios] Outpost Taken! (GAR)";
		vehicleClass="sounds";
	};
	class WS_Flag_Retaken: Sound
	{
		scope=2;
		sound="WS_CIS_Flag_Taken_SFX";
		displayName="[Wyvern Studios] Flag Taken! (GAR)";
		vehicleClass="sounds";
	};
	class WS_TCW_Radio_Chatter_1_S: Sound
	{
		scope=2;
		sound="WS_TCW_Radio_Chatter_1_SFX";
		displayName="[Wyvern Studios] Clone Radio Chatter 1 (GAR)";
		vehicleClass="sounds";
	};
	class WS_TCW_Radio_Chatter_2_S: Sound
	{
		scope=2;
		sound="WS_TCW_Radio_Chatter_2_SFX";
		displayName="[Wyvern Studios] Clone Radio Chatter 2 (GAR)";
		vehicleClass="sounds";
	};
	class WS_TCW_Radio_Chatter_3_S: Sound
	{
		scope=2;
		sound="WS_TCW_Radio_Chatter_3_SFX";
		displayName="[Wyvern Studios] Clone Radio Chatter 3 (GAR)";
		vehicleClass="sounds";
	};
	class WS_TCW_Radio_Chatter_4_S: Sound
	{
		scope=2;
		sound="WS_TCW_Radio_Chatter_4_SFX";
		displayName="[Wyvern Studios] Clone Radio Chatter 4 (GAR)";
		vehicleClass="sounds";
	};
	class WS_TCW_Theme_S: Sound
	{
		scope=2;
		sound="WS_TCW_Theme_SFX";
		displayName="[Wyvern Studios] TCW Theme Song (GAR)";
		vehicleClass="sounds";
	};
	class WS_TCW_Battle_Ambience_S: Sound
	{
		scope=2;
		sound="TCWBattleAmbienceSFX";
		displayName="[Wyvern Studios] Battle Ambience (SW)";
		vehicleClass="sounds";
	};
	class WS_EREN_S: Sound
	{
		scope=2;
		sound="ERENSFX";
		displayName="[Wyvern Studios] EREN YEAGER!!!!";
		vehicleClass="sounds";
	};
};
class CfgMarkers
{
	class b_air;
	class b_antiair;
	class b_armor;
	class b_art;
	class b_hq;
	class b_inf;
	class b_installation;
	class b_maint;
	class b_mech_inf;
	class b_med;
	class b_mortar;
	class b_motor_inf;
	class b_naval;
	class b_Ordnance;
	class b_plane;
	class b_recon;
	class b_service;
	class b_support;
	class b_uav;
	class b_unknown;
	class loc_BusStop;
	class 180th_loc_Camp: loc_BusStop
	{
		icon="\MRC\JLTS\Core_mod\data\markers\locations\spaceport.paa";
		markerClass="180th_locations";
		name="Camp";
	};
    class 180th_loc_rand: 180th_loc_Camp
	{
		icon="\MRC\JLTS\Core_mod\data\markers\locations\ship.paa";
		name="$STR_180th_names_MarkerLocationPenis";
	};
	class flag_NATO;
	class 180th_flag_WyvernCompany: flag_NATO
	{
		icon="WS_MISC\data\markers\flags\wyv_comp_ca.paa";
		texture="WS_MISC\data\markers\flags\wyv_comp_ca.paa";
		name="Wyvern Company Symbol";
	};
	class 180th_flag_Wyvern: flag_NATO
	{
		icon="WS_MISC\data\markers\flags\wyvern_w_ca.paa";
		texture="WS_MISC\data\markers\flags\wyvern_w_ca.paa";
		name="Wyvern Symbol";
	};
    class 180th_flag_RarefieldAirCalvalry: flag_NATO
	{
		icon="WS_MISC\data\markers\flags\rare_calv_ca.paa";
		texture="WS_MISC\data\markers\flags\rare_calv_ca.paa";
		name="Rarefield Air Cavalry";
	};
};

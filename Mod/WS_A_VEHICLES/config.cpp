class CfgPatches 
{ 
  class WS_VIC
	{
		author="Wyvern Studios";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"SWLW_main",
			"SWLW_clones",
			"SWLB_equipment",
			"SWLB_main",
			"SWLB_groundholders",
			"A3_Characters_F_Proxies"
		};
		requiredVersion=0.1;
		units[]= 
		{
			"180th_TX130",
			"180th_ATTE",
			"180th_arc_170",
			"180th_arc_170_racc",
			"180th_Y_Wing_Racc",
			"180th_Z95_Base",
			"180th_Z95_Pey",
			"180th_Z95_Racc",
            "180th_Racc_LAATle",
            "180th_Pey_LAATle",
			"180th_ground_barc",
			"180th_Spec_LAAT",
			"180th_Pegasus_LAAT",
			"180th_Pey_LAAT",
			"180th_Raccoon_LAAT",
			"180th_Huebert_LAAT",
			"180th_Melisande_LAAT", 
			"180th_laat_medevac",
			"180th_Hemtt_covered_Whl ",
			"180th_Hemtt_transport_Whl",
			"180th_Hemtt_fuel_Whl",
			"180th_Hemtt_ammo_Whl",
			"180th_Pandur_APC_Whl",
			"180th_Pandur_APC_Whl_Gun"


		};
		weapons[]=
		{
			"180th_Recruit_Uniform",
			"180th_Trooper_Uniform"
		};
	};
};
class CfgEditorSubcategories
{
	class WS_Categ_180thVC
	{
		displayName="Manticore Company (Assets)";
	};
	class WS_Categ_180thGTRS
	{
		displayName="Transport Vehicles (Assets)";
	};
	class Rarefied_Air_CavalryV
	{
		displayName="Rarefied Air Cavalry";
	};

};
class cfgFactionClasses 
{ 
    class GrapeL 
    { 
        displayName = "180th Vehicles"; 
        priority = 3; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon 
    };  
	 class RACV 
    { 
        displayName = "Rarefield Air Calvary"; 
        priority = 3; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = ""; //Custom Icon 
    };  
};

class CfgUnitInsignia
{
    class 180th_Unit_Insignia
    {
        displayName = "180th Wyvern Patch"; // Name displayed in Arsenal
        author = "Raccoon"; // Author displayed in Arsenal
        texture = "\180th_Base_2\data\wyvern_picture.paa"; // Image path
        textureVehicle = ""; // Does nothing currently, reserved for future use
    };
}; 

class UniformSlotInfo 
{ 
    slotType = 0; 
    linkProxy = "-"; 
}; 

class CfgWeapons
{
	class SWLG_TX130_cannon;
	
	class 180_TX130_Cannon: SWLG_TX130_cannon 
	{
		displayName = BARC Cannons Duel Shot;
	};
	class 180_Transport_TX_Cannon: SWLG_TX130_cannon
	{
		displayName = High Powered Energy Shot;
	};
};


class CfgVehicles 
{     
    class LandVehicle;
	class 3as_Z95_Republic;
	class 3as_arc_170_base;
	class 3AS_Jug_base_F;
	class 3as_saber_Base;
	class Car: LandVehicle
	{
		class NewTurret;
	};
    class 3AS_Patrol_LAAT_Base;
	class ls_laat_ab;
	class lsd_laat_base;
	class lsd_heli_laati_ab;
    class ls_laat;
	class ls_laat_medevac;
	class SWLG_tanks_tx130;
	class lsd_heli_laati;
	class 3as_ATTE_Base;
	class 3as_BTLB_Bomber;
	class B_Truck_01_ammo_F;
	class B_Truck_01_transport_F;
	class B_Truck_01_covered_F;
	class B_Truck_01_fuel_F;


	class Car_F: Car
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
		class EventHandlers;
		class AnimationSources;
	};

	
	class I_APC_Wheeled_03_cannon_F: Car_F 
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
	};
	//--------------------------------------------------------Land Vehicles--------------------------------------------------------//

	class 180th_TX130: SWLG_tanks_tx130
	{
		displayName="[180th Minotaur] TX-130 'Mozzie' Hover Tank";
		faction="b_wac";
		scope = 2;
        scopeCurator = 2;
		editorSubcategory="WS_Categ_180thVC";
		hiddenSelections[]=
		{
			"_hull",
			"_rockets",
			"_tracks",
			"_turrets"
		};
		hiddenSelectionsTextures[]=
		{
			"\WS_A_VEHICLES\Data\TX130\180th_TX_Hull.paa",
			"\WS_A_VEHICLES\Data\TX130\180th_TX_Rockets",
			"\WS_A_VEHICLES\Data\TX130\180th_TX_Tracks.paa",
			"\WS_A_VEHICLES\Data\TX130\180th_TX_Turrets.paa"
		};
		maxSpeed=350;
		enginePower=2000;
		redRpm=2865;
		idleRpm=750;
		maxOmega=300;
		peakTorque=5000;
		armor=950;
		armorStructural=20;
		damageResistance=0.04;
		crewCrashProtection=0.005;
		crew="180th_Engineer";
	};

	class 180th_ATTE: 3as_ATTE_Base {
		displayname="[180th Minotaur] AT-TE 'Stompy' Walker";
		faction="b_wac";
		scope = 2;
        scopeCurator = 2;
		editorSubcategory="WS_Categ_180thVC";
		author="Wyvern Studios";
		hiddenselections[] = 
		{
			"camo1", //Hull
			"camo2", //Chasis
			"camo3", //Cockpit
			"camo4", //Turret
			"camo5" //underpipe
		};
		hiddenselectionstextures[] = 
		{
			"WS_A_VEHICLES\Data\ATTE\180th_ATTE_Hull.paa", //Hull
			"3as\3as_atte\data\atte_chasis_co.paa", //Chasis
			"WS_A_VEHICLES\Data\ATTE\180th_ATTE_Cockpit.paa", //Cockpit
			"WS_A_VEHICLES\Data\ATTE\180th_ATTE_Turrets.paa", //Turret
			"3as\3as_atte\data\atte_underpiping_co.paa" //underpipe
		};

		armor = 3300;
		crew = "180th_Engineer";
	};

	class 180th_Pandur_APC_Whl_Gun: I_APC_Wheeled_03_cannon_F
    {
        side = 1;
        scope=2;
		scopeCurator = 2;
		editorSubcategory="WS_Categ_180thGTRS";
        vehicleClass = "Armoured";
        crew = "180th_Engineer";
        faction = "b_wac";
        displayName = "[180th] Nekpup APC (Gun)";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
        hiddenSelectionsTextures[] = {"WS_A_VEHICLES\Data\AV4\180th_APC_1.paa", "WS_A_VEHICLES\Data\AV4\180th_APC_2.paa", "WS_A_VEHICLES\Data\AV4\180th_APC_4.paa", "WS_A_VEHICLES\Data\AV4\180th_APC_3.paa"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"SWLW_Z6",
					"180_Transport_TX_Cannon",
					"missiles_titan"
				};
				magazines[]=
				{
					"SWLW_Z6_mag",
					"SWLW_Z6_mag",
					"SWLG_TX130_cannon_mag",
					"2Rnd_GAT_missiles"
				};
			};
		};
    };

	class 180th_Pandur_APC_Whl: I_APC_Wheeled_03_cannon_F 
    {
        side = 1;
        scope=2;
		scopeCurator = 2;
		editorSubcategory="WS_Categ_180thGTRS";
        vehicleClass = "Armoured";
        crew = "180th_Engineer";
        faction = "b_wac";
        displayName = "[180th] Nekpup APC";
        hiddenSelections[] = {"camo1", "camo2", "camo3", "camo4"};
        hiddenSelectionsTextures[] = {"WS_A_VEHICLES\Data\AV4\180th_APC_1.paa", "WS_A_VEHICLES\Data\AV4\180th_APC_2.paa", "", "WS_A_VEHICLES\Data\AV4\180th_APC_3.paa"};

		class Turrets {
		};

		class AnimationSources: AnimationSources {

			class HideTurret {
				animPeriod = 0.001000;
				initPhase = "true";
				source = "user";
			};
		};
    };

	class 180th_Hemtt_ammo_Whl: B_Truck_01_ammo_F
    {
        side = 1;
        scope=2;
		scopeCurator = 2;
		editorSubcategory="WS_Categ_180thGTRS";
        crew = "180th_Engineer";
        faction = "b_wac";
        displayName = "[180th] HEMTT (Ammo)";
        hiddenSelectionsTextures[] = 
		{
			"WS_A_VEHICLES\Data\HEMTT\180th_HMT_ex_01.paa", 
			"WS_A_VEHICLES\Data\HEMTT\180th_HMT_ex_02.paa",
			"\A3\Soft_F_Gamma\Truck_01\Data\truck_01_ammo_CO.paa"
		};
    };

	class 180th_Hemtt_fuel_Whl: B_Truck_01_fuel_F
    {
        side = 1;
        scope=2;
		scopeCurator = 2;
		editorSubcategory="WS_Categ_180thGTRS";
        crew = "180th_Engineer";
        faction = "b_wac";
        displayName = "[180th] HEMTT (Fuel)";
        hiddenSelectionsTextures[] = 
		{
			"WS_A_VEHICLES\Data\HEMTT\180th_HMT_ex_01.paa", 
			"WS_A_VEHICLES\Data\HEMTT\180th_HMT_ex_02.paa",
			"\A3\Soft_F_Gamma\Truck_01\Data\truck_01_Fuel_CO.paa"
		};
    };

	class 180th_Hemtt_transport_Whl: B_Truck_01_transport_F 
    {
        side = 1;
        scope=2;
		scopeCurator = 2;
		editorSubcategory="WS_Categ_180thGTRS";
        crew = "180th_Engineer";
        faction = "b_wac";
        displayName = "[180th] HEMTT (Transport)";
        hiddenSelectionsTextures[] = 
		{
			"WS_A_VEHICLES\Data\HEMTT\180th_HMT_ex_01.paa", 
			"WS_A_VEHICLES\Data\HEMTT\180th_HMT_ex_02.paa", 
			"WS_A_VEHICLES\Data\HEMTT\180th_HMT_Cargo_01.paa"
		};
    };

	class 180th_Hemtt_covered_Whl: B_Truck_01_covered_F
    {
        side = 1;
        scope=2;
		scopeCurator = 2;
		editorSubcategory="WS_Categ_180thGTRS";
        crew = "180th_Engineer";
        faction = "b_wac";
        displayName = "[180th] HEMTT (Covered)";
        hiddenSelectionsTextures[] = 
		{
			"WS_A_VEHICLES\Data\HEMTT\180th_HMT_ex_01.paa", 
			"WS_A_VEHICLES\Data\HEMTT\180th_HMT_ex_02.paa", 
			"WS_A_VEHICLES\Data\HEMTT\180th_HMT_Cargo_01.paa",
			"\a3\soft_f_beta\truck_01\data\truck_01_cover_co.paa"
		};
    };

	//--------------------------------------------------------Starfighters--------------------------------------------------------//
	class 180th_Z95_Racc: 3as_Z95_Republic
	{
		displayName="Z-95 Headhunter 'Reaver'";
		faction="b_wac";
		editorSubcategory="WS_Categ_180thVC";
		editorPreview="";
		
		hiddenselections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"WS_A_VEHICLES\Data\Starfighters\180th_Z95_Hull_RACC.paa",
			"3AS\3as_Z95\Data\cockpit_co.paa",
			"3AS\3as_saber\data\glass\glass_ca"
		};
		crew = "180th_Pilot";
	};
	class 180th_Z95_Base: 3as_Z95_Republic
	{
		displayName="[180th Chimera] Z-95 Headhunter";
		faction="b_wac";
		editorSubcategory="WS_Categ_180thVC";
		editorPreview="";
		
		hiddenselections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"WS_A_VEHICLES\Data\Starfighters\180th_Z95_HULL.paa",
			"3AS\3as_Z95\Data\cockpit_co.paa",
			"3AS\3as_saber\data\glass\glass_ca"
		};
		crew = "180th_Pilot";
	};
	class RAC_Z95: 3as_Z95_Republic
	{
		displayName="Z-95 Headhunter (Rarefied Air Cavalry)";
		faction = "RACV";
		editorSubcategory="Rarefied_Air_CavalryV";
		editorPreview="";
		
		hiddenselections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"WS_A_VEHICLES\Data\Starfighters\Rarefied_Air_Cavalry_Z95_Headhunter.paa",
			"3AS\3as_Z95\Data\cockpit_co.paa",
			"3AS\3as_saber\data\glass\glass_ca"
		};
	};
	class 180th_arc_170: 3as_arc_170_base
	{
		displayName="ARC-170 'Chimera'";
		scope=2;
		crew = "180th_Pilot";
		side=1;
		faction="b_wac";
		editorSubcategory="WS_Categ_180thVC";
		editorPreview="\3as\3as_arc170\images\3as_arc_170_blue.jpg";
		hiddenselectionstextures[]=
		{
			"WS_A_VEHICLES\Data\Starfighters\180th_ARC170_Frame.paa",
			"WS_A_VEHICLES\Data\Starfighters\180th_ARC170_Wings.paa",
			"WS_A_VEHICLES\Data\Starfighters\180th_ARC170_Guns.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
		};
	};
	class 180th_arc_170_racc: 3as_arc_170_base
	{
		displayName="ARC-170 'Big Daddy'";
		scope=2;
		crew="180th_Pilot";
		side=1;
		faction="b_wac";
		editorSubcategory="WS_Categ_180thVC";
		editorPreview="\3as\3as_arc170\images\3as_arc_170_blue.jpg";
		hiddenselectionstextures[]=
		{
			"WS_A_VEHICLES\Data\Starfighters\180th_ARC170_Frame_RACC.paa",
			"WS_A_VEHICLES\Data\Starfighters\180th_ARC170_Wings_RACC.paa",
			"WS_A_VEHICLES\Data\Starfighters\180th_ARC170_Guns.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
		};
	};

	//--------------------------------------------------------Laat/i (the standard LAAT's)--------------------------------------------------------//

	class 180th_Pegasus_LAAT: lsd_heli_laati
	{
		displayname="[180th Pegasus] LAAT/I Gunship";
		faction="b_wac";
		author="Wyvern Studios";
		editorSubcategory="WS_Categ_180thVC";
		crew = "180th_Pilot";
		hiddenselections[]=
		{
			"body",
			"body_2",
			"door_1",
			"door_2",
			"door_3",
			"wings",
			"missiles",
			"cockpits",
			"glass",
			"clan",
			"zasleh_l",
			"zasleh_r",
			"zasleh_b"
		};
		hiddenselectionstextures[]=
		{
				"WS_A_VEHICLES\Data\LAAT\180th_Pegasus_body1.paa", 
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"lsd_vehicles_heli\laati\data\door1_co.paa",
				"lsd_vehicles_heli\laati\data\door2_co.paa",
				"lsd_vehicles_heli\laati\data\door3_co.paa",
				"WS_A_VEHICLES\Data\LAAT\180_WyvernL_wings_co.paa", 
				"lsd_vehicles_heli\laati\data\missiles_co.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"WS_A_VEHICLES\Data\glass_ca.paa"
				
		};

		class TextureSources
        {
            class base
            {
                displayname="Pegasussy_Baka";
                author="Wyvern Studios";
                textures[]=
                {
				"WS_A_VEHICLES\Data\LAAT\180th_Pegasus_body1.paa", //0
				"lsd_vehicles_heli\laati\data\body2_co.paa", //1
				"lsd_vehicles_heli\laati\data\door1_co.paa", //2
				"lsd_vehicles_heli\laati\data\door2_co.paa", //3
				"lsd_vehicles_heli\laati\data\door3_co.paa", //4
				"WS_A_VEHICLES\Data\LAAT\180_WyvernL_wings_co.paa", //5
				"lsd_vehicles_heli\laati\data\missiles_co.paa", //6
				"lsd_vehicles_heli\laati\data\cockpits_co.paa", //7
				"WS_A_VEHICLES\Data\glass_ca.paa" //8
                };
                factions[]=
                {
                    "MA_Categ_Vic"
                };
            };

        };
        textureList[]=
        {
            "base",
        };
    };

	class 180th_Huebert_LAAT: lsd_heli_laati			
	{
		displayname="LAAT/I Gunship (Huebert)";
		faction="b_wac";
		author="Wyvern Studios";
		editorSubcategory="WS_Categ_180thVC";
		crew = "180th_Pilot";
		hiddenselections[]=
		{
			"body",
			"body_2",
			"door_1",
			"door_2",
			"door_3",
			"wings",
			"missiles",
			"cockpits",
			"glass",
			"clan",
			"zasleh_l",
			"zasleh_r",
			"zasleh_b"
		};
		hiddenselectionstextures[]=
		{
				"WS_A_VEHICLES\Data\LAAT\180_HubL_body1.paa", 
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"lsd_vehicles_heli\laati\data\door1_co.paa",
				"lsd_vehicles_heli\laati\data\door2_co.paa",
				"lsd_vehicles_heli\laati\data\door3_co.paa",
				"WS_A_VEHICLES\Data\LAAT\180_WyvernL_wings_co.paa", 
				"lsd_vehicles_heli\laati\data\missiles_co.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"lsd_vehicles_heli\laati\data\glass_ca.paa"
				
		};

		class TextureSources
        {
            class base
            {
                displayname="HueChingMing";
                author="Roach";
                textures[]=
                {
				"WS_A_VEHICLES\Data\LAAT\180_HubL_body1.paa", 
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"lsd_vehicles_heli\laati\data\door1_co.paa",
				"lsd_vehicles_heli\laati\data\door2_co.paa",
				"lsd_vehicles_heli\laati\data\door3_co.paa",
				"WS_A_VEHICLES\Data\LAAT\180_WyvernL_wings_co.paa", 
				"lsd_vehicles_heli\laati\data\missiles_co.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"lsd_vehicles_heli\laati\data\glass_ca.paa"
                };
                factions[]=
                {
                    "MA_Categ_Vic"
                };
            };

        };
        textureList[]=
        {
            "base",
        };
	};

	class 180th_Melisande_LAAT: lsd_heli_laati
	{
		displayname="LAAT/I Gunship (Melisande)";
		faction="b_wac";
		author="Wyvern Studios";
		editorSubcategory="WS_Categ_180thVC";
		crew = "180th_Pilot";
		hiddenselections[]=
		{
			"body",
			"body_2",
			"door_1",
			"door_2",
			"door_3",
			"wings",
			"missiles",
			"cockpits",
			"glass",
			"clan",
			"zasleh_l",
			"zasleh_r",
			"zasleh_b"
		};
		hiddenselectionstextures[]=
		{
				"WS_A_VEHICLES\Data\LAAT\180_MelL_body1.paa", 
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"lsd_vehicles_heli\laati\data\door1_co.paa",
				"lsd_vehicles_heli\laati\data\door2_co.paa",
				"lsd_vehicles_heli\laati\data\door3_co.paa",
				"WS_A_VEHICLES\Data\LAAT\180_WyvernL_wings_co.paa", 
				"lsd_vehicles_heli\laati\data\missiles_co.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"lsd_vehicles_heli\laati\data\glass_ca.paa"
				
		};

		class TextureSources
        {
            class base
            {
                displayname="MelChiTing";
                author="Wyvern Studios";
                textures[]=
                {
                "WS_A_VEHICLES\Data\LAAT\180_MelL_body1.paa", 
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"lsd_vehicles_heli\laati\data\door1_co.paa",
				"lsd_vehicles_heli\laati\data\door2_co.paa",
				"lsd_vehicles_heli\laati\data\door3_co.paa",
				"WS_A_VEHICLES\Data\LAAT\180_WyvernL_wings_co.paa", 
				"lsd_vehicles_heli\laati\data\missiles_co.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"lsd_vehicles_heli\laati\data\glass_ca.paa"
                };
                factions[]=
                {
                    "MA_Categ_Vic"
                };
            };

        };
        textureList[]=
        {
            "base",
        };
	};

	class 180th_laat_medevac: lsd_heli_laati
	{
		displayName="LAAT/i Gunship (MedEvac)";
		ls_hasTraumaCenter=1;
		attendant=1;
		hiddenSelectionsTextures[]=
		{
			"WS_A_VEHICLES\Data\LAAT\180th_PegasusM_body1.paa", 
			"lsd_vehicles_heli\laati\data\body2_co.paa",
			"lsd_vehicles_heli\laati\data\door1_co.paa",
			"lsd_vehicles_heli\laati\data\door2_co.paa",
			"lsd_vehicles_heli\laati\data\door3_co.paa",
			"WS_A_VEHICLES\Data\LAAT\180_WyvernL_wings_co.paa", 
			"lsd_vehicles_heli\laati\data\missiles_co.paa",
			"lsd_vehicles_heli\laati\data\cockpits_co.paa",
			"lsd_vehicles_heli\laati\data\glass_ca.paa"
		};

		class TextureSources
        {
            class base
            {
                displayname="I_NEED_A_MEDIC_BAG";
                author="Wyvern Studios";
                textures[]=
                {
				"WS_A_VEHICLES\Data\LAAT\180th_PegasusM_body1.paa", 
				"lsd_vehicles_heli\laati\data\body2_co.paa",
				"lsd_vehicles_heli\laati\data\door1_co.paa",
				"lsd_vehicles_heli\laati\data\door2_co.paa",
				"lsd_vehicles_heli\laati\data\door3_co.paa",
				"WS_A_VEHICLES\Data\LAAT\180_WyvernL_wings_co.paa", 
				"lsd_vehicles_heli\laati\data\missiles_co.paa",
				"lsd_vehicles_heli\laati\data\cockpits_co.paa",
				"lsd_vehicles_heli\laati\data\glass_ca.paa"
                };
                factions[]=
                {
                    "MA_Categ_Vic"
                };
            };

        };
        textureList[]=
        {
            "base",
        };
    };

	//--------------------------------------------------------Laat/le--------------------------------------------------------//
	class 180th_Spec_LAAT: 3AS_Patrol_LAAT_Base
	{
		_generalmacro="TCW_LAAT_i";
		accuracy=5;
		author="Wyvern Studios";
		editorSubcategory="WS_Categ_180thVC";
		availableforsupporttypes[]=
		{
			"CAS_Heli"
		};
		cost="3e+006";
		crew="180th_Pilot";
		displayname="[180th] LAAT/LE (Lightning-Bird)";
		faction="b_wac";
		vehicleclass="Helicopter";
		scope=2;
		side=1;
		typicalcargo[]=
		{
			"3AS_Clone_P2_Pilot"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_VEHICLES\Data\LAAT_LE\180th_LAAT_LE.paa"
		};
		class Library
		{
			libtextdesc="";
		};
	};
    class 180th_Racc_LAATle: 3AS_Patrol_LAAT_Base
	{
		_generalmacro="TCW_LAAT_i";
		accuracy=5;
		author="Wyvern Studios";
		editorSubcategory="WS_Categ_180thVC";
		availableforsupporttypes[]=
		{
			"CAS_Heli"
		};
		cost="3e+006";
		crew="180th_Pilot";
		displayname="[180th] LAAT/LE (Reaper)";
		faction="b_wac";
		vehicleclass="Helicopter";
		scope=2;
		side=1;
		typicalcargo[]=
		{
			"3AS_Clone_P2_Pilot"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_VEHICLES\Data\LAAT_LE\180th_RACC_LAAT_LE.paa"
		};
		class Library
		{
			libtextdesc="";
		};
	};


	//--------------------------------------------------------BARC Speeders--------------------------------------------------------//

	class 180th_barc_base: Car_F
	{
		model="\ls_vehicles_ground\barc\ls_ground_barc";
		editorpreview="\ls_vehicles_ground\_ui\editorPreviews\image_barc.jpg";
		Icon="\ls_vehicles_ground\_ui\icons\barc_icon.paa";
		editorSubcategory="WS_Categ_180thVC";
		selectionBrakeLights="brzdove svetlo";
		selectionBrackLights="zadni svetlo";
		displayName="180thBARCSpeeder_base";
		weapons[]=
		{
			"ls_speeder_AP",
			"180_TX130_cannon"
		};
		magazines[]=
		{
			"ls_50Rnd_speederHE_belt",
			"ls_50Rnd_speederHE_belt",
			"ls_50Rnd_speederHE_belt",
			"ls_50Rnd_speederHE_belt",
			"ls_50Rnd_speederHE_belt",
			"ls_50Rnd_speederHE_belt",
			"SWLG_TX130_cannon_mag",
			"SWLG_TX130_cannon_mag",
			"SWLG_TX130_cannon_mag"
		};
		memoryPointGun[]=
		{
			"gun_driver_l",
			"gun_driver_r"
		};
		hiddenSelections[]=
		{
			"body",
			"weapons",
			"dashboard"
		};
		hiddenSelectionsTextures[]=
		{
			"WS_A_VEHICLES\Data\BARC\180th_barc_speeder.paa",
			"WS_A_VEHICLES\Data\BARC\180th_barc_weapons.paa",
			"ls_vehicles_ground\barc\data\dashboard_co.paa"
		};
		canFloat=1;
		waterLeakiness=2.5;
		waterPPInVehicle=0;
		waterAngularDampingCoef=0.5;
		waterResistanceCoef=0.0049999999;
		waterSpeedFactor=1;
		waterSpeedCoef=3;
		accelAidForceCoef=30;
		accelAidForceSpd=20;
		waterLinearDampingCoefY=10;
		terrainCoef=2;
		turnCoef=2.5;
		precision=10;
		brakeDistance=3;
		acceleration=35;
		fireResistance=5;
		armor=420;
		cost=50000;
		transportMaxBackpacks=3;
		transportSoldier=0;
		wheelDamageRadiusCoef=0.89999998;
		wheelDestroyRadiusCoef=0.40000001;
		maxFordingDepth=0.5;
		waterResistance=1;
		crewCrashProtection=0.9;
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="drivewheel";
		class AnimationSources: AnimationSources
		{
			class Doors
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class Door_1
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Door_2
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Door_3
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Door_4
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class Door_5
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
		class Turrets
		{
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=1;
				passThrough=0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=1;
				passThrough=0;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=1;
				passThrough=0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=1;
				passThrough=0;
			};
			class HitFuel
			{
				armor=0.5;
				material=-1;
				name="fueltank";
				visual="";
				passThrough=0.2;
			};
			class HitEngine
			{
				armor=0.5;
				material=-1;
				name="engine";
				visual="";
				passThrough=0.2;
			};
			class HitBody: HitBody
			{
				name="body";
				visual="camo1";
				passThrough=1;
			};
			class HitGlass1: HitGlass1
			{
				armor=0.25;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.25;
			};
			class HitGlass3: HitGlass3
			{
				armor=0.25;
			};
			class HitGlass4: HitGlass4
			{
				armor=0.25;
			};
		};
		driverAction="ls_driver_barc";
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		attenuationEffectType="CarAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",
			0.56234133,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"swlb_core\data\sounds\vehicles\speeder\misc\BARC_start.wss",
			0.39810717,
			1
		};
		soundEngineOnExt[]=
		{
			"swlb_core\data\sounds\vehicles\speeder\misc\BARC_start.wss",
			0.44668359,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"swlb_core\data\sounds\vehicles\speeder\misc\speeder_end.wss",
			0.39810717,
			1
		};
		soundEngineOffExt[]=
		{
			"swlb_core\data\sounds\vehicles\speeder\misc\speeder_end.wss",
			0.44668359,
			1,
			200
		};
		soundGear[]=
		{
			"swlb_core\data\sounds\vehicles\speeder\barc_gear.wss",
			0.39810717,
			1
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.25,
			"woodCrash1",
			0.25,
			"woodCrash2",
			0.25,
			"woodCrash3",
			0.25
		};
		armorCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			200
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			200
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			200
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\Speeder_idle.wss",
					0.22387211,
					1,
					150
				};
				frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			class Engine
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_engine_1.wss",
					0.2818383,
					1,
					200
				};
				frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_engine_2.wss",
					0.3548134,
					1,
					240
				};
				frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_engine_3.wss",
					0.39810717,
					1,
					280
				};
				frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_engine_4.wss",
					0.44668359,
					1,
					320
				};
				frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_engine_5.wss",
					0.50118721,
					1,
					360
				};
				frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_engine_5.wss",
					0.56234133,
					1,
					420
				};
				frequency="0.95	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.15";
				volume="engineOn*camPos*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\Speeder_idle.wss",
					0.50118721,
					1,
					200
				};
				frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_exhaust_1.wss",
					0.56234133,
					1,
					250
				};
				frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_exhaust_2.wss",
					0.63095737,
					1,
					280
				};
				frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_exhaust_3.wss",
					0.70794576,
					1,
					320
				};
				frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_exhaust_4.wss",
					0.79432821,
					1,
					360
				};
				frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_exhaust_5.wss",
					1,
					1,
					400
				};
				frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.3";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_exhaust_5.wss",
					1.2589254,
					1,
					450
				};
				frequency="0.9	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\Speeder_idle.wss",
					0.17782794,
					1
				};
				frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_engine_1.wss",
					0.19952622,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_engine_2.wss",
					0.25118864,
					1
				};
				frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_engine_3.wss",
					0.2818383,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_engine_4.wss",
					0.31622776,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_engine_5.wss",
					0.3548134,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_engine_5.wss",
					0.50118721,
					1
				};
				frequency="0.95	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.15";
				volume="engineOn*(1-camPos)*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\Speeder_idle.wss",
					0.31622776,
					1
				};
				frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_exhaust_1.wss",
					0.3548134,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_exhaust_2.wss",
					0.39810717,
					1
				};
				frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_exhaust_3.wss",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_exhaust_4.wss",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_exhaust_5.wss",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.3";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"swlb_core\data\sounds\vehicles\speeder\engine\speeder_exhaust_5.wss",
					0.63095737,
					1
				};
				frequency="0.9	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			class Movement
			{
				sound="soundEnviron";
				frequency="1";
				volume="0";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					0.39810717,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.25118864,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		thrustDelay=0;
		engineStartSpeed=1.8;
		brakeIdleSpeed=2.5;
		maxSpeed=420;
		fuelCapacity=40;
		wheelCircumference=2.277;
		antiRollbarForceCoef=0;
		antiRollbarForceLimit=0;
		antiRollbarSpeedMin=0;
		antiRollbarSpeedMax=0;
		idleRpm=800;
		redRpm=8000;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.8,
				"N",
				0,
				"D1",
				3.8,
				"D2",
				2.1500001,
				"D3",
				1.55,
				"D4",
				1.15,
				"D5",
				0.89999998,
				"D6",
				0.67400002
			};
			AmphibiousRatios[]=
			{
				"R1",
				-3.8,
				"N",
				0,
				"D1",
				3.8,
				"D2",
				2.1500001,
				"D3",
				1.55,
				"D4",
				1.15,
				"D5",
				0.89999998,
				"D6",
				0.67400002
			};
			TransmissionRatios[]=
			{
				"High",
				4.6999998
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.0099999998;
		};
		simulation="carx";
		dampersBumpCoef=0.025;
		differentialType="all_limited";
		frontRearSplit=0.44999999;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=2.5;
		clutchStrength=5;
		minOmega=83.775;
		maxOmega=837.758;
		enginePower=600;
		peakTorque=480;
		dampingRateFullThrottle=0.15000001;
		dampingRateZeroThrottleClutchDisengaged=0.1;
		dampingRateZeroThrottleClutchEngaged=0.2;
		slowSpeedForwardCoef=0.5;
		normalSpeedForwardCoef=1;
		torqueCurve[]=
		{
			{0.14,0.633333},
			{0.182857,0.70999998},
			{0.28999999,0.89000002},
			{0.43000001,0.92999998},
			{0.56999999,0.95999998},
			{0.70999998,0.95999998},
			{0.86000001,0.91999999},
			{1,0.83333299}
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.89999998,0.89999998,0.89999998,0.89999998,0.89999998,0.80000001};
		switchTime=0.31;
		latency=1;
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width=0.2;
				mass=20;
				MOI=5.3000002;
				dampingRate=0.5;
				maxBrakeTorque=3000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.1;
				mMaxDroop=0.050000001;
				sprungMass=272.5;
				springStrength=27250;
				springDamperRate=6725;
				longitudinalStiffnessPerUnitGravity=100000;
				latStiffX=25;
				latStiffY=18000;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=3000;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=3000;
			};
		};
		class PlayerSteeringCoefficients
		{
			turnIncreaseConst=2;
			turnIncreaseLinear=3;
			turnIncreaseTime=0;
			turnDecreaseConst=2;
			turnDecreaseLinear=8;
			turnDecreaseTime=0;
			maxTurnHundred=1;
		};
		memoryPointTrackFLL="TrackFLL";
		memoryPointTrackFLR="TrackFLR";
		memoryPointTrackBLL="TrackBLL";
		memoryPointTrackBLR="TrackBLR";
		memoryPointTrackFRL="TrackFRL";
		memoryPointTrackFRR="TrackFRR";
		memoryPointTrackBRL="TrackBRL";
		memoryPointTrackBRR="TrackBRR";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\data_f\glass_veh_int.rvmat",
				"A3\data_f\Glass_veh_damage.rvmat",
				"A3\data_f\Glass_veh_damage.rvmat",
				"A3\data_f\glass_veh.rvmat",
				"A3\data_f\Glass_veh_damage.rvmat",
				"A3\data_f\Glass_veh_damage.rvmat"
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffect";
			};
		};
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[]={1000,1200,1700};
				ambient[]={5,5,5};
				position="headlight1_r";
				direction="headlight1_r_dir";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class LightCarHeadL02: LightCarHeadL01
			{
				position="headlight2_r";
				direction="headlight2_r_dir";
				FlareSize=0.5;
			};
			class LightCarHeadR01: LightCarHeadL01
			{
				position="headlight1_l";
				direction="headlight1_l_dir";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class LightCarHeadR02: LightCarHeadR01
			{
				position="headlight2_l";
				direction="headlight2_l_dir";
				FlareSize=0.5;
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"LightCarHeadL01",
				"LightCarHeadL02"
			},
			
			{
				"LightCarHeadR01",
				"LightCarHeadR02"
			}
		};
		class UserActions
		{
		};
	};

	
	class 180th_ground_barc: 180th_barc_base
	{
		scope=2;
		crew="180th_BARC";
		side=1;
		faction="b_wac";
		displayName="[180th Basilisk] BARC Speeder";
		author="Wyvern Studios";
	};
};
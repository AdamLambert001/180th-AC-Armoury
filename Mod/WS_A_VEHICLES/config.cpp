class CfgPatches 
{ 
  class WS_VIC
	{
		author="Wyvern Studios";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Soft_F";
			"A3_Characters_F",
			"SWLW_main",
			"SWLW_clones",
			"SWLB_equipment",
			"SWLB_main",
			"SWLB_groundholders",
			"A3_Characters_F_Proxies",
			"3AS_LightVics",
			"3AS_LAAT"
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
			"180th_ls_barc",
			"180th_3as_barc",
			"180th_3as_barc_side",
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
class CfgEditorSubcategories {
	class WS_Categ_180thVC
	{
		displayName="Manticore Company (Air)";
	};
	class WS_Categ_180thGTRS
	{
		displayName="Manticore Company (Ground)";
	};
	class Rarefied_Air_CavalryV
	{
		displayName="Rarefied Air Cavalry";
	};

};

class cfgFactionClasses { 
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

class CfgUnitInsignia {
    class 180th_Unit_Insignia
    {
        displayName = "180th Wyvern Patch"; // Name displayed in Arsenal
        author = "Wyvern Studios"; // Author displayed in Arsenal
        texture = "\180th_Base_2\data\wyvern_picture.paa"; // Image path
        textureVehicle = ""; // Does nothing currently, reserved for future use
    };
}; 

class UniformSlotInfo { 
    slotType = 0; 
    linkProxy = "-"; 
}; 

class CfgMagazines {
	/*extern*/ class PylonRack_1Rnd_Missile_AA_04_F;
	/*extern*/ class PylonRack_3Rnd_Missile_AGM_02_F;
	/*extern*/ class PylonRack_1Rnd_AAA_missiles;
	/*extern*/ class PylonMissile_1Rnd_GAA_missiles;
	/*extern*/ class 4rnd_GAA_missiles;

	class Pylon_WS_8rnd_Missile_AGM: PylonRack_3Rnd_Missile_AGM_02_F { //AGMs [Hardpoint B_Pylon]
		displayName = "Carbonite Air-to-Ground Missiles";
		count = 8; 
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_AGM_02_F.p3d";
		ammo = "3as_LAAT_AGM_Missile";
	};
	class Pylon_WS_12rnd_Missile_A9X: PylonRack_1Rnd_Missile_AA_04_F { //A-9X [Hardpoint B_AIM9]
		displayName = "Python Air-to-Air Missiles (SR)";
		count = 12;
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_DAGR_F.p3d";
	};
	class Pylon_WS_6rnd_Missile_AMR: PylonMissile_1Rnd_GAA_missiles { //AMRAMS [hardpoint B_AMRAAM]
		displayName = "Boa Air-to-Air Missiles (MR)";
		count = 6;
		model = "\A3\Weapons_F\DynamicLoadout\PylonMissile_1x_Bomb_04_F.p3d";
	};
	class Pylon_WS_8rnd_Missile_AAZ: 4rnd_GAA_missiles { //Zephyr? [hardpoint B_Zephyr]
		displayName = "Cobra Air-to-Air Missiles (SR)";
		count = 8;
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_4x_Missile_LG_scalpel_F.p3d";
	};
	class Pylon_WS_6rnd_Missile_ASR: PylonRack_1Rnd_AAA_missiles { //ASRAM [hardpoint B_pylon, B_ASRAM]
		displayName = "Mamba Air-to-Air Missiles (SR)";
		count = 6;
		model = "\A3\Weapons_F\DynamicLoadout\PylonPod_1x_Missile_AA_04_F.p3d";
	};

};

class CfgWeapons {
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

/*extern*/ class WeaponFireGun;
/*extern*/ class WeaponCloudsGun;
/*extern*/ class WeaponFireMGun;
/*extern*/ class WeaponCloudsMGun;

class CfgVehicles {     
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


	class Car_F: Car {


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
			/*extern*/ class HitGlass5;
			/*extern*/ class HitGlass6;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
		class EventHandlers;
		class AnimationSources;
		class UserActions;
		class Damage;
		/*extern*/ class ViewPilot;
	};
	/*extern*/ class MainTurret;
	/*extern*/ class ViewOptics;
	/*extern*/ class RCWSOptics;
	/*extern*/ class Wreck_base_F;
	
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
		editorSubcategory="WS_Categ_180thGTRS";
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

		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};
		
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
		};		
	};

	class 180th_ATTE: 3as_ATTE_Base {
		displayname="[180th Minotaur] AT-TE 'Stompy' Walker";
		faction="b_wac";
		scope = 2;
        scopeCurator = 2;
		editorSubcategory="WS_Categ_180thGTRS";
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
		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};
		
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
		};		
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
		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};
		
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
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
		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};
		
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
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
		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};
		
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
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
		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};
		
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
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
		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};
		
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
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
		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};
		
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
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
		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};
		
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
		};
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
		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};
		
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
		};
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
		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};
		
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
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
		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};
		
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
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
		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};
		
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
		};
	};

	//--------------------------------------------------------Laat/i (the LAAT's)--------------------------------------------------------//

	class 180th_Pegasus_LAAT: lsd_heli_laati {
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
		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};
		
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
		};
    };

	class 180th_Huebert_LAAT: lsd_heli_laati {
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
		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};
		
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
		};
	};

	class 180th_Melisande_LAAT: lsd_heli_laati {
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
		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};
		
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
		};
	};

	class 180th_laat_medevac: lsd_heli_laati {
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
		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};
		
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
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
		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};
		
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
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
		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};
		
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
		};
	};


	//--------------------------------------------------------BARC Speeders--------------------------------------------------------//
	// goodbye legion

	class 180th_3as_BARC_Base: Car_F {
		model = "3AS\3AS_LightVics\3AS_BARC\model\Barc_Speeder.p3d";
        scope = 1;
		displayName = "180th_3as_BARC_base";
        hasdriver = 1;
		crew = "180th_BARC";
        side = 1;
        faction = "b_wac";
		editorSubcategory = "WS_Categ_180thGTRS";
		acceleration = 35; //25?
		terrainCoef = 2.5;
		turnCoef = 2.500000;
		precision = 10;
		brakeDistance = 3;
		fireResistance = 5;
		armor = 420; //30
		cost = 50000;
		transportMaxBackpacks = 3;
		transportSoldier = 0;
		wheelDamageRadiusCoef = 0.900000;
		wheelDestroyRadiusCoef = 0.400000;
		maxFordingDepth = 0.5;
		canFloat=1;
		waterLeakiness=2.5;
		waterPPInVehicle=0;
		waterAngularDampingCoef=0.5;
		waterResistance = 1;
		waterResistanceCoef=0.0049999999;
		waterSpeedFactor=1;
		waterSpeedCoef=3;
		crewCrashProtection = 0.1;
		driverLeftHandAnimName = "";
		driverRightHandAnimName = "";
		driverLeftLegAnimName = "";
		driverRightLegAnimName = "";
		ejectDeadDriver = 1;
		brakeTorque = 9000;
		crewExplosionProtection = 0;
		fuelExplosionPower = 0.005000;
		longStiff = 15000;
		latStiffX = 2000;
		latStiffY = 18000;
		steerAheadSimul = 0.500000;
		steerAheadPlan = 0.350000;
		predictTurnPlan = 8;
		predictTurnSimul = 6;
		thrustDelay = 0.300000;
		brakeIdleSpeed = 1.780000;
		maxSpeed = 420;
		fuelCapacity = 200;
		wheelCircumference = 2.834000;
		antiRollbarForceCoef = 24;
		antiRollbarForceLimit = 30;
		antiRollbarSpeedMin = 15;
		antiRollbarSpeedMax = 70;
		idleRpm = 600; //700
		redRpm = 6000; //4000

		class complexGearbox {
			GearboxRatios[] = {"R1", -4, "N", 0, "D1", 4.100000, "D2", 2.210000, "D3", 1.100000, "D4", 0.470000, "D5", 0.350000, "D6", 0.150000};
			TransmissionRatios[] = {"High", 7};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		damperSize = 0.200000;
		damperForce = 1;
		damperDamping = 1;
		dampersBumpCoef = 6;
		differentialType = "all_limited";
		frontRearSplit = 0.500000;
		frontBias = 1.300000;
		rearBias = 1.300000;
		centreBias = 1.300000;
		clutchStrength = 180;
		enginePower = 2666;
		maxOmega = 600;
		peakTorque = 2000;
		dampingRateFullThrottle = 0.150000;
		dampingRateZeroThrottleClutchEngaged = 2;
		dampingRateZeroThrottleClutchDisengaged = 0.200000;
		torqueCurve[] = {{0, "0/500"}, {0.200000, "175/500"}, {0.300000, "300/500"}, {0.400000, "400/500"}, {0.600000, "450/500"}, {0.700000, "275/500"}, {0.900000, "125/500"}, {1, "0/500"}};
		changeGearMinEffectivity[] = {0.500000, 0.150000, 0.970000, 0.970000, 0.970000, 0.970000, 0.970000, 0.985000};
		switchTime = 0.200000;
		latency = 1;

		class Wheels {

			class LF {
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 50;
				MOI = 18;
				dampingRate = 0.400000;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				maxBrakeTorque = 1500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0, -1, 0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.050000;
				maxDroop = 0.050000;
				sprungMass = 500;
				springStrength = 22600;
				springDamperRate = 8680;
				longitudinalStiffnessPerUnitGravity = 100000;
				latStiffX = 25;
				latStiffY = 18000;
				frictionVsSlipGraph[] = {{0, 1}, {0.500000, 1}, {1, 1}};
			};

			class LR: LF {
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 300000;
			};

			class RF: LF {
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};

			class RR: RF {
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 300000;
			};
		};

		class Turrets: Turrets {
		};

		class TransportItems {

			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 4;
			};
		
			class _xx_Toolkit {
				name = "Toolkit";
				count = 1;
			};
		};

		class HitPoints: HitPoints {

			class HitLFWheel: HitLFWheel {
				armor = 1000.125000;
				passThrough = 0;
			};

			class HitLF2Wheel: HitLF2Wheel {
				armor = 1000.125000;
				passThrough = 0;
			};

			class HitRFWheel: HitRFWheel {
				armor = 1000.125000;
				passThrough = 0;
			};

			class HitRF2Wheel: HitRF2Wheel {
				armor = 1000.125000;
				passThrough = 0;
			};

			class HitFuel {
				armor = 0.500000;
				material = -1;
				name = "fueltank";
				visual = "";
				passThrough = 0.200000;
			};

			class HitEngine {
				armor = 5.500000;
				material = -1;
				name = "engine";
				visual = "";
				passThrough = 0.200000;
			};

			class HitBody: HitBody {
				name = "body";
				visual = "body";
				passThrough = 1;
			};
		};
		driverAction = "BARC_Driver";
		cargoAction[] = {"passenger_low01", "passenger_generic01_leanleft", "passenger_generic01_foldhands"};
		getInAction = "GetInLow";
		soundDammage[] = {"", 0.562341, 1};
		soundEngineOnInt[] = {"3AS\3AS_LightVics\3AS_BARC\sounds\eng_barcSpeeder_startup.ogg", 1, 1};
		soundEngineOnExt[] = {"3AS\3AS_LightVics\3AS_BARC\sounds\eng_barcSpeeder_startup.ogg", 1, 1};
		soundEngineOffInt[] = {"3AS\3AS_LightVics\3AS_BARC\sounds\eng_barcSpeeder_shutdown.ogg", 1, 1, 200};
		soundEngineOffExt[] = {"3AS\3AS_LightVics\3AS_BARC\sounds\eng_barcSpeeder_shutdown.ogg", 1, 1, 200};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_1", 1, 1, 200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_2", 1, 1, 200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_3", 1, 1, 200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_4", 1, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.250000, "buildCrash1", 0.250000, "buildCrash2", 0.250000, "buildCrash3", 0.250000};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_1", 1, 1, 200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_2", 1, 1, 200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_3", 1, 1, 200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_4", 1, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.250000, "woodCrash1", 0.250000, "woodCrash2", 0.250000, "woodCrash3", 0.250000};
		armorCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_1", 1, 1, 200};
		armorCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_2", 1, 1, 200};
		armorCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_3", 1, 1, 200};
		armorCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_4", 1, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.250000, "ArmorCrash1", 0.250000, "ArmorCrash2", 0.250000, "ArmorCrash3", 0.250000};
		Crash0[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_1", 1, 1, 200};
		Crash1[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_2", 1, 1, 200};
		Crash2[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_3", 1, 1, 200};
		Crash3[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_4", 1, 1, 200};
		soundCrashes[] = {"Crash0", 0.250000, "Crash1", 0.250000, "Crash2", 0.250000, "Crash3", 0.250000};
		doppler = 1;
		loop = 0;

		weapons[] = 
		{
			"ls_speeder_AP",
			"180_TX130_cannon"
		};
		magazines[] = 
		{			
			"ls_50Rnd_speederHE_belt",
			"ls_50Rnd_speederHE_belt",
			"SWLG_TX130_cannon_mag"
		};
		memoryPointGun[] = {"usti hlavne", "usti hlavne2"};
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		memoryPointTrackFLL = "TrackFLL";
		memoryPointTrackFLR = "TrackFLR";
		memoryPointTrackBLL = "TrackBLL";
		memoryPointTrackBLR = "TrackBLR";
		memoryPointTrackFRL = "TrackFRL";
		memoryPointTrackFRR = "TrackFRR";
		memoryPointTrackBRL = "TrackBRL";
		memoryPointTrackBRR = "TrackBRR";
		tas_canBlift = 2;
		tas_liftVars = "[[[[0,-3.7,-6]],[[-1,-3.7,-6],[1,-3.7,-6]]], [0.5,0.25], [-0.1,0.05]]";
		
		ls_hasImpulse = 1;
		ls_impulsor_fuelDrain_1 = 0.001;
		ls_impulsor_fuelDrain_2 = 0.004;
		ls_impulsor_boostSpeed_1 = 175;
		ls_impulsor_boostSpeed_2 = 250;

		class EventHandlers {
			init = "(_this select 0) spawn ls_vehicle_fnc_impulseMonitor;";
		};

		class UserActions {

			class PressXToFlipTheThing {
				displayNameDefault = "Flip Speeder";
				displayName = "Flip Speeder";
				position = "";
				radius = 2.700000;
				onlyForPlayer = 1;
				condition = "alive this AND not canmove this AND (count crew this == 0 || isAutonomous this)";
				statement = "this setpos [getpos this select 0,getpos this select 1,(getpos this select 2)+1]";
			};
			class ls_impulse {
				displayNameDefault = "Impulse";
				displayName = "Impulse";
				position = "";
				onlyForPlayer = 1;
				statement = "(_this select 0) spawn ls_vehicle_fnc_impulseMonitor;";
			};
		};

		class Damage {
			tex[] = {"\WS_A_Vehicles\data\barc\180th_barc2.paa", "\WS_A_Vehicles\data\barc\180th_barc2_dmg.paa", "\WS_A_Vehicles\data\barc\180th_barc2_wrec.paa"};
			mat[] = {"3AS\3AS_LightVics\3AS_BARC\data\barc.rvmat", "3AS\3AS_LightVics\3AS_BARC\data\barc.rvmat", "3AS\3AS_LightVics\3AS_BARC\data\wreck.rvmat"};
		};
		destrType = "DestructWreck";

		class DestructionEffects {

			class Light1 {
				simulation = "light";
				type = "ObjectDestructionLightSmall";
				position = "destructionEffect1";
				intensity = 0.001000;
				interval = 1;
				lifeTime = 3;
				enabled = "distToWater";
			};

			class Sound {
				simulation = "sound";
				position = "destructionEffect1";
				intensity = 0.500000;
				interval = 1;
				lifeTime = 1;
				type = "Fire";
			};

			class Fire1 {
				simulation = "particles";
				type = "ObjectDestructionFire1Tiny";
				position = "destructionEffect1";
				intensity = 0.250000;
				interval = 1;
				lifeTime = 3;
			};

			class Refract1 {
				simulation = "particles";
				type = "SmallFireFRefract";
				position = "destructionEffect1";
				intensity = 0.500000;
				interval = 1;
				lifeTime = 3;
			};
		};

		class Exhausts {

			class Exhaust1 {
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustEffectHeli";
			};

			class Exhaust2 {
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustEffectHeli";
			};
		};

		class Reflectors {

			class LightCarHeadL01 {
				color[] = {1900, 1800, 1700};
				ambient[] = {5, 5, 5};
				position = "LightCarHeadL01";
				direction = "LightCarHeadL01_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1;

				class Attenuation {
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.250000;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
		};
		aggregateReflectors[] = {{"LightCarHeadL01"}, {}};
	};

	class 180th_3as_barc: 180th_3as_BARC_base {
		scope=2;
		side=1;
		author = "Wyvern Studios";
		displayName = "[180th Basilisk] BARC Speeder [3AS]";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\WS_A_Vehicles\data\barc\180th_barc2.paa"};
	};

	class 180th_3as_barc_side: 180th_3as_BARC_base {
		author = "Wyvern Studios x 3AS";
		displayName = "[180th Basilisk] BARC Speeder SC Variant [3AS]";
        _generalMacro = "B_MRAP_01_F";
		scope = 2;
        crew = "180th_BARC";
        typicalCargo[] = {"180th_BARC"};
		side = 1;
        proxytype = "CPDriver";
        hasdriver = 1;
		faction = "b_wac";
		model = "3as\3AS_LightVics\3AS_BARC\model\barc_speeder_sidecar.p3d";
		armor = 880;
		hiddenSelections[] = {"camo", "camo2"};
		hiddenSelectionsTextures[] = {"\WS_A_Vehicles\data\barc\180th_barc2.paa", "\WS_A_Vehicles\data\barc\180th_barc2gun.paa"};

		class Turrets: Turrets {
			class MainTurret: MainTurret {
				stabilizedInAxes = 4;
				body = "MainTurret";
				gun = "MainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				animationSourceElevation = "";
				gunnerAction = "BARC_Gunner";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				ejectDeadGunner = 1;
				memoryPointGun[] = {"usti hlavne3"};
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				gunBeg = "usti hlavne3";
				gunEnd = "konec hlavne3";
				weapons[] = 
				{
					"LS_speeder_AP"
				};
				magazines[] = 
				{
					"ls_50Rnd_speederHE_belt",
					"ls_50Rnd_speederHE_belt",
					"ls_50Rnd_speederHE_belt",
                	"ls_50Rnd_speederHE_belt"
				};
				turretFollowFreeLook = 1;
				soundServo[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm", 1.412538, 1, 30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm_vertical", 1.412538, 1, 30};
				discreteDistance[] = {100, 200, 300};
				discreteDistanceInitIndex = 2;
				gunnerName = "Gunner";
				proxytype = "CPgunner";
				gunnerRightHandAnimName = "HandR";
				gunnerLeftHandAnimName = "HandL";
				memoryPointGunnerOptics = "usti hlavne3";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				turretInfoType = "RscOptics_crows";
				gunnerForceOptics = 0;
				startEngine = 1;
				commanding = 1;
				primaryGunner = 1;
				primaryObserver = 1;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				usePip = 1;
				minTurn = -50;
				maxTurn = 50;
				initTurn = 0;
				minElev = -5;
				maxElev = 20;
				initElev = 0;

				class ViewOptics {
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.300000;
					minFov = 0.070000;
					maxFov = 0.350000;
				};
			};
		};

		class Damage {
			tex[] = {"\WS_A_Vehicles\data\barc\180th_barc2gun.paa", "\WS_A_Vehicles\data\barc\180th_barc2gun.paa", "\WS_A_Vehicles\data\barc\180th_barc2gun_wrec.paa"};
			mat[] = {"3AS\3AS_LightVics\3AS_BARC\data\sidecar\barc.rvmat", "3AS\3AS_LightVics\3AS_BARC\data\sidecar\barc.rvmat", "3AS\3AS_LightVics\3AS_BARC\data\sidecar\wreck.rvmat"};
		};	
	};
};
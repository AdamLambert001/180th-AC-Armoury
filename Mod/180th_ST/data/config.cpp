#define AUTHOR 180th dev team

class cfgpatches
{
	class 180th_static
	{
		author=AUTHOR;
		requiredAddons[]=
		{
			"kobra_core"
		};
		requiredVersion=0.1;
		units[]=
		{
			"180th_venator_zeus",
			"180th_venator_base",
			"180th_venator_base_2",
			"180th_venator_base_2",
			"180th_venator_base_3",
			"180th_venator_base_4",
			"180th_venator_base_5",
			"180th_venator_base_6",
			"180th_ven_hull_base",
			"180th_ven_body1_1",
			"180th_ven_body1_2",
			"180th_ven_body2_1",
			"180th_ven_body1_2",
			"180th_ven_body2_1",
			"180th_ven_body2_2",
			"180th_ven_body2_3",
			"180th_ven_body3",
			"180th_ven_body4",
			"180th_ven_body5",
			"180th_ven_body6",
			"180th_ven_body7",
			"180th_ven_body8",
			"180th_ven_body9",
			"180th_ven_body10",
			"180th_ven_door",
			"180th_ven_door2",
			"180th_ven_engine",
			"180th_ven_interior1",
			"180th_ven_interior2",
			"180th_ven_interior3",
			"180th_ven_interior4",
			"180th_ven_interior5",
			"180th_ven_interior6",
			"4180th_ven_interior7",
			"180th_ven_interior8",
			"180th_ven_bridge"
		};
		weapons[]={};
	};
};

class CfgFactionClasses 
{
	class 180th_statics_props
	{
	displayName = "180th Assault Corps";
	};
	class 180th_statics_props_extra
	{
	displayName = "180th Assault Corps (extra)";
	};
};

class CfgEditorSubcategories
{
	class 180th_ships_sub
	{
		displayName="Ships";
	};
	class 180th_ship_parts_sub
	{
		displayName="Ships";
	};
};

class cfgvehicles
{
	class 442_venator_zeus;
	class 442_venator_base;
	class 442_ven_hull_base;
	class 180th_venator_zeus: 442_venator_zeus
	{
		author=AUTHOR;
		scope=2;
		scopecurator=2;
		editorpreview="";
		editorcategory="180th_statics_props";
		editorsubcategory="180th_ships_sub";
		vehicleClass="Structures";
		icon="iconObject_1x1";
		displayname = "[180th] The Redeemer";
		hiddenselections[]=
		{
			"body1",
			"body2",
			"body3",
			"body4",
			"body5",
			"body6",
			"body7",
			"body8",
			"body9",
			"body10",
			"door1",
			"engine",
			"interior1",
			"interior2",
			"interior3",
			"interior4",
			"interior5",
			"interior6",
			"interior7",
			"interior8",
			"bridge"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\body1_co.paa",
			"180th_ST\data\body2_co.paa",
			"180th_ST\data\body3_co.paa",
			"180th_ST\data\body4_co.paa",
			"180th_ST\data\body5_co.paa",
			"180th_ST\data\body6_co.paa",
			"180th_ST\data\body7_co.paa",
			"180th_ST\data\body8_co.paa",
			"180th_ST\data\body9_co.paa",
			"180th_ST\data\body10_co.paa",
			"180th_ST\data\door_co.paa",
			"180th_ST\data\engine_co.paa",
			"180th_ST\data\interior1_co.paa",
			"180th_ST\data\interior2_co.paa",
			"180th_ST\data\interior3_co.paa",
			"180th_ST\data\interior4_co.paa",
			"180th_ST\data\interior5_co.paa",
			"180th_ST\data\interior6_co.paa",
			"180th_ST\data\interior7_co.paa",
			"180th_ST\data\interior8_co.paa",
			"180th_ST\data\bridge_co.paa"
		};
	};
	class 180th_venator_base: 442_venator_base
	{
		author=AUTHOR;
		reversed=0;
		scope=2;
		scopecurator=1;
		editorpreview="";
		editorcategory="180th_statics_props_extra";
		editorsubcategory="180th_ships_sub";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		displayname = "[180th] Venator";
		mapsize=1326;
		destrType=0;
		featureType=2;
		multistructureparts[]=
		{
			
			{
				"180th_ven_body1_1",
				"body1_1"
			},
			
			{
				"180th_ven_body1_2",
				"body1_2"
			},
			
			{
				"180th_ven_body2_1",
				"body2_1"
			},
			
			{
				"180th_ven_body2_2",
				"body2_2"
			},
			
			{
				"180th_ven_body2_3",
				"body2_3"
			},
			
			{
				"180th_ven_body3",
				"body3"
			},
			
			{
				"180th_ven_body4",
				"body4"
			},
			
			{
				"180th_ven_body5",
				"body5"
			},
			
			{
				"180th_ven_body6",
				"body6"
			},
			
			{
				"180th_ven_body7",
				"body7"
			},
			
			{
				"180th_ven_body8",
				"body8"
			},
			
			{
				"180th_ven_body9",
				"body9"
			},
			
			{
				"180th_ven_body10",
				"body10"
			},
			
			{
				"180th_ven_door",
				"door"
			},
			
			{
				"180th_ven_engine",
				"engine"
			},
			
			{
				"180th_ven_interior1",
				"interior1"
			},
			
			{
				"180th_ven_interior2",
				"interior2"
			},
			
			{
				"180th_ven_interior3",
				"interior3"
			},
			
			{
				"180th_ven_interior4",
				"interior4"
			},
			
			{
				"180th_ven_interior5",
				"interior5"
			},
			
			{
				"180th_ven_interior6",
				"interior6"
			},
			
			{
				"180th_ven_interior7",
				"interior7"
			},
			
			{
				"180th_ven_interior8",
				"interior8"
			},
			
			{
				"180th_ven_bridge",
				"bridge"
			}
		};
		class Eventhandlers
		{
			init="_this call BIS_fnc_Destroyer01Init;";
			attributesChanged3DEN="_this call BIS_fnc_Destroyer01PosUpdate;";
			dragged3DEN="_this call BIS_fnc_Destroyer01PosUpdate;";
			registeredToWorld3DEN="_this call BIS_fnc_Destroyer01EdenInit;";
			unregisteredFromWorld3DEN="_this call BIS_fnc_Destroyer01EdenDelete;";
		};
	};
	class 180th_venator_base_2: 180th_venator_base
	{
		displayname = "[180th] Venator (Open)";
		multistructureparts[]=
		{
			
			{
				"180th_ven_body1_1",
				"body1_1"
			},
			
			{
				"180th_ven_body1_2",
				"body1_2"
			},
			
			{
				"180th_ven_body2_1",
				"body2_1"
			},
			
			{
				"180th_ven_body2_2",
				"body2_2"
			},
			
			{
				"180th_ven_body2_3",
				"body2_3"
			},
			
			{
				"180th_ven_body3",
				"body3"
			},
			
			{
				"180th_ven_body4",
				"body4"
			},
			
			{
				"180th_ven_body5",
				"body5"
			},
			
			{
				"180th_ven_body6",
				"body6"
			},
			
			{
				"180th_ven_body7",
				"body7"
			},
			
			{
				"180th_ven_body8",
				"body8"
			},
			
			{
				"180th_ven_body9",
				"body9"
			},
			
			{
				"180th_ven_body10",
				"body10"
			},
			
			{
				"180th_ven_door2",
				"door"
			},
			
			{
				"180th_ven_engine",
				"engine"
			},
			
			{
				"180th_ven_interior1",
				"interior1"
			},
			
			{
				"180th_ven_interior2",
				"interior2"
			},
			
			{
				"180th_ven_interior3",
				"interior3"
			},
			
			{
				"180th_ven_interior4",
				"interior4"
			},
			
			{
				"180th_ven_interior5",
				"interior5"
			},
			
			{
				"180th_ven_interior6",
				"interior6"
			},
			
			{
				"180th_ven_interior7",
				"interior7"
			},
			
			{
				"180th_ven_interior8",
				"interior8"
			},
			
			{
				"180th_ven_bridge",
				"bridge"
			}
		};
	};
	class 180th_venator_base_3: 180th_venator_base
	{
		displayname = "[180th] Venator (Hollowed)";
		multistructureparts[]=
		{
			
			{
				"180th_ven_body1_1",
				"body1_1"
			},
			
			{
				"180th_ven_body1_2",
				"body1_2"
			},
			
			{
				"180th_ven_body2_1",
				"body2_1"
			},
			
			{
				"180th_ven_body2_2",
				"body2_2"
			},
			
			{
				"180th_ven_body2_3",
				"body2_3"
			},
			
			{
				"180th_ven_body3",
				"body3"
			},
			
			{
				"180th_ven_body4",
				"body4"
			},
			
			{
				"180th_ven_body5",
				"body5"
			},
			
			{
				"180th_ven_body6",
				"body6"
			},
			
			{
				"180th_ven_body7",
				"body7"
			},
			
			{
				"180th_ven_body8",
				"body8"
			},
			
			{
				"180th_ven_body9",
				"body9"
			},
			
			{
				"180th_ven_body10",
				"body10"
			},
			
			{
				"180th_ven_door",
				"door"
			},
			
			{
				"180th_ven_engine",
				"engine"
			},
			
			{
				"180th_ven_interior1",
				"interior1"
			},
			
			{
				"180th_ven_interior2",
				"interior2"
			},
			
			{
				"180th_ven_interior3",
				"interior3"
			},
			
			{
				"180th_ven_interior5",
				"interior5"
			},
			
			{
				"180th_ven_interior6",
				"interior6"
			},
			
			{
				"180th_ven_interior7",
				"interior7"
			},
			
			{
				"180th_ven_interior8",
				"interior8"
			},
			
			{
				"180th_ven_bridge",
				"bridge"
			}
		};
	};
	class 180th_venator_base_4: 180th_venator_base
	{
		displayname = "[180th] Venator (Open Hollowed)";
		multistructureparts[]=
		{
			
			{
				"180th_ven_body1_1",
				"body1_1"
			},
			
			{
				"180th_ven_body1_2",
				"body1_2"
			},
			
			{
				"180th_ven_body2_1",
				"body2_1"
			},
			
			{
				"180th_ven_body2_2",
				"body2_2"
			},
			
			{
				"180th_ven_body2_3",
				"body2_3"
			},
			
			{
				"180th_ven_body3",
				"body3"
			},
			
			{
				"180th_ven_body4",
				"body4"
			},
			
			{
				"180th_ven_body5",
				"body5"
			},
			
			{
				"180th_ven_body6",
				"body6"
			},
			
			{
				"180th_ven_body7",
				"body7"
			},
			
			{
				"180th_ven_body8",
				"body8"
			},
			
			{
				"180th_ven_body9",
				"body9"
			},
			
			{
				"180th_ven_body10",
				"body10"
			},
			
			{
				"180th_ven_door2",
				"door"
			},
			
			{
				"180th_ven_engine",
				"engine"
			},
			
			{
				"180th_ven_interior1",
				"interior1"
			},
			
			{
				"180th_ven_interior2",
				"interior2"
			},
			
			{
				"180th_ven_interior3",
				"interior3"
			},
			
			{
				"180th_ven_interior5",
				"interior5"
			},
			
			{
				"180th_ven_interior6",
				"interior6"
			},
			
			{
				"180th_ven_interior7",
				"interior7"
			},
			
			{
				"180th_ven_interior8",
				"interior8"
			},
			
			{
				"180th_ven_bridge",
				"bridge"
			}
		};
	};
	class 180th_venator_base_5: 180th_venator_base
	{
		displayname = "[180th] Venator (Open Fully Hollowed)";
		multistructureparts[]=
		{
			
			{
				"180th_ven_body1_1",
				"body1_1"
			},
			
			{
				"180th_ven_body1_2",
				"body1_2"
			},
			
			{
				"180th_ven_body2_1",
				"body2_1"
			},
			
			{
				"180th_ven_body2_2",
				"body2_2"
			},
			
			{
				"180th_ven_body2_3",
				"body2_3"
			},
			
			{
				"180th_ven_body3",
				"body3"
			},
			
			{
				"180th_ven_body4",
				"body4"
			},
			
			{
				"180th_ven_body5",
				"body5"
			},
			
			{
				"180th_ven_body6",
				"body6"
			},
			
			{
				"180th_ven_body7",
				"body7"
			},
			
			{
				"180th_ven_body8",
				"body8"
			},
			
			{
				"180th_ven_body9",
				"body9"
			},
			
			{
				"180th_ven_body10",
				"body10"
			},
			
			{
				"180th_ven_door2",
				"door"
			},
			
			{
				"180th_ven_engine",
				"engine"
			},
			
			{
				"180th_ven_bridge",
				"bridge"
			}
		};
	};
	class 180th_venator_base_6: 180th_venator_base
	{
		displayname = "[180th] Venator (Fully Hollowed)";
		multistructureparts[]=
		{
			
			{
				"180th_ven_body1_1",
				"body1_1"
			},
			
			{
				"180th_ven_body1_2",
				"body1_2"
			},
			
			{
				"180th_ven_body2_1",
				"body2_1"
			},
			
			{
				"180th_ven_body2_2",
				"body2_2"
			},
			
			{
				"180th_ven_body2_3",
				"body2_3"
			},
			
			{
				"180th_ven_body3",
				"body3"
			},
			
			{
				"180th_ven_body4",
				"body4"
			},
			
			{
				"180th_ven_body5",
				"body5"
			},
			
			{
				"180th_ven_body6",
				"body6"
			},
			
			{
				"180th_ven_body7",
				"body7"
			},
			
			{
				"180th_ven_body8",
				"body8"
			},
			
			{
				"180th_ven_body9",
				"body9"
			},
			
			{
				"180th_ven_body10",
				"body10"
			},
			
			{
				"180th_ven_door",
				"door"
			},
			
			{
				"180th_ven_engine",
				"engine"
			},
			
			{
				"180th_ven_bridge",
				"bridge"
			}
		};
	};
	class 180th_ven_hull_base: 442_ven_hull_base /////////////////////////////////////////////////
	{
		reversed=0;
		scope=1;
		scopeCurator=0;
		author=AUTHOR;
		displayname = "[180th] ven_hull_base";
		editorpreview="";
		editorcategory="180th_empty";
		editorsubcategory="180th_ships_sub";
		vehicleClass="Structures_Military";
		icon="iconObject_1x1";
		mapsize=70;
		="";
		armor=1000000000000000000;
		hideUnitInfo=1;
		nameSound="ship";
		featureType=2;
		class Hitpoints
		{
		};
		class DestructionEffects
		{
		};
		class Damage
		{
			tex[]={};
			mat[]={};
		};
		class AnimationSources
		{
		};
		class UserActions
		{
		};
	};
	class 180th_ven_body1_1: 180th_ven_hull_base
	{
		displayname = "[180th] ven body1_1";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"body1"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\body1_co.paa",
		};
	};
	class 180th_ven_body1_2: 180th_ven_hull_base
	{
		displayname = "[180th] ven body1_2";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"body1"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\body1_co.paa",
		};
	};
	class 180th_ven_body2_1: 180th_ven_hull_base
	{
		displayname = "[180th] ven body2_1";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"body2"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\body2_co.paa",
		};
	};
	class 180th_ven_body2_2: 180th_ven_hull_base
	{
		displayname = "[180th] ven body2_2";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"body2"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\body2_co.paa",
		};
	};
	class 180th_ven_body2_3: 180th_ven_hull_base
	{
		displayname = "[180th] ven body2_3";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"body2"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\body2_co.paa",
		};
	};
	class 180th_ven_body3: 180th_ven_hull_base
	{
		displayname = "[180th] ven body_3";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"body3"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\body3_co.paa",
		};
	};
	class 180th_ven_body4: 180th_ven_hull_base
	{
		displayname = "[180th] ven body4";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"body4"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\body4_co.paa",
		};
	};
	class 180th_ven_body5: 180th_ven_hull_base
	{
		displayname = "[180th] ven body5";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"body5"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\body5_co.paa",
		};
	};
	class 180th_ven_body6: 180th_ven_hull_base
	{
		displayname = "[180th] ven body6";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"body6"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\body6_co.paa",
		};
	};
	class 180th_ven_body7: 180th_ven_hull_base
	{
		displayname = "[180th] ven body7";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"body7"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\body7_co.paa",
		};
	};
	class 180th_ven_body8: 180th_ven_hull_base
	{
		displayname = "[180th] ven body8";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"body8"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\body8_co.paa",
		};
	};
	class 180th_ven_body9: 180th_ven_hull_base
	{
		displayname = "[180th] ven body9";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"body9"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\body9_co.paa",
		};
	};
	class 180th_ven_body10: 180th_ven_hull_base
	{
		displayname = "[180th] ven body10";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"body10"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\body10_co.paa",
		};
	};
	class 180th_ven_door: 180th_ven_hull_base
	{
		displayname = "[180th] ven door";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"door1",
			"door2"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\door_co.paa",			
		};
	};
	class 180th_ven_door2: 180th_ven_hull_base
	{
		displayname = "[180th] ven door";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"door1",
			"door2"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\door_co.paa",		
		};
	};
	class 180th_ven_engine: 180th_ven_hull_base
	{
		displayname = "[180th] ven engine";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"engine"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\engine_co.paa",		
		};
	};
	class 180th_ven_interior1: 180th_ven_hull_base
	{
		displayname = "[180th] ven interior1";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"interior1"
		};
		hiddenselectionstextures[]=
		{
			"180th_STdata\interior1_co.paa"
		};
	};
	class 180th_ven_interior2: 180th_ven_hull_base
	{
		displayname = "[180th] ven interior2";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"interior2"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\interior2_co.paa"
		};
	};
	class 180th_ven_interior3: 180th_ven_hull_base
	{
		displayname = "[180th] ven interior3";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"interior3"
		};
		hiddenselectionstextures[]=
		{
			"180th_ship\data\interior3_co.paa"
		};
	};
	class 180th_ven_interior4: 180th_ven_hull_base
	{
		displayname = "[180th] ven interior4";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"interior4"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\interior4_co.paa"
		};
	};
	class 180th_ven_interior5: 180th_ven_hull_base
	{
		displayname = "[180th] ven interior5";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"interior5"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\interior5_co.paa"
		};
	};
	class 180th_ven_interior6: 180th_ven_hull_base
	{
		displayname = "[180th] ven interior6";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"interior6"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\interior6_co.paa"
		};
	};
	class 180th_ven_interior7: 180th_ven_hull_base
	{
		displayname = "[180th] ven interior7";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"interior7"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\interior7_co.paa"
		};
	};
	class 180th_ven_interior8: 180th_ven_hull_base
	{
		displayname = "[180th] ven interior8";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"interior8"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\interior8_co.paa"
		};
	};
	class 180th_ven_bridge: 180th_ven_hull_base
	{
		displayname = "[180th] ven bridge";
		scope=2;
		scopecurator=2;
		editorpreview="";
		hiddenselections[]=
		{
			"bridge"
		};
		hiddenselectionstextures[]=
		{
			"180th_ST\data\bridge_co.paa"
		};
	};
};
#define AUTHOR Wyvern Studios

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
			"180_venator_zeus",
			"180_venator_base",
			"180_venator_base_2",
			"180_venator_base_2",
			"180_venator_base_3",
			"180_venator_base_4",
			"180_venator_base_5",
			"180_venator_base_6",
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
			"180th_ven_interior7",
			"180th_ven_interior8",
			"180th_ven_bridge"
		};
		weapons[]={};
	};
};

class CfgFactionClasses 
{
	class 180th_statics_props {
		displayName = "180th Assault Corps Props";
	};

};

class CfgEditorSubcategories
{
	class 180th_ships_sub {
		displayName="Static Ships";
	};
	class 180th_ship_parts_sub {
		displayName="Static Ship Parts";
	};
};

class cfgvehicles
{
	class 442_venator_zeus;
	class 442_venator_base;


	class 180_venator_zeus: 442_venator_zeus {
		author=AUTHOR;
		scope=2;
		scopecurator=2;
		editorpreview="";
		editorcategory="180th_statics_props";
		editorsubcategory="180th_ships_sub";
		vehicleClass="Structures";
		icon="iconObject_1x1";
		displayname = "The Redeemer (Zeus)";
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
			"180th_ST\venator\body1_co.paa",
			"180th_ST\venator\body2_co.paa",
			"180th_ST\venator\body3_co.paa",
			"180th_ST\venator\body4_co.paa",
			"180th_ST\venator\body5_co.paa",
			"180th_ST\venator\body6_co.paa",
			"180th_ST\venator\body7_co.paa",
			"180th_ST\venator\body8_co.paa",
			"180th_ST\venator\body9_co.paa",
			"180th_ST\venator\body10_co.paa",
			"180th_ST\venator\door_co.paa",
			"180th_ST\venator\engine_co.paa",
			"180th_ST\venator\interior1_co.paa",
			"180th_ST\venator\interior2_co.paa",
			"180th_ST\venator\interior3_co.paa",
			"180th_ST\venator\interior4_co.paa",
			"180th_ST\venator\interior5_co.paa",
			"180th_ST\venator\interior6_co.paa",
			"180th_ST\venator\interior7_co.paa",
			"180th_ST\venator\interior8_co.paa",
			"180th_ST\venator\bridge_co.paa"
		};
	};

	class 180_venator_base: 442_venator_base {
		author=AUTHOR;
		reversed = 0;
		scope = 1;
		scopecurator = 1;
		editorcategory = "180th_statics_props";
		editorsubcategory = "180th_ships_sub";
		displayName = "The Redeemer (180th)";
		mapsize = 1326;
		destrType = 0;
		featureType = 2;
		multistructureparts[] = {
		{"180th_ven_body1_1", "body1_1"}, 
		{"180th_ven_body1_2", "body1_2"}, 
		{"180th_ven_body2_1", "body2_1"}, 
		{"180th_ven_body2_2", "body2_2"}, 
		{"180th_ven_body2_3", "body2_3"}, 
		{"180th_ven_body3", "body3"}, 
		{"180th_ven_body4", "body4"}, 
		{"180th_ven_body5", "body5"}, 
		{"180th_ven_body6", "body6"}, 
		{"180th_ven_body7", "body7"}, 
		{"180th_ven_body8", "body8"}, 
		{"180th_ven_body9", "body9"}, 
		{"180th_ven_body10", "body10"}, 
		{"180th_ven_door", "door"}, 
		{"180th_ven_engine", "engine"}, 
		{"180th_ven_interior1", "interior1"},
		{"180th_ven_interior2", "interior2"},
		{"180th_ven_interior3", "interior3"},
		{"180th_ven_interior4", "interior4"},
		{"180th_ven_interior5", "interior5"},
		{"180th_ven_interior6", "interior6"},
		{"180th_ven_interior7", "interior7"},
		{"180th_ven_interior8", "interior8"},
		{"180th_ven_bridge", "bridge"}
		};

		class Eventhandlers {
			init = "_this call BIS_fnc_Destroyer01Init;";
			attributesChanged3DEN = "_this call BIS_fnc_Destroyer01PosUpdate;";
			dragged3DEN = "_this call BIS_fnc_Destroyer01PosUpdate;";
			registeredToWorld3DEN = "_this call BIS_fnc_Destroyer01EdenInit;";
			unregisteredFromWorld3DEN = "_this call BIS_fnc_Destroyer01EdenDelete;";
		};
	};

	class 180_venator_base_2: 180_venator_base {
		displayName = "The Redeemer (Open)";
		multistructureparts[] = {
			{"180th_ven_body1_1", "body1_1"}, 
			{"180th_ven_body1_2", "body1_2"}, 
			{"180th_ven_body2_1", "body2_1"}, 
			{"180th_ven_body2_2", "body2_2"}, 
			{"180th_ven_body2_3", "body2_3"}, 
			{"180th_ven_body3", "body3"}, 
			{"180th_ven_body4", "body4"}, 
			{"180th_ven_body5", "body5"}, 
			{"180th_ven_body6", "body6"}, 
			{"180th_ven_body7", "body7"}, 
			{"180th_ven_body8", "body8"}, 
			{"180th_ven_body9", "body9"}, 
			{"180th_ven_body10", "body10"}, 
			{"180th_ven_door", "door"}, 
			{"180th_ven_engine", "engine"}, 
			{"180th_ven_interior1", "interior1"},
			{"180th_ven_interior2", "interior2"},
			{"180th_ven_interior3", "interior3"},
			{"180th_ven_interior4", "interior4"},
			{"180th_ven_interior5", "interior5"},
			{"180th_ven_interior6", "interior6"},
			{"180th_ven_interior7", "interior7"},
			{"180th_ven_interior8", "interior8"},
			{"180th_ven_bridge", "bridge"}
		};
	};

	class 180_venator_base_3: 180_venator_base {
		displayName = "The Redeemer (Hollowed)";
		multistructureparts[] = {
			{"180th_ven_body1_1", "body1_1"}, 
			{"180th_ven_body1_2", "body1_2"}, 
			{"180th_ven_body2_1", "body2_1"}, 
			{"180th_ven_body2_2", "body2_2"}, 
			{"180th_ven_body2_3", "body2_3"}, 
			{"180th_ven_body3", "body3"}, 
			{"180th_ven_body4", "body4"}, 
			{"180th_ven_body5", "body5"}, 
			{"180th_ven_body6", "body6"}, 
			{"180th_ven_body7", "body7"}, 
			{"180th_ven_body8", "body8"}, 
			{"180th_ven_body9", "body9"}, 
			{"180th_ven_body10", "body10"}, 
			{"180th_ven_door", "door"}, 
			{"180th_ven_engine", "engine"}, 
			{"180th_ven_interior1", "interior1"},
			{"180th_ven_interior2", "interior2"},
			{"180th_ven_interior3", "interior3"},
			{"180th_ven_interior5", "interior5"},
			{"180th_ven_interior6", "interior6"},
			{"180th_ven_interior7", "interior7"},
			{"180th_ven_interior8", "interior8"},
			{"180th_ven_bridge", "bridge"}
		};
	};

	class 180_venator_base_4: 180_venator_base {
		displayName = "The Redeemer (Open Hollowed)";
		multistructureparts[] = {
			{"180th_ven_body1_1", "body1_1"}, 
			{"180th_ven_body1_2", "body1_2"}, 
			{"180th_ven_body2_1", "body2_1"}, 
			{"180th_ven_body2_2", "body2_2"}, 
			{"180th_ven_body2_3", "body2_3"}, 
			{"180th_ven_body3", "body3"}, 
			{"180th_ven_body4", "body4"}, 
			{"180th_ven_body5", "body5"}, 
			{"180th_ven_body6", "body6"}, 
			{"180th_ven_body7", "body7"}, 
			{"180th_ven_body8", "body8"}, 
			{"180th_ven_body9", "body9"}, 
			{"180th_ven_body10", "body10"}, 
			{"180th_ven_door", "door"}, 
			{"180th_ven_engine", "engine"}, 
			{"180th_ven_interior1", "interior1"},
			{"180th_ven_interior2", "interior2"},
			{"180th_ven_interior3", "interior3"},
			{"180th_ven_interior5", "interior5"},
			{"180th_ven_interior6", "interior6"},
			{"180th_ven_interior7", "interior7"},
			{"180th_ven_interior8", "interior8"},
			{"180th_ven_bridge", "bridge"}
		};
	};

	class 180_venator_base_5: 180_venator_base {
		displayName = "The Redeemer (Open Fully Hollow)";
		multistructureparts[] = {
			{"180th_ven_body1_1", "body1_1"}, 
			{"180th_ven_body1_2", "body1_2"}, 
			{"180th_ven_body2_1", "body2_1"}, 
			{"180th_ven_body2_2", "body2_2"}, 
			{"180th_ven_body2_3", "body2_3"}, 
			{"180th_ven_body3", "body3"}, 
			{"180th_ven_body4", "body4"}, 
			{"180th_ven_body5", "body5"}, 
			{"180th_ven_body6", "body6"}, 
			{"180th_ven_body7", "body7"}, 
			{"180th_ven_body8", "body8"}, 
			{"180th_ven_body9", "body9"}, 
			{"180th_ven_body10", "body10"}, 
			{"180th_ven_door2", "door"}, 
			{"180th_ven_engine", "engine"}, 
			{"180th_ven_bridge", "bridge"}
		};
	};

	class 180_venator_base_6: 180_venator_base {
		displayName = "The Redeemer (Fully Hollowed)";
		multistructureparts[] = {
			{"442_ven_body1_1", "body1_1"}, 
			{"442_ven_body1_2", "body1_2"}, 
			{"442_ven_body2_1", "body2_1"}, 
			{"442_ven_body2_2", "body2_2"}, 
			{"442_ven_body2_3", "body2_3"}, 
			{"442_ven_body3", "body3"}, 
			{"442_ven_body4", "body4"}, 
			{"442_ven_body5", "body5"}, 
			{"442_ven_body6", "body6"}, 
			{"442_ven_body7", "body7"}, 
			{"442_ven_body8", "body8"}, 
			{"442_ven_body9", "body9"}, 
			{"442_ven_body10", "body10"}, 
			{"442_ven_door", "door"}, 
			{"442_ven_engine", "engine"}, 
			{"442_ven_bridge", "bridge"}
		};
	};
};
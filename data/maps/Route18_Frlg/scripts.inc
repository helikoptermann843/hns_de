Route18_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route18_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route18_OnWarp
	.byte 0

Route18_OnTransition::
	call_if_eq VAR_MAP_SCENE_ROUTE16, 1, Route18_OnTransitionCyclingRoad
	end

Route18_OnTransitionCyclingRoad::
	setflag FLAG_SYS_ON_CYCLING_ROAD
	return

Route18_OnWarp::
	map_script_2 VAR_MAP_SCENE_ROUTE16, 1, Route18_OnWarpCyclingRoad
	.2byte 0

Route18_OnWarpCyclingRoad::
	special ForcePlayerOntoBike
	end

Route18_EventScript_RouteSign::
	msgbox Route18_Text_RouteSign, MSGBOX_SIGN
	end

Route18_EventScript_CyclingRoadSign::
	msgbox Route18_Text_CyclingRoadSign, MSGBOX_SIGN
	end

Route18_Text_WiltonIntro::
	.string "Ich laufe überall durch hohes\n"
	.string "Gras, um Pokémon aufzuspüren!$"

Route18_Text_WiltonDefeat::
	.string "Also so was!$"

Route18_Text_WiltonPostBattle::
	.string "Wenn ich nur ein Fahrrad hätte!$"

Route18_Text_RamiroIntro::
	.string "Guruguu!\n"
	.string "Wie klingt mein Vogellockruf?$"

Route18_Text_RamiroDefeat::
	.string "Ich musste mit dir kämpfen!$"

Route18_Text_RamiroPostBattle::
	.string "Am Wochenende sammle ich immer\n"
	.string "Wasser-pokémon!$"

Route18_Text_JacobIntro::
	.string "Das hier ist mein Gebiet!\n"
	.string "Sieh zu, dass du Land gewinnst!$"

Route18_Text_JacobDefeat::
	.string "Verdammt!$"

Route18_Text_JacobPostBattle::
	.string "Hier habe ich sehr gerne Pokémon\n"
	.string "gejagt!$"

Route18_Text_RouteSign::
	.string "ROUTE 18\n"
	.string "PRISMANIA CITY - FUCHSANIA CITY$"

Route18_Text_CyclingRoadSign::
	.string "Das Betreten des RADWEGES ist\n"
	.string "Fußgängern untersagt!$"


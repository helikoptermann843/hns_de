VictoryRoad_3F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_3F_OnLoad
	.byte 0

VictoryRoad_3F_OnLoad::
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_3F, 100, VictoryRoad_3F_EventScript_SetRockBarrier
	end

VictoryRoad_3F_EventScript_SetRockBarrier::
	setmetatile 12, 12, METATILE_Cave_RockBarrier_Top, 1
	setmetatile 12, 13, METATILE_Cave_RockBarrier_Bottom, 1
	return

VictoryRoad_3F_EventScript_FloorSwitch::
	lockall
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_3F, 100, VictoryRoad_3F_EventScript_FloorSwitchAlreadyPressed
	setmetatile 12, 12, METATILE_Cave_Floor_Ledge_Top, 0
	setmetatile 12, 13, METATILE_Cave_Floor_Ledge_Bottom, 0
	playse SE_ICE_BREAK
	special DrawWholeMapView
	waitse
	copyobjectxytoperm LOCALID_VICTORY_ROAD_3F_BOULDER1
	copyobjectxytoperm LOCALID_VICTORY_ROAD_3F_BOULDER2
	setvar VAR_MAP_SCENE_VICTORY_ROAD_3F, 100
	releaseall
	end

VictoryRoad_3F_EventScript_FloorSwitchAlreadyPressed::
	releaseall
	end

VictoryRoad_3F_EventScript_George::
	trainerbattle_single TRAINER_COOLTRAINER_GEORGE, VictoryRoad_3F_Text_GeorgeIntro, VictoryRoad_3F_Text_GeorgeDefeat
	msgbox VictoryRoad_3F_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_3F_EventScript_Colby::
	trainerbattle_single TRAINER_COOLTRAINER_COLBY, VictoryRoad_3F_Text_ColbyIntro, VictoryRoad_3F_Text_ColbyDefeat
	msgbox VictoryRoad_3F_Text_ColbyPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_3F_EventScript_Caroline::
	trainerbattle_single TRAINER_COOLTRAINER_CAROLINE, VictoryRoad_3F_Text_CarolineIntro, VictoryRoad_3F_Text_CarolineDefeat
	msgbox VictoryRoad_3F_Text_CarolinePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_3F_EventScript_Alexa::
	trainerbattle_single TRAINER_COOLTRAINER_ALEXA, VictoryRoad_3F_Text_AlexaIntro, VictoryRoad_3F_Text_AlexaDefeat
	msgbox VictoryRoad_3F_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_3F_EventScript_Ray::
	trainerbattle_double TRAINER_COOL_COUPLE_RAY_TYRA, VictoryRoad_3F_Text_RayIntro, VictoryRoad_3F_Text_RayDefeat, VictoryRoad_3F_Text_RayNotEnoughMons
	msgbox VictoryRoad_3F_Text_RayPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_3F_EventScript_Tyra::
	trainerbattle_double TRAINER_COOL_COUPLE_RAY_TYRA, VictoryRoad_3F_Text_TyraIntro, VictoryRoad_3F_Text_TyraDefeat, VictoryRoad_3F_Text_TyraNotEnoughMons
	msgbox VictoryRoad_3F_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
	end

Text_DoubleEdgeTeach::
	.string "Du kannst stolz auf dich sein, weil\n"
	.string "du dich so wacker auf der\l"
	.string "SIEGESSTRASSE geschlagen hast.\p"
	.string "Als Anerkennung deiner Leistung\n"
	.string "möchte ich einem deiner POKéMON\l"
	.string "RISIKOTACKLE beibringen.\p"
	.string "Soll ich einem POKéMON diese\n"
	.string "Attacke beibringen?$"

Text_DoubleEdgeDeclined::
	.string "Ich bringe diese Attacke einem\n"
	.string "deiner POKéMON jederzeit bei.$"

Text_DoubleEdgeWhichMon::
	.string "Welches POKéMON soll\n"
	.string "RISIKOTACKLE erlernen?$"

Text_DoubleEdgeTaught::
	.string "Mach in der POKéMON LIGA so\n"
	.string "weiter!\p"
	.string "Überrumple sie und mach sie fertig!$"

VictoryRoad_3F_Text_GeorgeIntro::
	.string "Man erzählt von einem Wunderkind!$"

VictoryRoad_3F_Text_GeorgeDefeat::
	.string "Du bist das Wunderkind!$"

VictoryRoad_3F_Text_GeorgePostBattle::
	.string "Hast du wirklich Giovanni vom Team\n"
	.string "Rocket besiegt?$"

VictoryRoad_3F_Text_AlexaIntro::
	.string "Trainer sind geborene Kämpfer,\n"
	.string "immer auf der Suche nach starken\l"
	.string "Gegnern!$"

VictoryRoad_3F_Text_AlexaDefeat::
	.string "Cool!\n"
	.string "Du bist wirklich stark!$"

VictoryRoad_3F_Text_AlexaPostBattle::
	.string "Je härter die Kämpfe sind, desto\n"
	.string "stärker wirst du!$"

VictoryRoad_3F_Text_CarolineIntro::
	.string "Gleich siehst du, wie gut du bist!$"

VictoryRoad_3F_Text_CarolineDefeat::
	.string "Das darf doch nicht wahr sein!\n"
	.string "Grrr!$"

VictoryRoad_3F_Text_CarolinePostBattle::
	.string "Du hast mich in die Schranken\n"
	.string "verwiesen!$"

VictoryRoad_3F_Text_ColbyIntro::
	.string "Nur Auserwählte dürfen passieren!$"

VictoryRoad_3F_Text_ColbyDefeat::
	.string "Ich fasse es nicht!$"

VictoryRoad_3F_Text_ColbyPostBattle::
	.string "Die Trainer hier sind auf dem Weg\n"
	.string "zur Pokémon Liga! Sei vorsichtig!$"

VictoryRoad_3F_Text_RayIntro::
	.string "Tyro: Unser beider Bestimmung\n"
	.string "ist etwas Großes zu erreichen!$"

VictoryRoad_3F_Text_RayDefeat::
	.string "Tyro: Lächerlich! Es kann nicht\n"
	.string "sein, was nicht sein darf!$"

VictoryRoad_3F_Text_RayPostBattle::
	.string "Tyro: Du hast uns besiegt! Großes\n"
	.string "ist nicht leicht zu vollbringen!$"

VictoryRoad_3F_Text_RayNotEnoughMons::
	.string "TYRO: Zusammen streben wir beide\n"
	.string "nach dem Gipfel.\p"
	.string "Du musst zwei POKéMON gegen\n"
	.string "uns einsetzen!$"

VictoryRoad_3F_Text_TyraIntro::
	.string "Lore: Wir versuchen, gemeinsam\n"
	.string "Champs zu werden!$"

VictoryRoad_3F_Text_TyraDefeat::
	.string "Lore: Oh, aber…!$"

VictoryRoad_3F_Text_TyraPostBattle::
	.string "Lore: Du hast mir gezeigt, dass\n"
	.string "Kraft grenzenlose Formen haben\l"
	.string "kann.$"

VictoryRoad_3F_Text_TyraNotEnoughMons::
	.string "LORE: Mit nur einem POKéMON\n"
	.string "kannst du nicht gegen uns antreten!$"


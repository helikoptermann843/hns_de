SilphCo_8F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_8F_OnLoad
	.byte 0

SilphCo_8F_OnLoad::
	call_if_unset FLAG_SILPH_8F_DOOR, EventScript_Close8FDoor
	end

SilphCo_8F_EventScript_WorkerM::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_8F_EventScript_WorkerMRocketsGone
	msgbox SilphCo_8F_Text_WonderIfSilphIsFinished
	release
	end

SilphCo_8F_EventScript_WorkerMRocketsGone::
	msgbox SilphCo_8F_Text_ThanksForSavingUs
	release
	end

SilphCo_8F_EventScript_FloorSign::
	msgbox SilphCo_8F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_8F_EventScript_Parker::
	trainerbattle_single TRAINER_SCIENTIST_PARKER, SilphCo_8F_Text_ParkerIntro, SilphCo_8F_Text_ParkerDefeat
	msgbox SilphCo_8F_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_8F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_32, SilphCo_8F_Text_Grunt1Intro, SilphCo_8F_Text_Grunt1Defeat
	msgbox SilphCo_8F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_8F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_36, SilphCo_8F_Text_Grunt2Intro, SilphCo_8F_Text_Grunt2Defeat
	msgbox SilphCo_8F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_8F_Text_WonderIfSilphIsFinished::
	.string "Ob die SILPH CO. schon erledigt\n"
	.string "ist?$"

SilphCo_8F_Text_ThanksForSavingUs::
	.string "Vielen Dank für unsere Rettung!$"

SilphCo_8F_Text_Grunt1Intro::
	.string "Endstation!\n"
	.string "Bis hierher und nicht weiter!$"

SilphCo_8F_Text_Grunt1Defeat::
	.string "Mist, der Mut hat mich verlassen!$"

SilphCo_8F_Text_Grunt1PostBattle::
	.string "Hau lieber ab, sonst rufe ich\n"
	.string "Verstärkung!$"

SilphCo_8F_Text_ParkerIntro::
	.string "Du bereitest uns nichts als Ärger!$"

SilphCo_8F_Text_ParkerDefeat::
	.string "Huch!\n"
	.string "Verloren?$"

SilphCo_8F_Text_ParkerPostBattle::
	.string "Das Silph Co.-gebäude ist ein\n"
	.string "wahres Labyrinth, nicht wahr?$"

SilphCo_8F_Text_Grunt2Intro::
	.string "Ich bin einer der vier berüchtigten\n"
	.string "Rocket-brüder!$"

SilphCo_8F_Text_Grunt2Defeat::
	.string "Ups!\n"
	.string "Brüder, ich habe versagt!$"

SilphCo_8F_Text_Grunt2PostBattle::
	.string "Dann werden sich meine Brüder um\n"
	.string "dich kümmern!$"

SilphCo_8F_Text_FloorSign::
	.string "SILPH CO. HAUPTSITZ\n"
	.string "7 OG$"

SilphCo_8F_Text_ToRocketBossMonsAreTools::
	.string "Der BOSS von TEAM ROCKET ist\n"
	.string "unheimlich grausam!\p"
	.string "Für ihn sind POKéMON schlicht\n"
	.string "Mittel zum Zweck.\p"
	.string "Was wird geschehen, wenn dieser\n"
	.string "Tyrann unsere Firma übernimmt…$"

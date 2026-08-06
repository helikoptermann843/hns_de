SilphCo_3F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_3F_OnLoad
	.byte 0

SilphCo_3F_OnLoad::
	call_if_unset FLAG_SILPH_3F_DOOR_1, EventScript_Close3FDoor1
	call_if_unset FLAG_SILPH_3F_DOOR_2, EventScript_Close3FDoor2
	end

SilphCo_3F_EventScript_WorkerM::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_3F_EventScript_WorkerMRocketsGone
	msgbox SilphCo_3F_Text_WhatAmIToDo
	release
	end

SilphCo_3F_EventScript_WorkerMRocketsGone::
	msgbox SilphCo_3F_Text_YouAndYourMonsSavedUs
	release
	end

SilphCo_3F_EventScript_FloorSign::
	msgbox SilphCo_3F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_3F_EventScript_Jose::
	trainerbattle_single TRAINER_SCIENTIST_JOSE, SilphCo_3F_Text_JoseIntro, SilphCo_3F_Text_JoseDefeat
	msgbox SilphCo_3F_Text_JosePostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_3F_EventScript_Grunt::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_25, SilphCo_3F_Text_GruntIntro, SilphCo_3F_Text_GruntDefeat
	msgbox SilphCo_3F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_3F_Text_WhatAmIToDo::
	.string "Ich arbeite für die Silph Co.!\n"
	.string "Was soll ich bloß machen?$"

SilphCo_3F_Text_YouAndYourMonsSavedUs::
	.string "{PLAYER}! Du hast uns mit Hilfe\n"
	.string "deiner Pokémon gerettet!$"

SilphCo_3F_Text_GruntIntro::
	.string "Hör endlich auf, uns zu nerven!$"

SilphCo_3F_Text_GruntDefeat::
	.string "Ich gebe auf!$"

SilphCo_3F_Text_GruntPostBattle::
	.string "Ein Tipp? Du brauchst einen\n"
	.string "Türöffner!$"

SilphCo_3F_Text_JoseIntro::
	.string "Ich arbeite für das Team Rocket,\n"
	.string "die Silph Co. zahlt zu wenig!!!$"

SilphCo_3F_Text_JoseDefeat::
	.string "Du hast mich erwischt!$"

SilphCo_3F_Text_JosePostBattle::
	.string "Mist...\p"
	.string "Das Team Rocket hätte mich für\n"
	.string "meine Hilfe die Pokémon studieren\l"
	.string "lassen!$"

SilphCo_3F_Text_FloorSign::
	.string "Silph Co. Hauptsitz\n"
	.string "2 Og$"


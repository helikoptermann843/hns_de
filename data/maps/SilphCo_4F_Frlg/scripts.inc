SilphCo_4F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_4F_OnLoad
	.byte 0

SilphCo_4F_OnLoad::
	call_if_unset FLAG_SILPH_4F_DOOR_1, EventScript_Close4FDoor1
	call_if_unset FLAG_SILPH_4F_DOOR_2, EventScript_Close4FDoor2
	end

SilphCo_4F_EventScript_WorkerM::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_4F_EventScript_WorkerMRocketsGone
	msgbox SilphCo_4F_Text_CantYouSeeImHiding
	release
	end

SilphCo_4F_EventScript_WorkerMRocketsGone::
	msgbox SilphCo_4F_Text_TeamRocketIsGone
	release
	end

SilphCo_4F_EventScript_FloorSign::
	msgbox SilphCo_4F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_4F_EventScript_Rodney::
	trainerbattle_single TRAINER_SCIENTIST_RODNEY, SilphCo_4F_Text_RodneyIntro, SilphCo_4F_Text_RodneyDefeat
	msgbox SilphCo_4F_Text_RodneyPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_4F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_26, SilphCo_4F_Text_Grunt1Intro, SilphCo_4F_Text_Grunt1Defeat
	msgbox SilphCo_4F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_4F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_27, SilphCo_4F_Text_Grunt2Intro, SilphCo_4F_Text_Grunt2Defeat
	msgbox SilphCo_4F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_4F_Text_CantYouSeeImHiding::
	.string "Pst! Siehst du nicht, dass\n"
	.string "ich mich verstecke?$"

SilphCo_4F_Text_TeamRocketIsGone::
	.string "Das TEAM ROCKET ist verschwunden?$"

SilphCo_4F_Text_Grunt1Intro::
	.string "Das Team Rocket hat die Kontrolle\n"
	.string "über Silph Co. übernommen!!!$"

SilphCo_4F_Text_Grunt1Defeat::
	.string "Arrgh!$"

SilphCo_4F_Text_Grunt1PostBattle::
	.string "Auf diesen Moment hat der Boss\n"
	.string "sehr lange gewartet!$"

SilphCo_4F_Text_RodneyIntro::
	.string "Mein Pokémon erwartet dich!!!$"

SilphCo_4F_Text_RodneyDefeat::
	.string "Du schwächliches Pokémon! Mist!$"

SilphCo_4F_Text_RodneyPostBattle::
	.string "Die Türen sind elektronisch\n"
	.string "verriegelt! Ohne Türöffner kommt\l"
	.string "man nicht durch!$"

SilphCo_4F_Text_Grunt2Intro::
	.string "Eindringling gesichtet!$"

SilphCo_4F_Text_Grunt2Defeat::
	.string "Wer oder was bist du?$"

SilphCo_4F_Text_Grunt2PostBattle::
	.string "Ich muss den Boss im 10.\n"
	.string "Stock warnen!$"

SilphCo_4F_Text_FloorSign::
	.string "SILPH CO. HAUPTSITZ\n"
	.string "3 OG$"


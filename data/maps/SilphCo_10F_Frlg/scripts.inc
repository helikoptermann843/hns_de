SilphCo_10F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_10F_OnLoad
	.byte 0

SilphCo_10F_OnLoad::
	call_if_unset FLAG_SILPH_10F_DOOR, EventScript_Close10FDoor
	end

SilphCo_10F_EventScript_WorkerF::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_10F_EventScript_WorkerFRocketsGone
	msgbox SilphCo_10F_Text_WaaaImScared
	release
	end

SilphCo_10F_EventScript_WorkerFRocketsGone::
	msgbox SilphCo_10F_Text_KeepMeCryingASecret
	release
	end

SilphCo_10F_EventScript_FloorSign::
	msgbox SilphCo_10F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_10F_EventScript_Travis::
	trainerbattle_single TRAINER_SCIENTIST_TRAVIS, SilphCo_10F_Text_TravisIntro, SilphCo_10F_Text_TravisDefeat
	msgbox SilphCo_10F_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_10F_EventScript_Grunt::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_39, SilphCo_10F_Text_GruntIntro, SilphCo_10F_Text_GruntDefeat
	msgbox SilphCo_10F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_10F_Text_GruntIntro::
	.string "Willkommen im 9. Stock! Es ist\n"
	.string "nett, dass du vorbeischaust!$"

SilphCo_10F_Text_GruntDefeat::
	.string "Ich bin geschockt!$"

SilphCo_10F_Text_GruntPostBattle::
	.string "Netter Versuch!\n"
	.string "Der Sitzungssaal befindet sich aber\l"
	.string "noch ein Stockwerk höher!$"

SilphCo_10F_Text_TravisIntro::
	.string "Genug von deinen dummen Spielchen!$"

SilphCo_10F_Text_TravisDefeat::
	.string "Meine Reserven sind erschöpft!$"

SilphCo_10F_Text_TravisPostBattle::
	.string "Die Trainer hier sind auf dem Weg\n"
	.string "zur Pokémon Liga! Sei vorsichtig!$"

SilphCo_10F_Text_WaaaImScared::
	.string "Hilfe!\n"
	.string "Ich habe Angst!$"

SilphCo_10F_Text_KeepMeCryingASecret::
	.string "Du beschreitest die Siegesstraße\n"
	.string "nicht ohne Grund!$"

SilphCo_10F_Text_FloorSign::
	.string "Silph Co. Hauptsitz\n"
	.string "9 Og$"


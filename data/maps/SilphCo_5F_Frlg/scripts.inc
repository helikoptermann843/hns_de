SilphCo_5F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_5F_OnLoad
	.byte 0

SilphCo_5F_OnLoad::
	call_if_unset FLAG_SILPH_5F_DOOR_1, EventScript_Close5FDoor1
	call_if_unset FLAG_SILPH_5F_DOOR_2, EventScript_Close5FDoor2
	call_if_unset FLAG_SILPH_5F_DOOR_3, EventScript_Close5FDoor3
	end

SilphCo_5F_EventScript_WorkerM::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_5F_EventScript_WorkerMRocketsGone
	msgbox SilphCo_5F_Text_RocketsInUproarAboutIntruder
	release
	end

SilphCo_5F_EventScript_WorkerMRocketsGone::
	msgbox SilphCo_5F_Text_YoureOurHeroThankYou
	release
	end

SilphCo_5F_EventScript_PokemonReport1::
	msgbox SilphCo_5F_Text_PorygonFirstVRMon, MSGBOX_SIGN
	end

SilphCo_5F_EventScript_PokemonReport2::
	msgbox SilphCo_5F_Text_Over350TechniquesConfirmed, MSGBOX_SIGN
	end

SilphCo_5F_EventScript_PokemonReport3::
	msgbox SilphCo_5F_Text_SomeMonsEvolveWhenTraded, MSGBOX_SIGN
	end

SilphCo_5F_EventScript_FloorSign::
	msgbox SilphCo_5F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_5F_EventScript_Beau::
	trainerbattle_single TRAINER_SCIENTIST_BEAU, SilphCo_5F_Text_BeauIntro, SilphCo_5F_Text_BeauDefeat
	msgbox SilphCo_5F_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_5F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_28, SilphCo_5F_Text_Grunt1Intro, SilphCo_5F_Text_Grunt1Defeat
	msgbox SilphCo_5F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_5F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_29, SilphCo_5F_Text_Grunt2Intro, SilphCo_5F_Text_Grunt2Defeat
	msgbox SilphCo_5F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_5F_EventScript_Dalton::
	trainerbattle_single TRAINER_JUGGLER_DALTON, SilphCo_5F_Text_DaltonIntro, SilphCo_5F_Text_DaltonDefeat
	msgbox SilphCo_5F_Text_DaltonPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_5F_Text_RocketsInUproarAboutIntruder::
	.string "Ein Eindringling mischt das TEAM\n"
	.string "ROCKET auf...  das bist du, oder?$"

SilphCo_5F_Text_YoureOurHeroThankYou::
	.string "Das TEAM ROCKET ist geflüchtet!\n"
	.string "Du bist ein Held!$"

SilphCo_5F_Text_Grunt1Intro::
	.string "Ich hörte, ein Kind läuft im\n"
	.string "Gebäude herum...$"

SilphCo_5F_Text_Grunt1Defeat::
	.string "Schluss! Aus!$"

SilphCo_5F_Text_Grunt1PostBattle::
	.string "Es war sehr dumm, sich mit dem\n"
	.string "Team Rocket anzulegen!$"

SilphCo_5F_Text_BeauIntro::
	.string "Wir entwickeln in diesen Labors\n"
	.string "neue PokéBälle!$"

SilphCo_5F_Text_BeauDefeat::
	.string "Finito!\n"
	.string "Aus und vorbei!$"

SilphCo_5F_Text_BeauPostBattle::
	.string "Unsere neueste Entwicklung ist ein\n"
	.string "Pokéball, der alles fängt!$"

SilphCo_5F_Text_DaltonIntro::
	.string "Waaas?\p"
	.string "Wer hat denn das Kind reingelassen?$"

SilphCo_5F_Text_DaltonDefeat::
	.string "Nein!\n"
	.string "Das Kind hat mich besiegt!$"

SilphCo_5F_Text_DaltonPostBattle::
	.string "Es ist ein weiter Weg zum Boss! Du\n"
	.string "bist hier erst im 4. Stock!$"

SilphCo_5F_Text_Grunt2Intro::
	.string "Zolle dem Team Rocket gefälligst\n"
	.string "mehr Respekt!!!$"

SilphCo_5F_Text_Grunt2Defeat::
	.string "Hust...\n"
	.string "Hust...$"

SilphCo_5F_Text_Grunt2PostBattle::
	.string "Da fällt mir ein, Smogon entwickelt\n"
	.string "sich zu Smogmog!$"

SilphCo_5F_Text_PorygonFirstVRMon::
	.string "Ein ARTIKEL über POKéMON!\p"
	.string "PORYGON! POKéMON-LABOR ERZEUGT\n"
	.string "VIRTUELLES POKéMON!$"

SilphCo_5F_Text_Over350TechniquesConfirmed::
	.string "Eine Studie über POKéMON!\p"
	.string "Es gibt mehr als 350 POKéMON-\n"
	.string "Kampftechniken!$"

SilphCo_5F_Text_SomeMonsEvolveWhenTraded::
	.string "Ein POKéMON-BERICHT!\p"
	.string "Einige POKéMON entwickeln sich\n"
	.string "erst beim Tausch.$"

SilphCo_5F_Text_FloorSign::
	.string "SILPH CO. HAUPTSITZ\n"
	.string "4 OG$"

SilphCo_5F_Text_RocketBossLookingForStrongMons::
	.string "Diese Rüpel haben die Kontrolle in\n"
	.string "diesem Gebäude übernommen…\p"
	.string "Der BOSS sagte, dass er nach\n"
	.string "starken POKéMON sucht.\p"
	.string "Ich hoffe, dass unser PRÄSIDENT\n"
	.string "Ärger vermeiden konnte…$"

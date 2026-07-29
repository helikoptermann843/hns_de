PokemonMansion_B1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_B1F_OnLoad
	.byte 0

PokemonMansion_B1F_OnLoad::
	call_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_PressSwitch_B1F
	end

PokemonMansion_B1F_EventScript_Statue::
	lockall
	setvar VAR_0x8004, 3
	call PokemonMansion_EventScript_SecretSwitch
	playse SE_UNLOCK
	special DrawWholeMapView
	waitse
	releaseall
	end

PokemonMansion_B1F_EventScript_DiarySep1st::
	msgbox PokemonMansion_B1F_Text_MewtwoIsFarTooPowerful, MSGBOX_SIGN
	end

PokemonMansion_B1F_EventScript_Lewis::
	trainerbattle_single TRAINER_BURGLAR_LEWIS, PokemonMansion_B1F_Text_LewisIntro, PokemonMansion_B1F_Text_LewisDefeat
	msgbox PokemonMansion_B1F_Text_LewisPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonMansion_B1F_EventScript_Ivan::
	trainerbattle_single TRAINER_SCIENTIST_IVAN, PokemonMansion_B1F_Text_IvanIntro, PokemonMansion_B1F_Text_IvanDefeat
	msgbox PokemonMansion_B1F_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonMansion_B1F_Text_LewisIntro::
	.string "Wo bin ich hier gelandet?$"

PokemonMansion_B1F_Text_LewisDefeat::
	.string "Autsch!$"

PokemonMansion_B1F_Text_LewisPostBattle::
	.string "Hier liegt viel nützliches Zeug\n"
	.string "herum!$"

PokemonMansion_B1F_Text_IvanIntro::
	.string "Hier wäre der ideale Platz für ein\n"
	.string "Labor!$"

PokemonMansion_B1F_Text_IvanDefeat::
	.string "Was hab ich nur falsch gemacht?$"

PokemonMansion_B1F_Text_IvanPostBattle::
	.string "Hier gefällt es mir!\n"
	.string "Man kann prima forschen!$"

PokemonMansion_B1F_Text_MewtwoIsFarTooPowerful::
	.string "Tagebuch: 1. September\n"
	.string "Mewtu wird immer stärker.\p"
	.string "Wir konnten die unkontrollierten\n"
	.string "Wutausbrüche nicht eindämmen!$"


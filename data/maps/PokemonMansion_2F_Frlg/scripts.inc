PokemonMansion_2F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_2F_OnLoad
	.byte 0

PokemonMansion_2F_OnLoad::
	call_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_PressSwitch_2F
	end

PokemonMansion_2F_EventScript_Statue::
	lockall
	setvar VAR_0x8004, 1
	call PokemonMansion_EventScript_SecretSwitch
	playse SE_UNLOCK
	special DrawWholeMapView
	waitse
	releaseall
	end

PokemonMansion_2F_EventScript_DiaryJuly5th::
	msgbox PokemonMansion_1F_Text_NewMonDiscoveredInGuyanaJungle, MSGBOX_SIGN
	end

PokemonMansion_2F_EventScript_DiaryJuly10th::
	msgbox PokemonMansion_1F_Text_ChristenedDiscoveredMonMew, MSGBOX_SIGN
	end

PokemonMansion_2F_EventScript_Arnie::
	trainerbattle_single TRAINER_BURGLAR_ARNIE, PokemonMansion_1F_Text_ArnieIntro, PokemonMansion_1F_Text_ArnieDefeat
	msgbox PokemonMansion_1F_Text_ArniePostBattle, MSGBOX_AUTOCLOSE
	end

PokemonMansion_Text_PressSecretSwitch::
	.string "Ein versteckter Schalter!\p"
	.string "Schalter drücken?$"

PokemonMansion_Text_WhoWouldnt::
	.string "Wer würde es nicht tun?$"

PokemonMansion_Text_NotQuiteYet::
	.string "Lieber nicht!$"

PokemonMansion_1F_Text_ArnieIntro::
	.string "Ich finde keinen Weg nach draußen!\n"
	.string "Der reinste Irrgarten!$"

PokemonMansion_1F_Text_ArnieDefeat::
	.string "Oh nein!\n"
	.string "Meine Beute!$"

PokemonMansion_1F_Text_ArniePostBattle::
	.string "Die Türen kannst du mittels\n"
	.string "Schalter schließen oder öffnen!$"

PokemonMansion_1F_Text_NewMonDiscoveredInGuyanaJungle::
	.string "TAGEBUCH: 5. JULI\n"
	.string "Der Dschungel im Niemandsland.\p"
	.string "Wir haben tief im Dschungel ein\n"
	.string "völlig neues POKéMON gefunden.$"

PokemonMansion_1F_Text_ChristenedDiscoveredMonMew::
	.string "TAGEBUCH: 10. JULI\n"
	.string "Wir nennen das neu entdeckte\l"
	.string "POKéMON MEW.$"


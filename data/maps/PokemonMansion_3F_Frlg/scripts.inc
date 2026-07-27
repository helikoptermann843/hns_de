PokemonMansion_3F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_3F_OnLoad
	.byte 0

PokemonMansion_3F_OnLoad::
	call_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_PressSwitch_3F
	end

PokemonMansion_3F_EventScript_Statue::
	lockall
	setvar VAR_0x8004, 2
	call PokemonMansion_EventScript_SecretSwitch
	playse SE_UNLOCK
	special DrawWholeMapView
	waitse
	releaseall
	end

PokemonMansion_3F_EventScript_DiaryFeb6th::
	msgbox PokemonMansion_1F_Text_MewGaveBirthToMewtwo, MSGBOX_SIGN
	end

PokemonMansion_3F_EventScript_Simon::
	trainerbattle_single TRAINER_BURGLAR_SIMON, PokemonMansion_1F_Text_SimonIntro, PokemonMansion_1F_Text_SimonDefeat
	msgbox PokemonMansion_1F_Text_SimonPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonMansion_3F_EventScript_Braydon::
	trainerbattle_single TRAINER_SCIENTIST_BRAYDON, PokemonMansion_1F_Text_BraydonIntro, PokemonMansion_1F_Text_BraydonDefeat
	msgbox PokemonMansion_1F_Text_BraydonPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonMansion_1F_Text_SimonIntro::
	.string "Dieses Gebiet hier ist riesig!$"

PokemonMansion_1F_Text_SimonDefeat::
	.string "Tschüss!$"

PokemonMansion_1F_Text_SimonPostBattle::
	.string "Ich frage mich, wo mein Partner\n"
	.string "wohl sein mag!?$"

PokemonMansion_1F_Text_BraydonIntro::
	.string "Mein Mentor lebte einst hier...$"

PokemonMansion_1F_Text_BraydonDefeat::
	.string "Wow!\n"
	.string "Unglaublich!$"

PokemonMansion_1F_Text_BraydonPostBattle::
	.string "Du kommst nicht weiter? Springe\n"
	.string "einfach da drüben herunter!$"

PokemonMansion_1F_Text_MewGaveBirthToMewtwo::
	.string "TAGEBUCH: 6. FEBRUAR\n"
	.string "MEW hat ein Junges geboren!\p"
	.string "Wir haben es MEWTU genannt.$"


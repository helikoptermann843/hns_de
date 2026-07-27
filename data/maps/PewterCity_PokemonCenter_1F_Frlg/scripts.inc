PewterCity_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

PewterCity_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_PEWTER_CITY
	end

PewterCity_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

PewterCity_PokemonCenter_1F_EventScript_Gentleman::
	msgbox PewterCity_PokemonCenter_1F_Text_TeamRocketMtMoonImOnPhone, MSGBOX_NPC
	end

PewterCity_PokemonCenter_1F_EventScript_Jigglypuff::
	lock
	faceplayer
	fadeoutbgm 0
	playbgm MUS_RG_JIGGLYPUFF, 0
	message PewterCity_PokemonCenter_1F_Text_Jigglypuff
	waitmessage
	delay 455
	playbgm MUS_POKE_CENTER, 1
	release
	end

PewterCity_PokemonCenter_1F_EventScript_Youngster::
	msgbox PewterCity_PokemonCenter_1F_Text_WhenJiggylypuffSingsMonsGetDrowsy, MSGBOX_NPC
	end

PewterCity_PokemonCenter_1F_EventScript_GBAKid1::
	lock
	msgbox PewterCity_PokemonCenter_1F_Text_TradingMyClefairyForPikachu
	release
	end

PewterCity_PokemonCenter_1F_EventScript_GBAKid2::
	msgbox PewterCity_PokemonCenter_1F_Text_TradingPikachuWithKid, MSGBOX_NPC
	end

PewterCity_PokemonCenter_1F_Text_TeamRocketMtMoonImOnPhone::
	.string "Was!?\p"
	.string "Das TEAM ROCKET befindet sich auf\n"
	.string "dem MONDBERG? Das muss ich sofort\l"
	.string "melden!\p"
	.string "Verschwinde!$"

PewterCity_PokemonCenter_1F_Text_Jigglypuff::
	.string "JIGGLYPUFF: Puu pupuu!$"

PewterCity_PokemonCenter_1F_Text_WhenJiggylypuffSingsMonsGetDrowsy::
	.string "Gähn!\p"
	.string "Von PUMMELUFFs GESANG werden\n"
	.string "POKéMON ganz müde...\p"
	.string "Ich auch...\n"
	.string "Schnarch...$"

PewterCity_PokemonCenter_1F_Text_TradingMyClefairyForPikachu::
	.string "Hast du schon den PROFI-ANGLER in\n"
	.string "ORANIA CITY besucht?$"

PewterCity_PokemonCenter_1F_Text_TradingPikachuWithKid::
	.string "Mein POKéMON, MASCHOCK, ist\n"
	.string "superstark!!!\p"
	.string "Mit seiner STÄRKE kann es sogar\n"
	.string "Felsen bewegen!$"


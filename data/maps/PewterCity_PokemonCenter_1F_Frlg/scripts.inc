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
	.string "Das Team Rocket befindet sich auf\n"
	.string "dem Mondberg? Das muss ich sofort\l"
	.string "melden!\p"
	.string "Verschwinde!$"

PewterCity_PokemonCenter_1F_Text_Jigglypuff::
	.string "Jigglypuff: Puu pupuu!$"

PewterCity_PokemonCenter_1F_Text_WhenJiggylypuffSingsMonsGetDrowsy::
	.string "Gähn!\p"
	.string "Von Pummeluffs Gesang werden\n"
	.string "Pokémon ganz müde...\p"
	.string "Ich auch...\n"
	.string "Schnarch...$"

PewterCity_PokemonCenter_1F_Text_TradingMyClefairyForPikachu::
	.string "Hast du schon den Profi-Angler in\n"
	.string "Orania City besucht?$"

PewterCity_PokemonCenter_1F_Text_TradingPikachuWithKid::
	.string "Mein Pokémon, Maschock, ist\n"
	.string "superstark!!!\p"
	.string "Mit seiner Stärke kann es sogar\n"
	.string "Felsen bewegen!$"


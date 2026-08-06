PokemonTower_3F_Frlg_MapScripts::
	.byte 0

PokemonTower_3F_EventScript_Patricia::
	trainerbattle_single TRAINER_CHANNELER_PATRICIA, PokemonTower_3F_Text_PatriciaIntro, PokemonTower_3F_Text_PatriciaDefeat
	msgbox PokemonTower_3F_Text_PatriciaPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_3F_EventScript_Carly::
	trainerbattle_single TRAINER_CHANNELER_CARLY, PokemonTower_3F_Text_CarlyIntro, PokemonTower_3F_Text_CarlyDefeat
	msgbox PokemonTower_3F_Text_CarlyPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_3F_EventScript_Hope::
	trainerbattle_single TRAINER_CHANNELER_HOPE, PokemonTower_3F_Text_HopeIntro, PokemonTower_3F_Text_HopeDefeat
	msgbox PokemonTower_3F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_3F_Text_HopeIntro::
	.string "Buu... huhu...\n"
	.string "Huhu... buu...$"

PokemonTower_3F_Text_HopeDefeat::
	.string "Buu!\n"
	.string "Ich wurde erlöst!$"

PokemonTower_3F_Text_HopePostBattle::
	.string "Das Silph Scope kann Geister\n"
	.string "identifizieren!$"

PokemonTower_3F_Text_CarlyIntro::
	.string "Buhuhuhu...\n"
	.string "Hui... buuh!$"

PokemonTower_3F_Text_CarlyDefeat::
	.string "Hmm?\n"
	.string "Was mache ich hier?$"

PokemonTower_3F_Text_CarlyPostBattle::
	.string "Tut mir Leid!\n"
	.string "Ich war besessen!$"

PokemonTower_3F_Text_PatriciaIntro::
	.string "Verschwinde, böser Geist!$"

PokemonTower_3F_Text_PatriciaDefeat::
	.string "Puh!\n"
	.string "Der Geist ist verschwunden!$"

PokemonTower_3F_Text_PatriciaPostBattle::
	.string "Auch meine Freunde waren besessen!$"


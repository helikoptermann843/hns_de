PokemonTower_5F_Frlg_MapScripts::
	.byte 0

PokemonTower_5F_EventScript_Channeler::
	msgbox PokemonTower_5F_Text_RestHereInPurifiedSpace, MSGBOX_NPC
	end

PokemonTower_5F_EventScript_PurifiedZone::
	lockall
	fadescreen FADE_TO_WHITE
	special HealPlayerParty
	fadescreen FADE_FROM_WHITE
	msgbox PokemonTower_5F_Text_PurifiedZoneMonsFullyHealed
	setvar VAR_TEMP_1, 1
	releaseall
	end

PokemonTower_5F_EventScript_ExitPurifiedZone::
	lockall
	setvar VAR_TEMP_1, 0
	releaseall
	end

PokemonTower_5F_EventScript_Tammy::
	trainerbattle_single TRAINER_CHANNELER_TAMMY, PokemonTower_5F_Text_TammyIntro, PokemonTower_5F_Text_TammyDefeat
	msgbox PokemonTower_5F_Text_TammyPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_5F_EventScript_Ruth::
	trainerbattle_single TRAINER_CHANNELER_RUTH, PokemonTower_5F_Text_RuthIntro, PokemonTower_5F_Text_RuthDefeat
	msgbox PokemonTower_5F_Text_RuthPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_5F_EventScript_Karina::
	trainerbattle_single TRAINER_CHANNELER_KARINA, PokemonTower_5F_Text_KarinaIntro, PokemonTower_5F_Text_KarinaDefeat
	msgbox PokemonTower_5F_Text_KarinaPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_5F_EventScript_Janae::
	trainerbattle_single TRAINER_CHANNELER_JANAE, PokemonTower_5F_Text_JanaeIntro, PokemonTower_5F_Text_JanaeDefeat
	msgbox PokemonTower_5F_Text_JanaePostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_5F_Text_RestHereInPurifiedSpace::
	.string "Komm her! Ich habe diese Stelle\n"
	.string "mit weißer Magie versiegelt!\l"
	.string "Du kannst dich hier ausruhen!$"

PokemonTower_5F_Text_TammyIntro::
	.string "Gib... mir...\n"
	.string "deine... Seele...$"

PokemonTower_5F_Text_TammyDefeat::
	.string "Puh!$"

PokemonTower_5F_Text_TammyPostBattle::
	.string "Etwas muss von mir Besitz ergriffen\n"
	.string "haben!$"

PokemonTower_5F_Text_RuthIntro::
	.string "Es... gibt... kein...\n"
	.string "Entkommen...$"

PokemonTower_5F_Text_RuthDefeat::
	.string "Welch ein Alptraum!$"

PokemonTower_5F_Text_RuthPostBattle::
	.string "Ich war verhext!$"

PokemonTower_5F_Text_KarinaIntro::
	.string "Zombies!$"

PokemonTower_5F_Text_KarinaDefeat::
	.string "Was?$"

PokemonTower_5F_Text_KarinaPostBattle::
	.string "So langsam komme ich wieder zu\n"
	.string "Sinnen!$"

PokemonTower_5F_Text_JanaeIntro::
	.string "Buuh...\n"
	.string "Buhuhu...$"

PokemonTower_5F_Text_JanaeDefeat::
	.string "Das war knapp!$"

PokemonTower_5F_Text_JanaePostBattle::
	.string "Trotz meiner Erfahrung bin ich dem\n"
	.string "Bösen verfallen!$"

PokemonTower_5F_Text_PurifiedZoneMonsFullyHealed::
	.string "Du hast einen geschützten Bereich\n"
	.string "betreten!\p"
	.string "Die Pokémon von {PLAYER}\n"
	.string "wurden geheilt!$"


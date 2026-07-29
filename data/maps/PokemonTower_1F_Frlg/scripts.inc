PokemonTower_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonTower_1F_OnTransition
	.byte 0

PokemonTower_1F_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_POKEMON_TOWER_1F
	end

PokemonTower_1F_EventScript_Channeler::
	msgbox PokemonTower_1F_Text_SenseSpiritsUpToMischief, MSGBOX_NPC
	end

PokemonTower_1F_EventScript_Woman1::
	msgbox PokemonTower_1F_Text_GrowlitheWhyDidYouDie, MSGBOX_NPC
	end

PokemonTower_1F_EventScript_BaldingMan::
	msgbox PokemonTower_1F_Text_CameToPrayForDepartedClefairy, MSGBOX_NPC
	end

PokemonTower_1F_EventScript_Woman2::
	lock
	faceplayer
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, PokemonTower_1F_EventScript_Woman2MalePlayer
	msgbox PokemonTower_1F_Text_ComeToPayRespectsGirl
	release
	end

PokemonTower_1F_EventScript_Woman2MalePlayer::
	msgbox PokemonTower_1F_Text_ComeToPayRespectsSon
	release
	end

PokemonTower_1F_EventScript_WorkerF::
	msgbox PokemonTower_1F_Text_ErectedInMemoryOfDeadMons, MSGBOX_NPC
	end

PokemonTower_1F_Text_ErectedInMemoryOfDeadMons::
	.string "Dort liegt ein Fragebogen.\n"
	.string "Möchtest du ihn ausfüllen?$"

PokemonTower_1F_Text_ComeToPayRespectsSon::
	.string "Indigo Plateau\p"
	.string "Das Pokémon Liga-Hauptquartier\n"
	.string "ist die höchste Pokémon-Autorität!$"

PokemonTower_1F_Text_ComeToPayRespectsGirl::
	.string "Indigo Plateau\p"
	.string "Das große Ziel aller Trainer ist\n"
	.string "die Pokémon Liga!$"

PokemonTower_1F_Text_CameToPrayForDepartedClefairy::
	.string "Ich bete für Piepi...\p"
	.string "Schluchz! Ich kann nicht aufhören\n"
	.string "zu weinen...$"

PokemonTower_1F_Text_GrowlitheWhyDidYouDie::
	.string "Fukano...\n"
	.string "Warum hast du mich verlassen?$"

PokemonTower_1F_Text_SenseSpiritsUpToMischief::
	.string "Ich bin eine Exorzistin!\n"
	.string "Die Geister hier stiften Unruhe!$"


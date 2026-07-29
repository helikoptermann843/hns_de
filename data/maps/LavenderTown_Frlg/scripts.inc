LavenderTown_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_OnTransition
	.byte 0

LavenderTown_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_LAVENDER_TOWN
	setvar VAR_MAP_SCENE_S_S_ANNE_2F_CORRIDOR, 1
	setflag FLAG_HIDE_SS_ANNE_RIVAL
	end

LavenderTown_EventScript_LittleGirl::
	lock
	faceplayer
	msgbox LavenderTown_Text_DoYouBelieveInGhosts, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LavenderTown_EventScript_LittleGirlBelieve
	msgbox LavenderTown_Text_JustImaginingWhiteHand
	release
	end

LavenderTown_EventScript_LittleGirlBelieve::
	msgbox LavenderTown_Text_SoThereAreBelievers
	release
	end

LavenderTown_EventScript_WorkerM::
	msgbox LavenderTown_Text_TownKnownAsMonGraveSite, MSGBOX_NPC
	end

LavenderTown_EventScript_Boy::
	msgbox LavenderTown_Text_GhostsAppearedInTower, MSGBOX_NPC
	end

LavenderTown_EventScript_TownSign::
	msgbox LavenderTown_Text_TownSign, MSGBOX_SIGN
	end

LavenderTown_EventScript_SilphScopeNotice::
	msgbox LavenderTown_Text_SilphScopeNotice, MSGBOX_SIGN
	end

LavenderTown_EventScript_VolunteerHouseSign::
	msgbox LavenderTown_Text_VolunteerPokemonHouse, MSGBOX_SIGN
	end

LavenderTown_EventScript_PokemonTowerSign::
	msgbox LavenderTown_Text_PokemonTowerSign, MSGBOX_SIGN
	end

LavenderTown_Text_DoYouBelieveInGhosts::
	.string "Glaubst du an Geister?$"

LavenderTown_Text_SoThereAreBelievers::
	.string "Echt?\n"
	.string "Hätte ich nicht gedacht!$"

LavenderTown_Text_JustImaginingWhiteHand::
	.string "Hahaha, natürlich nicht!\p"
	.string "Und diese weiße Hand da auf deiner\n"
	.string "Schulter ist natürlich nicht echt!$"

LavenderTown_Text_TownKnownAsMonGraveSite::
	.string "Diese Stadt ist als Ruhestätte für\n"
	.string "Pokémon bekannt.\p"
	.string "Im Pokémon-Turm werden Andachten\n"
	.string "gehalten.$"

LavenderTown_Text_GhostsAppearedInTower::
	.string "Geister spuken im Pokémon-Turm.\p"
	.string "Ich glaube, das sind die Geister\n"
	.string "jener Pokémon, die das Team\l"
	.string "Rocket auf dem Gewissen hat!$"

LavenderTown_Text_TownSign::
	.string "Lavandia\n"
	.string "Die edle, violette Stadt!$"

LavenderTown_Text_SilphScopeNotice::
	.string "Silph Scope!\n"
	.string "Macht das Unsichtbare sichtbar!\p"
	.string "Silph Co.$"

LavenderTown_Text_VolunteerPokemonHouse::
	.string "Lavandia \n"
	.string "Pokémon-Haus$"

LavenderTown_Text_PokemonTowerSign::
	.string "Mögen die Seelen der Pokémon im\n"
	.string "Pokémon-Turm in Frieden ruhen!$"


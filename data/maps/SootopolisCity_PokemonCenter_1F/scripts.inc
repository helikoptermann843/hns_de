SootopolisCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SootopolisCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SOOTOPOLIS_CITY
	end

SootopolisCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_SOOTOPOLIS_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_Gentleman::
	lock
	faceplayer
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries
	msgbox SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge, MSGBOX_DEFAULT
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_GentlemanNoLegendaries::
	msgbox SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn, MSGBOX_DEFAULT
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_Woman::
	lock
	faceplayer
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries
	msgbox SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends, MSGBOX_DEFAULT
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_WomanNoLegendaries::
	msgbox SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon, MSGBOX_DEFAULT
	release
	end

SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn:
	.string "WASSILI, der ehemalige ARENALEITER\n"
	.string "dieses Ortes, ist ein starker TRAINER.\n"
	.string "\p"
	.string "Man sagt, er sei der beste TRAINER der\n"
	.string "ganzen HOENN-Region.\p"
	.string "Der LEITER dieser ARENA ist der\n"
	.string "Lehrer von WASSILI.\p"
	.string "Aber die TOP VIER…\p"
	.string "Man sagt, sie seien stärker als\n"
	.string "WASSILIs Lehrer.\p"
	.string "Wie stark müssen sie dann erst sein?$"

SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge:
	.string "Jeder im Ort hat sich in sein Haus\n"
	.string "zurückgezogen und kommt nicht heraus.\n"
	.string "\p"
	.string "Ich würde es auch nicht wagen, nach\n"
	.string "draußen zu gehen.$"

SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon:
	.string "Was auch immer wann oder wo passiert,\n"
	.string "meine Freundschaft zu den POKéMON\l"
	.string "leidet darunter bestimmt nicht!\p"
	.string "Ich liebe es, mit POKéMON zusammen\n"
	.string "zu sein.$"

SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends:
	.string "Sind POKéMON nicht unsere Freunde?\p"
	.string "Warum sind sie dann auf einmal so\n"
	.string "wild?$"


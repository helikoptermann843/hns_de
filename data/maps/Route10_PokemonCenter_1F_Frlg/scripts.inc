.equ REQUIRED_OWNED_MONS, 20

Route10_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route10_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

Route10_PokemonCenter_1F_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_ROUTE10_POKEMON_CENTER_1F
	setrespawn HEAL_LOCATION_ROUTE10
	end

Route10_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

Route10_PokemonCenter_1F_EventScript_FatMan::
	msgbox Route10_PokemonCenter_1F_Text_NuggetUselessSoldFor5000, MSGBOX_NPC
	end

Route10_PokemonCenter_1F_EventScript_Gentleman::
	msgbox Route10_PokemonCenter_1F_Text_EveryTypeStrongerThanOthers, MSGBOX_NPC
	end

Route10_PokemonCenter_1F_EventScript_Youngster::
	msgbox Route10_PokemonCenter_1F_Text_HeardGhostsHauntLavender, MSGBOX_NPC
	end

Route10_PokemonCenter_1F_EventScript_Aide::
	lock
	faceplayer
	call Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo
	goto_if_set FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE, Route10_PokemonCenter_1F_EventScript_AlreadyGotEverstone
	msgbox Route10_PokemonCenter_1F_Text_GiveEverstoneIfCaught20Mons, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, GetFrlgPokedexCount
	buffernumberstring STR_VAR_3, VAR_0x8006
	call Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo
	goto_if_lt VAR_0x8006, REQUIRED_OWNED_MONS, Aide_EventScript_HaventCaughtEnough
	msgbox Route10_PokemonCenter_1F_Text_GreatHereYouGo
	checkitemspace ITEM_EVERSTONE
	goto_if_eq VAR_RESULT, FALSE, Aide_EventScript_NoRoomForItem
	giveitem_msg Route10_PokemonCenter_1F_Text_ReceivedEverstoneFromAide, ITEM_EVERSTONE
	setflag FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE
	msgbox Route10_PokemonCenter_1F_Text_ExplainEverstone
	release
	end

Route10_PokemonCenter_1F_EventScript_AlreadyGotEverstone::
	msgbox Route10_PokemonCenter_1F_Text_ExplainEverstone
	release
	end

Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo::
	buffernumberstring STR_VAR_1, REQUIRED_OWNED_MONS
	bufferitemname STR_VAR_2, ITEM_EVERSTONE
	return

Route10_PokemonCenter_1F_Text_EveryTypeStrongerThanOthers::
	.string "Ihr Element macht manche POKéMON\n"
	.string "anderen gegenüber stärker bzw.\l"
	.string "schwächer!$"

Route10_PokemonCenter_1F_Text_NuggetUselessSoldFor5000::
	.string "Ich habe für ein nutzloses NUGGET\n"
	.string "5000¥ bekommen!$"

Route10_PokemonCenter_1F_Text_HeardGhostsHauntLavender::
	.string "Ich habe gehört, dass in LAVANDIA\n"
	.string "böse GEISTER spuken!$"

Route10_PokemonCenter_1F_Text_GiveEverstoneIfCaught20Mons::
	.string "Oh… {VAR}!\n"
	.string "Ich habe schon nach dir gesucht!\p"
	.string "Ich bin es, der allzeit präsente\n"
	.string "ASSISTENT von PROF. EICH.\p"
	.string "Falls du bereits 20 POKéMON\n"
	.string "in deinem POKéDEX hast, soll\l"
	.string "ich dir von PROF. EICH eine\l"
	.string "Belohnung geben.\l"
	.string "Er gab mir diesen EWIGSTEIN.\p"
	.string "Also, {VAR}, ich frage dich!\p"
	.string "Hast du mindestens 20 verschiedene\n"
	.string "POKéMON in deinem Besitz?$"

Route10_PokemonCenter_1F_Text_GreatHereYouGo::
	.string "Super! Du hast {VAR} verschiedene\n"
	.string "POKéMON gefangen!\p"
	.string "Einfach klasse! Hier, das hast du\n"
	.string "dir redlich verdient!$"

Route10_PokemonCenter_1F_Text_ReceivedEverstoneFromAide::
	.string "{PLAYER} received the EVERSTONE\n"
	.string "from the AIDE.$"

Route10_PokemonCenter_1F_Text_ExplainEverstone::
	.string "Durch die Entwicklung der\n"
	.string "POKéMON wird der POKéDEX\l"
	.string "erweitert.\l"
	.string "Aber manchmal soll sich ein\l"
	.string "POKéMON nicht entwickeln.\p"
	.string "In diesem Fall kannst du ihm den\n"
	.string "EWIGSTEIN geben.\p"
	.string "Der PROFESSOR hat gesagt, dass\n"
	.string "er die Entwicklung aufhält.$"


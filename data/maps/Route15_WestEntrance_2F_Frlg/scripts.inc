.equ REQUIRED_CAUGHT_MONS, 50

Route15_WestEntrance_2F_Frlg_MapScripts::
	.byte 0

Route15_WestEntrance_2F_EventScript_LeftBinoculars::
	lockall
	msgbox Route15_WestEntrance_2F_Text_LargeShiningBird
	showmonpic SPECIES_ARTICUNO, 10, 3
	delay 20
	waitbuttonpress
	hidemonpic
	setvar VAR_0x8004, SPECIES_ARTICUNO
	special SetSeenMon
	releaseall
	end

Route15_WestEntrance_2F_EventScript_RightBinoculars::
	msgbox Route15_WestEntrance_2F_Text_SmallIslandOnHorizon, MSGBOX_SIGN
	end

Route15_WestEntrance_2F_EventScript_Aide::
	lock
	faceplayer
	call Route15_WestEntrance_2F_EventScript_GetAideRequestInfo
	goto_if_set FLAG_GOT_EXP_SHARE_FROM_OAKS_AIDE, Route15_WestEntrance_2F_EventScript_AlreadyGotExpShare
	msgbox Route15_WestEntrance_2F_Text_GiveItemIfCaughtEnough, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, GetFrlgPokedexCount
	buffernumberstring STR_VAR_3, VAR_0x8006
	call Route15_WestEntrance_2F_EventScript_GetAideRequestInfo
	goto_if_lt VAR_0x8006, REQUIRED_CAUGHT_MONS, Aide_EventScript_HaventCaughtEnough
	msgbox Route15_WestEntrance_2F_Text_GreatHereYouGo
	checkitemspace ITEM_EXP_SHARE
	goto_if_eq VAR_RESULT, FALSE, Aide_EventScript_NoRoomForItem
	giveitem_msg Route15_WestEntrance_2F_Text_ReceivedItemFromAide, ITEM_EXP_SHARE
	setflag FLAG_GOT_EXP_SHARE_FROM_OAKS_AIDE
	msgbox Route15_WestEntrance_2F_Text_ExplainExpShare
	release
	end

Route15_WestEntrance_2F_EventScript_AlreadyGotExpShare::
	msgbox Route15_WestEntrance_2F_Text_ExplainExpShare
	release
	end

Route15_WestEntrance_2F_EventScript_GetAideRequestInfo::
	buffernumberstring STR_VAR_1, REQUIRED_CAUGHT_MONS
	bufferitemname STR_VAR_2, ITEM_EXP_SHARE
	return

Route15_WestEntrance_2F_Text_GiveItemIfCaughtEnough::
	.string "Hallo! Erinnerst du dich?\n"
	.string "Ich bin Prof. Eichs\l"
	.string "Assistent!\p"
	.string "Wenn du mindestens {STR_VAR_1} verschiedene\n"
	.string "Pokémon gefangen hast, habe ich\l"
	.string "ein Geschenk für dich:\l"
	.string "{STR_VAR_2}\p"
	.string "Also, {PLAYER}, hast du {STR_VAR_1}\n"
	.string "unterschiedliche Pokémon gefangen?$"

Route15_WestEntrance_2F_Text_GreatHereYouGo::
	.string "Ich tausche Pokémon mit dem\n"
	.string "Kind dort drüben!\p"
	.string "Da ich zwei Pikachu besaß, konnte\n"
	.string "ich eines tauschen.$"

Route15_WestEntrance_2F_Text_ReceivedItemFromAide::
	.string "{PLAYER} erhält\n"
	.string "{STR_VAR_2}!$"

Route15_WestEntrance_2F_Text_ExplainExpShare::
	.string "Der EP-Teiler kann einem\n"
	.string "Pokémon zum Tragen gegeben\l"
	.string "werden.\l"
	.string "Mit dem EP-Teiler bekommt das\l"
	.string "Pokémon, das ihn trägt, nach einem\l"
	.string "Kampf E.-Punkte, ohne gekämpft\l"
	.string "zu haben.$"

Route15_WestEntrance_2F_Text_LargeShiningBird::
	.string "Du schaust durch das Fernrohr.\p"
	.string "Ein großer Vogel fliegt anmutig\n"
	.string "aufs Meer hinaus.$"

Route15_WestEntrance_2F_Text_SmallIslandOnHorizon::
	.string "Du schaust durch das Fernrohr.\p"
	.string "Hmm, das sieht wie eine kleine\n"
	.string "Insel aus!$"


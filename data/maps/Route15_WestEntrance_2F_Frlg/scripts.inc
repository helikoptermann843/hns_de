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
	.string "Ich bin PROF. EICHs\l"
	.string "ASSISTENT!\p"
	.string "Wenn du mindestens {VAR} verschiedene\n"
	.string "POKéMON gefangen hast, habe ich\l"
	.string "ein Geschenk für dich:\l"
	.string "{VAR}\p"
	.string "Also, {VAR}, hast du {VAR}\n"
	.string "unterschiedliche POKéMON gefangen?$"

Route15_WestEntrance_2F_Text_GreatHereYouGo::
	.string "Ich tausche POKéMON mit dem\n"
	.string "Kind dort drüben!\p"
	.string "Da ich zwei PIKACHU besaß, konnte\n"
	.string "ich eines tauschen.$"

Route15_WestEntrance_2F_Text_ReceivedItemFromAide::
	.string "{PLAYER} received the {STR_VAR_2}\n"
	.string "from the AIDE.$"

Route15_WestEntrance_2F_Text_ExplainExpShare::
	.string "Der EP-TEILER kann einem\n"
	.string "POKéMON zum Tragen gegeben\l"
	.string "werden.\l"
	.string "Mit dem EP-TEILER bekommt das\l"
	.string "POKéMON, das ihn trägt, nach einem\l"
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


.equ REQUIRED_SEEN_MONS, 10

Route2_EastBuilding_Frlg_MapScripts::
	.byte 0

Route2_EastBuilding_EventScript_Aide::
	lock
	faceplayer
	call Route2_EastBuilding_EventScript_GetAideRequestInfo
	goto_if_set FLAG_GOT_HM05, Route2_EastBuilding_EventScript_AlreadyGotHM05
	msgbox Route2_EastBuilding_Text_GiveHM05IfSeen10Mons, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, GetFrlgPokedexCount
	buffernumberstring STR_VAR_3, VAR_0x8006
	call Route2_EastBuilding_EventScript_GetAideRequestInfo
	goto_if_lt VAR_0x8006, REQUIRED_SEEN_MONS, Aide_EventScript_HaventCaughtEnough
	msgbox Route2_EastBuilding_Text_GreatHereYouGo
	checkitemspace ITEM_HM05
	goto_if_eq VAR_RESULT, FALSE, Aide_EventScript_NoRoomForItem
	giveitem_msg Route2_EastBuilding_Text_ReceivedHM05FromAide, ITEM_HM05
	setflag FLAG_GOT_HM05
	msgbox Route2_EastBuilding_Text_ExplainHM05
	release
	end

Route2_EastBuilding_EventScript_AlreadyGotHM05::
	msgbox Route2_EastBuilding_Text_ExplainHM05
	release
	end

Route2_EastBuilding_EventScript_GetAideRequestInfo::
	buffernumberstring STR_VAR_1, REQUIRED_SEEN_MONS
	bufferitemname STR_VAR_2, ITEM_HM05
	return

Route2_EastBuilding_EventScript_Rocker::
	msgbox Route2_EastBuilding_Text_CanGetThroughRockTunnel, MSGBOX_NPC
	end

Route2_EastBuilding_Text_GiveHM05IfSeen10Mons::
	.string "Hallo! Erinnerst du dich?\n"
	.string "Ich bin Prof. Eichs Assistent!\p"
	.string "Wenn du mindestens 10 verschiedene\n"
	.string "Pokémon gefangen hast, habe ich\l"
	.string "ein Geschenk für dich: VM05\p"
	.string "Also, {PLAYER}, hast du 10\n"
	.string "unterschiedliche Pokémon gefangen?$"

Route2_EastBuilding_Text_GreatHereYouGo::
	.string "Super! Du hast {STR_VAR_3} verschiedene\n"
	.string "Pokémon gefangen!\p"
	.string "Einfach klasse! Hier, das hast du\n"
	.string "dir redlich verdient!$"

Route2_EastBuilding_Text_ReceivedHM05FromAide::
	.string "{PLAYER} erhält\n"
	.string "VM05!$"

Route2_EastBuilding_Text_ExplainHM05::
	.string "Die VM05 enthält die versteckte\n"
	.string "Attacke Blitz.\p"
	.string "Blitz erhellt selbst die dunkelsten\n"
	.string "Höhlen und Verliese.$"

Route2_EastBuilding_Text_CanGetThroughRockTunnel::
	.string "Sobald eines deiner Pokémon Blitz\n"
	.string "erlernt hat, kannst du dich in den\l"
	.string "FELSTUNNEL wagen!$"


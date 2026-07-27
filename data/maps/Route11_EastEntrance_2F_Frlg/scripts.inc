.equ REQUIRED_CAUGHT_MONS, 30

Route11_EastEntrance_2F_Frlg_MapScripts::
	.byte 0

Route11_EastEntrance_2F_EventScript_LeftBinoculars::
	lockall
	goto_if_set FLAG_WOKE_UP_ROUTE_12_SNORLAX, Route11_EastEntrance_2F_EventScript_LeftBinocularsSnorlaxGone
	msgbox Route11_EastEntrance_2F_Text_BigMonAsleepOnRoad
	releaseall
	end

Route11_EastEntrance_2F_EventScript_LeftBinocularsSnorlaxGone::
	msgbox Route11_EastEntrance_2F_Text_WhatABreathtakingView
	releaseall
	end

Route11_EastEntrance_2F_EventScript_RightBinoculars::
	msgbox Route11_EastEntrance_2F_Text_RockTunnelGoodRouteToLavender, MSGBOX_SIGN
	end

Route11_EastEntrance_2F_EventScript_Turner::
	lock
	faceplayer
	setvar VAR_0x8008, INGAME_TRADE_NIDORINOA
	call EventScript_GetInGameTradeSpeciesInfo
	goto_if_set FLAG_DID_NINA_TRADE, Route11_EastEntrance_2F_EventScript_AlreadyTraded
	msgbox Trade_Text_LookingForMonWannaTradeForMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route11_EastEntrance_2F_EventScript_DeclineTrade
	call EventScript_ChooseMonForInGameTrade
	goto_if_ge VAR_0x8004, PARTY_SIZE, Route11_EastEntrance_2F_EventScript_DeclineTrade
	call EventScript_GetInGameTradeSpecies
	goto_if_ne VAR_RESULT, VAR_0x8009, Route11_EastEntrance_2F_EventScript_NotRequestedMon
	call EventScript_DoInGameTrade
	msgbox Trade_Text_HeyThanks
	setflag FLAG_DID_NINA_TRADE
	release
	end

Route11_EastEntrance_2F_EventScript_DeclineTrade::
	msgbox Trade_Text_AwwOhWell
	release
	end

Route11_EastEntrance_2F_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox Trade_Text_WhatThatsNoMon
	release
	end

Route11_EastEntrance_2F_EventScript_AlreadyTraded::
	msgbox Trade_Text_IsntMyOldMonGreat
	release
	end

Route11_EastEntrance_2F_EventScript_Aide::
	lock
	faceplayer
	call Route11_EastEntrance_2F_EventScript_GetAideRequestInfo
	goto_if_set FLAG_GOT_ITEMFINDER, Route11_EastEntrance_2F_EventScript_AlreadyGotItemfinder
	msgbox Route11_EastEntrance_2F_Text_GiveItemfinderIfCaught30, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
	setvar VAR_0x8004, 0
	specialvar VAR_RESULT, GetFrlgPokedexCount
	buffernumberstring STR_VAR_3, VAR_0x8006
	call Route11_EastEntrance_2F_EventScript_GetAideRequestInfo
	goto_if_lt VAR_0x8006, REQUIRED_CAUGHT_MONS, Aide_EventScript_HaventCaughtEnough
	msgbox Route11_EastEntrance_2F_Text_GreatHereYouGo
	checkitemspace ITEM_ITEMFINDER
	goto_if_eq VAR_RESULT, FALSE, Aide_EventScript_NoRoomForItem
	giveitem_msg Route11_EastEntrance_2F_Text_ReceivedItemfinderFromAide, ITEM_ITEMFINDER
	setflag FLAG_GOT_ITEMFINDER
	msgbox Route11_EastEntrance_2F_Text_ExplainItemfinder
	release
	end

Route11_EastEntrance_2F_EventScript_AlreadyGotItemfinder::
	msgbox Route11_EastEntrance_2F_Text_ExplainItemfinder
	release
	end

Route11_EastEntrance_2F_EventScript_GetAideRequestInfo::
	buffernumberstring STR_VAR_1, REQUIRED_CAUGHT_MONS
	bufferitemname STR_VAR_2, ITEM_ITEMFINDER
	return

Route11_EastEntrance_2F_Text_GiveItemfinderIfCaught30::
	.string "Hallo! Erinnerst du dich?\n"
	.string "Ich bin PROF. EICHs\l"
	.string "ASSISTENT!\p"
	.string "Wenn du mindestens {VAR} verschiedene\n"
	.string "POKéMON gefangen hast, habe ich\l"
	.string "ein Geschenk für dich:\l"
	.string "{VAR}\p"
	.string "Also, {VAR}, hast du {VAR}\n"
	.string "unterschiedliche POKéMON gefangen?$"

Route11_EastEntrance_2F_Text_GreatHereYouGo::
	.string "Super! Du hast {VAR} verschiedene\n"
	.string "POKéMON gefangen!\p"
	.string "Einfach klasse! Hier, das hast du\n"
	.string "dir redlich verdient!$"

Route11_EastEntrance_2F_Text_ReceivedItemfinderFromAide::
	.string "{PLAYER} received the {STR_VAR_2}\n"
	.string "from the AIDE.$"

Route11_EastEntrance_2F_Text_ExplainItemfinder::
	.string "Auf dem Boden liegen oft Items,\n"
	.string "die man nicht sehen kann.\p"
	.string "Der DETEKTOR spürt Items in deiner\n"
	.string "Nähe auf!\p"
	.string "Allerdings ortet er nicht die\n"
	.string "exakte Position!\p"
	.string "Er zeigt nur in die Richtung, wo\n"
	.string "das Item liegt.\p"
	.string "Benutze ihn, um dich zu orientieren\n"
	.string "und suche dann manuell!$"

Route11_EastEntrance_2F_Text_BigMonAsleepOnRoad::
	.string "Du schaust durch das Fernrohr.\p"
	.string "Mitten auf dem Weg schläft ein\n"
	.string "großes POKéMON!$"

Route11_EastEntrance_2F_Text_WhatABreathtakingView::
	.string "Du schaust durch das Fernrohr.\p"
	.string "Du hast eine wunderschöne Aussicht!$"

Route11_EastEntrance_2F_Text_RockTunnelGoodRouteToLavender::
	.string "Du schaust durch das Fernrohr.\p"
	.string "Der einzige Weg von AZURIA CITY\n"
	.string "nach LAVANDIA führt durch den\l"
	.string "FELSTUNNEL.$"


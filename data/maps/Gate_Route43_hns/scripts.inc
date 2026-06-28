Gate_Route43_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Gate_Route43_Rocket_OnFrame
	.byte 0

Gate_Route43_Rocket_OnFrame::
	map_script_2 VAR_TEMP_0, 0, Gate_Route43_RocketChecker
	.2byte 0

Gate_Route43_RocketChecker::
	setvar VAR_TEMP_0, 1
	goto_if_eq VAR_MAHOGANY_TOWN_STATE, 1, Gate_Route43_Rocket_EventScript_Shakedown
	goto_if_eq VAR_MAHOGANY_TOWN_STATE, 2, Gate_Route43_Rocket_EventScript_Shakedown
	goto_if_eq VAR_MAHOGANY_TOWN_STATE, 3, Gate_Route43_Rocket_EventScript_Shakedown
	goto_if_eq VAR_MAHOGANY_TOWN_STATE, 4, Gate_Route43_Rocket_EventScript_Shakedown
	goto_if_eq VAR_MAHOGANY_TOWN_STATE, 5, Gate_Route43_Rocket_EventScript_Shakedown
	end

Gate_Route43_Rocket_EventScript_Shakedown::
	lock
	showmoneybox 0, 0
	msgbox Gate_Route43_Rocket_Text_TollFee, MSGBOX_DEFAULT
	checkmoney 500
	goto_if_eq VAR_RESULT, FALSE, Gate_Route43_Rocket_EventScript_ShakedownBroke
	removemoney 500
	playse SE_SHOP
	updatemoneybox
	msgbox Gate_Route43_Rocket_Text_ThankYou, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

Gate_Route43_Rocket_EventScript_ShakedownBroke::
	checkmoney 1
	goto_if_eq VAR_RESULT, FALSE, Gate_Route43_Rocket_EventScript_KickOut
	msgbox Gate_Route43_Rocket_Text_AllYouGot, MSGBOX_DEFAULT
	removemoney 500
	playse SE_SHOP
	updatemoneybox
	msgbox Gate_Route43_Rocket_Text_ThankYou, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

Gate_Route43_Rocket_EventScript_KickOut::
	msgbox Gate_Route43_Rocket_Text_KickOut, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	release
	end

Gate_Route43_Rocket_EventScript_Policeman::
	lock
	faceplayer
	goto_if_set FLAG_GOT_TM_FROM_MAHOGANY_COP, Gate_Route43_Rocket_EventScript_PolicemanAfter
	msgbox Route43Gate_Text_OfficerFoundTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_SLUDGE_BOMB
	setflag FLAG_GOT_TM_FROM_MAHOGANY_COP
	closemessage
	release
	end

Gate_Route43_Rocket_EventScript_PolicemanAfter::
	msgbox Gate_Route43_Text_OfficerAvoidGrass, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_Route43_Rocket_EventScript_Rockets::
	msgbox Gate_Route43_Rocket_Text_MakingABundle, MSGBOX_NPC
	end

Gate_Route43_Rocket_Text_TollFee:
	.string "Halt, Kleiner!\p"
	.string "Die Maut beträgt 500 ¥, um\n"
	.string "durchzugehen.$"

Gate_Route43_Rocket_Text_ThankYou:
	.string "Vielen Dank!$"

Gate_Route43_Rocket_Text_AllYouGot:
	.string "Dann zahl, was du hast, bitte.$"

Gate_Route43_Rocket_Text_KickOut:
	.string "Wow!\p"
	.string "Du bist total pleite!\p"
	.string "Fast schon Mitleid mit dir.\p"
	.string "Okay, du darfst durch...\p"
	.string "Sag es aber nicht dem anderen\n"
	.string "Wächter, verstanden?$"

Gate_Route43_Rocket_Text_MakingABundle:
	.string "He-he-he. Wir machen Kasse.\p"
	.string "Jeder will sehen, was am See des\n"
	.string "Zorns los ist.$"

Route43Gate_Text_OfficerFoundTM:
	.string "Ich wurde von diesen Dieben"
	.string "von meinem Posten vertrieben.\p"
	.string "Sie haben das hier liegen lassen.\p"
	.string "Es macht mir Angst. Könntest du\n"
	.string "es wegnehmen?$"

Gate_Route43_Text_ReceivedTM30:
	.string "{PLAYER} erhielt TM36.$"

Gate_Route43_Text_OfficerAvoidGrass:
	.string "Benutze dieses Tor, um nicht durch\n"
	.string "das Gras zu laufen.$"

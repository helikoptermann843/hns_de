PewterCity_Museum_1F_Frlg_MapScripts::
	.byte 0

PewterCity_Museum_1F_EventScript_Scientist1::
	lock
	faceplayer
	goto_if_eq VAR_FACING, DIR_WEST, PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
	goto_if_eq VAR_FACING, DIR_SOUTH, PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
	goto_if_eq VAR_FACING, DIR_NORTH, PewterCity_Museum_1F_EventScript_Scientist1BehindCounter
	msgbox PewterCity_Museum_1F_Text_PleaseEnjoyYourself
	release
	end

PewterCity_Museum_1F_EventScript_Scientist1BehindCounter::
	msgbox PewterCity_Museum_1F_Text_DoYouKnowWhatAmberIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PewterCity_Museum_1F_EventScript_AmberHasGeneticMatter
	goto_if_eq VAR_RESULT, NO, PewterCity_Museum_1F_EventScript_ExplainAmber
	end

PewterCity_Museum_1F_EventScript_AmberHasGeneticMatter::
	msgbox PewterCity_Museum_1F_Text_AmberContainsGeneticMatter
	applymovement LOCALID_MUSEUM_SCIENTIST1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

PewterCity_Museum_1F_EventScript_ExplainAmber::
	msgbox PewterCity_Museum_1F_Text_AmberIsFossilizedSap
	applymovement LOCALID_MUSEUM_SCIENTIST1, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

PewterCity_Museum_1F_EventScript_EntranceTriggerLeft::
	lockall
	setvar VAR_TEMP_1, 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
	end

PewterCity_Museum_1F_EventScript_EntranceTriggerMid::
	lockall
	setvar VAR_TEMP_1, 1
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
	end

PewterCity_Museum_1F_EventScript_EntranceTriggerRight::
	lockall
	setvar VAR_TEMP_1, 2
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	goto PewterCity_Museum_1F_EventScript_EntranceTrigger
	end

PewterCity_Museum_1F_EventScript_EntranceTrigger::
	textcolor NPC_TEXT_COLOR_MALE
	showmoneybox 0, 0
	msgbox PewterCity_Museum_1F_Text_Its50YForChildsTicket, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PewterCity_Museum_1F_EventScript_TryPayForTicket
	msgbox PewterCity_Museum_1F_Text_ComeAgain
	closemessage
	hidemoneybox
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ForcePlayerExit
	waitmovement 0
	releaseall
	end

PewterCity_Museum_1F_EventScript_TryPayForTicket::
	checkmoney 50
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Museum_1F_EventScript_NotEnoughMoney
	closemessage
	call_if_eq VAR_TEMP_1, 0, PewterCity_Museum_1F_EventScript_PlayerApproachCounterLeft
	call_if_eq VAR_TEMP_1, 1, PewterCity_Museum_1F_EventScript_PlayerApproachCounterMid
	call_if_eq VAR_TEMP_1, 2, PewterCity_Museum_1F_EventScript_PlayerApproachCounterRight
	playse SE_SHOP
	removemoney 50
	updatemoneybox
	waitse
	msgbox PewterCity_Museum_1F_Text_Right50YThankYou
	setvar VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F, 1
	hidemoneybox
	releaseall
	end

PewterCity_Museum_1F_EventScript_PlayerApproachCounterLeft::
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterLeft
	waitmovement 0
	return

PewterCity_Museum_1F_EventScript_PlayerApproachCounterMid::
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterMid
	waitmovement 0
	return

PewterCity_Museum_1F_EventScript_PlayerApproachCounterRight::
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ApproachCounterRight
	waitmovement 0
	return

PewterCity_Museum_1F_EventScript_NotEnoughMoney::
	msgbox PewterCity_Museum_1F_Text_DontHaveEnoughMoney
	closemessage
	hidemoneybox
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_ForcePlayerExit
	waitmovement 0
	releaseall
	end

PewterCity_Museum_1F_Movement_ForcePlayerExit::
	walk_down
	step_end

PewterCity_Museum_1F_Movement_ApproachCounterLeft::
	walk_right
	walk_right
	delay_8
	walk_in_place_right
	step_end

PewterCity_Museum_1F_Movement_ApproachCounterMid::
	walk_right
	delay_8
	walk_in_place_right
	step_end

PewterCity_Museum_1F_Movement_ApproachCounterRight::
	delay_8
	walk_in_place_right
	step_end

PewterCity_Museum_1F_EventScript_Scientist2::
	msgbox PewterCity_Museum_1F_Text_WeHaveTwoFossilsOnExhibit, MSGBOX_NPC
	end

PewterCity_Museum_1F_EventScript_OldMan::
	msgbox PewterCity_Museum_1F_Text_ShouldBeGratefulForLongLife, MSGBOX_NPC
	end

PewterCity_Museum_1F_EventScript_OldAmberScientist::
	lock
	faceplayer
	goto_if_set FLAG_GOT_OLD_AMBER, PewterCity_Museum_1F_EventScript_AlreadyGotOldAmber
	msgbox PewterCity_Museum_1F_Text_WantYouToGetAmberExamined
	checkitemspace ITEM_OLD_AMBER
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Museum_1F_EventScript_NoRoomForOldAmber
	setflag FLAG_GOT_OLD_AMBER
	removeobject LOCALID_OLD_AMBER
	giveitem_msg PewterCity_Museum_1F_Text_ReceivedOldAmberFromMan, ITEM_OLD_AMBER, 1, MUS_RG_OBTAIN_KEY_ITEM
	release
	end

PewterCity_Museum_1F_EventScript_NoRoomForOldAmber::
	msgbox PewterCity_Museum_1F_Text_DontHaveSpaceForThis
	release
	end

PewterCity_Museum_1F_EventScript_AlreadyGotOldAmber::
	msgbox PewterCity_Museum_1F_Text_GetOldAmberChecked
	release
	end

PewterCity_Museum_1F_EventScript_OldAmber::
	msgbox PewterCity_Museum_1F_Text_BeautifulPieceOfAmber, MSGBOX_NPC
	end

PewterCity_Museum_1F_EventScript_AerodactylFossil::
	lockall
	setvar VAR_0x8004, SPECIES_AERODACTYL
	setvar VAR_0x8005, 10
	setvar VAR_0x8006, 3
	special OpenMuseumFossilPic
	msgbox PewterCity_Museum_1F_Text_AerodactylFossil
	special CloseMuseumFossilPic
	releaseall
	end

PewterCity_Museum_1F_EventScript_KabutopsFossil::
	lockall
	setvar VAR_0x8004, SPECIES_KABUTOPS
	setvar VAR_0x8005, 10
	setvar VAR_0x8006, 3
	special OpenMuseumFossilPic
	msgbox PewterCity_Museum_1F_Text_KabutopsFossil
	special CloseMuseumFossilPic
	releaseall
	end

PewterCity_Museum_1F_Text_Its50YForChildsTicket::
	.string "Für Kinder kostet der Eintritt 50¥!\p"
	.string "Möchtest du hinein?$"

PewterCity_Museum_1F_Text_ComeAgain::
	.string "Dann bis später.$"

PewterCity_Museum_1F_Text_Right50YThankYou::
	.string "O.K., das sind 50¥!\n"
	.string "Vielen Dank!$"

PewterCity_Museum_1F_Text_DontHaveEnoughMoney::
	.string "Du hast nicht genug Geld…$"

PewterCity_Museum_1F_Text_PleaseEnjoyYourself::
	.string "Viel Vergnügen!$"

PewterCity_Museum_1F_Text_DoYouKnowWhatAmberIs::
	.string "Du hast hinter dem Tresen nichts zu\n"
	.string "suchen!\p"
	.string "Na ja, egal!\n"
	.string "Weißt du, was BERNSTEIN ist?$"

PewterCity_Museum_1F_Text_AmberContainsGeneticMatter::
	.string "Es soll ein LABOR geben, in dem\n"
	.string "man versucht, aus altem BERNSTEIN\l"
	.string "URZEIT-POKéMON wiederauferstehen\l"
	.string "zu lassen!$"

PewterCity_Museum_1F_Text_AmberIsFossilizedSap::
	.string "BERNSTEIN ist versteinertes\n"
	.string "Baumharz.$"

@ Unused
PewterCity_Museum_1F_Text_PleaseGoAround::
	.string "あちらへ　おまわりください$"

PewterCity_Museum_1F_Text_ShouldBeGratefulForLongLife::
	.string "Oh, was bin ich doch für ein Glückspilz!\p"
	.string "Die Überreste eines großen Drachen...\n"
	.string "Dass ich das noch erleben durfte!$"

PewterCity_Museum_1F_Text_WantYouToGetAmberExamined::
	.string "Pst! Ich glaube, in diesem Stück\n"
	.string "BERNSTEIN ist POKéMON-DNS\l"
	.string "enthalten!\p"
	.string "Es wäre grandios, wenn man daraus\n"
	.string "ein POKéMON wiederauferstehen\l"
	.string "lassen könnte!\p"
	.string "Doch meine Kollegen nehmen mich\n"
	.string "nicht ernst!\p"
	.string "Könntest du etwas für mich\n"
	.string "erledigen?\p"
	.string "Lass das im POKéMON-LABOR\n"
	.string "untersuchen!$"

PewterCity_Museum_1F_Text_ReceivedOldAmberFromMan::
	.string "{PLAYER} received the OLD AMBER\n"
	.string "from the man.$"

PewterCity_Museum_1F_Text_GetOldAmberChecked::
	.string "Pst!\n"
	.string "Lass den ALTBERNSTEIN untersuchen!$"

PewterCity_Museum_1F_Text_DontHaveSpaceForThis::
	.string "Du hast keinen Platz dafür!$"

PewterCity_Museum_1F_Text_WeHaveTwoFossilsOnExhibit::
	.string "Unser besonderer Stolz sind zwei\n"
	.string "Fossilien von äußerst seltenen,\l"
	.string "prähistorischen POKéMON!$"

PewterCity_Museum_1F_Text_BeautifulPieceOfAmber::
	.string "Der BERNSTEIN schimmert goldbraun\n"
	.string "und ist durchsichtig!$"

PewterCity_Museum_1F_Text_AerodactylFossil::
	.string "AERODACTYL-Fossil\n"
	.string "Ein urzeitliches und seltenes\l"
	.string "POKéMON.$"

PewterCity_Museum_1F_Text_KabutopsFossil::
	.string "KABUTOPS-Fossil\n"
	.string "Ein urzeitliches und seltenes\l"
	.string "POKéMON.$"


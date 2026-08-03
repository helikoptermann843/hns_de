FuchsiaCity_WardensHouse_Frlg_MapScripts::
	.byte 0

FuchsiaCity_WardensHouse_EventScript_Warden::
	lock
	faceplayer
	goto_if_set FLAG_GOT_HM04, FuchsiaCity_WardensHouse_EventScript_ExplainStrength
	goto_if_set FLAG_HIDE_SAFARI_ZONE_WEST_GOLD_TEETH, FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth
	msgbox FuchsiaCity_WardensHouse_Text_HifFuffHefifoo, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, FuchsiaCity_WardensHouse_EventScript_WardenYes
	call_if_eq VAR_RESULT, NO, FuchsiaCity_WardensHouse_EventScript_WardenNo
	release
	end

FuchsiaCity_WardensHouse_EventScript_GiveGoldTeeth::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	playfanfare MUS_OBTAIN_TMHM
	message FuchsiaCity_WardensHouse_Text_GaveGoldTeethToWarden
	waitmessage
	waitfanfare
	msgbox FuchsiaCity_WardensHouse_Text_WardenPoppedInHisTeeth
	call EventScript_RestorePrevTextColor
	checkplayergender
	call_if_eq VAR_RESULT, MALE, FuchsiaCity_WardensHouse_EventScript_WardenThanksMale
	call_if_eq VAR_RESULT, FEMALE, FuchsiaCity_WardensHouse_EventScript_WardenThanksFemale
	giveitem_msg FuchsiaCity_WardensHouse_Text_ReceivedHM04FromWarden, ITEM_HM04
	setflag FLAG_GOT_HM04
	removeitem ITEM_GOLD_TEETH
	release
	end

FuchsiaCity_WardensHouse_EventScript_WardenThanksMale::
	msgbox FuchsiaCity_WardensHouse_Text_ThanksSonGiveYouSomething
	return

FuchsiaCity_WardensHouse_EventScript_WardenThanksFemale::
	msgbox FuchsiaCity_WardensHouse_Text_ThanksLassieGiveYouSomething
	return

FuchsiaCity_WardensHouse_EventScript_WardenYes::
	msgbox FuchsiaCity_WardensHouse_Text_AhHowheeHoHoo
	return

FuchsiaCity_WardensHouse_EventScript_WardenNo::
	msgbox FuchsiaCity_WardensHouse_Text_HeOhayHeHaHoo
	return

FuchsiaCity_WardensHouse_EventScript_ExplainStrength::
	msgbox FuchsiaCity_WardensHouse_Text_ExplainStrength
	release
	end

FuchsiaCity_WardensHouse_EventScript_DisplaySign1::
	msgbox FuchsiaCity_WardensHouse_Text_MonPhotosFossilsOnDisplay, MSGBOX_SIGN
	end

FuchsiaCity_WardensHouse_EventScript_DisplaySign2::
	msgbox FuchsiaCity_WardensHouse_Text_OldMonMerchandiseOnDisplay, MSGBOX_SIGN
	end

FuchsiaCity_WardensHouse_Text_HifFuffHefifoo::
	.string "Wärter: Hef faff heffee!\p"
	.string "Ha lof ha feef ee haffhe he.\n"
	.string "Heff hee fiee!$"

FuchsiaCity_WardensHouse_Text_AhHowheeHoHoo::
	.string "Eff heffe fefe!\n"
	.string "Eef hafahi-fone!$"

FuchsiaCity_WardensHouse_Text_HeOhayHeHaHoo::
	.string "Ha?\n"
	.string "Hei heff heh ha hef ee haheh!$"

FuchsiaCity_WardensHouse_Text_GaveGoldTeethToWarden::
	.string "{PLAYER} gibt dem Wärter die\n"
	.string "Goldzähne!$"

FuchsiaCity_WardensHouse_Text_WardenPoppedInHisTeeth::
	.string "Der Wärter setzt das Gebiss ein!$"

FuchsiaCity_WardensHouse_Text_ThanksSonGiveYouSomething::
	.string "Wärter: Danke!\n"
	.string "Niemand hat auch nur ein Wort von\l"
	.string "mir verstanden!\p"
	.string "So konnte ich nicht arbeiten.\n"
	.string "Nimm das hier für deine Mühen.$"

FuchsiaCity_WardensHouse_Text_ThanksLassieGiveYouSomething::
	.string "Wärter: Danke!\n"
	.string "Niemand hat auch nur ein Wort von\l"
	.string "mir verstanden!\p"
	.string "So konnte ich nicht arbeiten.\n"
	.string "Nimm das hier für deine Mühen.$"

FuchsiaCity_WardensHouse_Text_ReceivedHM04FromWarden::
	.string "{PLAYER} erhält\n"
	.string "VM04!$"

FuchsiaCity_WardensHouse_Text_ExplainStrength::
	.string "Wärter: VM04 ist Stärke!\p"
	.string "Damit lernen Pokémon, Felsen zu\n"
	.string "verschieben, auch wenn sie nicht\l"
	.string "kämpfen!\p"
	.string "Hast du bereits das Geheime Haus\n"
	.string "in der Safari-Zone gefunden?$"

@ Unused
FuchsiaCity_WardensHouse_Text_YouHaveTooMuchStuff::
	.string "なんや　にもつ\n"
	.string "いっぱいやんけ！$"

FuchsiaCity_WardensHouse_Text_MonPhotosFossilsOnDisplay::
	.string "Fotos von Pokémon\n"
	.string "und Fossilien.$"

FuchsiaCity_WardensHouse_Text_OldMonMerchandiseOnDisplay::
	.string "Alte Pokémon-\n"
	.string "Spielsachen.$"


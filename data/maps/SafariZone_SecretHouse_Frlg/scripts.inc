SafariZone_SecretHouse_Frlg_MapScripts::
	.byte 0

SafariZone_SecretHouse_EventScript_Attendant::
	lock
	faceplayer
	goto_if_set FLAG_GOT_HM03, SafariZone_SecretHouse_EventScript_ExplainSurf
	msgbox SafariZone_SecretHouse_Text_CongratsYouveWon
	checkitemspace ITEM_HM03
	goto_if_eq VAR_RESULT, FALSE, SafariZone_SecretHouse_EventScript_NoRoomForHM03
	giveitem_msg SafariZone_SecretHouse_Text_ReceivedHM03FromAttendant, ITEM_HM03
	msgbox SafariZone_SecretHouse_Text_ExplainSurf
	setflag FLAG_GOT_HM03
	release
	end

SafariZone_SecretHouse_EventScript_NoRoomForHM03::
	msgbox SafariZone_SecretHouse_Text_DontHaveRoomForPrize
	release
	end

SafariZone_SecretHouse_EventScript_ExplainSurf::
	msgbox SafariZone_SecretHouse_Text_ExplainSurf
	release
	end

SafariZone_SecretHouse_Text_CongratsYouveWon::
	.string "Ah! Endlich!\p"
	.string "Du bist der Erste, der das\n"
	.string "Geheime Haus gefunden hat!\p"
	.string "Ich dachte schon, niemand würde\n"
	.string "den großen Preis jemals gewinnen!\p"
	.string "Glückwunsch!\n"
	.string "Du hast gewonnen!$"

SafariZone_SecretHouse_Text_ReceivedHM03FromAttendant::
	.string "{PLAYER} received HM03\n"
	.string "from the attendant!$"

SafariZone_SecretHouse_Text_ExplainSurf::
	.string "VM03 ist Surfer!\p"
	.string "Lernt ein Pokémon diese Technik,\n"
	.string "dann kann es dich über das Wasser\l"
	.string "transportieren!\p"
	.string "Das Beste ist aber, dass du diese\n"
	.string "VM benutzen kannst, so oft du\l"
	.string "möchtest!\p"
	.string "Ist das nicht irre?\n"
	.string "Du bist ein Glückspilz!$"

SafariZone_SecretHouse_Text_DontHaveRoomForPrize::
	.string "Oh! Du kannst keine weiteren Items\n"
	.string "tragen!$"


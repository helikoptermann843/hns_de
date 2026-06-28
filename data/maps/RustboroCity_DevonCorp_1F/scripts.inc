RustboroCity_DevonCorp_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_1F_OnTransition
	.byte 0

RustboroCity_DevonCorp_1F_OnTransition:
	call_if_unset FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_BlockStairs
	end

RustboroCity_DevonCorp_1F_EventScript_BlockStairs::
	setobjectxyperm LOCALID_DEVON_CORP_STAIR_GUARD, 14, 2
	setobjectmovementtype LOCALID_DEVON_CORP_STAIR_GUARD, MOVEMENT_TYPE_FACE_DOWN
	return

RustboroCity_DevonCorp_1F_EventScript_Employee::
	lock
	faceplayer
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright
	msgbox RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright::
	msgbox RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered::
	msgbox RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_StairGuard::
	lock
	faceplayer
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GotRobbed
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_GotRobbed
	msgbox RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome::
	msgbox RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_GotRobbed::
	msgbox RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_Greeter::
	lock
	faceplayer
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp::
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed::
	msgbox RustboroCity_DevonCorp_1F_Text_StaffGotRobbed, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_1F_EventScript_RocksMetalDisplay::
	msgbox RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay, MSGBOX_SIGN
	end

RustboroCity_DevonCorp_1F_EventScript_ProductsDisplay::
	msgbox RustboroCity_DevonCorp_1F_Text_ProductDisplay, MSGBOX_SIGN
	end

RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp:
	.string "Hallo und Willkommen in der\n"
	.string "DEVON CORPORATION.\p"
	.string "Wir sind die stolzen Entwickler von\n"
	.string "Medizin und Items, die das Leben\l"
	.string "bereichern.$"

RustboroCity_DevonCorp_1F_Text_StaffGotRobbed:
	.string "Einem Mitglied unseres Forschungs-\n"
	.string "teams ist blöderweise ein wichtiges\l"
	.string "Paket gestohlen worden.$"

RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct:
	.string "Hey, diese TURBOTRETER!\n"
	.string "Die haben wir auch entwickelt!\p"
	.string "Ich freue mich immer, wenn ich\n"
	.string "jemanden\n"
	.string "treffe, der eines unserer Produkte\l"
	.string "benutzt.$"

RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright:
	.string "Das gestohlene Paket…\p"
	.string "Nun, es ist natürlich sehr wichtig,\n"
	.string "aber\n"
	.string "mit dem Inhalt kann niemand etwas\l"
	.string "anfangen.\p"
	.string "Meiner Einschätzung nach ist der Dieb\n"
	.string "wirklich nicht sehr schlau gewesen…$"

RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered:
	.string "Klingt, als hätten wir die gestohlenen\n"
	.string "DEVON-WAREN zurückerhalten.$"

RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter:
	.string "Tut mir Leid, aber nur autorisierte\n"
	.string "Personen haben hier Zutritt.$"

RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed:
	.string "Das ist mehr als blöd.\n"
	.string "Wie konnten wir nur ausgeraubt werden?$"

RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere:
	.string "Hi, du da!\n"
	.string "Du bist hier jederzeit willkommen!$"

RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay:
	.string "In diesem Schaukasten sind Steine und\n"
	.string "Metalle ausgestellt.\p"
	.string "Und da ist ein kleines Schild, auf dem\n"
	.string "etwas geschrieben steht…\p"
	.string "“Die DEVON CORPORATION begann\n"
	.string "ihre Erfolgsgeschichte mit der\p"
	.string "Verarbeitung von Steinen aus\n"
	.string "Steinbrüchen.\p"
	.string "Außerdem verarbeitete sie Eisenspäne,\n"
	.string "die man im Sand finden kann.\p"
	.string "Die Verarbeitung von Rohmaterialien\n"
	.string "war nur der Anfang.\p"
	.string "Heute stellt DEVON eine große Anzahl\n"
	.string "von Industrieprodukten her.”$"

RustboroCity_DevonCorp_1F_Text_ProductDisplay:
	.string "In diesem Schaukasten kann man\n"
	.string "Prototypen und Testprodukte sehen.\p"
	.string "Hier ist eine Beschreibung…\p"
	.string "“Neben der Herstellung von Industrie-\n"
	.string "produkten stellt DEVON eine Vielzahl\p"
	.string "an Gütern her, die das alltägliche\n"
	.string "Leben leichter machen.\p"
	.string "DEVON hat damit begonnen, hilfreiche\n"
	.string "Produkte für POKéMON TRAINER zu\p"
	.string "entwickeln, wie POKéBÄLLe und das\n"
	.string "POKéNAV-System.”$"


AbandonedShip_CaptainsOffice_MapScripts::
	.byte 0

AbandonedShip_CaptainsOffice_EventScript_CaptSternAide::
	lock
	faceplayer
	goto_if_set FLAG_EXCHANGED_SCANNER, AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
	checkitem ITEM_SCANNER
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner
	goto_if_set FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_2_SCANNER, AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
	msgbox AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner, MSGBOX_DEFAULT
	release
	end

AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner::
	msgbox AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner, MSGBOX_DEFAULT
	release
	end

AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus::
	msgbox AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus, MSGBOX_DEFAULT
	release
	end

AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner:
	.string "Ich untersuche das Schiff im Auftrag\n"
	.string "von KAPT. BRIGG.\p"
	.string "Er hat mich auch beauftragt, einen\n"
	.string "SCANNER zu finden, aber ich habe \l"
	.string "ihn noch nicht gefunden.$"

AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner:
	.string "Oh! Das ist der SCANNER!\p"
	.string "Würdest du den bitte für mich zu\n"
	.string "KAPT. BRIGG bringen? Das wäre nett.\p"
	.string "Ich möchte das Schiff noch weiter\n"
	.string "untersuchen.$"

AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus:
	.string "Dieses Schiff heißt MS CACTUS. Es\n"
	.string "scheint aus einer früheren Epoche zu\l"
	.string "stammen.$"


MysteryGiftScript_AuroraTicket::
	setvaddress MysteryGiftScript_AuroraTicket
	lock
	faceplayer
	vgoto_if_set FLAG_RECEIVED_AURORA_TICKET, AuroraTicket_Obtained
	vgoto_if_set FLAG_BATTLED_DEOXYS, AuroraTicket_Obtained
	checkitem ITEM_AURORA_TICKET
	vgoto_if_eq VAR_RESULT, TRUE, AuroraTicket_Obtained
	vmessage sText_AuroraTicketForYou
	waitmessage
	waitbuttonpress
	checkitemspace ITEM_AURORA_TICKET
	vgoto_if_eq VAR_RESULT, FALSE, AuroraTicket_NoBagSpace
	giveitem ITEM_AURORA_TICKET
	setflag FLAG_ENABLE_SHIP_BIRTH_ISLAND
	setflag FLAG_RECEIVED_AURORA_TICKET
	vmessage sText_AuroraTicketUseAtPort
	waitmessage
	waitbuttonpress
	release
	end

AuroraTicket_NoBagSpace:
	vmessage sText_AuroraTicketBagFull
	waitmessage
	waitbuttonpress
	release
	end

AuroraTicket_Obtained:
	vmessage sText_AuroraTicketThankYou
	waitmessage
	waitbuttonpress
	release
	end

sText_AuroraTicketForYou:
	.string "Danke, dass du das GEHEIM-\n"
	.string "GESCHEHEN benutzt hast.\p"
	.string "Du musst {PLAYER} sein.\n"
	.string "Hier ist ein Ticket für dich!$"

sText_AuroraTicketUseAtPort:
	.string "Du kannst es am Hafen von\n"
	.string "SEEGRASULB CITY einsetzen.\p"
	.string "Warum probierst du es nicht\n"
	.string "einfach aus?$"

sText_AuroraTicketThankYou:
	.string "Danke, dass du das GEHEIM-\n"
	.string "GESCHEHEN benutzt hast!$"

sText_AuroraTicketBagFull:
	.string "Oh, es tut mir Leid, {PLAYER}! Die\n"
	.string "BASIS-ITEM-TASCHE in deinem\l"
	.string "BEUTEL ist voll.\l"
	.string "Lagere etwas auf deinem PC und\l"
	.string "komme anschließend zurück.$"

MysteryGiftScript_MysticTicket::
	setvaddress MysteryGiftScript_MysticTicket
	lock
	faceplayer
	vgoto_if_set FLAG_RECEIVED_MYSTIC_TICKET, MysticTicket_Obtained
	vgoto_if_set FLAG_CAUGHT_LUGIA, MysticTicket_Obtained
	vgoto_if_set FLAG_CAUGHT_HO_OH, MysticTicket_Obtained
	checkitem ITEM_MYSTIC_TICKET
	vgoto_if_eq VAR_RESULT, TRUE, MysticTicket_Obtained
	vmessage sText_MysticTicketForYou
	waitmessage
	waitbuttonpress
	checkitemspace ITEM_MYSTIC_TICKET
	vgoto_if_eq VAR_RESULT, FALSE, MysticTicket_NoBagSpace
	giveitem ITEM_MYSTIC_TICKET
	setflag FLAG_ENABLE_SHIP_NAVEL_ROCK
	setflag FLAG_RECEIVED_MYSTIC_TICKET
	vmessage sText_MysticTicketUseAtPort
	waitmessage
	waitbuttonpress
	release
	end

MysticTicket_NoBagSpace:
	vmessage sText_MysticTicketBagFull
	waitmessage
	waitbuttonpress
	release
	end

MysticTicket_Obtained:
	vmessage sText_MysticTicketThankYou
	waitmessage
	waitbuttonpress
	release
	end

sText_MysticTicketForYou:
	.string "Danke, dass du das GEHEIM-\n"
	.string "GESCHEHEN benutzt hast.\p"
	.string "Du musst {PLAYER} sein.\n"
	.string "Hier ist ein Ticket für dich!$"

sText_MysticTicketUseAtPort:
	.string "Du kannst es am Hafen von\n"
	.string "SEEGRASULB CITY einsetzen.\p"
	.string "Warum probierst du es nicht\n"
	.string "einfach aus?$"

sText_MysticTicketThankYou:
	.string "Danke, dass du das GEHEIM-\n"
	.string "GESCHEHEN benutzt hast!$"

sText_MysticTicketBagFull:
	.string "Oh, es tut mir Leid, {PLAYER}! Die\n"
	.string "BASIS-ITEM-TASCHE in deinem\l"
	.string "BEUTEL ist voll.\l"
	.string "Lagere etwas auf deinem PC und\l"
	.string "komme anschließend zurück.$"

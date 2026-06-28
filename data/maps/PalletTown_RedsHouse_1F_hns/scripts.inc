PalletTown_RedsHouse_1F_hns_MapScripts::
	.byte 0

PalletTown_RedsHouse_1F_EventScript_Mom::
	lock
	faceplayer
	goto_if_ge VAR_TEMP_0, 1, PalletTown_RedsHouse_1F_EventScript_MomAfter
	msgbox RedsHouse_Text_Mom1, MSGBOX_DEFAULT
	closemessage
	setvar VAR_TEMP_0, 1
	release
	end

PalletTown_RedsHouse_1F_EventScript_MomAfter::
	msgbox RedsHouse_Text_Mom2, MSGBOX_DEFAULT
	closemessage
	release
	end

PalletTown_RedsHouse_1F_EventScript_TV::
	msgbox RedsHouse_Text_TV, MSGBOX_SIGN
	end

RedsHouse_Text_Mom1:
	.string "Hallo!\p"
	.string "Rot ist schon lange unterwegs.\p"
	.string "Er hat auch nicht angerufen,\n"
	.string "also weiß ich nicht, wo er ist\l"
	.string "oder was er gerade tut.\p"
	.string "Man sagt, keine Nachricht heißt,\n"
	.string "dass es ihm gut geht, aber ich\l"
	.string "mache mir trotzdem Sorgen.$"

RedsHouse_Text_Mom2:
	.string "Ich habe Angst, dass Rot sich\n"
	.string "verletzt oder krank wird, aber\l"
	.string "er ist nun mal ein Junge.\p"
	.string "Ich bin stolz, dass er das tut,\n"
	.string "was er wirklich will.$"

RedsHouse_Text_TV:
	.string "Hier laufen Programme,\n"
	.string "die man in JOHTO nicht\l"
	.string "empfangen kann…$"

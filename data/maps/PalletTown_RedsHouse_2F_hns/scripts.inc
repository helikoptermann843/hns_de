PalletTown_RedsHouse_2F_hns_MapScripts::
	.byte 0

PalletTown_RedsHouse_2F_EventScript_NES::
	msgbox RedsHouse_Text_NES, MSGBOX_SIGN
	end

PalletTown_RedsHouse_2F_EventScript_PC::
	msgbox RedsHouse_Text_PC, MSGBOX_SIGN
	end

RedsHouse_Text_NES:
	.string "{PLAYER} spielt NES.\p"
	.string "Ich sollte aufhören--keine Zeit!$"

RedsHouse_Text_PC:
	.string "Es sieht aus, als\n"
	.string "wäre er seit langer Zeit nicht mehr\l"
	.string "benutzt worden…$"

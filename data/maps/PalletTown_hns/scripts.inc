PalletTown_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_EventScript_CityEnter
	.byte 0

PalletTown_EventScript_CityEnter::
	setflag FLAG_VISITED_PALLET_TOWN
	end

PalletTown_EventScript_Woman::
	msgbox PalletTown_Text_Teacher, MSGBOX_NPC
	end
PalletTown_EventScript_Fatman::
	msgbox PalletTown_Text_Fisher, MSGBOX_NPC
	end
PalletTown_EventScript_TownSign::
	msgbox PalletTown_Text_Sign, MSGBOX_SIGN
	end	
PalletTown_EventScript_RedsHouseSign::
	msgbox PalletTown_Text_RedsHouseSign, MSGBOX_SIGN
	end
PalletTown_EventScript_BluesHouseSign::
	msgbox PalletTown_Text_BluesHouseSign, MSGBOX_SIGN
	end	
PalletTown_EventScript_OaksLabSign::
	msgbox PalletTown_Text_OaksLabSign, MSGBOX_SIGN
	end	

PalletTown_Text_Teacher:
	.string "Ich trainiere auch Pokémon. Sie\p"
	.string "dienen mir als Leibwächter.$"

PalletTown_Text_Fisher:
	.string "Die Technik ist unglaublich!\p"
	.string "Du kannst jetzt\n"
	.string "Pokémon durch die Zeit senden, wie\l"
	.string "E-Mails.$"

PalletTown_Text_Sign:
	.string "ALABASTIA\p"
	.string "Eine Stätte des\n"
	.string "Friedens und der Reinheit$"

PalletTown_Text_RedsHouseSign:
	.string "Haus von Rot$"

PalletTown_Text_OaksLabSign:
	.string "Prof.Eich's Pokémon\n"
	.string "FORSCHUNGSLABOR$"

PalletTown_Text_BluesHouseSign:
	.string "Haus von Blau$"

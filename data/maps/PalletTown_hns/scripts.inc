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
	.string "Ich trainiere auch Pokémon!\n"
	.string "Sie dienen mir als meine Leibwächter!$"

PalletTown_Text_Fisher:
	.string "Es heißt, in Johto gebe es einen Ort,\n"
	.string "an dem man mit Leuten aus aller Herren\l"
	.string "Länder seine Pokémon tauschen kann!\l"
	.string "Ein echtes Wunder der Technik…$"

PalletTown_Text_Sign:
	.string "ALABASTIA\p"
	.string "Eine Stätte des\n"
	.string "Friedens und der Reinheit$"

PalletTown_Text_RedsHouseSign:
	.string "Haus von Rot$"

PalletTown_Text_OaksLabSign:
	.string "Prof. Eichs\n"
	.string "Pokémon-Labor$"

PalletTown_Text_BluesHouseSign:
	.string "Haus von Blau$"

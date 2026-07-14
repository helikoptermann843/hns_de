CeladonCity_Apartments_1F_hns_MapScripts::
	.byte 0

CeladonCity_Apartments_1F_EventScript_Manager::
	msgbox CeladonMansion_Text_Manager, MSGBOX_NPC
	end

CeladonCity_Apartments_1F_EventScript_Sign::
	msgbox CeladonMansion_Text_ManagersSuiteSign, MSGBOX_SIGN
	end

CeladonMansion_Text_Manager:
	.string "Meine lieben Pokémon leisten mir\n"
	.string "Gesellschaft, sodass ich nie allein\l"
	.string "bin.\p"
	.string "Mauzi bringt sogar Geld nach Hause.$"

CeladonMansion_Text_ManagersSuiteSign:
	.string "PRISMANIA HOTEL MANAGER-RAUM.$"

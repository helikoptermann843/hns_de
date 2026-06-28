Gate_MahoganyTown_Route43_hns_MapScripts::
	.byte 0

Gate_MahoganyTown_Route43_EventScript_Cop::
	goto_if_ge VAR_GOLDENROD_CITY_STATE, 11, Gate_MahoganyTown_Route43_EventScript_CopAfter
	msgbox Route43MahoganyGate_Text_Officer, MSGBOX_NPC
	end

Gate_MahoganyTown_Route43_EventScript_CopAfter::
	msgbox Route43MahoganyGate_Text_Officer_RocketsCleared, MSGBOX_NPC
	end

Route43MahoganyGate_Text_Officer:
	.string "Hier kamen nur Wanderer vorbei,\p"
	.string "die auf dem Weg\n"
	.string "zum SEE DES ZORNS waren.$"

Route43MahoganyGate_Text_Officer_RocketsCleared:
	.string "In letzter Zeit\n"
	.string "geht niemand mehr zum SEE DES ZORNS.$"


Gate_SaffronCity_Route7_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SaffronCity_OnFrame
	.byte 0

Gate_SaffronCity_Route7_EventScript_Guard::
	goto_if_set FLAG_RETURNED_MACHINE_PART, Gate_SaffronCity_Route7_EventScript_GuardReturnedPart
	msgbox Route7_Text_SaffronGuard_PowerPlant, MSGBOX_NPC
	end

Gate_SaffronCity_Route7_EventScript_GuardReturnedPart::
	msgbox Route7_Text_SaffronGuard_Serious, MSGBOX_NPC
	end

Route7_Text_SaffronGuard_PowerPlant:
	.string "Anscheinend hat es im Kraftwerk\n"
	.string "einen Unfall gegeben.\p"
	.string "Es liegt östlich von hier,\n"
	.string "in der Nähe von Lavandia.$"

Route7_Text_SaffronGuard_Serious:
	.string "Ich nehme meinen Posten\n"
	.string "als Wache ernst.\p"
	.string "Hey! Du hast einen Pokédex!\l"
	.string "Alles klar, du darfst passieren!$"

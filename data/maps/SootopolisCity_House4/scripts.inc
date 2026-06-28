SootopolisCity_House4_MapScripts::
	.byte 0

SootopolisCity_House4_EventScript_Man::
	msgbox SootopolisCity_House4_Text_AncientTreasuresWaitingInSea, MSGBOX_NPC
	end

SootopolisCity_House4_EventScript_Woman::
	msgbox SootopolisCity_House4_Text_StrollUnderwaterWithPokemon, MSGBOX_NPC
	end

SootopolisCity_House4_EventScript_Azumarill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
	msgbox SootopolisCity_House4_Text_Azumarill, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SootopolisCity_House4_Text_AncientTreasuresWaitingInSea:
	.string "Hör mir zu und ich verrate dir etwas.\n"
	.string "\p"
	.string "Unter Wasser soll sich eine antike\n"
	.string "Ruine befinden.\p"
	.string "Da gibt es bestimmt Schätze, die nur\n"
	.string "darauf warten, gehoben zu werden.$"

SootopolisCity_House4_Text_StrollUnderwaterWithPokemon:
	.string "Antike Schätze…\p"
	.string "Wäre das schön, wenn es die\l"
	.string "tatsächlich\n"
	.string "gäbe. Aber auch ohne Schätze wäre eine\p"
	.string "\p"
	.string "Reise unter Wasser zusammen mit\n"
	.string "meinen POKéMON herrlich.$"

SootopolisCity_House4_Text_Azumarill:
	.string "AZUMARILL: Marurii.$"


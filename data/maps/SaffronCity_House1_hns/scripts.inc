SaffronCity_House1_hns_MapScripts::
	.byte 0

SaffronCity_House1_EventScript_MrPsychic::
	lock
	faceplayer
	goto_if_set FLAG_GOT_TM_PSYCHIC, SaffronCity_House1_EventScript_MrPsychicAfter
	msgbox MrPsychic_Text_1, MSGBOX_NPC
	giveitem ITEM_TM_PSYCHIC
	msgbox MrPsychic_Text_2, MSGBOX_NPC
	setflag FLAG_GOT_TM_PSYCHIC
	release
	end

SaffronCity_House1_EventScript_MrPsychicAfter::
	msgbox MrPsychic_Text_2, MSGBOX_NPC
	end

MrPsychic_Text_1:
	.string "… … …\p"
	.string "… … …\p"
	.string "… … …\p"
	.string "… …Ist ja schon gut!\p"
	.string "Das hier ist es, was du willst, stimmt’s?$"

MrPsychic_Text_2:
	.string "…Du weißt doch, was das ist, oder?\n"
	.string "Die TM29 enthält Psychokinese.\p"
	.string "…Mit ein bisschen Glück lässt\n"
	.string "sich damit die Spezialattacke\l"
	.string "des Gegners senken!$"

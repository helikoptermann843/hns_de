CeladonCity_House1_hns_MapScripts::
	.byte 0

CeladonCity_House1_EventScript_Chef::
	msgbox CeladonCity_House1_Text_ChefEatathon, MSGBOX_NPC
	end

CeladonCity_House1_EventScript_Fisher1::
	lock
	msgbox CeladonCity_House1_Text_Fisher1Snarfle, MSGBOX_DEFAULT
	faceplayer
	msgbox CeladonCity_House1_Text_Fisher1Concentration, MSGBOX_DEFAULT
	turnobject VAR_LAST_TALKED, DIR_WEST
	release
	end

CeladonCity_House1_EventScript_Fisher2::
	lock
	msgbox CeladonCity_House1_Text_Fisher2GulpChew, MSGBOX_DEFAULT
	faceplayer
	msgbox CeladonCity_House1_Text_Fisher2Quantity, MSGBOX_DEFAULT
	turnobject VAR_LAST_TALKED, DIR_EAST
	release
	end

CeladonCity_House1_EventScript_Fisher3::
	lock
	msgbox CeladonCity_House1_Text_Fisher3MunchMunch, MSGBOX_DEFAULT
	faceplayer
	msgbox CeladonCity_House1_Text_Fisher3GoldenrodIsBest, MSGBOX_DEFAULT
	turnobject VAR_LAST_TALKED, DIR_EAST
	release
	end

CeladonCity_House1_EventScript_Teacher::
	lock
	msgbox CeladonCity_House1_Text_TeacherCrunchCrunch, MSGBOX_DEFAULT
	faceplayer
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_House1_EventScript_TeacherCoincase
	msgbox CeladonCity_House1_Text_TeacherKeepEating, MSGBOX_DEFAULT
	turnobject VAR_LAST_TALKED, DIR_WEST
	release
	end

CeladonCity_House1_EventScript_TeacherCoincase::
	msgbox CeladonCity_House1_Text_TeacherNoCoinCase, MSGBOX_DEFAULT
	turnobject VAR_LAST_TALKED, DIR_WEST
	release
	end

CeladonCity_House1_EventScript_Sign::
	msgbox CeladonCity_House1_Text_EatathonContestPoster, MSGBOX_SIGN
	end

CeladonCity_House1_Text_ChefEatathon:
	.string "Hi!\p"
	.string "Wir veranstalten ein Wettessen.\p"
	.string "Wir können dich gerade nicht bedienen.\n"
	.string "Entschuldige.$"

CeladonCity_House1_Text_Fisher1Snarfle:
	.string "…Würg, kau…$"

CeladonCity_House1_Text_Fisher1Concentration:
	.string "Sprich nicht mit mir!\p"
	.string "Du würdest mich ablenken!$"

CeladonCity_House1_Text_Fisher2GulpChew:
	.string "…Schluck… Kau…$"

CeladonCity_House1_Text_Fisher2Quantity:
	.string "Ich nehme Menge vor Qualität!\p"
	.string "Ich bin glücklich, wenn ich satt bin!$"

CeladonCity_House1_Text_Fisher3MunchMunch:
	.string "Kau, kau…$"

CeladonCity_House1_Text_Fisher3GoldenrodIsBest:
	.string "Das Essen hier ist gut, aber\n"
	.string "in Dukatia gibt es das beste\l"
	.string "Essen überhaupt.$"

CeladonCity_House1_Text_TeacherCrunchCrunch:
	.string "Knirscher… Knirscher…$"

CeladonCity_House1_Text_TeacherNoCoinCase:
	.string "Hier wird dir niemand einen\n"
	.string "MÜNZKORB geben.\l"
	.string "Du solltest in JOHTO nachsehen.$"

CeladonCity_House1_Text_TeacherKeepEating:
	.string "Knirscher… Knirscher…\p"
	.string "Ich kann weiter essen!\p"
	.string "Mehr, CHEF!$"

CeladonCity_House1_Text_EatathonContestPoster:
	.string "Wettess-Wettbewerb! Keine\n"
	.string "Zeitbegrenzung!\p"
	.string "Ein Kampf ohne Ende! Wer am meisten\n"
	.string "isst, bekommt alles gratis!$"


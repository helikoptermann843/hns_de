PewterCity_Museum_1F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RuinsOfAlph_Lab_OnTransition
	.byte 0

PewterCity_Museum_1F_EventScript_RootFossil::
	finditem ITEM_ROOT_FOSSIL
	setflag FLAG_HIDE_PEWTER_ROOT_FOSSIL
	removeobject LOCALID_MUSEUM_ROOTFOSSIL
	end

PewterCity_Museum_1F_EventScript_ClawFossil::
	finditem ITEM_CLAW_FOSSIL
	setflag FLAG_HIDE_PEWTER_CLAW_FOSSIL
	removeobject LOCALID_MUSEUM_CLAWFOSSIL
	end

PewterCity_Museum_1F_EventScript_Receptionist::
	msgbox PewterCity_Museum_1F_Text_Recptionist, MSGBOX_NPC
	end

PewterCity_Museum_1F_EventScript_FossilWoman::
	goto_if_set FLAG_HIDE_PEWTER_CLAW_FOSSIL, PewterCity_Museum_1F_EventScript_FossilWoman2
	goto_if_set FLAG_HIDE_PEWTER_ROOT_FOSSIL, PewterCity_Museum_1F_EventScript_FossilWoman2
	goto_if_ge VAR_TEMP_2, 1, PewterCity_Museum_1F_EventScript_FossilWoman2
	msgbox PewterCity_Museum_1F_Text_FossilWoman, MSGBOX_NPC
	setvar VAR_TEMP_2, 1
	end

PewterCity_Museum_1F_EventScript_FossilWoman2::
	msgbox PewterCity_Museum_1F_Text_FossilWomanAfter, MSGBOX_NPC
	end

PewterCity_Museum_1F_EventScript_Oldman::
	msgbox PewterCity_Museum_1F_Text_Oldman, MSGBOX_NPC
	end

PewterCity_Museum_1F_EventScript_Bones::
	msgbox PewterCity_Museum_1F_Text_Bones, MSGBOX_SIGN
	end

PewterCity_Museum_1F_Text_Recptionist:
	.string "Willkommen!\p"
	.string "Zur Info: Alle großen Exponate\n"
	.string "wurden an andere Museen zur\l"
	.string "Ausstellung gebracht.\p"
	.string "Darum ist der Eintritt derzeit\n"
	.string "kostenlos!\p"
	.string "Bitte treten Sie ein.$"

PewterCity_Museum_1F_Text_FossilWoman:
	.string "Du musst ein starker Trainer sein.\p"
	.string "Wir können die Fossilien auf dem\n"
	.string "Tresen dort gut entbehren.\p"
	.string "Ein seltsamer Mann mit silbernem\n"
	.string "Haar hat viele hier abgegeben.\p"
	.string "Nimm sie ruhig, wenn du willst.$"

PewterCity_Museum_1F_Text_FossilWomanAfter:
	.string "Wir teilen oft Forschung mit\n"
	.string "den Forschern der ALPH-RUINEN.\p"
	.string "Sogar Fossilien senden wir ihnen\n"
	.string "über den PC!$"

PewterCity_Museum_1F_Text_Oldman:
	.string "Ich sollte dankbar für mein\n"
	.string "langes Leben sein.\p"
	.string "Nie hätte ich gedacht, einmal\n"
	.string "die Knochen eines Drachen zu sehen!$"

PewterCity_Museum_1F_Text_Bones:
	.string "Knochen eines uralten\n"
	.string "Drachen-Pokémon.$"

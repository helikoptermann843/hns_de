PalletTown_Lab_hns_MapScripts::
	.byte 0

PalletTown_Lab_EventScript_Oak::
	lock
	faceplayer
	call_if_unset FLAG_SYS_NATIONAL_DEX, PalletTown_Lab_EventScript_OakGiveNatDex_ForPlaytesters
	goto_if_eq VAR_PALLETTOWN_LABSTATE, 1, PalletTown_Lab_EventScript_OakBadgeCheck
	goto_if_eq VAR_PALLETTOWN_LABSTATE, 2, PalletTown_Lab_EventScript_OakDex
	msgbox PalletTown_Lab_Text_OakWelcomeKanto, MSGBOX_DEFAULT
	msgbox PalletTown_Lab_Text_OakLabGoodbye, MSGBOX_DEFAULT
	setvar VAR_PALLETTOWN_LABSTATE, 1
	goto_if_ge VAR_NUM_BADGES, 16, PalletTown_Lab_EventScript_OakBadgeCheck
	closemessage
	release
	end

PalletTown_Lab_EventScript_OakGiveNatDex_ForPlaytesters::
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	return

PalletTown_Lab_EventScript_OakBadgeCheck::
	goto_if_ge VAR_NUM_BADGES, 16, PalletTown_Lab_EventScript_Oak16Badges
	goto_if_ge VAR_NUM_BADGES, 9, PalletTown_Lab_EventScript_Oak9Badges
	msgbox PalletTown_Lab_Text_OakNoKantoBadges, MSGBOX_DEFAULT
	closemessage
	release
	end

PalletTown_Lab_EventScript_Oak16Badges::
	msgbox PalletTown_Lab_Text_OakOpenMtSilver, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_INDIGOJUNCTION_HIDE_SILVER_GUARD
	setvar VAR_PALLETTOWN_LABSTATE, 2
	call_if_unset FLAG_IS_KANTO_CHAMPION, PalletTown_Lab_EventScript_OakKantoLeague
	release
	end

PalletTown_Lab_EventScript_OakKantoLeague::
	msgbox PalletTown_Lab_Text_OakOpenIndigoPlateau, MSGBOX_DEFAULT
	closemessage
	return

PalletTown_Lab_EventScript_Oak9Badges::
	msgbox PalletTown_Lab_Text_OakYesKantoBadges, MSGBOX_DEFAULT
	closemessage
	release
	end

PalletTown_Lab_EventScript_OakDex::
	msgbox PalletTown_Lab_Text_OakLabDexCheck, MSGBOX_DEFAULT
	closemessage
	release
	end

PalletTown_Lab_EventScript_Assistant1::
	msgbox PalletTown_Lab_Text_OaksAssistant1, MSGBOX_NPC
	end

PalletTown_Lab_EventScript_Assistant2::
	msgbox PalletTown_Lab_Text_OaksAssistant2, MSGBOX_NPC
	end

PalletTown_Lab_EventScript_Assistant3::
	msgbox PalletTown_Lab_Text_OaksAssistant3, MSGBOX_NPC
	end

PalletTown_Lab_EventScript_PC::
	msgbox PalletTown_Lab_Text_OaksLabPC, MSGBOX_SIGN
	end

PalletTown_Lab_Text_OakLabDexCheck:
	.string "Wie kommst du mit dem POKéDEX voran?$"

PalletTown_Lab_Text_OakWelcomeKanto:
	.string "Eich: Ah, {PLAYER}!\n"
	.string "Schön, dass du den weiten Weg\l"
	.string "nach KANTO auf dich genommen hast.\p"
	.string "Was hältst du von den Trainern\n"
	.string "hier? Ziemlich hart, oder?$"

PalletTown_Lab_Text_OakLabGoodbye:
	.string "Wenn du in der Nähe bist,\n"
	.string "besuch mich doch wieder.$"

PalletTown_Lab_Text_OakOpenMtSilver:
	.string "Eich: Wow! Hervorragend!\p"
	.string "Du hast alle ARENAORDEN\n"
	.string "in KANTO gesammelt. Gut gemacht!\p"
	.string "Meine Einschätzung von dir\n"
	.string "war also richtig.\p"
	.string "Weißt du was, {PLAYER}?\n"
	.string "Ich treffe Vorkehrungen, damit\l"
	.string "du zum SILBERBERG kannst.\p"
	.string "Der SILBERBERG ist ein riesiger\n"
	.string "Berg voller wilder POKéMON.\p"
	.string "Er ist für normale Trainer zu\n"
	.string "gefährlich und daher gesperrt.\p"
	.string "Doch für dich machen wir eine\n"
	.string "Ausnahme, {PLAYER}.\p"
	.string "Geh zum INDIGO PLATEAU.\n"
	.string "Von dort erreichst du den\l"
	.string "SILBERBERG.$"

PalletTown_Lab_Text_OakOpenIndigoPlateau:
	.string "Oh, und wo wir vom INDIGO\n"
	.string "PLATEAU, reden, jetzt wo du\l"
	.string "16 orden hast wird die LIGA\l"
	.string "bereit sein dich erneut\l"
	.string "antreten zu lassen.\p"
	.string "Sei gewarnt, Siegfried und\n"
	.string "seine Top-Vier werden dich\l"
	.string "mit voller Härte angehen.\p"
	.string "Viel Glück, {PLAYER}!$"

PalletTown_Lab_Text_OakNoKantoBadges:
	.string "Eich: Hm? Du sammelst keine\n"
	.string "KANTO-ARENAORDEN?\p"
	.string "Die ARENALEITER in KANTO sind\n"
	.string "genauso stark wie die in JOHTO.\p"
	.string "Ich empfehle dir, sie\n"
	.string "herauszufordern.$"

PalletTown_Lab_Text_OakYesKantoBadges:
	.string "Eich: Ah, du sammelst also\n"
	.string "KANTO-ARENAORDEN.\p"
	.string "Das ist sicher schwer, aber die\n"
	.string "Erfahrung wird dir helfen.\p"
	.string "Komm zu mir, wenn du alle hast.\p"
	.string "Ich habe dann ein Geschenk für dich.\p"
	.string "Bleib dran, {PLAYER}!$"

PalletTown_Lab_Text_OaksAssistant1:
	.string "Die Radiosendung POKéMON TALK\n"
	.string "des PROFs wird in KANTO nicht\l"
	.string "ausgestrahlt.\p"
	.string "Schade, ich würde sie gern hören.$"

PalletTown_Lab_Text_OaksAssistant2:
	.string "Dank deiner Arbeit am POKéDEX\n"
	.string "macht die Forschung des PROFs\l"
	.string "große Fortschritte.$"

PalletTown_Lab_Text_OaksAssistant3:
	.string "Sag es niemandem weiter, aber\n"
	.string "POKéMON TALK von PROF.Eich ist\l"
	.string "keine Live-Sendung.$"

PalletTown_Lab_Text_OaksLabPC:
	.string "Auf dem PC ist eine E-Mail.\p"
	.string "…\p"
	.string "PROF.Eich, wie läuft deine\n"
	.string "Forschung?\p"
	.string "Ich arbeite weiterhin fleißig.\p"
	.string "Ich hörte Gerüchte, dass {PLAYER}\n"
	.string "ziemlich bekannt geworden ist.\p"
	.string "Das freut mich sehr zu hören.\p"
	.string "LIND aus NEUBORKIA 8-)$"

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
	.string "Wie kommst du mit dem Pokédex voran?$"

PalletTown_Lab_Text_OakWelcomeKanto:
	.string "Eich: Oh, {PLAYER}!\n"
	.string "Danke, dass du den weiten Weg bis hier\l"
	.string "nach Kanto auf dich genommen hast!\p"
	.string "Na? \n"
	.string "Was hältst du von den Trainern hier?\l"
	.string "Ziemlich stark, was?$"

PalletTown_Lab_Text_OakLabGoodbye:
	.string "Schau ruhig mal wieder vorbei,\n"
	.string "wenn du in der Gegend bist!$"

PalletTown_Lab_Text_OakOpenMtSilver:
	.string "Eich: Wow! Hervorragend!\p"
	.string "Du hast alle Arenaorden\n"
	.string "in Kanto gesammelt. Gut gemacht!\p"
	.string "Meine Einschätzung von dir\n"
	.string "war also richtig.\p"
	.string "Weißt du was, {PLAYER}?\n"
	.string "Ich treffe Vorkehrungen, damit\l"
	.string "du zum Silberberg kannst.\p"
	.string "Der Silberberg ist ein riesiger\n"
	.string "Berg voller wilder Pokémon.\p"
	.string "Er ist für normale Trainer zu\n"
	.string "gefährlich und daher gesperrt.\p"
	.string "Doch für dich machen wir eine\n"
	.string "Ausnahme, {PLAYER}.\p"
	.string "Geh zum Indigo Plateau.\n"
	.string "Von dort erreichst du den\l"
	.string "Silberberg.$"

PalletTown_Lab_Text_OakOpenIndigoPlateau:
	.string "Oh, und wo wir vom Indigo\n"
	.string "Plateau, reden, jetzt wo du\l"
	.string "16 orden hast wird die Liga\l"
	.string "bereit sein dich erneut\l"
	.string "antreten zu lassen.\p"
	.string "Sei gewarnt, Siegfried und\n"
	.string "seine Top-Vier werden dich\l"
	.string "mit voller Härte angehen.\p"
	.string "Viel Glück, {PLAYER}!$"

PalletTown_Lab_Text_OakNoKantoBadges:
	.string "Eich: Hm?\n"
	.string "Offensichtlich hast du hier in Kanto\l"
	.string "noch keinen Orden erhalten.\p"
	.string "Die Arenaleiter in Kanto brauchen sich\n"
	.string "nicht vor denen aus Johto verstecken!\l"
	.string "Sie sind alle ernstzunehmende Gegner!\p"
	.string "Aber das hält dich natürlich nicht davon\n"
	.string "ab, sie herauszufordern, oder?$"

PalletTown_Lab_Text_OakYesKantoBadges:
	.string "Eich: Ah, wie ich sehe, erkämpfst du dir\n"
	.string "nach und nach auch die Orden der\l"
	.string "Arenaleiter von Kanto!\p"
	.string "Es ist sicher kein leichtes Unterfangen,\n"
	.string "aber du sammelst dabei bestimmt viele\l"
	.string "wertvolle Erfahrungen.\p"
	.string "Besuche mich wieder, wenn du dir hier\n"
	.string "auch alle Orden erkämpft hast!\l"
	.string "Ein Geschenk wird auf dich warten!\p"
	.string "Halte die Ohren steif, {PLAYER}!$"

PalletTown_Lab_Text_OaksAssistant1:
	.string "Die Radiosendung Pokémon Talk\n"
	.string "des Profs wird in Kanto nicht\l"
	.string "ausgestrahlt.\p"
	.string "Schade, ich würde sie gern hören.$"

PalletTown_Lab_Text_OaksAssistant2:
	.string "Dank deiner Arbeit am Pokédex\n"
	.string "macht die Forschung des Profs\l"
	.string "große Fortschritte.$"

PalletTown_Lab_Text_OaksAssistant3:
	.string "Sag es niemandem weiter, aber\n"
	.string "Pokémon Talk von Prof.Eich ist\l"
	.string "keine Live-Sendung.$"

PalletTown_Lab_Text_OaksLabPC:
	.string "Auf dem PC ist eine E-Mail.\p"
	.string "…\p"
	.string "Prof.Eich, wie läuft deine\n"
	.string "Forschung?\p"
	.string "Ich arbeite weiterhin fleißig.\p"
	.string "Ich hörte Gerüchte, dass {PLAYER}\n"
	.string "ziemlich bekannt geworden ist.\p"
	.string "Das freut mich sehr zu hören.\p"
	.string "Lind aus Neuborkia 8-)$"

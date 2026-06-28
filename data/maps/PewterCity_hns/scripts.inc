PewterCity_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_EventScript_CityEnter
	.byte 0

PewterCity_EventScript_CityEnter::
	setflag FLAG_VISITED_PEWTER_CITY
	end

PewterCity_EventScript_CooltrainerF::
	msgbox PewterCity_Text_CooltrainerF, MSGBOX_NPC
	end

PewterCity_EventScript_BugCatcher::
	msgbox PewterCity_Text_BugCatcher, MSGBOX_NPC
	end

PewterCity_EventScript_Gramps::
	lock
	faceplayer
	goto_if_eq VAR_LUGIA_OR_HOOH, 1, PewterCity_EventScript_GrampsRainbowWing
	goto_if_eq VAR_LUGIA_OR_HOOH, 2, PewterCity_EventScript_GrampsSilverWing
	end

PewterCity_EventScript_GrampsRainbowWing::
	checkitem ITEM_RAINBOW_WING
	goto_if_eq VAR_RESULT, TRUE, PewterCity_EventScript_GrampsDone
	msgbox PewterCity_Text_Gramps, MSGBOX_DEFAULT
	setvar VAR_COMPLETED_HO_OH, 4
	giveitem ITEM_RAINBOW_WING
	setflag FLAG_HIDE_TINTOWER_GUARD
	closemessage
	release
	end

PewterCity_EventScript_GrampsSilverWing::
	checkitem ITEM_SILVER_WING
	goto_if_eq VAR_RESULT, TRUE, PewterCity_EventScript_GrampsDone
	msgbox PewterCity_Text_Gramps, MSGBOX_DEFAULT
	setvar VAR_COMPLETED_LUGIA, 4
	giveitem ITEM_SILVER_WING
	setflag FLAG_HIDE_WHIRL_ISLANDS_TENTACRUEL
	closemessage
	release
	end

PewterCity_EventScript_GrampsDone::
	msgbox PewterCity_Text_Gramps_GotSilverWing, MSGBOX_DEFAULT
	closemessage
	release
	end

PewterCity_EventScript_Bugcatcher::
	msgbox PewterCity_Text_BugCatcher, MSGBOX_NPC
	end

PewterCity_EventScript_Cooltrainer::
	msgbox PewterCity_Text_CooltrainerF, MSGBOX_NPC
	end

PewterCity_Text_CooltrainerF:
	.string "Warst du schon in\n"
	.string "der PKMN-ARENA von MARMORIA CITY?\p"
	.string "Der LEITER dort\n"
	.string "verwendet GesteinPokémon.$"

PewterCity_Text_BugCatcher:
	.string "NACHTs spielen PIEPI beim MONDBERG.\p"
	.string "Aber nicht in jeder Nacht.$"

PewterCity_Text_Gramps:
	.string "Oh, du bist den\n"
	.string "ganzen Weg  von JOHTO bis hierher\n"
	.string "gekommen?\p"
	.string "Das weckt Erinnerungen. Als\p"
	.string "ich noch jung war,\n"
	.string "habe ich in JOHTO oft trainiert.\p"
	.string "Du erinnerst mich an mich\p"
	.string "selbst als junger Mann.\p"
	.string "Hier. Ich möchte,\n"
	.string "dass du dieses Item, das ich in JOHTO\l"
	.string "fand, behältst.$"

PewterCity_Text_Gramps_GotSilverWing:
	.string "Neue und un-\n"
	.string "bekannte Orte zu erforschen und fremde\n"
	.string "Menschen kennen zu lernen…\p"
	.string "Das ist das Schöne am Reisen.$"

PewterCity_EventScript_CitySign::
	msgbox PewterCity_Text_Sign, MSGBOX_NPC
	end

PewterCity_EventScript_GymSign::
	msgbox PewterCity_Text_GymSign, MSGBOX_NPC
	end

PewterCity_EventScript_MuseumSign::
	msgbox PewterCity_Text_MuseumSign, MSGBOX_NPC
	end

PewterCity_EventScript_MtMoonSign::
	msgbox PewterCity_Text_MtMoonGiftShopSign, MSGBOX_NPC
	end

PewterCity_EventScript_WelcomeSign::
	msgbox PewterCity_Text_WelcomeSign, MSGBOX_NPC
	end

PewterCity_Text_Sign:
	.string "MARMORIA CITY Eine Steingraue Stadt$"

PewterCity_Text_GymSign:
	.string "MARMORIA CITY Eine Steingraue Stadt$"

PewterCity_Text_MuseumSign:
	.string "Hier ist eine Nachricht…\p"
	.string "MARMORIAS MUSEUM\n"
	.string "DER WISSENSCHAFT ist wegen\l"
	.string "Renovierungsarbeiten geschlossen…$"

PewterCity_Text_MtMoonGiftShopSign:
	.string "Hier ist eine Nachricht…\p"
	.string "SOUVENIRLADEN AM\n"
	.string "MONDBERG Jetzt geöffnet!$"

PewterCity_Text_WelcomeSign:
	.string "Willkommen in MARMORIA CITY!$"


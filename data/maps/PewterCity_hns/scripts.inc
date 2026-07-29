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
	.string "Warst du schon in der Arena\n"
	.string "von Marmoria City?\p"
	.string "Der Leiter dort verwendet\n"
	.string "Gestein-Pokémon!$"

PewterCity_Text_BugCatcher:
	.string "Nachts spielen Piepi beim Mondberg.\n"
	.string "Aber scheinbar nicht in jeder Nacht!$"

PewterCity_Text_Gramps:
	.string "Oh, du bist den ganzen Weg von\n"
	.string "Johto bis hierher gekommen!\p"
	.string "Als ich noch jung war, habe ich auch\n"
	.string "eine Trainingsreise nach Johto\l"
	.string "unternommen. Du erinnerst mich\l"
	.string "an mich selbst als junger Mann…\p"
	.string "Hier, dieses Item habe ich damals in\n"
	.string "Johto gefunden. Es gehört dir.$"

PewterCity_Text_Gramps_GotSilverWing:
	.string "Neue und unbekannte Orte zu\n"
	.string "erforschen und fremde Menschen\l"
	.string "kennenzulernen…\p"
	.string "Das ist das Schöne am Reisen!$"

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
	.string "Marmoria City Eine Steingraue Stadt$"

PewterCity_Text_GymSign:
	.string "Pokémon-Arena von Marmoria City\n"
	.string "Leiter: Rocko\l"
	.string "Der felsenharte Pokémon-Trainer$"

PewterCity_Text_MuseumSign:
	.string "Hier ist eine Nachricht…\p"
	.string "Marmorias Museum\n"
	.string "Der Wissenschaft ist wegen\l"
	.string "Renovierungsarbeiten geschlossen…$"

PewterCity_Text_MtMoonGiftShopSign:
	.string "Hier ist eine Nachricht…\p"
	.string "Souvenirladen am\n"
	.string "Mondberg Jetzt geöffnet!$"

PewterCity_Text_WelcomeSign:
	.string "Willkommen in Marmoria City!$"


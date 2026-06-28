FuchsiaCity_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_EventScript_CityEnter
	.byte 0

FuchsiaCity_OnFrame::
	map_script_2 VAR_FUCHSIA_CITY_STATE, 0,  FuchsiaCity_EventScript_BaobaCall
	.2byte 0

FuchsiaCity_EventScript_CityEnter::
	setflag FLAG_VISITED_FUCHSIA_CITY
	end

FuchsiaCity_EventScript_BaobaCall::
	pokenavcall FuchsiaCity_Text_Baoba
	waitmessage
	delay 30
	setvar VAR_BAOBA_QUEST_STATE, 1
	setvar VAR_FUCHSIA_CITY_STATE, 1
	end

FuchsiaCity_Text_Baoba:
	.string "AUFSEHER Baoba: {PLAYER}!\p"
	.string "Ich bin AUFSEHER Baoba.\p"
	.string "Etwas Schreckliches ist passiert!\l"
	.string "Meine alte Safari-Zone in Fuchsania\n"
	.string "City wurde aufgekauft und wieder\p"
	.string "eröffnet!\p"
	.string "Und anscheinend gibt es neue,\n"
	.string "exotische Pokémon!\p"
	.string "Das schadet meinem Geschäft!\p"
	.string "{PLAYER}, du musst in die neue\n"
	.string "Safari-Zone gehen und ein Pokémon\n"
	.string "fangen, um es mir zu zeigen.\l"
	.string "Ich muss über diese 'exotischen'\l"
	.string "Pokémon Bescheid wissen.\p"
	.string "Bitte {PLAYER}, mein Geschäft hängt\n"
	.string "von dir ab!$"

FuchsiaCity_EventScript_Dratini::
	lock
	showmonpic SPECIES_DRATINI, 10, 3
	delay 60
	hidemonpic
	release
	end
FuchsiaCity_EventScript_Kangaskhan::
	lock
	showmonpic SPECIES_KANGASKHAN, 10, 3
	delay 60
	hidemonpic
	release
	end
FuchsiaCity_EventScript_Cubone::
	lock
	showmonpic SPECIES_CUBONE, 10, 3
	delay 60
	hidemonpic
	release
	end
FuchsiaCity_EventScript_Omanyte::
	lock
	showmonpic SPECIES_OMANYTE, 10, 3
	delay 60
	hidemonpic
	release
	end
FuchsiaCity_EventScript_Kabuto::
	lock
	showmonpic SPECIES_KABUTO, 10, 3
	delay 60
	hidemonpic
	release
	end

FuchsiaCity_EventScript_Youngster::
	msgbox FuchsiaCity_Text_Youngster, MSGBOX_NPC
	end

FuchsiaCity_EventScript_PokefanM::
	msgbox FuchsiaCity_Text_PokefanM, MSGBOX_NPC
	end

FuchsiaCity_EventScript_Teacher::
	msgbox FuchsiaCity_Text_Teacher, MSGBOX_NPC
	end

FuchsiaCity_EventScript_CitySign::
	msgbox FuchsiaCity_Text_Sign, MSGBOX_SIGN
	end

FuchsiaCity_EventScript_GymSign::
	msgbox FuchsiaCity_Text_GymSign, MSGBOX_SIGN
	end

FuchsiaCity_EventScript_SafariZone::
	msgbox FuchsiaCity_Text_SafariZone, MSGBOX_NPC
	end

FuchsiaCity_Text_Youngster:
	.string "Einer der TOP VIER war früher einmal\p"
	.string "der ARENALEITER in FUCHSANIA CITY.$"

FuchsiaCity_Text_PokefanM:
	.string "KOGAs Tochter ist\n"
	.string "jetzt ARENALEITERIN, nachdem\p"
	.string "ihr Vater den TOP\n"
	.string "VIER beigetreten ist.$"

FuchsiaCity_Text_Teacher:
	.string "Schade, dass die SAFARI-ZONE\p"
	.string "geschlossen ist…\n"
	.string "Das ist schließlich FUCHSANIAs\l"
	.string "Hauptattraktion.$"

FuchsiaCity_Text_Sign:
	.string "FUCHSANIA CITY\p"
	.string "Sieh nur! Die Rosarote Lieblichkeit!$"

FuchsiaCity_Text_GymSign:
	.string "Fuchsania City Pokémon Arena\n"
	.string "Leiter: Janina\p"
	.string "Giftige Ninja-Meisterin$"

FuchsiaCity_Text_SafariZoneOfficeSign:
	.string "Hier ist eine Notiz…\p"
	.string "Safari-Zone Büro bis auf\n"
	.string "weiteres geschlossen.$"

FuchsiaCity_Text_SafariZone:
	.string "Safari-Zone NEUER EIGENTÜMER\l"
	.string "DEVON CORP.$"

FuchsiaCity_Text_SafariZoneClosedSign:
	.string "Der Aufseher ist auf Reisen.\p"
	.string "Deshalb ist die Safari-Zone\n"
	.string "geschlossen.$"

FuchsiaCity_Text_NoLitteringSign:
	.string "Keine Umweltverschmutzung!\p"
	.string "Bitte nimm deinen Müll mit.$"


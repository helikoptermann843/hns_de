SaffronCity_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_EventScript_CityEnter
	.byte 0

SaffronCity_OnFrame::
	map_script_2 VAR_SAFFRON_CITY_STATE, 0,  SaffronCity_EventScript_BaobaCall
	.2byte 0

SaffronCity_EventScript_CityEnter::
	setflag FLAG_VISITED_SAFFRON_CITY
	end

SaffronCity_EventScript_BaobaCall::
	lock
	setspeaker SaffronCity_Text_BaobaName
	pokenavcall SaffronCity_Text_Baoba
	waitmessage
	delay 30
	setflag FLAG_SAFARI_ZONE_EAST_EXPANSION
	setvar VAR_SAFFRON_CITY_STATE, 1
	release
	end

SaffronCity_Text_BaobaName:
	.string "Baoba$"

SaffronCity_Text_Baoba:
	.string "Wärter Baoba: {PLAYER}!\p"
	.string "Hier ist Wärter Baoba.\p"
	.string "Ich ruf an, um dir zu sagen,\n"
	.string "dass die Safarizone wieder\l"
	.string "gewachsen ist!\p"
	.string "Endlich ist meine Safarizone\n"
	.string "vollständig!\p"
	.string "Du weißt noch, wo sie ist,\n"
	.string "oder?\p"
	.string "Direkt westlich von\n"
	.string "Anemonia City!\l"
	.string "Bis bald!$"

SaffronCity_EventScript_Lass1A::
	goto_if_set FLAG_RETURNED_MACHINE_PART, SaffronCity_EventScript_Lass1B
	msgbox SaffronCity_Text_Lass1, MSGBOX_NPC
	end

SaffronCity_EventScript_Lass1B::
	msgbox SaffronCity_Text_Lass1_ReturnedPart, MSGBOX_NPC
	end

SaffronCity_EventScript_Lass2::
	msgbox SaffronCity_Text_Lass2, MSGBOX_NPC
	end

SaffronCity_EventScript_PokefanM::
	goto_if_set FLAG_RETURNED_MACHINE_PART, SaffronCity_EventScript_PokefanM2
	msgbox SaffronCity_Text_PokefanM, MSGBOX_NPC
	end

SaffronCity_EventScript_PokefanM2::
	msgbox SaffronCity_Text_PokefanM_ReturnedPart, MSGBOX_NPC
	end

SaffronCity_EventScript_CooltrainerM::
	msgbox SaffronCity_Text_CooltrainerM, MSGBOX_NPC
	end

SaffronCity_EventScript_CooltrainerF::
	msgbox SaffronCity_Text_CooltrainerF, MSGBOX_NPC
	end

SaffronCity_EventScript_Fisher::
	goto_if_set FLAG_RETURNED_MACHINE_PART, SaffronCity_EventScript_Fisher2
	msgbox SaffronCity_Text_Fisher, MSGBOX_NPC
	end

SaffronCity_EventScript_Fisher2::
	msgbox SaffronCity_Text_Fisher_ReturnedPart, MSGBOX_NPC
	end

SaffronCity_EventScript_Youngster1::
	msgbox SaffronCity_Text_Youngster1, MSGBOX_NPC
	end

SaffronCity_EventScript_Youngster2::
	msgbox SaffronCity_Text_Youngster2, MSGBOX_NPC
	end
SaffronCity_EventScript_CitySign::
	msgbox SaffronCity_Text_Sign, MSGBOX_SIGN
	end

SaffronCity_EventScript_GymSign::
	msgbox SaffronCity_Text_GymSign, MSGBOX_SIGN
	end

SaffronCity_EventScript_DojoSign::
	msgbox SaffronCity_Text_FightingDojoSign, MSGBOX_SIGN
	end

SaffronCity_EventScript_SilphCoSign::
	msgbox SaffronCity_Text_SilphCoSign, MSGBOX_SIGN
	end

SaffronCity_EventScript_MrPsychicSign::
	msgbox SaffronCity_Text_MrPsychicHouseSign, MSGBOX_SIGN
	end

SaffronCity_EventScript_MagnetTrainSign::
	msgbox SaffronCity_Text_MagnetTrainStationSign, MSGBOX_SIGN
	end

SaffronCity_EventScript_Elli::
	msgbox SaffronCity_Text_Elli, MSGBOX_NPC
	end

SaffronCity_Text_Elli:
	.string "Ich liebe Vulpix! :D$"

SaffronCity_Text_Lass1:
	.string "Hier lebt ein kleines Mädchen,\n"
	.string "das hervorragend Menschen nachahmt.\p"
	.string "Sie imitiert sogar Menschen, mit\n"
	.string "denen sie sich gerade unterhält.\p"
	.string "Das ist sehr verwirrend.$"

SaffronCity_Text_Lass1_ReturnedPart:
	.string "Die junge Nachahmerin hat ihre\n"
	.string "geliebte Poképuppe verloren, eine\l"
	.string "Nachbildung eines Piepi. Das scheint\l"
	.string "sie sehr mitzunehmen…$"

SaffronCity_Text_PokefanM:
	.string "Du bist von Johto hergekommen?\p"
	.string "Wenn der Magnetzug\n"
	.string "läuft, bist du ganz schnell wieder zu\l"
	.string "Hause.$"

SaffronCity_Text_PokefanM_ReturnedPart:
	.string "Du kommst aus Johto?\p"
	.string "Mit dem Magnetzug gelangst du\n"
	.string "schneller zurück nach Johto als du\l"
	.string "“Schwupps!” sagen kannst!$"

SaffronCity_Text_CooltrainerM:
	.string "Als ich die Pokémon-Arena betreten\n"
	.string "habe, war ich wild entschlossen, mir ein\l"
	.string "paar fremde Trainer vorzuknöpfen…\p"
	.string "Aber ich musste mir ausgerechnet diese\n"
	.string "verlassene Arena dafür aussuchen…\l"
	.string "Mann, ist mir das peinlich…$"

SaffronCity_Text_CooltrainerF:
	.string "Das ist die Silph Co., berühmt für\n"
	.string "ihre Pokémon-Artikel!\p"
	.string "Deshalb hatte es vor einiger Zeit\n"
	.string "auch Team Rocket auf sie abgesehen.$"

SaffronCity_Text_Fisher:
	.string "Mampf… Mampf…\p"
	.string "Wie ich höre,\n"
	.string "braut sich da etwas im Kraftwerk\l"
	.string "zusammen.\p"
	.string "Mampf… Mampf…$"

SaffronCity_Text_Fisher_ReturnedPart:
	.string "Mampf… Mampf…\p"
	.string "Wie ich höre,\n"
	.string "braute sich da etwas im Kraftwerk\l"
	.string "zusammen.\p"
	.string "Mampf… Mampf… Aah, ich bin satt!$"

SaffronCity_Text_Youngster1:
	.string "Ich bin immer aufgeregt, wenn ich das\n"
	.string "erste Mal einen neuen Gang betrete!$"

SaffronCity_Text_Youngster2:
	.string "In Vertania City gibt es ein Trainer-\n"
	.string "Haus, wo sich Pokémon-Trainer\l"
	.string "aus der ganzen Welt treffen.$"

SaffronCity_Text_Lass2:
	.string "Über unsere Stadt wurde mal\n"
	.string "im Radio berichtet!\p"
	.string "Ich freue mich zwar über das Lob\n"
	.string "für meine Heimatstadt, aber es\l"
	.string "ist mir auch ein klein wenig peinlich.$"

SaffronCity_Text_Sign:
	.string "Saffronia City\p"
	.string "Golden Schimmernde Stadt des Handels$"

SaffronCity_Text_GymSign:
	.string "Saffronia City Pokémon-Arena\n"
	.string "Arenaleiterin: Sabrina\l"
	.string "Die Herrin der Psycho-Pokémon!$"

SaffronCity_Text_FightingDojoSign:
	.string "Willkommen im Karate Dojo!$"

SaffronCity_Text_SilphCoSign:
	.string "Silph Co. Bürogebäude$"

SaffronCity_Text_MrPsychicHouseSign:
	.string "Mr. Psychos Haus$"

SaffronCity_Text_MagnetTrainStationSign:
	.string "Saffronia City, Bahnhof für die Magnet-\n"
	.string "zugstrecke zwischen Kanto und Johto$"

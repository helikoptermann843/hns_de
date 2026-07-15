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
	setspeaker SaffronCity_Text_BaobaName
	pokenavcall SaffronCity_Text_Baoba
	waitmessage
	delay 30
	setflag FLAG_SAFARI_ZONE_EAST_EXPANSION
	setvar VAR_SAFFRON_CITY_STATE, 1
	end

SaffronCity_Text_BaobaName:
	.string "BAOBA$"

SaffronCity_Text_Baoba:
	.string "WÄRTER BAOBA: {PLAYER}!\p"
	.string "Hier ist WÄRTER BAOBA.\p"
	.string "Ich ruf an, um dir zu sagen,\n"
	.string "dass die SAFARIZONE wieder\l"
	.string "gewachsen ist!\p"
	.string "Endlich ist meine SAFARIZONE\n"
	.string "vollständig!\p"
	.string "Du weißt noch, wo sie ist,\n"
	.string "oder?\p"
	.string "Direkt westlich von\n"
	.string "ANEMONIA!\l"
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
	.string "Die NACHAHMERIN sieht unglücklich\p"
	.string "aus. Sie hat ihre\n"
	.string "Lieblings-- PUPPE - PIEPI - verloren.$"

SaffronCity_Text_PokefanM:
	.string "Du bist von JOHTO hergekommen?\p"
	.string "Wenn der MAGNETZUG\n"
	.string "läuft, bist du ganz schnell wieder zu\l"
	.string "Hause.$"

SaffronCity_Text_PokefanM_ReturnedPart:
	.string "Du kommst aus JOHTO?\p"
	.string "Mit dem MAGNETZUG\n"
	.string "bist du ganz schnell wieder zu Hause.$"

SaffronCity_Text_CooltrainerM:
	.string "Ich ging zur PKMN-\n"
	.string "ARENA, weil ich unbedingt kämpfen\l"
	.string "wollte…\p"
	.string "Wie sich herausstellte, bin ich\n"
	.string "ausgerechnet in der verlassenen\p"
	.string "PKMN-ARENA gelandet.\p"
	.string "War mir das peinlich!$"

SaffronCity_Text_CooltrainerF:
	.string "Das ist die SILPH\n"
	.string "CO., berühmt für ihre PokémonArtikel.\p"
	.string "TEAM ROCKET wollte sie wegen dieser\n"
	.string "Waren für sich nutzen.$"

SaffronCity_Text_Fisher:
	.string "Mampf… Mampf…\p"
	.string "Wie ich höre,\n"
	.string "braut sich da etwas im KRAFTWERK\l"
	.string "zusammen.\p"
	.string "Mampf… Mampf…$"

SaffronCity_Text_Fisher_ReturnedPart:
	.string "Mampf… Mampf…\p"
	.string "Wie ich höre,\n"
	.string "braute sich da etwas im KRAFTWERK\l"
	.string "zusammen.\p"
	.string "Mampf… Mampf… Aah, ich bin satt!$"

SaffronCity_Text_Youngster1:
	.string "Ich finde es unheimlich, wenn\n"
	.string "ich zum ersten Mal\l"
	.string "einen engen Gang betrete.$"

SaffronCity_Text_Youngster2:
	.string "In VERTANIA CITY gibt es ein HAUS\n"
	.string "für TRAINER. Dort treffen sich\l"
	.string "Trainer der ganzen Welt.$"

SaffronCity_Text_Lass2:
	.string "Über unsere Stadt\n"
	.string "wurde mal im Radio berichtet.\p"
	.string "Es ist schön, dass für deine Stadt\n"
	.string "geworben wird.\p"
	.string "Aber es ist auch ein bisschen\n"
	.string "peinlich.$"

SaffronCity_Text_Sign:
	.string "SAFFRONIA CITY\p"
	.string "Golden Schimmernde Stadt des Handels$"

SaffronCity_Text_GymSign:
	.string "SAFFRONIA CITY\p"
	.string "Golden Schimmernde Stadt des Handels$"

SaffronCity_Text_FightingDojoSign:
	.string "Jeder Willkommen!\n"
	.string "Kampf DOJO$"

SaffronCity_Text_SilphCoSign:
	.string "SILPH CO.\p"
	.string "BÜROGEBÄUDE$"

SaffronCity_Text_MrPsychicHouseSign:
	.string "MR.Psychokinese's HAUS$"

SaffronCity_Text_MagnetTrainStationSign:
	.string "SAFFRONIA CITY MAGNETZUGBAHNHOF$"

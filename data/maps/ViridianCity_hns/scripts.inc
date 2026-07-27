ViridianCity_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_EventScript_CityEnter
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ViridianCity_OnFrame
	.byte 0

ViridianCity_EventScript_CityEnter::
	setflag FLAG_VISITED_VIRIDIAN_CITY
	end

ViridianCity_OnFrame::
	map_script_2 VAR_OAK_MT_SILVER_CALL, 1, ViridianCity_EventScript_OakCall
	.2byte 0

ViridianCity_EventScript_OakCall::
	lock
	setspeaker ViridianCity_Text_OakName
	pokenavcall ViridianCity_Text_OakCall
	waitmessage
	delay 30
	setvar VAR_OAK_MT_SILVER_CALL, 2
	release
	end

ViridianCity_Text_OakName:
	.string "OAK$"

ViridianCity_Text_OakCall:
	.string "EICH: Ah, {PLAYER}!\p"
	.string "Komm und besuche mich\n"
	.string "im Labor in Alabastia\l"
	.string "wenn du Zeit hast.$"

ViridianCity_EventScript_Gramps::
	lock
	faceplayer
	msgbox ViridianCity_Text_CoffeeGramps_Question, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, ViridianCity_EventScript_GrampsDoubted
	msgbox ViridianCity_Text_CoffeeGramps_Believed, MSGBOX_DEFAULT
	closemessage
	release
	end

ViridianCity_EventScript_GrampsDoubted::
	msgbox ViridianCity_Text_CoffeeGramps_Doubted, MSGBOX_DEFAULT
	closemessage
	release
	end

VirianCity_EventScript_GymGramps::
	goto_if_set FLAG_HIDE_CINNABAR_BLUE, VirianCity_EventScript_GymGrampsBlue
	msgbox ViridianCity_Text_GrampsNearGym, MSGBOX_NPC
	end

VirianCity_EventScript_GymGrampsBlue::
	msgbox ViridianCity_Text_GrampsNearGym_BlueReturned, MSGBOX_NPC
	end

ViridianCity_EventScript_Fisher::
	goto_if_set FLAG_GOT_VIRIDIAN_TM_DREAM_EATER, ViridianCity_EventScript_FisherAfter
	msgbox ViridianCity_Text_DreamEaterFisher, MSGBOX_NPC
	giveitem ITEM_TM_DREAM_EATER
	setflag FLAG_GOT_VIRIDIAN_TM_DREAM_EATER
	end

ViridianCity_EventScript_FisherAfter::
	msgbox ViridianCity_Text_DreamEaterFisher_GotTM, MSGBOX_NPC
	end

ViridianCity_EventScript_Youngster::
	msgbox ViridianCity_Text_Youngster, MSGBOX_NPC
	end

ViridianCity_EventScript_CitySign::
	msgbox ViridianCity_Text_WelcomeSign, MSGBOX_SIGN
	end

ViridianCity_EventScript_CitySign2::
	msgbox ViridianCity_Text_Sign, MSGBOX_SIGN
	end

ViridianCity_EventScript_GymSign::
	msgbox ViridianCity_Text_GymSign, MSGBOX_SIGN
	end

ViridianCity_Text_CoffeeGramps_Question:
	.string "Hey, du da! Krächz… warte mal!\n"
	.string "Hör mir gefälligst zu!\p"
	.string "Ich sehe vielleicht alt aus, aber als\n"
	.string "ich noch jung war, war ich eine ziemlich\l"
	.string "große Nummer mit dem Pokéball!\p"
	.string "Nimmst du mir das ab, Kurzbein?$"

ViridianCity_Text_CoffeeGramps_Believed:
	.string "Na eben! Was denn auch sonst?\n"
	.string "Natürlich nimmst du mir das ab!$"

ViridianCity_Text_CoffeeGramps_Doubted:
	.string "Was? Du ungezogene Rotznase!\p"
	.string "Wenn ich nur etwas jünger wäre, würde\n"
	.string "ich dir schon zeigen, wo's langgeht!$"

ViridianCity_Text_GrampsNearGym:
	.string "Bis vor Kurzem gab es in dieser\n"
	.string "Pokémon-Arena keinen Leiter…\p"
	.string "Aber jetzt hat ein junger Mann aus\n"
	.string "Alabastia den Posten übernommen.\p"
	.string "Aber er ist gerade nicht da…$"

ViridianCity_Text_GrampsNearGym_BlueReturned:
	.string "Wirst du den\n"
	.string "ARENALEITER herausfordern?\p"
	.string "Viel Glück! Du wirst es brauchen.$"

ViridianCity_Text_DreamEaterFisherNew:
	.string "Gähn!\p"
	.string "Ich bin wohl in\n"
	.string "der Sonne eingeschlafen.\p"
	.string "Was? Ich erinnere dich an Jemand?\p"
	.string "Keine Ahnung. Hier, nimm dies.$"

ViridianCity_Text_DreamEaterFisher_GotTM::
	.string "…Zzzzz…$"

ViridianCity_Text_DreamEaterFisher:
	.string "Gähn! Ich bin in der Sonne eingenickt!\n"
	.string "Ich hatte einen ganz seltsamen Traum,\l"
	.string "in dem TRAUMATO meine Träume frisst!\l"
	.string "…Nanu? Wo kommt denn diese TM her?\p"
	.string "Schauder…\n"
	.string "Das gefällt mir nicht!\l"
	.string "Hier, nimm du diese TM!$"

ViridianCity_Text_DreamEaterFisher_GotDreamEater:
	.string "Die TM85 enthält… die Attacke…\n"
	.string "Traum… fresser…\l"
	.string "…Schnarch…$"

ViridianCity_Text_Youngster:
	.string "Ich habe gehört, dass über den ganzen\n"
	.string "Vertania-Wald viele unsichtbare Items\l"
	.string "verstreut liegen!$"

ViridianCity_Text_Sign:
	.string "VERTANIA CITY\p"
	.string "Das Immergrüne Paradies$"

ViridianCity_Text_GymSign:
	.string "Pokémon-Arena von Vertania City\n"
	.string "Leiter: …\l"
	.string "Der Rest des Textes ist unlesbar!$"

ViridianCity_Text_WelcomeSign:
	.string "Willkommen in Vertania City,\n"
	.string "dem Tor zum Indigo Plateau$"

ViridianCity_Text_TrainerHouseSign:
	.string "Trainer-Haus\n"
	.string "Der Club, in dem die Top-Trainer kämpfen$"

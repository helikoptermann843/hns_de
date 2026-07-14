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
	pokenavcall ViridianCity_Text_OakCall
	waitmessage
	delay 30
	setvar VAR_OAK_MT_SILVER_CALL, 2
	release
	end

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
	.string "He, Kurzbein! Ich hatte gerade einen\n"
	.string "doppelten Espresso und ich\l"
	.string "bin total aufgedreht!\p"
	.string "Ich brauche jetzt jemanden\n"
	.string "zum Reden und zwar dich!\p"
	.string "Man sieht es mir jetzt vielleicht\n"
	.string "nicht mehr an, aber ich war\l"
	.string "ein Experte im Fangen von Pokémon.\p"
	.string "Glaubst du mir?$"

ViridianCity_Text_CoffeeGramps_Believed:
	.string "Also gut. Ja, ich war wirklich etwas\n"
	.string "Besonderes, das kann ich dir sagen!$"

ViridianCity_Text_CoffeeGramps_Doubted:
	.string "Was? Du kleiner Frechdachs!\p"
	.string "Wenn ich etwas jünger wäre, würde\n"
	.string "ich dir schon das\l"
	.string "eine oder andere zeigen! Grummel.$"

ViridianCity_Text_GrampsNearGym:
	.string "Bis vor kurzem gab es\n"
	.string "in dieser PKMN-ARENA keinen\l"
	.string "LEITER.\p"
	.string "Ein junger Mann aus ALABASTIA ist\n"
	.string "hier der LEITER geworden,\l"
	.string "aber er ist oft unterwegs.$"

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
	.string "Gähn!\p"
	.string "Ich bin wohl in\n"
	.string "der Sonne eingeschlafen.\p"
	.string "…Ich hatte diesen Traum von einem\n"
	.string "TRAUMATO, das meinen Traum\l"
	.string "fressen wollte. Das ist doch\p"
	.string "merkwürdig, nicht wahr?\p"
	.string "Nanu! Was ist das?\p"
	.string "Wo ist diese TM hergekommen?\p"
	.string "Unheimlich!\n"
	.string "Hier, du kannst die TM behalten.$"

ViridianCity_Text_DreamEaterFisher_GotDreamEater:
	.string "TM42 enthält TRAUMFRESSER…\p"
	.string "…Zzzzz…$"

ViridianCity_Text_Youngster:
	.string "Ich habe gehört, dass man viele\n"
	.string "Items im VERTANIAWALD findet.$"

ViridianCity_Text_Sign:
	.string "VERTANIA CITY\p"
	.string "Das Immergrüne Paradies$"

ViridianCity_Text_GymSign:
	.string "VERTANIA-CITY POKéMON ARENA\n"
	.string "LEITER: …\p"
	.string "Der Rest ist unlesbar…$"

ViridianCity_Text_WelcomeSign:
	.string "Willkommen in VERTANIA CITY,\p"
	.string "dem Tor zum INDIGO PLATEAU$"

ViridianCity_Text_TrainerHouseSign:
	.string "TRAINER HAUS\p"
	.string "Der Verein für Top Trainerkämpfe$"

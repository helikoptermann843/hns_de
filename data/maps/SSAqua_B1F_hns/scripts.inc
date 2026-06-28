SSAqua_B1F_hns_MapScripts::
	.byte 0

SSAqua_B1F_EventScript_Trigger::
	lock
	turnobject LOCALID_SSAQUA_B1F_SAILORLOOKING, DIR_EAST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox SSAqua_B1F_Text_FastShipOnDutySailor, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown1
	waitmovement 0 
	turnobject LOCALID_SSAQUA_B1F_SAILORLOOKING, DIR_SOUTH
	release
	end

SSAqua_B1F_EventScript_SailorLookingForBuddy::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_SSAQUA_SAILOR, SSAqua_B1F_EventScript_SailorLookingFoundBuddy
	msgbox SSAqua_B1F_Text_FastShipOnDutySailor, MSGBOX_DEFAULT
	closemessage
	release
	end

SSAqua_B1F_EventScript_SailorLookingFoundBuddy::
	msgbox SSAqua_B1F_Text_FastShipOnDutySailorThanks, MSGBOX_DEFAULT
	goto_if_lt VAR_SSAQUA_STATE, 5, SSAqua_B1F_EventScript_SailorGirl
	closemessage
	release
	end
SSAqua_B1F_EventScript_SailorGirl::
	msgbox SSAqua_B1F_Text_FastShipOnDutySailorSawGirl, MSGBOX_DEFAULT
	closemessage
	release
	end

SSAqua_B1F_EventScript_SleepySailor::
	msgbox SSAqua_B1F_Text_FastShipOnDutySailorDirections, MSGBOX_NPC
	end

SSAqua_B1F_EventScript_Barfcan::
	msgbox SSAqua_B1F_Text_BarfCan, MSGBOX_SIGN
	end

SSAqua_B1F_Text_BarfCan:
	.string "Igitt! Hätte ich besser nicht geguckt!$"

SSAqua_B1F_Text_FastShipOnDutySailor:
	.string "Hey, Kind. Kannst du nach\n"
	.string "meinem Kumpel sehen?\p"
	.string "Er hängt irgendwo faul herum,\n"
	.string "dieser faule Sack!\p"
	.string "Ich würde ihn suchen, aber ich\n"
	.string "bin gerade im Dienst.$"

SSAqua_B1F_Text_FastShipOnDutySailorRefused:
	.string "Oh, oh…\p"
	.string "Der KAPITÄN wird wütend sein…$"

SSAqua_B1F_Text_FastShipOnDutySailorThanks:
	.string "Danke! Ich habe mit ihm\p"
	.string "geredet, er wird nicht mehr faulenzen!$"

SSAqua_B1F_Text_FastShipOnDutySailorSawGirl:
	.string "Ein kleines Mädchen?\p"
	.string "Ich glaube sie ging hier vorbei.$"

SSAqua_B1F_Text_FastShipOnDutySailorDirections:
	.string "Der Speisesaal ist geradeaus.\p"
	.string "Die Treppen am\n"
	.string "Ende führen in die KAPITÄNSKAJÜTE.$"

SSAqua_B1F_EventScript_Jeff::
	trainerbattle_single TRAINER_JEFF_HNS, SSAqua_B1F_Text_SailorJeffSeen, SSAqua_B1F_Text_SailorJeffBeaten
	msgbox SSAqua_B1F_Text_SailorJeffAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_SailorJeffSeen:
	.string "Nichts ist besser als ein Kampf,\n"
	.string "wenn ich gerade Pause hab.$"

SSAqua_B1F_Text_SailorJeffBeaten:
	.string "Sieg oder Niederlage - meine\n"
	.string "Pause ist vorbei!$"

SSAqua_B1F_Text_SailorJeffAfter:
	.string "Ich schätze, ich kann nicht\n"
	.string "gewinnen, wenn ich nicht Ernst\l"
	.string "mache.$"

SSAqua_B1F_EventScript_Debra::
	trainerbattle_single TRAINER_DEBRA_HNS, SSAqua_B1F_Text_PicnickerDebraSeen, SSAqua_B1F_Text_PicnickerDebraBeaten
	msgbox SSAqua_B1F_Text_PicnickerDebraAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_PicnickerDebraSeen:
	.string "Mir ist so langweilig.\n"
	.string "Willst du kämpfen?$"

SSAqua_B1F_Text_PicnickerDebraBeaten:
	.string "Au! Du bist zu stark!$"

SSAqua_B1F_Text_PicnickerDebraAfter:
	.string "SAFFRONIA, PRISMANIA…\n"
	.string "Es gibt viele große Städte in KANTO.$"

SSAqua_B1F_EventScript_Fritz::
	trainerbattle_single TRAINER_FRITZ_HNS, SSAqua_B1F_Text_JugglerFritzSeen, SSAqua_B1F_Text_JugglerFritzBeaten
	msgbox SSAqua_B1F_Text_JugglerFritzAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_JugglerFritzSeen:
	.string "Urrf… Ich bin seekrank!$"

SSAqua_B1F_Text_JugglerFritzBeaten:
	.string "Ich kann nicht mehr kämpfen…$"

SSAqua_B1F_Text_JugglerFritzAfter:
	.string "Keine Schiffe mehr für mich.\n"
	.string "Beim nächsten Mal\l"
	.string "nehme ich den Magnetzug!$"

SSAqua_B1F_EventScript_Garrett::
	trainerbattle_single TRAINER_GARRETT_HNS, SSAqua_B1F_Text_SailorGarrettSeen, SSAqua_B1F_Text_SailorGarrettBeaten
	msgbox SSAqua_B1F_Text_SailorGarrettAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_SailorGarrettSeen:
	.string "Hier arbeiten wir Matrosen!$"

SSAqua_B1F_Text_SailorGarrettBeaten:
	.string "Ich habe auf eigenem Terrain\n"
	.string "verloren…$"

SSAqua_B1F_Text_SailorGarrettAfter:
	.string "Wir bringen unterschiedliche\n"
	.string "Passagiere von Orania City\l"
	.string "nach Oliviana City.$"

SSAqua_B1F_EventScript_Jonah::
	trainerbattle_single TRAINER_JONAH_HNS, SSAqua_B1F_Text_FisherJonahSeen, SSAqua_B1F_Text_FisherJonahBeaten
	msgbox SSAqua_B1F_Text_FisherJonahAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_FisherJonahSeen:
	.string "Obwohl wir auf dem Meer sind,\n"
	.string "kann ich nicht angeln!\p"
	.string "Wie langweilig! Lass uns\n"
	.string "kämpfen!$"

SSAqua_B1F_Text_FisherJonahBeaten:
	.string "Ich… mir ist nicht mehr\n"
	.string "langweilig…$"

SSAqua_B1F_Text_FisherJonahAfter:
	.string "Ich werde vom Steg in\n"
	.string "Viola City angeln.$"

SSAqua_B1F_EventScript_Wai::
	trainerbattle_single TRAINER_WAI_HNS, SSAqua_B1F_Text_BlackbeltWaiSeen, SSAqua_B1F_Text_BlackbeltWaiBeaten
	msgbox SSAqua_B1F_Text_BlackbeltWaiAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_BlackbeltWaiSeen:
	.string "Ich trainiere meine Beine,\n"
	.string "indem ich mich gegen das\l"
	.string "Schaukeln des Schiffs stemme!$"

SSAqua_B1F_Text_BlackbeltWaiBeaten:
	.string "Gekippt und umgehauen!$"

SSAqua_B1F_Text_BlackbeltWaiAfter:
	.string "Ich konnte den KARATE-KING\n"
	.string "in Johto nicht finden.\p"
	.string "Er soll irgendwo in einer\n"
	.string "Höhle trainieren.$"

SSAqua_B1F_EventScript_Kenneth::
	trainerbattle_single TRAINER_KENNETH_HNS, SSAqua_B1F_Text_SailorKennethSeen, SSAqua_B1F_Text_SailorKennethBeaten
	msgbox SSAqua_B1F_Text_SailorKennethAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_SailorKennethSeen:
	.string "Ich bin ein Seemann!\p"
	.string "Aber ich trainiere Pokémon,\n"
	.string "um CHAMP zu werden!$"

SSAqua_B1F_Text_SailorKennethBeaten:
	.string "Mein Trainingsrückstand\n"
	.string "ist eindeutig…$"

SSAqua_B1F_Text_SailorKennethAfter:
	.string "Acht ORDEN! Sie zeigen, dass\n"
	.string "du die Arena-LEITER besiegt hast.\p"
	.string "Kein Wunder, dass du so gut bist!$"

SSAqua_B1F_EventScript_Shirley::
	trainerbattle_single TRAINER_SHIRLEY_HNS, SSAqua_B1F_Text_TeacherShirleySeen, SSAqua_B1F_Text_TeacherShirleyBeaten
	msgbox SSAqua_B1F_Text_TeacherShirleyAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_TeacherShirleySeen:
	.string "Fass meine Schüler nicht an!$"

SSAqua_B1F_Text_TeacherShirleyBeaten:
	.string "Ah!$"

SSAqua_B1F_Text_TeacherShirleyAfter:
	.string "Wir machen einen Ausflug zu den\n"
	.string "RUINEN außerhalb von VIOLA.$"

SSAqua_B1F_EventScript_Nate::
	trainerbattle_single TRAINER_NATE_HNS, SSAqua_B1F_Text_SchoolboyNateSeen, SSAqua_B1F_Text_SchoolboyNateBeaten
	msgbox SSAqua_B1F_Text_SchoolboyNateAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_SchoolboyNateSeen:
	.string "Kennst du die Alph-RUINEN?$"

SSAqua_B1F_Text_SchoolboyNateBeaten:
	.string "Ah!$"

SSAqua_B1F_Text_SchoolboyNateAfter:
	.string "Radios empfangen seltsame Signale\n"
	.string "in den RUINEN.$"

SSAqua_B1F_EventScript_Ricky::
	trainerbattle_single TRAINER_RICKY_HNS, SSAqua_B1F_Text_SchoolboyRickySeen, SSAqua_B1F_Text_SchoolboyRickyBeaten
	msgbox SSAqua_B1F_Text_SchoolboyRickyAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_SchoolboyRickySeen:
	.string "In den Alph-RUINEN gibt es\n"
	.string "seltsame Steinplatten.$"

SSAqua_B1F_Text_SchoolboyRickyBeaten:
	.string "Ich wurde vermöbelt!$"

SSAqua_B1F_Text_SchoolboyRickyAfter:
	.string "Ich las, dass es davon vier\n"
	.string "Platten gibt.$"


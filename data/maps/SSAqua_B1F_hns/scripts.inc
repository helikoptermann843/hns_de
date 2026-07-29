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
	.string "Der Kapitän wird wütend sein…$"

SSAqua_B1F_Text_FastShipOnDutySailorThanks:
	.string "Danke! Ich habe mit ihm geredet.\n"
	.string "Er gelobt, von jetzt an immer seine\l"
	.string "Arbeit zu machen!$"

SSAqua_B1F_Text_FastShipOnDutySailorSawGirl:
	.string "Ein kleines Mädchen?\p"
	.string "Ich glaube sie ging hier vorbei.$"

SSAqua_B1F_Text_FastShipOnDutySailorDirections:
	.string "Der Speisesaal ist geradeaus.\p"
	.string "Die Treppen am\n"
	.string "Ende führen in die Kapitänskajüte.$"

SSAqua_B1F_EventScript_Jeff::
	trainerbattle_single TRAINER_JEFF_HNS, SSAqua_B1F_Text_SailorJeffSeen, SSAqua_B1F_Text_SailorJeffBeaten
	msgbox SSAqua_B1F_Text_SailorJeffAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_SailorJeffSeen:
	.string "In den Arbeitspausen ist Kämpfen\n"
	.string "meine Lieblingsbeschäftigung.$"

SSAqua_B1F_Text_SailorJeffBeaten:
	.string "Sieg oder Niederlage,\n"
	.string "meine Pause ist vorüber!$"

SSAqua_B1F_Text_SailorJeffAfter:
	.string "Ich denke, ich werde wohl nie gewinnen,\n"
	.string "wenn ich die Sache nicht ernst nehme.$"

SSAqua_B1F_EventScript_Debra::
	trainerbattle_single TRAINER_DEBRA_HNS, SSAqua_B1F_Text_PicnickerDebraSeen, SSAqua_B1F_Text_PicnickerDebraBeaten
	msgbox SSAqua_B1F_Text_PicnickerDebraAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_PicnickerDebraSeen:
	.string "Mir ist langweilig.\n"
	.string "Willst du kämpfen?$"

SSAqua_B1F_Text_PicnickerDebraBeaten:
	.string "Autsch! Du bist zu stark!$"

SSAqua_B1F_Text_PicnickerDebraAfter:
	.string "Saffronia…\n"
	.string "Prismania…\l"
	.string "Ich habe gehört, in der Kanto-Region\l"
	.string "gibt es auch viele große Städte.$"

SSAqua_B1F_EventScript_Fritz::
	trainerbattle_single TRAINER_FRITZ_HNS, SSAqua_B1F_Text_JugglerFritzSeen, SSAqua_B1F_Text_JugglerFritzBeaten
	msgbox SSAqua_B1F_Text_JugglerFritzAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_JugglerFritzSeen:
	.string "Börks…\n"
	.string "Ich bin seekrank!$"

SSAqua_B1F_Text_JugglerFritzBeaten:
	.string "Ich kann mich\n"
	.string "nicht mehr bewegen…$"

SSAqua_B1F_Text_JugglerFritzAfter:
	.string "Ich reise nie wieder mit dem Schiff. Das\n"
	.string "nächste Mal nehme ich den Magnetzug.$"

SSAqua_B1F_EventScript_Garrett::
	trainerbattle_single TRAINER_GARRETT_HNS, SSAqua_B1F_Text_SailorGarrettSeen, SSAqua_B1F_Text_SailorGarrettBeaten
	msgbox SSAqua_B1F_Text_SailorGarrettAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_SailorGarrettSeen:
	.string "Hier arbeiten wir\n"
	.string "Matrosen!$"

SSAqua_B1F_Text_SailorGarrettBeaten:
	.string "Ich habe auf eigenem Terrain\n"
	.string "verloren…$"

SSAqua_B1F_Text_SailorGarrettAfter:
	.string "Auf dem Weg von Orania City nach\n"
	.string "Oliviana City wechseln die Passagiere.$"

SSAqua_B1F_EventScript_Jonah::
	trainerbattle_single TRAINER_JONAH_HNS, SSAqua_B1F_Text_FisherJonahSeen, SSAqua_B1F_Text_FisherJonahBeaten
	msgbox SSAqua_B1F_Text_FisherJonahAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_FisherJonahSeen:
	.string "Wie öde! Wir fahren mit dem Schiff, und\n"
	.string "ich kann nicht angeln! Kämpfen wir!$"

SSAqua_B1F_Text_FisherJonahBeaten:
	.string "J-jetzt ist mir nicht mehr langweilig…$"

SSAqua_B1F_Text_FisherJonahAfter:
	.string "Ich werde am Kai von\n"
	.string "Orania City angeln.$"

SSAqua_B1F_EventScript_Wai::
	trainerbattle_single TRAINER_WAI_HNS, SSAqua_B1F_Text_BlackbeltWaiSeen, SSAqua_B1F_Text_BlackbeltWaiBeaten
	msgbox SSAqua_B1F_Text_BlackbeltWaiAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_BlackbeltWaiSeen:
	.string "Arrr!\n"
	.string "Ich trainiere meine Beine, indem ich\l"
	.string "das Schaukeln des Schiffes ausgleiche!$"

SSAqua_B1F_Text_BlackbeltWaiBeaten:
	.string "Arrr!\n"
	.string "Du hast mich überrollt!$"

SSAqua_B1F_Text_BlackbeltWaiAfter:
	.string "Ich konnte den Karate-Meister in\n"
	.string "Johto nicht finden.\p"
	.string "Er soll irgendwo in einer\n"
	.string "Höhle trainieren…$"

SSAqua_B1F_EventScript_Kenneth::
	trainerbattle_single TRAINER_KENNETH_HNS, SSAqua_B1F_Text_SailorKennethSeen, SSAqua_B1F_Text_SailorKennethBeaten
	msgbox SSAqua_B1F_Text_SailorKennethAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_SailorKennethSeen:
	.string "Ich bin Matrose!\p"
	.string "Aber eigentlich trainiere ich Pokémon,\n"
	.string "um einmal Champ zu werden!$"

SSAqua_B1F_Text_SailorKennethBeaten:
	.string "Mein Trainingsrückstand\n"
	.string "ist offensichtlich…$"

SSAqua_B1F_Text_SailorKennethAfter:
	.string "Acht Orden! Sie zeigen, dass\n"
	.string "du die Arena-Leiter besiegt hast.\p"
	.string "Kein Wunder, dass du so gut bist!$"

SSAqua_B1F_EventScript_Shirley::
	trainerbattle_single TRAINER_SHIRLEY_HNS, SSAqua_B1F_Text_TeacherShirleySeen, SSAqua_B1F_Text_TeacherShirleyBeaten
	msgbox SSAqua_B1F_Text_TeacherShirleyAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_TeacherShirleySeen:
	.string "Lass die Finger\n"
	.string "von meinen Schülern!$"

SSAqua_B1F_Text_TeacherShirleyBeaten:
	.string "Jieks!$"

SSAqua_B1F_Text_TeacherShirleyAfter:
	.string "Wir machen einen Ausflug zu den\n"
	.string "Ruinen bei Viola City.$"

SSAqua_B1F_EventScript_Nate::
	trainerbattle_single TRAINER_NATE_HNS, SSAqua_B1F_Text_SchoolboyNateSeen, SSAqua_B1F_Text_SchoolboyNateBeaten
	msgbox SSAqua_B1F_Text_SchoolboyNateAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_SchoolboyNateSeen:
	.string "Warst du schon mal in den Alph-Ruinen?$"

SSAqua_B1F_Text_SchoolboyNateBeaten:
	.string "Uaaah!$"

SSAqua_B1F_Text_SchoolboyNateAfter:
	.string "Es heißt, wenn man in den Ruinen Radio\n"
	.string "hört, kriegt man seltsame Signale rein.$"

SSAqua_B1F_EventScript_Ricky::
	trainerbattle_single TRAINER_RICKY_HNS, SSAqua_B1F_Text_SchoolboyRickySeen, SSAqua_B1F_Text_SchoolboyRickyBeaten
	msgbox SSAqua_B1F_Text_SchoolboyRickyAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_B1F_Text_SchoolboyRickySeen:
	.string "In den Alph-Ruinen gibt es\n"
	.string "mysteriöse Steinplatten.$"

SSAqua_B1F_Text_SchoolboyRickyBeaten:
	.string "Ich wurde vermöbelt!$"

SSAqua_B1F_Text_SchoolboyRickyAfter:
	.string "Ich habe gelesen, dass es insgesamt\n"
	.string "vier von diesen Steinplatten gibt.$"


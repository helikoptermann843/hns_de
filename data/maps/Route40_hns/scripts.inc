Route40_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route40_MapScript_OnTransition
	.byte 0

Route40_MapScript_OnTransition::
	callnative SetTimeBasedEncounters
	goto_if_ge VAR_OLIVINE_CITY_STATE, 5, Route40_MapScript_ClearWeather
	end

Route40_MapScript_ClearWeather::
	setweather WEATHER_NONE
	end

Route40_EventScript_Simon::
	trainerbattle_single TRAINER_SIMON_HNS, Route40_Text_SwimmermSimonSeen, Route40_Text_SwimmermSimonBeaten
	msgbox Route40_Text_SwimmermSimonAfter, MSGBOX_AUTOCLOSE
	end

Route40_Text_SwimmermSimonSeen:
	.string "Du musst dich erst aufwärmen,\n"
	.string "bevor du schwimmen gehst.\p"
	.string "Das ist Grundwissen.$"

Route40_Text_SwimmermSimonBeaten:
	.string "O.K.! Onkel! Ich gebe auf!$"

Route40_Text_SwimmermSimonAfter:
	.string "Anemonia City ist ziemlich\n"
	.string "weit weg von hier.$"

Route40_EventScript_Randall::
	trainerbattle_single TRAINER_RANDALL_HNS, Route40_Text_SwimmermRandallSeen, Route40_Text_SwimmermRandallBeaten
	msgbox Route40_Text_SwimmermRandallAfter, MSGBOX_AUTOCLOSE
	end

Route40_Text_SwimmermRandallSeen:
	.string "Heh, du bist jung und fit!\p"
	.string "Surfe nicht auf\n"
	.string "einem Pokémon! Schwimme!$"

Route40_Text_SwimmermRandallBeaten:
	.string "Oh, oh. Ich habe verloren…$"

Route40_Text_SwimmermRandallAfter:
	.string "Schwimmen ist gut für\n"
	.string "deinen gesamten Körper.$"

Route40_EventScript_Elaine::
	trainerbattle_single TRAINER_ELAINE_HNS, Route40_Text_SwimmerfElaineSeen, Route40_Text_SwimmerfElaineBeaten
	msgbox Route40_Text_SwimmerfElaineAfter, MSGBOX_AUTOCLOSE
	end

Route40_Text_SwimmerfElaineSeen:
	.string "Gehst du nach ANEMONIA CITY?\p"
	.string "Wie wäre es erst\n"
	.string "mit einem kleinen Kampftraining?$"

Route40_Text_SwimmerfElaineBeaten:
	.string "Diesmal habe ich verloren!$"

Route40_Text_SwimmerfElaineAfter:
	.string "Ich denke ich bin ein besserer\n"
	.string "Schwimmer als du. Yeah!$"

Route40_EventScript_Paula::
	trainerbattle_single TRAINER_PAULA_HNS, Route40_Text_SwimmerfPaulaSeen, Route40_Text_SwimmerfPaulaBeaten
	msgbox Route40_Text_SwimmerfPaulaAfter, MSGBOX_AUTOCLOSE
	end

Route40_Text_SwimmerfPaulaSeen:
	.string "Ich habe keine Schwimmreifen.\p"
	.string "Ich halte mich an einem\n"
	.string "WasserPokémon fest!$"

Route40_Text_SwimmerfPaulaBeaten:
	.string "Oh, ich fühle mich so schwindelig!$"

Route40_Text_SwimmerfPaulaAfter:
	.string "Ich gleite unbeschwert\n"
	.string "über die Wellen.$"

Route40_EventScript_Woman1::
	lock
	faceplayer
	msgbox Route40_Text_Lass1, MSGBOX_DEFAULT
	closemessage
	release
	end

Route40_Text_Lass1:
	.string "Du kannst es zwar nicht von hier\p"
	.string "sehen, aber ANEMONIA-\n"
	.string "CITY liegt jenseits des Meeres.$"

Route40_EventScript_Woman2::
	lock
	faceplayer
	msgbox Route40_Text_Lass2, MSGBOX_DEFAULT
	closemessage
	release
	end

Route40_Text_Lass2:
	.string "Ich reiste mit dem Schiff nach\n"
	.string "OLIVIANA, um die Sehenswürdigkeiten\l"
	.string "und die Atmosphäre zu genießen.\p"
	.string "Da es eine Hafenstadt ist, unter-\n"
	.string "scheidet sie sich\l"
	.string "von anderen großen Städten.$"

Route40_EventScript_Youngster::
	lock
	faceplayer
	msgbox Route40_Text_StandingYoungster, MSGBOX_DEFAULT
	closemessage
	release
	end

Route40_Text_StandingYoungster:
	.string "Warst du schon am DUELLTURM?\p"
	.string "Ich denke, dass sich bereits viele\n"
	.string "starke Trainer dort versammeln.\p"
	.string "Da du so viele ORDEN besitzt,\n"
	.string "wirst du dich dort wacker schlagen.$"

Route40_Text_Monica:
    .string "MONIKA: Freut mich, dich\n"
    .string "kennenzulernen.\p"
    .string "Ich bin MONIKA von der WOCHEN-\n"
    .string "TAGSFAMILIE.\p"
    .string "Ich wette, du errätst nicht,\n"
    .string "welcher Wochentag mein\l"
    .string "Lieblingstag ist!$"

Route40_Text_MonicaGivesGift:
    .string "Ganz genau!\p"
    .string "Als Zeichen unserer Freundschaft\n"
    .string "habe ich ein Geschenk für dich!$"

Route40_Text_MonicaGaveGift:
    .string "MONIKA: Dieses Item verstärkt\n"
    .string "ATTACKEN vom Typ FLUG.\p"
    .string "Du solltest es einem Vogel-\n"
    .string "POKéMON zum Tragen geben.$"

Route40_Text_MonicaMonday:
    .string "MONIKA: Meine Brüder und\n"
    .string "Schwestern sind überall verstreut.\p"
    .string "Versuch doch, sie alle zu finden!$"

Route40_Text_MonicaNotMonday:
	.string "MONJA: Ich fürchte,\n"
	.string "heute ist nicht Montag.\l"
	.string "Wie schade…$"

Route40_Text_MonicaNope:
	.string "Nicht dieser.$"

Rotue40_EventScript_Monica::
	lock
	faceplayer
	goto_if_set FLAG_GOT_SHARP_BEAK, Rotue40_EventScript_MonicaCompleted
	msgbox Route40_Text_Monica, MSGBOX_DEFAULT
	closemessage
	multichoice 20, 0, MULTI_DAYS_OF_WEEK, FALSE
	switch VAR_RESULT
	case 0, Rotue40_EventScript_MonicaNope
	case 1, Rotue40_EventScript_MonicaYes
	case 2, Rotue40_EventScript_MonicaNope
	case 3, Rotue40_EventScript_MonicaNope
	case 4, Rotue40_EventScript_MonicaNope
	case 5, Rotue40_EventScript_MonicaNope
	case 6, Rotue40_EventScript_MonicaNope
	case 7 Rotue40_EventScript_MonicaCancel
	case MULTI_B_PRESSED, Rotue40_EventScript_MonicaCancel
	closemessage
	release
	end
Rotue40_EventScript_MonicaYes::
	msgbox Route40_Text_MonicaGivesGift, MSGBOX_DEFAULT
	giveitem ITEM_SHARP_BEAK
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_GOT_SHARP_BEAK
	msgbox Route40_Text_MonicaGaveGift, MSGBOX_DEFAULT
	closemessage
	release
	end
Rotue40_EventScript_MonicaNope::
	msgbox Route40_Text_MonicaNope, MSGBOX_DEFAULT
	closemessage
	release
	end
Rotue40_EventScript_MonicaCancel::
	closemessage
	release
	end
Rotue40_EventScript_MonicaCompleted::
	msgbox Route40_Text_MonicaMonday, MSGBOX_DEFAULT
	closemessage
	release
	end

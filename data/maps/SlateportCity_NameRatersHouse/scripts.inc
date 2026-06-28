SlateportCity_NameRatersHouse_MapScripts::
	.byte 0

SlateportCity_NameRatersHouse_EventScript_NameRater::
	lock
	faceplayer
	msgbox SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate
	goto_if_eq VAR_RESULT, NO, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
	end

SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate::
	msgbox SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname, MSGBOX_DEFAULT
	chooseboxmon
	waitstate
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_NameRatersHouse_EventScript_RateMonNickname
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
	end

SlateportCity_NameRatersHouse_EventScript_DeclineNameRate::
	msgbox SlateportCity_NameRatersHouse_Text_DoVisitAgain, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_RateMonNickname::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, SlateportCity_NameRatersHouse_EventScript_CantRateEgg
	special BufferMonNickname
	special IsMonOTIDNotPlayers
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
	specialvar VAR_RESULT, MonOTNameNotPlayer
	special BufferMonNickname
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
	msgbox SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SlateportCity_NameRatersHouse_EventScript_ChangeNickname
	goto_if_eq VAR_RESULT, NO, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
	end

SlateportCity_NameRatersHouse_EventScript_CantRateEgg::
	msgbox SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT::
	msgbox SlateportCity_NameRatersHouse_Text_MagnificentName, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_ChangeNickname::
	msgbox SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe, MSGBOX_DEFAULT
	call Common_EventScript_NameReceivedPartyMon
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
	special BufferMonNickname
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_NewNameDifferent
	msgbox SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_NewNameDifferent::
	msgbox SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname:
	.string "Hallo! Ich bin der NAMENBEWERTER!\n"
	.string "Ich bin das Orakel der Namen!\p"
	.string "Ich würde mich freuen, die Kosenamen\n"
	.string "deiner POKéMON bewerten zu dürfen.$"

SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname:
	.string "Für welches POKéMON soll ich den\n"
	.string "Kosenamen bewerten?$"

SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne:
	.string "Hmmm… {STR_VAR_1}, nicht wahr? Da hast\n"
	.string "du aber einen schönen Namen verliehen.\n"
	.string "\p"
	.string "Aber! Was hältst du davon, wenn ich\n"
	.string "ihm einen etwas besseren Namen gebe?$"

SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe:
	.string "Sehr schön! Und wie soll der neue\n"
	.string "Kosename lauten?$"

SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName:
	.string "Fertig! Von nun an heißt dein POKéMON\n"
	.string "{STR_VAR_1}!\p"
	.string "Das ist ein besserer Name als der\n"
	.string "vorherige. Welch ein Glück für dich!$"

SlateportCity_NameRatersHouse_Text_DoVisitAgain:
	.string "Ich verstehe.\n"
	.string "Komm mich mal wieder besuchen.$"

SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior:
	.string "Fertig! Von nun an heißt dein POKéMON\n"
	.string "{STR_VAR_1}!\p"
	.string "Eigentlich unterscheidet sich der Name\n"
	.string "nicht von dem vorherigen, und doch ist\l"
	.string "er um einiges besser! Welch ein Glück!$"

SlateportCity_NameRatersHouse_Text_MagnificentName:
	.string "Hmmm… {STR_VAR_1}!\p"
	.string "Das ist ein wundervoller Kosename!\n"
	.string "Ein Name ohne Fehl und Tadel!\p"
	.string "Du tust gut daran, {STR_VAR_1} auch\n"
	.string "weiterhin liebevoll zu behandeln!$"

SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg:
	.string "Mhm, mhm…\n"
	.string "Das ist eigentlich ein EI!$"


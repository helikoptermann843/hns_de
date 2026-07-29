LavenderTown_House2_Frlg_MapScripts::
	.byte 0

LavenderTown_House2_EventScript_NameRater::
	lock
	faceplayer
	msgbox LavenderTown_House2_Text_WantMeToRateNicknames, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LavenderTown_House2_EventScript_ChooseMon
	goto_if_eq VAR_RESULT, NO, LavenderTown_House2_EventScript_DontRateNickname
	end

LavenderTown_House2_EventScript_ChooseMon::
	msgbox LavenderTown_House2_Text_CritiqueWhichMonsNickname
	special ChoosePartyMon
	waitstate
	goto_if_lt VAR_0x8004, PARTY_SIZE, LavenderTown_House2_EventScript_CheckCanRateMon
	goto_if_ge VAR_0x8004, PARTY_SIZE, LavenderTown_House2_EventScript_DontRateNickname
	end

LavenderTown_House2_EventScript_DontRateNickname::
	msgbox LavenderTown_House2_Text_ISeeComeVisitAgain
	release
	end

LavenderTown_House2_EventScript_CheckCanRateMon::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, LavenderTown_House2_EventScript_CantNicknameEgg
	special BufferMonNickname
	special IsMonOTIDNotPlayers
	goto_if_eq VAR_RESULT, TRUE, LavenderTown_House2_EventScript_CantNicknameTradeMon
	specialvar VAR_RESULT, MonOTNameNotPlayer
	special BufferMonNickname
	goto_if_eq VAR_RESULT, TRUE, LavenderTown_House2_EventScript_CantNicknameTradeMon
	msgbox LavenderTown_House2_Text_GiveItANicerName, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, LavenderTown_House2_EventScript_ChooseNewNickname
	goto_if_eq VAR_RESULT, NO, LavenderTown_House2_EventScript_DontRateNickname
	end

LavenderTown_House2_EventScript_CantNicknameEgg::
	msgbox LavenderTown_House2_Text_ThatIsMerelyAnEgg
	release
	end

LavenderTown_House2_EventScript_CantNicknameTradeMon::
	msgbox LavenderTown_House2_Text_TrulyImpeccableName
	release
	end

LavenderTown_House2_EventScript_ChooseNewNickname::
	msgbox LavenderTown_House2_Text_WhatShallNewNicknameBe
	call Common_EventScript_NameReceivedPartyMon
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
	special BufferMonNickname
	goto_if_eq VAR_RESULT, TRUE, LavenderTown_House2_EventScript_ChoseNewNickname
	msgbox LavenderTown_House2_Text_FromNowOnShallBeKnownAsSameName
	release
	end

LavenderTown_House2_EventScript_ChoseNewNickname::
	msgbox LavenderTown_House2_Text_FromNowOnShallBeKnownAsName
	release
	end

LavenderTown_House2_Text_WantMeToRateNicknames::
	.string "Hallo! Ich bin der offizielle\n"
	.string "Namen-Bewerter!\p"
	.string "Soll ich die Spitznamen deiner\n"
	.string "Pokémon bewerten?$"

LavenderTown_House2_Text_CritiqueWhichMonsNickname::
	.string "Für welches Pokémon soll ich den\n"
	.string "Kosenamen bewerten?$"

LavenderTown_House2_Text_GiveItANicerName::
	.string "Der Spitzname ist {STR_VAR_1},\n"
	.string "oder? Ein schöner Name!\p"
	.string "Gefällt er dir noch immer, oder\n"
	.string "möchtest du ihn ändern?\p"
	.string "Was möchtest du?$"

LavenderTown_House2_Text_WhatShallNewNicknameBe::
	.string "Sehr schön! Und wie soll der neue\n"
	.string "Kosename lauten?$"

LavenderTown_House2_Text_FromNowOnShallBeKnownAsName::
	.string "Fertig! Von nun an heißt dein Pokémon\n"
	.string "{STR_VAR_1}!\p"
	.string "Das ist ein besserer Name als der\n"
	.string "vorherige. Welch ein Glück für dich!$"

LavenderTown_House2_Text_ISeeComeVisitAgain::
	.string "Ich verstehe.\n"
	.string "Komm mich wieder besuchen.$"

LavenderTown_House2_Text_FromNowOnShallBeKnownAsSameName::
	.string "Fertig! Von nun an heißt dein Pokémon\n"
	.string "{STR_VAR_1}!\p"
	.string "Eigentlich unterscheidet sich der Name\n"
	.string "nicht von dem vorherigen, und doch ist\l"
	.string "er um einiges besser! Welch ein Glück!$"

LavenderTown_House2_Text_TrulyImpeccableName::
	.string "{STR_VAR_1}! Ein wirklich tadelloser\n"
	.string "Name!\p"
	.string "Kümmere dich gut um {STR_VAR_1}!$"

LavenderTown_House2_Text_ThatIsMerelyAnEgg::
	.string "Mhm, mhm…\n"
	.string "Das ist eigentlich ein Ei!$"


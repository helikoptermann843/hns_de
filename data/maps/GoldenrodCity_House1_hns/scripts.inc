GoldenrodCity_House1_hns_MapScripts::
	.byte 0

GoldenrodCity_NameRatersHouse_EventScript_ToggleShinies::
	lock
	msgbox GoldenrodCity_NameRatersHouse_Text_AskToggleShinies, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_NameRatersHouse_EventScript_ToggleShiniesRefused
	@special ToggleShinyColors
	msgbox GoldenrodCity_NameRatersHouse_Text_ToggleShinies, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_NameRatersHouse_EventScript_ToggleShiniesRefused::
	release
	end

GoldenrodCity_NameRatersHouse_Text_AskToggleShinies:
	.string "Möchtest du die einzigartige\n"
	.string "Shiny Farbeinstellung Togglen?$"

GoldenrodCity_NameRatersHouse_Text_ToggleShinies:
	.string "Shiny-Farben getoggled!\p"
	.string "Siehe deine Einstellungen an\n"
	.string "einem PC.$"

GoldenrodCity_NameRatersHouse_EventScript_RenameRival::
	msgbox GoldenrodCity_NameRatersHouse_Text_RenameRival, MSGBOX_DEFAULT
	closemessage
	special NameRival
	waitstate
	end

GoldenrodCity_NameRatersHouse_Text_RenameRival:
	.string "Es sind die Nachrichten...\p"
	.string "Die Polizei sucht diesen\n"
	.string "ROTHAARIGEN JUNGEN!\p"
	.string "Kennst du seinen Namen?$"

GoldenrodCity_NameRatersHouse_EventScript_NameRater::
	lock
	faceplayer
	msgbox GoldenrodCity_NameRatersHouse_Text_PleasedToRateMonNickname, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, GoldenrodCity_NameRatersHouse_EventScript_ChooseMonToRate
	goto_if_eq VAR_RESULT, NO, GoldenrodCity_NameRatersHouse_EventScript_DeclineNameRate
	end

GoldenrodCity_NameRatersHouse_EventScript_ChooseMonToRate::
	msgbox GoldenrodCity_NameRatersHouse_Text_CritiqueWhichMonNickname, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	lock
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, GoldenrodCity_NameRatersHouse_EventScript_RateMonNickname
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, GoldenrodCity_NameRatersHouse_EventScript_DeclineNameRate
	end

GoldenrodCity_NameRatersHouse_EventScript_DeclineNameRate::
	msgbox GoldenrodCity_NameRatersHouse_Text_DoVisitAgain, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_NameRatersHouse_EventScript_RateMonNickname::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, GoldenrodCity_NameRatersHouse_EventScript_CantRateEgg
	special BufferMonNickname
	@special IsMonOTIDNotPlayers
	@goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_NameRatersHouse_EventScript_PlayerNotMonsOT
	@specialvar VAR_RESULT, MonOTNameNotPlayer
	special BufferMonNickname
	@goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_NameRatersHouse_EventScript_PlayerNotMonsOT
	msgbox GoldenrodCity_NameRatersHouse_Text_FineNameSuggestBetterOne, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, GoldenrodCity_NameRatersHouse_EventScript_ChangeNickname
	goto_if_eq VAR_RESULT, NO, GoldenrodCity_NameRatersHouse_EventScript_DeclineNameRate
	end

GoldenrodCity_NameRatersHouse_EventScript_CantRateEgg::
	msgbox GoldenrodCity_NameRatersHouse_Text_ThatIsMerelyAnEgg, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_NameRatersHouse_EventScript_PlayerNotMonsOT::
	msgbox GoldenrodCity_NameRatersHouse_Text_MagnificentName, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_NameRatersHouse_EventScript_ChangeNickname::
	msgbox GoldenrodCity_NameRatersHouse_Text_WhatShallNewNameBe, MSGBOX_DEFAULT
	call Common_EventScript_NameReceivedPartyMon
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
	special BufferMonNickname
	goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_NameRatersHouse_EventScript_NewNameDifferent
	msgbox GoldenrodCity_NameRatersHouse_Text_NameNoDifferentYetSuperior, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_NameRatersHouse_EventScript_NewNameDifferent::
	msgbox GoldenrodCity_NameRatersHouse_Text_MonShallBeKnownAsName, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_NameRatersHouse_Text_PleasedToRateMonNickname:
	.string "Hi, ho! Ich bin der Namenbewerter!\p"
	.string "Ich sage dir die Zukunft der Namen!\p"
	.string "Ich bewerte gern den Spitznamen deines\n"
	.string "Pokémon.$"

GoldenrodCity_NameRatersHouse_Text_CritiqueWhichMonNickname:
	.string "Welches Pokémon soll ich bewerten?$"

GoldenrodCity_NameRatersHouse_Text_FineNameSuggestBetterOne:
	.string "Hmmm… {STR_VAR_1}, nicht wahr?\n"
	.string "Das ist ein recht schöner Name.\p"
	.string "Aber! Was meinst du, wenn ich dir\n"
	.string "einen noch besseren vorschlage?$"

GoldenrodCity_NameRatersHouse_Text_WhatShallNewNameBe:
	.string "Gut. Wie soll der neue Spitzname\n"
	.string "lauten?$"

GoldenrodCity_NameRatersHouse_Text_MonShallBeKnownAsName:
	.string "Fertig! Dieses Pokémon wird nun\n"
	.string "als {STR_VAR_1} bekannt sein!\p"
	.string "Es ist ein besserer Name als vorher!\n"
	.string "Welch ein Glück für dich!$"

GoldenrodCity_NameRatersHouse_Text_DoVisitAgain:
	.string "Ich verstehe.\n"
	.string "Komm gern wieder.$"

GoldenrodCity_NameRatersHouse_Text_NameNoDifferentYetSuperior:
	.string "Fertig! Dieses Pokémon wird nun\n"
	.string "als {STR_VAR_1} bekannt sein!\p"
	.string "Es sieht nicht anders aus als vorher,\n"
	.string "und doch ist es weit überlegen!\p"
	.string "Welch ein Glück für dich!$"

GoldenrodCity_NameRatersHouse_Text_MagnificentName:
	.string "Hmmm… {STR_VAR_1}, wie prächtig!\p"
	.string "Das ist ein wunderbarer Spitzname!\n"
	.string "Er ist vollkommen tadellos!\p"
	.string "Pflege deinen {STR_VAR_1} gut\n"
	.string "von nun an und in Zukunft.$"

GoldenrodCity_NameRatersHouse_Text_ThatIsMerelyAnEgg:
	.string "Nun, nun.\n"
	.string "Das ist nur ein Ei!$"



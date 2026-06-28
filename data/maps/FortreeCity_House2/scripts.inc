FortreeCity_House2_MapScripts::
	.byte 0

FortreeCity_House2_EventScript_HiddenPowerGiver::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_HIDDEN_POWER, FortreeCity_House2_EventScript_ExplainHiddenPower
	call_if_unset FLAG_MET_HIDDEN_POWER_GIVER, FortreeCity_House2_EventScript_Greeting
	msgbox FortreeCity_House2_Text_CoinInWhichHand, MSGBOX_DEFAULT
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
	switch VAR_RESULT
	case 1, FortreeCity_House2_EventScript_WrongGuess
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand, MSGBOX_DEFAULT
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
	switch VAR_RESULT
	case 1, FortreeCity_House2_EventScript_WrongGuess
	msgbox FortreeCity_House2_Text_CorrectTryAgainWhichHand2, MSGBOX_DEFAULT
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
	switch VAR_RESULT
	case 0, FortreeCity_House2_EventScript_WrongGuess
	msgbox FortreeCity_House2_Text_YourHiddenPowerHasAwoken, MSGBOX_DEFAULT
	giveitem ITEM_TM_HIDDEN_POWER
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_HIDDEN_POWER
	msgbox FortreeCity_House2_Text_ExplainHiddenPower, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_Greeting::
	msgbox FortreeCity_House2_Text_HiddenPowersArousedByNature, MSGBOX_DEFAULT
	setflag FLAG_MET_HIDDEN_POWER_GIVER
	return

FortreeCity_House2_EventScript_ExplainHiddenPower::
	msgbox FortreeCity_House2_Text_ExplainHiddenPower, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_WrongGuess::
	msgbox FortreeCity_House2_Text_YouGuessedWrong, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_Text_HiddenPowersArousedByNature:
	.string "Menschen… POKéMON…\p"
	.string "Ihre versteckten Kräfte werden durch\n"
	.string "das Leben in der Natur geweckt.$"

FortreeCity_House2_Text_CoinInWhichHand:
	.string "Lass diese alte Frau mal sehen, ob\n"
	.string "deine\n"
	.string "versteckten Kräfte erwacht sind…\p"
	.string "Ich halte eine Münze in meiner Hand.\p"
	.string "Nun? In welcher Hand halte ich sie?\n"
	.string "In der linken oder rechten Hand?$"

FortreeCity_House2_Text_CorrectTryAgainWhichHand:
	.string "Oh! Das stimmt!\p"
	.string "Versuchen wir es noch einmal.\p"
	.string "In welcher Hand halte ich die Münze?\n"
	.string "Rechts oder links?$"

FortreeCity_House2_Text_CorrectTryAgainWhichHand2:
	.string "Oh! Schon wieder richtig!\p"
	.string "Probieren wir es noch einmal.\p"
	.string "In welcher Hand ist die Münze nun?\n"
	.string "In der linken oder der rechten Hand?$"

FortreeCity_House2_Text_YourHiddenPowerHasAwoken:
	.string "Oh! Hervorragend!\n"
	.string "Deine versteckten Kräfte sind erwacht!\n"
	.string "\p"
	.string "Hier, das ist für dich. Wecke damit\n"
	.string "die versteckten Kräfte deiner POKéMON.$"

FortreeCity_House2_Text_ExplainHiddenPower:
	.string "KRAFTRESERVE ist eine Attacke, die je\n"
	.string "nach POKéMON anders aussieht.$"

FortreeCity_House2_Text_YouGuessedWrong:
	.string "Och, zu schade!\n"
	.string "Du hast falsch geraten.$"


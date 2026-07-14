BugContest_EventScript_Start::
	end

BugContest_EventScript_WhiteOut::
	lockall
	delay 200
	msgbox BugContest_Text_WhiteOut, MSGBOX_DEFAULT
	closemessage
	goto BugContest_EventScript_End
	end

BugContest_EventScript_TimesUp::
	lockall
	playse SE_DING_DONG
	msgbox BugContest_Text_TimesUp, MSGBOX_DEFAULT
	closemessage
	waitse
	getpartysize
	goto_if_eq VAR_RESULT, 1, BugContest_EventScript_Didntcatch
	fadescreen FADE_TO_BLACK
	setvar VAR_BUG_CONTEST_STATE, 3

	msgbox BugContest_Text_Judging0, MSGBOX_DEFAULT
	closemessage
	BugContest_EventScript_TimesUp2::
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BugContest_EventScript_WrongChoiceMon
	goto_if_eq VAR_0x8004, 0, BugContest_EventScript_WrongChoiceMon
	fadescreen FADE_TO_BLACK
	warp MAP_NATIONAL_PARK_BUG_CONTEST_HNS, 5
	waitstate
	delay 90
	end

BugContest_EventScript_WrongChoiceMon::
	msgbox BugContest_Text_WrongChoiceMon, MSGBOX_DEFAULT
	goto BugContest_EventScript_TimesUp2
	end

BugContestEventScript_Judging::
	msgbox BugContest_Text_Judging1, MSGBOX_DEFAULT
	closemessage
	special JudgeBugContestMon
	call_if_eq VAR_RESULT, 1, BugContest_EventScript_First
	call_if_eq VAR_RESULT, 2, BugContest_EventScript_Second
	call_if_eq VAR_RESULT, 3, BugContest_EventScript_Third
	special TransferBugContestMon
	delay 20
	giveitem VAR_0x8005
	msgbox BugContest_Text_TransferAndReturn, MSGBOX_DEFAULT
	playse SE_SUCCESS
	waitse
	msgbox BugContest_Text_TakePartInFuture, MSGBOX_DEFAULT
	closemessage
	goto BugContest_EventScript_End
	end

BugContest_EventScript_Didntcatch::
	msgbox BugContest_Text_DidntCatch, MSGBOX_DEFAULT
	playse SE_SUCCESS
	closemessage
	fadescreen FADE_TO_BLACK
	goto BugContest_EventScript_End
	end

BugContest_EventScript_First::
	msgbox BugContest_Text_First1, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_BERRY
	waitfanfare
	msgbox BugContest_Text_First2, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_BERRY
	waitfanfare
	msgbox BugContest_Text_First3, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_BADGE
	waitfanfare
	closemessage
	return

BugContest_EventScript_Second::
	msgbox BugContest_Text_Second1, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_BERRY
	waitfanfare
	msgbox BugContest_Text_Second2, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_BERRY
	waitfanfare
	msgbox BugContest_Text_Second3, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_BADGE
	waitfanfare
	closemessage
	return

BugContest_EventScript_Third::
	msgbox BugContest_Text_Third1, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_BERRY
	waitfanfare
	msgbox BugContest_Text_Third2, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_BERRY
	waitfanfare
	msgbox BugContest_Text_Third3, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_BADGE
	waitfanfare
	closemessage
	return

BugContest_EventScript_End::
	special HealPlayerParty
	special LoadPlayerParty
	special ExitBugContestMode
	clearflag FLAG_DISABLE_EXP_GAIN
	setvar VAR_BUG_CONTEST_STATE, 0
	special RemoveSportBalls
	goto_if_eq VAR_TEMP_1, 1, BugContest_EventScript_SideEnd
	warp MAP_GATE_NATIONAL_PARK_HNS, 7, 2
	waitstate
	releaseall
	end

BugContest_EventScript_SideEnd::
	warp MAP_GATE_NATIONAL_PARK_HNS, 35, 7
	waitstate
	releaseall
	end

BugContest_Text_Judging0::
	.string "Der Wettbewerb ist beendet.\n"
	.string "Wähle das POKéMON aus,\l"
	.string "das bewertet werden soll.$"

BugContest_Text_Judging1::
	.string "Nun bewerten wir die POKéMON,\n"
	.string "die ihr gefangen habt.\p"
	.string "...................\n"
	.string "...................\p"
	.string "Die Sieger stehen fest!\n"
	.string "Seid ihr bereit?$"

BugContest_Text_WrongChoiceMon:
	.string "Wähle das POKéMON aus,\n"
	.string "das bewertet werden soll.$"

BugContest_Text_DidntCatch:
	.string "Oh nein! Du hast kein POKéMON\n"
	.string "gefangen.\p"
	.string "Du scheidest aus dem Wettbewerb\n"
	.string "aus.\p"
	.string "Dein Team wird nun zurückgegeben.$"

BugContest_Text_TimesUp:
	.string "Ding-Dong! Die Zeit ist um!$"

BugContest_Text_WhiteOut:
	.string "{PLAYER} hat keine kampffähigen\n"
	.string "POKéMON mehr.\p"
	.string "{PLAYER} scheidet aus.$"

BugContest_Text_First1:
	.string "Den dritten Platz belegt\n"
	.string "ASS-TRAINERIN BELINDA\l"
	.string "mit einem SAFCON!$"

BugContest_Text_First2:
	.string "Den zweiten Platz belegt\n"
	.string "KÄFERSAMMLER SHAUN\l"
	.string "mit einem PINSIR!$"

BugContest_Text_First3:
	.string "Der Sieger des Käferturniers\n"
	.string "ist...\p"
	.string "{PLAYER} mit einem\n"
	.string "{STR_VAR_1}!$"

BugContest_Text_Second1:
	.string "Den dritten Platz belegt\n"
	.string "ASS-TRAINERIN BELINDA\l"
	.string "mit einem SAFCON!$"

BugContest_Text_Second2:
	.string "Den zweiten Platz belegt\n"
	.string "{PLAYER} mit einem\l"
	.string "{STR_VAR_1}!$"

BugContest_Text_Second3:
	.string "Der Sieger des Käferturniers\n"
	.string "ist...\p"
	.string "KÄFERSAMMLER SHAUN\n"
	.string "mit einem PINSIR!$"

BugContest_Text_Third1:
	.string "Den dritten Platz belegt\n"
	.string "{PLAYER} mit einem\l"
	.string "{STR_VAR_1}!$"

BugContest_Text_Third2:
	.string "Den zweiten Platz belegt\n"
	.string "ASS-TRAINERIN BELINDA\l"
	.string "mit einem SAFCON!$"

BugContest_Text_Third3:
	.string "Der Sieger des Käferturniers\n"
	.string "ist...\p"
	.string "KÄFERSAMMLER SHAUN\n"
	.string "mit einem PINSIR!$"

BugContest_Text_TakePartInFuture:
	.string "Danke für deine Teilnahme!\n"
	.string "Wir hoffen,\l"
	.string "du machst bald wieder mit.$"

BugContest_Text_TransferAndReturn:
	.string "Dein ausgewähltes KÄFER-POKéMON\n"
	.string "wird auf den PC übertragen.\p"
	.string "Danach erhältst du dein Team\n"
	.string "zurück.$"

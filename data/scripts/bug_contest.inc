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
	.string "Das Käferturnier ist vorbei.\p"
	.string "Welches Pokémon soll teilnehmen?$"

BugContest_Text_Judging1::
	.string "Wir bewerten jetzt die gefangenen\n"
	.string "Pokémon!\p"
	.string "……\n"
	.string "……\p"
	.string "Die Gewinner stehen fest!\p"
	.string "Bist du bereit?$"

BugContest_Text_WrongChoiceMon:
	.string "Welches Pokémon soll teilnehmen?$"

BugContest_Text_DidntCatch:
	.string "Du hast kein Käfer-Pokémon gefangen.\p"
	.string "Hier hast du deine Pokémon zurück.\n"
	.string "Bitte schön!$"

BugContest_Text_TimesUp:
	.string "Ding-dong! Die Zeit ist abgelaufen!\n"
	.string "Das Käferturnier ist vorbei.$"

BugContest_Text_WhiteOut:
	.string "{PLAYER} hat kein\n"
	.string "kampffähiges Pokémon mehr!\p"
	.string "Das Käferturnier ist vorbei.$"

BugContest_Text_First1:
	.string "Auf dem 3. Platz: Ass-Trainerin\n"
	.string "Belinda mit einem Safcon!$"

BugContest_Text_First2:
	.string "Auf dem 2. Platz: Käfersammler\n"
	.string "Shaun mit einem Pinsir!$"

BugContest_Text_First3:
	.string "Und! Der 1. Platz beim\n"
	.string "Käferturnier geht aaan…\p"
	.string "{PLAYER} mit einem {STR_VAR_1}!$"

BugContest_Text_Second1:
	.string "Auf dem 3. Platz: Ass-Trainerin\n"
	.string "Belinda mit einem Safcon!$"

BugContest_Text_Second2:
	.string "Auf dem 2. Platz: {PLAYER} mit\n"
	.string "einem {STR_VAR_1}!$"

BugContest_Text_Second3:
	.string "Und! Der 1. Platz beim\n"
	.string "Käferturnier geht aaan…\p"
	.string "Käfersammler Shaun mit\n"
	.string "einem Pinsir!$"

BugContest_Text_Third1:
	.string "Auf dem 3. Platz: {PLAYER} mit\n"
	.string "einem {STR_VAR_1}!$"

BugContest_Text_Third2:
	.string "Auf dem 2. Platz: Ass-Trainerin\n"
	.string "Belinda mit einem Safcon!$"

BugContest_Text_Third3:
	.string "Und! Der 1. Platz beim\n"
	.string "Käferturnier geht aaan…\p"
	.string "Käfersammler Shaun mit\n"
	.string "einem Pinsir!$"

BugContest_Text_TakePartInFuture:
	.string "Wir würden uns freuen, euch beim\n"
	.string "nächsten Turnier wiederzusehen!$"

BugContest_Text_TransferAndReturn:
	.string "Dein Käfer-Pokémon wurde in eine\n"
	.string "Box im PC übertragen.\p"
	.string "Hier hast du deine Pokémon zurück.\n"
	.string "Bitte schön!$"

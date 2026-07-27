Gate_NationalPark_hns_MapScripts::
	.byte 0

Gate_NationalPark_EventScript_Attendant::
	lockall
	faceplayer
	goto_if_set FLAG_DAILY_BUG_CONTEST_COMPLETED, Gate_NationalPark_EventScript_AttendantAlreadyPlayed
	msgbox Route35NationalParkGate_Text_OfficerAskToParticipate, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Gate_NationalPark_EventScript_AttendantStart
	msgbox Route35NationalParkGate_Text_TakePartInFuture, MSGBOX_DEFAULT
	releaseall
	end

Gate_NationalPark_EventScript_AttendantStart::
	msgbox Route35NationalParkGate_Text_OfficerAskToUseFirstMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, Gate_NationalPark_EventScript_AttendantCancel
	getpartysize
	call_if_eq VAR_RESULT, 1, Gate_NationalPark_EventScript_OnlyOneMon
	msgbox Route35NationalParkGate_Text_OfficerHoldYourMon, MSGBOX_DEFAULT
	closemessage
	special SavePlayerParty
	remove5mons
	goto_if_eq VAR_RESULT, MON_CANT_GIVE, Gate_NationalPark_EventScript_AttendantFaint
	playfanfare MUS_OBTAIN_ITEM
	message Route35NationalParkGate_Text_MonLeftWithHelper
	waitfanfare
	closemessage
	msgbox Route35NationalParkGate_Text_OfficerGiveSportBalls, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_SPORT_BALL, 30
	closemessage
	msgbox Route35NationalParkGate_Text_OfficerExplainRules, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_WEST, Gate_NationalPark_EventScript_AttendantEnterTop
	call_if_eq VAR_FACING, DIR_NORTH, Gate_NationalPark_EventScript_AttendantEnterBot
	playse SE_EXIT
	clearflag FLAG_HIDE_BUG_CONTEST_ATTENDANT_SIDE
	special EnterBugContestMode
	setflag FLAG_DISABLE_EXP_GAIN
	setvar VAR_BUG_CONTEST_STATE, 1
	warp MAP_NATIONAL_PARK_BUG_CONTEST_HNS, 1
	waitstate
	end

Gate_NationalPark_EventScript_OnlyOneMon::
	special SavePlayerParty
	msgbox Route35NationalParkGate_Text_OfficerGiveSportBalls, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_SPORT_BALL, 30
	closemessage
	msgbox Route35NationalParkGate_Text_OfficerExplainRules, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_WEST, Gate_NationalPark_EventScript_AttendantEnterTop
	call_if_eq VAR_FACING, DIR_NORTH, Gate_NationalPark_EventScript_AttendantEnterBot
	playse SE_EXIT
	clearflag FLAG_HIDE_BUG_CONTEST_ATTENDANT_SIDE
	special EnterBugContestMode
	setflag FLAG_DISABLE_EXP_GAIN
	setvar VAR_BUG_CONTEST_STATE, 1
	warp MAP_NATIONAL_PARK_BUG_CONTEST_HNS, 1
	waitstate
	end

Gate_NationalPark_EventScript_AttendantEnterTop::
	applymovement OBJ_EVENT_ID_PLAYER, Gate_NationalPark_Movement_Player_EnterParkTop
	waitmovement 0
	return

Gate_NationalPark_EventScript_AttendantEnterBot::
	applymovement OBJ_EVENT_ID_PLAYER, Gate_NationalPark_Movement_Player_EnterParkBot
	waitmovement 0
	return


Gate_NationalPark_EventScript_AttendantFaint::	
	msgbox Route35NationalParkGate_Text_FirstMonCantBattle, MSGBOX_DEFAULT
	closemessage
	release
	end	

Gate_NationalPark_EventScript_AttendantCancel::	
	msgbox Route35NationalParkGate_Text_TakePartInFuture, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_NationalPark_EventScript_AttendantAlreadyPlayed::
	msgbox Route35NationalParkGate_Text_ContestIsOver, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_NationalPark_Movement_Player_EnterParkTop:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

Gate_NationalPark_Movement_Player_EnterParkBot:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

Gate_NationalPark_EventScript_BAttendant::
	lockall
	faceplayer
	goto_if_set FLAG_DAILY_BUG_CONTEST_COMPLETED, Gate_NationalPark_EventScript_AttendantAlreadyPlayed
	msgbox Route35NationalParkGate_Text_OfficerAskToParticipate, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, Gate_NationalPark_EventScript_BAttendantStart
	msgbox Route35NationalParkGate_Text_TakePartInFuture, MSGBOX_DEFAULT
	releaseall
	end

Gate_NationalPark_EventScript_BAttendantStart::
	msgbox Route35NationalParkGate_Text_OfficerAskToUseFirstMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, Gate_NationalPark_EventScript_AttendantCancel
	getpartysize
	call_if_eq VAR_RESULT, 1, Gate_NationalPark_EventScript_OnlyOneMonB
	msgbox Route35NationalParkGate_Text_OfficerHoldYourMon, MSGBOX_DEFAULT
	closemessage
	special SavePlayerParty
	remove5mons
	goto_if_eq VAR_RESULT, MON_CANT_GIVE, Gate_NationalPark_EventScript_AttendantFaint
	playfanfare MUS_OBTAIN_ITEM
	message Route35NationalParkGate_Text_MonLeftWithHelper
	waitfanfare
	closemessage
	msgbox Route35NationalParkGate_Text_OfficerGiveSportBalls, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_SPORT_BALL, 30
	closemessage
	msgbox Route35NationalParkGate_Text_OfficerExplainRules, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_EAST, Gate_NationalPark_EventScript_AttendantBEnterTop
	call_if_eq VAR_FACING, DIR_NORTH, Gate_NationalPark_EventScript_AttendantBEnterBot
	playse SE_EXIT
	special EnterBugContestMode
	setflag FLAG_DISABLE_EXP_GAIN
	setflag FLAG_HIDE_BUG_CONTEST_ATTENDANT_SIDE
	setvar VAR_BUG_CONTEST_STATE, 5
	warp MAP_NATIONAL_PARK_BUG_CONTEST_HNS, 40, 19
	waitstate
	end

Gate_NationalPark_EventScript_OnlyOneMonB::
	special SavePlayerParty
	msgbox Route35NationalParkGate_Text_OfficerGiveSportBalls, MSGBOX_DEFAULT
	closemessage
	giveitem ITEM_SPORT_BALL, 30
	closemessage
	msgbox Route35NationalParkGate_Text_OfficerExplainRules, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_EAST, Gate_NationalPark_EventScript_AttendantBEnterTop
	call_if_eq VAR_FACING, DIR_NORTH, Gate_NationalPark_EventScript_AttendantBEnterBot
	playse SE_EXIT
	special EnterBugContestMode
	setflag FLAG_DISABLE_EXP_GAIN
	setflag FLAG_HIDE_BUG_CONTEST_ATTENDANT_SIDE
	setvar VAR_BUG_CONTEST_STATE, 5
	warp MAP_NATIONAL_PARK_BUG_CONTEST_HNS, 40, 19
	waitstate
	end

Gate_NationalPark_EventScript_AttendantBEnterTop::
	applymovement OBJ_EVENT_ID_PLAYER, Gate_NationalPark_Movement_Player_EnterParkTopB
	waitmovement 0
	return

Gate_NationalPark_EventScript_AttendantBEnterBot::
	applymovement OBJ_EVENT_ID_PLAYER, Gate_NationalPark_Movement_Player_EnterParkBotB
	waitmovement 0
	return

Gate_NationalPark_Movement_Player_EnterParkTopB:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_in_place_left
	step_end

Gate_NationalPark_Movement_Player_EnterParkBotB:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_left
	step_end

Route35NationalParkGate_Text_OfficerAskToParticipate:
	.string "Heute ist Dienstag. Das heißt,\n"
	.string "heute findet das Käferturnier statt!\p"
	.string "Die Regeln sind einfach!\p"
	.string "Fange ein Käfer-Pokémon mit einem\n"
	.string "deiner eigenen Pokémon.\p"
	.string "Das Käfer-Pokémon wird dann\n"
	.string "von der Jury bewertet.\p"
	.string "Möchtest du es versuchen?$"

Route35NationalParkGate_Text_OfficerGiveSportBalls:
	.string "Hier sind die PARKBÄLLE\n"
	.string "für das Turnier.$"

Route35NationalParkGate_Text_ReceivedSportBalls:
	.string "{PLAYER} erhält PARKBÄLLE.$"

Route35NationalParkGate_Text_OfficerExplainRules:
	.string "Wer das stärkste\n"
	.string "Käfer-Pokémon fängt, hat gewonnen.\p"
	.string "Wenn du keine PARKBÄLLE\n"
	.string "mehr hast, ist das Turnier\l"
	.string "beendet.\p"
	.string "Du darfst das letzte Pokémon,\n"
	.string "das du gefangen hast, behalten.\p"
	.string "Los! Fang das stärkste\n"
	.string "Käfer-Pokémon, das du finden\l"
	.string "kannst!$"

Route35NationalParkGate_Text_OfficerAskToUseFirstMon:
	.string "Oh, oh…\n"
	.string "Du hast mehr als ein Pokémon dabei.\p"
	.string "In dem Fall nimmt dein erstes Team-\n"
	.string "Pokémon, {STR_VAR_1}, am Turnier\l"
	.string "teil. Bist du damit einverstanden?$"

Route35NationalParkGate_Text_OfficerHoldYourMon:
	.string "Gut. Wir passen\n"
	.string "währenddessen auf deine anderen\l"
	.string "Pokémon auf.$"

Route35NationalParkGate_Text_MonLeftWithHelper:
	.string "Die Pokémon von {PLAYER}\n"
	.string "wurden dem TURNIERHELFER\l"
	.string "übergeben.$"

Route35NationalParkGate_Text_ChooseMonAndComeBack:
	.string "Wähle bitte das Pokémon, mit dem\n"
	.string "du im Turnier antreten möchtest\l"
	.string "aus und komm dann wieder.$"

Route35NationalParkGate_Text_TakePartInFuture:
	.string "Na gut. Wir hoffen, dass du\n"
	.string "später einmal am Turnier teilnimmst.$"

Route35NationalParkGate_Text_FirstMonCantBattle:
	.string "Oh, oh… Das erste Pokémon\n"
	.string "deines Teams kann\l"
	.string "nicht am Turnier teilnehmen.\p"
	.string "Tausche es bitte mit dem Pokémon\n"
	.string "aus, das am Turnier teilnehmen\l"
	.string "soll und komm dann wieder.$"

Route35NationalParkGate_Text_MakeRoom:
	.string "Oh, oh… Dein Team und\n"
	.string "deine PC-BOX ist voll besetzt.\p"
	.string "Du hast keinen Platz für\n"
	.string "ein Käfer-Pokémon, das du\l"
	.string "fängst.\p"
	.string "Schaffe Platz in deinem Team oder\n"
	.string "in deiner PC-BOX und komm dann wieder.$"

Route35NationalParkGate_Text_EggAsFirstMon:
	.string "Oh, oh… Ein EI ist an\n"
	.string "erster Stelle in deinem Team.\p"
	.string "Tausche es bitte mit dem Pokémon,\n"
	.string "das du im Turnier einsetzen möchtest\l"
	.string "und komm dann wieder.$"

Route35NationalParkGate_Text_ContestIsOver:
	.string "Das heutige Turnier ist beendet.\n"
	.string "Wir freuen uns, wenn du wiederkommst!$"

Route35NationalParkGate_EventScript_Policeman::
	lock
	faceplayer
	msgbox Route35NationalParkGate_Text_WeHoldContests, MSGBOX_DEFAULT
	closemessage
	release
	end

Route35NationalParkGate_EventScript_BC1::
	lock
	faceplayer
	msgbox Route35NationalParkGate_Text_YoungsterWonders, MSGBOX_DEFAULT
	closemessage
	release
	end

Route35NationalParkGate_EventScript_BC2::
	lock
	faceplayer
	msgbox Route35NationalParkGate_Text_BC2, MSGBOX_DEFAULT
	closemessage
	release
	end

Route35NationalParkGate_EventScript_Rocker::
	lock
	faceplayer
	msgbox Route35NationalParkGate_Text_Rocker, MSGBOX_DEFAULT
	closemessage
	release
	end

Route35NationalParkGate_EventScript_Beauty::
	lock
	faceplayer
	msgbox Route35NationalParkGate_Text_Beauty, MSGBOX_DEFAULT
	closemessage
	release
	end

Route35NationalParkGate_Text_Rocker:
	.string "Wann findet das nächste\n"
	.string "Käferturnier statt?$"

Route35NationalParkGate_Text_BC2:
	.string "Ich hab ein Sichlor gefangen!$"

Route35NationalParkGate_Text_Beauty:
	.string "Der gewinnt immer diese Turniere!$"

Route35NationalParkGate_Text_WeHoldContests:
	.string "Die Turniere werden regelmäßig\n"
	.string "hier im PARK abgehalten.\l"
	.string "Nimm doch auch daran teil!$"

Route35NationalParkGate_Text_YoungsterWonders:
	.string "Mein Glumanda zündet\n"
	.string "meine Fürze an, Heheh.$"

Route35NationalParkGate_Text_ContestExplanation:
	.string "Das Käferturnier wird jeden Dienstag,\n"
	.string "Donnerstag und Samstag abgehalten.\p"
	.string "Du erhältst nicht nur einen Preis für\n"
	.string "die Teilnahme, sondern darfst auch das\l"
	.string "Käfer-Pokémon, das du dort fängst,\l"
	.string "behalten.$"

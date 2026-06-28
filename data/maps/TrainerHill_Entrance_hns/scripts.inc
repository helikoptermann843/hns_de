TrainerHill_Entrance_hns_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, TrainerHill_Entrance_hns_OnResume
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, TrainerHill_Entrance_hns_OnReturn
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerHill_Entrance_hns_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, TrainerHill_Entrance_hns_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_Entrance_hns_OnFrame
	.byte 0

TrainerHill_Entrance_hns_OnTransition:
	clearflag FLAG_LIMIT_TO_50
	calculatemonstats
	setflag FLAG_TEMP_HIDE_FOLLOWER
	setflag FLAG_LANDMARK_TRAINER_HILL
	getplayerxy VAR_TEMP_D, VAR_RESULT
	end

TrainerHill_Entrance_hns_OnResume:
	trainerhill_resumetimer
	setvar VAR_TEMP_0, 0
	trainerhill_getusingereader
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_hns_EventScript_TryFaceAttendant
	setobjectxy OBJ_EVENT_ID_PLAYER, 9, 6
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_hns_Movement_PlayerFaceAttendant
	end

TrainerHill_Entrance_hns_EventScript_TryFaceAttendant::
	trainerhill_getwon
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_hns_EventScript_PlayerDontFaceAttendant
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_hns_Movement_PlayerFaceAttendant
	end

TrainerHill_Entrance_hns_EventScript_PlayerDontFaceAttendant::
	end

TrainerHill_Entrance_hns_OnReturn:
	addobject LOCALID_TRAINER_HILL_HNS_NURSE
	addobject LOCALID_TRAINER_HILL_HNS_ATTENDANT
	addobject LOCALID_TRAINER_HILL_HNS_MAN
	addobject LOCALID_TRAINER_HILL_HNS_GIRL
	end

TrainerHill_Entrance_hns_OnLoad:
	call_if_eq VAR_TEMP_D, 17, TrainerHill_Entrance_hns_EventScript_OpenCounterDoor
	end

TrainerHill_Entrance_hns_EventScript_OpenCounterDoor::
	setmetatile 17, 10, METATILE_TrainerHill_GreenFloorTile, FALSE
	return

TrainerHill_Entrance_hns_OnFrame:
	map_script_2 VAR_TEMP_0, 0, TrainerHill_Entrance_hns_EventScript_ExitChallenge
	map_script_2 VAR_TEMP_D, 17, TrainerHill_Entrance_hns_EventScript_ExitElevator
	map_script_2 VAR_TEMP_5, 1, TrainerHill_Entrance_hns_EventScript_EntryTrigger
	map_script_2 VAR_TEMP_1, 1, TrainerHill_Entrance_hns_EventScript_WarpToEntranceCounter
	.2byte 0

TrainerHill_Entrance_hns_EventScript_WarpToEntranceCounter::
	setvar VAR_TEMP_1, 0
	warp MAP_TRAINER_HILL_ENTRANCE_HNS, 9, 6
	waitstate
	end

TrainerHill_Entrance_hns_EventScript_ExitElevator::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_hns_Movement_PlayerExitElevator
	waitmovement 0
	setmetatile 17, 10, METATILE_TrainerHill_CounterDoor, TRUE
	special DrawWholeMapView
	playse SE_CLICK
	waitse
	setvar VAR_TEMP_D, 0
	releaseall
	end

TrainerHill_Entrance_hns_EventScript_ExitChallenge::
	setvar VAR_TEMP_0, 1
	trainerhill_getstatus
	switch VAR_RESULT
	case TRAINER_HILL_PLAYER_STATUS_LOST, TrainerHill_Entrance_hns_EventScript_ExitChallengeLost
	case TRAINER_HILL_PLAYER_STATUS_ECARD_SCANNED, TrainerHill_Entrance_hns_EventScript_ExitChallengeECard
	case TRAINER_HILL_PLAYER_STATUS_NORMAL, TrainerHill_Entrance_hns_EventScript_EndExitChallenge

TrainerHill_Entrance_hns_EventScript_ExitChallengeLost::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_hns_Movement_PlayerFaceAttendant
	msgbox TrainerHill_Entrance_hns_Text_TooBadTremendousEffort, MSGBOX_DEFAULT
	goto TrainerHill_Entrance_hns_EventScript_PlayerExitChallenge

TrainerHill_Entrance_hns_EventScript_ExitChallengeECard::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_hns_Movement_PlayerFaceAttendant
	msgbox TrainerHill_Entrance_hns_Text_MovedReceptionHereForSwitch, MSGBOX_DEFAULT
TrainerHill_Entrance_hns_EventScript_PlayerExitChallenge::
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_hns_Movement_PushPlayerBackFromCounter
	waitmovement 0
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
	special HealPlayerParty
	releaseall
TrainerHill_Entrance_hns_EventScript_EndExitChallenge::
	end

TrainerHill_Entrance_hns_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_TRAINER_HILL_HNS_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

TrainerHill_Entrance_hns_EventScript_Attendant::
	lock
	faceplayer
	trainerhill_inchallenge
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_hns_EventScript_ThanksForPlaying
	msgbox TrainerHill_Entrance_hns_Text_HopeYouGiveItYourBest, MSGBOX_DEFAULT
	goto TrainerHill_Entrance_hns_EventScript_AttendantEnd

TrainerHill_Entrance_hns_EventScript_ThanksForPlaying::
	msgbox TrainerHill_Entrance_hns_Text_ThankYouForPlaying, MSGBOX_DEFAULT
TrainerHill_Entrance_hns_EventScript_AttendantEnd::
	release
	end

TrainerHill_Entrance_hns_EventScript_EntryTrigger::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_hns_Movement_PlayerFaceAttendant
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_hns_EventScript_Closed
	msgbox TrainerHill_Entrance_hns_Text_WelcomeToTrainerHill, MSGBOX_DEFAULT
	trainerhill_getsaved
	call_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_hns_EventScript_SaveGame
	trainerhill_allfloorsused
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_hns_EventScript_AllFloorsUsed
	msgbox TrainerHill_Entrance_hns_Text_TrainersUpToFloorX, MSGBOX_DEFAULT
	goto TrainerHill_Entrance_hns_EventScript_AskChallengeTrainers

TrainerHill_Entrance_hns_EventScript_AllFloorsUsed::
	msgbox TrainerHill_Entrance_hns_Text_TrainersInEveryRoom, MSGBOX_DEFAULT
TrainerHill_Entrance_hns_EventScript_AskChallengeTrainers::
	message TrainerHill_Entrance_hns_Text_LikeToChallengeTrainers
	waitmessage
	multichoice 15, 6, MULTI_YESNOINFO, FALSE
	switch VAR_RESULT
	case 0, TrainerHill_Entrance_hns_EventScript_ChooseChallenge
	case 1, TrainerHill_Entrance_hns_EventScript_CancelEntry
	case 2, TrainerHill_Entrance_hns_EventScript_Info
	case MULTI_B_PRESSED, TrainerHill_Entrance_hns_EventScript_CancelEntry
	end

TrainerHill_Entrance_hns_EventScript_Info::
	msgbox TrainerHill_Entrance_hns_Text_ExplainTrainerHill, MSGBOX_DEFAULT
	goto TrainerHill_Entrance_hns_EventScript_AskChallengeTrainers
	end

TrainerHill_Entrance_hns_EventScript_ChooseChallenge::
	multichoice 13, 2, MULTI_TAG_MATCH_TYPE, FALSE
	switch VAR_RESULT
	case 4, TrainerHill_Entrance_hns_EventScript_CancelEntry
	case MULTI_B_PRESSED, TrainerHill_Entrance_hns_EventScript_CancelEntry
	trainerhill_setmode VAR_RESULT
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 1
	setvar VAR_TEMP_5, 0
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	msgbox TrainerHill_Entrance_hns_Text_TimeProgessGetSetGo, MSGBOX_DEFAULT
	trainerhill_start
	releaseall
	end

TrainerHill_Entrance_hns_EventScript_CancelEntry::
	setvar VAR_TEMP_5, 0
	msgbox TrainerHill_Entrance_hns_Text_PleaseVisitUsAgain, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_hns_Movement_PushPlayerBackFromCounter
	waitmovement 0
	releaseall
	end

TrainerHill_Entrance_hns_EventScript_SaveGame::
	msgbox TrainerHill_Entrance_hns_Text_SaveGameBeforeEnter, MSGBOX_DEFAULT
	trainerhill_setsaved
	setvar VAR_TEMP_5, 1
	call Common_EventScript_SaveGame
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_hns_EventScript_SaveFailed
	trainerhill_setsaved
	return

TrainerHill_Entrance_hns_EventScript_SaveFailed::
	trainerhill_clearsaved
	goto TrainerHill_Entrance_hns_EventScript_CancelEntry
	end

TrainerHill_Entrance_hns_EventScript_Closed::
	msgbox TrainerHill_Entrance_hns_Text_StillGettingReady, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_hns_Movement_PushPlayerBackFromCounter
	waitmovement 0
	releaseall
	end

TrainerHill_Entrance_hns_Movement_PlayerFaceAttendant:
	face_right
	step_end

TrainerHill_Entrance_hns_Movement_PushPlayerBackFromCounter:
	walk_down
	step_end

TrainerHill_Entrance_hns_Movement_PlayerExitElevator:
	walk_down
	walk_down
	step_end

TrainerHill_Entrance_hns_EventScript_Records::
	lockall
	fadescreen FADE_TO_BLACK
	special ShowTrainerHillRecords
	waitstate
	releaseall
	end

TrainerHill_Entrance_hns_EventScript_Man::
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_hns_EventScript_ManTrainerHillClosed
	msgbox TrainerHill_Entrance_hns_Text_WhatSortOfTrainersAreAhead, MSGBOX_NPC
	end

TrainerHill_Entrance_hns_EventScript_ManTrainerHillClosed::
	msgbox TrainerHill_Entrance_hns_Text_CantWaitToTestTheWaters, MSGBOX_NPC
	end

TrainerHill_Entrance_hns_EventScript_Man2::
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_hns_EventScript_ManTrainerHillClosed2
	msgbox TrainerHill_Entrance_hns_Text_Money, MSGBOX_NPC
	end

TrainerHill_Entrance_hns_EventScript_ManTrainerHillClosed2::
	msgbox TrainerHill_Entrance_hns_Text_HereToGetMoney, MSGBOX_NPC
	end

TrainerHill_Entrance_hns_EventScript_Girl::
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_hns_EventScript_GirlTrainerHillClosed
	msgbox TrainerHill_Entrance_hns_Text_FriendsTryingToReachTimeBoardTop, MSGBOX_NPC
	end

TrainerHill_Entrance_hns_EventScript_GirlTrainerHillClosed::
	msgbox TrainerHill_Entrance_hns_Text_DoYouKnowWhenTheyOpen, MSGBOX_NPC
	end

TrainerHill_Entrance_hns_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart TrainerHill_Entrance_hns_Pokemart_Basic
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

TrainerHill_Entrance_hns_EventScript_Clerk2::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
TrainerHill_Entrance_hns_Pokemart_Basic:
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_SPECIAL
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFEND
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_NONE
	release
	end

TrainerHill_Entrance_hns_Text_HereToGetMoney:
	.string "Ich bin hier, um Geld zu machen!\n"
	.string "Für jeden Gipfelsieg gibt es\l"
	.string "eine Geldbelohnung!\p"
	.string "Wann eröffnen sie endlich?\n"
	.string "Ich kann es kaum erwarten!$"

TrainerHill_Entrance_hns_Text_Money:
	.string "Jedes Mal, wenn du den Gipfel\n"
	.string "erreichst, bekommst du Geld.\p"
	.string "Unter zehn Minuten kannst du\n"
	.string "bis zu 1.000.000¥ gewinnen!\p"
	.string "Dauert es länger, fällt die\n"
	.string "Belohnung geringer aus…$"

TrainerHill_Entrance_hns_Text_StillGettingReady:
	.string "Dies ist der TRAINERBERG,\n"
	.string "wo viele DOPPELKÄMPFE auf dich\l"
	.string "warten.\p"
	.string "Leider sind wir noch mit den\n"
	.string "Vorbereitungen beschäftigt.$"

TrainerHill_Entrance_hns_Text_WelcomeToTrainerHill:
	.string "Willkommen!\p"
	.string "Dies ist der TRAINERBERG,\n"
	.string "wo viele DOPPELKÄMPFE mit\l"
	.string "TRAINERN stattfinden!$"

TrainerHill_Entrance_hns_Text_SaveGameBeforeEnter:
	.string "Ist das dein erster Besuch?\p"
	.string "Bitte speichere dein Spiel,\n"
	.string "bevor du eintrittst.$"

TrainerHill_Entrance_hns_Text_TrainersUpToFloorX:
	.string "Mal sehen…\n"
	.string "Die TRAINER befinden sich…\p"
	.string "bis einschließlich Etage\n"
	.string "{STR_VAR_1}.$"

TrainerHill_Entrance_hns_Text_TrainersInEveryRoom:
	.string "Mal sehen…\n"
	.string "Die TRAINER befinden sich…\p"
	.string "Offenbar wartet in jedem Raum\n"
	.string "mindestens ein TRAINER.$"

TrainerHill_Entrance_hns_Text_LikeToChallengeTrainers:
	.string "Möchtest du die wartenden\n"
	.string "TRAINER herausfordern?$"

TrainerHill_Entrance_hns_Text_TimeProgessGetSetGo:
	.string "Ich messe deine Zeit.\n"
	.string "Viel Erfolg!\p"
	.string "Auf die Plätze…\p"
	.string "Fertig…\p"
	.string "Los!$"

TrainerHill_Entrance_hns_Text_PleaseVisitUsAgain:
	.string "Bitte besuche uns bald wieder!$"

TrainerHill_Entrance_hns_Text_TooBadTremendousEffort:
	.string "Das ist wirklich schade.\p"
	.string "Du hast in den Kämpfen großen\n"
	.string "Einsatz gezeigt.\p"
	.string "Versuche es bitte noch einmal!$"

TrainerHill_Entrance_hns_Text_HopeYouGiveItYourBest:
	.string "Ich wünsche dir viel Erfolg!$"

TrainerHill_Entrance_hns_Text_MovedReceptionHereForSwitch:
	.string "Beim Wechsel der TRAINER geht\n"
	.string "es manchmal sehr hektisch zu.\p"
	.string "Darum haben wir den Empfang\n"
	.string "hierher verlegt.\p"
	.string "Entschuldige die Umstände.$"

TrainerHill_Entrance_hns_Text_ThankYouForPlaying:
	.string "Vielen Dank fürs Spielen!$"

TrainerHill_Entrance_hns_Text_ExplainTrainerHill:
	.string "Im TRAINERBERG gibt es den\n"
	.string "Zeitangriff-Wettbewerb.\p"
	.string "Gemessen wird die Zeit vom\n"
	.string "Empfang bis zum Besitzer auf\l"
	.string "dem Dach.\p"
	.string "Die Bestzeiten stehen auf der\n"
	.string "Rangtafel. Miss dich mit\l"
	.string "deinen Freunden!\p"
	.string "In den Kämpfen erhältst du\n"
	.string "weder Erfahrung noch Geld.$"

TrainerHill_Entrance_hns_Text_WhatSortOfTrainersAreAhead:
	.string "Wer weiß, welche TRAINER und\n"
	.string "POKéMON-Kombinationen warten?\p"
	.string "Egal wer mir im Weg steht,\n"
	.string "ich werde ihn besiegen!$"

TrainerHill_Entrance_hns_Text_CantWaitToTestTheWaters:
	.string "Starke TRAINER aus aller Welt\n"
	.string "kommen zum TRAINERBERG.\p"
	.string "Ich kann es kaum erwarten,\n"
	.string "mich mit ihnen zu messen!\p"
	.string "Niemand wird mich aufhalten!$"

TrainerHill_Entrance_hns_Text_FriendsTryingToReachTimeBoardTop:
	.string "Siehst du dort die Rangtafel?\p"
	.string "Meine Freunde und ich wollen\n"
	.string "die schnellste Zeit schaffen.$"

TrainerHill_Entrance_hns_Text_DoYouKnowWhenTheyOpen:
	.string "Weißt du, wann hier eröffnet\n"
	.string "wird?\p"
	.string "Ich warte darauf, der allererste\n"
	.string "Herausforderer zu sein!$"

BattleFrontier_BattlePikeThreePathRoom_hns_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePikeRoom_OnResume_hns
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePikeThreePathRoom_OnFrame_hns
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePikeThreePathRoom_OnWarp_hns
	.byte 0

BattleFrontier_BattlePikeThreePathRoom_OnFrame_hns:
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, 0, BattleFrontier_BattlePikeThreePathRoom_EventScript_GetChallengeStatus_hns
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePikeThreePathRoom_EventScript_WarpToLobby_hns
	map_script_2 VAR_TEMP_CHALLENGE_STATUS, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePikeThreePathRoom_EventScript_ResumeChallenge_hns
	map_script_2 VAR_TEMP_5, 0, BattleFrontier_BattlePikeThreePathRoom_EventScript_SetHintRoom_hns
	map_script_2 VAR_TEMP_5, 1, BattleFrontier_BattlePikeThreePathRoom_EventScript_GivePikeQueenHint_hns
	.2byte 0

BattleFrontier_BattlePikeThreePathRoom_OnWarp_hns:
	map_script_2 VAR_TEMP_4, 0, BattleFrontier_BattlePikeThreePathRoom_EventScript_TurnPlayerNorth_hns
	.2byte 0

BattleFrontier_BattlePikeThreePathRoom_EventScript_TurnPlayerNorth_hns::
	setvar VAR_TEMP_4, 1
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_GetChallengeStatus_hns::
	frontier_getstatus
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_WarpToLobby_hns::
	warp MAP_BATTLE_FRONTIER_BATTLE_PIKE_LOBBY_HNS, 5, 6
	waitstate
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_ResumeChallenge_hns::
	lockall
	message BattleFrontier_BattlePikeThreePathRoom_Text_AwaitingReturnSaveBeforeResume_hns
	waitmessage
	pike_save CHALLENGE_STATUS_SAVING
	playse SE_SAVE
	waitse
	frontier_set FRONTIER_DATA_PAUSED, FALSE
	setvar VAR_TEMP_CHALLENGE_STATUS, 255
	special SavePlayerParty
	frontier_setpartyorder FRONTIER_PARTY_SIZE
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_PleaseEnjoyChallenge_hns, MSGBOX_DEFAULT
	closemessage
	releaseall
	frontier_settrainers
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 99
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_hns::
	frontier_get FRONTIER_DATA_BATTLE_NUM  @ Room number
	switch VAR_RESULT
	case 1, BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_hnsRoom1_hns
	case 3, BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_hnsRoom3_hns
	case 5, BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_hnsRoom5_hns
	case 7, BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_hnsRoom7_hns
	case 9, BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_hnsRoom9_hns
	case 11, BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_hnsRoom1_hns1_hns
	case 13, BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_hnsRoom1_hns3_hns
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_hnsRoom1_hns::
	lock
	faceplayer
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom1_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge_hns
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_hnsRoom3_hns::
	lock
	faceplayer
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom3_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge_hns
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_hnsRoom5_hns::
	lock
	faceplayer
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom5_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge_hns
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_hnsRoom7_hns::
	lock
	faceplayer
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom7_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge_hns
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_hnsRoom9_hns::
	lock
	faceplayer
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom9_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge_hns
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_hnsRoom1_hns1_hns::
	lock
	faceplayer
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom1_hns1_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge_hns
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_Attendant_hnsRoom1_hns3_hns::
	lock
	faceplayer
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom1_hns3_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge_hns
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_AskContinueChallenge_hns::
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_ContinueWithChallenge_hns, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, BattleFrontier_BattlePikeThreePathRoom_EventScript_AskSaveChallenge_hns
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeThreePathRoom_EventScript_AskSaveChallenge_hns
	release
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_PauseChallenge_hns::
	frontier_saveparty
	message BattleFrontier_BattlePikeThreePathRoom_Text_SavingYourData_hns
	waitmessage
	special LoadPlayerParty
	pike_save CHALLENGE_STATUS_PAUSED
	playse SE_SAVE
	waitse
	fadescreen FADE_TO_BLACK
	frontier_reset
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_AskSaveChallenge_hns::
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_SaveChallengeAndQuit_hns, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, BattleFrontier_BattlePikeThreePathRoom_EventScript_PauseChallenge_hns
	case NO, BattleFrontier_BattlePikeThreePathRoom_EventScript_AskRetireChallenge_hns
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeThreePathRoom_EventScript_AskRetireChallenge_hns
	release
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_AskRetireChallenge_hns::
	message BattleFrontier_BattlePikeThreePathRoom_Text_RetireFromChallenge_hns
	waitmessage
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_BattlePike_EventScript_Retire_hns
	release
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_SetHintRoom_hns::
	pike_sethintroom
	goto_if_eq VAR_RESULT, TRUE, BattleFrontier_BattlePikeThreePathRoom_EventScript_SetPikeQueenHint_hns
	setvar VAR_TEMP_5, 255
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_SetPikeQueenHint_hns::
	setvar VAR_TEMP_5, 1
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_GivePikeQueenHint_hns::
	applymovement LOCALID_PIKE_HINT_GIVER, BattleFrontier_BattlePikeThreePathRoom_Movement_HintGiverApproachPlayer_hns
	waitmovement 0
	lockall
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_TerrifyingEvent_hns, MSGBOX_DEFAULT
	releaseall
	applymovement LOCALID_PIKE_HINT_GIVER, BattleFrontier_BattlePikeThreePathRoom_Movement_HintGiverReturnToPos_hns
	waitmovement 0
	setvar VAR_TEMP_5, 255
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_HintGiver_hns::
	pike_gethint
	goto_if_eq VAR_RESULT, PIKE_HINT_BRAIN, BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveBrainHint_hns
	lock
	faceplayer
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_FindingItDifficultToChoose_hns, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, BattleFrontier_BattlePikeThreePathRoom_EventScript_AcceptHint_hns
	case NO, BattleFrontier_BattlePikeThreePathRoom_EventScript_DeclineHint_hns
	case MULTI_B_PRESSED, BattleFrontier_BattlePikeThreePathRoom_EventScript_DeclineHint_hns
	release
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_DeclineHint_hns::
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_ApologizeForImpertinence_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_AcceptHint_hns::
	pike_gethintroomid
	switch VAR_RESULT
	case PIKE_ROOM_LEFT, BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveLeftRoomHint_hns
	case PIKE_ROOM_CENTER, BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveCenterRoomHint_hns
	case PIKE_ROOM_RIGHT, BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveRightRoomHint_hns
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveLeftRoomHint_hns::
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutLeftPath_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint_hns

BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveCenterRoomHint_hns::
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutCenterPath_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint_hns

BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveRightRoomHint_hns::
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutRightPath_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint_hns

BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveHint_hns::
	pike_gethint
	switch VAR_RESULT
	case PIKE_HINT_NOSTALGIA, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintNostalgia_hns
	case PIKE_HINT_WHISPERING, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintWhispering_hns
	case PIKE_HINT_POKEMON, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintPokemon_hns
	case PIKE_HINT_PEOPLE, BattleFrontier_BattlePikeThreePathRoom_EventScript_HintPeople_hns
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_HintNostalgia_hns::
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_WaveOfNostaliga_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_HintWhispering_hns::
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_HeardWhispering_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_HintPokemon_hns::
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_AromaOfPokemon_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_HintPeople_hns::
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_PresenceOfPeople_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattlePikeThreePathRoom_EventScript_GiveBrainHint_hns::
	lock
	faceplayer
	msgbox BattleFrontier_BattlePikeThreePathRoom_Text_DreadfulPresence_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattlePikeThreePathRoom_Movement_HintGiverApproachPlayer_hns:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

BattleFrontier_BattlePikeThreePathRoom_Movement_HintGiverReturnToPos_hns:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	face_down
	step_end

BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom1_hns:
	.string "Du befindest dich im\n"
	.string "ersten Raum…$"

BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom3_hns:
	.string "Du befindest dich im\n"
	.string "dritten Raum…$"

BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom5_hns:
	.string "Du befindest dich im\n"
	.string "fünften Raum…$"

BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom7_hns:
	.string "Du befindest dich im\n"
	.string "siebten Raum…$"

BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom9_hns:
	.string "Du befindest dich im\n"
	.string "neunten Raum…$"

BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom1_hns1_hns:
	.string "Du befindest dich im\n"
	.string "11. Raum…$"

BattleFrontier_BattlePikeThreePathRoom_Text_CurrentlyInRoom1_hns3_hns:
	.string "Du befindest dich im\n"
	.string "13. Raum…$"

BattleFrontier_BattlePikeThreePathRoom_Text_ContinueWithChallenge_hns:
	.string "Möchtest du die Herausforderung\n"
	.string "fortsetzen?$"

BattleFrontier_BattlePikeThreePathRoom_Text_SaveChallengeAndQuit_hns:
	.string "Möchtest du das Spiel speichern und\n"
	.string "beenden?$"

BattleFrontier_BattlePikeThreePathRoom_Text_RetireFromChallenge_hns:
	.string "Möchtest du die Kampfbahn-\n"
	.string "Herausforderung abbrechen?$"

BattleFrontier_BattlePikeThreePathRoom_Text_AwaitingReturnSaveBeforeResume_hns:
	.string "Wir haben dich schon erwartet…\p"
	.string "Bevor du die Herausforderung\n"
	.string "fortsetzt, speicher ich dein Spiel…$"

BattleFrontier_BattlePikeThreePathRoom_Text_PleaseEnjoyChallenge_hns:
	.string "Wir hoffen, du genießt die Kampf-\n"
	.string "bahn-Herausforderung…$"

BattleFrontier_BattlePikeThreePathRoom_Text_SavingYourData_hns:
	.string "Ich speichere nun deine Daten…\n"
	.string "Einen Moment bitte…$"

BattleFrontier_BattlePike_Text_PathBlockedNoTurningBack_hns:
	.string "Der Weg ist versperrt!\n"
	.string "Und es gibt kein Zurück…$"

BattleFrontier_BattlePikeThreePathRoom_Text_FindingItDifficultToChoose_hns:
	.string "Ich bitte vielmals um Entschuldigung,\n"
	.string "aber…\p"
	.string "Es scheint, du hast Schwierigkeiten,\n"
	.string "dich für einen Weg zu entscheiden?$"

BattleFrontier_BattlePikeThreePathRoom_Text_ApologizeForImpertinence_hns:
	.string "Ich verstehe…\p"
	.string "Das war etwas vorschnell von mir.\n"
	.string "Entschuldigung…$"

BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutRightPath_hns:
	.string "Mh, mal sehen… Irgendetwas war\n"
	.string "mit dem Weg dort rechts…$"

BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutCenterPath_hns:
	.string "Mh, mal sehen… Irgendetwas war\n"
	.string "mit dem mittleren Weg…$"

BattleFrontier_BattlePikeThreePathRoom_Text_SomethingAboutLeftPath_hns:
	.string "Mh, mal sehen… Irgendetwas war\n"
	.string "mit dem Weg dort links…$"

BattleFrontier_BattlePikeThreePathRoom_Text_AromaOfPokemon_hns:
	.string "Der typische Duft von POKéMON scheint\n"
	.string "dort vorhanden zu sein…$"

BattleFrontier_BattlePikeThreePathRoom_Text_PresenceOfPeople_hns:
	.string "Ist das ein… TRAINER? Ich\n"
	.string "spüre die Anwesenheit von Menschen…$"

BattleFrontier_BattlePikeThreePathRoom_Text_HeardWhispering_hns:
	.string "Ich meine, etwas gehört zu haben… Und\n"
	.string "sei es nur ein Flüstern gewesen.$"

BattleFrontier_BattlePikeThreePathRoom_Text_WaveOfNostaliga_hns:
	.string "Ich spüre einen Hauch von Nostalgie\n"
	.string "aus dieser Richtung kommen…$"

BattleFrontier_BattlePikeThreePathRoom_Text_TerrifyingEvent_hns:
	.string "Es tut mir sehr Leid…\p"
	.string "Ein schreckliches, ja, fürchterliches\n"
	.string "Erlebnis steht dir bevor…\p"
	.string "Ich bitte dich: Sei auf das Schlimmste\n"
	.string "gefasst…$"

BattleFrontier_BattlePikeThreePathRoom_Text_DreadfulPresence_hns:
	.string "Jeder Weg strahlt etwas Bedrohliches\n"
	.string "aus…$"

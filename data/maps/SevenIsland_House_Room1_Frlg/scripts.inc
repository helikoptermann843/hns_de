.equ TRAINER_VISITING, VAR_TEMP_1

SevenIsland_House_Room1_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_House_Room1_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SevenIsland_House_Room1_OnFrame
	.byte 0

SevenIsland_House_Room1_OnTransition::
	special ValidateEReaderTrainer
	call_if_eq VAR_RESULT, 0, SevenIsland_House_Room1_EventScript_SetTrainerVisitingLayout
	call_if_ne VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 0, SevenIsland_House_Room1_EventScript_MoveOldWomanToDoor
	end

SevenIsland_House_Room1_EventScript_SetTrainerVisitingLayout::
	setvar TRAINER_VISITING, TRUE
	setobjectxyperm LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, 4, 2
	setobjectmovementtype LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN
	setmaplayoutindex LAYOUT_SEVEN_ISLAND_HOUSE_ROOM1_DOOR_OPEN
	return

SevenIsland_House_Room1_EventScript_MoveOldWomanToDoor::
	setobjectxyperm LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, 3, 2
	setobjectmovementtype LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, MOVEMENT_TYPE_FACE_RIGHT
	return

SevenIsland_House_Room1_OnFrame::
	map_script_2 VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 1, SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle
	map_script_2 VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 2, SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle
	map_script_2 VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 3, SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle
	.2byte 0

SevenIsland_House_Room1_EventScript_OldWomanCommentOnBattle::
	lockall
	textcolor NPC_TEXT_COLOR_FEMALE
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_Movement_PlayerReEnterRoom
	waitmovement 0
	applymovement LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN, SevenIsland_House_Room1_Movement_OldWomanWalkBehindPlayer
	waitmovement 0
	copyobjectxytoperm LOCALID_SEVEN_ISLAND_HOUSE_OLD_WOMAN
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	call_if_eq VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 1, SevenIsland_House_Room1_EventScript_BattleWonComment
	call_if_eq VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 2, SevenIsland_House_Room1_EventScript_BattleLostComment
	call_if_eq VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 3, SevenIsland_House_Room1_EventScript_BattleTiedComment
	special LoadPlayerParty
	setvar VAR_MAP_SCENE_SEVEN_ISLAND_HOUSE_ROOM1, 0
	releaseall
	end

SevenIsland_House_Room1_EventScript_BattleWonComment::
	msgbox SevenIsland_House_Room1_Text_AstoundingBattle
	return

SevenIsland_House_Room1_EventScript_BattleLostComment::
	msgbox SevenIsland_House_Room1_Text_FeelYourDisappointment
	return

SevenIsland_House_Room1_EventScript_BattleTiedComment::
	msgbox SevenIsland_House_Room1_Text_DrawWasIt
	return

SevenIsland_House_Room1_Movement_PlayerReEnterRoom::
	walk_down
	step_end

SevenIsland_House_Room1_Movement_OldWomanWalkBehindPlayer::
	walk_right
	walk_in_place_faster_down
	step_end

SevenIsland_House_Room1_EventScript_OldWoman::
	lock
	faceplayer
	special ValidateEReaderTrainer
	call_if_eq VAR_RESULT, 1, SevenIsland_House_Room1_EventScript_InvalidVisitingTrainer
	goto_if_eq TRAINER_VISITING, TRUE, SevenIsland_House_Room1_EventScript_TrainerVisiting
	msgbox SevenIsland_House_Room1_Text_OnlyEnjoymentWatchingBattles
	release
	end

SevenIsland_House_Room1_EventScript_InvalidVisitingTrainer::
	msgbox SevenIsland_House_Room1_Text_OnlyEnjoymentWatchingBattles
	release
	end

SevenIsland_House_Room1_EventScript_TrainerVisiting::
	special SavePlayerParty
	special BufferEReaderTrainerName
	msgbox SevenIsland_House_Room1_Text_ChallengeVisitingTrainer, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SevenIsland_House_Room1_EventScript_DeclineBattle
	call SevenIsland_House_Room1_EventScript_ChooseParty
	goto_if_eq VAR_RESULT, 0, SevenIsland_House_Room1_EventScript_DeclineBattle
	msgbox SevenIsland_House_Room1_Text_SaveProgressBeforeBattle, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SevenIsland_House_Room1_EventScript_DeclineBattle
	special LoadPlayerParty
	call Common_EventScript_SaveGame
	goto_if_eq VAR_RESULT, 0, SevenIsland_House_Room1_EventScript_DeclineBattle
	special SavePlayerParty
	special ReducePlayerPartyToSelectedMons
	msgbox SevenIsland_House_Room1_Text_DontHoldAnythingBack
	closemessage
	call_if_eq VAR_FACING, DIR_NORTH, SevenIsland_House_Room1_EventScript_EnterBattleRoomNorth
	call_if_eq VAR_FACING, DIR_EAST, SevenIsland_House_Room1_EventScript_EnterBattleRoomEast
	call_if_eq VAR_FACING, DIR_WEST, SevenIsland_House_Room1_EventScript_EnterBattleRoomWest
	warp MAP_SEVEN_ISLAND_HOUSE_ROOM2, 3, 1
	waitstate
	release
	end

SevenIsland_House_Room1_EventScript_DeclineBattle::
	special LoadPlayerParty
	msgbox SevenIsland_House_Room1_Text_OhYouWontBattle
	release
	end

SevenIsland_House_Room1_EventScript_ChooseParty::
	msgbox SevenIsland_House_Room1_Text_LimitThreeMonsPerSide
	fadescreen FADE_TO_BLACK
	special ChooseHalfPartyForBattle
	waitstate
	return

SevenIsland_House_Room1_EventScript_EnterBattleRoomNorth::
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room1_Movement_OldWomanMoveAsideLeft
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomNorth
	waitmovement 0
	return

SevenIsland_House_Room1_EventScript_EnterBattleRoomEast::
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room1_Movement_OldWomanMoveAsideRight
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomEast
	waitmovement 0
	return

SevenIsland_House_Room1_EventScript_EnterBattleRoomWest::
	applymovement VAR_LAST_TALKED, SevenIsland_House_Room1_Movement_OldWomanMoveAsideLeft
	applymovement LOCALID_PLAYER, SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomWest
	waitmovement 0
	return

SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomNorth::
	delay_16
	walk_up
	walk_up
	step_end

SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomEast::
	delay_16
	walk_right
	walk_up
	step_end

SevenIsland_House_Room1_Movement_PlayerEnterBattleRoomWest::
	delay_16
	walk_left
	walk_up
	step_end

SevenIsland_House_Room1_Movement_OldWomanMoveAsideLeft::
	walk_left
	walk_in_place_faster_right
	step_end

SevenIsland_House_Room1_Movement_OldWomanMoveAsideRight::
	walk_right
	walk_in_place_faster_left
	step_end

SevenIsland_House_Room1_EventScript_Box::
	msgbox SevenIsland_House_Room1_Text_SlightBreezeAroundBox, MSGBOX_SIGN
	end

SevenIsland_House_Room1_Text_OnlyEnjoymentWatchingBattles::
	.string "Ich stelle momentan nichts mehr\n"
	.string "dar, aber als ich jünger war…\p"
	.string "Ich bin überall hingeflogen und\n"
	.string "habe jeden TRAINER heraus-\l"
	.string "gefordert.\l"
	.string "Jetzt besteht meine einzige\l"
	.string "Lebensfreude darin, mich an\l"
	.string "die Vergangenheit zu erinnern\l"
	.string "und Kämpfe zu beobachten.$"

SevenIsland_House_Room1_Text_SlightBreezeAroundBox::
	.string "Es weht ein laues Lüftchen!$"

SevenIsland_House_Room1_Text_ChallengeVisitingTrainer::
	.string "Ah!\n"
	.string "Willkommen mein Freund!\p"
	.string "Ich will dir etwas erzählen. Im\n"
	.string "Keller gibt es ein geheimes\l"
	.string "Zimmer.\l"
	.string "Ein TRAINER namens {STR_VAR_1}\l"
	.string "wartet dort.\p"
	.string "Du bist bestimmt gekommen, um\n"
	.string "{STR_VAR_1} herauszufordern, oder?$"

SevenIsland_House_Room1_Text_OhYouWontBattle::
	.string "Oh…\n"
	.string "Du willst nicht kämpfen…\p"
	.string "Ich verstehe!\n"
	.string "……\p"
	.string "Wenn du deine Meinung änderst,\n"
	.string "kannst du gerne wiederkommen!$"

SevenIsland_House_Room1_Text_LimitThreeMonsPerSide::
	.string "Ah!\n"
	.string "Du willst also kämpfen?\p"
	.string "Dann hat es sich gelohnt, die\n"
	.string "Box aus dem Weg zu räumen.\p"
	.string "……\n"
	.string "Aber es gibt ein kleines Problem.\p"
	.string "Dieses geheime Zimmer ist nicht\n"
	.string "sehr stabil gebaut.\p"
	.string "Können wir uns auf den Einsatz\n"
	.string "von maximal drei POKéMON\l"
	.string "beschränken?$"

SevenIsland_House_Room1_Text_SaveProgressBeforeBattle::
	.string "Schön! Möchtest du dein Spiel\n"
	.string "vor dem Kampf sichern?$"

SevenIsland_House_Room1_Text_DontHoldAnythingBack::
	.string "Sehr gut!\n"
	.string "Nimm keine Rücksicht!$"

@ Unused
SevenIsland_House_Room1_Text_StrVar1_1::
	.string "{STR_VAR_1}$"

SevenIsland_House_Room2_Text_MatchEndedUpDraw::
	.string "Der Kampf endet unentschieden.$"

SevenIsland_House_Room1_Text_DrawWasIt::
	.string "Unentschieden?!?\n"
	.string "Dieses Spektakel hat sich\l"
	.string "dennoch gelohnt.\p"
	.string "Ich würde sagen, dass es ein\n"
	.string "wundervoller Kampf mit\l"
	.string "Tiefgang war!$"

@ Unused
SevenIsland_House_Room1_Text_StrVar1_2::
	.string "{STR_VAR_1}$"

SevenIsland_House_Room1_Text_AstoundingBattle::
	.string "Bravo!\p"
	.string "Wirklich super!\n"
	.string "Was für ein faszinierender Kampf!\p"
	.string "Er war so faszinierend, dass mir\n"
	.string "jetzt noch die Tränen in den Augen\l"
	.string "stehen!\l"
	.string "Die perfekte Verschmelzung von\l"
	.string "Angriff und Verteidigung!\p"
	.string "Das Aufeinandertreffen von\n"
	.string "kongenialen Kräften!\p"
	.string "Ja!\n"
	.string "Es war schlicht bombastisch!$"

@ Unused
SevenIsland_House_Room1_Text_StrVar1_3::
	.string "{STR_VAR_1}$"

SevenIsland_House_Room1_Text_FeelYourDisappointment::
	.string "Zu schade!\n"
	.string "Ich spüre deine Enttäuschung!\p"
	.string "Du wirst aus dieser Enttäuschung\n"
	.string "lernen und stärker werden.\p"
	.string "Lerne daraus und ziehe aus ihr\n"
	.string "deine Motivation, um nach\l"
	.string "Großem zu streben.\l"
	.string "Verdränge diese Niederlage und\l"
	.string "Enttäuschung nicht, sondern\l"
	.string "verdopple dein Training.$"


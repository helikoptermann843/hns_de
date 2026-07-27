TwoIsland_JoyfulGameCorner_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_JoyfulGameCorner_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TwoIsland_JoyfulGameCorner_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwoIsland_JoyfulGameCorner_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad_Frlg
	.byte 0

TwoIsland_JoyfulGameCorner_OnTransition::
	call_if_set FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER, TwoIsland_JoyfulGameCorner_EventScript_SetLostelleReturnedPos
	end

TwoIsland_JoyfulGameCorner_EventScript_SetLostelleReturnedPos::
	setobjectxyperm LOCALID_JOYFUL_GAME_CORNER_DADDY, 6, 2
	setobjectmovementtype LOCALID_JOYFUL_GAME_CORNER_DADDY, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_JOYFUL_GAME_CORNER_LOSTELLE, MOVEMENT_TYPE_LOOK_AROUND
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 4
	return

TwoIsland_JoyfulGameCorner_OnWarp::
	map_script_2 VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2, TwoIsland_JoyfulGameCorner_EventScript_TurnPlayerNorth
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, EventScript_CheckTurnAttendant_Frlg
	.2byte 0

TwoIsland_JoyfulGameCorner_EventScript_TurnPlayerNorth::
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

TwoIsland_JoyfulGameCorner_OnFrame::
	map_script_2 VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 0, TwoIsland_JoyfulGameCorner_EventScript_HelpFindLostelleScene
	map_script_2 VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2, TwoIsland_JoyfulGameCorner_EventScript_FoundLostelleScene
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, CableClub_EventScript_ExitMinigameRoom
	.2byte 0

TwoIsland_JoyfulGameCorner_EventScript_FoundLostelleScene::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	msgbox TwoIsland_JoyfulGameCorner_Text_YouRescuedLostelle
	textcolor NPC_TEXT_COLOR_FEMALE
	special GetPlayerBigGuyGirlString
	msgbox TwoIsland_JoyfulGameCorner_Text_LostelleItsOkayDaddy
	closemessage
	applymovement LOCALID_JOYFUL_GAME_CORNER_LOSTELLE, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 3
	releaseall
	end

TwoIsland_JoyfulGameCorner_EventScript_HelpFindLostelleScene::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, TwoIsland_JoyfulGameCorner_Movement_DaddyPacing
	waitmovement 0
	msgbox TwoIsland_JoyfulGameCorner_Text_WhereHasLostelleGottenTo
	closemessage
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_JOYFUL_GAME_CORNER_DADDY, TwoIsland_JoyfulGameCorner_Movement_DaddyApproachPlayer
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox TwoIsland_JoyfulGameCorner_Text_PleaseHelpFindLostelle
	closemessage
	playse SE_DOOR
	waitse
	applymovement LOCALID_PLAYER, TwoIsland_JoyfulGameCorner_Movement_PlayerFaceDaddy
	waitmovement 0
	playbgm MUS_RG_ENCOUNTER_BOY, 0
	addobject LOCALID_JOYFUL_GAME_CORNER_BIKER
	applymovement LOCALID_JOYFUL_GAME_CORNER_BIKER, TwoIsland_JoyfulGameCorner_Movement_BikerLookAround
	waitmovement 0
	msgbox TwoIsland_JoyfulGameCorner_Text_IsThisOnlyThreeIsland
	applymovement LOCALID_JOYFUL_GAME_CORNER_BIKER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox TwoIsland_JoyfulGameCorner_Text_ThisIsTwoIslandMoveIt
	msgbox TwoIsland_JoyfulGameCorner_Text_TheseIslandsAreConfusing
	closemessage
	applymovement LOCALID_JOYFUL_GAME_CORNER_BIKER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_JOYFUL_GAME_CORNER_BIKER
	fadedefaultbgm
	delay 60
	msgbox TwoIsland_JoyfulGameCorner_Text_PunkScuffedUpMyFloor
	clearflag FLAG_HIDE_THREE_ISLAND_LONE_BIKER
	setvar VAR_MAP_SCENE_THREE_ISLAND, 2
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 1
	releaseall
	end

TwoIsland_JoyfulGameCorner_Movement_DaddyPacing::
	walk_left
	walk_right
	walk_right
	delay_8
	walk_in_place_faster_up
	delay_16
	step_end

TwoIsland_JoyfulGameCorner_Movement_DaddyApproachPlayer::
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_left
	step_end

TwoIsland_JoyfulGameCorner_Movement_PlayerFaceDaddy::
	walk_left
	walk_in_place_faster_right
	step_end

TwoIsland_JoyfulGameCorner_Movement_BikerLookAround::
	walk_in_place_faster_left
	delay_8
	walk_in_place_faster_right
	delay_8
	walk_in_place_faster_up
	step_end

TwoIsland_JoyfulGameCorner_EventScript_InfoMan::
	lock
	faceplayer
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 4, JoyfulGameCorner_EventScript_InfoMan2_Frlg
	goto_if_set FLAG_RESCUED_LOSTELLE, TwoIsland_JoyfulGameCorner_EventScript_GetGamesGoingSoon
	msgbox TwoIsland_JoyfulGameCorner_Text_NotRunningAnyGamesToday
	release
	end

TwoIsland_JoyfulGameCorner_EventScript_GetGamesGoingSoon::
	msgbox TwoIsland_JoyfulGameCorner_Text_GetGamesGoingSoon
	release
	end

@ Only referred to as Lostelles Daddy in text
TwoIsland_JoyfulGameCorner_EventScript_LostellesDaddy::
	lock
	faceplayer
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 4, JoyfulGameCorner_EventScript_MinigameAttendant_Frlg
	goto_if_set FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER, TwoIsland_JoyfulGameCorner_EventScript_GetGameCornerRunning
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 3, TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite
	msgbox TwoIsland_JoyfulGameCorner_Text_PleaseGoToThreeIsland
	release
	end

TwoIsland_JoyfulGameCorner_EventScript_GiveDaddyMeteorite::
	goto_if_set FLAG_NO_ROOM_FOR_JOYFUL_GAME_CORNER_MOON_STONE, TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone
	msgbox TwoIsland_JoyfulGameCorner_Text_ThisIsForMe
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 2
	textcolor NPC_TEXT_COLOR_NEUTRAL
	playfanfare MUS_OBTAIN_TMHM
	message TwoIsland_JoyfulGameCorner_Text_HandedMeteoriteToLostellesDaddy
	waitmessage
	waitfanfare
	call EventScript_RestorePrevTextColor
	removeitem ITEM_METEORITE
	msgbox TwoIsland_JoyfulGameCorner_Text_OhThisIsFromBill
	goto TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone
	end

TwoIsland_JoyfulGameCorner_EventScript_ReceiveMoonStone::
	checkitemspace ITEM_MOON_STONE
	goto_if_eq VAR_RESULT, FALSE, TwoIsland_JoyfulGameCorner_EventScript_NoRoomForMoonStone
	additem ITEM_MOON_STONE
	setflag FLAG_GOT_MOON_STONE_FROM_JOYFUL_GAME_CORNER
	msgreceiveditem TwoIsland_JoyfulGameCorner_Text_ReceivedMoonStoneFromLostellesDaddy, ITEM_MOON_STONE
	release
	end

TwoIsland_JoyfulGameCorner_EventScript_GetGameCornerRunning::
	msgbox TwoIsland_JoyfulGameCorner_Text_IllGetGameCornerRunning
	release
	end

TwoIsland_JoyfulGameCorner_EventScript_NoRoomForMoonStone::
	setflag FLAG_NO_ROOM_FOR_JOYFUL_GAME_CORNER_MOON_STONE
	msgbox TwoIsland_JoyfulGameCorner_Text_NotGoingToFitInBag
	release
	end

TwoIsland_JoyfulGameCorner_EventScript_Lostelle::
	lock
	faceplayer
	msgbox TwoIsland_JoyfulGameCorner_Text_PleaseShowMeYouBeingCool
	release
	end

TwoIsland_JoyfulGameCorner_Text_WhereHasLostelleGottenTo::
	.string "Wo ist IRRMA heute?\p"
	.string "Genau um diese Zeit bringt\n"
	.string "sie mir immer mein Mittagessen…$"

TwoIsland_JoyfulGameCorner_Text_PleaseHelpFindLostelle::
	.string "Hm? Du da!\n"
	.string "Bist du ein Freund von IRRMA?\p"
	.string "Hast du IRRMA hier gesehen?\n"
	.string "Ich weiß nicht, wo sie ist. Sie\l"
	.string "sollte hier vor langer Zeit vorbei\l"
	.string "gekommen sein.\l"
	.string "IRRMA ist süß - sie sieht\l"
	.string "mir ähnlich - was ist, wenn…\p"
	.string "Was wäre, wenn meiner IRRMA\n"
	.string "etwas zugestoßen ist?!?\p"
	.string "Bitte hilf mir, sie zu finden!\n"
	.string "Bitte suche auf EILAND DREI\l"
	.string "nach ihr!$"

TwoIsland_JoyfulGameCorner_Text_IsThisOnlyThreeIsland::
	.string "Häh? Das ist die SPIELHALLE?\n"
	.string "Wie tief kann man noch sinken?\p"
	.string "Diese Narren…\p"
	.string "Sie sagten, sie würden auf der\n"
	.string "Insel warten, also, wo sind sie?\p"
	.string "Heh du! Ist das hier das einzige\n"
	.string "EILAND DREI?$"

TwoIsland_JoyfulGameCorner_Text_ThisIsTwoIslandMoveIt::
	.string "Versuch aufzuwachen, bevor du aus\n"
	.string "dem Bett kriechst, du Hallodri!\p"
	.string "Das ist EILAND ZWEI!\p"
	.string "Beweg dich und nimm\n"
	.string "deine Dreckschleuder von\l"
	.string "Motorrad mit!$"

TwoIsland_JoyfulGameCorner_Text_TheseIslandsAreConfusing::
	.string "Häh…\n"
	.string "Oh, oh, hab dich!\p"
	.string "Tss…\n"
	.string "Diese Inseln sind verwirrend…$"

TwoIsland_JoyfulGameCorner_Text_PunkScuffedUpMyFloor::
	.string "Sieh dir das nur an!\n"
	.string "Dieser Hallodri hat meinen\l"
	.string "Teppich abgenutzt!$"

TwoIsland_JoyfulGameCorner_Text_PleaseGoToThreeIsland::
	.string "Heh! Hör zu! Ich flehe dich an!\n"
	.string "Geh nach EILAND DREI!\p"
	.string "Falls meiner IRRMA etwas\n"
	.string "zustößt…\p"
	.string "Mein Haus auf EILAND DREI hat\n"
	.string "ein rotes Dach!\p"
	.string "Vielleicht taucht sie hier noch\n"
	.string "auf, daher kann ich nicht weg!\p"
	.string "Daher muss ich dich darum bitten!$"

TwoIsland_JoyfulGameCorner_Text_NotRunningAnyGamesToday::
	.string "Es tut mir Leid!\n"
	.string "Heute gibt es hier keine Spiele!$"

TwoIsland_JoyfulGameCorner_Text_GetGamesGoingSoon::
	.string "Wir haben aber bald einige\n"
	.string "Spielchen für dich!$"

TwoIsland_JoyfulGameCorner_Text_YouRescuedLostelle::
	.string "Du hast also IRRMA gerettet?\n"
	.string "Wie kann ich dir danken?\p"
	.string "IRRMA, Schnuckepuck,\n"
	.string "verzeih mir!\l"
	.string "Papsi wusste nicht, dass du Angst\l"
	.string "und Probleme hattest!$"

TwoIsland_JoyfulGameCorner_Text_LostelleItsOkayDaddy::
	.string "IRRMA: Ist schon gut, Papsi!\n"
	.string "Ich habe mich mit {VAR}\l"
	.string "angefreundet!$"

TwoIsland_JoyfulGameCorner_Text_ThisIsForMe::
	.string "Oh, was ist das?\n"
	.string "Das ist für mich?\p"
	.string "Woher wusstest du, dass ich seltene\n"
	.string "Gesteine liebe?\p"
	.string "Du weißt, wie man einen Kerl\n"
	.string "glücklich macht!$"

TwoIsland_JoyfulGameCorner_Text_HandedMeteoriteToLostellesDaddy::
	.string "{PLAYER} handed the METEORITE\n"
	.string "to LOSTELLE's daddy.$"

TwoIsland_JoyfulGameCorner_Text_OhThisIsFromBill::
	.string "Oh, das ist von BILL!\n"
	.string "Richte ihm meinen Dank aus!\p"
	.string "Du warst einfach fantastisch!\n"
	.string "Das ist für dich!$"

TwoIsland_JoyfulGameCorner_Text_ReceivedMoonStoneFromLostellesDaddy::
	.string "{PLAYER} received a MOON STONE\n"
	.string "from LOSTELLE's daddy.$"

TwoIsland_JoyfulGameCorner_Text_NotGoingToFitInBag::
	.string "In deinem BEUTEL ist leider\n"
	.string "kein Platz mehr…$"

TwoIsland_JoyfulGameCorner_Text_IllGetGameCornerRunning::
	.string "O.K. Die Spielhalle ist gleich\n"
	.string "geöffnet.\p"
	.string "Bringe einen Freund zum\n"
	.string "Spielen mit!$"

TwoIsland_JoyfulGameCorner_Text_PleaseShowMeYouBeingCool::
	.string "Hör zu!\p"
	.string "Bitte zeig mir erneut, wie cool\n"
	.string "du bist!$"


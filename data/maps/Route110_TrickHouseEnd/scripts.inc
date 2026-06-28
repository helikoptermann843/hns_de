Route110_TrickHouseEnd_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Route110_TrickHouseEnd_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHouseEnd_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_TrickHouseEnd_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route110_TrickHouseEnd_OnWarp
	.byte 0

Route110_TrickHouseEnd_OnResume:
	call_if_eq VAR_TEMP_1, 1, Route110_TrickHouseEnd_EventScript_SetDoorClosedMetatile
	end

Route110_TrickHouseEnd_OnTransition:
	setvar VAR_TEMP_1, 0
	setvar VAR_TEMP_2, 0
	special SetTrickHouseNuggetFlag
	end

Route110_TrickHouseEnd_OnWarp:
	map_script_2 VAR_TEMP_2, 0, Route110_TrickHouseEnd_EventScript_SetTrickMasterPos
	.2byte 0

Route110_TrickHouseEnd_EventScript_SetTrickMasterPos::
	addobject LOCALID_TRICK_MASTER_END
	showobjectat LOCALID_TRICK_MASTER_END, MAP_ROUTE110_TRICK_HOUSE_END
	turnobject LOCALID_TRICK_MASTER_END, DIR_EAST
	end

Route110_TrickHouseEnd_OnFrame:
	map_script_2 VAR_TEMP_1, 0, Route110_TrickHouseEnd_EventScript_CloseDoor
	.2byte 0

Route110_TrickHouseEnd_EventScript_CloseDoor::
	setvar VAR_TEMP_1, 1
	call Route110_TrickHouseEnd_EventScript_SetDoorClosedMetatile
	special DrawWholeMapView
	end

Route110_TrickHouseEnd_EventScript_SetDoorClosedMetatile::
	setmetatile 10, 1, METATILE_GenericBuilding_TrickHouse_Door_Closed, TRUE
	return

Route110_TrickHouseEnd_EventScript_TrickMaster::
	lock
	faceplayer
	msgbox Route110_TrickHouseEnd_Text_YouveMadeItToMe, MSGBOX_DEFAULT
	setvar VAR_TEMP_2, 1
	switch VAR_TRICK_HOUSE_LEVEL
	case 0, Route110_TrickHouseEnd_EventScript_CompletedPuzzle1
	case 1, Route110_TrickHouseEnd_EventScript_CompletedPuzzle2
	case 2, Route110_TrickHouseEnd_EventScript_CompletedPuzzle3
	case 3, Route110_TrickHouseEnd_EventScript_CompletedPuzzle4
	case 4, Route110_TrickHouseEnd_EventScript_CompletedPuzzle5
	case 5, Route110_TrickHouseEnd_EventScript_CompletedPuzzle6
	case 6, Route110_TrickHouseEnd_EventScript_CompletedPuzzle7
	case 7, Route110_TrickHouseEnd_EventScript_CompletedPuzzle8
	end

Route110_TrickHouseEnd_EventScript_CompletedPuzzle1::
	msgbox Route110_TrickHouseEnd_Text_AllNightToPlantTrees, MSGBOX_DEFAULT
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
	giveitem ITEM_RARE_CANDY
	call_if_eq VAR_RESULT, FALSE, Route110_TrickHouseEnd_EventScript_BagFull
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
	closemessage
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
	release
	end

Route110_TrickHouseEnd_EventScript_CompletedPuzzle2::
	msgbox Route110_TrickHouseEnd_Text_AllNightToMakeMaze, MSGBOX_DEFAULT
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
	giveitem ITEM_TIMER_BALL
	call_if_eq VAR_RESULT, FALSE, Route110_TrickHouseEnd_EventScript_BagFull
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
	closemessage
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
	release
	end

Route110_TrickHouseEnd_EventScript_CompletedPuzzle3::
	msgbox Route110_TrickHouseEnd_Text_AllNightToPreparePanels, MSGBOX_DEFAULT
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
	giveitem ITEM_HARD_STONE
	call_if_eq VAR_RESULT, FALSE, Route110_TrickHouseEnd_EventScript_BagFull
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
	closemessage
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
	release
	end

Route110_TrickHouseEnd_EventScript_CompletedPuzzle4::
	msgbox Route110_TrickHouseEnd_Text_AllNightToShoveBoulders, MSGBOX_DEFAULT
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
	giveitem ITEM_SMOKE_BALL
	call_if_eq VAR_RESULT, FALSE, Route110_TrickHouseEnd_EventScript_BagFull
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
	closemessage
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
	release
	end

Route110_TrickHouseEnd_EventScript_CompletedPuzzle5::
	msgbox Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls, MSGBOX_DEFAULT
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
	giveitem ITEM_TM_TAUNT
	call_if_eq VAR_RESULT, FALSE, Route110_TrickHouseEnd_EventScript_BagFull
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
	closemessage
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
	release
	end

Route110_TrickHouseEnd_EventScript_CompletedPuzzle6::
	msgbox Route110_TrickHouseEnd_Text_AllNightToInstallDoors, MSGBOX_DEFAULT
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
	giveitem ITEM_MAGNET
	call_if_eq VAR_RESULT, FALSE, Route110_TrickHouseEnd_EventScript_BagFull
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
	closemessage
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
	release
	end

Route110_TrickHouseEnd_EventScript_CompletedPuzzle7::
	msgbox Route110_TrickHouseEnd_Text_AllNightSettingUpArrows, MSGBOX_DEFAULT
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
	giveitem ITEM_PP_MAX
	call_if_eq VAR_RESULT, FALSE, Route110_TrickHouseEnd_EventScript_BagFull
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
	closemessage
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
	release
	end

Route110_TrickHouseEnd_EventScript_CompletedPuzzle8::
	msgbox Route110_TrickHouseEnd_Text_AllNightPolishingFloors, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_SOUTH, Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwaySouth
	call_if_eq VAR_FACING, DIR_NORTH, Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayNorth
	call_if_eq VAR_FACING, DIR_WEST, Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayWest
	call_if_eq VAR_FACING, DIR_EAST, Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayEast
	delay 30
	msgbox Route110_TrickHouseEnd_Text_FountainOfIdeasRunDry, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_FacePlayer
	waitmovement 0
	delay 30
	msgbox Route110_TrickHouseEnd_Text_DefeatedMePreferWhichTent, MSGBOX_DEFAULT
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
	call Route110_TrickHouseEnd_EventScript_ChooseTent
	call_if_eq VAR_RESULT, FALSE, Route110_TrickHouseEnd_EventScript_NoRoomForTent
	msgbox Route110_TrickHouseEnd_Text_LeavingOnJourney, MSGBOX_DEFAULT
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
	special ResetTrickHouseNuggetFlag
	release
	end

Route110_TrickHouseEnd_EventScript_ChooseTent::
	multichoice 0, 0, MULTI_TENT, TRUE
	switch VAR_RESULT
	case 0, Route110_TrickHouseEnd_EventScript_GiveRedTent
	goto Route110_TrickHouseEnd_EventScript_GiveBlueTent

Route110_TrickHouseEnd_EventScript_GiveRedTent::
	givedecoration DECOR_RED_TENT
	return

Route110_TrickHouseEnd_EventScript_GiveBlueTent::
	givedecoration DECOR_BLUE_TENT
	return

Route110_TrickHouseEnd_EventScript_TrickMasterExit::
	applymovement LOCALID_TRICK_MASTER_END, Route110_TrickHouse_Movement_TrickMasterSpin
	waitmovement 0
	playse SE_M_EXPLOSION
	applymovement LOCALID_TRICK_MASTER_END, Route110_TrickHouse_Movement_TrickMasterJumpAway
	waitmovement 0
	removeobject LOCALID_TRICK_MASTER_END
	addvar VAR_TRICK_HOUSE_LEVEL, 1
	return

Route110_TrickHouseEnd_EventScript_BagFull::
	call Common_EventScript_BagIsFull
	msgbox Route110_TrickHouseEnd_Text_NoRoomForThis, MSGBOX_DEFAULT
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 1
	return

Route110_TrickHouseEnd_EventScript_NoRoomForTent::
	call Common_EventScript_NoRoomForDecor
	msgbox Route110_TrickHouseEnd_Text_NoRoomInPC, MSGBOX_DEFAULT
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 1
	return

Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwaySouth::
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayNorth::
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayWest::
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayEast::
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

Route110_TrickHouseEnd_EventScript_TrickMasterExitTrigger::
	lockall
	turnobject LOCALID_TRICK_MASTER_END, DIR_WEST
	playse SE_PIN
	applymovement LOCALID_TRICK_MASTER_END, Common_Movement_ExclamationMark
	waitmovement 0
	delay 20
	applymovement LOCALID_TRICK_MASTER_END, Route110_TrickHouseEnd_Movement_TrickMasterSurprise
	waitmovement 0
	playse SE_M_EXPLOSION
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox Route110_TrickHouseEnd_Text_YoureIgnoringMe, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Route110_TrickHouseEnd_Movement_KeepPlayerInRoom
	waitmovement 0
	delay 4
	turnobject LOCALID_TRICK_MASTER_END, DIR_EAST
	releaseall
	end

Route110_TrickHouseEnd_Movement_KeepPlayerInRoom:
	walk_down
	step_end

Route110_TrickHouseEnd_Movement_TrickMasterSurprise:
	jump_in_place_left
	step_end

Route110_TrickHouseEnd_Text_YouveMadeItToMe:
	.string "Argh! Du hast mich gefunden?\l"
	.string "Hmmm… Du bist verdammt clever!$"

Route110_TrickHouseEnd_Text_AllNightToPlantTrees:
	.string "Ich habe die ganze Nacht gebraucht,\n"
	.string "all die Bäume zu pflanzen…\p"
	.string "Du bist meiner Größe fast ebenbürtig,\n"
	.string "bis auf ein, zwei, drei, vier, fünf,\n"
	.string "sechs\l"
	.string "Punkte!$"

Route110_TrickHouseEnd_Text_AllNightToMakeMaze:
	.string "Ich habe die ganze Nacht gebraucht,\n"
	.string "das Labyrinth anzulegen…\p"
	.string "Du bist meiner Größe fast ebenbürtig,\n"
	.string "bis auf ein, zwei, drei, vier, fünf \l"
	.string "Punkte!$"

Route110_TrickHouseEnd_Text_AllNightToPreparePanels:
	.string "Ich habe die ganze Nacht gebraucht,\n"
	.string "die Wände zu platzieren…\p"
	.string "Du bist meiner Größe fast ebenbürtig,\n"
	.string "bis auf ein, zwei, drei, vier Punkte!$"

Route110_TrickHouseEnd_Text_AllNightToShoveBoulders:
	.string "Ich habe die ganze Nacht gebraucht,\n"
	.string "die Felsen hin- und herzuschieben…\p"
	.string "Du bist meiner Größe fast ebenbürtig,\n"
	.string "bis auf ein, zwei, drei Punkte!$"

Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls:
	.string "Ich habe die ganze Nacht gebraucht,\n"
	.string "die ROBOPUPPEn zu konstruieren und\l"
	.string "mir das Quiz auszudenken…\p"
	.string "Du bist meiner Größe fast ebenbürtig,\n"
	.string "bis auf ein oder zwei Punkte!$"

Route110_TrickHouseEnd_Text_AllNightToInstallDoors:
	.string "Ich habe die ganze Nacht gebraucht,\n"
	.string "die Türen zu installieren…\p"
	.string "Du bist meiner Größe fast ebenbürtig!$"

Route110_TrickHouseEnd_Text_AllNightSettingUpArrows:
	.string "Ich habe die ganze Nacht gebraucht,\n"
	.string "die Pfeile anzubringen.\p"
	.string "Du bist meiner Größe ebenbürtig!$"

Route110_TrickHouseEnd_Text_AllNightPolishingFloors:
	.string "Ich habe die ganze Nacht gebraucht,\n"
	.string "den Boden zu polieren…\p"
	.string "Du bist mir weit überlegen!\n"
	.string "Unmöglich…$"

Route110_TrickHouseEnd_Text_FountainOfIdeasRunDry:
	.string "Was soll ich nur tun?\n"
	.string "Die Quelle der Ideen für meine Tricks\l"
	.string "ist trocken gelegt…\p"
	.string "Vielleicht ist es an der Zeit, durch\n"
	.string "die\n"
	.string "Lande zu reisen und mich für neue\l"
	.string "Tricks inspirieren zu lassen…$"

Route110_TrickHouseEnd_Text_DefeatedMePreferWhichTent:
	.string "Ich hasse es, zuzugeben, dass ich be-\n"
	.string "siegt wurde. Du hast mich geschlagen!\n"
	.string "\p"
	.string "Mein Charisma muss dich gefangen\n"
	.string "genommen haben, da du immer wieder\l"
	.string "herkommst. Ja, so muss es sein!\p"
	.string "Aber das hat nichts mit meiner\n"
	.string "Niederlage zu tun!\p"
	.string "Als Zeichen der Freundschaft zwischen\n"
	.string "dir, dem Aufstrebenden, und mir, dem\l"
	.string "Genie, überreiche ich dir dieses\l"
	.string "Andenken!\p"
	.string "Eigentlich sind es zwei Andenken - \n"
	.string "ein ROTES ZELT und ein BLAUES ZELT.\l"
	.string "Welches möchtest du haben?$"

Route110_TrickHouseEnd_Text_NoRoomInPC:
	.string "Was? Du hast keinen Platz im PC?\n"
	.string "Und was soll ich jetzt damit machen?\p"
	.string "Sei froh, dass ich so nett und rück-\n"
	.string "sichtsvoll bin. Ich verwahre es für\l"
	.string "dich. Komm einfach später wieder.$"

Route110_TrickHouseEnd_Text_LeavingOnJourney:
	.string "… … … … … …\p"
	.string "Ich gehe jetzt auf eine Entdeckungs-\n"
	.string "reise. Auf die Suche nach neuen\n"
	.string "Tricks. \p"
	.string "Ich hoffe, du besuchst mich eines\n"
	.string "Tages wieder und unterhältst mich.\p"
	.string "Für heute lebe wohl!$"

Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward:
	.string "Gut!\n"
	.string "Du hast dir diese Belohnung verdient!$"

Route110_TrickHouseEnd_Text_NoRoomForThis:
	.string "Was? Du hast keinen Platz dafür?\n"
	.string "Wie viele Items schleppst du denn mit?\n"
	.string "\p"
	.string "Aber du kannst dir deine Belohnung\n"
	.string "auch später bei mir abholen.$"

Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou:
	.string "Putz dir das selbstgefällige Grinsen\n"
	.string "von der Backe! Noch hast du nicht\l"
	.string "gewonnen!\p"
	.string "Ich werde neue Tricks erfinden, die\n"
	.string "dich zu Fall bringen werden. Zum\n"
	.string "Grinsen \p"
	.string "hast du erst Grund, wenn du es\n"
	.string "geschafft hast.\p"
	.string "Komm wieder, wenn ich die nächste\n"
	.string "interessante Installation fertig habe.$"

Route110_TrickHouseEnd_Text_YoureIgnoringMe:
	.string "Nun, nun! Du ignorierst mich?\n"
	.string "Das bricht mir glatt das Herz!$"


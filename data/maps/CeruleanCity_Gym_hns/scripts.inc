CeruleanCity_Gym_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CeruleanCity_Gym_OnFrame
	.byte 0

CeruleanCity_Gym_OnFrame::
	map_script_2 VAR_KANTO_ROCKET_STORY_STATE, 2,  CeruleanCity_Gym_EventScript_RocketGrunt
	map_script_2 VAR_TEMP_0, 0,  CeruleanCity_Gym_EventScript_TryMachinePart
	.2byte 0

CeruleanCity_Gym_EventScript_RocketGrunt::
	lock
	applymovement LOCALID_CERULEAN_GYM_ROCKET, CeruleanCity_Gym_Movement_GruntBumpPlayer
	delay 20
	playse SE_BANG
	waitmovement 0

	msgbox CeruleanGym_Text_GruntIntro, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_CERULEAN_GYM_ROCKET, Common_Movement_ExclamationMark
	delay 60
	applymovement LOCALID_CERULEAN_GYM_ROCKET, CeruleanCity_Gym_Movement_GruntWalkBack
	waitmovement 0
	msgbox CeruleanGym_Text_GruntBigMistake, MSGBOX_DEFAULT
	applymovement LOCALID_CERULEAN_GYM_ROCKET, CeruleanCity_Gym_Movement_GruntWalkToPlayerAgain
	waitmovement 0
	msgbox CeruleanGym_Text_GruntBye, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_Gym_Movement_PlayerSlide
	delay 10
	applymovement LOCALID_CERULEAN_GYM_ROCKET, CeruleanCity_Gym_Movement_GruntLeave
	waitmovement 0
	fadescreenswapbuffers FADE_TO_BLACK
	playse SE_EXIT
	setflag FLAG_HIDE_CERULEAN_GYM_ROCKET
	removeobject LOCALID_CERULEAN_GYM_ROCKET
	fadescreenswapbuffers FADE_FROM_BLACK
	clearflag FLAG_HIDE_CERULEAN_CAPE_ROCKET
	setvar VAR_KANTO_ROCKET_STORY_STATE, 3
	release
	end

CeruleanCity_Gym_EventScript_TryMachinePart::
	goto_if_eq VAR_KANTO_ROCKET_STORY_STATE, 5, CeruleanCity_Gym_EventScript_MachinePart
	setvar VAR_TEMP_0, 1
	end

CeruleanCity_Gym_EventScript_MachinePart::
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, CeruleanCity_Movement_CameraPanUp
	waitmovement 0
	delay 30
	setvar VAR_0x8004, 5  @ x
	setvar VAR_0x8005, 13  @ y
	playse SE_PIN
	call Route110_TrickHouseEntrance_EventScript_DoHidingSpotSparkle
	delay 55
	applymovement OBJ_EVENT_ID_CAMERA, CeruleanCity_Movement_CameraPanDown
	waitmovement 0
	special RemoveCameraObject
	setvar VAR_TEMP_0, 1
	end

CeruleanCity_Gym_EventScript_MachinePartItem::
	goto_if_lt VAR_KANTO_ROCKET_STORY_STATE, 5, CeruleanCity_Gym_EventScript_DoNothing
	goto_if_ge VAR_KANTO_ROCKET_STORY_STATE, 6, CeruleanCity_Gym_EventScript_DoNothing
	finditem ITEM_MACHINE_PART
	setvar VAR_KANTO_ROCKET_STORY_STATE, 6
	setflag FLAG_HIDDEN_ITEM_MACHINE_PART
	end

CeruleanCity_Gym_EventScript_DoNothing::
	end

CeruleanCity_Movement_CameraPanUp:
	walk_up
	walk_up
	walk_up
	step_end

CeruleanCity_Movement_CameraPanDown:
	walk_down
	walk_down
	walk_down
	step_end

CeruleanCity_Gym_Movement_GruntBumpPlayer:
	walk_fast_down
	walk_fast_down
	walk_in_place_fast_down
	lock_facing_direction
	jump_up
	unlock_facing_direction
	delay_16
	walk_down
	step_end

CeruleanCity_Gym_Movement_GruntWalkBack:
	lock_facing_direction
	walk_slow_up
	walk_slow_up
	unlock_facing_direction
	step_end

CeruleanCity_Gym_Movement_GruntWalkToPlayerAgain:
	walk_down
	walk_down
	step_end

CeruleanCity_Gym_Movement_PlayerSlide:
	lock_facing_direction
	walk_fast_right
	unlock_facing_direction
	step_end

CeruleanCity_Gym_Movement_GruntLeave:
	walk_fast_down
	walk_in_place_fast_down
	step_end

CeruleanCity_Gym_EventScript_Statue::
	lockall
	goto_if_set FLAG_BADGE10_GET, CeruleanCity_Gym_EventScript_GymStatuePostVictory
	msgbox CeruleanCity_Gym_Text_GymStatue
	releaseall
	end

CeruleanCity_Gym_EventScript_StatueDuringRocket::
	msgbox CeruleanGym_Text_Note, MSGBOX_SIGN
	end

CeruleanCity_Gym_EventScript_GymStatuePostVictory::
	msgbox CeruleanCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

CeruleanGym_EventScript_Diana::
	trainerbattle_single TRAINER_DIANA_HNS, CeruleanGym_Text_SwimmerfDianaSeen, CeruleanGym_Text_SwimmerfDianaBeaten
	msgbox CeruleanGym_Text_SwimmerfDianaAfter, MSGBOX_AUTOCLOSE
	end

CeruleanGym_EventScript_Briana::
	trainerbattle_single TRAINER_BRIANA_HNS, CeruleanGym_Text_SwimmerfBrianaSeen, CeruleanGym_Text_SwimmerfBrianaBeaten
	msgbox CeruleanGym_Text_SwimmerfBrianaAfter, MSGBOX_AUTOCLOSE
	end

CeruleanGym_EventScript_Parker::
	trainerbattle_single TRAINER_PARKER_HNS, CeruleanGym_Text_SwimmermParkerSeen, CeruleanGym_Text_SwimmermParkerBeaten
	msgbox CeruleanGym_Text_SwimmermParkerAfter, MSGBOX_AUTOCLOSE
	end

CeruleanCity_Gym_EventScript_GymGuy::
	goto_if_set FLAG_DEFEATED_CERULEAN_GYM, CeruleanCity_Gym_EventScript_GymGuyAfter
	msgbox CeruleanGym_Text_GuideIntro, MSGBOX_NPC
	end

CeruleanCity_Gym_EventScript_GymGuyAfter::
	msgbox CeruleanGym_Text_GuideWin, MSGBOX_NPC
	end

CeruleanCity_Gym_Text_GymStatue::
    .string "Pokémon-Arena von Azuria City\n"
    .string "Leiterin: Misty\p"
	.string "Anerkannte Trainer:\n"
	.string "Blau, Rot$"

CeruleanCity_Gym_Text_GymStatuePlayerWon::
    .string "Pokémon-Arena von Azuria City\n"
    .string "Leiterin: Misty\p"
	.string "Anerkannte Trainer:\n"
	.string "Blau, Rot, {PLAYER}$"

CeruleanGym_Text_Note:
	.string "Tut mir leid, ich bin erstmal fort.\n"
	.string "Misty, Arenaleiterin\p"
	.string "Da Misty nicht hier ist,\n"
	.string "sind wir auch erstmal nicht hier.\l"
	.string "Die Arena-Trainer$"


CeruleanCity_Gym_EventScript_Misty::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_CERULEAN_GYM, CeruleanCity_Gym_EventScript_Misty_Defeated
	msgbox CeruleanGym_Text_MistyIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_MISTY_HNS, CeruleanGym_Text_MistyWinLoss
	message CeruleanGym_Text_ReceivedBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_BADGE10_GET
	setflag FLAG_DEFEATED_CERULEAN_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 10
	call Common_EventScript_SetGymTrainers_hns
	msgbox CeruleanGym_Text_MistyTm, MSGBOX_DEFAULT
	giveitem ITEM_TM_WATER_PULSE
	clearflag FLAG_HIDE_CAPE_MISTY
	call_if_eq VAR_SUICUNE_ENCOUNTERS, 5, CeruleanCity_Gym_SetSuicuneScene
	closemessage
	release
	end

CeruleanCity_Gym_SetSuicuneScene::
	setvar VAR_SUICUNE_ENCOUNTERS, 6
	clearflag FLAG_HIDE_ROUTE25_SUICUNE
	return

CeruleanCity_Gym_EventScript_Misty_Defeated::
	msgbox CeruleanGym_Text_MistyFightDone, MSGBOX_DEFAULT
	closemessage
	release
	end

CeruleanGym_Text_GruntIntro:
	.string "Oh! Sorry!\n"
	.string "Bist du auch not verletzt?\l"
	.string "Ich bin total busy, beschäftigt!\l"
	.string "No time, um mit dir here Zeit mit\l"
	.string "lange Gespräche zu verschwenden!\l"
	.string "Wenn mich here jemand sieht, you know,\l"
	.string "then ich bin in große trouble!$"

CeruleanGym_Text_GruntBigMistake:
	.string "…Aber oh no!\n"
	.string "Du hast me ja schon gesehen!\l"
	.string "Das war ein groß big Fehler von mir!$"

CeruleanGym_Text_GruntBye:
	.string "Hey, du! Vergiss, dass du mich\n"
	.string "gesehen hast okay?\p"
	.string "Du siehst, hörst, weißt nichts,\n"
	.string "okay? Tschüss, Kind! Nichts!\p"
	.string "Bye-bye!$"

CeruleanGym_Text_Note1:
	.string "Sorry, ich bin eine Weile weg.\n"
	.string "Misty, Arenaleiterin\p"
	.string "Da Misty weg ist, sind wir auch\n"
	.string "nicht da. Arena-Trainer$"

CeruleanGym_Text_MistyIntro:
	.string "Misty: Ah, unser Störenfried!\p"
	.string "Du magst dir in Johto vielleicht viele\n"
	.string "Orden erkämpft haben, aber ich rate\l"
	.string "dir, mich nicht zu unterschätzen!\p"
	.string "Meine Wasser-Pokémon haben’s drauf!$"

CeruleanGym_Text_MistyWinLoss:
	.string "Misty: Mann, du bist wirklich gut…\p"
	.string "Ich gebe es offen zu! Du hast\n"
	.string "wirklich einiges an Talent…\p"
	.string "Hier hast du den Quellorden!$"

CeruleanGym_Text_ReceivedBadge:
	.string "{PLAYER} erhält den Quellorden!$"

CeruleanGym_Text_MistyFightDone:
	.string "Misty: Gibt es viele starke\n"
	.string "Trainer in Johto?\l"
	.string "Wie dich meine ich?\p"
	.string "Eines Tages werde ich reisen,\n"
	.string "um gegen einige geschickte\l"
	.string "Trainer zu kämpfen.$"

CeruleanGym_Text_MistyRematch:
	.string "Misty: Wow, du bist jetzt der Kanto-\n"
	.string "Champion!\p"
	.string "Unglaublich! Du bist weit gekommen,\n"
	.string "{PLAYER}.\p"
	.string "Aber ich gebe nicht auf.\p"
	.string "Willst du ein Rückkampf mit mir?$"

CeruleanGym_Text_MistyRematchDefeat:
	.string "Misty: Du bist wirklich gut…$"

CeruleanGym_Text_SwimmerfDianaSeen:
	.string "Es tut mir leid, dass ich so lange\n"
	.string "weg war. Lass uns anfangen!$"

CeruleanGym_Text_SwimmerfDianaBeaten:
	.string "Ich gebe auf! Du\n"
	.string "hast gewonnen!$"

CeruleanGym_Text_SwimmerfDianaAfter:
	.string "Ich werde hier ganz friedlich meine\n"
	.string "Bahnen abschwimmen!$"

CeruleanGym_Text_SwimmerfBrianaSeen:
	.string "Lass dich nicht von meinem eleganten\n"
	.string "Schwimmen einschüchtern.$"

CeruleanGym_Text_SwimmerfBrianaBeaten:
	.string "Ooh, du hast mich ruhig besiegt…$"

CeruleanGym_Text_SwimmerfBrianaAfter:
	.string "Sei nicht zu überheblich, dass du\n"
	.string "mich besiegt hast.\p"
	.string "Misty wird dich zerstören, wenn du\n"
	.string "selbstzufrieden wirst.$"

CeruleanGym_Text_SwimmermParkerSeen:
	.string "Glugger…\p"
	.string "Zuerst kriegst du’s mit mir zu tun!\n"
	.string "Los, greife mich an!$"

CeruleanGym_Text_SwimmermParkerBeaten:
	.string "Das darf doch nicht\n"
	.string "wahr sein…$"

CeruleanGym_Text_SwimmermParkerAfter:
	.string "Misty ist in den letzten Jahren\n"
	.string "viel besser geworden.\p"
	.string "Lass deine Wachsamkeit nicht\n"
	.string "nach, sonst wirst du zerstört!$"

CeruleanGym_Text_GuideIntro:
	.string "Oh, hi, zukünftiger Champ!\n"
	.string "Als Misty und die anderen weg waren, bin\l"
	.string "ich mich auch etwas amüsieren gegangen.\l"
	.string "Hihihi…$"

CeruleanGym_Text_GuideWin:
	.string "Wow, du bist wirklich ganz schön stark!\n"
	.string "Das war echt ein toller Kampf!$"

CeruleanGym_Text_MistyTm:
	.string "Hier, nimm noch das.$"

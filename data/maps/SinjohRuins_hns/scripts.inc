SinjohRuins_hns_MapScripts::
    map_script MAP_SCRIPT_ON_FRAME_TABLE, SinjohRuins_OnFrame
    map_script 	MAP_SCRIPT_ON_TRANSITION, SinjohRuins_hns_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, SinjohRuins_hns_OnLoad
	.byte 0

SinjohRuins_OnFrame::
	map_script_2 VAR_SINJOH_STORYLINE, 8, SinjohRuins_StairsScene
	.2byte 0

SinjohRuins_hns_OnTransition::
    call_if_eq VAR_SINJOH_STORYLINE, 9, SinjohRuins_StevenLanding
    call_if_eq VAR_SINJOH_STORYLINE, 10, SinjohRuins_StevenLanding
    call_if_eq VAR_SINJOH_STORYLINE, 11, SinjohRuins_StevenLanding
    call_if_eq VAR_SINJOH_STORYLINE, 12, SinjohRuins_StevenLanding
    callnative SetTimeBasedEncounters
	end

SinjohRuins_StevenLanding::
    setobjectxyperm LOCALID_SINJOHRUINS_STEVEN, 24, 31
    setobjectmovementtype LOCALID_SINJOHRUINS_STEVEN, MOVEMENT_TYPE_FACE_UP
    return

SinjohRuins_hns_OnLoad::
    call_if_ge VAR_PLATECOUNTER, 3, SinjohRuins_OpenRegirock
    call_if_ge VAR_PLATECOUNTER, 6, SinjohRuins_OpenRegice
    call_if_ge VAR_PLATECOUNTER, 9, SinjohRuins_OpenRegisteel
    call_if_ge VAR_PLATECOUNTER, 12, SinjohRuins_OpenRegieleki
    call_if_ge VAR_PLATECOUNTER, 15, SinjohRuins_OpenRegidrago
    call_if_ge VAR_PLATECOUNTER, 17, SinjohRuins_OpenArceus
    end

SinjohRuins_OpenRegirock::
    setmetatile 9, 44, 0x378, FALSE
    setmetatile 8, 44, 0x0BE, TRUE
    return
SinjohRuins_OpenRegice::
    setmetatile 7, 48, 0x370, FALSE
    setmetatile 6, 48, 0x0BE, TRUE
    return
SinjohRuins_OpenRegisteel::
    setmetatile 8, 54, 0x370, FALSE
    setmetatile 7, 54, 0x0BE, TRUE
    return
SinjohRuins_OpenRegieleki::
    setmetatile 38, 44, 0x371, FALSE
    setmetatile 39, 44, 0x0BD, TRUE
    return
SinjohRuins_OpenRegidrago::
    setmetatile 37, 49, 0x371, FALSE
    setmetatile 38, 49, 0x0BD, TRUE
    return

SinjohRuins_OpenArceus::
    @left stairs
    setmetatile 17, 32, 0x089, FALSE
    setmetatile 17, 33, 0x089, FALSE
    setmetatile 17, 34, 0x089, FALSE
    setmetatile 17, 35, 0x089, FALSE
    setmetatile 17, 36, 0x089, FALSE
    setmetatile 18, 32, 0x091, FALSE
    setmetatile 18, 33, 0x091, FALSE
    setmetatile 18, 34, 0x091, FALSE
    setmetatile 18, 35, 0x091, FALSE
    setmetatile 18, 36, 0x091, FALSE
    setmetatile 19, 32, 0x091, FALSE
    setmetatile 19, 33, 0x091, FALSE
    setmetatile 19, 34, 0x091, FALSE
    setmetatile 19, 35, 0x091, FALSE
    setmetatile 19, 36, 0x091, FALSE
    @right stairs
    setmetatile 29, 32, 0x089, FALSE
    setmetatile 29, 33, 0x089, FALSE
    setmetatile 29, 34, 0x089, FALSE
    setmetatile 29, 35, 0x089, FALSE
    setmetatile 29, 36, 0x089, FALSE
    setmetatile 30, 32, 0x091, FALSE
    setmetatile 30, 33, 0x091, FALSE
    setmetatile 30, 34, 0x091, FALSE
    setmetatile 30, 35, 0x091, FALSE
    setmetatile 30, 36, 0x091, FALSE
    setmetatile 31, 32, 0x091, FALSE
    setmetatile 31, 33, 0x091, FALSE
    setmetatile 31, 34, 0x091, FALSE
    setmetatile 31, 35, 0x091, FALSE
    setmetatile 31, 36, 0x091, FALSE
    return

SinjohRuins_StairsScene::
    lock
    setvar VAR_0x8004, 2  @ vertical pan
	setvar VAR_0x8005, 2  @ horizontal pan
	setvar VAR_0x8006, 40  @ num shakes
	setvar VAR_0x8007, 3  @ shake delay
	special ShakeCamera
    applymovement LOCALID_PLAYER, SinjohRuins_Movement_PlayerWalkRight
    opendoor 14, 52
	waitdooranim
    addobject LOCALID_SINJOHRUINS_STEVEN
    clearflag FLAG_HIDE_SINJOHRUINS_STEVEN
    applymovement LOCALID_SINJOHRUINS_STEVEN, Common_Movement_WalkDown1
    waitmovement LOCALID_SINJOHRUINS_STEVEN
    applymovement LOCALID_SINJOHRUINS_STEVEN, SinjohRuins_Movement_StevenWalkRight
    waitmovement 0
    closedoor 14, 52
	waitdooranim
    setvar VAR_0x8004, 2  @ vertical pan
	setvar VAR_0x8005, 2  @ horizontal pan
	setvar VAR_0x8006, 40  @ num shakes
	setvar VAR_0x8007, 3  @ shake delay
	special ShakeCamera
	waitstate
    waitmovement LOCALID_SINJOHRUINS_STEVEN
    waitmovement 0
    setvar VAR_0x8004, 2  @ vertical pan
	setvar VAR_0x8005, 2  @ horizontal pan
	setvar VAR_0x8006, 40  @ num shakes
	setvar VAR_0x8007, 3  @ shake delay
	special ShakeCamera
	waitstate
    special SpawnCameraObject
    applymovement OBJ_EVENT_ID_CAMERA, SinjohRuins_Movement_CameraPanUp
    waitmovement 0
    setvar VAR_0x8004, 2  @ vertical pan
	setvar VAR_0x8005, 2  @ horizontal pan
	setvar VAR_0x8006, 40  @ num shakes
	setvar VAR_0x8007, 3  @ shake delay
	special ShakeCamera
    setobjectxyperm LOCALID_SINJOHRUINS_STEVEN, 19, 52
    setobjectmovementtype LOCALID_SINJOHRUINS_STEVEN, MOVEMENT_TYPE_FACE_UP
    call SinjohRuins_OpenArceus
    special DrawWholeMapView
    delay 60
    applymovement OBJ_EVENT_ID_CAMERA, SinjohRuins_Movement_CameraPanDown
    waitmovement 0
    special RemoveCameraObject
    msgbox SinjohRuins_Text_StevenGotoStairs1, MSGBOX_AUTOCLOSE
    turnobject LOCALID_SINJOHRUINS_STEVEN, DIR_EAST
    delay 10
    turnobject LOCALID_PLAYER, DIR_WEST
    msgbox SinjohRuins_Text_StevenGotoStairs2, MSGBOX_AUTOCLOSE
    setvar VAR_SINJOH_STORYLINE, 9
    setvar VAR_PLATECOUNTER, 17
    applymovement LOCALID_SINJOHRUINS_STEVEN, SinjohRuins_Movement_StevenGoesToStairs
    waitmovement 0
    removeobject LOCALID_SINJOHRUINS_STEVEN
    setobjectxyperm LOCALID_SINJOHRUINS_STEVEN, 24, 31
    setobjectmovementtype LOCALID_SINJOHRUINS_STEVEN, MOVEMENT_TYPE_FACE_UP
    addobject LOCALID_SINJOHRUINS_STEVEN
    clearflag FLAG_HIDE_SINJOHRUINS_STEVEN
    setflag FLAG_HIDE_SINJOHRUINS_LAB_STEVEN
    setvar VAR_SINJOH_STORYLINE, 9
    release
    end

SinjohRuins_Text_StevenGotoStairs1:
	.string "Troy: Das kann nur eines bedeuten.$"

SinjohRuins_Text_StevenGotoStairs2:
	.string "{PLAYER}. Wir konnten die übrigen\n"
	.string "Schriftzeichen entschlüsseln…\p"
	.string "Wenn die Übersetzung stimmt, ist\n"
	.string "das Pokémon am oberen Ende der\l"
	.string "Treppe das mächtigste Wesen\l"
	.string "des Universums.\p"
	.string "Als ehemaliger Champ der Hoenn-\n"
	.string "Liga ist es meine Pflicht, sicherzu-\l"
	.string "stellen, dass du stark genug bist,\l"
	.string "ihm gegenüberzutreten.\p"
	.string "Erwarte mich auf dem Treppenabsatz,\n"
	.string "wenn du bereit bist.$"

SinjohRuins_Movement_StevenGoesToStairs:
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_right
    walk_diag_southeast
    walk_diag_southeast
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    step_end

SinjohRuins_Movement_CameraPanDown:
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_diag_southwest
    walk_diag_southwest
    walk_diag_southwest
    walk_diag_southwest
    step_end

SinjohRuins_Movement_CameraPanUp:
    walk_diag_northeast
    walk_diag_northeast
    walk_diag_northeast
    walk_diag_northeast
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    walk_up
    step_end

SinjohRuins_Movement_StevenWalkRight:
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_up
    step_end

SinjohRuins_Movement_PlayerWalkRight:
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_fast_right
    walk_up
    step_end
SinjohRuins_EventScript_TriggerStevenBattleRight::
    lock
    turnobject LOCALID_SINJOHRUINS_STEVEN, DIR_EAST
    msgbox SinjohRuins_Text_StevenReadytoBattle, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, FALSE, SinjohRuins_EventScript_TriggerPlayerLeaveRight
    call SinjohRuins_EventScript_StevenBattle
    setvar VAR_SINJOH_STORYLINE, 10
    release
    end
SinjohRuins_EventScript_TriggerPlayerLeaveRight::
    closemessage
    applymovement LOCALID_PLAYER, Common_Movement_WalkRight1
    waitmovement 0
    release
    end
SinjohRuins_EventScript_TriggerStevenBattleLeft::
    lock
    turnobject LOCALID_SINJOHRUINS_STEVEN, DIR_WEST
    msgbox SinjohRuins_Text_StevenReadytoBattle, MSGBOX_YESNO
    goto_if_eq VAR_RESULT, FALSE, SinjohRuins_EventScript_TriggerPlayerLeaveLeft
    call SinjohRuins_EventScript_StevenBattle
    setvar VAR_SINJOH_STORYLINE, 10
    release
    end
SinjohRuins_EventScript_TriggerPlayerLeaveLeft::
    closemessage
    applymovement LOCALID_PLAYER, Common_Movement_WalkLeft1
    waitmovement 0
    release
    end 

SinjohRuins_Movement_StevenLeaveRight:
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    step_end

SinjohRuins_Movement_StevenLeaveLeft:
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    walk_down
    step_end

SinjohRuins_EventScript_StevenBattle::
    msgbox SinjohRuins_Text_ChallengeSteven, MSGBOX_AUTOCLOSE
    trainerbattle_no_intro TRAINER_STEVEN_HNS, SinjohRuins_Text_StevenDefeat
    msgbox SinjohRuins_Text_StevenAfterBattle, MSGBOX_AUTOCLOSE
    giveitem ITEM_STONE_PLATE
    msgbox SinjohRuins_Text_HealParty, MSGBOX_AUTOCLOSE
    fadescreenswapbuffers FADE_TO_BLACK
	special HealPlayerParty
	closemessage
	playfanfare MUS_HEAL
	waitfanfare
    fadescreenswapbuffers FADE_FROM_BLACK
    msgbox SinjohRuins_Text_StevenAfterPlate, MSGBOX_AUTOCLOSE
    return

SinjohRuins_Text_HealParty::
	.string "Troy: Lass mich deine Pokémon\n"
	.string "heilen, bevor du gehst.$"

SinjohRuins_Text_StevenAfterPlate:
	.string "Troy: Viel Glück, {PLAYER}!\p"
	.string "Geh nur, ich bin direkt hinter dir.$"

SinjohRuins_Text_StevenAfterBattle:
	.string "Troy: Dass mich ein anderer Trainer\n"
	.string "einmal so besiegen würde…\p"
	.string "Unglaublich.\p"
	.string "Nimm das, es ist die letzte Tafel.$"
    .string "Incredible.\p"
	.string "Take this, it's the final plate.$"

SinjohRuins_Text_StevenReadytoBattle:
	.string "Troy: {PLAYER}.\p"
	.string "Seit ich zum ersten Mal die Ent-\n"
	.string "schlossenheit in deinen Augen sah,\l"
	.string "ahnte ich, dass es dazu kommen\l"
	.string "würde.\p"
	.string "Ich werde das Band zwischen dir\n"
	.string "und deinen Pokémon prüfen.\p"
	.string "Bist du bereit?$"

SinjohRuins_Text_ChallengeSteven:
	.string "Okay, {PLAYER}{KUN}, wenn du dich auf eine\n"
	.string "ernsthafte Herausforderung einlässt,\l"
	.string "sei auf das Schlimmste gefasst!$"

SinjohRuins_Text_StevenDefeat:
	.string "Du…\nDu bist bereit.$"

SinjohRuins_EventScript_Steven::
    msgbox SinjohRuins_Text_StevenAfterPlate, MSGBOX_NPC
    end

SinjohRuins_EventScript_Sign::
    msgbox SinjohRuins_Text_Sign, MSGBOX_SIGN
    end

SinjohRuins_Text_Sign:
    .string "SINJOH RUINS$"


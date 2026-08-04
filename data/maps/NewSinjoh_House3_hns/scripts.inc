NewSinjoh_House3_hns_MapScripts::
    map_script MAP_SCRIPT_ON_FRAME_TABLE, NewSinjoh_House3_OnFrame
    map_script MAP_SCRIPT_ON_LOAD, NewSinjoh_House3_OnTransition
    .byte 0


NewSinjoh_House3_OnTransition::
    call_if_ge VAR_NOBLE_TYPHLOSION, 2, NewSinjoh_House3_AddStairs
    end

NewSinjoh_House3_AddStairs::
    setmetatile 38, 13, 0x015, TRUE
	setmetatile 38, 14, 0x005, TRUE
	setmetatile 38, 15, 0x00D, TRUE
	setmetatile 39, 14, 0x006, TRUE
	setmetatile 39, 15, 0x00E, TRUE
	setmetatile 40, 14, 0x007, FALSE
	setmetatile 40, 15, 0x00F, FALSE
    return

NewSinjoh_House3_OnFrame:
    map_script_2 VAR_TEMP_0, 0, NewSinjoh_HauntedHouse_EventScript_Enter
	.2byte 0

NewSinjoh_HauntedHouse_EventScript_Enter::
    setvar VAR_TEMP_0, 1
    goto_if_eq VAR_NOBLE_TYPHLOSION, 1, NewSinjoh_HauntedHouse_EventScript_StartScary
    goto_if_eq VAR_NOBLE_TYPHLOSION, 0, NewSinjoh_HauntedHouse_EventScript_TooEarly
    end

NewSinjoh_HauntedHouse_EventScript_TooEarly::
    msgbox NewSinjoh_HauntedHouse_Text_TooEarlyNoReaction, MSGBOX_AUTOCLOSE
    release
    end

NewSinjoh_HauntedHouse_Text_TooEarlyNoReaction:
	.string "Du spürst eine seltsame Präsenz…\p"
	.string "Doch es gibt keine Reaktion.$"

NewSinjoh_HauntedHouse_EventScript_StartScary::
    msgbox NewSinjoh_HauntedHouse_Text_StartScary, MSGBOX_AUTOCLOSE
    playse SE_M_DETECT
    getplayerxy VAR_TEMP_1, VAR_TEMP_2
	dofieldeffectsparkle VAR_TEMP_1, VAR_TEMP_2, 0
	waitfieldeffect FLDEFF_SPARKLE
    playse SE_PIN
    applymovement2 LOCALID_PLAYER, Common_Movement_ExclamationMark
    delay 60
    msgbox SinjohRuins_Lab_Text_PlayFlute, MSGBOX_YESNO
    closemessage
    goto_if_eq VAR_RESULT, FALSE, SinjohRuins_Lab_EventScript_NoOp
    playbgm MUS_DP_AZURE_FLUTE, FALSE
    delay 200
    fadedefaultbgm    
    special SpawnCameraObject
    applymovement OBJ_EVENT_ID_CAMERA, NewSinjoh_House3_Movement_CameraPanLeft
    waitmovement 0
    setvar VAR_0x8004, 2  @ vertical pan
    setvar VAR_0x8005, 2  @ horizontal pan
    setvar VAR_0x8006, 20  @ num shakes
    setvar VAR_0x8007, 4  @ shake delay
    special ShakeCamera
    waitstate
    call NewSinjoh_House3_AddStairs
    special DrawWholeMapView
    playse SE_CLICK
    applymovement2 OBJ_EVENT_ID_CAMERA, NewSinjoh_House3_Movement_CameraPanRight
    waitmovement 0
    special RemoveCameraObject
    addobject LOCALID_NEWSINJOH_HOUSE3_NOBLE_TYPHLOSION
    clearflag FLAG_HIDE_NEWSINJOH_HOUSE3_NOBLE_TYPHLOSION
    setvar VAR_NOBLE_TYPHLOSION, 2
    release
    end

NewSinjoh_House3_EventScript_NobleTyphlosion::
	lock
	faceplayer
	playmoncry SPECIES_TYPHLOSION_HISUI, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbossbattle species=SPECIES_TYPHLOSION_HISUI, level=80, item=ITEM_SPOOKY_PLATE, move1_1=MOVE_INFERNAL_PARADE, move1_2=MOVE_LAVA_PLUME, move1_3=MOVE_CONFUSE_RAY move1_4=MOVE_SOLAR_BEAM
	settotemboost B_POSITION_OPPONENT_LEFT, 0, 2, 0, 1, 2, 0
	setflag FLAG_NO_WILD_CATCHING
	setflag FLAG_NO_WILD_RUNNING
	setflag FLAG_SMART_WILD_AI
	setflag FLAG_NO_SHINY
    dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, NewSinjoh_House3_EventScript_NobleTyphlosionRan
    bufferspeciesname STR_VAR_1, SPECIES_TYPHLOSION_HISUI
    msgbox SinjohRuins_Lab_Text_DropedItem, MSGBOX_DEFAULT
    giveitem ITEM_SPOOKY_PLATE
    addvar VAR_PLATECOUNTER, 1
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_NEWSINJOH_HOUSE3_NOBLE_TYPHLOSION
	setflag FLAG_HIDE_NEWSINJOH_HOUSE3_NOBLE_TYPHLOSION
	fadescreenswapbuffers FADE_FROM_BLACK
    call_if_eq VAR_PLATECOUNTER, 3, SinjohRuins_Lab_EventScript_3Plates
    call_if_eq VAR_PLATECOUNTER, 6, SinjohRuins_Lab_EventScript_6Plates
    call_if_eq VAR_PLATECOUNTER, 9, SinjohRuins_Lab_EventScript_9Plates
    call_if_eq VAR_PLATECOUNTER, 12, SinjohRuins_Lab_EventScript_12Plates
    call_if_eq VAR_PLATECOUNTER, 15, SinjohRuins_Lab_EventScript_15Plates
    call_if_eq VAR_PLATECOUNTER, 16, SinjohRuins_Lab_EventScript_16Plates
	clearflag FLAG_NO_WILD_CATCHING
	clearflag FLAG_NO_WILD_RUNNING
	clearflag FLAG_SMART_WILD_AI
	clearflag FLAG_NO_SHINY
	release
	end

NewSinjoh_House3_EventScript_NobleTyphlosionRan::
	clearflag FLAG_NO_WILD_CATCHING
	clearflag FLAG_NO_WILD_RUNNING
	clearflag FLAG_SMART_WILD_AI
	clearflag FLAG_NO_SHINY
	release
	end

NewSinjoh_House3_Movement_CameraPanLeft:
    walk_left
    walk_left
    walk_left
    walk_left
    walk_left
    step_end

NewSinjoh_House3_Movement_CameraPanRight:
    walk_right
    walk_right
    walk_right
    walk_right
    walk_right
    step_end

NewSinjoh_HauntedHouse_Text_StartScary:
	.string "Du spürst eine seltsame Präsenz…\p"
	.string "Wirst du beobachtet?$"

NewSinjoh_HauntedHouse_EventScript_Log1::
    msgbox NewSinjoh_HauntedHouse_Text_Log1, MSGBOX_SIGN
    end

NewSinjoh_HauntedHouse_EventScript_Log2::
    msgbox NewSinjoh_HauntedHouse_Text_Log2, MSGBOX_SIGN
    end

NewSinjoh_HauntedHouse_EventScript_Log3::
    msgbox NewSinjoh_HauntedHouse_Text_Log3, MSGBOX_SIGN
    end

NewSinjoh_HauntedHouse_Text_Log1:
	.string "Forschungslog 9: 20. September 1975\p"
	.string "Die Tage werden nun kürzer und der\n"
	.string "Wind wird rau.\p"
	.string "Die Dorfbewohner waren sehr\n"
	.string "gastfreundlich.\p"
	.string "Sie erlauben mir, den Winter über\n"
	.string "in dieser Hütte zu bleiben.\p"
	.string "Anscheinend lebte hier einmal eine\n"
	.string "Familie. Ich denke oft an meine\l"
	.string "eigene Familie.\p"
	.string "Vielleicht habe ich im Frühling den\n"
	.string "Mut, zu ihr zurückzukehren.$"

NewSinjoh_HauntedHouse_Text_Log2:
	.string "Forschungslog 10: 20. Oktober 1975\p"
	.string "Meine Gedanken sind düster geworden.\p"
	.string "Vielleicht liegt es am Wechsel der\n"
	.string "Jahreszeiten.\p"
	.string "Die Dorfbewohner behandeln mich\n"
	.string "weiter wie einen der Ihren.\p"
	.string "Doch die Schuld, die ich trage, lässt\n"
	.string "mich ihre Wärme nicht erwidern.\p"
	.string "Ich verlasse die Hütte kaum noch.\p"
	.string "Und wenn ich an meine Familie\n"
	.string "denke… haben sich ihre Gesichter\l"
	.string "verändert…\l"
	.string "Ich sehe nur die Gesichter der\l"
	.string "Pokémon, die in den Ruinen verloren\l"
	.string "gingen…\p"
	.string "Manchmal glaube ich, die Pokémon\n"
	.string "sind hier bei mir. Ich sehe sie in\l"
	.string "Spiegelungen, ich spüre ihre Blicke.\p"
	.string "Im Frühling wird alles besser.$"

NewSinjoh_HauntedHouse_Text_Log3:
	.string "Forschungslog 10: 1. November 1975\p"
	.string "Ich bin nicht allein hier.\n"
	.string "Vielleicht war ich es nie.\p"
	.string "Die Pokémon sind bei mir…\p"
	.string "Sie sind wütend auf mich, glaube ich.\p"
	.string "Gegenstände fliegen, Türen knallen.\p"
	.string "Schwere Kisten versperren die\n"
	.string "Haustür.\p"
	.string "Doch in Wahrheit könnte ich gehen,\n"
	.string "wenn ich wollte.\p"
	.string "Es gibt sonst nichts mehr für mich.\p"
	.string "Ich habe früher von einer Familie\n"
	.string "geschrieben, doch die Pokémon sind\l"
	.string "die einzige Familie, an die ich mich\l"
	.string "erinnern kann…\p"
	.string "Mein Essen geht zur Neige, doch\n"
	.string "meine Schuld ist größer als mein\l"
	.string "Hunger.\p"
	.string "Ich denke, ich bleibe noch eine\n"
	.string "Weile hier…$"
  

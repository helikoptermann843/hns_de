RocketHideout_B1F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, RocketHideout_B1F_OnLoad
	.byte 0

RocketHideout_B1F_OnLoad::
	setflag FLAG_HIDE_ROCKETHIDEOUT_ROCKETS
	call_if_eq VAR_ROCKET_HIDEOUT_STATUE_1, 2, RocketHideout_B1F_EventScript_SetStatue1
	call_if_eq VAR_ROCKET_HIDEOUT_STATUE_2, 2, RocketHideout_B1F_EventScript_SetStatue2
	call_if_eq VAR_ROCKET_HIDEOUT_STATUE_3, 2, RocketHideout_B1F_EventScript_SetStatue3
	call_if_eq VAR_ROCKET_HIDEOUT_STATUE_4, 2, RocketHideout_B1F_EventScript_SetStatue4
	call_if_eq VAR_ROCKET_HIDEOUT_STATUE_5, 2, RocketHideout_B1F_EventScript_SetStatue5
	end

RocketHideout_B1F_EventScript_SetStatue1::
	setmetatile 45, 1, 0x2A9, TRUE
	return
RocketHideout_B1F_EventScript_SetStatue2::
	setmetatile 24, 1, 0x2A9, TRUE
	return
RocketHideout_B1F_EventScript_SetStatue3::
	setmetatile 45, 6, 0x2A9, TRUE
	return
RocketHideout_B1F_EventScript_SetStatue4::
	setmetatile 45, 19, 0x2A9, TRUE
	return
RocketHideout_B1F_EventScript_SetStatue5::
	setmetatile 27, 19, 0x2A9, TRUE
	return

RocketHideout_B1F_TriggerTest::
	setflag FLAG_HIDE_ROCKETHIDEOUT_ROCKETS
	clearflag FLAG_ROCKETHIDEOUT_SWITCH
	clearflag FLAG_HIDE_ROCKETHIDEOUT2_LANCE_DRAGONITE
	clearflag FLAG_HIDE_ROCKETHIDEOUT2_GATE
	setflag FLAG_HIDE_ROCKETHIDEOUT3_SILVER
	clearflag FLAG_HIDE_ROCKETHIDEOUT3_GATE
	clearflag FLAG_GOT_PASSWORD_FROM_ETO
	clearflag FLAG_GOT_PASSWORD_FROM_GRUNTF 
	setvar VAR_ROCKET_PASSWORD, 0
	clearflag FLAG_HIDE_ROCKETHIDEOUT3_MURKROW
	clearflag FLAG_HIDE_ROCKETHIDEOUT3_GIOVANNI
	setflag FLAG_HIDE_ROCKETHIDEOUT3_PETREL
	setflag FLAG_HIDE_ROCKETHIDEOUT2_MURKROWSTAIRS
	setflag FLAG_HIDE_ROCKETHIDEOUT2_MURKROWGATE
	setflag FLAG_HIDE_ROCKETHIDEOUT3_MURKROWSTAIRS
	setflag FLAG_HIDE_ROCKETHIDEOUT2_ARIANA_AND_GRUNT
	setvar VAR_TEMP_3, 1
	end

RocketHideout_B1F_EventScript_SpawnGruntLeft::
	clearflag FLAG_HIDE_ROCKETHIDEOUT_ROCKETS
	addobject VAR_TEMP_0
	return

RocketHideout_B1F_EventScript_SpawnGruntRight::
	clearflag FLAG_HIDE_ROCKETHIDEOUT_ROCKETS
	addobject VAR_TEMP_0
	return

RocketHideout_B1F_EventScript_HeightAdjust::
	applymovement VAR_TEMP_0, Common_Movement_WalkDown1
	waitmovement 0
	return

RocketHideout_B1F_Trigger_SpawnGruntStatue1::
	setvar VAR_TEMP_0, LOCALID_ROCKETHIDEOUT_GRUNTM1
	call RocketHideout_B1F_EventScript_SpawnGruntLeft
	setvar VAR_ROCKET_HIDEOUT_STATUE_1, 1
	end

RocketHideout_B1F_Trigger_Statue1::
	lock
	setvar VAR_TEMP_0, LOCALID_ROCKETHIDEOUT_GRUNTM1
	call RocketHideout_B1F_EventScript_SpawnGruntLeft
	call RocketHideout_B1F_EventScript_SpawnGruntRight
	call RocketHideout_B1F_Trigger_StatueGruntLeft
	setvar VAR_ROCKET_HIDEOUT_STATUE_1, 2
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_TEMP_0
	fadescreenswapbuffers FADE_FROM_BLACK
	setmetatile 45, 1, 0x2A9, TRUE
	special DrawWholeMapView
	release
	end	

RocketHideout_B1F_Trigger_SpawnGruntStatue2::
	setvar VAR_TEMP_0, LOCALID_ROCKETHIDEOUT_GRUNTM2
	call RocketHideout_B1F_EventScript_SpawnGruntRight
	setvar VAR_ROCKET_HIDEOUT_STATUE_2, 1
	end

RocketHideout_B1F_Trigger_Statue2::
	lock
	setvar VAR_TEMP_0, LOCALID_ROCKETHIDEOUT_GRUNTM2
	call RocketHideout_B1F_EventScript_SpawnGruntLeft
	call RocketHideout_B1F_EventScript_SpawnGruntRight
	call RocketHideout_B1F_Trigger_StatueGruntRight
	setvar VAR_ROCKET_HIDEOUT_STATUE_2, 2
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_TEMP_0
	fadescreenswapbuffers FADE_FROM_BLACK
	setmetatile 24, 1, 0x2A9, TRUE
	special DrawWholeMapView
	release
	end	

RocketHideout_B1F_Trigger_SpawnGruntStatue3::
	setvar VAR_TEMP_0, LOCALID_ROCKETHIDEOUT_GRUNTM3
	call RocketHideout_B1F_EventScript_SpawnGruntLeft
	setvar VAR_ROCKET_HIDEOUT_STATUE_3, 1
	end

RocketHideout_B1F_Trigger_Statue3::
	lock
	setvar VAR_TEMP_0, LOCALID_ROCKETHIDEOUT_GRUNTM3
	call RocketHideout_B1F_EventScript_SpawnGruntLeft
	call RocketHideout_B1F_EventScript_SpawnGruntRight
	call RocketHideout_B1F_Trigger_StatueGruntLeft
	setvar VAR_ROCKET_HIDEOUT_STATUE_3, 2
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_TEMP_0
	fadescreenswapbuffers FADE_FROM_BLACK
	setmetatile 45, 6, 0x2A9, TRUE
	special DrawWholeMapView
	release
	end	

RocketHideout_B1F_Trigger_SpawnGruntStatue4::
	setvar VAR_TEMP_0, LOCALID_ROCKETHIDEOUT_GRUNTM4
	call RocketHideout_B1F_EventScript_SpawnGruntLeft
	setvar VAR_ROCKET_HIDEOUT_STATUE_4, 1
	end

RocketHideout_B1F_Trigger_Statue4::
	lock
	setvar VAR_TEMP_0, LOCALID_ROCKETHIDEOUT_GRUNTM4
	call RocketHideout_B1F_EventScript_SpawnGruntLeft
	call RocketHideout_B1F_EventScript_SpawnGruntRight
	call RocketHideout_B1F_Trigger_StatueGruntLeft
	setvar VAR_ROCKET_HIDEOUT_STATUE_4, 2
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_TEMP_0
	fadescreenswapbuffers FADE_FROM_BLACK
	setmetatile 45, 19, 0x2A9, TRUE
	special DrawWholeMapView
	release
	end	

RocketHideout_B1F_Trigger_SpawnGruntStatue5::
	setvar VAR_TEMP_0, LOCALID_ROCKETHIDEOUT_GRUNTM4
	call RocketHideout_B1F_EventScript_SpawnGruntRight
	setvar VAR_ROCKET_HIDEOUT_STATUE_5, 1
	end

RocketHideout_B1F_Trigger_Statue5::
	lock
	setvar VAR_TEMP_0, LOCALID_ROCKETHIDEOUT_GRUNTM4
	call RocketHideout_B1F_EventScript_SpawnGruntLeft
	call RocketHideout_B1F_EventScript_SpawnGruntRight
	call RocketHideout_B1F_Trigger_StatueGruntRight
	setvar VAR_ROCKET_HIDEOUT_STATUE_5, 2
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_TEMP_0
	fadescreenswapbuffers FADE_FROM_BLACK
	setmetatile 27, 19, 0x2A9, TRUE
	special DrawWholeMapView
	release
	end	


RocketHideout_B1F_Trigger_StatueGruntLeft::
	playse SE_WARP_IN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	call_if_eq VAR_TEMP_2, 4, RocketHideout_B1F_EventScript_HeightAdjust
	call_if_eq VAR_TEMP_2, 9, RocketHideout_B1F_EventScript_HeightAdjust
	call_if_eq VAR_TEMP_2, 22, RocketHideout_B1F_EventScript_HeightAdjust
	applymovement VAR_TEMP_0, RocketHideout_B1F_Movement_GruntWalkRight
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	msgbox RocketHideout_B1F_Text_CameraGrunt1Seen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_17_HNS, RocketHideout_B1F_Text_CameraGrunt1Beaten
	applymovement VAR_TEMP_0, RocketHideout_B1F_Movement_GruntWalkLeft
	waitmovement 0
	delay 55
	applymovement VAR_TEMP_0, RocketHideout_B1F_Movement_GruntWalkRight
	waitmovement 0
	msgbox RocketHideout_B1F_Text_CameraGrunt2Seen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_18_HNS, RocketHideout_B1F_Text_CameraGrunt2Beaten
	applymovement VAR_TEMP_0, RocketHideout_B1F_Movement_GruntWalkLeft
	waitmovement 0
	setflag FLAG_HIDE_ROCKETHIDEOUT_ROCKETS
	removeobject VAR_TEMP_0
	removeobject LOCALID_ROCKETHIDEOUT_GRUNTM3
	removeobject LOCALID_ROCKETHIDEOUT_GRUNTM1
	return

RocketHideout_B1F_Trigger_StatueGruntRight::
	playse SE_WARP_IN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	call_if_eq VAR_TEMP_2, 4, RocketHideout_B1F_EventScript_HeightAdjust
	call_if_eq VAR_TEMP_2, 9, RocketHideout_B1F_EventScript_HeightAdjust
	call_if_eq VAR_TEMP_2, 22, RocketHideout_B1F_EventScript_HeightAdjust
	applymovement VAR_TEMP_0, RocketHideout_B1F_Movement_GruntWalkLeft
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	msgbox RocketHideout_B1F_Text_CameraGrunt1Seen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_17_HNS, RocketHideout_B1F_Text_CameraGrunt1Beaten
	applymovement VAR_TEMP_0, RocketHideout_B1F_Movement_GruntWalkRight
	waitmovement 0
	delay 55
	applymovement VAR_TEMP_0, RocketHideout_B1F_Movement_GruntWalkLeft
	waitmovement 0
	msgbox RocketHideout_B1F_Text_CameraGrunt2Seen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_18_HNS, RocketHideout_B1F_Text_CameraGrunt2Beaten
	applymovement VAR_TEMP_0, RocketHideout_B1F_Movement_GruntWalkRight
	waitmovement 0
	setflag FLAG_HIDE_ROCKETHIDEOUT_ROCKETS
	removeobject VAR_TEMP_0
	removeobject LOCALID_ROCKETHIDEOUT_GRUNTM3
	removeobject LOCALID_ROCKETHIDEOUT_GRUNTM1
	return

RocketHideout_B1F_Movement_GruntWalkRight:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

RocketHideout_B1F_Movement_GruntWalkLeft:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

RocketHideout_B1F_Text_CameraGrunt1Seen:
	.string "Hey! Eindringling! Alarm!$"

RocketHideout_B1F_Text_CameraGrunt1Beaten:
	.string "Mist… ich hab versagt…$"

RocketHideout_B1F_Text_CameraGrunt2Seen:
	.string "Jetzt bin ich dran!\n"
	.string "Du entkommst nicht!$"

RocketHideout_B1F_Text_CameraGrunt2Beaten:
	.string "Überwachungskameras sind in\n"
	.string "den Pokémon-Statuen versteckt.\p"
	.string "Wir tauchen immer wieder auf,\n"
	.string "bis du einen geheimen Schalter\l"
	.string "betätigst.$"

RocketHideout_B1F_EventScript_TrainerJed::
	trainerbattle_single TRAINER_JED_HNS, RocketHideout_B1F_Text_ScientistJedSeen, RocketHideout_B1F_Text_ScientistJedBeaten
	msgbox RocketHideout_B1F_Text_ScientistJedAfter, MSGBOX_AUTOCLOSE
	end

RocketHideout_B1F_Text_ScientistJedSeen:
	.string "Das war einst ein Ninja-Versteck.\p"
	.string "Überall sind Fallen, die Eindring-\n"
	.string "linge wie dich stoppen.$"

RocketHideout_B1F_Text_ScientistJedBeaten:
	.string "Ich verstehe…$"

RocketHideout_B1F_Text_ScientistJedAfter:
	.string "Na gut. Ich verrate dir ein Geheim-\n"
	.string "nis über unser Versteck.\p"
	.string "Dieses Ding auf dem Boden dort\n"
	.string "vor dir ist ein Warp-Feld.\p"
	.string "Wenn du darauf trittst, wirst du\n"
	.string "zurück zum Eingang teleportiert.$"

RocketHideout_B1F_Text_GruntM16Seen:
	.string "Heheh. Fühlst du dich glücklich,\n"
	.string "du Loser?$"

RocketHideout_B1F_Text_GruntM16Beaten:
	.string "Bumm!$"

RocketHideout_B1F_Text_GruntM16After:
	.string "Ich weiß auch nicht, wo die Fallen\n"
	.string "platziert sind.\p"
	.string "Du musst einfach Mut fassen und\n"
	.string "weitergehen.$"

RocketHideout_B1F_EventScript_Rocket16::
	trainerbattle_single TRAINER_GRUNT_13_HNS, RocketHideout_B1F_Text_GruntM16Seen, RocketHideout_B1F_Text_GruntM16Beaten
	msgbox RocketHideout_B1F_Text_GruntM16After, MSGBOX_AUTOCLOSE
	end

RocketHideout_B1F_EventScript_Item_BigNugget::
	finditem ITEM_BIG_NUGGET
	end

RocketHideout_B1F_EventScript_Item_HyperPotion::
	finditem ITEM_HYPER_POTION
	end

RocketHideout_B1F_EventScript_Item_Revive::
	finditem ITEM_REVIVE
	end

RocketHideout_B1F_EventScript_Persian::
	msgbox RocketHideout_B1F_Text_SecurityCameraStatue, MSGBOX_NPC
	end

RocketHideout_B1F_Text_SecurityCameraStatue:
	.string "Eine Snobilikat-Statue…$"

RocketHideout_B1F_EventScript_DummyPanel::
	msgbox RocketHideout_B1F_Text_NothingThere, MSGBOX_SIGN
	end

RocketHideout_B1F_EventScript_Switch::
	lock
	goto_if_set FLAG_ROCKETHIDEOUT_SWITCH, RocketHideout_B1F_EventScript_TurnOffSwitch
	msgbox RocketHideout_B1F_Text_SecretSwitch, MSGBOX_DEFAULT
	setvar VAR_ROCKET_HIDEOUT_STATUE_1, 2
	setvar VAR_ROCKET_HIDEOUT_STATUE_2, 2
	setvar VAR_ROCKET_HIDEOUT_STATUE_3, 2
	setvar VAR_ROCKET_HIDEOUT_STATUE_4, 2
	setvar VAR_ROCKET_HIDEOUT_STATUE_5, 2
	setmetatile 45, 1, 0x2A9, TRUE
	setmetatile 24, 1, 0x2A9, TRUE
	setmetatile 45, 6, 0x2A9, TRUE
	setmetatile 45, 19, 0x2A9, TRUE
	setmetatile 27, 19, 0x2A9, TRUE
	special DrawWholeMapView
	setflag FLAG_ROCKETHIDEOUT_SWITCH
	release
	end

RocketHideout_B1F_EventScript_TurnOffSwitch::
	msgbox RocketHideout_B1F_Text_SwitchOff, MSGBOX_DEFAULT
	setvar VAR_ROCKET_HIDEOUT_STATUE_1, 0
	setvar VAR_ROCKET_HIDEOUT_STATUE_2, 0
	setvar VAR_ROCKET_HIDEOUT_STATUE_3, 0
	setvar VAR_ROCKET_HIDEOUT_STATUE_4, 0
	setvar VAR_ROCKET_HIDEOUT_STATUE_5, 0
	setmetatile 45, 1, 0x2A8, TRUE
	setmetatile 24, 1, 0x2A8, TRUE
	setmetatile 45, 6, 0x2A8, TRUE
	setmetatile 45, 19, 0x2A8, TRUE
	setmetatile 27, 19, 0x2A8, TRUE
	special DrawWholeMapView
	clearflag FLAG_ROCKETHIDEOUT_SWITCH
	release
	end

RocketHideout_B1F_Text_NothingThere:
	.string "Ein seltsames Panel…\n"
	.string "Hier ist nichts.$"

RocketHideout_B1F_Text_SecretSwitch:
	.string "Ein geheimer Schalter!\n"
	.string "Besser drücken.$"

RocketHideout_B1F_Text_SwitchOff:
	.string "Der Schalter ist\n"
	.string "ausgeschaltet.$"

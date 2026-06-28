EcruteakCity_Theater_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EcruteakCity_Theater_OnTransition
	.byte 0

EcruteakCity_Theater_OnTransition::
	call_if_eq VAR_ECRUTEAK_CITY_THEATER, 1, EcruteakCity_Theater_MapScript_SetRocketSceneActive
	call_if_eq VAR_ECRUTEAK_CITY_THEATER, 8, EcruteakCity_Theater_MapScript_SetKimonoMovement
	end

EcruteakCity_Theater_MapScript_SetRocketSceneActive::
	setobjectxyperm LOCALID_ECRUTEAK_ZUKI, 10, 2
	setobjectmovementtype LOCALID_ECRUTEAK_ROCKET, MOVEMENT_TYPE_TOWER_BEAM
	return

EcruteakCity_Theater_MapScript_SetKimonoMovement::
	setobjectmovementtype LOCALID_ECRUTEAK_ZUKI, MOVEMENT_TYPE_ROTATE_CLOCKWISE
	setobjectmovementtype LOCALID_ECRUTEAK_NAOKO, MOVEMENT_TYPE_ROTATE_CLOCKWISE
	setobjectmovementtype LOCALID_ECRUTEAK_MIKI, MOVEMENT_TYPE_ROTATE_CLOCKWISE
	setobjectmovementtype LOCALID_ECRUTEAK_SAYO, MOVEMENT_TYPE_ROTATE_COUNTERCLOCKWISE
	setobjectmovementtype LOCALID_ECRUTEAK_KUNI, MOVEMENT_TYPE_ROTATE_COUNTERCLOCKWISE
	setobjectmovementtype LOCALID_ECRUTEAK_SISTER, MOVEMENT_TYPE_ROTATE_CLOCKWISE
	return

EcruteakCity_Theater_EventScript_RocketEventTrigger::
	lockall
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	delay 60
	turnobject LOCALID_ECRUTEAK_ROCKET, DIR_NORTH
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, EcruteakCity_Theater_Movement_CameraPanUp
	waitmovement 0
	msgbox EcruteakCity_Theater_Text_Rocket1, MSGBOX_DEFAULT
	closemessage
	msgbox EcruteakCity_Theater_Text_KimonoRocket1, MSGBOX_DEFAULT
	closemessage
	msgbox EcruteakCity_Theater_Text_Rocket2, MSGBOX_DEFAULT
	applymovement LOCALID_ECRUTEAK_ZUKI, EcruteakCity_Theater_Movement_KimonoGirlMoveBack
	waitmovement 0
	msgbox EcruteakCity_Theater_Text_Rocket3, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ECRUTEAK_ROCKET, EcruteakCity_Theater_Movement_RocketDance
	delay 50
	applymovement OBJ_EVENT_ID_CAMERA, EcruteakCity_Theater_Movement_CameraPanDown
	waitmovement 0
	special RemoveCameraObject
	setobjectmovementtype LOCALID_ECRUTEAK_ROCKET, MOVEMENT_TYPE_TOWER_BEAM
	setobjectxyperm LOCALID_ECRUTEAK_ZUKI, 10, 2
	setvar VAR_ECRUTEAK_CITY_THEATER, 1
	releaseall
	end

EcruteakCity_Theater_Movement_RocketDance:
	walk_in_place_down
	delay_2
	walk_in_place_right
	delay_2
	face_up
	delay_2
	face_left
	delay_8
	walk_in_place_down
	delay_2
	walk_in_place_left
	delay_2
	face_up
	delay_8
	face_right
	step_end

EcruteakCity_Theater_Movement_CameraPanUp:
	slide_up
	slide_up
	slide_up
	slide_up
	slide_up
	slide_up
	slide_up
	slide_up
	slide_up
	slide_up
	slide_up
	slide_up
	step_end

EcruteakCity_Theater_Movement_CameraPanDown:
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	slide_down
	step_end

EcruteakCity_Theater_Movement_KimonoGirlMoveBack:
	lock_facing_direction
	walk_up
	unlock_facing_direction
	step_end

EcruteakCity_Theater_Text_Rocket1:
	.string "ROCKET: Hör auf, so ernst zu tanzen!\n"
	.string "Zeig mir etwas wie einen Hula-Tanz!$"

EcruteakCity_Theater_Text_KimonoRocket1:
	.string "KIMONO GIRL: ...Unverschämtheit\n"
	.string "so eine Aufforderung....$"

EcruteakCity_Theater_Text_Rocket2:
	.string "ROCKET: Huh?\p"
	.string "Willst du mir etwa sagen, dass\n"
	.string "du nicht respektierst, was der\l"
	.string "Kunde möchte?$"

EcruteakCity_Theater_Text_Rocket3:
	.string "Na gut, dann zeige ich dir,\n"
	.string "wie man tanzt. Ich zeige dir\n"
	.string "einen großartigen Tanz.\p"
	.string "Wahahaha!$"

EcruteakCity_Theater_EventScript_Rocket::
	lock
	faceplayer
	msgbox EcruteakCity_Theater_Text_RocketSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_33_HNS, EcruteakCity_Theater_Text_RocketBeaten
	msgbox EcruteakCity_Theater_Text_RocketAfter, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ECRUTEAK_ROCKET, EcruteakCity_Theater_Movement_RocketLeave
	waitmovement 0
	setflag FLAG_HIDE_ECRUTEAK_ROCKET
	removeobject LOCALID_ECRUTEAK_ROCKET
	call_if_eq VAR_FACING, DIR_EAST, EcruteakCity_Theater_EventScript_PostRocketLeft
	call_if_eq VAR_FACING, DIR_WEST, EcruteakCity_Theater_EventScript_PostRocketRight
	call_if_eq VAR_FACING, DIR_SOUTH, EcruteakCity_Theater_EventScript_PostRocketTop
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	msgbox EcruteakCity_Theater_Text_KimonoRocket3, MSGBOX_DEFAULT
	closemessage	
	setvar VAR_ECRUTEAK_CITY_THEATER, 2
	release
	end
	
EcruteakCity_Theater_EventScript_PostRocketLeft::
	applymovement LOCALID_ECRUTEAK_ZUKI, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement LOCALID_ECRUTEAK_ZUKI, Common_Movement_WalkDown1
	waitmovement 0
	return

EcruteakCity_Theater_EventScript_PostRocketRight::
	applymovement LOCALID_ECRUTEAK_ZUKI, Common_Movement_WalkRight1
	waitmovement 0
	applymovement LOCALID_ECRUTEAK_ZUKI, Common_Movement_WalkDown1
	waitmovement 0
	return

EcruteakCity_Theater_EventScript_PostRocketTop::
	turnobject LOCALID_ECRUTEAK_ZUKI, DIR_SOUTH
	return

EcruteakCity_Theater_Movement_RocketLeave:
	jump_2_down
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

EcruteakCity_Theater_Text_RocketSeen:
	.string "Huh? Wer bist du?\n"
	.string "Du wagst es, mir im Weg zu stehen?$"

EcruteakCity_Theater_Text_RocketBeaten:
	.string "Oh nein!\n"
	.string "Du lässt mich wie einen Bösewicht\l"
	.string "aussehen!$"

EcruteakCity_Theater_Text_RocketAfter:
	.string "Ups! Ich habe einen wichtigen Auftrag!\l"
	.string "Wenn sie merken, dass ich hier Zeit\n"
	.string "verschwendet habe, lassen sie mich\p"
	.string "als niedrigsten ROCKET-Neuling\n"
	.string "noch einmal von vorn anfangen!\p"
	.string "Ich sollte jetzt besser gehen!$"

EcruteakCity_Theater_Text_KimonoRocket3:
	.string "Du musst {PLAYER} sein,\n"
	.string "stimmt's? Das war wirklich\n"
	.string "ausgezeichnet.\p"
	.string "Freundlich und stark... Gut darin,\n"
	.string "Pokémon zu trainieren...\p"
	.string "Diese Person weiß, worauf man\n"
	.string "bei Menschen achten muss...\p"
	.string "Ohoho! Ich habe nur mit\n"
	.string "mir selbst gesprochen.\l"
	.string "Vergiss es.$"


EcruteakCity_Theater_EventScript_KimonoGirl::
	lock
	faceplayer
	goto_if_eq VAR_ECRUTEAK_CITY_THEATER, 6, EcruteakCity_Theater_EventScript_KimonoGirlDuringEvent
	msgbox EcruteakCity_Theater_Text_KimonoDone, MSGBOX_DEFAULT
	closemessage
	release
	end
EcruteakCity_Theater_EventScript_KimonoGirlDuringEvent::
	msgbox EcruteakCity_Theater_Text_KimonoGirlsBeforeBattle, MSGBOX_DEFAULT
	closemessage
	release
	end


EcruteakCity_Theater_EventScript_Zuki::
	lock
	faceplayer
	goto_if_ge VAR_ECRUTEAK_CITY_THEATER, 8, EcruteakCity_Theater_EventScript_ZukiAfterLegendary
	goto_if_eq VAR_ECRUTEAK_CITY_THEATER, 6, EcruteakCity_Theater_EventScript_ZukiBattle
	goto_if_eq VAR_ECRUTEAK_CITY_THEATER, 1, EcruteakCity_Theater_EventScript_ZukiDuringRocket
	msgbox EcruteakCity_Theater_Text_Kimono, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_Theater_EventScript_ZukiAfterLegendary::
	msgbox EcruteakCity_Theater_Text_ZukiAfterAll, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_Theater_EventScript_ZukiDuringRocket::
	msgbox EcruteakCity_Theater_Text_KimonoGirlBeaten, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_Theater_Text_Kimono:
	.string "Für KIMONO GIRLs wie mich,\n"
	.string "ist Tanzen alles.\p"
	.string "Ich habe noch nie einen Tag\n"
	.string "ohne Tanztraining vergehen lassen.\p"
	.string "Pokémon sind genauso.\n"
	.string "Sie wachsen mit dir, Stück für Stück\l"
	.string "jeden Tag.$"

EcruteakCity_Theater_EventScript_SurfGuy::
	lock
	faceplayer
	goto_if_eq VAR_ECRUTEAK_CITY_THEATER, 1, EcruteakCity_Theater_EventScript_SurfGuyDuringRocket
	goto_if_unset FLAG_RECEIVED_HM_SURF, EcruteakCity_Theater_EventScript_SurfGuy_GiveSurf
	msgbox EcruteakCity_Theater_Text_SurfGuyAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_Theater_EventScript_SurfGuy_GiveSurf::
	msgbox EcruteakCity_Theater_Text_SurfGuyGiveSurf, MSGBOX_DEFAULT
	giveitem ITEM_HM_SURF
	setflag FLAG_RECEIVED_HM_SURF
	msgbox EcruteakCity_Theater_Text_SurfGuyGaveSurf
	closemessage
	setflag FLAG_RECEIVED_HM_SURF
	setvar VAR_ECRUTEAK_CITY_THEATER, 3
	release
	end

EcruteakCity_Theater_EventScript_SurfGuyDuringRocket::
	msgbox EcruteakCity_Theater_Text_SurfGuyRocket, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_Theater_EventScript_TriggerSurfGuy::
	lock
	applymovement LOCALID_SURF_GUY, EcruteakCity_Theater_Movement_SurfGuy1
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	msgbox EcruteakCity_Theater_Text_SurfGuyGiveSurf, MSGBOX_DEFAULT
	giveitem ITEM_HM_SURF
	setflag FLAG_RECEIVED_HM_SURF
	msgbox EcruteakCity_Theater_Text_SurfGuyGaveSurf
	closemessage
	setflag FLAG_RECEIVED_HM_SURF
	setvar VAR_ECRUTEAK_CITY_THEATER, 3
	applymovement LOCALID_SURF_GUY, EcruteakCity_Theater_Movement_SurfGuy2
	waitmovement 0 
	release
	end

EcruteakCity_Theater_EventScript_Psyduck::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
	msgbox EcruteakCity_Theater_Text_Psyduck, MSGBOX_DEFAULT
	waitmoncry
	release
	end


EcruteakCity_Theater_EventScript_Boy::
	lock
	faceplayer
	goto_if_eq VAR_ECRUTEAK_CITY_THEATER, 1, EcruteakCity_Theater_EventScript_BoyDuringRocket
	msgbox EcruteakCity_Theater_Text_Boy, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_Theater_EventScript_BoyDuringRocket::
	msgbox EcruteakCity_Theater_Text_BoyBefore, MSGBOX_DEFAULT
	closemessage
	release
	end


EcruteakCity_Theater_EventScript_Granny::
	lock
	faceplayer
	goto_if_eq VAR_ECRUTEAK_CITY_THEATER, 1, EcruteakCity_Theater_EventScript_GrannyDuringRocket
	msgbox EcruteakCity_Theater_Text_Granny, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_Theater_EventScript_GrannyDuringRocket::
	msgbox EcruteakCity_Theater_Text_GrannyBefore, MSGBOX_DEFAULT
	closemessage
	release
	end


EcruteakCity_Theater_EventScript_Gramps::
	lock
	faceplayer
	goto_if_eq VAR_ECRUTEAK_CITY_THEATER, 1, EcruteakCity_Theater_EventScript_GrampsDuringRocket
	msgbox EcruteakCity_Theater_Text_Gramps, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_Theater_EventScript_GrampsDuringRocket::
	msgbox EcruteakCity_Theater_Text_GrampsBefore, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_Theater_EventScript_Girl::
	lock
	faceplayer
	goto_if_eq VAR_ECRUTEAK_CITY_THEATER, 1, EcruteakCity_Theater_EventScript_GirlDuringRocket
	msgbox EcruteakCity_Theater_Text_Girl, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_Theater_EventScript_GirlDuringRocket::
	msgbox EcruteakCity_Theater_Text_GirlBefore, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_Theater_EventScript_FancyPanel::
	lock
	msgbox EcruteakCity_Theater_Text_FancyPanel, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_Theater_Movement_SurfGuy1:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

EcruteakCity_Theater_Movement_SurfGuy2:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

EcruteakCity_Theater_Text_SurfGuyRocket:
	.string "Was ist los mit diesem\n"
	.string "Team Rocket Rüpel, der diese\l"
	.string "KIMONO GIRL belästigt?\p"
	.string "Du bist doch Trainer, oder?\n"
	.string "Hilf ihr bitte!$"

EcruteakCity_Theater_Text_SurfGuyGiveSurf:
	.string "Wunderbar! Du warst so\n"
	.string "mutig für dein Alter!\p"
	.string "So etwas sieht man selten!\n"
	.string "Hier, das sollst du haben.\p"
	.string "Sei nicht schüchtern--nimm es!$"

EcruteakCity_Theater_Text_SurfGuyGaveSurf:
	.string "Das ist Surfer.\n"
	.string "Es ist eine Attacke, die Pokémon\l"
	.string "ermöglicht, mühelos durchs Wasser\n"
	.string "zu schwimmen.$"

EcruteakCity_Theater_Text_SurfGuyAfter:
	.string "Die KIMONO GIRLs sind nicht nur\n"
	.string "großartige Tänzerinnen, sie\l"
	.string "sind auch talentiert mit Pokémon.\p"
	.string "Aber sie kämpfen nur aus guten\n"
	.string "Gründen.\p"
	.string "Ich weiß nicht, ob du sie besiegen\n"
	.string "könntest, wenn sie ihr Können zeigen.$"

EcruteakCity_Theater_Text_Psyduck:
	.string "Enton: Quaak quak!$"

EcruteakCity_Theater_Text_BoyBefore:
	.string "Ahhhh!$"

EcruteakCity_Theater_Text_Boy:
	.string "Ich sollte der Held sein...!\n"
	.string "So viel zum Näherkommen an ein\l"
	.string "KIMONO GIRL!$"

EcruteakCity_Theater_Text_Granny:
	.string "Dieser Mann ist immer bei\n"
	.string "seinem Enton.\p"
	.string "Er sagt, er will ein Pokémon,\n"
	.string "das Surfer kann und tanzt.\p"
	.string "Will er ein Pokémon,\n"
	.string "das beim Synchronschwimmen\l"
	.string "mitmacht?$"

EcruteakCity_Theater_Text_GrannyBefore:
	.string "Oh... Autsch...!\n"
	.string "Diese Bauchschmerzen!\p"
	.string "Ich würde diesen Mann nicht\n"
	.string "so handeln lassen, wenn nicht\l"
	.string "dieser Schmerz wäre...!$"

EcruteakCity_Theater_Text_Gramps:
	.string "Es gab zwei Türme\n"
	.string "in TEAK CITY. Einen im Osten,\l"
	.string "einen im Westen.$"

EcruteakCity_Theater_Text_GrampsBefore:
	.string "Oh... Autsch...!\n"
	.string "Dieser Rückenschmerz!\p"
	.string "Ich würde diesem Mann nicht\n"
	.string "so handeln lassen, wenn nicht\l"
	.string "dieser Schmerz wäre...!$"

EcruteakCity_Theater_Text_Girl:
	.string "Die KIMONO GIRLS sind meine\n"
	.string "großen Schwestern! Ich werde\l"
	.string "eines Tages wie sie sein!$"

EcruteakCity_Theater_Text_GirlBefore:
	.string "Ich mag diesen lustigen Tanz!$"

EcruteakCity_Theater_Text_FancyPanel:
	.string "Das ist ein schickes Panel,\n"
	.string "das mit Blumen verziert ist.$"

EcruteakCity_Theater_Trigger_PreBattleCutsceneLeft::
	lock
	applymovement2 OBJ_EVENT_ID_PLAYER, EcruteakCity_Theater_Movement_PlayerWalkToZukiLeft
	applymovement2 OBJ_EVENT_ID_FOLLOWER, EcruteakCity_Theater_Movement_MonWalkToZukiLeft
	waitmovement OBJ_EVENT_ID_FOLLOWER
	waitmovement OBJ_EVENT_ID_PLAYER
	delay 10
	lockall
	goto EcruteakCity_Theater_EventScript_LegendaryCutscene

EcruteakCity_Theater_Trigger_PreBattleCutsceneTop::
	lock
	applymovement2 OBJ_EVENT_ID_PLAYER, EcruteakCity_Theater_Movement_PlayerWalkToZukiTop
	applymovement2 OBJ_EVENT_ID_FOLLOWER, EcruteakCity_Theater_Movement_MonWalkToZukiTop
	waitmovement OBJ_EVENT_ID_FOLLOWER
	waitmovement OBJ_EVENT_ID_PLAYER
	delay 10
	lockall
	goto EcruteakCity_Theater_EventScript_LegendaryCutscene

EcruteakCity_Theater_Trigger_PreBattleCutsceneRight::
	lock
	applymovement2 OBJ_EVENT_ID_PLAYER, EcruteakCity_Theater_Movement_PlayerWalkToZukiRight
	applymovement2 OBJ_EVENT_ID_FOLLOWER, EcruteakCity_Theater_Movement_MonWalkToZukiRight
	waitmovement OBJ_EVENT_ID_FOLLOWER
	waitmovement OBJ_EVENT_ID_PLAYER
	delay 10
	lockall
	goto EcruteakCity_Theater_EventScript_LegendaryCutscene


EcruteakCity_Theater_Movement_PlayerWalkToZukiLeft:
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
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end
EcruteakCity_Theater_Movement_MonWalkToZukiLeft:
	walk_left
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
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	step_end

EcruteakCity_Theater_Movement_PlayerWalkToZukiTop:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end
EcruteakCity_Theater_Movement_MonWalkToZukiTop:
	walk_up
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	step_end

EcruteakCity_Theater_Movement_PlayerWalkToZukiRight:
	walk_right
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
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end
EcruteakCity_Theater_Movement_MonWalkToZukiRight::
	walk_right
	walk_right
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
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	step_end


EcruteakCity_Theater_Movement_KimonoSpin:
	face_right
	delay_8
	face_up
	delay_8
	face_left
	delay_8
	face_down
	delay_8
	face_right
	delay_8
	face_up
	delay_8
	face_left
	delay_8
	face_down
	step_end

EcruteakCity_Theater_EventScript_LugiaBuffer::
	bufferspeciesname STR_VAR_1, SPECIES_LUGIA
	return
EcruteakCity_Theater_EventScript_HoohBuffer::
	bufferspeciesname STR_VAR_1, SPECIES_HO_OH
	return
EcruteakCity_Theater_EventScript_LegendaryCutscene::
	call_if_eq VAR_LUGIA_OR_HOOH, 1, EcruteakCity_Theater_EventScript_LugiaBuffer
	call_if_eq VAR_LUGIA_OR_HOOH, 2, EcruteakCity_Theater_EventScript_HoohBuffer 
	msgbox EcruteakCity_Theater_Text_ZukiSeen, MSGBOX_DEFAULT
	closemessage
	delay 20
	playse SE_M_PETAL_DANCE
	applymovement2 LOCALID_ECRUTEAK_ZUKI, EcruteakCity_Theater_Movement_KimonoSpin
	waitmovement 0
	setvar VAR_ECRUTEAK_CITY_THEATER, 6
EcruteakCity_Theater_EventScript_ZukiBattle::
	msgbox EcruteakCity_Theater_Text_ZukiSeenAgain, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, EcruteakCity_Theater_EventScript_LegendaryDenied
	call_if_eq VAR_FACING, DIR_SOUTH, EcruteakCity_Theater_Movement_SouthCorrection
	call_if_eq VAR_FACING, DIR_WEST, EcruteakCity_Theater_Movement_WestCorrection
	call_if_eq VAR_FACING, DIR_EAST, EcruteakCity_Theater_Movement_EastCorrection
	trainerbattle_no_intro TRAINER_ZUKI_HNS, EcruteakCity_Theater_Text_KimonoGirlBeaten
	applymovement2 LOCALID_ECRUTEAK_ZUKI, EcruteakCity_Theater_Movement_ZukiWalkUp
	waitmovement 0
EcruteakCity_Theater_EventScript_NaokoBattle::
	playse SE_M_PETAL_DANCE
	applymovement2 LOCALID_ECRUTEAK_NAOKO, EcruteakCity_Theater_Movement_KimonoSpin
	waitmovement 0
	applymovement2 LOCALID_ECRUTEAK_NAOKO, EcruteakCity_Theater_Movement_NaokoWalkToPlayer
	waitmovement 0
	msgbox EcruteakCity_Theater_Text_NaokoSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_NAOKO_HNS, EcruteakCity_Theater_Text_KimonoGirlBeaten
	applymovement2 LOCALID_ECRUTEAK_NAOKO, EcruteakCity_Theater_Movement_NaokoWalkBack
	waitmovement 0
EcruteakCity_Theater_EventScript_MikiBattle::
	playse SE_M_PETAL_DANCE
	applymovement2 LOCALID_ECRUTEAK_MIKI, EcruteakCity_Theater_Movement_KimonoSpin
	waitmovement 0
	applymovement2 LOCALID_ECRUTEAK_MIKI, EcruteakCity_Theater_Movement_MikiWalkToPlayer
	waitmovement 0
	msgbox EcruteakCity_Theater_Text_MikiSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_MIKI_HNS, EcruteakCity_Theater_Text_KimonoGirlBeaten
	applymovement2 LOCALID_ECRUTEAK_MIKI, EcruteakCity_Theater_Movement_MikiWalkBack
	waitmovement 0
EcruteakCity_Theater_EventScript_SayoBattle::
	playse SE_M_PETAL_DANCE
	applymovement2 LOCALID_ECRUTEAK_SAYO, EcruteakCity_Theater_Movement_KimonoSpin
	waitmovement 0
	applymovement2 LOCALID_ECRUTEAK_SAYO, EcruteakCity_Theater_Movement_SayoWalkToPlayer
	waitmovement 0
	msgbox EcruteakCity_Theater_Text_SayoSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_SAYO_HNS, EcruteakCity_Theater_Text_KimonoGirlBeaten
	applymovement2 LOCALID_ECRUTEAK_SAYO, EcruteakCity_Theater_Movement_SayoWalkBack
	waitmovement 0
EcruteakCity_Theater_EventScript_KuniBattle::
	playse SE_M_PETAL_DANCE
	applymovement2 LOCALID_ECRUTEAK_KUNI, EcruteakCity_Theater_Movement_KimonoSpin
	waitmovement 0
	applymovement2 LOCALID_ECRUTEAK_KUNI, EcruteakCity_Theater_Movement_KuniWalkToPlayer
	waitmovement 0
	msgbox EcruteakCity_Theater_Text_KuniSeen, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_KUNI_HNS, EcruteakCity_Theater_Text_KimonoGirlBeaten
	applymovement2 LOCALID_ECRUTEAK_KUNI, EcruteakCity_Theater_Movement_KuniWalkBack
	waitmovement 0
EcruteakCity_Theater_EventScript_BeatGauntlet::
	applymovement2 LOCALID_ECRUTEAK_ZUKI, Common_Movement_WalkDown1
	waitmovement 0
	msgbox EcruteakCity_Theater_Text_ZukiDone, MSGBOX_DEFAULT
	goto_if_eq VAR_LUGIA_OR_HOOH, 1, EcruteakCity_Theater_EventScript_Lugia
	goto_if_eq VAR_LUGIA_OR_HOOH, 2, EcruteakCity_Theater_EventScript_Hooh

	EcruteakCity_Theater_Movement_SouthCorrection::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	turnobject LOCALID_ECRUTEAK_ZUKI, DIR_SOUTH
	return

	EcruteakCity_Theater_Movement_WestCorrection::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	turnobject LOCALID_ECRUTEAK_ZUKI, DIR_SOUTH
	return

	EcruteakCity_Theater_Movement_EastCorrection::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight1
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	turnobject LOCALID_ECRUTEAK_ZUKI, DIR_SOUTH
	return

EcruteakCity_Theater_EventScript_Lugia::
	giveitem ITEM_TIDAL_BELL
	closemessage
	playse SE_M_RAZOR_WIND
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 20  @ num shakes
	setvar VAR_0x8007, 6  @ shake delay
	special ShakeCamera
	waitstate
	addobject LOCALID_ECRUTEAK_SISTER
	applymovement2 LOCALID_ECRUTEAK_SISTER, EcruteakCity_Theater_Movement_Sister
	waitmovement 0
	turnobject LOCALID_ECRUTEAK_ZUKI, DIR_WEST
	msgbox EcruteakCity_Theater_Text_GirlLugia, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_ECRUTEAK_ZUKI, Common_Movement_ExclamationMark
	delay 60
	turnobject LOCALID_ECRUTEAK_ZUKI, DIR_SOUTH
	msgbox EcruteakCity_Theater_Text_ZukiLugia, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK

	removeobject LOCALID_ECRUTEAK_ZUKI
	removeobject LOCALID_ECRUTEAK_MIKI
	removeobject LOCALID_ECRUTEAK_NAOKO
	removeobject LOCALID_ECRUTEAK_KUNI
	removeobject LOCALID_ECRUTEAK_SAYO
	removeobject LOCALID_ECRUTEAK_MIKI

	removeobject LOCALID_ECRUTEAK_SISTER
	playse SE_EXIT
	delay 120
	fadescreenswapbuffers FADE_FROM_BLACK
	clearflag FLAG_HIDE_WHIRL_ISLANDS_KIMONO_GIRLS
	clearflag FLAG_HIDE_WHIRL_ISLANDS_TENTACRUEL
	setvar VAR_COMPLETED_LUGIA, 2
	setvar VAR_COMPLETED_HO_OH, 3
	setflag FLAG_HIDE_WHIRL_ISLANDS_TENTACRUEL
	setflag FLAG_HIDE_ECRUTEAK_CITY_THEATER_ZUKI
	setflag FLAG_HIDE_ECRUTEAK_CITY_THEATER_KIMONOS
	setvar VAR_NEWBARKTOWN_LABSTATE, 9
	setvar VAR_ECRUTEAK_CITY_THEATER, 7
	release
	end
EcruteakCity_Theater_EventScript_Hooh::
	giveitem ITEM_CLEAR_BELL
	closemessage
	playse SE_M_RAZOR_WIND
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 20  @ num shakes
	setvar VAR_0x8007, 6  @ shake delay
	special ShakeCamera
	waitstate
	addobject LOCALID_ECRUTEAK_SISTER
	applymovement2 LOCALID_ECRUTEAK_SISTER, EcruteakCity_Theater_Movement_Sister
	waitmovement 0
	msgbox EcruteakCity_Theater_Text_GirlHooh, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_ECRUTEAK_ZUKI, Common_Movement_ExclamationMark
	delay 60
	turnobject LOCALID_ECRUTEAK_ZUKI, DIR_SOUTH
	msgbox EcruteakCity_Theater_Text_ZukiHooh, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK

	removeobject LOCALID_ECRUTEAK_ZUKI
	removeobject LOCALID_ECRUTEAK_MIKI
	removeobject LOCALID_ECRUTEAK_NAOKO
	removeobject LOCALID_ECRUTEAK_KUNI
	removeobject LOCALID_ECRUTEAK_SAYO
	removeobject LOCALID_ECRUTEAK_MIKI

	removeobject LOCALID_ECRUTEAK_SISTER
	playse SE_EXIT
	delay 120
	fadescreenswapbuffers FADE_FROM_BLACK

	clearflag FLAG_HIDE_TINTOWER_GUARD
	clearflag FLAG_HIDE_TIN_TOWER_KIMONO_GIRLS
	setvar VAR_COMPLETED_HO_OH, 2
	setvar VAR_COMPLETED_LUGIA, 3
	setflag FLAG_HIDE_ECRUTEAK_CITY_THEATER_ZUKI
	setflag FLAG_HIDE_ECRUTEAK_CITY_THEATER_KIMONOS
	setvar VAR_NEWBARKTOWN_LABSTATE, 9
	setvar VAR_ECRUTEAK_CITY_THEATER, 7
	release
	end

EcruteakCity_Theater_Movement_Sister:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_right
	step_end

EcruteakCity_Theater_EventScript_LegendaryDenied::
	msgbox EcruteakCity_Theater_Text_ZukiNo, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_Theater_Movement_ZukiWalkUp:
	lock_facing_direction
	walk_up
	unlock_facing_direction
	step_end
EcruteakCity_Theater_Movement_NaokoWalkToPlayer:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_down
	step_end
EcruteakCity_Theater_Movement_NaokoWalkBack:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_down
	step_end
EcruteakCity_Theater_Movement_MikiWalkToPlayer:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_down
	step_end
EcruteakCity_Theater_Movement_MikiWalkBack:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_down
	step_end

EcruteakCity_Theater_Movement_SayoWalkToPlayer:
	walk_down
	walk_right
	walk_right
	walk_right
	face_down
	step_end
EcruteakCity_Theater_Movement_SayoWalkBack:
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

EcruteakCity_Theater_Movement_KuniWalkToPlayer:
	walk_down
	walk_left
	walk_left
	walk_left
	face_down
	step_end
EcruteakCity_Theater_Movement_KuniWalkBack:
	walk_right
	walk_right
	walk_right
	walk_up
	face_down
	step_end

EcruteakCity_Theater_Text_KimonoGirlBeaten:
	.string "...$"

EcruteakCity_Theater_Text_ZukiSeen:
	.string "Willkommen. Ich heiße Linda.\n"
	.string "Ich traf dich schon einmal in\n"
	.string "VIOLA CITY.\p"
	.string "Um {STR_VAR_1} zurückzubringen,\n"
	.string "brauchten wir jemanden mit der\n"
	.string "richtigen Bindung zu Pokémon.\p"
	.string "Wir baten Mr. Pokémon, dieses\n"
	.string "Rätsel-Ei an jemanden zu geben,\l"
	.string "der Talent zeigt.\p"
	.string "Das Ei ging von Mr. Pokémon\n"
	.string "zu Prof. Lind, dann zu dir.\p"
	.string "Aber nur Reinheit allein reicht\n"
	.string "nicht, um die Kraft dieses\l"
	.string "Pokémon zu meistern.$"

EcruteakCity_Theater_Text_ZukiSeenAgain:
	.string "Ich werde prüfen, ob du ein\n"
	.string "guter Trainer bist.\p"
	.string "Bist du bereit, {PLAYER}?$"

EcruteakCity_Theater_Text_ZukiNo:
	.string "Das ist in Ordnung...\n"
	.string "Ich warte, bis du bereit bist.$"

EcruteakCity_Theater_Text_NaokoSeen:
	.string "Du bist sehr stark. Du hast\n"
	.string "mir im Steineichenwald geholfen.\p"
	.string "Ich heiße Edith--ich habe keine\n"
	.string "so gute Orientierung.\p"
	.string "Ich sah, wie du Team Rocket\n"
	.string "besiegt hast, als Kurt am\n"
	.string "Flegmon-Brunnen in Not war.\p"
	.string "Lass mich dich und deine\n"
	.string "Pokémon herausfordern!$"

EcruteakCity_Theater_Text_MikiSeen:
	.string "Du bist ein starker Trainer.\n"
	.string "Ich erinnere mich, wie du den\n"
	.string "Rocket Rüpel hier vertrieben hast.\p"
	.string "Danke dafür.\p"
	.string "Aber ich bin auch Trainerin.\n"
	.string "Wer am meisten weiß, spricht\n"
	.string "am wenigsten!\p"
	.string "Ich bin Lore--das KIMONO GIRL!\p"
	.string "Lass mich dich und deine\n"
	.string "Pokémon herausfordern!$"

EcruteakCity_Theater_Text_SayoSeen:
	.string "Guter Kampfgeist! Du hast mich\n"
	.string "vom Eis gestoßen.\p"
	.string "Ich laufe in Sandalen.\n"
	.string "Ich bin Keiko--das KIMONO GIRL!\p"
	.string "Ich hörte zu in der Drachenhöhle,\n"
	.string "als du den Test des Ältesten\n"
	.string "bestanden hast.\p"
	.string "Lass mich dich und deine\n"
	.string "Pokémon herausfordern!$"

EcruteakCity_Theater_Text_KuniSeen:
	.string "Ich bin die Letzte.\p"
	.string "Du warst zuverlässig im\n"
	.string "DUKATIA-TUNNEL.\p"
	.string "Ich tanze auch unterirdisch--\n"
	.string "Hussa!\p"
	.string "Ich sah, wie du Rocket am\n"
	.string "Radioturm-Auftrag gehindert hast.\p"
	.string "Zeig mir jetzt deine Stärke!\n"
	.string "Lass mich dich und deine\l"
	.string "Pokémon herausfordern!$"

EcruteakCity_Theater_Text_ZukiDone:
	.string "Wir lagen nicht falsch mit dir.\n"
	.string "Du bist wahrlich würdig...\p"
	.string "Bitte nimm es.$"

EcruteakCity_Theater_Text_GirlHooh:
	.string "Große Schwestern! Ich sah gerade\n"
	.string "den großen Schatten eines Pokémon\n"
	.string "über dem GLOCKENTURM!\p"
	.string "Es könnte sein...$"

EcruteakCity_Theater_Text_GirlLugia:
	.string "Große Schwestern! Ich sah gerade\n"
	.string "den großen Schatten eines Pokémon\n"
	.string "in den Strudelinseln!\p"
	.string "Es könnte sein...$"

EcruteakCity_Theater_Text_ZukiHooh:
	.string "Linda: {PLAYER}!\n"
	.string "Wir treffen uns am Glockenturm.\l"
	.string "Bis dann!$"

EcruteakCity_Theater_Text_ZukiLugia:
	.string "Linda: {PLAYER}!\n"
	.string "Wir treffen uns an den\n"
	.string "Strudelinseln.\l"
	.string "Bis dann!$"

EcruteakCity_Theater_Text_KimonoDone:
	.string "Wir proben gerade einen Tanz.$"

EcruteakCity_Theater_Text_ZukiAfterAll:
	.string "Danke für deine Hilfe neulich.\p"
	.string "Du hast gezeigt, dass Menschen\n"
	.string "mit Pokémon eine Bindung aufbauen...\p"
	.string "Wir schätzen es, dass du unsere\n"
	.string "Hoffnungen erfüllt hast, {PLAYER}!\p"
	.string "Wenn du daraus etwas gelernt hast,\n"
	.string "dank Mr. Pokémon und PROF. Lind..$"

EcruteakCity_Theater_Text_KimonoGirlsBeforeBattle:
	.string "Sprich mit Linda in der Mitte,\n"
	.string "wenn du bereit bist.$"


Route114_FossilManiacsTunnel_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_FossilManiacsTunnel_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, Route114_FossilManiacsTunnel_OnLoad
	.byte 0

Route114_FossilManiacsTunnel_OnTransition:
	call_if_set FLAG_SYS_GAME_CLEAR, Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac
	end

Route114_FossilManiacsTunnel_EventScript_MoveFossilManiac::
	setobjectxyperm LOCALID_FOSSIL_MANIAC, 6, 5
	setobjectmovementtype LOCALID_FOSSIL_MANIAC, MOVEMENT_TYPE_FACE_DOWN
	return

Route114_FossilManiacsTunnel_OnLoad:
	call_if_unset FLAG_SYS_GAME_CLEAR, Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass
	end

Route114_FossilManiacsTunnel_EventScript_CloseDesertUnderpass::
	setmetatile 6, 1, METATILE_Fallarbor_RedRockWall, TRUE
	setmetatile 6, 2, METATILE_Fallarbor_RedRockWall, TRUE
	return

Route114_FossilManiacsTunnel_EventScript_ManiacMentionCaveIn::
	lockall
	applymovement LOCALID_FOSSIL_MANIAC, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox Route114_FossilManiacsTunnel_Text_NotSafeThatWay, MSGBOX_DEFAULT
	setvar VAR_FOSSIL_MANIAC_STATE, 2
	releaseall
	end

Route114_FossilManiacsTunnel_EventScript_FossilManiac::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_REVIVED_FOSSIL_MON, Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil
	checkitem ITEM_ROOT_FOSSIL
	goto_if_eq VAR_RESULT, TRUE, Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
	checkitem ITEM_CLAW_FOSSIL
	goto_if_eq VAR_RESULT, TRUE, Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil
	msgbox Route114_FossilManiacsTunnel_Text_LookInDesertForFossils, MSGBOX_DEFAULT
	release
	end

Route114_FossilManiacsTunnel_EventScript_PlayerHasFossil::
	msgbox Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils, MSGBOX_DEFAULT
	release
	end

Route114_FossilManiacsTunnel_EventScript_PlayerRevivedFossil::
	msgbox Route114_FossilManiacsTunnel_Text_FossilsAreWonderful, MSGBOX_DEFAULT
	release
	end

Route114_FossilManiacsTunnel_Text_LookInDesertForFossils:
	.string "Ich bin der FOSSILMANIAC… Ich bin\n"
	.string "ein netter Typ, der Fossilien liebt…\p"
	.string "Möchtest du ein Fossil haben?\p"
	.string "Die Fossilien in dieser Gegend gehören\n"
	.string "allerdings alle mir! Keines ist für\n"
	.string "dich… \p"
	.string "Wenn du unbedingt ein Fossil haben\n"
	.string "möchtest, geh in die Wüste und suche\l"
	.string "bei den Felsen und im Sand. Vielleicht\l"
	.string "findest du dort eines…$"

Route114_FossilManiacsTunnel_Text_DevonCorpRevivingFossils:
	.string "Du hast ein FOSSIL gefunden, stimmt’s?\n"
	.string "Das ist schön… Traumhaft…\p"
	.string "Was wirst du mit dem FOSSIL machen?\p"
	.string "Ich habe gehört, dass DEVON versucht,\n"
	.string "aus den FOSSILien POKéMON zum\l"
	.string "Leben zu erwecken…\p"
	.string "Ich liebe FOSSILien, daher würde ich\n"
	.string "so etwas niemals machen…$"

Route114_FossilManiacsTunnel_Text_FossilsAreWonderful:
	.string "FOSSILien sind so… Wundervoll…\n"
	.string "Einfach traumhaft…$"

Route114_FossilManiacsTunnel_Text_NotSafeThatWay:
	.string "Oh… So ist es nicht sicher…\p"
	.string "Ich habe hier gegraben…\n"
	.string "Die Wand ist auf einmal eingestürzt…\p"
	.string "Jetzt gibt es hier eine große Höhle…\p"
	.string "Aber ich habe sie nicht weiter\n"
	.string "untersucht, denn ich glaube nicht,\n"
	.string "dass\l"
	.string "sich dort ein FOSSIL befindet…$"


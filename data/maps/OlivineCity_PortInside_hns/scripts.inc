OlivineCity_PortInside_hns_MapScripts::
	.byte 0


OlivineCity_PortInside_EventScript_Oak::
	lock
	playbgm MUS_HG_OAK, TRUE
	playse SE_PIN
	applymovement2 LOCALID_OLIVINEPORT_OAK, Common_Movement_ExclamationMark
	delay 60
	turnobject LOCALID_OLIVINEPORT_OAK, DIR_NORTH
	msgbox OlivineCity_PortInside_Text_Nationaldex1, MSGBOX_DEFAULT
	closemessage
	applymovement2 LOCALID_OLIVINEPORT_OAK, OlivineCity_PortInside_Movement_OakFixDex
	waitmovement 0
	delay 30
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	playfanfare MUS_OBTAIN_ITEM
	message OlivineCity_PortInside_Text_Nationaldex2
	waitfanfare
	delay 50
	msgbox OlivineCity_PortInside_Text_Nationaldex3, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement2 LOCALID_OLIVINEPORT_OAK, Common_Movement_ExclamationMark
	delay 60
	msgbox OlivineCity_PortInside_Text_Nationaldex4, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, OlivineCity_PortInside_Movement_PlayerMoveOver
	waitmovement 0
	applymovement LOCALID_OLIVINEPORT_OAK, OlivineCity_PortInside_Movement_OakLeave
	waitmovement 0
	setflag FLAG_HIDE_OLIVINE_PORT_OAK
	playse SE_EXIT
	removeobject LOCALID_OLIVINEPORT_OAK
	fadedefaultbgm
	waitse
	release
	end

OlivineCity_PortInside_Movement_OakFixDex:
	walk_in_place_up
	walk_in_place_up
	step_end

OlivineCity_PortInside_Movement_PlayerMoveOver:
	walk_up
	walk_left
	face_right
	step_end

OlivineCity_PortInside_Movement_OakLeave:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OlivineCity_PortInside_Text_Nationaldex1:
	.string "PROF. EICH: Hallo!\p"
	.string "Du entwickelst langsam die\n"
	.string "Ausstrahlung eines CHAMPIONS,\l"
	.string "{PLAYER}!\p"
	.string "Es ist Zeit, dass dein POKéDEX\n"
	.string "verbessert wird.\p"
	.string "Zeig mir deinen POKéDEX bitte\n"
	.string "für einen Moment.\p"
	.string "Ich rüste ihn mit dem\n"
	.string "NATIONALEN MODUS auf.$"
OlivineCity_PortInside_Text_Nationaldex2:
	.string "{PLAYER}s POKéDEX wurde mit dem\n"
	.string "NATIONALEN MODUS erweitert!$"
OlivineCity_PortInside_Text_Nationaldex3:
	.string "PROF. EICH: Es wird nicht leicht\n"
	.string "sein, den NATIONALEN POKéDEX\l"
	.string "zu vervollständigen...\p"
	.string "Doch ich bin sicher, dass du es\n"
	.string "ernsthaft versuchen wirst!$"
OlivineCity_PortInside_Text_Nationaldex4:
	.string "Oh, wie die Zeit vergeht!\p"
	.string "Ich muss eine Radiosendung im\n"
	.string "RADIO-TURM von DUKATIA CITY\l"
	.string "aufnehmen.\p"
	.string "Du willst sicher nach KANTO.\p"
	.string "Wenn du nach ALABASTIA kommst,\n"
	.string "besuche doch mein\l"
	.string "POKéMON-FORSCHUNGSLABOR!$"

OlivinePort_EventScript_CooltrainerF::
	msgbox OlivinePort_Text_CooltrainerF, MSGBOX_NPC
	end

OlivinePort_EventScript_Fisher1::
	msgbox OlivinePort_Text_FishingGuru1, MSGBOX_NPC
	end

OlivinePort_EventScript_Fisher2::
	msgbox OlivinePort_Text_FishingGuru2, MSGBOX_NPC
	end

OlivinePort_EventScript_Youngster::
	msgbox OlivinePort_Text_Youngster, MSGBOX_NPC
	end

OlivinePort_EventScript_Sailor::
	lock
	faceplayer
	goto_if_ge VAR_SSAQUA_STATE, 7, OlivinePort_EventScript_Sailor_AfterKanto
	msgbox OlivinePort_Text_AskBoard, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, OlivinePort_EventScript_Sailor_Refused
	checkitem ITEM_SS_TICKET
	goto_if_eq VAR_RESULT, TRUE, OlivinePort_EventScript_Sailor_MaidenVoyage
	msgbox OlivinePort_Text_NoTicket, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivinePort_EventScript_Sailor_AfterKanto::
	message OlivinePort_Text_WhereSail
	multichoice 20, 0, MULTI_OLIVINE_HARBOR, FALSE
	switch VAR_RESULT
	case 0, OlivinePort_EventScript_ChoseVermilion
	case 1, OlivinePort_EventScript_ChoseSouthernIsland
	case 2, OlivinePort_EventScript_ChoseBirthIsland
	case 3, OlivinePort_EventScript_ChoseFarawayIsland
	case 4, OlivinePort_EventScript_ChoseBattleFrontier
	case 5, OlivinePort_EventScript_Sailor_Refused
	case MULTI_B_PRESSED, OlivinePort_EventScript_Sailor_Refused
	release
	end

OlivinePort_EventScript_ChoseVermilion::
	closemessage
	delay 20
	checkitem ITEM_SS_TICKET
	bufferitemname STR_VAR_1, ITEM_SS_TICKET
	goto_if_eq VAR_RESULT, FALSE, OlivinePort_EventScript_Sailor_NoCredentials
	call OlivinePort_EventScript_EnterShip
	warpsilent MAP_VERMILION_CITY_PORT_INSIDE_HNS, 8, 9
	waitstate
	release
	end

OlivinePort_EventScript_ChoseSouthernIsland::
	closemessage
	delay 20
	checkitem ITEM_EON_TICKET
	bufferitemname STR_VAR_1, ITEM_EON_TICKET
	goto_if_eq VAR_RESULT, FALSE, OlivinePort_EventScript_Sailor_NoCredentials
	call OlivinePort_EventScript_EnterShip
	warpsilent MAP_SOUTHERN_ISLAND_EXTERIOR_HNS, 13, 22
	waitstate
	release
	end

OlivinePort_EventScript_ChoseBirthIsland::
	closemessage
	delay 20
	checkitem ITEM_AURORA_TICKET
	bufferitemname STR_VAR_1, ITEM_AURORA_TICKET
	goto_if_eq VAR_RESULT, FALSE, OlivinePort_EventScript_Sailor_NoCredentials
	call OlivinePort_EventScript_EnterShip
	warpsilent MAP_BIRTH_ISLAND_EXTERIOR_HNS, 13, 23
	waitstate
	release
	end

OlivinePort_EventScript_ChoseFarawayIsland::
	closemessage
	delay 20
	checkitem ITEM_OLD_SEA_MAP
	bufferitemname STR_VAR_1, ITEM_OLD_SEA_MAP
	goto_if_eq VAR_RESULT, FALSE, OlivinePort_EventScript_Sailor_NoCredentials
	call OlivinePort_EventScript_EnterShip
	warpsilent MAP_FARAWAY_ISLAND_ENTRANCE_HNS, 13, 38
	waitstate
	release
	end	

OlivinePort_EventScript_ChoseBattleFrontier::
	closemessage
	delay 20
	call OlivinePort_EventScript_EnterShip
	warpsilent MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 20, 67
	waitstate
	release
	end	

OlivinePort_EventScript_Sailor_MaidenVoyage::
	msgbox OlivinePort_Text_FlashTicket, MSGBOX_DEFAULT
	call OlivinePort_EventScript_EnterShip
	setvar VAR_SSAQUA_STATE, 1
	clearflag FLAG_HIDE_SSAQUA_1F_GRANDPA
	setflag FLAG_HIDE_SSAQUA_ROOM_SSE_GRANDDAUGHTER

	clearflag FLAG_HIDE_SSAQUA_SAILOR
	clearflag FLAG_HIDE_SSAQUA_CAPTAINS_ROOM_GRANDDAUGHTER

	warpsilent MAP_SSAQUA_1F_HNS, 29, 3
	waitstate
	release
	end

OlivinePort_EventScript_EnterShip::
	msgbox OlivinePort_Text_SailorGetOnBoard, MSGBOX_DEFAULT
	closemessage
	delay 20
	applymovement LOCALID_OLIVINEPORT_SAILOR, OlivinePort_Movement_SailorEnterBoat
	waitmovement 0
	playse SE_EXIT
	applymovement OBJ_EVENT_ID_PLAYER, OlivinePort_Movement_PlayerEnterBoat
	waitmovement 0
	special SpawnCameraObject
	playse SE_EXIT
	removeobject OBJ_EVENT_ID_PLAYER
	delay 60
	applymovement LOCALID_OLIVINEPORT_SAILOR, OlivinePort_Movement_BoatLeave
	applymovement LOCALID_OLIVINEPORT_BOAT, OlivinePort_Movement_BoatLeave
	waitmovement LOCALID_OLIVINEPORT_BOAT
	setrespawn HEAL_LOCATION_OLIVINE_CITY_HNS
	return

OlivinePort_EventScript_Sailor_Refused::
	msgbox OlivinePort_Text_ComeAgain, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivinePort_EventScript_Sailor_NoCredentials::
	msgbox OlivinePort_Text_NoPass, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivinePort_Movement_SailorEnterBoat:
	walk_down
	walk_down
	step_end

OlivinePort_Movement_PlayerEnterBoat:
	walk_down
	walk_down
	walk_in_place_down
	step_end

OlivinePort_Movement_BoatLeave:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

OlivinePort_Text_NoPass:
	.string "{PLAYER} versucht das\n"
	.string "{STR_VAR_1} zu zeigen…\p"
	.string "…Du hast kein {STR_VAR_1}!\p"
	.string "Sorry! Du darfst nur mit\n"
	.string "{STR_VAR_1} an Bord.$"

OlivinePort_Text_SailorGetOnBoard:
	.string "Wir legen bald ab! Geh an Bord.$"

OlivinePort_Text_CantBoard:
	.string "Du darfst jetzt nicht an Bord.$"

OlivinePort_Text_WhereSail:
	.string "Wohin möchtest du Segeln?$"

OlivinePort_Text_AskBoard:
	.string "Willkommen auf dem\n"
	.string "SCHNELLBOOT M.S. AQUA.\p"
	.string "Trittst du heute deine Reise an?$"

OlivinePort_Text_AskTicket:
	.string "Zeige mir bitte dein\p"
	.string "BOOTSTICKET.$"

OlivinePort_Text_ComeAgain:
	.string "Komm jederzeit wieder vorbei!$"

OlivinePort_Text_FlashTicket:
	.string "{PLAYER} zeigt das BOOTSTICKET.\p"
	.string "In Ordnung. Danke schön!$"

OlivinePort_Text_NoTicket:
	.string "{PLAYER} sucht das BOOTSTICKET…\p"
	.string "…Kein TICKET!\p"
	.string "Tut mir Leid! Du darfst nur\p"
	.string "mit TICKET an Bord.$"

OlivinePort_Text_FishingGuru1:
	.string "Hier kannst du MUSCHAS leicht\p"
	.string "fangen. An anderen\n"
	.string "Orten sind sie seltener.$"

OlivinePort_Text_FishingGuru2:
	.string "Wie viele ANGELN hast du?\p"
	.string "Mit verschiedenen ANGELN,\n"
	.string "fängst du verschiedene\l"
	.string "Pokémon.$"

OlivinePort_Text_Youngster:
	.string "M.S. AQUA benutzt Spezialdüsen,\n"
	.string "um über die Wellen zu gleiten!$"

OlivinePort_Text_CooltrainerF:
	.string "In KANTO gibt es viele Pokémon.\p"
	.string "Ich wünschte, ich könnte dorthin…$"

OlivinePort_Text_SailorBeforeHOF:
	.string "Wir wollen nicht, dass du ins Wasser\n"
	.string "fällst. Darum lasen wir\l"
	.string "dich nicht herein.$"

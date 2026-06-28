BattleFrontier_BattleTowerMultiPartnerRoom_hns_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleTowerMultiPartnerRoom_OnResume_hns
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerMultiPartnerRoom_OnTransition_hns
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerMultiPartnerRoom_OnWarp_hns
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerMultiPartnerRoom_OnFrame_hns
	.byte 0

BattleFrontier_BattleTowerMultiPartnerRoom_OnResume_hns:
	pyramid_resetparty
	end

BattleFrontier_BattleTowerMultiPartnerRoom_OnTransition_hns:
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ChosePartner_hns
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
	clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
	setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1
	setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2
	tower_loadpartners
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ChosePartner_hns::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_BOY_1
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BOY_1
	setvar VAR_OBJ_GFX_ID_2, OBJ_EVENT_GFX_BOY_1
	setvar VAR_OBJ_GFX_ID_3, OBJ_EVENT_GFX_BOY_1
	setvar VAR_OBJ_GFX_ID_4, OBJ_EVENT_GFX_BOY_1
	setvar VAR_OBJ_GFX_ID_5, OBJ_EVENT_GFX_BOY_1
	setvar VAR_OBJ_GFX_ID_6, OBJ_EVENT_GFX_BOY_1
	setvar VAR_OBJ_GFX_ID_7, OBJ_EVENT_GFX_BOY_1
	setvar VAR_TEMP_1, 1
	setvar VAR_TEMP_3, 1
	setobjectxyperm LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, 10, 2
	end

BattleFrontier_BattleTowerMultiPartnerRoom_OnWarp_hns:
	map_script_2 VAR_TEMP_3, 1, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TurnPlayerNorth_hns
	.2byte 0

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TurnPlayerNorth_hns::
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

BattleFrontier_BattleTowerMultiPartnerRoom_OnFrame_hns:
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterRoom_hns
	map_script_2 VAR_TEMP_3, 1, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ExitRoom_hns
	.2byte 0

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ExitRoom_hns::
	lockall
	setvar VAR_TEMP_3, 0
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterElevator_hns
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterRoom_hns::
	lockall
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterRoom_hns
	waitmovement 0
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantBlockExit_hns
	waitmovement 0
	copyobjectxytoperm LOCALID_TOWER_PARTNER_ROOM_ATTENDANT
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner_hns, MSGBOX_DEFAULT
	special HealPlayerParty
	setvar VAR_TEMP_1, 1
	releaseall
	end

BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterRoom_hns:
	walk_down
	step_end

BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantBlockExit_hns:
	walk_left
	walk_in_place_faster_down
	step_end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Attendant_hns::
	lock
	faceplayer
	message BattleFrontier_BattleTowerMultiPartnerRoom_Text_QuitLookingForPartner_hns
	waitmessage
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_QuitChallenge_hns
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner_hns2_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_QuitChallenge_hns::
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
	goto BattleFrontier_BattleTower_EventScript_WarpToLobbyLost_hns
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterElevator_hns::
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_ThankYouForChoosingPartner_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	opendoor 10, 1
	waitdooranim
	call BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevator_hns
	closedoor 10, 1
	waitdooranim
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_ELEVATOR_HNS, 1, 6
	waitstate
	releaseall
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevator_hns::
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator_hns
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevator_hns
	waitmovement 0
	return

@ Unused
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevator_hnsEast_hns:
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator_hns
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevator_hnsEast_hns
	waitmovement 0
	return

@ Unused
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevator_hnsWest_hns:
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator_hns
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEneterElevatorWest_hns
	waitmovement 0
	return

BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevator_hns:
	walk_up
	walk_up
	set_invisible
	step_end

@ Functionally unused
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevator_hnsEast_hns:
	walk_right
	walk_up
	set_invisible
	step_end

@ Functionally unused
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEneterElevatorWest_hns:
	walk_left
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator_hns:
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner1_hns::
	lock
	faceplayer
	setvar VAR_TEMP_2, 0
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_hns
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_hns::
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner_hns
	tower_dopartnermsg PARTNER_MSGID_INTRO
	waitmessage
	waitbuttonpress
	tower_dopartnermsg PARTNER_MSGID_MON1
	waitmessage
	waitbuttonpress
	tower_dopartnermsg PARTNER_MSGID_MON2_ASK
	waitmessage
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
	switch VAR_RESULT
	case 1, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner_hns
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner_hns
	tower_dopartnermsg PARTNER_MSGID_ACCEPT
	waitmessage
	waitbuttonpress
	closemessage
	call_if_ne VAR_FACING, DIR_SOUTH, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExit_hns
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExit_hnsSouth_hns
	removeobject VAR_LAST_TALKED
	setflag FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_PARTNER_ROOM_HNS, 10, 3
	waitstate
	release
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner_hns::
	tower_dopartnermsg PARTNER_MSGID_REJECT
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExit_hns::
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExit_hns
	waitmovement 0
	return

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExit_hnsSouth_hns::
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExit_hnsSouth_hns
	waitmovement 0
	return

BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExit_hns:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExit_hnsSouth_hns:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner2_hns::
	lock
	faceplayer
	setvar VAR_TEMP_2, 1
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_hns
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner3_hns::
	lock
	faceplayer
	setvar VAR_TEMP_2, 2
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_hns
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner4_hns::
	lock
	faceplayer
	setvar VAR_TEMP_2, 3
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_hns
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner5_hns::
	lock
	faceplayer
	setvar VAR_TEMP_2, 4
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_hns
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner6_hns::
	lock
	faceplayer
	setvar VAR_TEMP_2, 5
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_hns
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner7_hns::
	lock
	faceplayer
	setvar VAR_TEMP_2, 6
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_hns
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner8_hns::
	lock
	faceplayer
	setvar VAR_TEMP_2, 7
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner_hns
	end

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner_hns:
	.string "Bitte such dir unter den TRAINERn hier\n"
	.string "einen Partner aus.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_QuitLookingForPartner_hns:
	.string "{PLAYER}, du hast noch keinen Partner\n"
	.string "gefunden.\p"
	.string "Möchtest du die Suche aufgeben und\n"
	.string "zurück zur Rezeption gehen?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner_hns2_hns:
	.string "Dann such dir bitte unter den TRAINERn\n"
	.string "hier einen Partner aus.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ThankYouForChoosingPartner_hns::
	.string "Danke, dass du einen Partner gewählt\n"
	.string "hast.\p"
	.string "Ich führe dich jetzt in deinen\n"
	.string "MULTIKAMPF-Raum.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Intro_hns::
	.string "Ich bin {STR_VAR_1}s Lehrling Nr.\n"
	.string "{STR_VAR_2}.\l"
	.string "Nenn mich einfach {STR_VAR_3}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Mon1_hns::
	.string "Auf {STR_VAR_1}s Rat hin habe ich\n"
	.string "ein {STR_VAR_3} mit {STR_VAR_2} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Mon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}.\p"
	.string "Bitte, lass uns ein Team bilden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Accept_hns::
	.string "Danke!\n"
	.string "Ich melde uns gleich an.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Reject_hns::
	.string "Ich wollte so gern mit dir,\n"
	.string "{PLAYER}, ein Team bilden…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Intro_hns::
	.string "Ich bin {STR_VAR_1}s Lehrling Nr.\n"
	.string "{STR_VAR_2}. Mein Name ist {STR_VAR_3}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Mon1_hns::
	.string "Ich hab mir von {STR_VAR_1} Rat geholt\n"
	.string "und ein {STR_VAR_3} mit {STR_VAR_2} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Mon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}.\p"
	.string "Bitte, lass uns ein Team bilden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Accept_hns::
	.string "Vielen Dank!\n"
	.string "Ich erledige die Anmeldung schnell!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Reject_hns::
	.string "{PLAYER}, ich hätte so gern mit\n"
	.string "dir zusammengearbeitet…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Intro_hns::
	.string "Äh, ich bin {STR_VAR_3} und\n"
	.string "{STR_VAR_1}s Lehrling Nr. {STR_VAR_2}.\p"
	.string "Schnüff…\p"
	.string "Tut mir leid!\n"
	.string "Die Nervosität bringt mich zum\l"
	.string "Weinen…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Mon1_hns::
	.string "{STR_VAR_3} hat mir geraten, also\n"
	.string "habe ich ein {STR_VAR_2} mit\l"
	.string "{STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Mon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}.\p"
	.string "Schnüff…\n"
	.string "Bitte, bitte bilde ein Team mit mir!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Accept_hns::
	.string "Echt? Du machst das?\n"
	.string "Super! Toll! Jaaa!\p"
	.string "Oh… Entschuldigung…\n"
	.string "Ich bin so glücklich, dass ich weine…\p"
	.string "Ich melde uns gleich an.\n"
	.string "Bitte lauf nicht weg!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Reject_hns::
	.string "Oh, aber…\n"
	.string "Schluchz… Wääääh!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Intro_hns::
	.string "Hallo! Ich bin {STR_VAR_3}!\n"
	.string "Lehrling Nr. {STR_VAR_2} von {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Mon1_hns::
	.string "{STR_VAR_3} empfahl mein Team.\n"
	.string "Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Mon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1},\n"
	.string "das hab ich! Cool, oder?\p"
	.string "Also los!\n"
	.string "Lass uns ein Team bilden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Accept_hns::
	.string "Ja! Super!\n"
	.string "Ich geh mich anmelden, okay?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Reject_hns::
	.string "Aww, warum nicht?\n"
	.string "Ich wollte mit dir zusammen, {PLAYER}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Intro_hns::
	.string "Ich bin {STR_VAR_3}, Lehrling Nr.\n"
	.string "{STR_VAR_2} des berühmten {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Mon1_hns::
	.string "Ich hab {STR_VAR_3} um Rat gefragt.\n"
	.string "Ein {STR_VAR_1}-nutzendes {STR_VAR_2}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Mon2Ask_hns::
	.string "und ein {STR_VAR_2} mit {STR_VAR_1},\n"
	.string "das ist mein Duo.\p"
	.string "Bitte, möchtest du mit mir ein\n"
	.string "Team bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Accept_hns::
	.string "Danke!\n"
	.string "Ich melde uns sofort an!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Reject_hns::
	.string "{PLAYER}, ich hatte gehofft, mit\n"
	.string "dir ein Team zu bilden…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Intro_hns::
	.string "Ich bin aufrichtig froh, dass du\n"
	.string "dir Zeit nimmst, mit mir zu reden.\p"
	.string "Ich bin {STR_VAR_3}.\n"
	.string "Lehrling Nr. {STR_VAR_2} von {STR_VAR_1}…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Mon1_hns::
	.string "{STR_VAR_3} gab mir Ratschläge.\n"
	.string "Ich bin sehr dankbar dafür.\p"
	.string "Ich habe ein {STR_VAR_2}\n"
	.string "mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Mon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}.\n"
	.string "Ich weiß, das ist viel verlangt…\p"
	.string "Du wirst wohl nicht wollen, aber…\n"
	.string "Darf ich dein Partner sein?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Accept_hns::
	.string "Wirklich? Ich kann's nicht glauben!\n"
	.string "Ich werde dich nicht enttäuschen!\p"
	.string "Wenn es wirklich okay ist, melde\n"
	.string "ich uns sofort an!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Reject_hns::
	.string "Oh… Ich dachte mir schon, dass\n"
	.string "ich nicht gut genug bin…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Intro_hns::
	.string "Hallo, ich bin {STR_VAR_3}.\n"
	.string "Lehrling Nr. {STR_VAR_2} von {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Mon1_hns::
	.string "{STR_VAR_3} meinte, dieses Team\n"
	.string "wäre gut:\l"
	.string "ein {STR_VAR_1}-nutzendes {STR_VAR_2}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Mon2Ask_hns::
	.string "und ein {STR_VAR_2} das {STR_VAR_1}\n"
	.string "beherrscht.\p"
	.string "Nicht schlecht, oder?\n"
	.string "Willst du mit mir ein Team bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Accept_hns::
	.string "Okay, freut mich!\n"
	.string "Ich hoffe, du enttäuschst mich nicht!\l"
	.string "Ich melde uns jetzt an.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Reject_hns::
	.string "Hä? Warum lehnst du ab?\n"
	.string "Du kennst dich nicht aus!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Intro_hns::
	.string "Ich bin {STR_VAR_3} und TRIATHLET.\n"
	.string "Jeden Tag jogge, trainiere und rappe\l"
	.string "ich.\p"
	.string "Ich bin auch {STR_VAR_1}s\n"
	.string "Lehrling Nr. {STR_VAR_2}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Mon1_hns::
	.string "Das empfahl {STR_VAR_3}.\n"
	.string "Ein {STR_VAR_1}-nutzendes {STR_VAR_2}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Mon2Ask_hns::
	.string "und ein {STR_VAR_1}-nutzendes\n"
	.string "{STR_VAR_2}.\p"
	.string "Ich hab sie trotz meines vollen\n"
	.string "Terminkalenders trainiert.\p"
	.string "Lass uns ein Team bilden\n"
	.string "und es versuchen!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Accept_hns::
	.string "Danke, das ist der Geist!\n"
	.string "Warte kurz, ich geh mich anmelden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Reject_hns::
	.string "Ich hab mir extra Zeit genommen!\n"
	.string "Das ist nicht fair!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Intro_hns::
	.string "Hallo! Wie geht's?\p"
	.string "Ich bin {STR_VAR_3}, {STR_VAR_1}s\n"
	.string "Lehrling Nr. {STR_VAR_2}. Freut mich!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Mon1_hns::
	.string "Hör, hör! Du musst von den POKÉMON\n"
	.string "hören, die {STR_VAR_3} empfahl.\l"
	.string "Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Mon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}.\n"
	.string "Natürlich hab ich sie super trainiert!\p"
	.string "Also, wollen wir ein Team bilden?\n"
	.string "Das wird eine tolle Kombi!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Accept_hns::
	.string "Juhu, das wird Spaß machen!\n"
	.string "Ich geh mich anmelden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Reject_hns::
	.string "Oh, das ist gemein!\n"
	.string "Ich bin empfohlen, weißt du.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Intro_hns::
	.string "Gestatten Sie mir, mich vorzustellen.\n"
	.string "Ich bin {STR_VAR_3}.\p"
	.string "Ich diene als {STR_VAR_1}s\n"
	.string "Lehrling Nr. {STR_VAR_2}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Mon1_hns::
	.string "Ich bat {STR_VAR_3} um weise Ratschläge\n"
	.string "und trainierte ein {STR_VAR_2} mit\l"
	.string "{STR_VAR_1}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Mon2Ask_hns::
	.string "und ein {STR_VAR_2} mit {STR_VAR_1}.\p"
	.string "Bitte stimme zu, mit mir\n"
	.string "ein Team zu bilden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Accept_hns::
	.string "Oh… Ich bin entzückt!\n"
	.string "Ich werde mein Bestes geben!\p"
	.string "Ich melde uns natürlich an!\n"
	.string "Bitte warte!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Reject_hns::
	.string "Ich hatte gehofft, mit dir\n"
	.string "zusammenzukommen, {PLAYER}…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Intro_hns::
	.string "Iiih! Du hast mich angesprochen!\n"
	.string "Ich… ich bin überglücklich!\p"
	.string "Ich bin {STR_VAR_3}! {STR_VAR_1}s\n"
	.string "Lehrling Nr. {STR_VAR_2}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Mon1_hns::
	.string "Auf {STR_VAR_3}s Rat hin trainierte\n"
	.string "ich ein {STR_VAR_1}-nutzendes {STR_VAR_2}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Mon2Ask_hns::
	.string "und ein {STR_VAR_1}-nutzendes\n"
	.string "{STR_VAR_2}.\p"
	.string "Bitte, erfülle mir meinen Wunsch!\n"
	.string "Ich will dein Teampartner sein!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Accept_hns::
	.string "Iiih! Ich… ich bin ganz schwindelig!\n"
	.string "Vielen vielen Dank!\l"
	.string "Ich melde uns sofort an!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Reject_hns::
	.string "Wääh! Hast du kein Mitleid?\n"
	.string "Aber das macht dich cooler…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Intro_hns::
	.string "Yeehaw! Ich bin {STR_VAR_1}s\n"
	.string "Lehrling Nr. {STR_VAR_2}!\p"
	.string "{STR_VAR_3} ist mein Name, hallo, hallo!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Mon1_hns::
	.string "Mein Mentor {STR_VAR_3} empfahl\n"
	.string "ein {STR_VAR_1}-beherrschendes {STR_VAR_2}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Mon2Ask_hns::
	.string "und ein {STR_VAR_1}-beherrschendes\n"
	.string "{STR_VAR_2}.\p"
	.string "Gut, oder?\n"
	.string "Du wirst mit mir ein Team bilden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Accept_hns::
	.string "Okay, ausgezeichnet!\n"
	.string "Ich erledige die Anmeldung schnell!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Reject_hns::
	.string "Gwaaah!\n"
	.string "Du bist ein harter Brocken, {PLAYER}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Intro_hns::
	.string "Hey! Großer Alarm! Heute ist der\n"
	.string "letzte Tag des DUELLTURMs!\p"
	.string "… … … … … …\n"
	.string "War nur ein Witz!\p"
	.string "Die Leute nennen mich {STR_VAR_3}!\n"
	.string "Ich bin {STR_VAR_1}s 1000. Lehrling!\l"
	.string "Eigentlich Lehrling Nr. {STR_VAR_2}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Mon1_hns::
	.string "{STR_VAR_3} gab mir Ratschläge.\n"
	.string "{STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Mon2Ask_hns::
	.string "{STR_VAR_2} mit {STR_VAR_1}.\n"
	.string "Davon hab ich zehn Stück!\l"
	.string "Eigentlich nur eines von jedem!\p"
	.string "Was meinst du?\n"
	.string "Wollen wir Teamkämpfe versuchen?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Accept_hns::
	.string "Juhu!\n"
	.string "Ich geb dir ein POKÉMON als Dank!\p"
	.string "War ein Witz! Aber ich geh\n"
	.string "wirklich die Anmeldung erledigen!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Reject_hns::
	.string "Das ist so kalt! Dafür werde ich\n"
	.string "den DUELLTURM zerstören!\p"
	.string "Natürlich nicht!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Intro_hns::
	.string "Hey, ich rocke hier!\n"
	.string "POKÉMON, die kontrolliere ich!\p"
	.string "Ich bin {STR_VAR_3}, der rappende SEEMANN.\n"
	.string "Verwechsel mich nicht mit einem Heini!\p"
	.string "Ich bin {STR_VAR_1}s Lehrling Nr.\n"
	.string "{STR_VAR_2}.\l"
	.string "Mich sollte man nicht unterschätzen!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Mon1_hns::
	.string "Mit {STR_VAR_3}s Rat stellte ich\n"
	.string "stolz mein Team zusammen!\l"
	.string "Ein {STR_VAR_1}-nutzendes {STR_VAR_2}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Mon2Ask_hns::
	.string "und ein {STR_VAR_1}-nutzendes\n"
	.string "{STR_VAR_2}!\p"
	.string "Unser Treffen sollten wir feiern\n"
	.string "mit einem Teamsieg, dem wahren!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Accept_hns::
	.string "Hey, hey, ich mag deinen Stil!\n"
	.string "Ich geh uns jetzt anmelden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Reject_hns::
	.string "Oh hey, {PLAYER}, das ist kalt!\n"
	.string "Wenn ich das mal sagen darf!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Intro_hns::
	.string "Jippi-jei!\n"
	.string "Lauf nicht weg! Ich hab nur Spaß!\p"
	.string "Howdy! Ich bin {STR_VAR_3}!\n"
	.string "Lehrling Nr. {STR_VAR_2} von {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Mon1_hns::
	.string "{STR_VAR_3} sagte mir was zu tun.\n"
	.string "Also ein {STR_VAR_1}-nutzendes {STR_VAR_2}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Mon2Ask_hns::
	.string "und ein {STR_VAR_1}-nutzendes\n"
	.string "{STR_VAR_2}, so wählte ich.\p"
	.string "Also, was sagst du?\n"
	.string "Komm schon, mach mich glücklich!\p"
	.string "Ich bitte dich!\n"
	.string "Lass mich mitmachen, lass mich nicht\l"
	.string "im Stich!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Accept_hns::
	.string "Yeahah! Das Glück ist mit mir!\n"
	.string "Das macht mich so happy!\p"
	.string "Bevor wir kämpfen,\n"
	.string "melde ich uns gleich an!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Reject_hns::
	.string "Du lehnst mich ab?\n"
	.string "{PLAYER}, das macht mich traurig!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Intro_hns::
	.string "Hust!\p"
	.string "Oh, sorry, ich bin erkältet.\n"
	.string "Meine POKÉMON sind aber fit.\p"
	.string "Ich bin {STR_VAR_3}, {STR_VAR_1}s\n"
	.string "Lehrling Nr. {STR_VAR_2}. Hust!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Mon1_hns::
	.string "Ich hab mir {STR_VAR_3}s Rat zu Herzen\n"
	.string "genommen und trainierte\l"
	.string "ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Mon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}.\p"
	.string "Ich trainierte sie jeden Tag,\n"
	.string "sogar bei Wind und Regen.\p"
	.string "Deshalb hab ich diese Erkältung,\n"
	.string "glaube ich.\p"
	.string "So bin ich nun mal.\n"
	.string "Willst du mein Teampartner sein?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Accept_hns::
	.string "Danke, das weiß ich zu schätzen!\n"
	.string "Hust, hust!\l"
	.string "Warte kurz, ich geh mich anmelden.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Reject_hns::
	.string "Oh, nicht?\n"
	.string "{PLAYER}, ich glaube, wir würden\l"
	.string "gut zusammenpassen.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Intro_hns::
	.string "Oh, hallo!\n"
	.string "Das ist aufregend.\p"
	.string "Ich bin {STR_VAR_3}.\n"
	.string "Lehrling Nr. {STR_VAR_2} von {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Mon1_hns::
	.string "{STR_VAR_3} meinte, dieses Team\n"
	.string "wäre gut:\l"
	.string "ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Mon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}.\p"
	.string "Ich schäme mich ein bisschen, aber\n"
	.string "darf ich mitmachen?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Accept_hns::
	.string "Oh, vielen Dank!\n"
	.string "Ich bin verlegen, aber ich geb\l"
	.string "mein Bestes!\p"
	.string "Ich erledige die Anmeldung.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Reject_hns::
	.string "Oh, bitte sag nicht nein!\n"
	.string "Ich schäme mich schon genug…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Intro_hns::
	.string "Ich bin {STR_VAR_3}, und das stimmt.\n"
	.string "Lehrling Nr. {STR_VAR_2} von {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Mon1_hns::
	.string "{STR_VAR_3} empfahl mein Team.\p"
	.string "Da der Rat aufrichtig klang,\n"
	.string "brachte ich mein {STR_VAR_1}-nutzendes\l"
	.string "{STR_VAR_2} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Mon2Ask_hns::
	.string "mein {STR_VAR_1}-nutzendes {STR_VAR_2}.\p"
	.string "Wenn möglich, würde ich dich gern\n"
	.string "als meinen Teampartner akzeptieren.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Accept_hns::
	.string "Du akzeptierst mich wirklich?\n"
	.string "Sonst wäre es schrecklich gewesen.\p"
	.string "Da du eingewilligt hast, ist es gut.\n"
	.string "Ich werde uns beide anmelden.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Reject_hns::
	.string "Hm? Warum würdest du ablehnen?\n"
	.string "Ist das ein Witz?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassIntro_hns::
	.string "Ich bin {STR_VAR_1} und ein MÄDCHEN!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassMon1_hns::
	.string "Ich habe ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} einsetzt, und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassMon2Ask_hns::
	.string "{STR_VAR_2}, das {STR_VAR_1} einsetzt.\n"
	.string "Das hab ich dabei.\p"
	.string "Willst du mein Partner sein?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassAccept_hns::
	.string "Danke!\n"
	.string "Ich geh uns anmelden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassReject_hns::
	.string "Du willst nicht mein Partner sein?\n"
	.string "Das wirst du noch bereuen!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterIntro_hns::
	.string "Hallo!\p"
	.string "Ich bin KNIRPS {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterMon1_hns::
	.string "Willst du wissen, was ich habe?\n"
	.string "Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}!\p"
	.string "Du wirst mein Teampartner sein,\n"
	.string "oder?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterAccept_hns::
	.string "Juhuu! Ich geh mich anmelden, okay?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterReject_hns::
	.string "Aww! Mit meinen POKÉMON wären\n"
	.string "wir unaufhaltbar gewesen!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerIntro_hns::
	.string "Juhu! Ich bin WANDERER {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerMon1_hns::
	.string "Weißt du, was ich dabei habe?\n"
	.string "Mein {STR_VAR_1}-nutzendes {STR_VAR_2} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerMon2Ask_hns::
	.string "mein {STR_VAR_1}-nutzendes {STR_VAR_2}!\p"
	.string "Klingt gut, oder?\n"
	.string "Willst du ein Team bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerAccept_hns::
	.string "Juhu!\n"
	.string "Dann geh ich mich anmelden.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerReject_hns::
	.string "Ich hätte gern mit dir\n"
	.string "an meiner Seite gekämpft.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyIntro_hns::
	.string "Hallo!\n"
	.string "Ich bin {STR_VAR_1}, eine SCHÖNHEIT!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyMon1_hns::
	.string "Weißt du, was ich trainiere?\n"
	.string "Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}!\p"
	.string "Was denkst du?\n"
	.string "Wollen wir zusammen ein Team bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyAccept_hns::
	.string "Wunderbar!\n"
	.string "Ich erledige die Anmeldung!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyReject_hns::
	.string "Wie enttäuschend!\p"
	.string "Wir zwei zusammen wir wären\n"
	.string "die Besten gewesen!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanIntro_hns::
	.string "Yo!\p"
	.string "Weißt du, wer ich bin?\n"
	.string "Ich bin ANGLER {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanMon1_hns::
	.string "Ich habe ein\n"
	.string "{STR_VAR_1}-nutzendes {STR_VAR_2} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanMon2Ask_hns::
	.string "ein {STR_VAR_1}-nutzendes {STR_VAR_2}.\p"
	.string "Also, wie wär's?\n"
	.string "Willst du an meiner Seite kämpfen?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanAccept_hns::
	.string "Gut, gut!\n"
	.string "Überlass das mir!\p"
	.string "Ich geh uns jetzt anmelden.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanReject_hns::
	.string "Wir hätten so gut zusammengepasst…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyIntro_hns::
	.string "Freut mich, dich kennenzulernen.\n"
	.string "Ich bin {STR_VAR_1}, eine DAME.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyMon1_hns::
	.string "Ich reise mit einem Team aus\n"
	.string "einem {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyMon2Ask_hns::
	.string "einem {STR_VAR_2} mit {STR_VAR_1}.\p"
	.string "Ich hoffe, du bist einverstanden.\n"
	.string "Denn ich möchte dich als Partner.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyAccept_hns::
	.string "Ich danke dir aufrichtig.\n"
	.string "Ich kümmere mich um die Anmeldung.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyReject_hns::
	.string "Ich bin sicher, dass du es bereuen\n"
	.string "wirst, mich nicht gewählt zu haben.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFIntro_hns::
	.string "Ich bin TRIATHLETIN {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFMon1_hns::
	.string "Was ich habe…\n"
	.string "Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}!\n"
	.string "Das ist mein Duo!\p"
	.string "Bitte?\n"
	.string "Willst du ein Team mit mir bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFAccept_hns::
	.string "Oh, danke!\n"
	.string "Ich geh mich am Schalter anmelden.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFReject_hns::
	.string "Wir zwei zusammen wären bestimmt\n"
	.string "stark gewesen!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherIntro_hns::
	.string "Hiya! Ich bin KÄFERFÄNGER {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherMon1_hns::
	.string "Schau, was ich habe!\n"
	.string "Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}!\p"
	.string "Also, hör mal!\n"
	.string "Willst du ein Team bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherAccept_hns::
	.string "Verstanden!\p"
	.string "Ich geh die Anmeldung am\n"
	.string "Schalter erledigen.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherReject_hns::
	.string "Aww, meine POKÉMON sind klasse.\n"
	.string "Ich hoffe, du bereust das nicht!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMIntro_hns::
	.string "Guten Tag!\n"
	.string "Ich bin SCHÜLER {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMMon1_hns::
	.string "Was ich trainiert habe, ist ein\n"
	.string "{STR_VAR_2}, das {STR_VAR_1} einsetzt,$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMMon2Ask_hns::
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "einsetzt.\p"
	.string "Nicht schlecht, oder?\n"
	.string "Möchtest du ein Team bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMAccept_hns::
	.string "Vielen Dank!\n"
	.string "Ich erledige die Anmeldung.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMReject_hns::
	.string "Schade…\p"
	.string "Ich hätte gern von dir als Partner\n"
	.string "gelernt…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyIntro_hns::
	.string "Yo! Lass mich dir sagen, wer ich bin!\n"
	.string "Ich bin REICHSSOHN {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyMon1_hns::
	.string "Rate mal, was ich habe!\n"
	.string "Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}!\p"
	.string "Ich biete dir die Chance, mit mir\n"
	.string "in einem Team zu sein.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyAccept_hns::
	.string "Kluge Entscheidung!\p"
	.string "Ich erledige die Anmeldung\n"
	.string "schnell!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyReject_hns::
	.string "Ausgerechnet mich abweisen?\n"
	.string "Das wirst du sicher bereuen!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltIntro_hns::
	.string "Hiyah! Ich bin KAMPFSPORTLER {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltMon1_hns::
	.string "Als Begleiter habe ich\n"
	.string "ein {STR_VAR_2}, das {STR_VAR_1} einsetzt,$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltMon2Ask_hns::
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "einsetzt.\p"
	.string "Bitte erfülle mir meinen Wunsch!\n"
	.string "Sei mein Teampartner!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltAccept_hns::
	.string "Hiyah! Ich melde uns sofort an!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltReject_hns::
	.string "Ich sehe… Ich hoffe auf eine\n"
	.string "Gelegenheit beim nächsten Mal…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFIntro_hns::
	.string "Hallo!\n"
	.string "Ich bin {STR_VAR_1}, ein SCHWIMMER!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFMon1_hns::
	.string "Ich sag dir, was ich habe.\n"
	.string "Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}!\n"
	.string "Darf ich bitte in deinem Team sein?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFAccept_hns::
	.string "Danke!\n"
	.string "Ich melde uns jetzt an!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFReject_hns::
	.string "Wären wir Partner geworden, wären\n"
	.string "wir so stark gewesen!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacIntro_hns::
	.string "Grüße…\n"
	.string "Ich bin HEXE {STR_VAR_1}…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacMon1_hns::
	.string "Ich habe ein {STR_VAR_1}-nutzendes\n"
	.string "{STR_VAR_2} sowie ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacMon2Ask_hns::
	.string "{STR_VAR_1}-nutzendes {STR_VAR_2}…\p"
	.string "Ich flehe dich an…\n"
	.string "Bilde ein Team mit mir…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacAccept_hns::
	.string "Ich danke dir…\n"
	.string "Ich melde uns an…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacReject_hns::
	.string "Ich wollte so gern mit dir…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMIntro_hns::
	.string "Wie geht's? Ich bin {STR_VAR_1},\n"
	.string "ein POKÉMON-ZÜCHTER!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMMon1_hns::
	.string "Ich ziehe gute POKÉMON auf!\n"
	.string "Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}!\p"
	.string "Was hältst du davon?\n"
	.string "Willst du ein Team mit mir bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMAccept_hns::
	.string "Vielen Dank!\p"
	.string "Ich kümmere mich um die\n"
	.string "Anmeldung, warte hier!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMReject_hns::
	.string "Ich hätte so gern dein Partner\n"
	.string "sein wollen…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFIntro_hns::
	.string "Na, hallo!\n"
	.string "Ich bin TRIATHLETIN {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFMon1_hns::
	.string "Willst du wissen, womit ich laufe?\n"
	.string "Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}!\p"
	.string "Na?\n"
	.string "Willst du mit mir ein Team sein?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFAccept_hns::
	.string "Toll!\p"
	.string "Ich erledige die Anmeldung\n"
	.string "schnell!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFReject_hns::
	.string "Du und ich, wir wären Spitze gewesen.\n"
	.string "Schade…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMIntro_hns::
	.string "Hey! Ich bin {STR_VAR_1}!\n"
	.string "Ich bin TRIATHLET!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMMon1_hns::
	.string "Ich laufe mit meinem starken Team:\n"
	.string "ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}!\p"
	.string "Nicht schlecht, oder?\n"
	.string "Wir sollten ein Team sein!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMAccept_hns::
	.string "Alright!\n"
	.string "Ich melde uns blitzschnell an!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMReject_hns::
	.string "Ich wollte so gern als dein\n"
	.string "Teampartner kämpfen…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlIntro_hns::
	.string "Ich bin KAMPFKÜNSTLERIN {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlMon1_hns::
	.string "Ich habe ein\n"
	.string "{STR_VAR_1}-nutzendes {STR_VAR_2} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlMon2Ask_hns::
	.string "ein {STR_VAR_1}-nutzendes {STR_VAR_2}!\p"
	.string "Gefällt dir die Kombi?\n"
	.string "Wie wär's, wenn wir uns zusammentun?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlAccept_hns::
	.string "Oh, danke!\p"
	.string "Ich erledige die Anmeldung\n"
	.string "sofort!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlReject_hns::
	.string "Mit dir dachte ich, könnten wir\n"
	.string "das ultimative Team bilden…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMIntro_hns::
	.string "Ich bin TRIATHLET {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMMon1_hns::
	.string "Ich fahre mit einem {STR_VAR_2},\n"
	.string "das {STR_VAR_1} beherrscht,$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMMon2Ask_hns::
	.string "und ein {STR_VAR_2} mit {STR_VAR_1}!\p"
	.string "Wir könnten ein Team sein.\n"
	.string "Wäre das nicht toll?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMAccept_hns::
	.string "Danke!\p"
	.string "Ich melde uns sofort an!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMReject_hns::
	.string "Aww, schade. Wir wären das stärkste\n"
	.string "Team gewesen!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMIntro_hns::
	.string "Ich? Ich bin SCHWIMMER {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMMon1_hns::
	.string "Was hab ich dabei?\n"
	.string "Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}!\p"
	.string "Hey? Du machst mit mir ein Team, oder?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMAccept_hns::
	.string "Okay!\p"
	.string "Ich geh mich anmelden!\n"
	.string "Lass uns klasse sein zusammen!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMReject_hns::
	.string "Meine POKÉMON sind echt stark…\n"
	.string "Schade, dass du kein Team willst.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristIntro_hns::
	.string "Yay-hey!\n"
	.string "Nenn mich GITARRIST {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristMon1_hns::
	.string "Schau mein Gefolge an!\n"
	.string "Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}!\p"
	.string "Yay-hey! Ziemlich wild, oder?\n"
	.string "Wir müssen ein Duett im Team spielen!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristAccept_hns::
	.string "Yay-hey! Richtig so!\n"
	.string "Ich erledige die Anmeldung jetzt!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristReject_hns::
	.string "Meine POKÉMON rocken!\n"
	.string "Das wirst du bereuen!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanIntro_hns::
	.string "Erfreut, Sie kennenzulernen.\n"
	.string "Ich bin {STR_VAR_1}, ein GENTLEMAN.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanMon1_hns::
	.string "Mich begleiten mein treues\n"
	.string "{STR_VAR_1}-nutzendes {STR_VAR_2} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanMon2Ask_hns::
	.string "ein {STR_VAR_1}-nutzendes {STR_VAR_2}.\p"
	.string "Darf ich Sie bitten, mir als\n"
	.string "Teampartner beizutreten?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanAccept_hns::
	.string "Ah, ich danke Ihnen für Ihr Vertrauen.\n"
	.string "Ich kümmere mich um die Anmeldung.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanReject_hns::
	.string "Das ist sehr bedauerlich…\p"
	.string "Ich freue mich auf die nächste\n"
	.string "Gelegenheit…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMIntro_hns::
	.string "Hallo, ich bin {STR_VAR_1},\n"
	.string "ein POKÉFAN.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMMon1_hns::
	.string "Ich habe gerade ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kennt, und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}.\p"
	.string "Gefällt dir das?\n"
	.string "Warum wirst du nicht mein Partner?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMAccept_hns::
	.string "Danke!\n"
	.string "Ich kümmere mich um die Anmeldung!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMReject_hns::
	.string "Meine POKÉMON sind erstklassig…\n"
	.string "Schade, dass du das nicht schätzt.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMIntro_hns::
	.string "Hm!\n"
	.string "Ich bin {STR_VAR_1}, und ein EXPERTE bin ich!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMMon1_hns::
	.string "Die POKÉMON, die ich gestählt habe,\n"
	.string "sind ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}!\p"
	.string "Was sagst du zu einem Team mit mir?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMAccept_hns::
	.string "Hm! Ich melde uns sofort an!\l"
	.string "Geben wir beide unser Bestes!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMReject_hns::
	.string "Ich hoffe, deine Wahl ist\n"
	.string "tatsächlich die richtige…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFIntro_hns::
	.string "Hallo, hallo.\n"
	.string "Ich bin {STR_VAR_1}, eine EXPERTIN.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFMon1_hns::
	.string "Ich habe meine POKÉMON gründlich\n"
	.string "trainiert. Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}\n"
	.string "die habe ich.\p"
	.string "Möchtest du nicht mit mir\n"
	.string "ein Team bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFAccept_hns::
	.string "Gut, gut.\n"
	.string "Ich erledige die Anmeldung\l"
	.string "sofort.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFReject_hns::
	.string "Vielleicht können wir beim\n"
	.string "nächsten Treffen ein Team bilden.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerIntro_hns::
	.string "Ich bin DRACHENBÄNDIGER {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerMon1_hns::
	.string "Das Team, das ich gestählt habe,\n"
	.string "ist ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}!\p"
	.string "Wie wär's?\n"
	.string "Willst du mein Partner sein?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerAccept_hns::
	.string "Okay, ich geb alles!\n"
	.string "Ich geh mich jetzt anmelden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerReject_hns::
	.string "Viele stärkere Partner wirst du\n"
	.string "nicht finden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperIntro_hns::
	.string "Ich bin VOGELTRAINER {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperMon1_hns::
	.string "Welche POKÉMON habe ich?\n"
	.string "Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}.\p"
	.string "Denkst du nicht, wir würden\n"
	.string "ein gutes Team abgeben?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperAccept_hns::
	.string "Super, danke!\n"
	.string "Ich kümmere mich um die Anmeldung!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperReject_hns::
	.string "Meine POKÉMON und ich sind stark.\n"
	.string "Wie enttäuschend.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyIntro_hns::
	.string "Ich bin NINJABOY {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyMon1_hns::
	.string "Mein POKÉMON-Team besteht aus\n"
	.string "einem {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyMon2Ask_hns::
	.string "einem {STR_VAR_2} mit {STR_VAR_1}!\p"
	.string "Lass uns zusammen ein Team bilden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyAccept_hns::
	.string "Juhu! Ich geh mich anmelden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyReject_hns::
	.string "Du wirst es bereuen, meine starken\n"
	.string "POKÉMON nicht auf deiner Seite zu haben!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyIntro_hns::
	.string "Hallo! Ich bin SCHIRMFRAU {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyMon1_hns::
	.string "Mich begleiten mein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} einsetzt, und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyMon2Ask_hns::
	.string "ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "einsetzt.\p"
	.string "Sind die nicht toll?\n"
	.string "Magst du mit uns ein Team bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyAccept_hns::
	.string "Danke vielmals!\p"
	.string "Ich geh mich am Schalter anmelden.\n"
	.string "Lass uns einander nicht enttäuschen!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyReject_hns::
	.string "Meine POKÉMON sind enorm stark.\n"
	.string "Wie enttäuschend…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacIntro_hns::
	.string "Hallo.\n"
	.string "Ich bin {STR_VAR_1}, ein KÄFERNARR!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacMon1_hns::
	.string "Ich habe meine POKÉMON gefunden.\n"
	.string "Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}\n"
	.string "die habe ich gefunden.\p"
	.string "Hätte ich dich für ein\n"
	.string "Team begeistern können?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacAccept_hns::
	.string "Okay! Verstanden!\p"
	.string "Ich bin gleich mit der Anmeldung\n"
	.string "fertig!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacReject_hns::
	.string "Mit den POKÉMON, die ich gefunden\n"
	.string "habe, hätten wir nicht verloren…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorIntro_hns::
	.string "Ahoi!\n"
	.string "Ich bin SEEMANN {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorMon1_hns::
	.string "Lass mich meinen Stolz zeigen!\n"
	.string "Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}!\p"
	.string "Du wirst mich doch nicht ablehnen.\n"
	.string "Wir bilden ein Team, oder?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorAccept_hns::
	.string "Nichts anderes hätte ich erwartet!\n"
	.string "Ich geh uns jetzt anmelden.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorReject_hns::
	.string "Wir hätten die Gegner überrollt!\n"
	.string "Schade!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorIntro_hns::
	.string "Hallo, ich bin {STR_VAR_1}.\n"
	.string "Ich bin SAMMLER.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorMon1_hns::
	.string "Die Juwelen meiner Sammlung sind\n"
	.string "mein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}!\p"
	.string "Toll, oder?\n"
	.string "Wir sollten zusammen ein Team sein.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorAccept_hns::
	.string "Oh, ja!\p"
	.string "Keine Zeit verlieren.\n"
	.string "Ich melde uns beide an.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorReject_hns::
	.string "Na, das ist ärgerlich.\n"
	.string "Du schätzt meine POKÉMON nicht.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMIntro_hns::
	.string "Howdy, ich bin {STR_VAR_1}.\n"
	.string "Ich bin POKÉMON-RANGER.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMMon1_hns::
	.string "Mich begleiten ein\n"
	.string "{STR_VAR_1}-nutzendes {STR_VAR_2} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}!\p"
	.string "Denkst du nicht, wir würden ein\n"
	.string "beeindruckendes Team abgeben?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMAccept_hns::
	.string "Super!\n"
	.string "Ich erledige die Anmeldung jetzt.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMReject_hns::
	.string "Wähle beim nächsten Mal meine\n"
	.string "POKÉMON, okay?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFIntro_hns::
	.string "Ich heiße {STR_VAR_1}.\n"
	.string "Ich bin POKÉMON-RANGERIN!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFMon1_hns::
	.string "Lass mich von meinem Team erzählen.\n"
	.string "Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}!\p"
	.string "Wie wär's, wenn du mit meiner\n"
	.string "Gruppe ein Team bildest?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFAccept_hns::
	.string "Wir geben unser Bestes!\n"
	.string "Ich erledige die Anmeldung schnell!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFReject_hns::
	.string "Ich hoffe, du wählst meine POKÉMON\n"
	.string "beim nächsten Mal.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyIntro_hns::
	.string "Freut mich. Ich bin {STR_VAR_1}.\n"
	.string "Ich bezeichne mich als DUFTDAME.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyMon1_hns::
	.string "Ich reise mit einem {STR_VAR_2},\n"
	.string "das {STR_VAR_1} einsetzt, und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyMon2Ask_hns::
	.string "einem {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "einsetzt.\p"
	.string "Ich hoffe, sie gefallen dir.\n"
	.string "Würdest du mein Partner sein?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyAccept_hns::
	.string "Ich bin geehrt.\n"
	.string "Ich melde uns sofort an.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyReject_hns::
	.string "Es wäre schön, wenn wir beim\n"
	.string "nächsten Treffen ein Team bilden.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacIntro_hns::
	.string "Willst du wissen, wer ich bin?\n"
	.string "Ich bin {STR_VAR_1}, der RUINENNARR!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacMon1_hns::
	.string "Die POKÉMON, die ich dabei habe,\n"
	.string "sind ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}!\p"
	.string "Faszinierend, oder?\n"
	.string "Wie wär's, wenn wir uns zusammentun?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacAccept_hns::
	.string "Eine vernünftige Entscheidung!\n"
	.string "Ich erledige die Anmeldung.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacReject_hns::
	.string "Hmm… Ich denke, meine POKÉMON\n"
	.string "sind stark…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMIntro_hns::
	.string "Ich bin TOPTRAINER {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMMon1_hns::
	.string "Die POKÉMON, die ich gerade habe,\n"
	.string "sind ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}.\n"
	.string "Cool, oder?\p"
	.string "Denkst du nicht, es wäre cool,\n"
	.string "ein Team zu bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMAccept_hns::
	.string "Cool!\n"
	.string "Ich erledige die Anmeldung\l"
	.string "blitzschnell!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMReject_hns::
	.string "Ich dachte, wir würden das\n"
	.string "großartigste Team aller Zeiten sein.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFIntro_hns::
	.string "Ich bin TOPTRAINERIN {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFMon1_hns::
	.string "Das Team, das ich aufgezogen habe,\n"
	.string "hat ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}.\p"
	.string "Klingt das okay?\n"
	.string "Wie wär's, wenn wir Teampartner werden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFAccept_hns::
	.string "Das ist prima!\n"
	.string "Ich sollte die Anmeldung erledigen.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFReject_hns::
	.string "Ich dachte, wir wären ein\n"
	.string "richtig starkes Team…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacIntro_hns::
	.string "Heyo! Ich bin {STR_VAR_1}, der POKÉNARR!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacMon1_hns::
	.string "Was hat so einer wie ich?\n"
	.string "Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1},\n"
	.string "genau das!\p"
	.string "Los geht's!\n"
	.string "Wir werden als Team aufräumen!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacAccept_hns::
	.string "Gute Wahl!\n"
	.string "Ich melde uns beide an!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacReject_hns::
	.string "Meine POKÉMON sind brutal!\n"
	.string "Das ist nicht meine Schuld, wenn\l"
	.string "du das bereust!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerIntro_hns::
	.string "Yo!\n"
	.string "Ich bin FEUERMACHER {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerMon1_hns::
	.string "Weißt du, was mein Training\n"
	.string "hervorgebracht hat?\l"
	.string "Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}!\p"
	.string "Na, was sagst du?\n"
	.string "Willst du ein Team bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerAccept_hns::
	.string "Alright!\n"
	.string "Ich geh die Anmeldung erledigen.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerReject_hns::
	.string "Versprich mir, dass wir beim\n"
	.string "nächsten Treffen ein Team bilden.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperIntro_hns::
	.string "Ich bin {STR_VAR_1} und ein CAMPER!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperMon1_hns::
	.string "Ich habe ein {STR_VAR_1}-nutzendes\n"
	.string "{STR_VAR_2} und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperMon2Ask_hns::
	.string "{STR_VAR_1}-nutzendes {STR_VAR_2}\n"
	.string "aufgezogen.\p"
	.string "Denkst du, es wäre Spaß, ein\n"
	.string "Team zu bilden? Ich schon!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperAccept_hns::
	.string "Yeah! Ab zur Anmeldung!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperReject_hns::
	.string "Beim nächsten Mal, okay?\n"
	.string "Ich will in deinem Team sein.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerIntro_hns::
	.string "Hallo!\n"
	.string "Ich bin {STR_VAR_1}, eine PICKNICKERIN!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerMon1_hns::
	.string "Die POKÉMON, die ich mitnehme,\n"
	.string "sind ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}.\p"
	.string "Hättest du Interesse, mit mir\n"
	.string "ein Team zu bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerAccept_hns::
	.string "Oh, danke!\n"
	.string "Ich erledige die Anmeldung jetzt.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerReject_hns::
	.string "Es wäre nett, wenn ich ein\n"
	.string "andermal mitmachen könnte.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMIntro_hns::
	.string "Ich bin PSYCHO {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMMon1_hns::
	.string "Das Duo, das ich trainiert habe,\n"
	.string "ist ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}.\p"
	.string "Möchtest du mit mir\n"
	.string "ein Team bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMAccept_hns::
	.string "Natürlich!\n"
	.string "Ich kümmere mich um die Anmeldung!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMReject_hns::
	.string "Wenn wir uns wieder treffen, möchte\n"
	.string "ich dann gern mit dir ein Team bilden.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFIntro_hns::
	.string "Ich bin {STR_VAR_1}.\n"
	.string "Ich bin eine PSYCHO.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFMon1_hns::
	.string "Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}\n"
	.string "das sind meine Schüler.\p"
	.string "Reizt dich die Idee, eine\n"
	.string "Teampartnerschaft einzugehen?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFAccept_hns::
	.string "Danke.\n"
	.string "Ich kümmere mich um die Anmeldung.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFReject_hns::
	.string "Ich hoffe, es gibt eine andere\n"
	.string "Gelegenheit für ein Bündnis.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFIntro_hns::
	.string "Ich bin SCHÜLERIN {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFMon1_hns::
	.string "Ein {STR_VAR_1}-nutzendes {STR_VAR_2}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFMon2Ask_hns::
	.string "und ein {STR_VAR_1}-nutzendes\n"
	.string "{STR_VAR_2} sind mein POKÉMON-Duo.\p"
	.string "Darf ich bitte dein Partner\n"
	.string "in einem Team sein?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFAccept_hns::
	.string "Oh, danke!\n"
	.string "Ich melde uns sofort\l"
	.string "am Schalter an!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFReject_hns::
	.string "Bitte? Darf ich beim nächsten\n"
	.string "Mal mitmachen?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFIntro_hns::
	.string "Hallo! Ich bin {STR_VAR_1}!\n"
	.string "Ich bin POKÉMON-ZÜCHTERIN!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFMon1_hns::
	.string "Die POKÉMON, die ich aufgezogen\n"
	.string "habe, sind ein {STR_VAR_1}-nutzendes\l"
	.string "{STR_VAR_2} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFMon2Ask_hns::
	.string "ein {STR_VAR_1}-nutzendes {STR_VAR_2}.\p"
	.string "Klingt interessant?\n"
	.string "Wie wär's dann mit einem Team?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFAccept_hns::
	.string "Alles klar!\n"
	.string "Die Anmeldung überlässt du mir!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFReject_hns::
	.string "Du musst beim nächsten Mal\n"
	.string "mit mir ein Team bilden, okay?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFIntro_hns::
	.string "Ich bin {STR_VAR_1} und sage stolz,\n"
	.string "dass ich ein POKÉFAN bin.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFMon1_hns::
	.string "Die süßen POKÉMON, die ich aufgezogen\n"
	.string "habe, sind ein {STR_VAR_2} mit\l"
	.string "{STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}.\p"
	.string "Sind die nicht zum Knuddeln?\n"
	.string "Wir sollten ein Team bilden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFAccept_hns::
	.string "Danke, Schatz!\n"
	.string "Ich geh mich anmelden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFReject_hns::
	.string "Meine süßen POKÉMON sind die Besten,\n"
	.string "das solltest du wissen. Wie ärgerlich!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFIntro_hns::
	.string "Hallo, ich bin SCHWIMMERIN {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFMon1_hns::
	.string "Ein {STR_VAR_1}-nutzendes {STR_VAR_2}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFMon2Ask_hns::
	.string "und ein {STR_VAR_1}-nutzendes\n"
	.string "{STR_VAR_2} habe ich trainiert.\p"
	.string "Du und ich, lass uns ein Team bilden.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFAccept_hns::
	.string "Das ist cool!\n"
	.string "Ich melde uns beide an.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFReject_hns::
	.string "Wenn wir uns wiedersehen, schulde\n"
	.string "mir ein Team!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMIntro_hns::
	.string "Was geht?\n"
	.string "Ich bin {STR_VAR_1} und TRIATHLET.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMMon1_hns::
	.string "Ich habe ein paar gute POKÉMON.\n"
	.string "Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}!\p"
	.string "Es wäre schön, wenn wir zusammen\n"
	.string "ein Team bilden würden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMAccept_hns::
	.string "Super!\n"
	.string "Warte, während ich mich anmelde!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMReject_hns::
	.string "Beim nächsten Mal lässt du mich\n"
	.string "mitmachen, abgemacht?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFIntro_hns::
	.string "Ich bin TRIATHLETIN {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFMon1_hns::
	.string "Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFMon2Ask_hns::
	.string "ein weiteres {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} beherrscht. Das ist mein Duo.\p"
	.string "Was denkst du?\n"
	.string "Wir wären ein gutes Team, würde ich sagen.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFAccept_hns::
	.string "Diese Antwort mag ich!\n"
	.string "Ich erledige die Anmeldung schnell!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFReject_hns::
	.string "Du gibst mir doch noch eine Chance\n"
	.string "für eine Partnerschaft, oder?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMIntro_hns::
	.string "Hallo! Hi!\n"
	.string "Ich bin {STR_VAR_1}, ein SCHWIMMER!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMMon1_hns::
	.string "Schau, was ich trainiert habe!\n"
	.string "Ein {STR_VAR_2} mit {STR_VAR_1} und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMMon2Ask_hns::
	.string "ein {STR_VAR_2} mit {STR_VAR_1}!\p"
	.string "Toll, oder?\n"
	.string "Ein Team wäre auch toll!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMAccept_hns::
	.string "Vielen Dank!\n"
	.string "Ich erledige die Anmeldung!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMReject_hns::
	.string "Wenn wir uns wiedersehen, musst du\n"
	.string "mit mir ein Team bilden. Deal?$"


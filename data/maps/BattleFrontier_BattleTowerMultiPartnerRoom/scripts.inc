BattleFrontier_BattleTowerMultiPartnerRoom_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattleTowerMultiPartnerRoom_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattleTowerMultiPartnerRoom_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleTowerMultiPartnerRoom_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleTowerMultiPartnerRoom_OnFrame
	.byte 0

BattleFrontier_BattleTowerMultiPartnerRoom_OnResume:
	pyramid_resetparty
	end

BattleFrontier_BattleTowerMultiPartnerRoom_OnTransition:
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ChosePartner
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

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ChosePartner::
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

BattleFrontier_BattleTowerMultiPartnerRoom_OnWarp:
	map_script_2 VAR_TEMP_3, 1, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TurnPlayerNorth
	.2byte 0

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TurnPlayerNorth::
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

BattleFrontier_BattleTowerMultiPartnerRoom_OnFrame:
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterRoom
	map_script_2 VAR_TEMP_3, 1, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ExitRoom
	.2byte 0

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_ExitRoom::
	lockall
	setvar VAR_TEMP_3, 0
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterElevator
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterRoom::
	lockall
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterRoom
	waitmovement 0
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantBlockExit
	waitmovement 0
	copyobjectxytoperm LOCALID_TOWER_PARTNER_ROOM_ATTENDANT
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner, MSGBOX_DEFAULT
	special HealPlayerParty
	setvar VAR_TEMP_1, 1
	releaseall
	end

BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterRoom:
	walk_down
	step_end

BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantBlockExit:
	walk_left
	walk_in_place_faster_down
	step_end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Attendant::
	lock
	faceplayer
	message BattleFrontier_BattleTowerMultiPartnerRoom_Text_QuitLookingForPartner
	waitmessage
	multichoicedefault 20, 8, MULTI_YESNO, 1, FALSE
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_QuitChallenge
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner2, MSGBOX_DEFAULT
	release
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_QuitChallenge::
	frontier_set FRONTIER_DATA_RECORD_DISABLED, TRUE
	goto BattleFrontier_BattleTower_EventScript_WarpToLobbyLost
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_EnterElevator::
	msgbox BattleFrontier_BattleTowerMultiPartnerRoom_Text_ThankYouForChoosingPartner, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	opendoor 10, 1
	waitdooranim
	call BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevator
	closedoor 10, 1
	waitdooranim
	warp MAP_BATTLE_FRONTIER_BATTLE_TOWER_ELEVATOR, 1, 6
	waitstate
	releaseall
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevator::
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevator
	waitmovement 0
	return

@ Unused
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevatorEast:
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevatorEast
	waitmovement 0
	return

@ Unused
BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_MoveToElevatorWest:
	applymovement LOCALID_TOWER_PARTNER_ROOM_ATTENDANT, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator
	applymovement LOCALID_PLAYER, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEneterElevatorWest
	waitmovement 0
	return

BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevator:
	walk_up
	walk_up
	set_invisible
	step_end

@ Functionally unused
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEnterElevatorEast:
	walk_right
	walk_up
	set_invisible
	step_end

@ Functionally unused
BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PlayerEneterElevatorWest:
	walk_left
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleTowerMultiPartnerRoom_Movement_AttendantEnterElevator:
	walk_up
	set_invisible
	step_end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner1::
	lock
	faceplayer
	setvar VAR_TEMP_2, 0
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner::
	goto_if_set FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner
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
	case 1, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner
	case MULTI_B_PRESSED, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner
	tower_dopartnermsg PARTNER_MSGID_ACCEPT
	waitmessage
	waitbuttonpress
	closemessage
	call_if_ne VAR_FACING, DIR_SOUTH, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExit
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExitSouth
	removeobject VAR_LAST_TALKED
	setflag FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_PARTNER_ROOM, 10, 3
	waitstate
	release
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_RejectPartner::
	tower_dopartnermsg PARTNER_MSGID_REJECT
	waitmessage
	waitbuttonpress
	release
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExit::
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExit
	waitmovement 0
	return

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_PartnerExitSouth::
	applymovement VAR_LAST_TALKED, BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExitSouth
	waitmovement 0
	return

BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExit:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

BattleFrontier_BattleTowerMultiPartnerRoom_Movement_PartnerExitSouth:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner2::
	lock
	faceplayer
	setvar VAR_TEMP_2, 1
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner3::
	lock
	faceplayer
	setvar VAR_TEMP_2, 2
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner4::
	lock
	faceplayer
	setvar VAR_TEMP_2, 3
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner5::
	lock
	faceplayer
	setvar VAR_TEMP_2, 4
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner6::
	lock
	faceplayer
	setvar VAR_TEMP_2, 5
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner7::
	lock
	faceplayer
	setvar VAR_TEMP_2, 6
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
	end

BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_Partner8::
	lock
	faceplayer
	setvar VAR_TEMP_2, 7
	goto BattleFrontier_BattleTowerMultiPartnerRoom_EventScript_TalkToPotentialPartner
	end

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner:
	.string "Bitte such dir unter den Trainern hier\n"
	.string "einen Partner aus.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_QuitLookingForPartner:
	.string "{PLAYER}, du hast noch keinen Partner\n"
	.string "gefunden.\p"
	.string "Möchtest du die Suche aufgeben und\n"
	.string "zurück zur Rezeption gehen?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PleaseFindPartner2:
	.string "Dann such dir bitte unter den Trainern\n"
	.string "hier einen Partner aus.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ThankYouForChoosingPartner::
	.string "Vielen Dank!\p"
	.string "Nun werde ich dir den Raum für die\n"
	.string "Multikämpfe zeigen.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Intro::
	.string "Ich bin Schüler Nr. {STR_VAR_2} von {STR_VAR_1}.\n"
	.string "Du kannst mich {STR_VAR_3} nennen!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Mon1::
	.string "{STR_VAR_1} hat mir geraten, ein\n"
	.string "{STR_VAR_3}, das {STR_VAR_2} kann, und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Mon2Ask::
	.string "ein {STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Bitte, lass mich dein Partner sein.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Accept::
	.string "Vielen Dank!\n"
	.string "Ich werde uns sofort registrieren.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice1Reject::
	.string "I really wanted to form a tag team\n"
	.string "with you, {PLAYER}…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Intro::
	.string "Ich bin Schüler Nr. {STR_VAR_2} von {STR_VAR_1}.\n"
	.string "Mein Name ist {STR_VAR_3}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Mon1::
	.string "{STR_VAR_1} hat mich beraten. Ich habe\n"
	.string "ein {STR_VAR_3}, das {STR_VAR_2} kann, und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Mon2Ask::
	.string "ein {STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Bitte, lass uns ein Team bilden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Accept::
	.string "Vielen Dank!\n"
	.string "Ich kümmere mich sofort um die\l"
	.string "Registrierung!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_UnusedApprentice2Reject::
	.string "{PLAYER}, I was hoping that I could\n"
	.string "partner up with you…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Intro::
	.string "Ähm, ich heiße {STR_VAR_3} und ich bin\n"
	.string "Schüler Nr. {STR_VAR_2} von {STR_VAR_1}.\p"
	.string "Schluchz…\p"
	.string "Tut mir Leid! Schnüff… Aber die\n"
	.string "Spannung bringt mich zum Weinen.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Mon1::
	.string "{STR_VAR_3} ist mir mit Rat und Tat zur\n"
	.string "Seite gestanden, daher habe ich\p"
	.string "ein {STR_VAR_2}, das {STR_VAR_1} kann,$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Mon2Ask::
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann.\p"
	.string "Schluchz…\n"
	.string "Bitte, biiiitte, nimm mich als Partner!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Accept::
	.string "Oh, wirklich?!? Echt?!?\n"
	.string "Wahnsinn! Irre! Toll! Juhuuuu!\p"
	.string "Oh… Hihihi… Tut mir Leid…\n"
	.string "Ich bin so glücklich, dass ich weine…\p"
	.string "Ich gehe mich sofort anmelden, bitte\n"
	.string "lauf nicht weg!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Reject::
	.string "Oh, ab-abber… abber…\n"
	.string "Schluchz… Uaaahaaa…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Intro::
	.string "Hallo, du da! Ich bin {STR_VAR_3}!\n"
	.string "Ich bin Schüler Nr. {STR_VAR_2} von {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Mon1::
	.string "{STR_VAR_3} hat mich beraten. Ich habe\n"
	.string "ein {STR_VAR_2}, das {STR_VAR_1} kann,$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Mon2Ask::
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann. Ist das nicht cool?\p"
	.string "Also los!\n"
	.string "Wir beide bilden ein Team!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Accept::
	.string "Super! Klasse!\n"
	.string "Ich registriere mich jetzt!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Reject::
	.string "Oooh, warum denn nicht? Ich wollte\n"
	.string "doch so gerne dein Partner sein.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Intro::
	.string "Ich bin {STR_VAR_3}, Schüler Nr. {STR_VAR_2} des\n"
	.string "berühmten {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Mon1::
	.string "Ich habe mich an den Rat von\n"
	.string "{STR_VAR_3} gehalten.\p"
	.string "Mein {STR_VAR_2} kann {STR_VAR_1}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Mon2Ask::
	.string "und mein {STR_VAR_2} kann\n"
	.string "{STR_VAR_1}. Das ist mein Pärchen.\p"
	.string "Bitte bilde ein Team mit uns.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Accept::
	.string "Danke schön!\n"
	.string "Ich werde mich sofort registrieren.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Reject::
	.string "Ich hatte gehofft, mit dir ein Team\n"
	.string "bilden zu können, {PLAYER}…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Intro::
	.string "Ähm… Ich bin froh, dass du dir die Zeit\n"
	.string "genommen hast, mit mir zu reden.\p"
	.string "Ich heiße {STR_VAR_3}.\n"
	.string "Ich bin Schülerin Nr. {STR_VAR_2} von {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Mon1::
	.string "{STR_VAR_3} hat mir einen Rat gegeben.\n"
	.string "Dafür bin ich sehr dankbar.\p"
	.string "In meinem Team ist ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann, und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Mon2Ask::
	.string "ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann. Ich weiß, ich verlange viel, aber…\p"
	.string "Würdest du ein Team mit mir bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Accept::
	.string "Wirklich? Ich kann es kaum glauben!\n"
	.string "Ich werde dich nicht enttäuschen!\l"
	.string "Ich kann es immer noch nicht glauben…\p"
	.string "Ähm… Wenn es wirklich okay ist,\n"
	.string "dann registriere ich mich jetzt sofort.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Reject::
	.string "Oh…\n"
	.string "Ich glaube, ich war nicht gut genug…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Intro::
	.string "Oh, ich bin {STR_VAR_3}.\n"
	.string "Schülerin Nr. {STR_VAR_2}\p"
	.string "von {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Mon1::
	.string "{STR_VAR_3} hat mir zu folgendem Team\n"
	.string "geraten: ein {STR_VAR_2}, das\l"
	.string "{STR_VAR_1} kann,$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Mon2Ask::
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann.\p"
	.string "Nicht schlecht, was? Sollen wir\n"
	.string "beide ein Team bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Accept::
	.string "Das freut mich jetzt wirklich!\n"
	.string "Ich hoffe nur, du versaust es nicht!\l"
	.string "Ich werde mich jetzt registrieren.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Reject::
	.string "Wie? Du willst mich nicht zum Partner?\n"
	.string "Du unterschätzt mich gewaltig!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Intro::
	.string "Ich bin {STR_VAR_3} und Triathlet.\n"
	.string "Ich bin immer schwer beschäftigt mit\l"
	.string "Joggen, Trainieren und Sprüche klopfen.\p"
	.string "Ich bin außerdem Schüler Nr. {STR_VAR_2}\n"
	.string "von {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Mon1::
	.string "Ich folge dem Rat von {STR_VAR_3}:\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Mon2Ask::
	.string "Und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann.\p"
	.string "Ich habe mich sehr um meine Pokémon\n"
	.string "gekümmert, auch wenn ich beschäftigt\p"
	.string "war. Komm, wir bilden ein Team und\n"
	.string "versuchen unser Bestes!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Accept::
	.string "Das ist der richtige Kampfgeist!\n"
	.string "Warte hier. Ich registriere mich.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Reject::
	.string "Ich habe mir extra frei genommen.\n"
	.string "Und dann enttäuschst du mich. Pah!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Intro::
	.string "Hallo! Wie geht’s dir?\n"
	.string "Ich bin {STR_VAR_3}.\p"
	.string "Schülerin Nr. {STR_VAR_2} von {STR_VAR_1}.\n"
	.string "Nett, dich kennen zu lernen.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Mon1::
	.string "Ich erzähl dir, zu was {STR_VAR_3} mir\n"
	.string "geraten hat: Zu einem {STR_VAR_2}, das\l"
	.string "{STR_VAR_1} kann, und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Mon2Ask::
	.string "einem {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann. Natürlich wurden sie von mir\p"
	.string "sorgfältig aufgezogen! Sollen wir ein\n"
	.string "Team bilden? Wir wären unschlagbar!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Accept::
	.string "Ha, das macht bestimmt Spaß!\n"
	.string "Ich gehe mich jetzt registrieren.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Reject::
	.string "Bah, du bist gemein!\n"
	.string "Ich habe Referenzen, weißt du!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Intro::
	.string "Ich bin {STR_VAR_3}.\n"
	.string "Schön, dich kennen zu lernen.\p"
	.string "Ich bin Schülerin Nr. {STR_VAR_2} von\n"
	.string "{STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Mon1::
	.string "Ich hielt mich an die Lehren von\n"
	.string "{STR_VAR_3} und mein Team ist: Ein\l"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Mon2Ask::
	.string "und ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann.\p"
	.string "Bitte nimm uns als Partner.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Accept::
	.string "Oh… Ich bin entzückt!\n"
	.string "Ich werde mein Bestes geben!\p"
	.string "Ich werde uns jetzt registrieren!\n"
	.string "Warte bitte hier auf mich!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Reject::
	.string "Ich hatte gehofft, an deiner Seite\n"
	.string "kämpfen zu dürfen, {PLAYER}…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Intro::
	.string "Hihihi! Du hast mich angesprochen!\n"
	.string "Ich bin ja sooo glücklich…\p"
	.string "Ich heiße {STR_VAR_3}! Ich bin Schülerin\n"
	.string "Nr. {STR_VAR_2} von {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Mon1::
	.string "Ich folgte dem Rat meines Lehrers! Ich\n"
	.string "habe ein {STR_VAR_2}, das {STR_VAR_1}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Mon2Ask::
	.string "kann, und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann.\p"
	.string "Erfüllst du mir einen Wunsch?\n"
	.string "Bilde mit mir ein Team.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Accept::
	.string "Hihihi… Mir ist richtig schwindelig!\n"
	.string "Vielen, vielen Dank!\l"
	.string "Ich werde mich jetzt registrieren.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Reject::
	.string "Uaaahaa! Hast du denn kein Mitleid?\n"
	.string "Aber irgendwie bist du cool…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Intro::
	.string "Jahaa! Ich bin Schüler Nr. {STR_VAR_2} von\n"
	.string "{STR_VAR_1}!\p"
	.string "Ich heiße {STR_VAR_3}. Hallooo, hallooo!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Mon1::
	.string "Mein Mentor {STR_VAR_3} riet mir zu\n"
	.string "einem {STR_VAR_2}, das {STR_VAR_1}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Mon2Ask::
	.string "kann, und zu einem {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann.\p"
	.string "Gut, nicht wahr? Du wählst mich als\n"
	.string "deinen Partner, ja?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Accept::
	.string "Hervorragend!!! Ich werde mich\n"
	.string "ganz schnell registrieren!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Reject::
	.string "Uuuuuh! Du bist ganz schön\n"
	.string "berechnend, {PLAYER}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Intro::
	.string "Hey! Jetzt geht’s hier richtig rund.\n"
	.string "Heute ist der letzte Tag des\p"
	.string "Duellturms!\n"
	.string "………………\l"
	.string "Haha! War nur ein Witz!\p"
	.string "Man nennt mich {STR_VAR_3} und das\n"
	.string "passt! Ich bin der 1.000ste Schüler von\l"
	.string "{STR_VAR_1}! Nun, ich bin Nr. {STR_VAR_2}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Mon1::
	.string "{STR_VAR_3} hat mir einen Rat gegeben.\n"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann,$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Mon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann…\n"
	.string "Ich habe zehn von jedem!\l"
	.string "Nun, ich habe eines von jedem.\p"
	.string "Nun, wie wär’s?\n"
	.string "Sollen wir zusammen kämpfen?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Accept::
	.string "Juhuu! Ich schenke dir zum\n"
	.string "Dank ein Pokémon!\p"
	.string "War ein Witz! Aber ich werde mich\n"
	.string "jetzt tatsächlich registrieren, okay?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Reject::
	.string "Bah, wie fies! Dafür werde ich den\n"
	.string "Duellturm in Schutt und Asche legen!\p"
	.string "Natürlich nicht! War ein Witz.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Intro::
	.string "Hey, da! Ich bin echt gut drauf.\n"
	.string "Meine Pokémon auch!\p"
	.string "Ich heiße {STR_VAR_3} und bin ein\n"
	.string "Matrose. Ich bin Schüler Nr. {STR_VAR_2}\p"
	.string "von {STR_VAR_1}. Lehn mich nicht\n"
	.string "vorschnell ab!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Mon1::
	.string "Mein Team habe ich nach dem Rat meines\n"
	.string "Lehrers zusammengestellt.\l"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Mon2Ask::
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann!\p"
	.string "Wir beide sollten uns wirklich\n"
	.string "zusammentun! Der Sieg wäre uns sicher.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Accept::
	.string "Hey, hey! Du gefällst mir, du hast Stil!\n"
	.string "Ich gehe jetzt und registriere mich.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Reject::
	.string "Oh, {PLAYER}, das ist gemein und fies!\n"
	.string "Wenn ich mal so ehrlich sein darf…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Intro::
	.string "Juhuu juhuu juhuu!\n"
	.string "Ich mag alles, was Spaß macht!\p"
	.string "Wie geht’s? Ich bin {STR_VAR_3}!\n"
	.string "Schüler Nr. {STR_VAR_2} von {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Mon1::
	.string "{STR_VAR_3} gab mir Anweisungen.\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Mon2Ask::
	.string "kann, und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann.\p"
	.string "Was bleibt da noch zu sagen?\n"
	.string "Los, komm! Mach schon!\p"
	.string "Bitte! Ich flehe dich an!\n"
	.string "Kämpfe zusammen mit mir. Biiitte!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Accept::
	.string "Yeah! Das Glück ist heute auf meiner\n"
	.string "Seite. Ich bin sooo froh!\p"
	.string "Bevor wir anfangen, laufe ich schnell\n"
	.string "und registriere mich.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Reject::
	.string "Du weist mich ab?\n"
	.string "{PLAYER}, du enttäuschst mich sehr.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Intro::
	.string "Hust… Röchel…\p"
	.string "Tut mir Leid, ich bin erkältet.\n"
	.string "Aber meinen Pokémon geht es gut.\p"
	.string "Ich heiße {STR_VAR_3}, Schüler Nr. {STR_VAR_2}\n"
	.string "von {STR_VAR_1}. Hust… Hust…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Mon1::
	.string "Ich habe mir den Rat meines Lehrers zu\n"
	.string "Herzen genommen und ein {STR_VAR_2},\l"
	.string "das {STR_VAR_1} kann, sowie$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Mon2Ask::
	.string "ein {STR_VAR_2}, das {STR_VAR_1} kann,\n"
	.string "in meinem Team.\p"
	.string "Ich trainiere jeden Tag, bei Wind und\n"
	.string "Wetter, mit ihnen.\p"
	.string "Deswegen bin ich wahrscheinlich auch\n"
	.string "erkältet. Glaube ich…\p"
	.string "Nun? Sollen wir beide uns zusammentun\n"
	.string "und Seite an Seite kämpfen?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Accept::
	.string "Danke, das freut mich sehr!\n"
	.string "Hust… Hust…\l"
	.string "Warte, ich registriere mich eben.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Reject::
	.string "Ach, du willst nicht? {PLAYER},\n"
	.string "wir wären ein gutes Team gewesen…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Intro::
	.string "Hallo!\n"
	.string "Das hier ist echt Nerven zerreißend!\p"
	.string "Ich heiße {STR_VAR_3}.\n"
	.string "Ich bin Schüler Nr. {STR_VAR_2} von {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Mon1::
	.string "{STR_VAR_3} riet mir zu diesem Team:\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Mon2Ask::
	.string "kann, und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann.\p"
	.string "Ich bin sehr zufrieden und zu-\n"
	.string "versichtlich. Bilden wir ein Team?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Accept::
	.string "Ja! Toll! Danke! Ich bin schüchtern,\n"
	.string "aber ich werde mein Bestes geben!\p"
	.string "Ich werde mich jetzt registrieren.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Reject::
	.string "Och, sag doch nicht einfach Nein!\n"
	.string "Ich bin doch eh schon verlegen genug…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Intro::
	.string "Ich bin {STR_VAR_3}. Das ist keine Lüge!\n"
	.string "Ich bin Schüler Nr. {STR_VAR_2} von {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Mon1::
	.string "{STR_VAR_3} hat mir einen Rat gegeben.\p"
	.string "Und da ich diesen wertvollen Rat gerne\n"
	.string "befolge, habe ich ein {STR_VAR_2},\l"
	.string "das {STR_VAR_1} kann, und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Mon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Wenn es dir genehm ist, dann würde ich\n"
	.string "dich bitten, mich als Partner zu wählen.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Accept::
	.string "Du entscheidest dich wirklich für mich?\n"
	.string "Wenn nicht, wäre das schrecklich für\p"
	.string "mich. Da du zustimmst, werde ich uns\n"
	.string "jetzt anmelden.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Reject::
	.string "Hm? Warum lehnst du mich ab? Ist das\n"
	.string "deine spezielle Art von Humor?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassIntro::
	.string "Ich bin {STR_VAR_1} und eine Göre!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassMon1::
	.string "Ich habe ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\n"
	.string "Die beiden begleiten mich.\p"
	.string "Willst du mein Teampartner sein?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassAccept::
	.string "Danke!\n"
	.string "Ich werde uns jetzt registrieren.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassReject::
	.string "Du willst nicht mein Teampartner sein?\n"
	.string "Das wird dir später bestimmt Leid tun…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterIntro::
	.string "Hallo!\p"
	.string "Ich bin Teenager {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterMon1::
	.string "Willst du wissen, was ich hab?\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterMon2Ask::
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann!\p"
	.string "Du wählst mich doch als deinen\n"
	.string "Partner, oder etwa nicht?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterAccept::
	.string "Spitze!\n"
	.string "Ich werde uns registrieren!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterReject::
	.string "Oooh! Dabei wären wir mit meinen\n"
	.string "Pokémon unschlagbar gewesen!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerIntro::
	.string "Halli hallo!\n"
	.string "Ich bin der Wanderer {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerMon1::
	.string "Willst du wissen, welche Pkmn ich habe?\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerMon2Ask::
	.string "kann, und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann!\p"
	.string "Na, hört sich das gut an? Sollen wir\n"
	.string "mit dir ein Team bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerAccept::
	.string "Hallo hallo!\n"
	.string "Dann werde ich uns mal registrieren.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerReject::
	.string "Ich hätte gerne mit dir Seite an Seite\n"
	.string "gekämpft.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyIntro::
	.string "Hallo! Ich bin {STR_VAR_1},\n"
	.string "eine wahre Schönheit!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyMon1::
	.string "Dies sind meine Pokémon!\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyMon2Ask::
	.string "kann, und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann!\p"
	.string "Was meinst du? Möchtest du mit mir ein\n"
	.string "Team bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyAccept::
	.string "Wunderbar!\n"
	.string "Ich werde uns jetzt registrieren.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyReject::
	.string "Was für eine Enttäuschung!\p"
	.string "Wir beide Seite an Seite - das wäre\n"
	.string "wirklich schön gewesen…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanIntro::
	.string "Yo!\p"
	.string "Weißt du, wer ich bin?\n"
	.string "Ich bin {STR_VAR_1}, der Angler!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanMon1::
	.string "Mein Team: ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann, und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanMon2Ask::
	.string "ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann!\p"
	.string "Wie sieht’s aus? Interesse, mit\n"
	.string "uns ein Team zu bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanAccept::
	.string "Fein, fein!\n"
	.string "Überlass den Rest ruhig mir!\p"
	.string "Ich werde uns jetzt registrieren.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanReject::
	.string "Und dabei wären wir so ein gutes Team\n"
	.string "gewesen…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyIntro::
	.string "Freut mich, dich kennen zu lernen.\n"
	.string "Ich bin die Lady {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyMon1::
	.string "Mich begleitet ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann, und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyMon2Ask::
	.string "ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann. Ich hoffe, wir erfüllen deine\p"
	.string "Erwartungen, denn ich würde gerne\n"
	.string "an deiner Seite kämpfen.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyAccept::
	.string "Ich bedanke mich sehr! Ich werde\n"
	.string "mich nun um die Registrierung kümmern.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyReject::
	.string "Ich bin sicher, du wirst es irgendwann\n"
	.string "bedauern, uns abgelehnt zu haben. $"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFIntro::
	.string "Ich bin Triathlet {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFMon1::
	.string "Ich habe…\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFMon2Ask::
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann. Das ist mein Paar!\p"
	.string "Bitte?\n"
	.string "Lass uns ein Team bilden, ja?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFAccept::
	.string "Juhuu, danke!\n"
	.string "Ich werde mich nun registrieren.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFReject::
	.string "Dabei wären wir beide wirklich\n"
	.string "unglaublich stark gewesen…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherIntro::
	.string "Hallo!\n"
	.string "Ich bin Käfersammler {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherMon1::
	.string "Guck mal, was ich hier habe!\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherMon2Ask::
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann!\p"
	.string "Hast du gehört?\n"
	.string "Komm, wir bilden ein Team!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherAccept::
	.string "Verstanden!\n"
	.string "Ich kümmere mich um die Registrierung.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherReject::
	.string "Ach, dabei sind meine Pokémon klasse!\n"
	.string "Ich hoffe, du wirst das nicht bereuen.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMIntro::
	.string "Guten Tag!\n"
	.string "Ich bin Schulkind {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMMon1::
	.string "Ich ziehe ein {STR_VAR_2} auf, das\n"
	.string "{STR_VAR_1} kann, und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Nicht schlecht, was? Bist du be-\n"
	.string "eindruckt und wählst uns als Partner?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMAccept::
	.string "Vielen Dank! Ich werde mich\n"
	.string "um die Registrierung kümmern.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMReject::
	.string "Das ist schade…\p"
	.string "Ich hoffte, etwas von dir lernen zu\n"
	.string "können…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyIntro::
	.string "Hallo! Ich werde mich dir vorstellen!\n"
	.string "Ich bin Schnösel {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyMon1::
	.string "Rate mal, was ich bei mir habe!\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyMon2Ask::
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann!\p"
	.string "Ich gebe dir hier und jetzt die Chance,\n"
	.string "mit uns ein Team zu bilden.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyAccept::
	.string "Kluge Entscheidung!\p"
	.string "Ich werde mich um die Registrierung\n"
	.string "kümmern.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyReject::
	.string "Ausgerechnet mich lehnst du ab?!?\n"
	.string "Das wird dir bestimmt noch Leid tun!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltIntro::
	.string "Kiyaii!\n"
	.string "Ich bin Schwarzgurt {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltMon1::
	.string "Meine Begleiter sind ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann, und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Bitte, erfüll mir einen Wunsch!\n"
	.string "Bilde ein Team mit mir.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltAccept::
	.string "Kiyaii! Ich werde mich um\n"
	.string "die Registrierung kümmern.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltReject::
	.string "Verstehe… Ich hoffe, du gibst mir\n"
	.string "beim nächsten Mal die Gelegenheit…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFIntro::
	.string "Hallo, du da!\n"
	.string "Ich bin {STR_VAR_1}, ein Planscher!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFMon1::
	.string "Weißt du, ich habe ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann, und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFMon2Ask::
	.string "ein {STR_VAR_2}, das {STR_VAR_1} kann.\n"
	.string "Wählst du mich als Partner, ja?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFAccept::
	.string "Hui! Fein!\n"
	.string "Ich werde uns registrieren.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFReject::
	.string "Wären wir Partner geworden, wären\n"
	.string "wir bestimmt superstark gewesen.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacIntro::
	.string "Sei gegrüßt…\n"
	.string "Ich bin Hexe {STR_VAR_1}…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacMon1::
	.string "Ich habe ein {STR_VAR_2} bei mir, das\n"
	.string "{STR_VAR_1} kann, und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann…\p"
	.string "Ich bitte dich…\n"
	.string "Nimm uns als deine Partner an…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacAccept::
	.string "Vielen Dank…\n"
	.string "Ich werde uns registrieren…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacReject::
	.string "Und wir wären so gerne deine\n"
	.string "Partner geworden…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMIntro::
	.string "Wie geht es dir? Ich bin {STR_VAR_1},\n"
	.string "ein Pkmn-züchter.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMMon1::
	.string "Ich züchte die besten Pokémon!\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMMon2Ask::
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann.\p"
	.string "Wie sieht’s aus? Sollen wir ein Team\n"
	.string "bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMAccept::
	.string "Vielen, vielen Dank!\p"
	.string "Ich kümmere mich um die Registrierung,\n"
	.string "du kannst hier entspannt warten.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMReject::
	.string "Schade, ich wäre gerne dein Teampartner\n"
	.string "geworden…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFIntro::
	.string "Hallo!\n"
	.string "Ich bin Triathlet {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFMon1::
	.string "Wer mich beim Laufen begleitet?\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFMon2Ask::
	.string "und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann!\p"
	.string "Nun?\n"
	.string "Sollen wir ein Team mit dir bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFAccept::
	.string "Das ist wahrer Sportsgeist!\p"
	.string "Ich werde uns schnell registrieren.\n"
	.string "Lauf nicht weg!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFReject::
	.string "Wir beide hätten uns den ersten Platz\n"
	.string "geholt. Schade, schade, schade!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMIntro::
	.string "Hey, du! Mein Name ist {STR_VAR_1}!\n"
	.string "Ich bin ein Triathlet.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMMon1::
	.string "Mein Team trainiert mit mir.\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMMon2Ask::
	.string "und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann.\p"
	.string "Nicht gerade unterste Schublade, nicht\n"
	.string "wahr? Wir sollten ein Team bilden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMAccept::
	.string "Sehr gut!\n"
	.string "Ich übernehme die Registrierung.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMReject::
	.string "Schade! Ich hätte mich wirklich\n"
	.string "angestrengt und mein Bestes gegeben!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlIntro::
	.string "Ich bin Kämpferin {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlMon1::
	.string "Ich habe ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann!\p"
	.string "Sagt dir diese Combo zu?\n"
	.string "Sollen wir mit dir ein Team bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlAccept::
	.string "Danke!\p"
	.string "Ich werde uns registrieren.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlReject::
	.string "Und ich hatte gehofft, mit dir das\n"
	.string "ultimative Kampfteam bilden zu können…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMIntro::
	.string "Ich bin Triathlet {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMMon1::
	.string "Mich begleiten ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Wir könnten mit dir ein Team bilden.\n"
	.string "Wäre das nicht super?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMAccept::
	.string "Danke!\p"
	.string "Ich werde uns jetzt sofort\n"
	.string "registrieren.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMReject::
	.string "Schade! Schade!!! Wir wären das\n"
	.string "stärkste Team weit und breit gewesen!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMIntro::
	.string "Meinst du mich? Ich bin ein\n"
	.string "Planscher und heiße {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMMon1::
	.string "Welche Pokémon ich dabei habe?\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMMon2Ask::
	.string "kann, und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann…\p"
	.string "Hey? Du und ich - wir bilden ein\n"
	.string "Team, okay?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMAccept::
	.string "Okay!!!\p"
	.string "Ich werde mich registrieren!\n"
	.string "Die anderen werden blass vor Neid!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMReject::
	.string "Meine Pokémon sind stark, jawohl!\n"
	.string "Schade, dass du Nein sagst.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristIntro::
	.string "Jahuu!\n"
	.string "Ich bin Gitarrist {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristMon1::
	.string "Schau dir meine Begleitband an!\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristMon2Ask::
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann!\p"
	.string "Richtig wild, was? Komm, tritt\n"
	.string "unserer Band bei!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristAccept::
	.string "Ja! Das ist der richtige Takt! Ich werde\n"
	.string "mich um die Registrierung kümmern.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristReject::
	.string "Meine Pokémon sind megastark!\n"
	.string "Du wirst das bestimmt bedauern!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanIntro::
	.string "Nett, dich kennen zu lernen.\n"
	.string "Ich bin Gentleman {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanMon1::
	.string "Ich werde begleitet von meinem treuen\n"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann,$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanMon2Ask::
	.string "und meinem treuen {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann.\p"
	.string "Darf ich dich fragen, ob wir mit dir im\n"
	.string "Team Seite an Seite kämpfen dürfen?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanAccept::
	.string "Vielen Dank! Es ist mir eine Ehre,\n"
	.string "mich um die Registrierung zu kümmern!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanReject::
	.string "Welch ein Unglück…\p"
	.string "Ich werde geduldig auf die nächste\n"
	.string "Gelegenheit warten…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMIntro::
	.string "Hallo! Ich bin {STR_VAR_1},\n"
	.string "ein großer Pokéfan.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMMon1::
	.string "Ich habe ein {STR_VAR_2} dabei, das\n"
	.string "{STR_VAR_1} kann, und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Gefällt dir, was du siehst?\n"
	.string "Warum werden wir nicht Partner?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMAccept::
	.string "Vielen Dank!\n"
	.string "Ich kümmere mich um die Registrierung.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMReject::
	.string "Meine Pokémon sind erste Klasse!\n"
	.string "Schade, dass du das nicht akzeptierst.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMIntro::
	.string "Hm!\n"
	.string "Ich bin der Experte {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMMon1::
	.string "Meine Pokémon sind ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann!\p"
	.string "Willst du zu uns ins Team?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMAccept::
	.string "Hm!\n"
	.string "Ich werde uns sofort anmelden!\l"
	.string "Lass uns beide unser Bestes geben!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMReject::
	.string "Hoffen wir mal, dass deine Entscheidung\n"
	.string "richtig war…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFIntro::
	.string "Hallo, hallo.\n"
	.string "Ich bin Experte {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFMon1::
	.string "Ich zog meine Pkmn sorgfältig auf.\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFMon2Ask::
	.string "kann, und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann.\p"
	.string "Möchtest du mit uns ein Team bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFAccept::
	.string "Sehr gut! Fein! Ich werde mich\n"
	.string "sofort um die Registrierung kümmern.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFReject::
	.string "Na, vielleicht beim nächsten Mal…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerIntro::
	.string "Ich bin Drachenprofi {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerMon1::
	.string "In meinem Team ist ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann, und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerMon2Ask::
	.string "ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann!\p"
	.string "Was meinst du? Möchtest du mit uns\n"
	.string "ein Team bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerAccept::
	.string "Okay, ich werde mein Bestes geben!\n"
	.string "Ich werde uns jetzt registrieren.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerReject::
	.string "Du wirst keinen stärkeren Partner als\n"
	.string "mich finden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperIntro::
	.string "Ich bin Vogelfänger {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperMon1::
	.string "Welche Pokémon ich habe?\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperMon2Ask::
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann.\p"
	.string "Sind wir nicht ein tolles Gespann?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperAccept::
	.string "Super, danke!\n"
	.string "Ich werde uns anmelden.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperReject::
	.string "Meine Pokémon und ich sind stark.\n"
	.string "Was für eine Enttäuschung…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyIntro::
	.string "Ich bin Ninjajunge {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyMon1::
	.string "Meine Pokémon?!? Ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann!\p"
	.string "Komm, wir bilden ein Team!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyAccept::
	.string "Ja!\n"
	.string "Ich melde uns an.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyReject::
	.string "Du wirst meine starken Pokémon\n"
	.string "bestimmt vermissen!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyIntro::
	.string "Hallo!\n"
	.string "Ich bin Schirmdame {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyMon1::
	.string "Meine Begleiter sind ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann, und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyMon2Ask::
	.string "ein {STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Sind sie nicht bezaubernd?\n"
	.string "Möchtest du mit uns ein Team bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyAccept::
	.string "Vielen Dank!\p"
	.string "Ich werde uns anmelden. Wir sollten\n"
	.string "uns beide nicht enttäuschen!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyReject::
	.string "Meine Pokémon sind ungeheuer stark.\n"
	.string "Wie enttäuschend…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacIntro::
	.string "Hallo!\n"
	.string "Ich bin Käfermaniac {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacMon1::
	.string "Ich habe meine Pkmn selbst gefunden!\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacMon2Ask::
	.string "kann, und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann.\p"
	.string "Alle selbst gefunden!!! Möchtest du mit\n"
	.string "uns ein Team bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacAccept::
	.string "Okay!\n"
	.string "Verstanden!\p"
	.string "Die Registrierung geht ganz schnell.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacReject::
	.string "Mit meinen selbst gefundenen Pokémon\n"
	.string "hätten wir nicht verlieren können…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorIntro::
	.string "Ahoi, Landratte!\n"
	.string "Ich bin Matrose {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorMon1::
	.string "Ich zeige dir meinen ganzen Stolz!\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorMon2Ask::
	.string "kann, und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann!\p"
	.string "Natürlich kannst du so nicht Nein\n"
	.string "sagen! Also? Sind wir ein Team?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorAccept::
	.string "Ich habe nichts anderes erwartet!\n"
	.string "Ich kümmere mich um die Registrierung.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorReject::
	.string "Wir wären über die Gegner wie ein Sturm\n"
	.string "auf hoher See hinweggefegt…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorIntro::
	.string "Hi, ich bin {STR_VAR_1}.\n"
	.string "Ich bin ein Pkmn-sammler.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorMon1::
	.string "Meine Juwelen! Ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann, und$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorMon2Ask::
	.string "ein {STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Nobel, was? Wir beide sollten echt\n"
	.string "ein Team bilden. Was meinst du?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorAccept::
	.string "Oh, yeah!\p"
	.string "Dann lass uns keine weitere Zeit\n"
	.string "mehr vergeuden! Ich melde uns an.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorReject::
	.string "Das betrübt mich jetzt wirklich.\n"
	.string "Meine Pokémon sind doch wahre Schätze!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMIntro::
	.string "Na, du? Ich bin {STR_VAR_1}.\n"
	.string "Ich bin ein Pkmn-ranger.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMMon1::
	.string "Ich habe ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann!\p"
	.string "Meinst du nicht, dass wir ein\n"
	.string "beeindruckendes Team wären?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMAccept::
	.string "Das ist klasse!\n"
	.string "Ich melde uns an.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMReject::
	.string "Nächstes Mal wählst du meine Pokémon\n"
	.string "aus. Ja?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFIntro::
	.string "Ich heiße {STR_VAR_1}.\n"
	.string "Ich bin ein Pkmn-ranger.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFMon1::
	.string "Ich habe folgende Pokémon dabei:\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFMon2Ask::
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann.\p"
	.string "Würdest du nicht gerne mit meiner\n"
	.string "Bande ein Team bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFAccept::
	.string "Wir werden unser Bestes geben!\n"
	.string "Ich werde uns ganz schnell anmelden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFReject::
	.string "Ich hoffe, das nächste Mal wählst du\n"
	.string "die Pokémon für mich aus.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyIntro::
	.string "Schön, dich kennen zu lernen. Ich bin\n"
	.string "Aromalady {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyMon1::
	.string "Ich reise mit einem {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und einem$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Ich hoffe, sie treffen deinen Ge-\n"
	.string "schmack? Möchtest du ein Team bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyAccept::
	.string "Ich fühle mich geehrt!\n"
	.string "Ich werde uns sofort anmelden.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyReject::
	.string "Es wäre schön, wenn wir das nächste\n"
	.string "Mal ein Team bilden könnten.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacIntro::
	.string "Weißt du, wer ich bin?\n"
	.string "Ich bin der Ruinenmaniac {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacMon1::
	.string "Ich habe ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann!\p"
	.string "Faszinierend, nicht wahr?\n"
	.string "Möchtest du ein Team mit uns bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacAccept::
	.string "Das ist eine gute Entscheidung! Ich\n"
	.string "werde mich um die Anmeldung kümmern.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacReject::
	.string "Hmm… Ich bin überzeugt,\n"
	.string "meine Pokémon sind stark…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMIntro::
	.string "Ich bin Ass-trainer {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMMon1::
	.string "Ich habe ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann,\n"
	.string "dabei. Cool, was?\p"
	.string "Und wäre es nicht noch viel cooler, wenn\n"
	.string "wir ein Team bilden würden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMAccept::
	.string "Cool!!!\n"
	.string "Ich melde uns blitzschnell an.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMReject::
	.string "Und ich dachte, wir könnten das coolste\n"
	.string "Team in der Geschichte werden…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFIntro::
	.string "Ich bin Ass-trainer {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFMon1::
	.string "Mein Team, fragst du? Ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann, und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Hört sich das gut an?\n"
	.string "Warum werden wir nicht Partner?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFAccept::
	.string "Das hört sich gut an!\n"
	.string "Ich sorge für die Registrierung.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFReject::
	.string "Und ich dachte, ich könnte endlich mal\n"
	.string "mit einem starken Partner kämpfen…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacIntro::
	.string "Tach!\n"
	.string "Ich bin Pokémaniac {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacMon1::
	.string "Was ich als Kenner zu bieten habe?\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacMon2Ask::
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann! Ist das was? Ja oder ja?\p"
	.string "Also los! Stampfen wir die andern\n"
	.string "in Grund und Boden. Ja oder ja?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacAccept::
	.string "Sehr gute Entscheidung!\n"
	.string "Ich werde uns registrieren.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacReject::
	.string "Meine Pokémon sind der Hammer!\n"
	.string "Dein Pech, wenn du es bedauerst.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerIntro::
	.string "Hallo, du da! Ich bin {STR_VAR_1},\n"
	.string "ein wahrer Hitzkopf!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerMon1::
	.string "Womit ich das Feuer entfache? Mit\n"
	.string "einem {STR_VAR_2}, das {STR_VAR_1}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerMon2Ask::
	.string "kennt, und einem\n"
	.string "{STR_VAR_2}, das {STR_VAR_1} kennt!\p"
	.string "Und was sagst du?\n"
	.string "Sollen wir ein Team bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerAccept::
	.string "Gut!\n"
	.string "Ich werde uns dann mal anmelden.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerReject::
	.string "Versprich mir, dass wir, wenn wir uns das\n"
	.string "nächste Mal treffen, Partner werden.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperIntro::
	.string "Ich bin {STR_VAR_1}, ein Camper.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperMon1::
	.string "Ich kümmere mich um ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und um ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Meinst du, es wäre lustig, wenn wir\n"
	.string "ein Team bilden? Ich denke schon!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperAccept::
	.string "Yeah!\n"
	.string "Ich melde uns an.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperReject::
	.string "Dann aber das nächste Mal, ja?\n"
	.string "Ich wäre gerne in deinem Team.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerIntro::
	.string "Hallo!\n"
	.string "Ich bin Picknicker {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerMon1::
	.string "Ich habe ein {STR_VAR_2} dabei, das\n"
	.string "{STR_VAR_1} kann, und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Sollen wir ein Team bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerAccept::
	.string "Vielen Dank!\n"
	.string "Ich werde uns registrieren.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerReject::
	.string "Ich hoffe, dass wir irgendwann mal\n"
	.string "Teampartner werden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMIntro::
	.string "Ich bin Psycho {STR_VAR_1}!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMMon1::
	.string "Ich habe ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Würdest du gerne ein Team mit\n"
	.string "uns bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMAccept::
	.string "Na, wunderbar!\n"
	.string "Ich melde uns an.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMReject::
	.string "Wenn wir uns das nächste Mal treffen,\n"
	.string "müssen wir unbedingt ein Team bilden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFIntro::
	.string "Ich bin {STR_VAR_1}!\n"
	.string "Ich bin ein Psycho…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFMon1::
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,\n"
	.string "und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann,\n"
	.string "sind meine Schüler.\p"
	.string "Kann ich dich überzeugen, ein Team\n"
	.string "mit uns zu bilden?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFAccept::
	.string "Danke schön.\n"
	.string "Ich kümmere mich um die Anmeldung.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFReject::
	.string "Ich hoffe, es wird sich eine weitere\n"
	.string "Gelegenheit für uns bieten…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFIntro::
	.string "Ich bin Schulkind {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFMon1::
	.string "Mein Pärchen ist ein {STR_VAR_2}, das\n"
	.string "{STR_VAR_1} kann, und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Darf ich bitte dein Teampartner sein?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFAccept::
	.string "Oooh, das ist prima!\n"
	.string "Ich melde uns sofort an!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFReject::
	.string "Och… Darf ich dann das nächste Mal\n"
	.string "dein Teampartner sein?!?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFIntro::
	.string "Huhu! Ich heiße {STR_VAR_1}!\n"
	.string "Ich bin ein Pkmn-züchter!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFMon1::
	.string "Ich habe ein {STR_VAR_2} gezüchtet, das\n"
	.string "{STR_VAR_1} kann, und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Hört sich das für dich interessant an?\n"
	.string "Dann lass uns doch ein Team bilden.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFAccept::
	.string "Fein, fein! Sehr gut!\n"
	.string "Überlass die Anmeldung ruhig mir.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFReject::
	.string "Nächstes Mal bilden wir aber ein\n"
	.string "Team, ja?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFIntro::
	.string "Ich bin {STR_VAR_1} und kann mit Stolz\n"
	.string "behaupten, dass ich ein Pokéfan bin!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFMon1::
	.string "Meine geliebten Pokémon:\n"
	.string "{STR_VAR_2}, das {STR_VAR_1} kann,$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\p"
	.string "Sind sie nicht allerliebst? Komm! Wir\n"
	.string "müssen einfach ein Team bilden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFAccept::
	.string "Vielen Dank!\n"
	.string "Ich melde uns sofort an!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFReject::
	.string "Weißt du, meine geliebten Pokémon sind\n"
	.string "die Besten. Wie ärgerlich…$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFIntro::
	.string "Hi, ich bin Schwimmerin {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFMon1::
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,\n"
	.string "und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann.\n"
	.string "Damit lässt es sich gut trainieren!\p"
	.string "Wir beide sollten ein Team bilden!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFAccept::
	.string "Cool!\n"
	.string "Ich werde uns registrieren.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFReject::
	.string "Für das nächste Mal schuldest du mir\n"
	.string "einen Teamkampf!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMIntro::
	.string "Was geht ab?\n"
	.string "Ich bin Triathlet {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMMon1::
	.string "Ich habe ein paar ganz anständige\n"
	.string "Pkmn. Ein {STR_VAR_2}, das {STR_VAR_1}$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMMon2Ask::
	.string "kann, und ein {STR_VAR_2},\n"
	.string "das {STR_VAR_1} kann.\p"
	.string "Und du und ich würden auch ein ganz\n"
	.string "anständiges Team abgeben. Oder?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMAccept::
	.string "Wunderbar!\n"
	.string "Warte, ich melde uns eben an.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMReject::
	.string "Nächstes Mal erwarte ich, dass wir ein \n"
	.string "Team werden. Vergiss das nicht.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFIntro::
	.string "Ich bin Triathlet {STR_VAR_1}.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFMon1::
	.string "Ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann, und ein$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFMon2Ask::
	.string "{STR_VAR_2}, das {STR_VAR_1} kann. So\n"
	.string "sieht mein Paar aus.\p"
	.string "Was meinst du? Ich würde sagen, wir\n"
	.string "würden ein gutes Team abgeben.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFAccept::
	.string "Das wollte ich hören!\n"
	.string "Ich melde uns schnell an.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFReject::
	.string "Du gibst mir aber nochmal die Chance,\n"
	.string "mit dir ein Team zu bilden, oder?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMIntro::
	.string "Hallo! Ich bin {STR_VAR_1},\n"
	.string "ein Schwimmer.$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMMon1::
	.string "Schau dir mal diese Prachtexemplare an!\n"
	.string "Ein {STR_VAR_2}, das {STR_VAR_1} kann,$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMMon2Ask::
	.string "und ein {STR_VAR_2}, das {STR_VAR_1}\n"
	.string "kann!\p"
	.string "Niedlich, was? Und beeindruckend?\n"
	.string "Bildest du mit uns ein perfektes Team?$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMAccept::
	.string "Fantastisch!\n"
	.string "Ich registriere uns!$"

BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMReject::
	.string "Nächstes Mal, wenn wir uns treffen,\n"
	.string "müssen wir aber ein Team bilden!!!$"


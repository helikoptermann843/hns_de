FourIsland_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FourIsland_OnFrame
	.byte 0

FourIsland_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_FOUR_ISLAND
	call_if_eq VAR_MAP_SCENE_FOUR_ISLAND, 0, FourIsland_EventScript_ShowRival
	call FourIsland_EventScript_TrySetDayCareManPos
	end

FourIsland_EventScript_ShowRival::
	clearflag FLAG_HIDE_FOUR_ISLAND_RIVAL
	return

FourIsland_EventScript_TrySetDayCareManPos::
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, FourIsland_EventScript_EndSetDayCareManPos
	setobjectxyperm LOCALID_FOUR_ISLAND_DAYCARE_MAN, 16, 14
FourIsland_EventScript_EndSetDayCareManPos::
	return

FourIsland_OnFrame::
	map_script_2 VAR_MAP_SCENE_FOUR_ISLAND, 0, FourIsland_EventScript_RivalScene
	.2byte 0

FourIsland_EventScript_RivalScene::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_FOUR_ISLAND_RIVAL, Common_Movement_Delay48
	waitmovement 0
	delay 25
	applymovement LOCALID_FOUR_ISLAND_RIVAL, FourIsland_Movement_RivalApproach
	waitmovement 0
	msgbox FourIsland_Text_RivalAlreadyGotEggBeSmellingYa
	closemessage
	applymovement LOCALID_PLAYER, FourIsland_Movement_PlayerWatchRivalExit
	applymovement LOCALID_FOUR_ISLAND_RIVAL, FourIsland_Movement_RivalExit
	waitmovement 0
	fadedefaultbgm
	playse SE_EXIT
	delay 35
	removeobject LOCALID_FOUR_ISLAND_RIVAL
	setvar VAR_MAP_SCENE_FOUR_ISLAND, 1
	releaseall
	end

FourIsland_Movement_RivalApproach::
	walk_right
	walk_right
	walk_down
	walk_down
	step_end

FourIsland_Movement_RivalExit::
	delay_16
	delay_4
	walk_down
	step_end

FourIsland_Movement_PlayerWatchRivalExit::
	walk_left
	walk_in_place_faster_right
	step_end

FourIsland_EventScript_DaycareMan::
	lock
	faceplayer
	special GetDaycareMonNicknames
	specialvar VAR_RESULT, GetDaycareState
	goto_if_eq VAR_RESULT, DAYCARE_EGG_WAITING, FourIsland_EventScript_DaycareEggWaiting
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_EventScript_CheckOnOneMon
	goto_if_eq VAR_RESULT, DAYCARE_TWO_MONS, FourIsland_EventScript_CheckOnTwoMons
	msgbox DayCare_Text_ImDaycareManSpeakToMyWife
	release
	end

FourIsland_EventScript_DaycareEggWaiting::
	msgbox DayCare_Text_DoYouWantEgg, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FourIsland_EventScript_DaycareAcceptEgg
	msgbox DayCare_Text_IWillKeepDoYouWantIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FourIsland_EventScript_DaycareAcceptEgg
	msgbox DayCare_Text_IllKeepIt
	clearflag FLAG_PENDING_DAYCARE_EGG
	special RejectEggFromDayCare
	release
	end

FourIsland_EventScript_DaycareAcceptEgg::
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	goto_if_ne VAR_RESULT, PARTY_SIZE, FourIsland_EventScript_DaycareReceivedEgg
	msgbox DayCare_Text_YouHaveNoRoomForIt
	release
	end

FourIsland_EventScript_DaycareReceivedEgg::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	message DayCare_Text_ReceivedEgg
	call EventScript_RestorePrevTextColor
	playfanfare MUS_LEVEL_UP
	waitfanfare
	waitbuttonpress
	msgbox DayCare_Text_TakeGoodCareOfIt
	special GiveEggFromDaycare
	clearflag FLAG_PENDING_DAYCARE_EGG
	release
	end

FourIsland_EventScript_CheckOnOneMon::
	special GetDaycareMonNicknames
	msgbox DayCare_Text_YourMonIsDoingFine
	release
	end

FourIsland_EventScript_CheckOnTwoMons::
	special GetDaycareMonNicknames
	msgbox DayCare_Text_YourMonsAreDoingFine
	special SetDaycareCompatibilityString
	special ShowFieldMessageStringVar4
	waitmessage
	waitbuttonpress
	release
	end

FourIsland_EventScript_OldWoman::
	lock
	faceplayer
	goto_if_set FLAG_IS_CHAMPION, FourIsland_EventScript_OldWomanLoreleiLeft
	msgbox FourIsland_Text_LoreleiHasReturned
	release
	end

FourIsland_EventScript_OldWomanLoreleiLeft::
	famechecker FAMECHECKER_LORELEI, 5
	msgbox FourIsland_Text_LoreleiMetLaprasAsChild
	release
	end

FourIsland_EventScript_LittleGirl::
	lock
	faceplayer
	famechecker FAMECHECKER_LORELEI, 4
	msgbox FourIsland_Text_LoreleiHasLotsOfStuffedDolls
	release
	end

FourIsland_EventScript_FatMan::
	msgbox FourIsland_Text_MadeSlushieUsingIcefallCaveIce, MSGBOX_NPC
	end

FourIsland_EventScript_IslandSign::
	msgbox FourIsland_Text_IslandSign, MSGBOX_SIGN
	end

FourIsland_EventScript_LoreleisHouseSign::
	msgbox FourIsland_Text_LoreleisHouse, MSGBOX_SIGN
	end

FourIsland_Text_IslandSign::
	.string "Eiland Vier\n"
	.string "Warmes, blaues Eisschollen-Eiland$"

FourIsland_Text_LoreleiHasReturned::
	.string "Lorelei ist zurückgekehrt.\p"
	.string "War das Leben in der Stadt\n"
	.string "etwa zu stressig?$"

FourIsland_Text_LoreleiMetLaprasAsChild::
	.string "Lorelei ist zurück.\p"
	.string "Sie hat immer noch das Lapras,\n"
	.string "das sie in ihrer Kindheit traf.\p"
	.string "Ich erinnere mich, dass sie es\n"
	.string "in der Eiskaskadenhöhle\l"
	.string "gefangen hatte.\l"
	.string "Womöglich ist dieses Pokémon\l"
	.string "seither nicht von ihrer Seite\l"
	.string "gewichen.$"

FourIsland_Text_RivalAlreadyGotEggBeSmellingYa::
	.string "{RIVAL}: Heh!\n"
	.string "{PLAYER}!\p"
	.string "Was machst du hier auf\n"
	.string "Sevii Eiland?\p"
	.string "Du solltest aufhören, mich\n"
	.string "nachzuahmen!\p"
	.string "Egal, ich habe mein Pokémon-Ei\n"
	.string "bereits, also hält mich nichts mehr\l"
	.string "hier.\l"
	.string "Heh, ich glaube, du weißt nichts\l"
	.string "über Pokémon-Eier.\p"
	.string "Du wirst nie deinen Nationalen\n"
	.string "Pokédex vervollständigen.\p"
	.string "Apropos, ich sah jemanden auf\n"
	.string "dieser Insel, den wir beide kennen.\p"
	.string "Warum siehst du dich nicht um, wenn\n"
	.string "ich dich neugierig gemacht habe?\p"
	.string "Ich? Ich habe keine Zeit zu\n"
	.string "verlieren!\p"
	.string "Wir sehen uns!$"

FourIsland_Text_LoreleiHasLotsOfStuffedDolls::
	.string "Oh, du hast mich gefunden!\n"
	.string "Bitte verrate Lorelei nichts.\p"
	.string "Wusstest du, dass Lorelei eine\n"
	.string "ganze Menge Plüschpuppen besitzt?\p"
	.string "Bei jedem Besuch auf Eiland Vier\n"
	.string "wächst ihre Sammlung!$"

FourIsland_Text_MadeSlushieUsingIcefallCaveIce::
	.string "Oh, fröstel!\p"
	.string "Ich habe aus dem Eis, das ich in\n"
	.string "der Eiskaskadenhöhle abgetragen\l"
	.string "habe, einen Eis-Drink zubereitet.\p"
	.string "Frostig und lecker!$"

FourIsland_Text_LoreleisHouse::
	.string "Haus von Lorelei$"


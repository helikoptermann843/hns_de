MauvilleCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_OnTransition
	.byte 0

MauvilleCity_OnTransition:
	setflag FLAG_VISITED_MAUVILLE_CITY
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
	setflag FLAG_SYS_TV_START
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
	setvar VAR_MAUVILLE_GYM_STATE, 0
	call_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
	end

MauvilleCity_EventScript_MoveWattsonBackToGym::
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
	return

MauvilleCity_EventScript_Boy::
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
	end

MauvilleCity_EventScript_Maniac::
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
	end

MauvilleCity_EventScript_Woman::
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
	end

MauvilleCity_EventScript_RichBoy::
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
	end

MauvilleCity_EventScript_CitySign::
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
	end

MauvilleCity_EventScript_GymSign::
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
	end

MauvilleCity_EventScript_BikeShopSign::
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
	end

MauvilleCity_EventScript_GameCornerSign::
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
	end

MauvilleCity_EventScript_SchoolKidM::
	lock
	faceplayer
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
	setflag FLAG_TV_EXPLAINED
	release
	end

MauvilleCity_EventScript_TVExplained::
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_WallysUncle::
	lock
	faceplayer
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MauvilleCity_EventScript_UncleAskPlayerToBattleWally::
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MauvilleCity_EventScript_Wally::
	lockall
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_Delay48
	waitmovement 0
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
	goto MauvilleCity_EventScript_BattleWallyPrompt
	end

MauvilleCity_EventScript_BattleWallyPrompt::
	call_if_eq VAR_RESULT, YES, MauvilleCity_EventScript_BattleWally
	goto_if_eq VAR_RESULT, NO, MauvilleCity_EventScript_DeclineWallyBattle
	closemessage
	switch VAR_FACING
	case DIR_NORTH, MauvilleCity_EventScript_WallyAndUncleExitNorth
	case DIR_EAST, MauvilleCity_EventScript_WallyAndUncleExitEast
	end

MauvilleCity_EventScript_WallyAndUncleExitNorth::
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitNorth1
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
	waitmovement 0
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 30
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
	waitmovement 0
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitNorth2
	waitmovement 0
	goto MauvilleCity_EventScript_DefeatedWally
	end

MauvilleCity_EventScript_WallyAndUncleExitEast::
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitEast1
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
	waitmovement 0
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 30
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
	waitmovement 0
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
	applymovement LOCALID_MAUVILLE_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
	applymovement LOCALID_MAUVILLE_WALLY, MauvilleCity_Movement_WallyExitEast2
	waitmovement 0
	goto MauvilleCity_EventScript_DefeatedWally
	end

MauvilleCity_EventScript_DefeatedWally::
	removeobject LOCALID_MAUVILLE_WALLY
	removeobject LOCALID_MAUVILLE_WALLYS_UNCLE
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottApproachPlayerNorth
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottApproachPlayerEast
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
	closemessage
	addvar VAR_SCOTT_STATE, 1
	call_if_eq VAR_FACING, DIR_NORTH, MauvilleCity_EventScript_ScottExitNorth
	call_if_eq VAR_FACING, DIR_EAST, MauvilleCity_EventScript_ScottExitEast
	removeobject LOCALID_MAUVILLE_SCOTT
	releaseall
	end

MauvilleCity_EventScript_ScottApproachPlayerNorth::
	addobject LOCALID_MAUVILLE_SCOTT
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
	waitmovement 0
	return

MauvilleCity_EventScript_ScottApproachPlayerEast::
	setobjectxyperm LOCALID_MAUVILLE_SCOTT, 12, 13
	addobject LOCALID_MAUVILLE_SCOTT
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
	waitmovement 0
	return

MauvilleCity_EventScript_ScottExitNorth::
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottExitNorth
	waitmovement 0
	return

MauvilleCity_EventScript_ScottExitEast::
	applymovement LOCALID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
	applymovement LOCALID_MAUVILLE_SCOTT, MauvilleCity_Movement_ScottExitEast
	waitmovement 0
	return

MauvilleCity_EventScript_BattleWally::
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
	return

MauvilleCity_EventScript_DeclineWallyBattle::
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_WallyRequestBattleAgain::
	applymovement LOCALID_MAUVILLE_WALLY, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
	goto MauvilleCity_EventScript_BattleWallyPrompt
	end

MauvilleCity_Movement_WallyExitNorth1:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	step_end

MauvilleCity_Movement_WallyExitEast1:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_WallyExitNorth2:
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	delay_8
	step_end

MauvilleCity_Movement_WallyExitEast2:
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	delay_8
	step_end

MauvilleCity_Movement_PlayerWatchWallyExitNorth2:
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

MauvilleCity_Movement_PlayerWatchWallyExitEast2:
	delay_16
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

MauvilleCity_Movement_PlayerWatchScottExitNorth:
	delay_16
	walk_in_place_faster_left
	step_end

MauvilleCity_Movement_PlayerWatchScottExitEast:
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

MauvilleCity_Movement_PlayerWatchWallyExitEast1:
	delay_16
	walk_in_place_faster_down
	step_end

MauvilleCity_Movement_PlayerWatchWallyExitNorth1:
	delay_16
	walk_in_place_faster_left
	step_end

MauvilleCity_Movement_WallysUncleExitNorth1:
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end

MauvilleCity_Movement_WallysUncleExitEast1:
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_PlayerFaceUncleNorth:
	delay_16
	delay_8
	delay_4
	walk_in_place_faster_down
	step_end

MauvilleCity_Movement_WallysUncleApproachPlayerNorth:
	walk_right
	walk_right
	walk_in_place_faster_up
	step_end

MauvilleCity_Movement_WallysUncleApproachPlayerEast:
	walk_right
	walk_up
	step_end

MauvilleCity_Movement_WallysUncleExitNorth2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_WallysUncleExitEast2:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_ScottApproachPlayerNorth:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_up
	step_end

MauvilleCity_Movement_ScottApproachPlayerEast:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

MauvilleCity_Movement_ScottExitNorth:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MauvilleCity_Movement_ScottExitEast:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MauvilleCity_EventScript_Wattson::
	lock
	faceplayer
	goto_if_set FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_EventScript_CompletedNewMauville
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
	giveitem ITEM_BASEMENT_KEY
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_BegunNewMauville::
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_CompletedNewMauville::
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_THUNDERBOLT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_GOT_TM_THUNDERBOLT_FROM_WATTSON
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_ReceivedThunderbolt::
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_RegisterWallyCall::
	lockall
	pokenavcall MauvilleCity_Text_WallyPokenavCall
	waitmessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
	releaseall
	end

MauvilleCity_Text_UncleHesTooPeppy:
	.string "Onkel: Ich glaube, es liegt an dem\n"
	.string "Pokémon, dass dieser Junge mehr Pep\l"
	.string "hat. Aber er hat zu viel Pep…$"

MauvilleCity_Text_WallyWantToChallengeGym:
	.string "Heiko: Oooch, bitte, Onkel, bitte!\p"
	.string "Ich möchte in dieser Arena antreten,\n"
	.string "um zu sehen, wie gut ich bin.\p"
	.string "Bitte! Darf ich? Biiiitte!$"

MauvilleCity_Text_UncleYourePushingIt:
	.string "Onkel: Nun hör mal auf, Heiko.\p"
	.string "Seit du mit Pokémon zusammenlebst,\n"
	.string "bist du viel stärker geworden.\p"
	.string "Aber - du überforderst dich, wenn du\n"
	.string "plötzlich in einer Arena antrittst.$"

MauvilleCity_Text_WallyWeCanBeatAnyone:
	.string "Heiko: Ich bin nicht überfordert!\p"
	.string "Wenn ich die Kräfte von Trasla\n"
	.string "kombiniere, besiege ich jeden!$"

MauvilleCity_Text_WallyWillYouBattleMe:
	.string "Heiko: Oh! Hi {PLAYER}!\p"
	.string "Seit wir uns das letzte Mal gesehen\n"
	.string "haben, bin ich viel stärker geworden.\n"
	.string "\p"
	.string "{PLAYER}, ich möchte von dir und auch\n"
	.string "von meinem Onkel verstanden werden.\p"
	.string "{PLAYER}, bitte, würdest du gegen mich\n"
	.string "kämpfen?$"

MauvilleCity_Text_WallyMyUncleWontKnowImStrong:
	.string "Heiko: Oh… Wenn du nicht gegen mich\l"
	.string "an-\n"
	.string "treten willst, {PLAYER}, wird mein\p"
	.string "Onkel\l"
	.string "nie erkennen, wie stark ich schon bin.$"

MauvilleCity_Text_UncleCanYouBattleWally:
	.string "Onkel: {PLAYER}{KUN}, richtig?\n"
	.string "Darf ich dich um Heikos Willen bitten,\l"
	.string "dieses eine Mal gegen ihn zu kämpfen?\n"
	.string "\p"
	.string "Ich glaube nicht, dass er mir im\n"
	.string "Moment überhaupt zuhören will…$"

MauvilleCity_Text_WallyPleaseBattleMe:
	.string "Heiko: {PLAYER}, bitte!\n"
	.string "Kämpfe gegen mich! Biiiitte!$"

MauvilleCity_Text_WallyHereICome:
	.string "Heiko: {PLAYER}, vielen Dank!\p"
	.string "Okay… Jetzt komme ich!$"

MauvilleCity_Text_WallyDefeat:
	.string "Heiko: … … … … … … …\p"
	.string "… … … … … … … …\p"
	.string "Ich habe verloren…$"

MauvilleCity_Text_WallyIllGoBackToVerdanturf:
	.string "Heiko: Onkel…\n"
	.string "Ich gehe zurück nach Wiesenflur…$"

MauvilleCity_Text_ThankYouNotEnoughToBattle:
	.string "{PLAYER}, herzlichen Dank! Trainer zu\n"
	.string "sein verlangt viel von einem, oder?\p"
	.string "Man besitzt nicht einfach nur Pokémon\n"
	.string "und lässt sie kämpfen. Um ein\n"
	.string "richtiger\l"
	.string "Trainer zu sein, braucht es mehr.$"

MauvilleCity_Text_UncleNoNeedToBeDown:
	.string "Onkel: Heiko, du brauchst deshalb\n"
	.string "nicht so niedergeschlagen zu sein.\p"
	.string "Was hält dich davon ab, stärker und\n"
	.string "stärker zu werden? Nichts!\p"
	.string "Komm, gehen wir nach Hause.\n"
	.string "Da warten sie alle schon auf dich.$"

MauvilleCity_Text_UncleVisitUsSometime:
	.string "Onkel: {PLAYER}{KUN}, mir dämmert es\l"
	.string "so\n"
	.string "langsam. Du musst der Trainer sein,\p"
	.string "der\l"
	.string "sich damals um Heiko gekümmert hat,\n"
	.string "als\l"
	.string "er sein erstes Pokémon fing.\p"
	.string "Warum besuchst du uns nicht irgendwann\n"
	.string "in Wiesenflur? Ich bin sicher,\l"
	.string "Heiko würde sich sehr freuen.$"


MauvilleCity_Text_WallyPokenavCall:
	.string "… … … … …\n"
	.string "…\l… … … … …\l…\p"
	.string "Heiko: Oh, hallo {PLAYER}!\p"
	.string "Ich muss dir was erzählen! Mein\n"
	.string "Onkel hat mir einen Pokénav\l"
	.string "gegeben.\p"
	.string "Nun kann ich mit dir reden, wann\n"
	.string "immer ich möchte, {PLAYER}!\p"
	.string "… … … … …\n"
	.string "…\l… … … … …\lKlick!$"

MauvilleCity_Text_RegisteredWally:
	.string "Heiko wurde im Pokénav-Verzeichnis\n"
	.string "eingetragen.$"

MauvilleCity_Text_ScottYouDidntHoldBack:
	.string "Scott: Hehe…\n"
	.string "Ich habe diesen Kampf beobachtet!\p"
	.string "Du bist ein Freund von diesem Jungen,\n"
	.string "von Heiko, oder?\p"
	.string "Aber du hast dich nicht zurückgehalten\n"
	.string "und ihn beeindruckend besiegt.\p"
	.string "Yeah! Das ist es, was Pokémon-Kämpfe\n"
	.string "ausmacht!\p"
	.string "Ich bewundere solche Trainer!\p"
	.string "… … … … …\n"
	.string "…\l"
	.string "Ich feure dich an!$"

MauvilleCity_Text_WattsonNeedFavorTakeKey:
	.string "Walter: Oh, {PLAYER}{KUN}!\n"
	.string "Du siehst aus, als hättest du Mumm!\l"
	.string "Das ist sehr gut, hähähähähä…\p"
	.string "Gut! Ich habe es entschieden!\n"
	.string "Du tust mir einen Gefallen,\n"
	.string "{PLAYER}{KUN}! \p"
	.string "Malvenfroh City hat einen unter-\n"
	.string "irdischen Bereich, der neu Malvenfroh\l"
	.string "heißt.\p"
	.string "{PLAYER}{KUN}, ich schicke dich jetzt\n"
	.string "da\n"
	.string "hinunter, damit du den Generator aus-\l"
	.string "schaltest.\p"
	.string "Der Generator ist kurz davor, \n"
	.string "heißzulaufen. Das ist sehr gefährlich.\n"
	.string "\p"
	.string "Hier hast du den Schlüssel für\n"
	.string "Neu Malvenfroh.$"

MauvilleCity_Text_WattsonWontBeChallenge:
	.string "Walter: Mach dir keine Sorgen. Man\n"
	.string "kann das nicht gerade eine Heraus-\l"
	.string "forderung nennen.\p"
	.string "Der Eingang zu neu Malvenfroh\n"
	.string "ist eine kurze Surf-Strecke von\l"
	.string "Route 110 entfernt.\p"
	.string "Das ist alles. Du kannst mir\n"
	.string "vertrauen! Wahahahahahaha!$"

MauvilleCity_Text_WattsonThanksTakeTM:
	.string "Walter: Wahahahahaha!\p"
	.string "Ich wusste es, {PLAYER}{KUN}! Ich\n"
	.string "wusste, ich\n"
	.string "habe die richtige Person\l"
	.string "herausgepickt!\p"
	.string "Hier, das ist mein Dankeschön - eine\n"
	.string "TM, die Donnerblitz enthält!\p"
	.string "Nimm! Du hast sie dir wirklich\n"
	.string "verdient!$"

MauvilleCity_Text_WattsonYoungTakeCharge:
	.string "Walter: Wahahahahaha!\p"
	.string "Es freut mich zu sehen, wie\l"
	.string "energetisch\n"
	.string "sich die jungen Leute heute\p"
	.string "entwickeln!$"

MauvilleCity_Text_NurseHurtMonBackToHealth:
	.string "Weißt du, es ist cool, dass es\n"
	.string "Pokémon-\n"
	.string "Kämpfe und all das Zeugs gibt…\p"
	.string "Aber wenn dein Pokémon verletzt wird,\n"
	.string "dann musst du es gesund pflegen.$"

MauvilleCity_Text_AllSortsOfPeopleComeThrough:
	.string "Die Straßen dieses Ortes führen nach\n"
	.string "Norden, Süden, nach Westen und Osten.\n"
	.string "\p"
	.string "Daher reisen hier auch so viele ver-\n"
	.string "schiedene Leute durch.$"

MauvilleCity_Text_RydelVeryGenerous:
	.string "Warst du schon in Radlas Radladen?\p"
	.string "Radla, der Eigentümer, ist ein sehr\n"
	.string "großzügiger Mann.$"

MauvilleCity_Text_PokemonCanJumpYouOnBike:
	.string "Selbst wenn du mit dem Rad fährst,\n"
	.string "können dich Pokémon anspringen.$"

MauvilleCity_Text_CitySign:
	.string "Malvenfroh City\n"
	.string "“Die strahlende Stadt der Freude!”$"

MauvilleCity_Text_GymSign:
	.string "Pokémon Arena von Malvenfroh City\n"
	.string "Leiter: Walter\l"
	.string "“Der Mann, der Spannung entlädt!”$"

MauvilleCity_Text_BikeShopSign:
	.string "Radlas Räder\n"
	.string "“Fahre im Kies und lass dich durch-\l"
	.string "schütteln!”$"

MauvilleCity_Text_GameCornerSign:
	.string "Malvenfroh City Spielhalle\n"
	.string "“Der Ort für alle Spieler!”$"

MauvilleCity_Text_ExplainTV:
	.string "Hi, hast du in letzter Zeit\n"
	.string "ferngesehen?\p"
	.string "Da gibt es jetzt jede Menge coole,\n"
	.string "neue Shows.\p"
	.string "Fernsehen ist so cool. Plötzlich habe\n"
	.string "ich meine Freunde im Fernsehen\n"
	.string "gesehen. \p"
	.string "Und manchmal, da zeigen sie dich im\n"
	.string "Fernsehen und du weißt es gar nicht.\p"
	.string "Ich möchte auch mal im Fernsehen sein.\n"
	.string "\p"
	.string "Du solltest immer mal wieder den\n"
	.string "Fernseher einschalten…$"

MauvilleCity_Text_BeenCheckingOutTV:
	.string "Hi, hast du in letzter Zeit\n"
	.string "ferngesehen?$"

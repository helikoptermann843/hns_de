LavaridgeTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_OnFrame
	.byte 0

LavaridgeTown_OnTransition:
	setflag FLAG_VISITED_LAVARIDGE_TOWN
	call_if_set FLAG_WHITEOUT_TO_LAVARIDGE, LavaridgeTown_EventScript_ClearLavaridgeWhiteOut
	call_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_EventScript_ShowMtChimneyTrainers
	call Common_EventScript_SetupRivalGfxId
	call Common_EventScript_SetupRivalOnBikeGfxId
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_CheckSetRivalPos
	call_if_eq VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_HideMapNamePopup
	end

LavaridgeTown_EventScript_ClearLavaridgeWhiteOut::
	clearflag FLAG_WHITEOUT_TO_LAVARIDGE
	return

LavaridgeTown_EventScript_CheckSetRivalPos::
	getplayerxy VAR_0x8004, VAR_0x8005
	goto_if_eq VAR_0x8004, 9, LavaridgeTown_EventScript_SetRivalPos
	return

LavaridgeTown_EventScript_SetRivalPos::
	setobjectxyperm LOCALID_LAVARIDGE_RIVAL, 11, 9
	setobjectxyperm LOCALID_LAVARIDGE_RIVAL_ON_BIKE, 9, 8
	setobjectmovementtype LOCALID_LAVARIDGE_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_UP
	clearflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
	return

LavaridgeTown_EventScript_ShowMtChimneyTrainers::
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
	return

LavaridgeTown_EventScript_HideMapNamePopup::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	return

LavaridgeTown_OnFrame:
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_RivalGiveGoGoggles
	.2byte 0

LavaridgeTown_EventScript_RivalGiveGoGoggles::
	lockall
	getplayerxy VAR_0x8008, VAR_0x8009
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalNoticePlayer
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExitHerbShop
	delay 20
	checkplayergender
	call_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_PlayMayMusic
	call_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_PlayBrendanMusic
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer1
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalApproachPlayer2
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, LavaridgeTown_EventScript_MayGiveGoGoggles
	goto_if_eq VAR_RESULT, FEMALE, LavaridgeTown_EventScript_BrendanGiveGoGoggles
	end

LavaridgeTown_EventScript_MayGiveGoGoggles::
	msgbox LavaridgeTown_Text_MayNiceBadgesTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_GO_GOGGLES
	setflag FLAG_RECEIVED_GO_GOGGLES
	msgbox LavaridgeTown_Text_MayExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
	goto LavaridgeTown_EventScript_RivalExit
	end

LavaridgeTown_EventScript_BrendanGiveGoGoggles::
	msgbox LavaridgeTown_Text_BrendanNiceBadgesTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_GO_GOGGLES
	setflag FLAG_RECEIVED_GO_GOGGLES
	msgbox LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
	goto LavaridgeTown_EventScript_RivalExit
	end

LavaridgeTown_EventScript_RivalExit::
	closemessage
	removeobject LOCALID_LAVARIDGE_RIVAL
	addobject LOCALID_LAVARIDGE_RIVAL_ON_BIKE
	delay 30
	call_if_eq VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit1
	call_if_ne VAR_0x8008, 9, LavaridgeTown_EventScript_RivalExit2
	removeobject LOCALID_LAVARIDGE_RIVAL_ON_BIKE
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

LavaridgeTown_EventScript_PlayMayMusic::
	playbgm MUS_ENCOUNTER_MAY, TRUE
	return

LavaridgeTown_EventScript_PlayBrendanMusic::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	return

LavaridgeTown_EventScript_RivalNoticePlayer::
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_Delay48
	waitmovement 0
	return

LavaridgeTown_EventScript_RivalExitHerbShop::
	opendoor 12, 15
	waitdooranim
	addobject LOCALID_LAVARIDGE_RIVAL
	applymovement LOCALID_LAVARIDGE_RIVAL, LavaridgeTown_Movement_RivalExitHerbShop
	waitmovement 0
	closedoor 12, 15
	waitdooranim
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_LAVARIDGE_RIVAL, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

LavaridgeTown_EventScript_RivalApproachPlayer1::
	applymovement LOCALID_LAVARIDGE_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer1
	waitmovement 0
	return

LavaridgeTown_EventScript_RivalApproachPlayer2::
	applymovement LOCALID_LAVARIDGE_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer2
	waitmovement 0
	return

LavaridgeTown_EventScript_RivalExit1::
	applymovement LOCALID_PLAYER, LavaridgeTown_Movement_PlayerWatchRivalExit
	applymovement LOCALID_LAVARIDGE_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit1
	waitmovement 0
	return

LavaridgeTown_EventScript_RivalExit2::
	applymovement LOCALID_LAVARIDGE_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit2
	waitmovement 0
	return

LavaridgeTown_Movement_RivalExit2:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

LavaridgeTown_Movement_PlayerWatchRivalExit:
	delay_16
	delay_8
	walk_in_place_faster_right
	step_end

LavaridgeTown_Movement_RivalExit1:
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

LavaridgeTown_Movement_RivalApproachPlayer2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

LavaridgeTown_Movement_RivalApproachPlayer1:
	walk_left
	walk_left
	walk_up
	step_end

LavaridgeTown_Movement_RivalExitHerbShop:
	walk_down
	step_end

LavaridgeTown_EventScript_HotSpringsTrigger::
	specialvar VAR_RESULT, GetPlayerFacingDirection
	goto_if_eq VAR_RESULT, DIR_SOUTH, LavaridgeTown_EventScript_EnteredHotSprings
	end

LavaridgeTown_EventScript_EnteredHotSprings::
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
	end

LavaridgeTown_EventScript_ExpertM::
	msgbox LavaridgeTown_Text_HotSpringsNeverRunDry, MSGBOX_NPC
	end

LavaridgeTown_EventScript_OldMan::
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_SIGN
	end

LavaridgeTown_EventScript_Twin::
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
	end

LavaridgeTown_EventScript_HotSpringsOldWoman1::
	msgbox LavaridgeTown_Text_IfPokemonInHotSprings, MSGBOX_NPC
	end

LavaridgeTown_EventScript_HotSpringsOldWoman2::
	msgbox LavaridgeTown_Text_HotSpringsClaims, MSGBOX_NPC
	end

LavaridgeTown_EventScript_ExpertF::
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
	end

LavaridgeTown_EventScript_EggWoman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, LavaridgeTown_EventScript_ReceivedEgg
	msgbox LavaridgeTown_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LavaridgeTown_EventScript_DeclineEgg
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, LavaridgeTown_EventScript_NoRoomForEgg
	msgbox LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
	playfanfare MUS_OBTAIN_ITEM
	message LavaridgeTown_Text_ReceivedTheEgg
	waitfanfare
	giveegg SPECIES_WYNAUT
	release
	end

LavaridgeTown_EventScript_ReceivedEgg::
	msgbox LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_EventScript_NoRoomForEgg::
	msgbox LavaridgeTown_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_EventScript_DeclineEgg::
	msgbox LavaridgeTown_Text_AsYouWishThen, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_EventScript_TownSign::
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
	end

LavaridgeTown_EventScript_GymSign::
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
	end

LavaridgeTown_EventScript_HerbShopSign::
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
	end

LavaridgeTown_Text_MayNiceBadgesTakeThis:
	.string "MAIKE: {PLAYER}{KUN}! Wir haben uns\n"
	.string "lange nicht gesehen!\p"
	.string "Oh? Als ich die Heißen Quellen aufge-\n"
	.string "sucht habe, habe ich den ORDEN der\p"
	.string "ARENA von BAD LAVASTADT erhalten.\n"
	.string "Du hast anscheinend viele POKéMON\p"
	.string "gefangen… Äh, ich meine, du hast ja\n"
	.string "schon einige POKéMON aufgezogen. \p"
	.string "Ich denke, das hier wirst du gut\n"
	.string "gebrauchen können.$"

LavaridgeTown_Text_MayExplainGoGogglesChallengeDad:
	.string "MAIKE: Mit diesem WÜSTENGLAS wirst du\n"
	.string "keine Probleme haben, durch die Wüste\l"
	.string "in der Nähe von ROUTE 111 zu gehen.\p"
	.string "Aber, wow, {PLAYER}{KUN}…\n"
	.string "In ARENen antreten…\p"
	.string "Du strengst dich bestimmt sehr an,\l"
	.string "weil\n"
	.string "du nicht gegen mich verlieren willst!\p"
	.string "\p"
	.string "{PLAYER}{KUN}, ich glaube, ich sollte\n"
	.string "deinen\n"
	.string "Vater in der ARENA von BLÜTENBURG\l"
	.string "CITY herausfordern.\p"
	.string "{PLAYER}{KUN}, man sieht sich!$"

LavaridgeTown_Text_BrendanNiceBadgesTakeThis:
	.string "BRIX: {PLAYER}, wie geht es dir?\p"
	.string "Hmm… Das ist eine beachtliche\n"
	.string "Sammlung von ORDEN.\p"
	.string "Also gut.\n"
	.string "Hier, dies schenke ich dir.$"

LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad:
	.string "BRIX: Nimm das mit, wenn du in die\n"
	.string "Wüste in der Nähe von ROUTE 111\n"
	.string "willst. \p"
	.string "Da sollten sich einige POKéMON fangen\n"
	.string "lassen, die Wüstenbewohner sind. Schau\l"
	.string "dich nach ihnen um.\p"
	.string "Und ich…\n"
	.string "Ich werde wohl NORMAN, den ARENALEITER\l"
	.string "in BLÜTENBURG CITY, herausfordern.\p"
	.string "Im Gegensatz zu dir, macht dein Vater\n"
	.string "einen sehr starken Eindruck.\p"
	.string "Man sieht sich!$"

LavaridgeTown_Text_HaveEggWillYouTakeIt:
	.string "Ich habe hier ein EI.\p"
	.string "Ich dachte, ich könnte es ausbrüten,\n"
	.string "indem ich es im heißen Sand bei den\p"
	.string "Heißen Quellen vergrabe. Aber das\n"
	.string "reicht offensichtlich nicht aus.\p"
	.string "Jemand erzählte mir, dass man es\n"
	.string "zusammen mit den POKéMON tragen\l"
	.string "soll.\p"
	.string "Du bist ein TRAINER, nicht wahr? Und\n"
	.string "deine POKéMON strahlen Vitalität aus.\n"
	.string "\p"
	.string "So, was meinst du? Wirst du das EI\n"
	.string "mit-\l"
	.string "nehmen und zum Ausschlüpfen bringen?$"

LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg:
	.string "Gut! Ich hoffe, du hast mehr Glück\n"
	.string "mit diesem EI!$"

LavaridgeTown_Text_ReceivedTheEgg:
	.string "{PLAYER} erhält ein EI.$"

LavaridgeTown_Text_NoRoomForThisEgg:
	.string "Oh! Du hast zu viele POKéMON dabei.\n"
	.string "Du hast keinen Platz für das EI…$"

LavaridgeTown_Text_AsYouWishThen:
	.string "Ganz, wie du willst…\p"
	.string "Wenn dein Herz sich anders entscheidet\n"
	.string "und das EI haben möchte, ich bin hier.$"

LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare:
	.string "Von Zeit zu Zeit findet man in der\n"
	.string "PENSION ein EI.\p"
	.string "So zumindest erzählt man es sich.$"

LavaridgeTown_Text_HotSpringsNeverRunDry:
	.string "Wir nehmen uns so viel heißes Wasser,\n"
	.string "wie wir brauchen, und trotzdem\n"
	.string "trocknen\l"
	.string "die Heißen Quellen nicht aus.\p"
	.string "Ist das nicht schon fast Magie?\p"
	.string "Diese Heißen Quellen bilden sich in\n"
	.string "der\n"
	.string "Nähe von aktiven Vulkanen. Wasseradern\l"
	.string "im Boden werden durch das Magma\l"
	.string "erhitzt und kommen als heiße Quellen\l"
	.string "an die Erdoberfläche.$"

LavaridgeTown_Text_PokemonNippedBackside:
	.string "Hier im heißen Sand vergraben zu sein,\n"
	.string "ist…  Seufz…\p"
	.string "So warm und einfach himmlisch… Seufz…\n"
	.string "\p"
	.string "Äh? Gyaah! Aua!\p"
	.string "Ein POKéMON hat meinen Rücken ange-\n"
	.string "knabbert!$"

LavaridgeTown_Text_OhYouLikeHotSprings:
	.string "Ach, du magst auch heiße Quellen?\p"
	.string "Das ist überraschend bei einem so\n"
	.string "jungen Menschen wie dir.$"

LavaridgeTown_Text_BatheInHotSpringsEveryDay:
	.string "Ich bade jeden Tag in den\n"
	.string "Heißen Quellen.\p"
	.string "Ich will ein wunderschöner und starker\n"
	.string "ARENALEITER wie FLAVIA werden.$"

LavaridgeTown_Text_IfPokemonInHotSprings:
	.string "Wenn Leute ihre POKéMON in die Heißen\n"
	.string "Quellen setzen, ist das schon\l"
	.string "merkwürdig.\p"
	.string "Nun, es könnte auch ein Bad in\n"
	.string "Elektrizität, ein Schaumbad oder sogar\l"
	.string "ein Bad in Lava sein…$"

LavaridgeTown_Text_HotSpringsClaims:
	.string "Man sagt, diese Heißen Quellen seien\n"
	.string "gut gegen nervliche Anspannungen, ge-\l"
	.string "gen Muskelkrämpfe, sie sollen bei\l"
	.string "romantischen Problemen helfen und\l"
	.string "auch bei Geldsorgen…$"

LavaridgeTown_Text_TownSign:
	.string "BAD LAVASTADT\p"
	.string "“POKéMON-CENTER - HEISSE QUELLEN\n"
	.string "Der ideale Ort zum Entspannen!”$"

LavaridgeTown_Text_GymSign:
	.string "POKéMON ARENA von BAD LAVASTADT\n"
	.string "LEITERIN: FLAVIA\l"
	.string "“Die mit der brennenden Leidenschaft!”$"

LavaridgeTown_Text_HerbShopSign:
	.string "POKéMON KRÄUTERLADEN\n"
	.string "“Bitterer Geschmack - Bessere Kur!”$"


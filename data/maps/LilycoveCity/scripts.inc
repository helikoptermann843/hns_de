LilycoveCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_OnLoad
	.byte 0

LilycoveCity_OnTransition:
	setflag FLAG_VISITED_LILYCOVE_CITY
	setvar VAR_CONTEST_HALL_STATE, 0
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	call Common_EventScript_SetupRivalGfxId
	end

LilycoveCity_OnLoad:
	call_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_SetWailmerMetatiles
	end

LilycoveCity_EventScript_SetWailmerMetatiles::
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, TRUE
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, TRUE
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, TRUE
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, TRUE
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, TRUE
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, TRUE
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, TRUE
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, TRUE
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, TRUE
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, TRUE
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, TRUE
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, TRUE
	return

LilycoveCity_EventScript_BerryGentleman::
	lock
	faceplayer
	dotimebasedevents
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_ReceivedBerry
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
	random 10
	addvar VAR_RESULT, FIRST_BERRY_INDEX
	giveitem VAR_RESULT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_ReceivedBerry::
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Man3::
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
	end

LilycoveCity_EventScript_Girl::
	lock
	faceplayer
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_GirlAquaGone
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_GirlAquaGone::
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_RichBoy::
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
	end

LilycoveCity_EventScript_Sailor2::
	lock
	faceplayer
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2AquaGone
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Sailor2AquaGone::
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Woman2::
	lock
	faceplayer
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2AquaGone
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Woman2AquaGone::
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Man2::
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
	end

LilycoveCity_EventScript_ExpertM1::
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
	end

LilycoveCity_EventScript_ExpertF::
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
	end

LilycoveCity_EventScript_ExpertM2::
	lock
	faceplayer
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2AquaGone
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_ExpertM2AquaGone::
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
	release
	end

LilycoveCity_EventScript_Sailor1::
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
	end

LilycoveCity_EventScript_FatMan::
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
	end

LilycoveCity_EventScript_Man1::
	lockall
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
	applymovement LOCALID_LILYCOVE_MAN_1, Common_Movement_FaceOriginalDirection
	end

LilycoveCity_EventScript_Woman1::
	lockall
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
	applymovement LOCALID_LILYCOVE_WOMAN_1, Common_Movement_FaceOriginalDirection
	end

LilycoveCity_EventScript_CitySign::
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_ContestHallSign::
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_MotelSign::
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_MuseumSign::
	lockall
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
	switch VAR_0x8004
	case 0, LilycoveCity_EventScript_MuseumSignNoPaintings
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_MuseumSignNoPaintings::
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_HarborSign::
	lockall
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSignFerryReady
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_HarborSignFerryReady::
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_TrainerFanClubSign::
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_DepartmentStoreSign::
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_MoveDeletersHouseSign::
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
	end

LilycoveCity_EventScript_WailmerTrainerGrunt::
	lockall
	goto_if_set FLAG_MET_WAILMER_TRAINER, LilycoveCity_EventScript_MetWailmerTrainer
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LilycoveCity_Text_GetLostMessingUpTraining, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	setflag FLAG_MET_WAILMER_TRAINER
	releaseall
	end

LilycoveCity_EventScript_MetWailmerTrainer::
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
	releaseall
	end

LilycoveCity_EventScript_AquaGrunt1::
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_NPC
	end

LilycoveCity_EventScript_AquaGrunt2::
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_NPC
	end

LilycoveCity_EventScript_AquaGrunt3::
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
	end

LilycoveCity_EventScript_AquaGrunt4::
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
	end

LilycoveCity_EventScript_Rival::
	lock
	faceplayer
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, LilycoveCity_EventScript_May
	goto_if_eq VAR_RESULT, FEMALE, LilycoveCity_EventScript_Brendan
	end

LilycoveCity_EventScript_May::
	playbgm MUS_ENCOUNTER_MAY, TRUE
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattleAgain
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattle
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineMayBattle
	msgbox LilycoveCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, LilycoveCity_EventScript_BattleMayTreecko
	case 1, LilycoveCity_EventScript_BattleMayTorchic
	case 2, LilycoveCity_EventScript_BattleMayMudkip
	end

LilycoveCity_EventScript_MayAskToBattleAgain::
	msgbox LilycoveCity_Text_MayBattleMe, MSGBOX_YESNO
	return

LilycoveCity_EventScript_MayAskToBattle::
	msgbox LilycoveCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
	return

LilycoveCity_EventScript_DeclineMayBattle::
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
	msgbox LilycoveCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end

LilycoveCity_EventScript_Brendan::
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattleAgain
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattle
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineBrendanBattle
	msgbox LilycoveCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, LilycoveCity_EventScript_BattleBrendanTreecko
	case 1, LilycoveCity_EventScript_BattleBrendanTorchic
	case 2, LilycoveCity_EventScript_BattleBrendanMudkip
	end

LilycoveCity_EventScript_BrendanAskToBattleAgain::
	msgbox LilycoveCity_Text_BrendanBattleMe, MSGBOX_YESNO
	return

LilycoveCity_EventScript_BrendanAskToBattle::
	msgbox LilycoveCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
	return

LilycoveCity_EventScript_DeclineBrendanBattle::
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
	msgbox LilycoveCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end

LilycoveCity_EventScript_BattleMayTreecko::
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TREECKO, LilycoveCity_Text_MayDefeat
	goto LilycoveCity_EventScript_DefeatedMay
	end

LilycoveCity_EventScript_BattleMayTorchic::
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, LilycoveCity_Text_MayDefeat
	goto LilycoveCity_EventScript_DefeatedMay
	end

LilycoveCity_EventScript_BattleMayMudkip::
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_MUDKIP, LilycoveCity_Text_MayDefeat
	goto LilycoveCity_EventScript_DefeatedMay
	end

LilycoveCity_EventScript_BattleBrendanTreecko::
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, LilycoveCity_Text_BrendanDefeat
	goto LilycoveCity_EventScript_DefeatedBrendan
	end

LilycoveCity_EventScript_BattleBrendanTorchic::
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TORCHIC, LilycoveCity_Text_BrendanDefeat
	goto LilycoveCity_EventScript_DefeatedBrendan
	end

LilycoveCity_EventScript_BattleBrendanMudkip::
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_MUDKIP, LilycoveCity_Text_BrendanDefeat
	goto LilycoveCity_EventScript_DefeatedBrendan
	end

LilycoveCity_EventScript_DefeatedMay::
	msgbox LilycoveCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
	setvar VAR_RESULT, FALSE
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_MayCollectBadges
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_MayPokemonLeague
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
	goto LilycoveCity_EventScript_RivalFlyAway
	end

LilycoveCity_EventScript_CheckFinalBadge::
	goto_if_set FLAG_BADGE08_GET, LilycoveCity_EventScript_HasFinalBadge
	return

LilycoveCity_EventScript_HasFinalBadge::
	setvar VAR_RESULT, TRUE
	return

LilycoveCity_EventScript_MayCollectBadges::
	msgbox LilycoveCity_Text_MayYouGoingToCollectBadges, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_MayPokemonLeague::
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_MayBattleFrontier
	msgbox LilycoveCity_Text_MayYouGoingToPokemonLeague, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_MayBattleFrontier::
	msgbox LilycoveCity_Text_MayYouGoingToBattleFrontier, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_DefeatedBrendan::
	msgbox LilycoveCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
	setvar VAR_RESULT, FALSE
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_BrendanCollectBadges
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_BrendanPokemonLeague
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
	goto LilycoveCity_EventScript_RivalFlyAway
	end

LilycoveCity_EventScript_BrendanCollectBadges::
	msgbox LilycoveCity_Text_BrendanYouGoingToCollectBadges, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_BrendanPokemonLeague::
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_BrendanBattleFrontier
	msgbox LilycoveCity_Text_BrendanYouGoingToPokemonLeague, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_BrendanBattleFrontier::
	msgbox LilycoveCity_Text_BrendanYouGoingToBattleFrontier, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_RivalFlyAway::
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 50
	setfieldeffectargument 0, 1
	dofieldeffect FLDEFF_NPCFLY_OUT
	delay 15
	removeobject VAR_LAST_TALKED
	waitfieldeffect FLDEFF_NPCFLY_OUT
	savebgm MUS_DUMMY
	fadedefaultbgm
	setflag FLAG_MET_RIVAL_LILYCOVE
	release
	end

LilycoveCity_EventScript_SchoolKidM::
	lock
	faceplayer
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
	call_if_eq VAR_RESULT, YES, LilycoveCity_EventScript_KnowAboutBerryBlender
	call_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DontKnowAboutBerryBlender
	release
	end

LilycoveCity_EventScript_KnowAboutBerryBlender::
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
	return

LilycoveCity_EventScript_DontKnowAboutBerryBlender::
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
	return

LilycoveCity_Text_MayShoppingLetsBattle:
	.string "MAIKE: Oh, hey?\n"
	.string "{PLAYER}{KUN}, bist du auch am\n"
	.string "Einkaufen? \p"
	.string "Ich habe eine Menge PUPPEn und POSTER\n"
	.string "gekauft.\p"
	.string "Natürlich habe ich auch POKéMON\n"
	.string "gefangen und die ziehe ich geradezu\l"
	.string "vorbildlich auf.\p"
	.string "Ich habe eher Bedenken, dass du dich\l"
	.string "um\n"
	.string "deine POKéMON nicht richtig kümmerst.\p"
	.string "\p"
	.string "Ich werde gegen dich kämpfen, dann\n"
	.string "sehe ich, ob du sie gut behandelst.$"

LilycoveCity_Text_MayNotRaisingPokemon:
	.string "MAIKE: Oh, hui. Hast du dich denn\n"
	.string "nicht um deine POKéMON gekümmert,\n"
	.string "{PLAYER}{KUN}? \p"
	.string "Als Trainer machst du wirklich keinen\n"
	.string "guten Eindruck!$"

LilycoveCity_Text_MayBattleMe:
	.string "MAIKE: Komm, kämpfe mit mir, dann kann\n"
	.string "ich deine POKéMON beurteilen.$"

LilycoveCity_Text_MayWontBeBeaten:
	.string "MAIKE: Die POKéMON, die ich aufgezogen\n"
	.string "habe, sind mit Sicherheit unbesiegbar.$"

LilycoveCity_Text_MayDefeat:
	.string "… … … … … … … …\p"
	.string "Ich kann mich noch gut an unseren\n"
	.string "Kampf auf der ROUTE 103 erinnern,\l"
	.string "{PLAYER}{KUN}.\p"
	.string "Dieser Kampf hat dir enorm geholfen,\n"
	.string "stärker zu werden, oder?$"

LilycoveCity_Text_MayGoingBackToLittleroot:
	.string "MAIKE: Ich überlege, ob ich bald nach\n"
	.string "WURZELHEIM zurückgehe.\p"
	.string "Ich habe eine anständige Gruppe von\n"
	.string "POKéMON gefangen und mein POKéDEX\p"
	.string "sieht immer besser aus. Ich gehe nach\n"
	.string "Hause und zeige das meinem Papa.$"

LilycoveCity_Text_MayYouGoingToCollectBadges:
	.string "{PLAYER}{KUN}, was wirst du machen?\p"
	.string "Alle ORDEN der ARENen sammeln und die\n"
	.string "POKéMON LIGA herausfordern?\p"
	.string "Nun, während du deine ORDEN sammelst,\n"
	.string "werde ich weiter an meinem POKéDEX\l"
	.string "arbeiten. Ich werde ihn eher\l"
	.string "vollständig haben als du, wetten?\p"
	.string "Bis dann!$"

LilycoveCity_Text_MayYouGoingToPokemonLeague:
	.string "Und, {PLAYER}{KUN}, was wirst du\n"
	.string "machen? \p"
	.string "Wirst du die POKéMON LIGA heraus-\n"
	.string "fordern?\p"
	.string "Oder wirst du deinen POKéDEX vervoll-\n"
	.string "ständigen?\p"
	.string "Ich habe gegen dich verloren, aber den\n"
	.string "POKéDEX werde ich eher vollständig\l"
	.string "haben als du!\p"
	.string "Man sieht sich!$"

LilycoveCity_Text_MayYouGoingToBattleFrontier:
	.string "Und, {PLAYER}{KUN}, was wirst du\n"
	.string "machen? \p"
	.string "Wirst du zur KAMPFZONE gehen?\p"
	.string "Oder wirst du deinen POKéDEX vervoll-\n"
	.string "ständigen?\p"
	.string "Ich habe gegen dich verloren, aber den\n"
	.string "POKéDEX werde ich eher vollständig\l"
	.string "haben als du!\p"
	.string "Man sieht sich!$"

LilycoveCity_Text_BrendanShoppingLetsBattle:
	.string "BRIX: Oh, du bist es, {PLAYER}.\p"
	.string "Ich mache Besorgungen für meinen\n"
	.string "Vater. Nein, ich kaufe keine PUPPEn!\p"
	.string "Wir haben uns lange nicht mehr\n"
	.string "gesehen. \p"
	.string "Sollen wir kämpfen, um zu sehen, wer\n"
	.string "seine POKéMON besser trainiert?$"

LilycoveCity_Text_BrendanNoConfidence:
	.string "BRIX: Oh, hast du ein Problem? Nicht\n"
	.string "genügend Selbstbewusstsein, was?$"

LilycoveCity_Text_BrendanBattleMe:
	.string "BRIX: Sollen wir kämpfen, um zu\n"
	.string "sehen, wer seine POKéMON besser\l"
	.string "trainiert?$"

LilycoveCity_Text_BrendanWontBeBeaten:
	.string "BRIX: Aah, ich werde doch nicht\n"
	.string "gegen {PLAYER} verlieren! Niemals!$"

LilycoveCity_Text_BrendanDefeat:
	.string "Ach… Du hast dich stark verbessert.\p"
	.string "Das schmerzt - und dabei hatte ich als\n"
	.string "TRAINER sogar einen Vorsprung…$"

LilycoveCity_Text_BrendanGoingBackToLittleroot:
	.string "BRIX: Ich…\n"
	.string "Ich gehe nach Hause, nach WURZELHEIM.\n"
	.string "\p"
	.string "Weißt du, ich helfe meinem Vater bei\n"
	.string "dem\n"
	.string "POKéDEX. Es geht ganz anständig voran\l"
	.string "und ich sollte ihm das mal zeigen.$"

LilycoveCity_Text_BrendanYouGoingToCollectBadges:
	.string "Und, {PLAYER}, was wirst du tun?\p"
	.string "Wirst du alle ORDEN der ARENen sammeln\n"
	.string "und die POKéMON LIGA herausfordern?\p"
	.string "Vielleicht werde ich das auch machen…\n"
	.string "\p"
	.string "Gut, bleib am Ball!$"

LilycoveCity_Text_BrendanYouGoingToPokemonLeague:
	.string "Und, {PLAYER}, was wirst du tun?\p"
	.string "Da du so stark geworden bist, wirst du\n"
	.string "die POKéMON LIGA herausfordern?\p"
	.string "Hey, ich habe meine POKéMON bestimmt\n"
	.string "viel besser trainiert und sollte\l"
	.string "eigentlich stärker sein als du…\p"
	.string "Nun ja, bleib am Ball!$"

LilycoveCity_Text_BrendanYouGoingToBattleFrontier:
	.string "Und, {PLAYER}, was machst du nun?\p"
	.string "Wirst du zur KAMPFZONE gehen?\p"
	.string "Oder wirst du deinen POKéDEX\n"
	.string "vervollständigen?\p"
	.string "Da du so stark geworden bist, solltest\n"
	.string "du zur KAMPFZONE gehen.\p"
	.string "Häh, wenn ich meine POKéMON besser\n"
	.string "trainiere, sollte ich eigentlich\n"
	.string "stärker\l"
	.string "werden als du…\p"
	.string "Vielleicht sollte ich zur KAMPFZONE\n"
	.string "gehen.\p"
	.string "Wie dem auch sei… Bleib am Ball!$"

LilycoveCity_Text_MovedLootIntoHideoutToday:
	.string "Hähähä…\p"
	.string "Heute haben wir noch mehr Beute in\n"
	.string "unser VERSTECK gebracht…\p"
	.string "We…wer bist du denn??? Ich… äh, habe\n"
	.string "mit mir selbst gesprochen!$"

LilycoveCity_Text_ChanceToDoBigThings:
	.string "Ich bin nur ein RÜPEL, ich weiß nicht,\n"
	.string "was unser BOSS so vorhat…\p"
	.string "Aber als Mitglied von TEAM AQUA habe\n"
	.string "ich die Möglichkeit, große Dinge zu\n"
	.string "tun! \p"
	.string "Ww…wer bist du denn??? I-Ich… hähähä,\n"
	.string "habe nur mit mir selber gesprochen!$"

LilycoveCity_Text_DontGoNearCaveInCove:
	.string "Hey, du da!\p"
	.string "Komm bloß nicht in die Nähe der Höhle\n"
	.string "in der Bucht!\p"
	.string "Warum nicht? Das geht dich nichts an!\n"
	.string "Ich bin ein Erwachsener, also\l"
	.string "gehorche!$"

LilycoveCity_Text_IfWorldBecomesOurs:
	.string "Wenn die ganze Welt erst einmal uns\n"
	.string "gehört, TEAM AQUA, dann wird sie\l"
	.string "ein besserer Ort für POKéMON sein.$"

LilycoveCity_Text_WailmerLeapOutOfWater:
	.string "Hier, WAILMER!!!\n"
	.string "Springt aus dem Wasser!$"

LilycoveCity_Text_GetLostMessingUpTraining:
	.string "Häh? Was willst du?\p"
	.string "Du störst uns beim Training, also\n"
	.string "würde\l"
	.string "ich vorschlagen, du verschwindest!$"

LilycoveCity_Text_ContestHallInTown:
	.string "Hier gibt es eine POKéMON WETTBEWERBs-\n"
	.string "HALLE.\p"
	.string "Und das bedeutet, dass gut\n"
	.string "aufgezogene POKéMON aus dem ganzen\l"
	.string "Land zu sehen sind.\p"
	.string "Mein Herz strömt über vor\n"
	.string "Begeisterung!$"

LilycoveCity_Text_StrangeCaveInCove:
	.string "Hast du die seltsame Höhle in der\n"
	.string "Bucht am Ende des Ortes gesehen?$"

LilycoveCity_Text_GoingToMoveDeleterForHMs:
	.string "Ich werde meinem POKéMON einige neue\n"
	.string "Attacken für den WETTBEWERB\l"
	.string "beibringen.\p"
	.string "Daher werde ich den ATTACKEN-\n"
	.string "VERLERNER besuchen, damit einige\l"
	.string "VMs verlernt werden.$"

LilycoveCity_Text_ImFromKanto:
	.string "Ich komme aus KANTO.\p"
	.string "Die HOENN-Region ist wunderschön mit\n"
	.string "all dem Wasser und dem Grün.\p"
	.string "Hey, warte mal!\p"
	.string "Ob es seltene POKéMON gibt, die nur in\n"
	.string "dieser Region leben???$"

LilycoveCity_Text_TeamAquaBeenTrainingWailmer:
	.string "TEAM AQUA trainiert seine WAILMER\n"
	.string "drüben in der Bucht.\p"
	.string "Wir MATROSEN können nicht auslaufen,\n"
	.string "da sie uns im Weg sind.$"

LilycoveCity_Text_SomeonePuntedTeamAquaOut:
	.string "Ahoi, hast du das mitbekommen?\p"
	.string "Jemand hat für uns TEAM AQUA aus\n"
	.string "unserer Fahrrinne verjagt!\p"
	.string "Die WAILMER befinden sich nicht mehr\n"
	.string "in\l"
	.string "der Bucht und wir haben freie Fahrt.$"

LilycoveCity_Text_SomeoneStoleMyPokemon:
	.string "Ich habe ein entspannendes Nickerchen\n"
	.string "im Gasthof am Meer gehalten. Das\l"
	.string "Rauschen der Wellen war so angenehm.\p"
	.string "Und da hat mir jemand mein POKéMON\n"
	.string "gestohlen!\p"
	.string "Wer ist der schändliche Dieb?\n"
	.string "TEAM AQUA? Es war TEAM AQUA?!?$"

LilycoveCity_Text_MissingPokemonCameBack:
	.string "Mein gestohlenes POKéMON…\n"
	.string "Es kam zurück, ohne dass ich es\l"
	.string "merkte.$"

LilycoveCity_Text_ImArtDealer:
	.string "Ich bin ein KUNSTHÄNDLER.\p"
	.string "Ich kaufe und verkaufe Kunstgegen-\n"
	.string "stände. Vorzugsweise Gemälde.\p"
	.string "Ich habe gehört, dass das hiesige\n"
	.string "MUSEUM ständig erstklassige Werke\l"
	.string "ausstellt.$"

LilycoveCity_Text_SeaRemainsForeverYoung:
	.string "Auch wenn ich alt und grau werde, das\n"
	.string "Meer wird immer jung und voll von\n"
	.string "Leben\l"
	.string "sein…\p"
	.string "Hahahahaha… Haaahahahaha…$"

LilycoveCity_Text_SixtyYearsAgoHusbandProposed:
	.string "Vor 60 Jahren hat mein Mann hier um\n"
	.string "meine Hand angehalten. Und das Meer\l"
	.string "ist immer noch genauso schön.\p"
	.string "Hahahahaha… Haaahahahaha…$"

LilycoveCity_Text_TeamAquaRenovatedCavern:
	.string "Hm, kennst du diese besondere Höhle in\n"
	.string "der Bucht?\p"
	.string "Das ist eine natürliche Formation,\n"
	.string "aber\n"
	.string "TEAM AQUA kam und hat das Aussehen\l"
	.string "verändert.\p"
	.string "Sie nennen sich selber “Naturliebendes\n"
	.string "TEAM AQUA”!\p"
	.string "Aber was sie sagen und was sie tun,\n"
	.string "passt überhaupt nicht zusammen!$"

LilycoveCity_Text_TeamAquaLotGoneForGood:
	.string "Die Höhle in der Bucht…\p"
	.string "Es ist mir erst gar nicht aufgefallen,\n"
	.string "aber sie ist völlig leer.\p"
	.string "TEAM AQUA muss verschwunden sein.$"

LilycoveCity_Text_CitySign:
	.string "SEEGRASULB CITY\p"
	.string "“Wo das Land endet und das\n"
	.string "Meer beginnt.”$"

LilycoveCity_Text_ContestHallSign:
	.string "POKéMON WETTBEWERBSHALLE\n"
	.string "“Der Treffpunkt für TRAINER.”$"

LilycoveCity_Text_MotelSign:
	.string "GRASSEE MOTEL\p"
	.string "“Behalte uns als Rose von\n"
	.string "SEEGRASULB CITY in Erinnerung.”$"

LilycoveCity_Text_MuseumSign:
	.string "SEEGRASULB CITY MUSEUM\p"
	.string "“Ausstellung von\n"
	.string "POKéMON-Meisterwerken!”$"

LilycoveCity_Text_MuseumSignPlayersExhibit:
	.string "SEEGRASULB CITY MUSEUM\p"
	.string "“Aktuelle Ausstellung:\n"
	.string "Die POKéMON-Sammlung von {PLAYER}!”$"

LilycoveCity_Text_HarborSignUnderConstruction:
	.string "HAFEN SEEGRASULB CITY\p"
	.string "“Die Fähre MS TIDE wird momentan\n"
	.string "in der WERFT gebaut.\p"
	.string "Die Fähre wird so bald wie möglich\n"
	.string "ihren Dienst aufnehmen.”$"

LilycoveCity_Text_HarborSign:
	.string "HAFEN SEEGRASULB CITY\p"
	.string "“Genießen Sie die entspannende Fahrt\n"
	.string "mit der Fähre MS TIDE.”$"

LilycoveCity_Text_TrainerFanClubSign:
	.string "POKéMON TRAINER-FANCLUB\p"
	.string "Die Namen von TRAINERn sind auf dem\n"
	.string "Schild eingeritzt…$"

LilycoveCity_Text_DepartmentStoreSign:
	.string "SEEGRASULB CITY EINKAUFSZENTRUM\p"
	.string "“Ein Überfluss an Waren und\n"
	.string "Überraschungen!\p"
	.string "Ein Ort, an dem man alles findet, was\n"
	.string "das Herz begehrt!”$"

LilycoveCity_Text_MoveDeletersHouseSign:
	.string "HAUS des ATTACKEN-VERLERNERS\p"
	.string "“Hier werden POKéMON-Attacken\n"
	.string "verlernt.”$"

LilycoveCity_Text_DoYouKnowAboutBerryBlender:
	.string "Hast du schon mal etwas über den\n"
	.string "BEERENMIXER gehört?$"

LilycoveCity_Text_FasterSpinBetterPokeblocks:
	.string "Man muss mit anderen zusammenarbeiten,\n"
	.string "um ihn schneller drehen zu können.\p"
	.string "Ich habe gehört, je schneller man ihn\n"
	.string "dreht, desto besser werden die\l"
	.string "{POKEBLOCK}.$"

LilycoveCity_Text_ExplainBerryBlender:
	.string "Damit stellt man eine Leckerei her,\n"
	.string "die {POKEBLOCK} genannt wird.\p"
	.string "Wenn du einem POKéMON einen guten\n"
	.string "{POKEBLOCK} gibst, verbessern sich\n"
	.string "seine\l"
	.string "Eigenschaften.$"

LilycoveCity_Text_HeardTowerCalledSkyPillar:
	.string "Ich habe gehört, dass draußen auf dem\n"
	.string "Seeweg ein Turm sein soll.\p"
	.string "Er soll HIMMELTURM heißen.$"

LilycoveCity_Text_SawTallTowerOnRoute131:
	.string "Ich habe einen großen Turm in der Nähe\n"
	.string "der ROUTE 131 gesehen.\p"
	.string "Ist das der…$"

LilycoveCity_Text_JustArrivedAndSawRarePokemon:
	.string "Wir sind in den Flitterwochen und\n"
	.string "gerade hier angekommen.\p"
	.string "Wir haben ein DRACHEn-POKéMON\n"
	.string "gesehen, das am Himmel flog.\p"
	.string "Leben in der HOENN-Region viele\n"
	.string "solcher coolen POKéMON?$"

LilycoveCity_Text_HoneymoonVowToSeeRarePokemon:
	.string "Wir haben uns vorgenommen, in unseren\n"
	.string "Flitterwochen so viele seltene POKéMON\l"
	.string "zu sehen, wie es eben geht.\p"
	.string "Daher waren wir auch total glücklich,\n"
	.string "als wir gleich nach unserer Ankunft\l"
	.string "dieses POKéMON zu Gesicht bekamen.\p"
	.string "Ich meine, wir waren wirklich\n"
	.string "glücklich!$"


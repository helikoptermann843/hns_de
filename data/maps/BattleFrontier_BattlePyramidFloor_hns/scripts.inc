BattleFrontier_BattlePyramidFloor_hns_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePyramidFloor_OnResume_hns
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidFloor_OnFrame_hns
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePyramidFloor_OnTransition_hns
	.byte 0

BattleFrontier_BattlePyramidFloor_OnFrame_hns:
	map_script_2 VAR_TEMP_D, 1, BattleFrontier_BattlePyramidFloor_EventScript_UpdateLight_hns
	map_script_2 VAR_TEMP_PLAYING_PYRAMID_MUSIC, 0, BattleFrontier_BattlePyramidFloor_EventScript_PlayPyramidMusic_hns
	map_script_2 VAR_TEMP_F, 1, BattleFrontier_BattlePyramidFloor_EventScript_ShowMapName_hns
	.2byte 0

BattleFrontier_BattlePyramidFloor_EventScript_UpdateLight_hns::
	lockall
	@ pyramid_updatelight, cant use macro because it straddles the loop
	setvar VAR_0x8004, BATTLE_PYRAMID_FUNC_UPDATE_LIGHT
	setvar VAR_0x8005, 4
	setvar VAR_0x8006, PYRAMID_LIGHT_INCR_RADIUS
	setvar VAR_0x8007, SE_SAVE
	setvar VAR_RESULT, 0
BattleFrontier_BattlePyramidFloor_EventScript_UpdateLight_hnsLoop_hns::
	special CallBattlePyramidFunction
	delay 2
	goto_if_ne VAR_RESULT, 2, BattleFrontier_BattlePyramidFloor_EventScript_UpdateLight_hnsLoop_hns
	setvar VAR_TEMP_D, 0
	releaseall
	end

BattleFrontier_BattlePyramidFloor_EventScript_ShowMapName_hns::
	special ShowMapNamePopup
	setvar VAR_TEMP_F, 0
	end

BattleFrontier_BattlePyramidFloor_EventScript_PlayPyramidMusic_hns::
	playbgm MUS_B_PYRAMID, FALSE
	setvar VAR_TEMP_PLAYING_PYRAMID_MUSIC, 1
	end

BattleFrontier_BattlePyramidFloor_OnResume_hns:
	pyramid_setfloorpal
	frontier_getstatus
	switch VAR_TEMP_CHALLENGE_STATUS
	case 0, BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge_hns
	case CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramid_EventScript_WarpToLobby_hns
	case CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge_hns
	frontier_get FRONTIER_DATA_BATTLE_OUTCOME
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty_hns
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty_hns
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty_hns
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, BattleFrontier_BattlePyramid_EventScript_WarpToLobby_hnsLost_hns
	goto_if_eq VAR_RESULT, B_OUTCOME_DREW, BattleFrontier_BattlePyramid_EventScript_WarpToLobby_hnsLost_hns
	goto_if_eq VAR_RESULT, B_OUTCOME_FORFEITED, BattleFrontier_BattlePyramid_EventScript_WarpToLobby_hnsLost_hns
	frontier_isbattletype BATTLE_TYPE_TRAINER  @ VAR_RESULT seems to be ignored here
	setvar VAR_TEMP_D, 1
BattleFrontier_BattlePyramidFloor_EventScript_ResetParty_hns::
	pyramid_resetparty
	end

BattleFrontier_BattlePyramid_EventScript_WarpToLobby_hnsLost_hns::
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
	pyramid_set PYRAMID_DATA_TRAINER_FLAGS, 255
BattleFrontier_BattlePyramid_EventScript_WarpToLobby_hns::
	pyramid_updatelight 0, PYRAMID_LIGHT_SET_RADIUS
	pyramid_clearhelditems
	special HealPlayerParty
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY_HNS, 7, 13
	waitstate
	end

BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge_hns::
	pyramid_save CHALLENGE_STATUS_SAVING
	special SavePlayerParty
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	pyramid_settrainers
	frontier_setpartyorder FRONTIER_PARTY_SIZE
	setvar VAR_TEMP_F, 1
	end

BattleFrontier_BattlePyramidFloor_OnTransition_hns:
	call BattleFrontier_BattlePyramidFloor_EventScript_SetLightRadius_hns
	setvar VAR_TEMP_F, 1
	end

BattleFrontier_BattlePyramidFloor_EventScript_SetLightRadius_hns::
	pyramid_updatelight 32, PYRAMID_LIGHT_SET_RADIUS
	return

BattlePyramid_WarpToNextFloor_hns::
	call BattleFrontier_EventScript_IncrementWinStreak
	frontier_get FRONTIER_DATA_BATTLE_NUM  @ Floor number
	addvar VAR_RESULT, 1
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
	goto_if_eq VAR_RESULT, 7, BattlePyramid_WarpToTop_hns
	pyramid_seedfloor
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	setvar VAR_RESULT, 0
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_FLOOR_HNS, 1, 1
	waitstate
	end

BattlePyramid_WarpToTop_hns::
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_TOP_HNS, 17, 17
	waitstate
	end

@ TRAINER_PHILLIP is used as a placeholder
BattlePyramid_TrainerBattle_hns::
	facilitytrainerbattle FACILITY_BATTLE_PYRAMID
	pyramid_showhint
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

BattlePyramid_FindItemBall_hns::
	pyramid_setitem
	callstd STD_FIND_ITEM
	goto_if_eq VAR_0x8007, 0, BattlePyramid_FindItemBall_hnsEnd_hns
	pyramid_hideitem
BattlePyramid_FindItemBall_hnsEnd_hns::
	end

BattlePyramid_Retire_hns::
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobby_hnsLost_hns

@ Also used by Trainer Hill
BattleFacility_TrainerBattle_PlaceholderText_hns:
	.string "Dies ist ein Beispiel.$"

gText_BattlePyramidConfirmRest_hns::
	.string "Dein Abenteuer in der KAMPFPYRAMIDE\n"
	.string "wird gespeichert, damit du es\l"
	.string "unterbrechen kannst. Einverstanden?$"

gText_BattlePyramidConfirmRetire_hns::
	.string "Möchtest du das Abenteuer in der\n"
	.string "KAMPFPYRAMIDE wirklich unterbrechen?$"

BattlePyramid_Text_ExitHintUp1_hns::
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {UP_ARROW}$"

BattlePyramid_Text_ExitHintLeft1_hns::
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {UP_ARROW}$"

BattlePyramid_Text_ExitHintRight1_hns::
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {UP_ARROW}$"

BattlePyramid_Text_ExitHintDown1_hns::
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {UP_ARROW}$"

BattlePyramid_Text_ExitHintUp2_hns::
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {UP_ARROW}$"

BattlePyramid_Text_ExitHintLeft2_hns::
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {UP_ARROW}$"

BattlePyramid_Text_ExitHintRight2_hns::
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {UP_ARROW}$"

BattlePyramid_Text_ExitHintDown2_hns::
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {UP_ARROW}$"

BattlePyramid_Text_ExitHintUp3_hns::
	.string "Der Ausgang befindet sich\n"
	.string "in dieser Richtung: {UP_ARROW}$"

BattlePyramid_Text_ExitHintLeft3_hns::
	.string "Der Ausgang befindet sich\n"
	.string "in dieser Richtung: {UP_ARROW}$"

BattlePyramid_Text_ExitHintRight3_hns::
	.string "Der Ausgang befindet sich\n"
	.string "in dieser Richtung: {UP_ARROW}$"

BattlePyramid_Text_ExitHintDown3_hns::
	.string "Der Ausgang befindet sich\n"
	.string "in dieser Richtung: {UP_ARROW}$"

BattlePyramid_Text_ExitHintUp4_hns::
	.string "Der Ausgang befindet sich irgendwo\n"
	.string "in dieser Richtung: {UP_ARROW}$"

BattlePyramid_Text_ExitHintLeft4_hns::
	.string "Der Ausgang befindet sich irgendwo\n"
	.string "in dieser Richtung: {UP_ARROW}$"

BattlePyramid_Text_ExitHintRight4_hns::
	.string "Der Ausgang befindet sich irgendwo\n"
	.string "in dieser Richtung: {UP_ARROW}$"

BattlePyramid_Text_ExitHintDown4_hns::
	.string "Der Ausgang befindet sich irgendwo\n"
	.string "in dieser Richtung: {UP_ARROW}$"

BattlePyramid_Text_ExitHintUp5_hns::
	.string "Der Ausgang?\n"
	.string "Da entlang: {UP_ARROW}$"

BattlePyramid_Text_ExitHintLeft5_hns::
	.string "Der Ausgang?\n"
	.string "Da entlang: {UP_ARROW}$"

BattlePyramid_Text_ExitHintRight5_hns::
	.string "Der Ausgang?\n"
	.string "Da entlang: {UP_ARROW}$"

BattlePyramid_Text_ExitHintDown5_hns::
	.string "Der Ausgang?\n"
	.string "Da entlang: {UP_ARROW}$"

BattlePyramid_Text_ExitHintUp6_hns::
	.string "Der Ausgang befindet sich\n"
	.string "dort drüben: {UP_ARROW}$"

BattlePyramid_Text_ExitHintLeft6_hns::
	.string "Der Ausgang befindet sich\n"
	.string "dort drüben: {UP_ARROW}$"

BattlePyramid_Text_ExitHintRight6_hns::
	.string "Der Ausgang befindet sich\n"
	.string "dort drüben: {UP_ARROW}$"

BattlePyramid_Text_ExitHintDown6_hns::
	.string "Der Ausgang befindet sich\n"
	.string "dort drüben: {UP_ARROW}$"

BattlePyramid_Text_EightItemsRemaining1_hns::
	.string "Suchst du nach Items?\p"
	.string "Hier sind noch acht Items versteckt.$"

BattlePyramid_Text_SevenItemsRemaining1_hns::
	.string "Suchst du nach Items?\p"
	.string "Hier sind noch sieben Items\n"
	.string "versteckt.$"

BattlePyramid_Text_SixItemsRemaining1_hns::
	.string "Suchst du nach Items?\p"
	.string "Hier sind noch sechs Items\n"
	.string "versteckt.$"

BattlePyramid_Text_FiveItemsRemaining1_hns::
	.string "Suchst du nach Items?\p"
	.string "Hier sind noch fünf Items\n"
	.string "versteckt.$"

BattlePyramid_Text_FourItemsRemaining1_hns::
	.string "Suchst du nach Items?\p"
	.string "Hier sind noch vier Items\n"
	.string "versteckt.$"

BattlePyramid_Text_ThreeItemsRemaining1_hns::
	.string "Suchst du nach Items?\p"
	.string "Hier sind noch drei Items\n"
	.string "versteckt.$"

BattlePyramid_Text_TwoItemsRemaining1_hns::
	.string "Suchst du nach Items?\p"
	.string "Hier sind noch zwei Items\n"
	.string "versteckt.$"

BattlePyramid_Text_OneItemRemaining1_hns::
	.string "Suchst du nach Items?\p"
	.string "Hier ist noch ein Item\n"
	.string "versteckt.$"

BattlePyramid_Text_ZeroItemsRemaining1_hns::
	.string "Suchst du nach Items?\p"
	.string "Hier gibt es keine mehr.$"

BattlePyramid_Text_EightItemsRemaining2_hns::
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind irgendwo acht Items\n"
	.string "versteckt.$"

BattlePyramid_Text_SevenItemsRemaining2_hns::
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind irgendwo sieben Items\n"
	.string "versteckt.$"

BattlePyramid_Text_SixItemsRemaining2_hns::
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind irgendwo sechs Items\n"
	.string "versteckt.$"

BattlePyramid_Text_FiveItemsRemaining2_hns::
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind irgendwo fünf Items\n"
	.string "versteckt.$"

BattlePyramid_Text_FourItemsRemaining2_hns::
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind irgendwo vier Items\n"
	.string "versteckt.$"

BattlePyramid_Text_ThreeItemsRemaining2_hns::
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind irgendwo drei Items\n"
	.string "versteckt.$"

BattlePyramid_Text_TwoItemsRemaining2_hns::
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind irgendwo zwei Items\n"
	.string "versteckt.$"

BattlePyramid_Text_OneItemRemaining2_hns::
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier ist irgendwo ein Item\n"
	.string "versteckt.$"

BattlePyramid_Text_ZeroItemsRemaining2_hns::
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind keine Items mehr versteckt.$"

BattlePyramid_Text_EightItemsRemaining3_hns::
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "sind acht Items versteckt.$"

BattlePyramid_Text_SevenItemsRemaining3_hns::
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "sind sieben Items versteckt.$"

BattlePyramid_Text_SixItemsRemaining3_hns::
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "sind sechs Items versteckt.$"

BattlePyramid_Text_FiveItemsRemaining3_hns::
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "sind fünf Items versteckt.$"

BattlePyramid_Text_FourItemsRemaining3_hns::
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "sind vier Items versteckt.$"

BattlePyramid_Text_ThreeItemsRemaining3_hns::
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "sind drei Items versteckt.$"

BattlePyramid_Text_TwoItemsRemaining3_hns::
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "sind zwei Items versteckt.$"

BattlePyramid_Text_OneItemRemaining3_hns::
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "ist ein Item versteckt.$"

BattlePyramid_Text_ZeroItemsRemaining3_hns::
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Auf dieser Ebene gibt es keine Items\n"
	.string "mehr. Pass auf dich auf!$"

BattlePyramid_Text_EightItemsRemaining4_hns::
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheinen acht Items versteckt\n"
	.string "zu sein.$"

BattlePyramid_Text_SevenItemsRemaining4_hns::
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheinen sieben Items versteckt\n"
	.string "zu sein.$"

BattlePyramid_Text_SixItemsRemaining4_hns::
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheinen sechs Items versteckt\n"
	.string "zu sein.$"

BattlePyramid_Text_FiveItemsRemaining4_hns::
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheinen fünf Items versteckt\n"
	.string "zu sein.$"

BattlePyramid_Text_FourItemsRemaining4_hns::
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheinen vier Items versteckt\n"
	.string "zu sein.$"

BattlePyramid_Text_ThreeItemsRemaining4_hns::
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheinen drei Items versteckt\n"
	.string "zu sein.$"

BattlePyramid_Text_TwoItemsRemaining4_hns::
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheinen zwei Items versteckt\n"
	.string "zu sein.$"

BattlePyramid_Text_OneItemRemaining4_hns::
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheint ein Item versteckt\n"
	.string "zu sein.$"

BattlePyramid_Text_ZeroItemsRemaining4_hns::
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Aber leider scheinen hier keine\n"
	.string "Items mehr versteckt zu sein.$"

BattlePyramid_Text_EightItemsRemaining5_hns::
	.string "Auf dieser Ebene der PYRAMIDE\n"
	.string "sollen… acht Items liegen.$"

BattlePyramid_Text_SevenItemsRemaining5_hns::
	.string "Auf dieser Ebene der PYRAMIDE\n"
	.string "sollen… sieben Items liegen.$"

BattlePyramid_Text_SixItemsRemaining5_hns::
	.string "Auf dieser Ebene der PYRAMIDE\n"
	.string "sollen… sechs Items liegen.$"

BattlePyramid_Text_FiveItemsRemaining5_hns::
	.string "Auf dieser Ebene der PYRAMIDE\n"
	.string "sollen… fünf Items liegen.$"

BattlePyramid_Text_FourItemsRemaining5_hns::
	.string "Auf dieser Ebene der PYRAMIDE\n"
	.string "sollen… vier Items liegen.$"

BattlePyramid_Text_ThreeItemsRemaining5_hns::
	.string "Auf dieser Ebene der PYRAMIDE\n"
	.string "sollen… drei Items liegen.$"

BattlePyramid_Text_TwoItemsRemaining5_hns::
	.string "Auf dieser Ebene der PYRAMIDE\n"
	.string "sollen… zwei Items liegen.$"

BattlePyramid_Text_OneItemRemaining5_hns::
	.string "Auf dieser Ebene der PYRAMIDE\n"
	.string "soll… ein Item liegen.$"

BattlePyramid_Text_ZeroItemsRemaining5_hns::
	.string "Auf dieser Ebene der PYRAMIDE\n"
	.string "soll es keine Items geben…$"

BattlePyramid_Text_EightItemsRemaining6_hns::
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müssten noch acht\n"
	.string "weitere Items versteckt sein.$"

BattlePyramid_Text_SevenItemsRemaining6_hns::
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müssten noch sieben\n"
	.string "weitere Items versteckt sein.$"

BattlePyramid_Text_SixItemsRemaining6_hns::
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müssten noch sechs\n"
	.string "weitere Items versteckt sein.$"

BattlePyramid_Text_FiveItemsRemaining6_hns::
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müssten noch fünf\n"
	.string "weitere Items versteckt sein.$"

BattlePyramid_Text_FourItemsRemaining6_hns::
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müssten noch vier\n"
	.string "weitere Items versteckt sein.$"

BattlePyramid_Text_ThreeItemsRemaining6_hns::
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müssten noch drei\n"
	.string "weitere Items versteckt sein.$"

BattlePyramid_Text_TwoItemsRemaining6_hns::
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müssten noch zwei\n"
	.string "weitere Items versteckt sein.$"

BattlePyramid_Text_OneItemRemaining6_hns::
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müsste noch ein\n"
	.string "weiteres Item versteckt sein.$"

BattlePyramid_Text_ZeroItemsRemaining6_hns::
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier gibt es keine Items\n"
	.string "mehr.$"

BattlePyramid_Text_SevenTrainersRemaining1_hns::
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es warten noch sieben\n"
	.string "weitere starke TRAINER auf dich!$"

BattlePyramid_Text_SixTrainersRemaining1_hns::
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es warten noch sechs\n"
	.string "weitere starke TRAINER auf dich!$"

BattlePyramid_Text_FiveTrainersRemaining1_hns::
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es warten noch fünf\n"
	.string "weitere starke TRAINER auf dich!$"

BattlePyramid_Text_FourTrainersRemaining1_hns::
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es warten noch vier\n"
	.string "weitere starke TRAINER auf dich!$"

BattlePyramid_Text_ThreeTrainersRemaining1_hns::
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es warten noch drei\n"
	.string "weitere starke TRAINER auf dich!$"

BattlePyramid_Text_TwoTrainersRemaining1_hns::
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es warten noch zwei\n"
	.string "weitere starke TRAINER auf dich!$"

BattlePyramid_Text_OneTrainersRemaining1_hns::
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es wartet noch ein\n"
	.string "weiterer starker TRAINER auf dich!$"

BattlePyramid_Text_ZeroTrainersRemaining1_hns::
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es ist niemand mehr da, den\n"
	.string "du besiegen könntest.$"

BattlePyramid_Text_SevenTrainersRemaining2_hns::
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt hier noch sieben weitere\n"
	.string "TRAINER. Einer wird dich zu Fall bringen!$"

BattlePyramid_Text_SixTrainersRemaining2_hns::
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt hier noch sechs weitere\n"
	.string "TRAINER. Einer wird dich zu Fall bringen!$"

BattlePyramid_Text_FiveTrainersRemaining2_hns::
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt hier noch fünf weitere\n"
	.string "TRAINER. Einer wird dich zu Fall bringen!$"

BattlePyramid_Text_FourTrainersRemaining2_hns::
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt hier noch vier weitere\n"
	.string "TRAINER. Einer wird dich zu Fall bringen!$"

BattlePyramid_Text_ThreeTrainersRemaining2_hns::
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt hier noch drei weitere\n"
	.string "TRAINER. Einer wird dich zu Fall bringen!$"

BattlePyramid_Text_TwoTrainersRemaining2_hns::
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt hier noch zwei weitere\n"
	.string "TRAINER. Einer wird dich zu Fall bringen!$"

BattlePyramid_Text_OneTrainersRemaining2_hns::
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt hier noch einen weiteren\n"
	.string "TRAINER. Der wird dich zu Fall bringen!$"

BattlePyramid_Text_ZeroTrainersRemaining2_hns::
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt keine weiteren TRAINER!\n"
	.string "Keiner wird dich zu Fall bringen!$"

BattlePyramid_Text_SevenTrainersRemaining3_hns::
	.string "Wow! Das war beeindruckend!\p"
	.string "Aber hier sind noch sieben weitere\n"
	.string "TRAINER. Kannst du die auch besiegen?$"

BattlePyramid_Text_SixTrainersRemaining3_hns::
	.string "Wow! Das war beeindruckend!\p"
	.string "Aber hier sind noch sechs weitere\n"
	.string "TRAINER. Kannst du die auch besiegen?$"

BattlePyramid_Text_FiveTrainersRemaining3_hns::
	.string "Wow! Das war beeindruckend!\p"
	.string "Aber hier sind noch fünf weitere\n"
	.string "TRAINER. Kannst du die auch besiegen?$"

BattlePyramid_Text_FourTrainersRemaining3_hns::
	.string "Wow! Das war beeindruckend!\p"
	.string "Aber hier sind noch vier weitere\n"
	.string "TRAINER. Kannst du die auch besiegen?$"

BattlePyramid_Text_ThreeTrainersRemaining3_hns::
	.string "Wow! Das war beeindruckend!\p"
	.string "Aber hier sind noch drei weitere\n"
	.string "TRAINER. Kannst du die auch besiegen?$"

BattlePyramid_Text_TwoTrainersRemaining3_hns::
	.string "Wow! Das war beeindruckend!\p"
	.string "Aber hier sind noch zwei weitere\n"
	.string "TRAINER. Kannst du die auch besiegen?$"

BattlePyramid_Text_OneTrainersRemaining3_hns::
	.string "Wow! Das war beeindruckend!\p"
	.string "Aber hier ist noch ein weiterer\n"
	.string "TRAINER. Kannst du den auch besiegen?$"

BattlePyramid_Text_ZeroTrainersRemaining3_hns::
	.string "Wow! Das war beeindruckend!\p"
	.string "Du hast alle TRAINER auf dieser\n"
	.string "Ebene besiegt.$"

BattlePyramid_Text_SevenTrainersRemaining4_hns::
	.string "Vielleicht kannst du die sieben TRAINER\n"
	.string "auf dieser Ebene besiegen?$"

BattlePyramid_Text_SixTrainersRemaining4_hns::
	.string "Vielleicht kannst du die sechs TRAINER\n"
	.string "auf dieser Ebene besiegen?$"

BattlePyramid_Text_FiveTrainersRemaining4_hns::
	.string "Vielleicht kannst du die fünf TRAINER\n"
	.string "auf dieser Ebene besiegen?$"

BattlePyramid_Text_FourTrainersRemaining4_hns::
	.string "Vielleicht kannst du die vier TRAINER\n"
	.string "auf dieser Ebene besiegen?$"

BattlePyramid_Text_ThreeTrainersRemaining4_hns::
	.string "Vielleicht kannst du die drei TRAINER\n"
	.string "auf dieser Ebene besiegen?$"

BattlePyramid_Text_TwoTrainersRemaining4_hns::
	.string "Vielleicht kannst du die zwei TRAINER\n"
	.string "auf dieser Ebene besiegen?$"

BattlePyramid_Text_OneTrainersRemaining4_hns::
	.string "Vielleicht kannst du den TRAINER\n"
	.string "auf dieser Ebene besiegen?$"

BattlePyramid_Text_ZeroTrainersRemaining4_hns::
	.string "Auf dieser Ebene ist niemand mehr, den\n"
	.string "du besiegen könntest.$"

BattlePyramid_Text_SevenTrainersRemaining5_hns::
	.string "Du könntest es tatsächlich schaffen,\n"
	.string "die sieben TRAINER hier zu besiegen.$"

BattlePyramid_Text_SixTrainersRemaining5_hns::
	.string "Du könntest es tatsächlich schaffen,\n"
	.string "die sechs TRAINER hier zu besiegen.$"

BattlePyramid_Text_FiveTrainersRemaining5_hns::
	.string "Du könntest es tatsächlich schaffen,\n"
	.string "die fünf TRAINER hier zu besiegen.$"

BattlePyramid_Text_FourTrainersRemaining5_hns::
	.string "Du könntest es tatsächlich schaffen,\n"
	.string "die vier TRAINER hier zu besiegen.$"

BattlePyramid_Text_ThreeTrainersRemaining5_hns::
	.string "Du könntest es tatsächlich schaffen,\n"
	.string "die drei TRAINER hier zu besiegen.$"

BattlePyramid_Text_TwoTrainersRemaining5_hns::
	.string "Du könntest es tatsächlich schaffen,\n"
	.string "die zwei TRAINER hier zu besiegen.$"

BattlePyramid_Text_OneTrainersRemaining5_hns::
	.string "Du könntest es tatsächlich schaffen,\n"
	.string "den TRAINER hier zu besiegen.$"

BattlePyramid_Text_ZeroTrainersRemaining5_hns::
	.string "Deine Fähigkeiten sind unerreichbar!\p"
	.string "Es sind keine TRAINER mehr vorhanden,\n"
	.string "gegen die du antreten könntest.$"

BattlePyramid_Text_SevenTrainersRemaining6_hns::
	.string "Schaffst du es, die sieben\n"
	.string "verbleibenden TRAINER zu besiegen?$"

BattlePyramid_Text_SixTrainersRemaining6_hns::
	.string "Schaffst du es, die sechs\n"
	.string "verbleibenden TRAINER zu besiegen?$"

BattlePyramid_Text_FiveTrainersRemaining6_hns::
	.string "Schaffst du es, die fünf\n"
	.string "verbleibenden TRAINER zu besiegen?$"

BattlePyramid_Text_FourTrainersRemaining6_hns::
	.string "Schaffst du es, die vier\n"
	.string "verbleibenden TRAINER zu besiegen?$"

BattlePyramid_Text_ThreeTrainersRemaining6_hns::
	.string "Schaffst du es, die drei\n"
	.string "verbleibenden TRAINER zu besiegen?$"

BattlePyramid_Text_TwoTrainersRemaining6_hns::
	.string "Schaffst du es, die zwei\n"
	.string "verbleibenden TRAINER zu besiegen?$"

BattlePyramid_Text_OneTrainersRemaining6_hns::
	.string "Schaffst du es, den\n"
	.string "verbleibenden TRAINER zu besiegen?$"

BattlePyramid_Text_ZeroTrainersRemaining6_hns::
	.string "Es ist niemand mehr da, dem du dein\n"
	.string "Können zeigen kannst.$"

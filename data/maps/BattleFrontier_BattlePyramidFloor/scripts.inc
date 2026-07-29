BattleFrontier_BattlePyramidFloor_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePyramidFloor_OnResume
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidFloor_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePyramidFloor_OnTransition
	.byte 0

BattleFrontier_BattlePyramidFloor_OnFrame:
	map_script_2 VAR_TEMP_D, 1, BattleFrontier_BattlePyramidFloor_EventScript_UpdateLight
	map_script_2 VAR_TEMP_PLAYING_PYRAMID_MUSIC, 0, BattleFrontier_BattlePyramidFloor_EventScript_PlayPyramidMusic
	map_script_2 VAR_TEMP_F, 1, BattleFrontier_BattlePyramidFloor_EventScript_ShowMapName
	.2byte 0

BattleFrontier_BattlePyramidFloor_EventScript_UpdateLight::
	lockall
	@ pyramid_updatelight, cant use macro because it straddles the loop
	setvar VAR_0x8004, BATTLE_PYRAMID_FUNC_UPDATE_LIGHT
	setvar VAR_0x8005, 4
	setvar VAR_0x8006, PYRAMID_LIGHT_INCR_RADIUS
	setvar VAR_0x8007, SE_SAVE
	setvar VAR_RESULT, 0
BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop::
	special CallBattlePyramidFunction
	delay 2
	goto_if_ne VAR_RESULT, 2, BattleFrontier_BattlePyramidFloor_EventScript_UpdateLightLoop
	setvar VAR_TEMP_D, 0
	releaseall
	end

BattleFrontier_BattlePyramidFloor_EventScript_ShowMapName::
	special ShowMapNamePopup
	setvar VAR_TEMP_F, 0
	end

BattleFrontier_BattlePyramidFloor_EventScript_PlayPyramidMusic::
	playbgm MUS_B_PYRAMID, FALSE
	setvar VAR_TEMP_PLAYING_PYRAMID_MUSIC, 1
	end

BattleFrontier_BattlePyramidFloor_OnResume:
	pyramid_setfloorpal
	frontier_getstatus
	switch VAR_TEMP_CHALLENGE_STATUS
	case 0, BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge
	case CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramid_EventScript_WarpToLobby
	case CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge
	frontier_get FRONTIER_DATA_BATTLE_OUTCOME
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
	goto_if_eq VAR_RESULT, 0, BattleFrontier_BattlePyramidFloor_EventScript_ResetParty
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	goto_if_eq VAR_RESULT, B_OUTCOME_DREW, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	goto_if_eq VAR_RESULT, B_OUTCOME_FORFEITED, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	frontier_isbattletype BATTLE_TYPE_TRAINER  @ VAR_RESULT seems to be ignored here
	setvar VAR_TEMP_D, 1
BattleFrontier_BattlePyramidFloor_EventScript_ResetParty::
	pyramid_resetparty
	end

BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost::
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_LOST
	pyramid_set PYRAMID_DATA_TRAINER_FLAGS, 255
BattleFrontier_BattlePyramid_EventScript_WarpToLobby::
	pyramid_updatelight 0, PYRAMID_LIGHT_SET_RADIUS
	pyramid_clearhelditems
	special HealPlayerParty
	warpsilent MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY, 7, 13
	waitstate
	end

BattleFrontier_BattlePyramidFloor_EventScript_ReadyChallenge::
	pyramid_save CHALLENGE_STATUS_SAVING
	special SavePlayerParty
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	pyramid_settrainers
	frontier_setpartyorder FRONTIER_PARTY_SIZE
	setvar VAR_TEMP_F, 1
	end

BattleFrontier_BattlePyramidFloor_OnTransition:
	call BattleFrontier_BattlePyramidFloor_EventScript_SetLightRadius
	setvar VAR_TEMP_F, 1
	end

BattleFrontier_BattlePyramidFloor_EventScript_SetLightRadius::
	pyramid_updatelight 32, PYRAMID_LIGHT_SET_RADIUS
	return

BattlePyramid_WarpToNextFloor::
	call BattleFrontier_EventScript_IncrementWinStreak
	frontier_get FRONTIER_DATA_BATTLE_NUM  @ Floor number
	addvar VAR_RESULT, 1
	frontier_set FRONTIER_DATA_BATTLE_NUM, VAR_RESULT
	goto_if_eq VAR_RESULT, 7, BattlePyramid_WarpToTop
	pyramid_seedfloor
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	setvar VAR_RESULT, 0
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_FLOOR, 1, 1
	waitstate
	end

BattlePyramid_WarpToTop::
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_TOP, 17, 17
	waitstate
	end

@ TRAINER_PHILLIP is used as a placeholder
BattlePyramid_TrainerBattle::
	facilitytrainerbattle FACILITY_BATTLE_PYRAMID
	pyramid_showhint
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

BattlePyramid_FindItemBall::
	pyramid_setitem
	callstd STD_FIND_ITEM
	goto_if_eq VAR_0x8007, 0, BattlePyramid_FindItemBallEnd
	pyramid_hideitem
BattlePyramid_FindItemBallEnd::
	end

BattlePyramid_Retire::
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost

@ Also used by Trainer Hill
BattleFacility_TrainerBattle_PlaceholderText:
	.string "Dies ist ein Beispiel.$"

gText_BattlePyramidConfirmRest::
	.string "Dein Abenteuer in der Kampfpyramide\n"
	.string "wird gespeichert, damit du es\l"
	.string "unterbrechen kannst. Einverstanden?$"

gText_BattlePyramidConfirmRetire::
	.string "Möchtest du das Abenteuer in der\n"
	.string "Kampfpyramide wirklich unterbrechen?$"

BattlePyramid_Text_ExitHintUp1::
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {UP_ARROW}$"

BattlePyramid_Text_ExitHintLeft1::
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {LEFT_ARROW}$"

BattlePyramid_Text_ExitHintRight1::
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {RIGHT_ARROW}$"

BattlePyramid_Text_ExitHintDown1::
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {DOWN_ARROW}$"

BattlePyramid_Text_ExitHintUp2::
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {UP_ARROW}$"

BattlePyramid_Text_ExitHintLeft2::
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {LEFT_ARROW}$"

BattlePyramid_Text_ExitHintRight2::
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {RIGHT_ARROW}$"

BattlePyramid_Text_ExitHintDown2::
	.string "Der Ausgang dieser Ebene\n"
	.string "befindet sich: {DOWN_ARROW}$"

BattlePyramid_Text_ExitHintUp3::
	.string "Der Ausgang befindet sich\n"
	.string "in dieser Richtung: {UP_ARROW}$"

BattlePyramid_Text_ExitHintLeft3::
	.string "Der Ausgang befindet sich\n"
	.string "in dieser Richtung: {LEFT_ARROW}$"

BattlePyramid_Text_ExitHintRight3::
	.string "Der Ausgang befindet sich\n"
	.string "in dieser Richtung: {RIGHT_ARROW}$"

BattlePyramid_Text_ExitHintDown3::
	.string "Der Ausgang befindet sich\n"
	.string "in dieser Richtung: {DOWN_ARROW}$"

BattlePyramid_Text_ExitHintUp4::
	.string "Der Ausgang befindet sich irgendwo\n"
	.string "in dieser Richtung: {UP_ARROW}$"

BattlePyramid_Text_ExitHintLeft4::
	.string "Der Ausgang befindet sich irgendwo\n"
	.string "in dieser Richtung: {LEFT_ARROW}$"

BattlePyramid_Text_ExitHintRight4::
	.string "Der Ausgang befindet sich irgendwo\n"
	.string "in dieser Richtung: {RIGHT_ARROW}$"

BattlePyramid_Text_ExitHintDown4::
	.string "Der Ausgang befindet sich irgendwo\n"
	.string "in dieser Richtung: {DOWN_ARROW}$"

BattlePyramid_Text_ExitHintUp5::
	.string "Der Ausgang?\n"
	.string "Da entlang: {UP_ARROW}$"

BattlePyramid_Text_ExitHintLeft5::
	.string "Der Ausgang?\n"
	.string "Da entlang: {LEFT_ARROW}$"

BattlePyramid_Text_ExitHintRight5::
	.string "Der Ausgang?\n"
	.string "Da entlang: {RIGHT_ARROW}$"

BattlePyramid_Text_ExitHintDown5::
	.string "Der Ausgang?\n"
	.string "Da entlang: {DOWN_ARROW}$"

BattlePyramid_Text_ExitHintUp6::
	.string "Der Ausgang befindet sich\n"
	.string "dort drüben: {UP_ARROW}$"

BattlePyramid_Text_ExitHintLeft6::
	.string "Der Ausgang befindet sich\n"
	.string "dort drüben: {LEFT_ARROW}$"

BattlePyramid_Text_ExitHintRight6::
	.string "Der Ausgang befindet sich\n"
	.string "dort drüben: {RIGHT_ARROW}$"

BattlePyramid_Text_ExitHintDown6::
	.string "Der Ausgang befindet sich\n"
	.string "dort drüben: {DOWN_ARROW}$"

BattlePyramid_Text_EightItemsRemaining1::
	.string "Suchst du nach Items?\p"
	.string "Hier sind noch acht Items versteckt.$"

BattlePyramid_Text_SevenItemsRemaining1::
	.string "Suchst du nach Items?\p"
	.string "Hier sind noch sieben Items\n"
	.string "versteckt.$"

BattlePyramid_Text_SixItemsRemaining1::
	.string "Suchst du nach Items?\p"
	.string "Hier sind noch sechs Items\n"
	.string "versteckt.$"

BattlePyramid_Text_FiveItemsRemaining1::
	.string "Suchst du nach Items?\p"
	.string "Hier sind noch fünf Items\n"
	.string "versteckt.$"

BattlePyramid_Text_FourItemsRemaining1::
	.string "Suchst du nach Items?\p"
	.string "Hier sind noch vier Items\n"
	.string "versteckt.$"

BattlePyramid_Text_ThreeItemsRemaining1::
	.string "Suchst du nach Items?\p"
	.string "Hier sind noch drei Items\n"
	.string "versteckt.$"

BattlePyramid_Text_TwoItemsRemaining1::
	.string "Suchst du nach Items?\p"
	.string "Hier sind noch zwei Items\n"
	.string "versteckt.$"

BattlePyramid_Text_OneItemRemaining1::
	.string "Suchst du nach Items?\p"
	.string "Hier ist noch ein Item\n"
	.string "versteckt.$"

BattlePyramid_Text_ZeroItemsRemaining1::
	.string "Suchst du nach Items?\p"
	.string "Hier gibt es keine mehr.$"

BattlePyramid_Text_EightItemsRemaining2::
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind irgendwo acht Items\n"
	.string "versteckt.$"

BattlePyramid_Text_SevenItemsRemaining2::
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind irgendwo sieben Items\n"
	.string "versteckt.$"

BattlePyramid_Text_SixItemsRemaining2::
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind irgendwo sechs Items\n"
	.string "versteckt.$"

BattlePyramid_Text_FiveItemsRemaining2::
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind irgendwo fünf Items\n"
	.string "versteckt.$"

BattlePyramid_Text_FourItemsRemaining2::
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind irgendwo vier Items\n"
	.string "versteckt.$"

BattlePyramid_Text_ThreeItemsRemaining2::
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind irgendwo drei Items\n"
	.string "versteckt.$"

BattlePyramid_Text_TwoItemsRemaining2::
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind irgendwo zwei Items\n"
	.string "versteckt.$"

BattlePyramid_Text_OneItemRemaining2::
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier ist irgendwo ein Item\n"
	.string "versteckt.$"

BattlePyramid_Text_ZeroItemsRemaining2::
	.string "Du hast gewonnen, daher verrate ich\n"
	.string "dir ein Geheimnis!\p"
	.string "Hier sind keine Items mehr versteckt.$"

BattlePyramid_Text_EightItemsRemaining3::
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "sind acht Items versteckt.$"

BattlePyramid_Text_SevenItemsRemaining3::
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "sind sieben Items versteckt.$"

BattlePyramid_Text_SixItemsRemaining3::
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "sind sechs Items versteckt.$"

BattlePyramid_Text_FiveItemsRemaining3::
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "sind fünf Items versteckt.$"

BattlePyramid_Text_FourItemsRemaining3::
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "sind vier Items versteckt.$"

BattlePyramid_Text_ThreeItemsRemaining3::
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "sind drei Items versteckt.$"

BattlePyramid_Text_TwoItemsRemaining3::
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "sind zwei Items versteckt.$"

BattlePyramid_Text_OneItemRemaining3::
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Ich verrate dir was: Auf dieser Ebene\n"
	.string "ist ein Item versteckt.$"

BattlePyramid_Text_ZeroItemsRemaining3::
	.string "Wie macht sich deine Item-Sammlung?\p"
	.string "Auf dieser Ebene gibt es keine Items\n"
	.string "mehr. Pass auf dich auf!$"

BattlePyramid_Text_EightItemsRemaining4::
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheinen acht Items versteckt\n"
	.string "zu sein.$"

BattlePyramid_Text_SevenItemsRemaining4::
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheinen sieben Items versteckt\n"
	.string "zu sein.$"

BattlePyramid_Text_SixItemsRemaining4::
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheinen sechs Items versteckt\n"
	.string "zu sein.$"

BattlePyramid_Text_FiveItemsRemaining4::
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheinen fünf Items versteckt\n"
	.string "zu sein.$"

BattlePyramid_Text_FourItemsRemaining4::
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheinen vier Items versteckt\n"
	.string "zu sein.$"

BattlePyramid_Text_ThreeItemsRemaining4::
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheinen drei Items versteckt\n"
	.string "zu sein.$"

BattlePyramid_Text_TwoItemsRemaining4::
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheinen zwei Items versteckt\n"
	.string "zu sein.$"

BattlePyramid_Text_OneItemRemaining4::
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Hier scheint ein Item versteckt\n"
	.string "zu sein.$"

BattlePyramid_Text_ZeroItemsRemaining4::
	.string "Deine Stärke muss belohnt werden!\p"
	.string "Aber leider scheinen hier keine\n"
	.string "Items mehr versteckt zu sein.$"

BattlePyramid_Text_EightItemsRemaining5::
	.string "Auf dieser Ebene der Pyramide\n"
	.string "sollen… acht Items liegen.$"

BattlePyramid_Text_SevenItemsRemaining5::
	.string "Auf dieser Ebene der Pyramide\n"
	.string "sollen… sieben Items liegen.$"

BattlePyramid_Text_SixItemsRemaining5::
	.string "Auf dieser Ebene der Pyramide\n"
	.string "sollen… sechs Items liegen.$"

BattlePyramid_Text_FiveItemsRemaining5::
	.string "Auf dieser Ebene der Pyramide\n"
	.string "sollen… fünf Items liegen.$"

BattlePyramid_Text_FourItemsRemaining5::
	.string "Auf dieser Ebene der Pyramide\n"
	.string "sollen… vier Items liegen.$"

BattlePyramid_Text_ThreeItemsRemaining5::
	.string "Auf dieser Ebene der Pyramide\n"
	.string "sollen… drei Items liegen.$"

BattlePyramid_Text_TwoItemsRemaining5::
	.string "Auf dieser Ebene der Pyramide\n"
	.string "sollen… zwei Items liegen.$"

BattlePyramid_Text_OneItemRemaining5::
	.string "Auf dieser Ebene der Pyramide\n"
	.string "soll… ein Item liegen.$"

BattlePyramid_Text_ZeroItemsRemaining5::
	.string "Auf dieser Ebene der Pyramide\n"
	.string "soll es keine Items geben…$"

BattlePyramid_Text_EightItemsRemaining6::
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müssten noch acht\n"
	.string "weitere Items versteckt sein.$"

BattlePyramid_Text_SevenItemsRemaining6::
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müssten noch sieben\n"
	.string "weitere Items versteckt sein.$"

BattlePyramid_Text_SixItemsRemaining6::
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müssten noch sechs\n"
	.string "weitere Items versteckt sein.$"

BattlePyramid_Text_FiveItemsRemaining6::
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müssten noch fünf\n"
	.string "weitere Items versteckt sein.$"

BattlePyramid_Text_FourItemsRemaining6::
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müssten noch vier\n"
	.string "weitere Items versteckt sein.$"

BattlePyramid_Text_ThreeItemsRemaining6::
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müssten noch drei\n"
	.string "weitere Items versteckt sein.$"

BattlePyramid_Text_TwoItemsRemaining6::
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müssten noch zwei\n"
	.string "weitere Items versteckt sein.$"

BattlePyramid_Text_OneItemRemaining6::
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier müsste noch ein\n"
	.string "weiteres Item versteckt sein.$"

BattlePyramid_Text_ZeroItemsRemaining6::
	.string "Hast du schon alle Items gefunden?\p"
	.string "Ich glaube, hier gibt es keine Items\n"
	.string "mehr.$"

BattlePyramid_Text_SevenTrainersRemaining1::
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es warten noch sieben\n"
	.string "weitere starke Trainer auf dich!$"

BattlePyramid_Text_SixTrainersRemaining1::
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es warten noch sechs\n"
	.string "weitere starke Trainer auf dich!$"

BattlePyramid_Text_FiveTrainersRemaining1::
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es warten noch fünf\n"
	.string "weitere starke Trainer auf dich!$"

BattlePyramid_Text_FourTrainersRemaining1::
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es warten noch vier\n"
	.string "weitere starke Trainer auf dich!$"

BattlePyramid_Text_ThreeTrainersRemaining1::
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es warten noch drei\n"
	.string "weitere starke Trainer auf dich!$"

BattlePyramid_Text_TwoTrainersRemaining1::
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es warten noch zwei\n"
	.string "weitere starke Trainer auf dich!$"

BattlePyramid_Text_OneTrainersRemaining1::
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es wartet noch ein\n"
	.string "weiterer starker Trainer auf dich!$"

BattlePyramid_Text_ZeroTrainersRemaining1::
	.string "Du warst wirklich unglaublich gut!\p"
	.string "Aber es ist niemand mehr da, den\n"
	.string "du besiegen könntest.$"

BattlePyramid_Text_SevenTrainersRemaining2::
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt hier noch sieben weitere\n"
	.string "Trainer. Einer wird dich zu Fall bringen!$"

BattlePyramid_Text_SixTrainersRemaining2::
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt hier noch sechs weitere\n"
	.string "Trainer. Einer wird dich zu Fall bringen!$"

BattlePyramid_Text_FiveTrainersRemaining2::
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt hier noch fünf weitere\n"
	.string "Trainer. Einer wird dich zu Fall bringen!$"

BattlePyramid_Text_FourTrainersRemaining2::
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt hier noch vier weitere\n"
	.string "Trainer. Einer wird dich zu Fall bringen!$"

BattlePyramid_Text_ThreeTrainersRemaining2::
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt hier noch drei weitere\n"
	.string "Trainer. Einer wird dich zu Fall bringen!$"

BattlePyramid_Text_TwoTrainersRemaining2::
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt hier noch zwei weitere\n"
	.string "Trainer. Einer wird dich zu Fall bringen!$"

BattlePyramid_Text_OneTrainersRemaining2::
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt hier noch einen weiteren\n"
	.string "Trainer. Der wird dich zu Fall bringen!$"

BattlePyramid_Text_ZeroTrainersRemaining2::
	.string "Das ist doch einfach ärgerlich!\p"
	.string "Aber es gibt keine weiteren Trainer!\n"
	.string "Keiner wird dich zu Fall bringen!$"

BattlePyramid_Text_SevenTrainersRemaining3::
	.string "Wow! Das war beeindruckend!\p"
	.string "Aber hier sind noch sieben weitere\n"
	.string "Trainer. Kannst du die auch besiegen?$"

BattlePyramid_Text_SixTrainersRemaining3::
	.string "Wow! Das war beeindruckend!\p"
	.string "Aber hier sind noch sechs weitere\n"
	.string "Trainer. Kannst du die auch besiegen?$"

BattlePyramid_Text_FiveTrainersRemaining3::
	.string "Wow! Das war beeindruckend!\p"
	.string "Aber hier sind noch fünf weitere\n"
	.string "Trainer. Kannst du die auch besiegen?$"

BattlePyramid_Text_FourTrainersRemaining3::
	.string "Wow! Das war beeindruckend!\p"
	.string "Aber hier sind noch vier weitere\n"
	.string "Trainer. Kannst du die auch besiegen?$"

BattlePyramid_Text_ThreeTrainersRemaining3::
	.string "Wow! Das war beeindruckend!\p"
	.string "Aber hier sind noch drei weitere\n"
	.string "Trainer. Kannst du die auch besiegen?$"

BattlePyramid_Text_TwoTrainersRemaining3::
	.string "Wow! Das war beeindruckend!\p"
	.string "Aber hier sind noch zwei weitere\n"
	.string "Trainer. Kannst du die auch besiegen?$"

BattlePyramid_Text_OneTrainersRemaining3::
	.string "Wow! Das war beeindruckend!\p"
	.string "Aber hier ist noch ein weiterer\n"
	.string "Trainer. Kannst du den auch besiegen?$"

BattlePyramid_Text_ZeroTrainersRemaining3::
	.string "Wow! Das war beeindruckend!\p"
	.string "Du hast alle Trainer auf dieser\n"
	.string "Ebene besiegt.$"

BattlePyramid_Text_SevenTrainersRemaining4::
	.string "Vielleicht kannst du die sieben Trainer\n"
	.string "auf dieser Ebene besiegen?$"

BattlePyramid_Text_SixTrainersRemaining4::
	.string "Vielleicht kannst du die sechs Trainer\n"
	.string "auf dieser Ebene besiegen?$"

BattlePyramid_Text_FiveTrainersRemaining4::
	.string "Vielleicht kannst du die fünf Trainer\n"
	.string "auf dieser Ebene besiegen?$"

BattlePyramid_Text_FourTrainersRemaining4::
	.string "Vielleicht kannst du die vier Trainer\n"
	.string "auf dieser Ebene besiegen?$"

BattlePyramid_Text_ThreeTrainersRemaining4::
	.string "Vielleicht kannst du die drei Trainer\n"
	.string "auf dieser Ebene besiegen?$"

BattlePyramid_Text_TwoTrainersRemaining4::
	.string "Vielleicht kannst du die zwei Trainer\n"
	.string "auf dieser Ebene besiegen?$"

BattlePyramid_Text_OneTrainersRemaining4::
	.string "Vielleicht kannst du den Trainer\n"
	.string "auf dieser Ebene besiegen?$"

BattlePyramid_Text_ZeroTrainersRemaining4::
	.string "Auf dieser Ebene ist niemand mehr, den\n"
	.string "du besiegen könntest.$"

BattlePyramid_Text_SevenTrainersRemaining5::
	.string "Du könntest es tatsächlich schaffen,\n"
	.string "die sieben Trainer hier zu besiegen.$"

BattlePyramid_Text_SixTrainersRemaining5::
	.string "Du könntest es tatsächlich schaffen,\n"
	.string "die sechs Trainer hier zu besiegen.$"

BattlePyramid_Text_FiveTrainersRemaining5::
	.string "Du könntest es tatsächlich schaffen,\n"
	.string "die fünf Trainer hier zu besiegen.$"

BattlePyramid_Text_FourTrainersRemaining5::
	.string "Du könntest es tatsächlich schaffen,\n"
	.string "die vier Trainer hier zu besiegen.$"

BattlePyramid_Text_ThreeTrainersRemaining5::
	.string "Du könntest es tatsächlich schaffen,\n"
	.string "die drei Trainer hier zu besiegen.$"

BattlePyramid_Text_TwoTrainersRemaining5::
	.string "Du könntest es tatsächlich schaffen,\n"
	.string "die zwei Trainer hier zu besiegen.$"

BattlePyramid_Text_OneTrainersRemaining5::
	.string "Du könntest es tatsächlich schaffen,\n"
	.string "den Trainer hier zu besiegen.$"

BattlePyramid_Text_ZeroTrainersRemaining5::
	.string "Deine Fähigkeiten sind unerreichbar!\p"
	.string "Es sind keine Trainer mehr vorhanden,\n"
	.string "gegen die du antreten könntest.$"

BattlePyramid_Text_SevenTrainersRemaining6::
	.string "Schaffst du es, die sieben\n"
	.string "verbleibenden Trainer zu besiegen?$"

BattlePyramid_Text_SixTrainersRemaining6::
	.string "Schaffst du es, die sechs\n"
	.string "verbleibenden Trainer zu besiegen?$"

BattlePyramid_Text_FiveTrainersRemaining6::
	.string "Schaffst du es, die fünf\n"
	.string "verbleibenden Trainer zu besiegen?$"

BattlePyramid_Text_FourTrainersRemaining6::
	.string "Schaffst du es, die vier\n"
	.string "verbleibenden Trainer zu besiegen?$"

BattlePyramid_Text_ThreeTrainersRemaining6::
	.string "Schaffst du es, die drei\n"
	.string "verbleibenden Trainer zu besiegen?$"

BattlePyramid_Text_TwoTrainersRemaining6::
	.string "Schaffst du es, die zwei\n"
	.string "verbleibenden Trainer zu besiegen?$"

BattlePyramid_Text_OneTrainersRemaining6::
	.string "Schaffst du es, den\n"
	.string "verbleibenden Trainer zu besiegen?$"

BattlePyramid_Text_ZeroTrainersRemaining6::
	.string "Es ist niemand mehr da, dem du dein\n"
	.string "Können zeigen kannst.$"

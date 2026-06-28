BattleFrontier_BattlePyramidTop_hns_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_BattlePyramidTop_OnResume_hns
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattlePyramidTop_OnFrame_hns
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_BattlePyramidTop_OnTransition_hns
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattlePyramidTop_OnWarp_hns
	.byte 0

BattleFrontier_BattlePyramidTop_OnTransition_hns:
	pyramid_updatelight 200, PYRAMID_LIGHT_SET_RADIUS
	setvar VAR_TEMP_F, 1
	end

BattleFrontier_BattlePyramidTop_OnWarp_hns:
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattlePyramidTop_EventScript_SetUpObjects_hns
	.2byte 0

BattleFrontier_BattlePyramidTop_EventScript_SetUpObjects_hns::
	setvar VAR_TEMP_1, 1
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto_if_ne VAR_TEMP_C, 0, BattleFrontier_BattlePyramidTop_EventScript_EndSetUpObjects_hns
	setobjectxyperm LOCALID_BRANDON, 0, 0
BattleFrontier_BattlePyramidTop_EventScript_EndSetUpObjects_hns::
	end

BattleFrontier_BattlePyramidTop_OnResume_hns:
	frontier_getbrainstatus
	goto_if_eq VAR_RESULT, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_hns
	call BattleFrontier_EventScript_SetBrainObjectGfx
BattleFrontier_BattlePyramidTop_EventScript_CheckChallengeStatus_hns::
	copyvar VAR_TEMP_C, VAR_RESULT
	frontier_getstatus
	switch VAR_TEMP_CHALLENGE_STATUS
	case 0, BattleFrontier_BattlePyramidTop_EventScript_ReadyChallenge_hns
	case CHALLENGE_STATUS_SAVING, BattleFrontier_BattlePyramid_EventScript_WarpToLobby_hns
	case CHALLENGE_STATUS_PAUSED, BattleFrontier_BattlePyramidTop_EventScript_ReadyChallenge_hns
	frontier_get FRONTIER_DATA_BATTLE_OUTCOME
	goto_if_eq VAR_RESULT, B_OUTCOME_LOST, BattleFrontier_BattlePyramid_EventScript_WarpToLobby_hnsLost_hns
	goto_if_eq VAR_RESULT, B_OUTCOME_DREW, BattleFrontier_BattlePyramid_EventScript_WarpToLobby_hnsLost_hns
	goto_if_eq VAR_RESULT, B_OUTCOME_FORFEITED, BattleFrontier_BattlePyramid_EventScript_WarpToLobby_hnsLost_hns
	end

BattleFrontier_BattlePyramidTop_OnFrame_hns:
	map_script_2 VAR_TEMP_PLAYING_PYRAMID_MUSIC, 0, BattleFrontier_BattlePyramidTop_EventScript_PlayPyramidMusic_hns
	map_script_2 VAR_TEMP_F, 1, BattleFrontier_BattlePyramidTop_EventScript_ShowMapName_hns
	.2byte 0

BattleFrontier_BattlePyramidTop_EventScript_PlayPyramidMusic_hns::
	playbgm MUS_B_PYRAMID_TOP, FALSE
	setvar VAR_TEMP_PLAYING_PYRAMID_MUSIC, 1
	end

BattleFrontier_BattlePyramidTop_EventScript_ShowMapName_hns::
	special ShowMapNamePopup
	setvar VAR_TEMP_F, 0
	end

BattleFrontier_BattlePyramidTop_EventScript_ReadyChallenge_hns::
	pyramid_save CHALLENGE_STATUS_SAVING
	special SavePlayerParty
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
	pyramid_settrainers
	frontier_setpartyorder FRONTIER_PARTY_SIZE
	setvar VAR_TEMP_F, 1
	end

BattleFrontier_BattlePyramidTop_EventScript_Attendant_hns::
	lock
	faceplayer
	goto_if_ne VAR_TEMP_D, 0, BattleFrontier_BattlePyramidTop_EventScript_StepForwardWhenReady_hns
	goto_if_ne VAR_TEMP_C, FRONTIER_BRAIN_NOT_READY, BattleFrontier_BattlePyramidTop_EventScript_BrandonHereMoveAside_hns
	msgbox BattleFrontier_BattlePyramidTop_Text_ReachedSummitUpYouGo_hns, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PYRAMID_TOP_ATTENDANT, BattleFrontier_BattlePyramidTop_Movement_AttendantMoveAside_hns
	waitmovement 0
	applymovement LOCALID_PLAYER, BattleFrontier_BattlePyramidTop_Movement_PlayerClimbToTop_hns
	waitmovement 0
	applymovement LOCALID_PYRAMID_TOP_ATTENDANT, BattleFrontier_BattlePyramidTop_Movement_AttendantBlockPath_hns
	waitmovement 0
	message BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid_hns
	waitmessage
	playfanfare MUS_OBTAIN_B_POINTS
	waitfanfare
	closemessage
BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon_hns::
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_WON
	warp MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY_HNS, 7, 13
	waitstate
	end

BattleFrontier_BattlePyramidTop_EventScript_StepForwardWhenReady_hns::
	msgbox BattleFrontier_BattlePyramidTop_Text_StepForwardWhenReady_hns, MSGBOX_DEFAULT
	closemessage
	end

BattleFrontier_BattlePyramidTop_EventScript_BrandonHereMoveAside_hns::
	msgbox BattleFrontier_BattlePyramidTop_Text_ChiefBeatYouHere_hns, MSGBOX_DEFAULT
	applymovement LOCALID_PYRAMID_TOP_ATTENDANT, BattleFrontier_BattlePyramidTop_Movement_AttendantMoveAside_hns
	setvar VAR_TEMP_D, 1
	closemessage
	end

BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_hns::
	lockall
	switch VAR_TEMP_C
	case FRONTIER_BRAIN_GOLD, BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold_hns
	case FRONTIER_BRAIN_STREAK, BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardSilverSpeech_hns
	case FRONTIER_BRAIN_STREAK_LONG, BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardGoldSpeech_hns
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardSilverSpeech_hns
	special SpawnCameraObject
	applymovement LOCALID_CAMERA, BattleFrontier_BattlePyramidTop_Movement_CameraPanUp_hns
	waitmovement 0
	msgbox BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure_hns, MSGBOX_DEFAULT
	closemessage
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
	applymovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer_hns
	waitmovement 0
	msgbox BattleFrontier_BattlePyramidTop_Text_ImPyramidKingBrandon_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_hnsSilver_hns
	end

BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardSilverSpeech_hns::
	applymovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer_hns
	waitmovement 0
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_hnsSilver_hns::
	msgbox BattleFrontier_BattlePyramidTop_Text_BringCourageToOurBattle_hns, MSGBOX_DEFAULT
	call BattleFrontier_BattlePyramidTop_EventScript_DoBrandonBattle_hns
	playbgm MUS_B_PYRAMID_TOP, FALSE
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonSilver_hns
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobby_hnsLost_hns

BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonSilver_hns::
	frontier_getsymbols
	goto_if_ne VAR_RESULT, 0, BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon_hns
	msgbox BattleFrontier_BattlePyramidTop_Text_BrandonFrontierPassPlease_hns, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_SYMBOL
	message BattleFrontier_BattlePyramidTop_Text_ReceivedBraveSymbol_hns
	waitmessage
	waitfanfare
	frontier_givesymbol
	msgbox BattleFrontier_BattlePyramidTop_Text_LookForwardToNextMeeting_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon_hns

BattleFrontier_BattlePyramidTop_EventScript_BrandonIntroGold_hns::
	frontier_get FRONTIER_DATA_HEARD_BRAIN_SPEECH
	goto_if_ne VAR_RESULT, FALSE, BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardGoldSpeech_hns
	special SpawnCameraObject
	applymovement LOCALID_CAMERA, BattleFrontier_BattlePyramidTop_Movement_CameraPanUp_hns
	waitmovement 0
	msgbox BattleFrontier_BattlePyramidTop_Text_BrandonYouveReturned_hns, MSGBOX_DEFAULT
	closemessage
	frontier_set FRONTIER_DATA_HEARD_BRAIN_SPEECH
	applymovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer_hns
	waitmovement 0
	msgbox BattleFrontier_BattlePyramidTop_Text_MyCourageIsOffMeter_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_hnsGold_hns
	end

BattleFrontier_BattlePyramidTop_EventScript_BrandonHeardGoldSpeech_hns::
	applymovement LOCALID_BRANDON, BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer_hns
	waitmovement 0
BattleFrontier_BattlePyramidTop_EventScript_BattleBrandon_hnsGold_hns::
	msgbox BattleFrontier_BattlePyramidTop_Text_EverythingYouHave_hns, MSGBOX_DEFAULT
	call BattleFrontier_BattlePyramidTop_EventScript_DoBrandonBattle_hns
	playbgm MUS_B_PYRAMID_TOP, FALSE
	goto_if_eq VAR_RESULT, 1, BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonGold_hns
	goto BattleFrontier_BattlePyramid_EventScript_WarpToLobby_hnsLost_hns

BattleFrontier_BattlePyramidTop_EventScript_DefeatedBrandonGold_hns::
	frontier_getsymbols
	goto_if_eq VAR_RESULT, 2, BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon_hns
	msgbox BattleFrontier_BattlePyramidTop_Text_BrandonRemarkableHaveThis_hns, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_SYMBOL
	message BattleFrontier_BattlePyramidTop_Text_BraveSymbolTookGoldenShine_hns
	waitmessage
	waitfanfare
	frontier_givesymbol
	msgbox BattleFrontier_BattlePyramidTop_Text_FarewellForNow_hns, MSGBOX_DEFAULT
	goto BattleFrontier_BattlePyramidTop_EventScript_WarpToLobbyWon_hns

BattleFrontier_BattlePyramidTop_EventScript_DoBrandonBattle_hns::
	closemessage
	dofacilitytrainerbattle FACILITY_BATTLE_PYRAMID
	waitstate
	return

BattleFrontier_BattlePyramidTop_Movement_AttendantMoveAside_hns:
	walk_right
	walk_in_place_faster_left
	step_end

BattleFrontier_BattlePyramidTop_Movement_AttendantBlockPath_hns:
	walk_left
	walk_in_place_faster_up
	step_end

BattleFrontier_BattlePyramidTop_Movement_PlayerClimbToTop_hns:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

BattleFrontier_BattlePyramidTop_Movement_BrandonApproachPlayer_hns:
	walk_fast_down
	step_end

BattleFrontier_BattlePyramidTop_Movement_CameraPanUp_hns:
	walk_slow_up
	walk_slow_up
	delay_16
	step_end

BattleFrontier_BattlePyramidTop_Text_ReachedSummitUpYouGo_hns:
	.string "Es ist wirklich eine Freude, dich hier\n"
	.string "zu\n"
	.string "sehen! Du hast es bis zum Gipfel der\l"
	.string "KAMPFPYRAMIDE geschafft!\p"
	.string "Über uns befindet sich nur noch die\n"
	.string "Aussichtsplattform.\p"
	.string "Ein Platz, der nur denen offen steht,\n"
	.string "die die PYRAMIDE erobert haben.\p"
	.string "Nun, dann darf ich bitten?\n"
	.string "Auf geht’s!$"

BattleFrontier_BattlePyramidTop_Text_PlayerConqueredPyramid_hns:
	.string "Der neue Eroberer der PYRAMIDE! Sein\n"
	.string "Name soll in aller Munde sein!\l"
	.string "{PLAYER}!!!$"

BattleFrontier_BattlePyramidTop_Text_ChiefBeatYouHere_hns:
	.string "Es ist wahrlich eine Freude, dich zu\n"
	.string "sehen!\p"
	.string "Aber leider bist du nur Zweiter, denn\n"
	.string "ein anderer war schneller als du!\p"
	.string "Unser Chef hat die PYRAMIDE bereits\n"
	.string "erobert!\p"
	.string "Wie dem auch sei, junger\n"
	.string "Forschergeist… Du bist ein TRAINER!\p"
	.string "Behaupte dich mit aller Kraft und hol\n"
	.string "dir den Ruhm! Besiege unseren Chef!\p"
	.string "Bitte! Du bist so weit gegangen. Mach\n"
	.string "auch noch diesen einen Schritt!$"

BattleFrontier_BattlePyramidTop_Text_ExplorationsAreGrandestAdventure_hns:
	.string "Junger Forschergeist…\p"
	.string "Meinst du nicht auch, dass Forschungs-\n"
	.string "reisen die Krönung der Abenteuer sind?\n"
	.string "\p"
	.string "Dein Verstand!\p"
	.string "Deine Stärke!\p"
	.string "Deine POKéMON!\p"
	.string "Aber vor allem dein Mut, dich durch\n"
	.string "unbekannte Welten zu bewegen…$"

BattleFrontier_BattlePyramidTop_Text_ImPyramidKingBrandon_hns:
	.string "Oh ja, das Leben ist einfach\n"
	.string "großartig! Ja, ja! Bitte?!?\p"
	.string "Ich heiße BRIAN!\p"
	.string "Ich bin der PYRAKÖNIG, was bedeutet,\n"
	.string "dass ich die Verantwortung hier trage!\n"
	.string "\p"
	.string "Die meisten nennen mich einfach Chef!\n"
	.string "\p"
	.string "Du besitzt ein starkes Selbstver-\n"
	.string "trauen, da du es bis hierher geschafft\n"
	.string "\p"
	.string "hast. Hahaha!\n"
	.string "Das wird ein Riesenspaß!$"

BattleFrontier_BattlePyramidTop_Text_BringCourageToOurBattle_hns:
	.string "Also dann!\n"
	.string "Beweis deinen Mut und kämpfe!$"

BattleFrontier_BattlePyramidTop_Text_BrandonFrontierPassPlease_hns:
	.string "BRIAN: Hahaha! Das war einfach\n"
	.string "großartig! Großartig, jawohl!\p"
	.string "Gut gemacht! Du hast dir meine\n"
	.string "Anerken-\n"
	.string "nung redlich verdient! Deinen KAMPF-\l"
	.string "ZONENPASS, bitte!$"

BattleFrontier_BattlePyramidTop_Text_ReceivedBraveSymbol_hns:
	.string "Das BRAVURSYMBOL wurde dem\n"
	.string "KAMPFZONENPASS hinzugefügt!$"

BattleFrontier_BattlePyramidTop_Text_LookForwardToNextMeeting_hns:
	.string "Junger Forschergeist! Ich freue mich\n"
	.string "schon auf unser nächstes Treffen!$"

BattleFrontier_BattlePyramidTop_Text_BrandonYouveReturned_hns:
	.string "BRIAN: … Endlich sehen wir uns\n"
	.string "wieder, junger Forschergeist!\p"
	.string "Deine Liebe für Abenteuer scheint aus\n"
	.string "tiefstem Herzen zu kommen…\p"
	.string "Ja… Als ich in deinem Alter war, war\n"
	.string "ich genauso…\p"
	.string "… … … …\p"
	.string "Leidenschaftlich!\p"
	.string "Gefährlich!\p"
	.string "Verzweifelt!\p"
	.string "Endlich ist es wieder Zeit für todes-\n"
	.string "verachtende, lebensbejahende\l"
	.string "Abenteuer…$"

BattleFrontier_BattlePyramidTop_Text_MyCourageIsOffMeter_hns:
	.string "Also dann!\p"
	.string "Mein Mut übersteigt diesmal alle\n"
	.string "Grenzen!$"

BattleFrontier_BattlePyramidTop_Text_EverythingYouHave_hns:
	.string "Alles, was du hast…\n"
	.string "würde ich auch gerne besitzen…$"

BattleFrontier_BattlePyramidTop_Text_BrandonRemarkableHaveThis_hns:
	.string "BRIAN: Hahahaha!\n"
	.string "Bemerkenswert!\l"
	.string "Wirklich ganz großartig!\p"
	.string "Junger Forschergeist!\p"
	.string "Du hast es mir durch und durch\n"
	.string "gezeigt!\l"
	.string "Bitte! Ich möchte dir dies geben!$"

BattleFrontier_BattlePyramidTop_Text_BraveSymbolTookGoldenShine_hns:
	.string "Das BRAVURSYMBOL erscheint\n"
	.string "in einem goldenen Glanz!$"

BattleFrontier_BattlePyramidTop_Text_FarewellForNow_hns:
	.string "Oh, ja! Scheinbar muss auch ich noch\n"
	.string "sehr viel lernen!\p"
	.string "Ich hoffe, unsere Wege kreuzen sich\n"
	.string "bald wieder! Bis dahin Leb wohl,\n"
	.string "junger\l"
	.string "Forschergeist!$"

BattleFrontier_BattlePyramidTop_Text_StepForwardWhenReady_hns:
	.string "Wenn du bereit bist, dann nimm deinen\n"
	.string "Mut zusammen und tritt vor.$"


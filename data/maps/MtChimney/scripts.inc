MtChimney_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, MtChimney_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, MtChimney_OnTransition
	.byte 0

MtChimney_OnTransition:
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 1
	end

MtChimney_OnResume:
	setstepcallback STEP_CB_ASH
	end

MtChimney_EventScript_Archie::
	lock
	faceplayer
	call_if_unset FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieGoStopTeamMagma
	call_if_set FLAG_EVIL_LEADER_PLEASE_STOP, MtChimney_EventScript_ArchieBusyFighting
	closemessage
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, Common_Movement_FaceOriginalDirection
	waitmovement 0
	setflag FLAG_EVIL_LEADER_PLEASE_STOP
	release
	end

MtChimney_EventScript_ArchieGoStopTeamMagma::
	msgbox MtChimney_Text_ArchieGoStopTeamMagma, MSGBOX_DEFAULT
	return

MtChimney_EventScript_ArchieBusyFighting::
	msgbox MtChimney_Text_ArchieIHaveMyHandsFull, MSGBOX_DEFAULT
	return

MtChimney_EventScript_Maxie::
	lockall
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
	msgbox MtChimney_Text_MeteoriteWillActivateVolcano, MSGBOX_DEFAULT
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_FacePlayer
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MT_CHIMNEY_MAXIE, Common_Movement_Delay48
	waitmovement 0
	msgbox MtChimney_Text_MaxieIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_MAXIE_MT_CHIMNEY, MtChimney_Text_MaxieDefeat
	msgbox MtChimney_Text_MaxieYouHaventSeenLastOfMagma, MSGBOX_DEFAULT
	closemessage
	delay 30
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_MT_CHIMNEY_MAXIE
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_1
	removeobject LOCALID_MT_CHIMNEY_TABITHA
	removeobject LOCALID_MT_CHIMNEY_MAGMA_GRUNT_2
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
	fadescreenswapbuffers FADE_FROM_BLACK
	setobjectxyperm LOCALID_MT_CHIMNEY_ARCHIE, 10, 12
	addobject LOCALID_MT_CHIMNEY_ARCHIE
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieApproachPlayerEast
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieApproachPlayerNorth
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox MtChimney_Text_ArchieThankYou, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_EAST, MtChimney_EventScript_ArchieExitEast
	call_if_eq VAR_FACING, DIR_NORTH, MtChimney_EventScript_ArchieExitNorth
	removeobject LOCALID_MT_CHIMNEY_ARCHIE
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
	releaseall
	end

MtChimney_EventScript_ArchieApproachPlayerEast::
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieApproachPlayerEast
	waitmovement 0
	return

MtChimney_EventScript_ArchieApproachPlayerNorth::
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieApproachPlayerNorth
	waitmovement 0
	return

MtChimney_EventScript_ArchieExitEast::
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieExitEast
	waitmovement 0
	return

MtChimney_EventScript_ArchieExitNorth::
	applymovement LOCALID_MT_CHIMNEY_ARCHIE, MtChimney_Movement_ArchieExitNorth
	waitmovement 0
	return

MtChimney_EventScript_LavaCookieLady::
	lock
	faceplayer
	showmoneybox 0, 0
	msgbox MtChimney_Text_LavaCookiesJust200, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_DeclineLavaCookie
	checkmoney 200
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_NotEnoughMoney
	msgbox MtChimney_Text_ThankYouDear, MSGBOX_DEFAULT
	checkitemspace ITEM_LAVA_COOKIE
	call_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RemoveMoney
.if OW_SHOW_ITEM_DESCRIPTIONS == OW_ITEM_DESCRIPTIONS_OFF
	giveitem ITEM_LAVA_COOKIE
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
	hidemoneybox
	release
	end

MtChimney_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	hidemoneybox
	release
	end
.else
	hidemoneybox
	giveitem ITEM_LAVA_COOKIE
	goto_if_eq VAR_RESULT, FALSE, MtChimney_EventScript_BagIsFull
	release
	end

MtChimney_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	release
	end
.endif @ OW_SHOW_ITEM_DESCRIPTIONS


MtChimney_EventScript_RemoveMoney::
	removemoney 200
	updatemoneybox
	return

MtChimney_EventScript_DeclineLavaCookie::
	msgbox MtChimney_Text_OhFineThen, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

MtChimney_EventScript_NotEnoughMoney::
	msgbox MtChimney_Text_YouveNotGotTheMoney, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

MtChimney_Movement_ArchieApproachPlayerEast:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	step_end

MtChimney_Movement_ArchieExitEast:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_ArchieApproachPlayerNorth:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	step_end

MtChimney_Movement_ArchieExitNorth:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused1:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_Unused2:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_Unused3:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused4:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_Unused5:
	delay_16
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_Unused6:
	delay_16
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused7:
	delay_16
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	step_end

MtChimney_Movement_Unused8:
	delay_16
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_faster_down
	step_end

MtChimney_Movement_Unused9:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused10:
	walk_down
	step_end

MtChimney_Movement_Unused11:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused12:
	delay_16
	delay_16
	walk_in_place_faster_left
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused13:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_faster_left
	delay_16
	walk_down
	walk_down
	step_end

MtChimney_Movement_Unused14:
	lock_facing_direction
	walk_fast_left
	unlock_facing_direction
	face_right
	step_end

MtChimney_Movement_Unused15:
	walk_left
	walk_in_place_faster_right
	delay_16
	step_end

MtChimney_EventScript_BusyAquaGrunt1::
	msgbox MtChimney_Text_MagmaOutnumbersUs, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyAquaGrunt2::
	msgbox MtChimney_Text_LessHabitatForWaterPokemon, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyAquaGrunt3::
	msgbox MtChimney_Text_MagmasNameSimilar, MSGBOX_SIGN
	end

MtChimney_EventScript_Tabitha::
	trainerbattle_single TRAINER_TABITHA_MT_CHIMNEY, MtChimney_Text_TabithaIntro, MtChimney_Text_TabithaDefeat
	msgbox MtChimney_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, MtChimney_Text_Grunt2Intro, MtChimney_Text_Grunt2Defeat
	msgbox MtChimney_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_BusyMagmaGrunt1::
	msgbox MtChimney_Text_TeamAquaAlwaysMessingWithPlans, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyMagmaGrunt2::
	msgbox MtChimney_Text_MeteoritesPackAmazingPower, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyMagmaGrunt3::
	msgbox MtChimney_Text_YouBetterNotMessWithUs, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyMagmaGrunt4::
	msgbox MtChimney_Text_AquasNameSimilar, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyMagmaGrunt5::
	msgbox MtChimney_Text_DouseThemInFire, MSGBOX_SIGN
	end

MtChimney_EventScript_BusyMagmaGrunt6::
	msgbox MtChimney_Text_KeepMakingMoreLand, MSGBOX_SIGN
	end

MtChimney_EventScript_MagmaPoochyena::
	msgbox MtChimney_Text_Bufoh, MSGBOX_SIGN
	end

MtChimney_EventScript_AquaPoochyena::
	msgbox MtChimney_Text_Bushaa, MSGBOX_SIGN
	end

MtChimney_EventScript_MeteoriteMachine::
	lockall
	goto_if_unset FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, MtChimney_EventScript_MachineOn
	goto_if_set FLAG_RECEIVED_METEORITE, MtChimney_EventScript_MachineOff
	msgbox MtChimney_Text_RemoveTheMeteorite, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MtChimney_EventScript_LeaveMeteoriteAlone
	msgbox MtChimney_Text_PlayerRemovedMeteorite, MSGBOX_DEFAULT
	giveitem ITEM_METEORITE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_METEORITE
	releaseall
	end

MtChimney_EventScript_LeaveMeteoriteAlone::
	msgbox MtChimney_Text_PlayerLeftMeteorite, MSGBOX_DEFAULT
	releaseall
	end

MtChimney_EventScript_MachineOff::
	msgbox MtChimney_Text_MachineMakesNoResponse, MSGBOX_DEFAULT
	releaseall
	end

MtChimney_EventScript_MachineOn::
	msgbox MtChimney_Text_MetoriteFittedOnMachine, MSGBOX_DEFAULT
	releaseall
	end

MtChimney_EventScript_RouteSign::
	msgbox MtChimney_Text_RouteSign, MSGBOX_SIGN
	end

MtChimney_EventScript_Shelby::
	trainerbattle_single TRAINER_SHELBY_1, MtChimney_Text_ShelbyIntro, MtChimney_Text_ShelbyDefeat, MtChimney_EventScript_DefeatedShelby
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_RematchShelby
	msgbox MtChimney_Text_ShelbyPostBattle, MSGBOX_DEFAULT
	release
	end

MtChimney_EventScript_DefeatedShelby::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MtChimney_Text_ShelbyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_SHELBY_1
	release
	end

MtChimney_EventScript_RematchShelby::
	trainerbattle_rematch TRAINER_SHELBY_1, MtChimney_Text_ShelbyRematchIntro, MtChimney_Text_ShelbyRematchDefeat
	msgbox MtChimney_Text_ShelbyPostRematch, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Melissa::
	trainerbattle_single TRAINER_MELISSA, MtChimney_Text_MelissaIntro, MtChimney_Text_MelissaDefeat
	msgbox MtChimney_Text_MelissaPostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Sheila::
	trainerbattle_single TRAINER_SHEILA, MtChimney_Text_SheilaIntro, MtChimney_Text_SheilaDefeat
	msgbox MtChimney_Text_SheilaPostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Shirley::
	trainerbattle_single TRAINER_SHIRLEY, MtChimney_Text_ShirleyIntro, MtChimney_Text_ShirleyDefeat
	msgbox MtChimney_Text_ShirleyPostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, MtChimney_Text_Grunt1Intro, MtChimney_Text_Grunt1Defeat
	msgbox MtChimney_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

MtChimney_EventScript_Sawyer::
	trainerbattle_single TRAINER_SAWYER_1, MtChimney_Text_SawyerIntro, MtChimney_Text_SawyerDefeat, MtChimney_EventScript_SawyerDefeated
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MtChimney_EventScript_SawyerRematch
	msgbox MtChimney_Text_SawyerPostBattle, MSGBOX_DEFAULT
	release
	end

MtChimney_EventScript_SawyerDefeated::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox MtChimney_Text_SawyerRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_SAWYER_1
	release
	end

MtChimney_EventScript_SawyerRematch::
	trainerbattle_rematch TRAINER_SAWYER_1, MtChimney_Text_SawyerRematchIntro, MtChimney_Text_SawyerRematchDefeat
	msgbox MtChimney_Text_SawyerPostRematch, MSGBOX_AUTOCLOSE
	end

MtChimney_Text_MeteoriteWillActivateVolcano:
	.string "Die Kraft, die in dem METEORITen\n"
	.string "steckt…\p"
	.string "Wenn man die mit dieser Maschine\n"
	.string "verstärkt, würde die Aktivität des\l"
	.string "SCHLOTBERGs enorm verstärkt…\p"
	.string "Die Energie wird tief im Krater\n"
	.string "ansteigen und…\l"
	.string "Hähähähä…$"

MtChimney_Text_MaxieIntro:
	.string "MARC: Hm?\n"
	.string "Wer bist du denn?!?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "ADRIAN hat sich über ein Kind beklagt,\n"
	.string "das sich in die Angelegenheiten von\l"
	.string "TEAM AQUA einmischt.\p"
	.string "Dieses Kind musst du sein.\p"
	.string "Hmpf! Und du glaubst, du kannst dich\n"
	.string "auch in unsere, TEAM MAGMAs\l"
	.string "Angelegenheiten einmischen?\p"
	.string "Hör gut zu. Schon lange Zeit nutzen\n"
	.string "die Lebewesen das Land, um zu\l"
	.string "wachsen und zu gedeihen.\p"
	.string "Daher ist das Land wichtiger als alles\n"
	.string "andere! Es ist die Wiege allen Lebens.\n"
	.string "\p"
	.string "Daher widmet sich TEAM MAGMA der Auf-\n"
	.string "gabe, die Landmassen zu vergrößern.\p"
	.string "So entsteht mehr Raum für Menschen\n"
	.string "und POKéMON.\p"
	.string "Für unsere Pläne brauchen wir das, was\n"
	.string "im Inneren dieses Berges schläft…\p"
	.string "Nun, mehr brauchst du nicht zu wissen.\n"
	.string "\p"
	.string "Ich kann einem sturen Kind wie dir\l"
	.string "nicht\n"
	.string "erlauben, sich uns in den Weg zu\p"
	.string "stellen. \p"
	.string "Ich werde dir zeigen, was\n"
	.string "passiert, wenn du uns aufhalten\l"
	.string "willst!$"

MtChimney_Text_MaxieDefeat:
	.string "Wie bitte?!?\p"
	.string "Ich, MARC, wurde ganz hinterhältig\n"
	.string "besiegt?!?$"

MtChimney_Text_MaxieYouHaventSeenLastOfMagma:
	.string "MARC: Genug.\n"
	.string "Ich ziehe mich für den Moment zurück.\n"
	.string "\p"
	.string "Aber das ist nicht das letzte Mal,\n"
	.string "dass\n"
	.string "du TEAM MAGMA zu Gesicht bekommen\l"
	.string "hast.\p"
	.string "Hähähä…\p"
	.string "Auch ohne METEORIT… Wenn wir erst die\n"
	.string "KUGEL haben… Hähähähä…$"

MtChimney_Text_TabithaIntro:
	.string "Hahahahaha!\p"
	.string "Da bist du also den weiten Weg hier\n"
	.string "hoch gelatscht.\p"
	.string "Tja, du kommst leider zu spät. Ich\n"
	.string "habe den METEORITen aus METEORFÄLLE\l"
	.string "bereits bei meinem BOSS abgeliefert!$"

MtChimney_Text_TabithaDefeat:
	.string "Hähähä…\p"
	.string "Auch wenn ich verloren habe… Sobald\n"
	.string "unser Boss das Ding zum Leben erweckt…$"

MtChimney_Text_TabithaPostBattle:
	.string "BOSS, beeil dich!\n"
	.string "Gib ihm die Energie des METEORITen!\p"
	.string "Hähähä…$"

MtChimney_Text_Grunt2Intro:
	.string "Wir von TEAM MAGMA setzen alles daran,\n"
	.string "zum Wohle aller zu handeln.\p"
	.string "Und wenn das Ding mehr Land schafft,\n"
	.string "gibt es auch mehr Platz zum Leben.\p"
	.string "Und jeder wäre glücklich!$"

MtChimney_Text_Grunt2Defeat:
	.string "Bitte?\n"
	.string "Was sagst du? Ich habe verloren???$"

MtChimney_Text_Grunt2PostBattle:
	.string "Unser BOSS sagt: “Jeder wird glücklich\n"
	.string "sein.”\p"
	.string "Aber warum will uns dann jeder\n"
	.string "aufhalten?$"

MtChimney_Text_Grunt1Intro:
	.string "Wenn es mehr Land gibt, wäre ich in\n"
	.string "der\n"
	.string "Lage, mir ein eigenes großes Haus zu\l"
	.string "bauen!\p"
	.string "Das würde ich dann auf der erstarrten\n"
	.string "Lava bauen!$"

MtChimney_Text_Grunt1Defeat:
	.string "Mein Traum von einem großen Haus…$"

MtChimney_Text_Grunt1PostBattle:
	.string "Ein Kind wie du sollte sich im Meer\n"
	.string "vergnügen.$"

MtChimney_Text_TeamAquaAlwaysMessingWithPlans:
	.string "Dieses lästige TEAM AQUA… Sie ver-\n"
	.string "suchen alles, unsere Pläne zu\l"
	.string "vereiteln.$"

MtChimney_Text_MeteoritesPackAmazingPower:
	.string "METEORITen stecken voller Energie.$"

MtChimney_Text_YouBetterNotMessWithUs:
	.string "Du gehst uns besser aus dem Weg!\p"
	.string "Wir werden das Ding zum Leben\n"
	.string "erwecken. Zum Wohle aller.$"

MtChimney_Text_AquasNameSimilar:
	.string "Wir sind TEAM MAGMA!\p"
	.string "Sie sind TEAM AQUA!\p"
	.string "Ich finde es total bescheuert, dass\n"
	.string "sie\l"
	.string "einen Namen haben, der unserem ähnelt.$"

MtChimney_Text_DouseThemInFire:
	.string "Yeah! Taucht sie ins Feuer!$"

MtChimney_Text_KeepMakingMoreLand:
	.string "Wir werden weiter für mehr Land\n"
	.string "sorgen!$"

MtChimney_Text_Bufoh:
	.string "Hahoh!$"

MtChimney_Text_ArchieGoStopTeamMagma:
	.string "ADRIAN: Grrr, {PLAYER}!\n"
	.string "Ich hätte es wissen müssen. War doch\l"
	.string "klar, dass du hier auftauchst.\p"
	.string "Schau dir ruhig an, was die Fanatiker\n"
	.string "von TEAM MAGMA vorhaben!\p"
	.string "Sie wollen die Kraft des gestohlenen\n"
	.string "METEORITen in den Vulkan geben!\p"
	.string "Und das wird den Vulkan zum Ausbruch\n"
	.string "bringen!$"

MtChimney_Text_ArchieIHaveMyHandsFull:
	.string "ADRIAN: Grrr…\p"
	.string "Ich möchte MARC aufhalten, aber ich\n"
	.string "kann es nicht!\p"
	.string "Nicht, wenn ich mich drei Gegnern\n"
	.string "gleichzeitig stellen muss.$"

MtChimney_Text_ArchieThankYou:
	.string "ADRIAN: {PLAYER}!\n"
	.string "Danke!\p"
	.string "Mit deiner Hilfe haben wir den\n"
	.string "zerstörerischen Plan von TEAM MAGMA\l"
	.string "durchkreuzt!\p"
	.string "Aber… Du…\n"
	.string "Auf welcher Seite stehst du?\p"
	.string "Ach, das ist egal.\p"
	.string "Wir werden weiter unsere Augen\n"
	.string "aufhalten und TEAM MAGMA beobachten.\p"
	.string "{PLAYER}, wir sehen uns bestimmt\n"
	.string "wieder!$"

MtChimney_Text_MagmaOutnumbersUs:
	.string "Mist… TEAM MAGMA ist uns zahlenmäßig\n"
	.string "überlegen! Wir können es nicht mit\n"
	.string "ihnen\l"
	.string "aufnehmen!$"

MtChimney_Text_LessHabitatForWaterPokemon:
	.string "Wenn sie die Landmassen vergrößern,\n"
	.string "gibt es weniger Lebensraum für\l"
	.string "WASSER-POKéMON!$"

MtChimney_Text_MagmasNameSimilar:
	.string "Wir sind TEAM AQUA!\p"
	.string "Sie sind TEAM MAGMA!\p"
	.string "Ich koche über vor Wut, weil sie so\n"
	.string "einen verwirrenden Namen verwenden.$"

MtChimney_Text_Bushaa:
	.string "Bushaa!$"

MtChimney_Text_LavaCookiesJust200:
	.string "LAVAKEKSE sind die Spezialität am\n"
	.string "SCHLOTBERG.\p"
	.string "Nimm einen. Er kostet nur ¥200.$"

MtChimney_Text_ThankYouDear:
	.string "Vielen Dank, Herzchen!$"

MtChimney_Text_YouveNotGotTheMoney:
	.string "Oh je. Du kannst nichts kaufen, wenn\n"
	.string "du nicht genug Geld bei dir hast.$"

MtChimney_Text_OhFineThen:
	.string "Oh, ist gut.$"

MtChimney_Text_MetoriteFittedOnMachine:
	.string "Ein METEORIT steckt in dieser\n"
	.string "mysteriösen Vorrichtung…\p"
	.string "Die Maschine scheint den METEORITen\n"
	.string "mit Energie zu versorgen.$"

MtChimney_Text_RemoveTheMeteorite:
	.string "Ein METEORIT steckt in dieser\n"
	.string "mysteriösen Vorrichtung…\p"
	.string "Willst du den METEORITen nehmen?$"

MtChimney_Text_PlayerRemovedMeteorite:
	.string "{PLAYER} entfernt den METEORITen aus\n"
	.string "der mysteriösen Vorrichtung.$"

MtChimney_Text_PlayerLeftMeteorite:
	.string "{PLAYER} fasst den METEORITen nicht\n"
	.string "an.$"

MtChimney_Text_MachineMakesNoResponse:
	.string "Diese mysteriöse Vorrichtung…\n"
	.string "Sie reagiert in keiner Weise.$"

MtChimney_Text_RouteSign:
	.string "{DOWN_ARROW} STEILPASS\n"
	.string "BAD LAVASTADT GERADEAUS$"

MtChimney_Text_ShelbyIntro:
	.string "Ich war bei den Heißen Quellen und\n"
	.string "habe meine müden Knochen erfrischt.\l"
	.string "Jetzt fühle ich mich richtig stark!$"

MtChimney_Text_ShelbyDefeat:
	.string "Oh, du meine Güte!\n"
	.string "Wer bist du denn?!?$"

MtChimney_Text_ShelbyPostBattle:
	.string "Nun, ich habe verloren. Ich darf mich\n"
	.string "nun nicht mehr EXPERTE nennen, oder?$"

MtChimney_Text_ShelbyRegister:
	.string "Danke schön, mein Kind. Das hat Spaß\n"
	.string "gemacht. So, als ob ich gegen mein\l"
	.string "Enkelkind gekämpft hätte.\p"
	.string "Komm doch bitte mal wieder vorbei.$"

MtChimney_Text_ShelbyRematchIntro:
	.string "Wenn du in deinem Herzen Platz für\n"
	.string "deine POKéMON hast, dann kannst du\l"
	.string "auch große Dinge erreichen.$"

MtChimney_Text_ShelbyRematchDefeat:
	.string "Oh, du meine Güte!\n"
	.string "Wer bist du denn!$"

MtChimney_Text_ShelbyPostRematch:
	.string "Vielleicht schlägt dein Herz im\n"
	.string "Gleich- klang mit den POKéMON.$"

MtChimney_Text_MelissaIntro:
	.string "Ich habe Feuer in mir, Baby.\n"
	.string "Ich halt’s nicht aus! Ich muss\l"
	.string "kämpfen!$"

MtChimney_Text_MelissaDefeat:
	.string "Oh, was für ein kochend heißer Kampf!$"

MtChimney_Text_MelissaPostBattle:
	.string "Die Hitze vom SCHLOTBERG bringt mein\n"
	.string "Feuer in Gang.$"

MtChimney_Text_SheilaIntro:
	.string "Endlich bin ich am SCHLOTBERG ange-\n"
	.string "kommen. Jetzt will ich kämpfen!!!$"

MtChimney_Text_SheilaDefeat:
	.string "Wie du kämpfst…\n"
	.string "Als würde der SCHLOTBERG ausbrechen!$"

MtChimney_Text_SheilaPostBattle:
	.string "Wie ich schon sagte, endlich bin ich\n"
	.string "am\n"
	.string "SCHLOTBERG. Wäre doch blödsinnig, wenn\l"
	.string "ich nur zum Sightseeing hier wäre…\p"
	.string "Ich will ein bisschen kämpfen und\n"
	.string "KEKSe als Andenken kaufen.$"

MtChimney_Text_ShirleyIntro:
	.string "Seit ich in den Heißen Quellen gebadet\n"
	.string "habe, fühle ich mich großartig!\l"
	.string "Ich bin sicher, ich werde gewinnen!$"

MtChimney_Text_ShirleyDefeat:
	.string "Huaah!\n"
	.string "Außerhalb des Wassers ist es saukalt.$"

MtChimney_Text_ShirleyPostBattle:
	.string "Ich werde mich wieder in die Heiße\n"
	.string "Quelle setzen. Kommst du mit?\p"
	.string "Kleiner Scherz am Rande… Hähähä.$"

MtChimney_Text_SawyerIntro:
	.string "Dies ist ein schöner Berg! Hier gibt\n"
	.string "es\n"
	.string "viele interessante Leute, die einem\l"
	.string "Gesellschaft leisten.$"

MtChimney_Text_SawyerDefeat:
	.string "Oh, du bist auch ein richtiger\n"
	.string "Heißsporn.$"

MtChimney_Text_SawyerPostBattle:
	.string "Ich glaube, ich tauche mal in den\n"
	.string "Heißen Quellen von BAD LAVASTADT ab.$"

MtChimney_Text_SawyerRegister:
	.string "Ich mag Hitzköpfe wie dich.\n"
	.string "Ich trage dich in meinen POKéNAV ein.$"

MtChimney_Text_SawyerRematchIntro:
	.string "Ich freue mich, denn hier gibt es\n"
	.string "viele hitzköpfige Menschen.\l"
	.string "Ich verliere mit Sicherheit nicht.$"

MtChimney_Text_SawyerRematchDefeat:
	.string "Mist, du hast dich kein bisschen\n"
	.string "abgekühlt. Immer noch ein Heißsporn.$"

MtChimney_Text_SawyerPostRematch:
	.string "Hier ist es wirklich sehr heiß. Und\n"
	.string "ich\n"
	.string "bin absolut zu warm angezogen für\l"
	.string "diese Gegend.$"

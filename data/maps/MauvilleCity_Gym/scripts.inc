MauvilleCity_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, MauvilleCity_Gym_OnLoad
	.byte 0

MauvilleCity_Gym_OnLoad:
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_DeactivatePuzzle
	switch VAR_MAUVILLE_GYM_STATE
	case 0, MauvilleCity_Gym_EventScript_UpdateBarriers
	case 1, MauvilleCity_Gym_EventScript_Switch1Pressed
	case 2, MauvilleCity_Gym_EventScript_Switch2Pressed
	case 3, MauvilleCity_Gym_EventScript_Switch3Pressed
	case 4, MauvilleCity_Gym_EventScript_Switch4Pressed
	end

MauvilleCity_Gym_EventScript_UpdateBarriers::
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetAltBarriers
	end

MauvilleCity_Gym_EventScript_SetAltBarriers::
	setmetatile 3, 11, METATILE_MauvilleGym_RedBeamV1_On, TRUE
	setmetatile 3, 12, METATILE_MauvilleGym_RedBeamV2_On, TRUE
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_On, TRUE
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_On, TRUE
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, FALSE
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, FALSE
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 5, 6, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
	end

MauvilleCity_Gym_EventScript_Switch1Pressed::
	setvar VAR_0x8004, 0
	special MauvilleGymPressSwitch
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
	end

MauvilleCity_Gym_EventScript_Switch2Pressed::
	setvar VAR_0x8004, 1
	special MauvilleGymPressSwitch
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
	end

MauvilleCity_Gym_EventScript_Switch3Pressed::
	setvar VAR_0x8004, 2
	special MauvilleGymPressSwitch
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
	end

MauvilleCity_Gym_EventScript_Switch4Pressed::
	setvar VAR_0x8004, 3
	special MauvilleGymPressSwitch
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
	end

MauvilleCity_Gym_EventScript_DeactivatePuzzle::
	special MauvilleGymDeactivatePuzzle
	end

MauvilleCity_Gym_EventScript_Wattson::
	trainerbattle_single TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonIntro, MauvilleCity_Gym_Text_WattsonDefeat, MauvilleCity_Gym_EventScript_WattsonDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_Gym_EventScript_WattsonRematch
	goto_if_unset FLAG_RECEIVED_TM_SHOCK_WAVE, MauvilleCity_Gym_EventScript_GiveShockWave2
	goto_if_eq VAR_NEW_MAUVILLE_STATE, 2, MauvilleCity_Gym_EventScript_CompletedNewMauville
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Gym_EventScript_WattsonDefeated::
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
	clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
	setflag FLAG_DEFEATED_MAUVILLE_GYM
	setflag FLAG_BADGE03_GET
	addvar VAR_PETALBURG_GYM_STATE, 1
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
	setvar VAR_0x8008, 3
	call Common_EventScript_SetGymTrainers
	special MauvilleGymDeactivatePuzzle
	special DrawWholeMapView
	playse SE_UNLOCK
	call MauvilleCity_Gym_EventScript_GiveShockWave
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
	release
	end

MauvilleCity_Gym_EventScript_GiveShockWave2::
	giveitem ITEM_TM_SHOCK_WAVE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
	release
	end

MauvilleCity_Gym_EventScript_GiveShockWave::
	giveitem ITEM_TM_SHOCK_WAVE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_SHOCK_WAVE
	return

MauvilleCity_Gym_EventScript_CompletedNewMauville::
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Gym_EventScript_WattsonRematch::
	trainerbattle_rematch_double TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonPreRematch, MauvilleCity_Gym_Text_WattsonRematchDefeat, MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_Switch1::
	lockall
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 1, MauvilleCity_Gym_EventScript_SwitchDoNothing
	setvar VAR_MAUVILLE_GYM_STATE, 1
	setvar VAR_0x8004, 0
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
	end

MauvilleCity_Gym_EventScript_Switch2::
	lockall
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 2, MauvilleCity_Gym_EventScript_SwitchDoNothing
	setvar VAR_MAUVILLE_GYM_STATE, 2
	setvar VAR_0x8004, 1
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
	end

MauvilleCity_Gym_EventScript_Switch3::
	lockall
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 3, MauvilleCity_Gym_EventScript_SwitchDoNothing
	setvar VAR_MAUVILLE_GYM_STATE, 3
	setvar VAR_0x8004, 2
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
	end

MauvilleCity_Gym_EventScript_Switch4::
	lockall
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 4, MauvilleCity_Gym_EventScript_SwitchDoNothing
	setvar VAR_MAUVILLE_GYM_STATE, 4
	setvar VAR_0x8004, 3
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
	end

MauvilleCity_Gym_EventScript_PressFloorSwitch::
	special MauvilleGymSetDefaultBarriers
	special MauvilleGymPressSwitch
	special DrawWholeMapView
	playse SE_UNLOCK
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_ClearBarriersAltState
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetBarriersAltState
	releaseall
	end

MauvilleCity_Gym_EventScript_SwitchDoNothing::
	releaseall
	end

MauvilleCity_Gym_EventScript_SetBarriersAltState::
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
	releaseall
	end

MauvilleCity_Gym_EventScript_ClearBarriersAltState::
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
	releaseall
	end

MauvilleCity_Gym_EventScript_Kirk::
	trainerbattle_single TRAINER_KIRK, MauvilleCity_Gym_Text_KirkIntro, MauvilleCity_Gym_Text_KirkDefeat
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_Shawn::
	trainerbattle_single TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnIntro, MauvilleCity_Gym_Text_ShawnDefeat
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_Ben::
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeat
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_Vivian::
	trainerbattle_single TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianIntro, MauvilleCity_Gym_Text_VivianDefeat
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_Angelo::
	trainerbattle_single TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloIntro, MauvilleCity_Gym_Text_AngeloDefeat
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Gym_EventScript_GymGuidePostVictory::
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
	goto MauvilleCity_Gym_EventScript_GymStatue
	end

MauvilleCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
	goto MauvilleCity_Gym_EventScript_GymStatue
	end

MauvilleCity_Gym_EventScript_GymStatueCertified::
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

MauvilleCity_Gym_EventScript_GymStatue::
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

MauvilleCity_Gym_Text_GymGuideAdvice:
	.string "Hey, wie sieht es aus, auf dem Weg zum\n"
	.string "CHAMP, {PLAYER}?\p"
	.string "WALTER, der ARENALEITER von\n"
	.string "MALVENFROH CITY, setzt\l"
	.string "ELEKTRO-POKéMON ein.\p"
	.string "Wenn du ihn mit WASSER-POKéMON\n"
	.string "angreifst, macht er sie fertig!\n"
	.string "Britzel! \p"
	.string "Und die Türen lassen sich nur mit\n"
	.string "Schaltern öffnen! Wahnsinn!\p"
	.string "Nun, dann mal los!$"

MauvilleCity_Gym_Text_GymGuidePostVictory:
	.string "Aah, du bist elektrifizierend!\n"
	.string "Du hast die Tür offen gezwungen!$"

MauvilleCity_Gym_Text_KirkIntro:
	.string "Die Spannung meiner Seele, sie setzt\n"
	.string "alle deine Träume unter Strom!\l"
	.string "Ja-haha!$"

MauvilleCity_Gym_Text_KirkDefeat:
	.string "Da wurde der Stromkreis geschlossen\n"
	.string "und bis zum Kurzschluss belastet!$"

MauvilleCity_Gym_Text_KirkPostBattle:
	.string "POKéMON und Rock… Alles, was ins Herz\n"
	.string "trifft, boh yeah!$"

MauvilleCity_Gym_Text_ShawnIntro:
	.string "Ich habe unter WALTER trainiert!\n"
	.string "So einfach verliere ich nicht.$"

MauvilleCity_Gym_Text_ShawnDefeat:
	.string "Stecker raus und ausgeschaltet…$"

MauvilleCity_Gym_Text_ShawnPostBattle:
	.string "WALTER, unser ARENALEITER, ist schon\n"
	.string "sehr, sehr lange hier ansässig.\p"
	.string "Er kämpfte schon, da war dein Vater\n"
	.string "noch nicht geboren.$"

MauvilleCity_Gym_Text_BenIntro:
	.string "Diese ARENA stellt dir eine Knobel-\n"
	.string "aufgabe. Ist das nicht lustig?$"

MauvilleCity_Gym_Text_BenDefeat:
	.string "Verlieren ist gar nicht lustig…$"

MauvilleCity_Gym_Text_BenPostBattle:
	.string "WALTER sagt, er liebt es, Fallen mit\n"
	.string "Schaltern zu installieren.$"

MauvilleCity_Gym_Text_VivianIntro:
	.string "Mein Charme und die Attacken meiner\n"
	.string "POKéMON werden dich schocken!$"

MauvilleCity_Gym_Text_VivianDefeat:
	.string "Ich bin geschockt von deiner Stärke!$"

MauvilleCity_Gym_Text_VivianPostBattle:
	.string "Ich habe gehört, dass MALVENFROH CITY\n"
	.string "von WALTER gegründet wurde.\p"
	.string "Er war TRAINER, lange bevor wir\n"
	.string "geboren\n"
	.string "wurden. Er muss ein umfangreiches\l"
	.string "Wissen besitzen.$"

MauvilleCity_Gym_Text_AngeloIntro:
	.string "Ich liebe glitzernde und funkelnde\n"
	.string "Dinge!$"

MauvilleCity_Gym_Text_AngeloDefeat:
	.string "Oh… Ich bin geblendet…$"

MauvilleCity_Gym_Text_AngeloPostBattle:
	.string "ARENALEITER WALTER aus MALVENFROH\n"
	.string "hat eine glänzende Stirn. Das finde\n"
	.string "ich\l"
	.string "klasse!$"

MauvilleCity_Gym_Text_WattsonIntro:
	.string "Ich habe es aufgegeben, die Stadt\n"
	.string "umpolen zu wollen.\p"
	.string "Stattdessen verwende ich meine Energie\n"
	.string "lieber auf das Installieren von Fallen\l"
	.string "in meiner Arena.\p"
	.string "Oh? Was machst du denn hier?\p"
	.string "Was ist das? Du hast es geschafft,\n"
	.string "alle meine Schalter zu finden?\p"
	.string "Uahahahaha!\n"
	.string "Das ist wirklich amüsant!\p"
	.string "Dann ist es nun an mir - dem\n"
	.string "ARENALEITER von MALVENFROH CITY\l"
	.string "- dich unter Spannung zu setzen!$"

MauvilleCity_Gym_Text_WattsonDefeat:
	.string "Uahahahaha!\n"
	.string "Schön, ich habe verloren!\p"
	.string "Du hast es geschafft, meinen Strom-\n"
	.string "kreis zu unterbrechen! Nimm diesen\l"
	.string "ORDEN!$"

MauvilleCity_Gym_Text_ReceivedDynamoBadge:
	.string "{PLAYER} hat den DYNAMO-ORDEN von\n"
	.string "WALTER erhalten.$"

MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis:
	.string "Mit dem DYNAMO-ORDEN können POKéMON\n"
	.string "ZERTRÜMMERER auch außerhalb eines\l"
	.string "Kampfes einsetzen.\p"
	.string "Und außerdem werden deine POKéMON ein\n"
	.string "kleines bisschen schneller.\p"
	.string "Hmm…\n"
	.string "Dies hier solltest du auch nehmen!$"

MauvilleCity_Gym_Text_ExplainShockWave:
	.string "Dies ist TM34 - SCHOCKWELLE.\p"
	.string "Eine verlässliche Attacke, die niemals\n"
	.string "daneben geht! Verlass dich drauf!\p"
	.string "… … … … … …$"

MauvilleCity_Gym_Text_RegisteredWattson:
	.string "ARENALEITER WALTER wurde im POKéNAV-\n"
	.string "Verzeichnis eingetragen.$"

MauvilleCity_Gym_Text_WattsonPostBattle:
	.string "Optimismus erfüllt mich, wenn ich\n"
	.string "einen\n"
	.string "so viel versprechenden TRAINER wie\l"
	.string "dich sehe!$"

MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor:
	.string "Ahahahaha!\n"
	.string "Mach weiter so, streng dich an, Kind!$"

MauvilleCity_Gym_Text_GymStatue:
	.string "POKéMON ARENA von MALVENFROH CITY$"

MauvilleCity_Gym_Text_GymStatueCertified:
	.string "POKéMON ARENA von MALVENFROH CITY\p"
	.string "WALTERS ANERKANNTE TRAINER:\n"
	.string "{PLAYER}$"

MauvilleCity_Gym_Text_WattsonPreRematch:
	.string "WALTER: Ah ha! Endlich bist du hier.\n"
	.string "Ich weiß, was du willst! Du willst\l"
	.string "gegen meine POKéMON antreten.\p"
	.string "Hähähähähä!\p"
	.string "Ich werde deine Funken zum Fliegen\n"
	.string "bringen! Und sag hinterher nicht, ich\l"
	.string "hätte dich nicht gewarnt!!!$"

MauvilleCity_Gym_Text_WattsonRematchDefeat:
	.string "Uff… Meine Batterie ist leer…$"

MauvilleCity_Gym_Text_WattsonPostRematch:
	.string "WALTER: Wir müssen unsere Batterien\n"
	.string "neu aufladen.\p"
	.string "Und wenn wir das gemacht haben, dann\n"
	.string "werden wir deine Herausforderung gerne\l"
	.string "annehmen.\p"
	.string "Du kommst doch bestimmt mal wieder\n"
	.string "hier vorbei, nicht wahr?$"

MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons:
	.string "WALTER: Ah ha! Endlich bist du hier.\n"
	.string "Ich weiß, was du willst! Du willst\l"
	.string "gegen meine POKéMON antreten.\p"
	.string "Hähähähähä!\p"
	.string "Hey! Einen Moment mal.\n"
	.string "Du hast ja nur ein POKéMON dabei!\p"
	.string "Komm bitte wieder, wenn du zwei oder\n"
	.string "mehr POKéMON hast, ja?$"


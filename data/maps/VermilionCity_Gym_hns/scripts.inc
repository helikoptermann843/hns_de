.set FOUND_FIRST_SWITCH, FLAG_TEMP_1
.set SWITCH1_ID,         VAR_0x8004
.set SWITCH2_ID,         VAR_0x8005
.set TRASH_CAN_ID,       VAR_0x8008

.set CHECK_VISITOR_STATE, 6
.set TYPE, VAR_0x8003
.set ARGUMENT, VAR_0x8004

VermilionCity_Gym_hns_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, VermilionCity_Gym_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_Gym_OnTransition
	.byte 0

VermilionCity_Gym_OnLoad::
	call_if_set FOUND_FIRST_SWITCH, VermilionCity_Gym_EventScript_SetOneBeamOff
	call_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_SetBeamsOff
	end

VermilionCity_Gym_EventScript_SetOneBeamOff::
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_HalfOn, 1
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_HalfOn, 1
	setmetatile 5, 6, METATILE_VermilionGym_Beam_MidTop_HalfOn, 1
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_HalfOn, 1
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_HalfOn, 1
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_HalfOn, 1
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_HalfOn, 1
	setmetatile 5, 7, METATILE_VermilionGym_Beam_MidBottom_HalfOn, 1
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_HalfOn, 1
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_HalfOn, 1
	return

VermilionCity_Gym_EventScript_SetBeamsOff::
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Off, 1
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_Off, 0
	setmetatile 5, 6, METATILE_VermilionGym_Floor, 0
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_Off, 0
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_Off, 1
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Off, 1
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_Off, 0
	setmetatile 5, 7, METATILE_VermilionGym_Floor, 0
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_Off, 0
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Off, 1
	return

VermilionCity_Gym_OnTransition::
	call VermilionCity_Gym_EventScript_InitTrashCans
	end

VermilionCity_Gym_EventScript_InitTrashCans::
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_Return
	special SetVermilionTrashCans
	copyvar VAR_TEMP_0, SWITCH1_ID
	copyvar VAR_TEMP_1, SWITCH2_ID
	return

VermilionCity_Gym_EventScript_Return::
	end

VermilionCity_Gym_EventScript_TrashCan1::
	lockall
	setvar TRASH_CAN_ID, 1
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan2::
	lockall
	setvar TRASH_CAN_ID, 2
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan3::
	lockall
	setvar TRASH_CAN_ID, 3
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan4::
	lockall
	setvar TRASH_CAN_ID, 4
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan5::
	lockall
	setvar TRASH_CAN_ID, 5
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan6::
	lockall
	setvar TRASH_CAN_ID, 6
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan7::
	lockall
	setvar TRASH_CAN_ID, 7
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan8::
	lockall
	setvar TRASH_CAN_ID, 8
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan9::
	lockall
	setvar TRASH_CAN_ID, 9
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan10::
	lockall
	setvar TRASH_CAN_ID, 10
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan11::
	lockall
	setvar TRASH_CAN_ID, 11
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan12::
	lockall
	setvar TRASH_CAN_ID, 12
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan13::
	lockall
	setvar TRASH_CAN_ID, 13
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan14::
	lockall
	setvar TRASH_CAN_ID, 14
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan15::
	lockall
	setvar TRASH_CAN_ID, 15
	goto VermilionCity_Gym_EventScript_TrashCan
	end

VermilionCity_Gym_EventScript_TrashCan::
	copyvar SWITCH1_ID, VAR_TEMP_0
	copyvar SWITCH2_ID, VAR_TEMP_1
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_LocksAlreadyOpen
	goto_if_set FOUND_FIRST_SWITCH, VermilionCity_Gym_EventScript_TrySwitchTwo
	goto_if_eq SWITCH1_ID, TRASH_CAN_ID, VermilionCity_Gym_EventScript_FoundSwitchOne
	msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
	releaseall
	end

VermilionCity_Gym_EventScript_FoundSwitchOne::
	msgbox VermilionCity_Gym_Text_SwitchUnderTrashFirstLockOpened
	playse SE_PIN
	waitse
	call VermilionCity_Gym_EventScript_SetOneBeamOff
	special DrawWholeMapView
	setflag FOUND_FIRST_SWITCH
	releaseall
	end

VermilionCity_Gym_EventScript_TrySwitchTwo::
	goto_if_eq SWITCH2_ID, TRASH_CAN_ID, VermilionCity_Gym_EventScript_FoundSwitchTwo
	msgbox VermilionCity_Gym_Text_OnlyTrashLocksWereReset
	clearflag FOUND_FIRST_SWITCH
	special SetVermilionTrashCans
	copyvar VAR_TEMP_0, SWITCH1_ID
	copyvar VAR_TEMP_1, SWITCH2_ID
	call VermilionCity_Gym_EventScript_SetBeamsOn
	special DrawWholeMapView
	releaseall
	end

VermilionCity_Gym_EventScript_FoundSwitchTwo::
	msgbox VermilionCity_Gym_Text_SecondLockOpened
	closemessage
	call VermilionCity_Gym_EventScript_SetBeamsOff
	special DrawWholeMapView
	playse SE_UNLOCK
	waitse
	setflag FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES
	releaseall
	end

VermilionCity_Gym_EventScript_LocksAlreadyOpen::
	msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
	releaseall
	end

VermilionCity_Gym_EventScript_SetBeamsOn::
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_On, 1
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_On, 1
	setmetatile 5, 6, METATILE_VermilionGym_Beam_MidTop, 1
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_On, 1
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_On, 1
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_On, 1
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_On, 1
	setmetatile 5, 7, METATILE_VermilionGym_Beam_MidBottom, 1
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_On, 1
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_On, 1
	return

VermilionCity_Gym_EventScript_GymGuy::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_VERMILION_GYM, VermilionCity_Gym_EventScript_GymGuyPostVictory
	msgbox VermilionCity_Gym_Text_GymGuyAdvice
	release
	end

VermilionCity_Gym_EventScript_GymGuyPostVictory::
	msgbox VermilionCity_Gym_Text_GymGuyPostVictory
	release
	end

VermilionCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE11_GET, VermilionCity_Gym_EventScript_GymStatuePostVictory
	msgbox VermilionCity_Gym_Text_GymStatue
	releaseall
	end

VermilionCity_Gym_EventScript_GymStatuePostVictory::
	msgbox VermilionCity_Gym_Text_GymStatuePlayerWon
	releaseall
	end

VermilionCity_Gym_EventScript_Gregory::
	trainerbattle_single TRAINER_GREGORY_HNS, VermilionGym_Text_GentlemanGregorySeen, VermilionGym_Text_GentlemanGregoryBeaten
	msgbox VermilionGym_Text_GentlemanGregoryAfter, MSGBOX_AUTOCLOSE
	end

VermilionCity_Gym_EventScript_Vincent::
	trainerbattle_single TRAINER_VINCENT_HNS, VermilionGym_Text_GuitaristVincentSeen, VermilionGym_Text_GuitaristVincentBeaten
	msgbox VermilionGym_Text_GuitaristVincentAfter, MSGBOX_AUTOCLOSE
	end

VermilionCity_Gym_EventScript_Horton::
	trainerbattle_single TRAINER_HORTON_HNS, VermilionGym_Text_JugglerHortonSeen, VermilionGym_Text_JugglerHortonBeaten
	msgbox VermilionGym_Text_JugglerHortonAfter, MSGBOX_AUTOCLOSE
	end

VermilionCity_Gym_EventScript_Surge::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_VERMILION_GYM, VermilionCity_Gym_EventScript_Surge_Defeated
	msgbox VermilionGym_Text_LtSurgeIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_LTSURGE_HNS, VermilionGym_Text_LtSurgeWinLoss
	message VermilionGym_Text_ReceivedThunderBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox VermilionGym_Text_ThunderBadgeInfo, MSGBOX_DEFAULT
	setflag FLAG_BADGE11_GET
	setflag FLAG_DEFEATED_VERMILION_GYM
	addvar VAR_NUM_BADGES, 1
	setvar VAR_0x8008, 11
	call Common_EventScript_SetGymTrainers_hns
	checkitem ITEM_TM_SHOCK_WAVE
	call_if_eq VAR_RESULT, TRUE, VermilionCity_Gym_EventScript_GiveThunderstone
	call_if_eq VAR_RESULT, FALSE, VermilionCity_Gym_EventScript_GiveTM
	clearflag FLAG_HIDE_PLANT_SURGE
	closemessage
	release
	end

VermilionCity_Gym_EventScript_GiveThunderstone::
	msgbox VermilionGym_Text_LtSurgeThunderstone, MSGBOX_DEFAULT
	giveitem ITEM_THUNDER_STONE
	return
VermilionCity_Gym_EventScript_GiveTM::
	msgbox VermilionGym_Text_LtSurgeTm, MSGBOX_DEFAULT
	giveitem ITEM_TM_SHOCK_WAVE
	return

VermilionCity_Gym_EventScript_Surge_Defeated::
	msgbox VermilionGym_Text_LtSurgePostBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

VermilionGym_Text_LtSurgeIntro:
	.string "Bob: Hey, du kleiner Wicht!\p"
	.string "Ich muss es dir lassen.\p"
	.string "Dich mir zu stellen ist nicht\n"
	.string "klug, doch Mut beweist du!\p"
	.string "Bei Elektro-Pokémon bin ich\n"
	.string "die Nummer eins!\p"
	.string "Auf dem Schlachtfeld habe\n"
	.string "ich nie verloren.\p"
	.string "Ich werde dich Schocken, wie\n"
	.string "einst meine Feinde im Krieg!$"

VermilionGym_Text_LtSurgeWinLoss:
	.string "Bob: Arrrgh! Du bist stark!\p"
	.string "Okay, Kleiner. Du bekommst\n"
	.string "den Donnerorden!$"

VermilionGym_Text_ReceivedThunderBadge:
	.string "{PLAYER} erhielt Donnerorden.$"

VermilionGym_Text_ThunderBadgeInfo:
	.string "Bob: Donnerorden erhöht die\n"
	.string "Geschwindigkeit der Pokémon.\p"
	.string "Betrachte ihn als Beweis,\n"
	.string "dass du mich besiegt hast.\p"
	.string "Trage ihn stolz, klar?$"

VermilionGym_Text_LtSurgeTm:
	.string "Und nimm diese VM. Sie hat mir\n"
	.string "im Krieg gute Dienste geleistet!$"

VermilionGym_Text_LtSurgeThunderstone:
	.string "Und nimm diesen Stein. Er hat\n"
	.string "echte Donnerkraft!$"


VermilionGym_Text_LtSurgePostBattle:
	.string "Bob: Hey, Kleiner! Immer noch\n"
	.string "am Trainieren?\p"
	.string "Meine Pokémon und ich sind\n"
	.string "immer noch dabei!$"

VermilionGym_Text_SurgeRematch:
	.string "Bob: Also, du bist jetzt\n"
	.string "KANTO-CHAMPION!\p"
	.string "Beeindruckend, Kleiner!\n"
	.string "Doch denk nicht, dass ich fertig\l"
	.string "bin!\p"
	.string "Wie wär's mit einer Revanche?$"

VermilionGym_Text_SurgeRematchDefeat:
	.string "Bob: Arrrgh! Du bist immer noch\n"
	.string "so stark!$"

VermilionGym_Text_GentlemanGregorySeen:
	.string "Willst du Major Bob besiegen?\p"
	.string "Nicht wenn ich es verhindern kann!$"

VermilionGym_Text_GentlemanGregoryBeaten:
	.string "Entschuldigung, Major Bob!\n"
	.string "Ich habe versagt!$"

VermilionGym_Text_GentlemanGregoryAfter:
	.string "Als ich noch in der Armee war,\n"
	.string "rettete Major Bob mein Leben.$"

VermilionGym_Text_GuitaristVincentSeen:
	.string "Major Bob erkannte mein Potenzial\n"
	.string "mit Elektro-Pokémon.\p"
	.string "Denkst du, du kannst mich besiegen?$"

VermilionGym_Text_GuitaristVincentBeaten:
	.string "Oh, wie schockierend!$"

VermilionGym_Text_GuitaristVincentAfter:
	.string "Wenn die Fallen der Arena funktioniert\n"
	.string "hätten, wärst du erledigt gewesen…$"

VermilionGym_Text_JugglerHortonSeen:
	.string "Ich werde dich besiegen!\n"
	.string "Bereit für einen Schock!$"

VermilionGym_Text_JugglerHortonBeaten:
	.string "Gwaaah! Ich wurde überrannt…$"

VermilionGym_Text_JugglerHortonAfter:
	.string "Machs dir nicht zu bequem,\n"
	.string "weil du mich besiegt hast…\p"
	.string "Major Bob ist wirklich hart.$"

VermilionCity_Gym_Text_GymGuyAdvice::
	.string "Yo!\n"
	.string "CHAMP in spe!\p"
	.string "MAJOR BOB hat einen Spitznamen.\p"
	.string "Die Leute nennen ihn den\n"
	.string "Blitz-Amerikaner!\p"
	.string "Er ist ein Experte für Elektro-\n"
	.string "POKÉMON.\p"
	.string "FLUG- und WASSER-POKÉMON haben\n"
	.string "einen Nachteil gegen Elektro.\p"
	.string "Pass auch auf Paralyse auf.\p"
	.string "MAJOR BOB ist sehr vorsichtig.\p"
	.string "Er hat sich eingeschlossen, also\n"
	.string "wird es nicht einfach sein,\l"
	.string "zu ihm zu gelangen.$"

VermilionCity_Gym_Text_GymGuyPostVictory::
	.string "Whew!\n"
	.string "Elektrifizierend!\p"
	.string "Das macht mich nervös.$"

VermilionCity_Gym_Text_GymStatue::
    .string "ORANIA POKéMON ARENA\n"
    .string "LEITER: MAJOR BOB\p"
	.string "GEWINNER:\n"
	.string "BLAU, ROT$"


VermilionCity_Gym_Text_GymStatuePlayerWon::
    .string "ORANIA POKéMON ARENA\n"
    .string "LEITER: MAJOR BOB\p"
	.string "GEWINNER:\n"
	.string "BLAU, ROT, {PLAYER}$"

VermilionCity_Gym_Text_NopeOnlyTrashHere::
	.string "Nein!\n"
	.string "Hier ist nur Müll.$"

VermilionCity_Gym_Text_SwitchUnderTrashFirstLockOpened::
	.string "Hey! Unter dem Müll ist ein\n"
	.string "Schalter! Drück ihn!\p"
	.string "Das erste Elektroschloss\n"
	.string "wurde geöffnet!$"

VermilionCity_Gym_Text_SecondLockOpened::
	.string "Das zweite Elektroschloss wurde\n"
	.string "geöffnet! Die Tür ist auf!$"

VermilionCity_Gym_Text_OnlyTrashLocksWereReset::
	.string "Nein!\n"
	.string "Hier ist nur Müll.\p"
	.string "Hey!\n"
	.string "Die Elektroschlösser wurden\l"
	.string "zurückgesetzt!$"


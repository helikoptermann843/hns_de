BattleFrontier_Lounge7_hns_MapScripts::
	.byte 0

@special ChooseMonForMoveTutor
BattleFrontier_Lounge7_EventScript_LeftMoveTutor_hns::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_1
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_AlreadyMetLeftTutor_hns
	msgbox BattleFrontier_Lounge7_Text_LeftTutorIntro_hns, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_hns
	end

BattleFrontier_Lounge7_EventScript_AlreadyMetLeftTutor_hns::
	msgbox BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_hns
	end

BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove_hns::
	message BattleFrontier_Lounge7_Text_TeachWhichMove_hns
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_Softboiled_hns
	case 1, BattleFrontier_Lounge7_EventScript_SeismicToss_hns
	case 2, BattleFrontier_Lounge7_EventScript_DreamEater_hns
	case 3, BattleFrontier_Lounge7_EventScript_MegaPunch_hns
	case 4, BattleFrontier_Lounge7_EventScript_MegaKick_hns
	case 5, BattleFrontier_Lounge7_EventScript_BodySlam_hns
	case 6, BattleFrontier_Lounge7_EventScript_RockSlide_hns
	case 7, BattleFrontier_Lounge7_EventScript_Counter_hns
	case 8, BattleFrontier_Lounge7_EventScript_ThunderWave_hns
	case 9, BattleFrontier_Lounge7_EventScript_SwordsDance_hns
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns_hns
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns_hns
	end

BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_hns::
	message BattleFrontier_Lounge7_Text_TeachWhichMove_hns
	waitmessage
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_Softboiled_hns
	case 1, BattleFrontier_Lounge7_EventScript_SeismicToss_hns
	case 2, BattleFrontier_Lounge7_EventScript_DreamEater_hns
	case 3, BattleFrontier_Lounge7_EventScript_MegaPunch_hns
	case 4, BattleFrontier_Lounge7_EventScript_MegaKick_hns
	case 5, BattleFrontier_Lounge7_EventScript_BodySlam_hns
	case 6, BattleFrontier_Lounge7_EventScript_RockSlide_hns
	case 7, BattleFrontier_Lounge7_EventScript_Counter_hns
	case 8, BattleFrontier_Lounge7_EventScript_ThunderWave_hns
	case 9, BattleFrontier_Lounge7_EventScript_SwordsDance_hns
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns_hns
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns_hns
	end

BattleFrontier_Lounge7_EventScript_Softboiled_hns::
	setvar VAR_0x8008, 16
	setvar VAR_0x8005, MOVE_SOFT_BOILED
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_SeismicToss_hns::
	setvar VAR_0x8008, 24
	setvar VAR_0x8005, MOVE_SEISMIC_TOSS
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_DreamEater_hns::
	setvar VAR_0x8008, 24
	setvar VAR_0x8005, MOVE_DREAM_EATER
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_MegaPunch_hns::
	setvar VAR_0x8008, 24
	setvar VAR_0x8005, MOVE_MEGA_PUNCH
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_MegaKick_hns::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_MEGA_KICK
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_BodySlam_hns::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_BODY_SLAM
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_RockSlide_hns::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_ROCK_SLIDE
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_Counter_hns::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_COUNTER
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_ThunderWave_hns::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_THUNDER_WAVE
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_SwordsDance_hns::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_SWORDS_DANCE
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_RightMoveTutor_hns::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_2
	goto_if_set FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_AlreadyMetRightTutor_hns
	msgbox BattleFrontier_Lounge7_Text_RightTutorIntro_hns, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_hns
	end

BattleFrontier_Lounge7_EventScript_AlreadyMetRightTutor_hns::
	msgbox BattleFrontier_Lounge7_Text_RightTutorWelcomeBack_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_hns
	end

BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove_hns::
	message BattleFrontier_Lounge7_Text_TeachWhichMove_hns
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_DefenseCurl_hns
	case 1, BattleFrontier_Lounge7_EventScript_Snore_hns
	case 2, BattleFrontier_Lounge7_EventScript_MudSlap_hns
	case 3, BattleFrontier_Lounge7_EventScript_Swift_hns
	case 4, BattleFrontier_Lounge7_EventScript_IcyWind_hns
	case 5, BattleFrontier_Lounge7_EventScript_Endure_hns
	case 6, BattleFrontier_Lounge7_EventScript_PsychUp_hns
	case 7, BattleFrontier_Lounge7_EventScript_IcePunch_hns
	case 8, BattleFrontier_Lounge7_EventScript_ThunderPunch_hns
	case 9, BattleFrontier_Lounge7_EventScript_FirePunch_hns
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns_hns
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns_hns
	end

BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_hns::
	message BattleFrontier_Lounge7_Text_TeachWhichMove_hns
	waitmessage
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_DefenseCurl_hns
	case 1, BattleFrontier_Lounge7_EventScript_Snore_hns
	case 2, BattleFrontier_Lounge7_EventScript_MudSlap_hns
	case 3, BattleFrontier_Lounge7_EventScript_Swift_hns
	case 4, BattleFrontier_Lounge7_EventScript_IcyWind_hns
	case 5, BattleFrontier_Lounge7_EventScript_Endure_hns
	case 6, BattleFrontier_Lounge7_EventScript_PsychUp_hns
	case 7, BattleFrontier_Lounge7_EventScript_IcePunch_hns
	case 8, BattleFrontier_Lounge7_EventScript_ThunderPunch_hns
	case 9, BattleFrontier_Lounge7_EventScript_FirePunch_hns
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns_hns
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns_hns
	end

BattleFrontier_Lounge7_EventScript_DefenseCurl_hns::
	setvar VAR_0x8008, 16
	setvar VAR_0x8005, MOVE_DEFENSE_CURL
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_Snore_hns::
	setvar VAR_0x8008, 24
	setvar VAR_0x8005, MOVE_SNORE
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_MudSlap_hns::
	setvar VAR_0x8008, 24
	setvar VAR_0x8005, MOVE_MUD_SLAP
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_Swift_hns::
	setvar VAR_0x8008, 24
	setvar VAR_0x8005, MOVE_SWIFT
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_IcyWind_hns::
	setvar VAR_0x8008, 24
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_Endure_hns::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_ENDURE
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_PsychUp_hns::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_PSYCH_UP
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_IcePunch_hns::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_ICE_PUNCH
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_ThunderPunch_hns::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_FirePunch_hns::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns_hns::
	special CloseBattleFrontierTutorWindow
	special CloseBattlePointsWindow
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge7_EventScript_CancelChooseMon_hns_hns::
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo_hns, MSGBOX_DEFAULT
	release
	end

@ VAR_0x8008 is the price
@ VAR_TEMP_C is the scroll multichoice ID
@ VAR_TEMP_FRONTIER_TUTOR_SELECTION is the move selection
@ VAR_TEMP_FRONTIER_TUTOR_ID is which move tutor was spoken to
BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns::
	special BufferBattleFrontierTutorMoveName
	buffernumberstring STR_VAR_2, VAR_0x8008
	msgbox BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints_hns, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge7_EventScript_ChooseNewMove_hns
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_Lounge7_EventScript_TeachTutorMove_hns
	msgbox BattleFrontier_Lounge7_Text_HaventGotEnoughPoints_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_ChooseNewMove_hns
	end


BattleFrontier_Lounge7_EventScript_TeachTutorMove_hns::
	msgbox BattleFrontier_Lounge7_Text_TeachMoveToWhichMon_hns, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special CloseBattlePointsWindow
	special CloseBattleFrontierTutorWindow
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
	waitstate
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_Lounge7_EventScript_CancelChooseMon_hns_hns
	msgbox BattleFrontier_Lounge7_Text_IllTakeBattlePoints_hns, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	release
	end

BattleFrontier_Lounge7_EventScript_ChooseNewMove_hns::
	goto_if_eq VAR_TEMP_FRONTIER_TUTOR_ID, 0, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove_hns
	goto_if_eq VAR_TEMP_FRONTIER_TUTOR_ID, 2, BattleFrontier_Lounge7_EventScript_ChooseNewElementalTutorMove
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove_hns
	end

BattleFrontier_Lounge7_EventScript_Sailor_hns::
	msgbox BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong_hns, MSGBOX_NPC
	end

BattleFrontier_Lounge7_EventScript_Gentleman_hns::
	msgbox BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful_hns, MSGBOX_NPC
	end

BattleFrontier_Lounge7_EventScript_ElementalMoveTutor::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_3
	goto_if_set FLAG_MET_FRONTIER_ELEMENTAL_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_AlreadyMetElementalTutor
	msgbox BattleFrontier_Lounge7_Text_ElementalTutorIntro, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_ELEMENTAL_MOVE_TUTOR
	goto BattleFrontier_Lounge7_EventScript_ChooseElementalTutorMove
	end

BattleFrontier_Lounge7_EventScript_AlreadyMetElementalTutor::
	msgbox BattleFrontier_Lounge7_Text_ElementalTutorWelcomeBack, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_ChooseElementalTutorMove
	end

BattleFrontier_Lounge7_EventScript_ChooseElementalTutorMove::
	message BattleFrontier_Lounge7_Text_TeachWhichMoveElemental
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 2
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_3
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_FrenzyPlant
	case 1, BattleFrontier_Lounge7_EventScript_BlastBurn
	case 2, BattleFrontier_Lounge7_EventScript_HydroCannon
	case 3, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns
	end

BattleFrontier_Lounge7_EventScript_ChooseNewElementalTutorMove::
	message BattleFrontier_Lounge7_Text_TeachWhichMoveElemental
	waitmessage
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 2
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_3
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_FrenzyPlant
	case 1, BattleFrontier_Lounge7_EventScript_BlastBurn
	case 2, BattleFrontier_Lounge7_EventScript_HydroCannon
	case 3, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns
	end

BattleFrontier_Lounge7_EventScript_FrenzyPlant::
	setvar VAR_0x8008, 64
	setvar VAR_0x8005, MOVE_FRENZY_PLANT
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_BlastBurn::
	setvar VAR_0x8008, 64
	setvar VAR_0x8005, MOVE_BLAST_BURN
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_HydroCannon::
	setvar VAR_0x8008, 64
	setvar VAR_0x8005, MOVE_HYDRO_CANNON
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection_hns
	end

BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect_hns::
	special CloseBattleFrontierTutorWindow
	special CloseBattlePointsWindow
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge7_EventScript_CancelChooseMon_hns::
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
	release
	end


BattleFrontier_Lounge7_Text_LeftTutorIntro_hns:
	.string "Muahahahaha!\p"
	.string "Du wirst es mir wahrscheinlich nicht\n"
	.string "glauben, aber ich war eine starke\l"
	.string "TRAINERin.\p"
	.string "Ich war die stärkste SCHÖNHEIT, die es\n"
	.string "weit und breit gab!\p"
	.string "… … … … …\n"
	.string "… …\p"
	.string "Und?\n"
	.string "Glaubst du mir etwa nicht? Nein?\p"
	.string "Ich bin nicht so wie die Angeberin\n"
	.string "hier neben mir.\p"
	.string "ICH habe wirklich Talent!\p"
	.string "Das werde ich dir beweisen.\p"
	.string "Ich kann deinen POKéMON Spezial-\n"
	.string "Attacken beibringen, die auch\l"
	.string "noch niedlich sind. Aber das\l"
	.string "kostet eine Kleinigkeit. Dafür möchte\l"
	.string "ich von dir Gewinnpunkte haben.$"

BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack_hns:
	.string "Muahahahaha!\p"
	.string "Soll ich deinen POKéMON ein paar\n"
	.string "hübsche Spezial-Attacken beibringen?$"

BattleFrontier_Lounge7_Text_TeachWhichMove_hns:
	.string "Schön, schön. Sehr gut. Welche\n"
	.string "Attacke soll ich ihnen beibringen?$"

BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints_hns:
	.string "Die Attacke {STR_VAR_1} soll es sein?\n"
	.string "Die kostet dich {STR_VAR_2}\l"
	.string "Gewinnpunkte.$"

BattleFrontier_Lounge7_Text_TeachMoveToWhichMon_hns:
	.string "Schön, schön. Und welchem POKéMON\n"
	.string "soll ich sie beibringen?$"

BattleFrontier_Lounge7_Text_HaventGotEnoughPoints_hns:
	.string "Was… Du hast ja gar\n"
	.string "nicht genug Gewinnpunkte!$"

BattleFrontier_Lounge7_Text_IllTakeBattlePoints_hns:
	.string "Siehst du nun, wie talentiert ich bin?\n"
	.string "Und nun hätte ich gerne deine\l"
	.string "Gewinnpunkte. Danke!$"

BattleFrontier_Lounge7_Text_YouDontWantTo_hns:
	.string "Was denn? Was denn?\n"
	.string "Du musst doch nicht gleich…\p"
	.string "Wenn du sehen willst, wie talentiert\n"
	.string "ich bin, dann komm wieder. Jederzeit!$"

BattleFrontier_Lounge7_Text_RightTutorIntro_hns:
	.string "Hihihihi!\p"
	.string "Auch wenn es schwer zu glauben ist:\n"
	.string "Ich war einmal eine\l"
	.string "grandiose TRAINERin!\p"
	.string "Ich hatte den Ruf einer unschlagbaren\n"
	.string "SCHWIMMERIN. Das ist wahr!\p"
	.string "… … … … …\n"
	.string "… …\p"
	.string "Wie bitte?\n"
	.string "Du glaubst mir nicht!\p"
	.string "Ich bin nicht so närrisch wie die da\n"
	.string "drüben. Ich habe wirklich Erfahrung!\p"
	.string "Das kann ich dir gerne beweisen!\n"
	.string "Ich kann deinen POKéMON starke und\l"
	.string "schöne Attacken beibringen.\p"
	.string "Aber das kostet dich etwas. Bring ich\n"
	.string "deinen POKéMON etwas bei, bekomme\l"
	.string "ich von dir Gewinnpunkte.$"

BattleFrontier_Lounge7_Text_RightTutorWelcomeBack_hns:
	.string "Hihihihi!\p"
	.string "Ich soll deinen POKéMON starke und\n"
	.string "schöne Attacken beibringen?$"

BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong_hns:
	.string "Diese Damen dahinten, die beschimpfen\n"
	.string "sich ständig. Du denkst bestimmt, die\l"
	.string "verstehen sich überhaupt nicht.\p"
	.string "Aber in Wahrheit würde die eine keinen\n"
	.string "Schritt ohne die andere machen.$"

BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful_hns:
	.string "Als ich noch ein junger Spund, ein\n"
	.string "TEENAGER, war, waren diese Damen stark\l"
	.string "und wunderschön.\p"
	.string "Wir TRAINER haben sie vergöttert.\p"
	.string "Und auch jetzt, im Alter, haben ihre\n"
	.string "Fähigkeiten nicht nachgelassen.\p"
	.string "Im Gegenteil: Ihre POKéMON-Attacken\n"
	.string "sind einfach vollkommen.\p"
	.string "Aber… Trotzdem denke ich…\p"
	.string "Die Zeit ist grausam…$"

BattleFrontier_Lounge7_Text_SoftboiledDesc_hns::
	.string "Stellt bis zur Hälfte\n"
	.string "der max. KP des\l"
	.string "Nutzers wieder her.$"

BattleFrontier_Lounge7_Text_SeismicTossDesc_hns::
	.string "Verursacht Schaden\n"
	.string "gleich dem Level\l"
	.string "des Nutzers.$"

BattleFrontier_Lounge7_Text_DreamEaterDesc_hns::
	.string "Stellt die Hälfte\n"
	.string "des an einem\l"
	.string "schlafenden Gegner\l"
	.string "verursachten\l"
	.string "Schadens wieder her.$"

BattleFrontier_Lounge7_Text_MegaPunchDesc_hns::
	.string "Ein starker Schlag\n"
	.string "mit unglaublicher\l"
	.string "Kraft.$"

BattleFrontier_Lounge7_Text_MegaKickDesc_hns::
	.string "Ein extrem\n"
	.string "kraftvoller Tritt\l"
	.string "mit heftiger Wucht.$"

BattleFrontier_Lounge7_Text_BodySlamDesc_hns::
	.string "Ein Ganzkörperangriff,\n"
	.string "der Paralyse\l"
	.string "verursachen kann.$"

BattleFrontier_Lounge7_Text_RockSlideDesc_hns::
	.string "Große Felsbrocken\n"
	.string "werden geworfen.\l"
	.string "Kann Schrecken\l"
	.string "verursachen.$"

BattleFrontier_Lounge7_Text_CounterDesc_hns::
	.string "Vergilt jeden\n"
	.string "physischen Treffer\l"
	.string "mit doppelter Kraft.$"

BattleFrontier_Lounge7_Text_ThunderWaveDesc_hns::
	.string "Ein schwacher\n"
	.string "Elektrostoß, der\l"
	.string "den Gegner lähmt.$"

BattleFrontier_Lounge7_Text_SwordsDanceDesc_hns::
	.string "Ein Kampftanz,\n"
	.string "der den ANGRIFF\l"
	.string "stark erhöht.$"

BattleFrontier_Lounge7_Text_DefenseCurlDesc_hns::
	.string "Einrollen, um\n"
	.string "Schwachstellen zu\l"
	.string "verbergen und\l"
	.string "VERTEIDIGUNG\l"
	.string "zu erhöhen.$"

BattleFrontier_Lounge7_Text_SnoreDesc_hns::
	.string "Ein lauter Angriff,\n"
	.string "der nur im Schlaf\l"
	.string "eingesetzt werden\l"
	.string "kann.$"

BattleFrontier_Lounge7_Text_MudSlapDesc_hns::
	.string "Wirft Schlamm ins\n"
	.string "Gesicht des Gegners\l"
	.string "und senkt seine\l"
	.string "GENAUIGKEIT.$"

BattleFrontier_Lounge7_Text_SwiftDesc_hns::
	.string "Verschießt stern-\n"
	.string "förmige Strahlen,\l"
	.string "die nie verfehlen.$"

BattleFrontier_Lounge7_Text_IcyWindDesc_hns::
	.string "Ein eisiger Angriff,\n"
	.string "der die INIT des\l"
	.string "Gegners senkt.$"

BattleFrontier_Lounge7_Text_EndureDesc_hns::
	.string "Hält jeden Angriff\n"
	.string "1 Runde mit 1 KP\l"
	.string "stand.$"

BattleFrontier_Lounge7_Text_PsychUpDesc_hns::
	.string "Kopiert die Status-\n"
	.string "veränderungen des\l"
	.string "Gegners.$"

BattleFrontier_Lounge7_Text_IcePunchDesc_hns::
	.string "Ein eisiger Schlag,\n"
	.string "der den Gegner\l"
	.string "einfrieren kann.$"

BattleFrontier_Lounge7_Text_ThunderPunchDesc_hns::
	.string "Ein elektrischer\n"
	.string "Schlag, der den\l"
	.string "Gegner lähmen kann.$"

BattleFrontier_Lounge7_Text_FirePunchDesc_hns::
	.string "Ein feuriger Schlag,\n"
	.string "der den Gegner\l"
	.string "verbrennen kann.$"

@ HnS
BattleFrontier_Lounge7_Text_ElementalTutorIntro::
	.string "Zzzzzz…\p"
	.string "Was, wie, was?\p"
	.string "Oh, entschuldige, ich habe\n"
	.string "kurz gedöst.\p"
	.string "Ich bin der ELEMENTAR-MEISTER.\p"
	.string "Ich lehre den mächtigsten\n"
	.string "PFLANZEN-, FEUER- und\l"
	.string "WASSER-POKéMON starke Attacken.\p"
	.string "Willst du diese große Kraft\n"
	.string "erlernen?$"

BattleFrontier_Lounge7_Text_ElementalTutorWelcomeBack:
	.string "Zzzzzz…\p"
	.string "Was, wie, was, wer?\p"
	.string "Willst du die Macht meiner\n"
	.string "stärksten Attacken lernen?$"

BattleFrontier_Lounge7_Text_TeachWhichMoveElemental::
	.string "Welche Attacke passt wohl am\n"
	.string "besten zu deinem POKéMON?$"

BattleFrontier_Lounge7_Text_StrongElementalMoveDesc::
	.string "Sehr mächtig, doch\n"
	.string "der Anwender kann\n"
	.string "eine Runde nicht handeln.$"


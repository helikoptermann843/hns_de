BattleFrontier_Lounge7_MapScripts::
	.byte 0

@special ChooseMonForMoveTutor
BattleFrontier_Lounge7_EventScript_LeftMoveTutor::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_1
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_AlreadyMetLeftTutor
	msgbox BattleFrontier_Lounge7_Text_LeftTutorIntro, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove
	end

BattleFrontier_Lounge7_EventScript_AlreadyMetLeftTutor::
	msgbox BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove
	end

BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove::
	message BattleFrontier_Lounge7_Text_TeachWhichMove
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_Softboiled
	case 1, BattleFrontier_Lounge7_EventScript_SeismicToss
	case 2, BattleFrontier_Lounge7_EventScript_DreamEater
	case 3, BattleFrontier_Lounge7_EventScript_MegaPunch
	case 4, BattleFrontier_Lounge7_EventScript_MegaKick
	case 5, BattleFrontier_Lounge7_EventScript_BodySlam
	case 6, BattleFrontier_Lounge7_EventScript_RockSlide
	case 7, BattleFrontier_Lounge7_EventScript_Counter
	case 8, BattleFrontier_Lounge7_EventScript_ThunderWave
	case 9, BattleFrontier_Lounge7_EventScript_SwordsDance
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	end

BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove::
	message BattleFrontier_Lounge7_Text_TeachWhichMove
	waitmessage
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_Softboiled
	case 1, BattleFrontier_Lounge7_EventScript_SeismicToss
	case 2, BattleFrontier_Lounge7_EventScript_DreamEater
	case 3, BattleFrontier_Lounge7_EventScript_MegaPunch
	case 4, BattleFrontier_Lounge7_EventScript_MegaKick
	case 5, BattleFrontier_Lounge7_EventScript_BodySlam
	case 6, BattleFrontier_Lounge7_EventScript_RockSlide
	case 7, BattleFrontier_Lounge7_EventScript_Counter
	case 8, BattleFrontier_Lounge7_EventScript_ThunderWave
	case 9, BattleFrontier_Lounge7_EventScript_SwordsDance
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	end

BattleFrontier_Lounge7_EventScript_Softboiled::
	setvar VAR_0x8008, 16
	setvar VAR_0x8005, MOVE_SOFT_BOILED
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_SeismicToss::
	setvar VAR_0x8008, 24
	setvar VAR_0x8005, MOVE_SEISMIC_TOSS
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_DreamEater::
	setvar VAR_0x8008, 24
	setvar VAR_0x8005, MOVE_DREAM_EATER
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_MegaPunch::
	setvar VAR_0x8008, 24
	setvar VAR_0x8005, MOVE_MEGA_PUNCH
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_MegaKick::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_MEGA_KICK
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_BodySlam::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_BODY_SLAM
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_RockSlide::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_ROCK_SLIDE
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_Counter::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_COUNTER
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_ThunderWave::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_THUNDER_WAVE
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_SwordsDance::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_SWORDS_DANCE
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_RightMoveTutor::
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_2
	goto_if_set FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_AlreadyMetRightTutor
	msgbox BattleFrontier_Lounge7_Text_RightTutorIntro, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove
	end

BattleFrontier_Lounge7_EventScript_AlreadyMetRightTutor::
	msgbox BattleFrontier_Lounge7_Text_RightTutorWelcomeBack, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove
	end

BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove::
	message BattleFrontier_Lounge7_Text_TeachWhichMove
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_DefenseCurl
	case 1, BattleFrontier_Lounge7_EventScript_Snore
	case 2, BattleFrontier_Lounge7_EventScript_MudSlap
	case 3, BattleFrontier_Lounge7_EventScript_Swift
	case 4, BattleFrontier_Lounge7_EventScript_IcyWind
	case 5, BattleFrontier_Lounge7_EventScript_Endure
	case 6, BattleFrontier_Lounge7_EventScript_PsychUp
	case 7, BattleFrontier_Lounge7_EventScript_IcePunch
	case 8, BattleFrontier_Lounge7_EventScript_ThunderPunch
	case 9, BattleFrontier_Lounge7_EventScript_FirePunch
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	end

BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove::
	message BattleFrontier_Lounge7_Text_TeachWhichMove
	waitmessage
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 1
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_2
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_DefenseCurl
	case 1, BattleFrontier_Lounge7_EventScript_Snore
	case 2, BattleFrontier_Lounge7_EventScript_MudSlap
	case 3, BattleFrontier_Lounge7_EventScript_Swift
	case 4, BattleFrontier_Lounge7_EventScript_IcyWind
	case 5, BattleFrontier_Lounge7_EventScript_Endure
	case 6, BattleFrontier_Lounge7_EventScript_PsychUp
	case 7, BattleFrontier_Lounge7_EventScript_IcePunch
	case 8, BattleFrontier_Lounge7_EventScript_ThunderPunch
	case 9, BattleFrontier_Lounge7_EventScript_FirePunch
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	end

BattleFrontier_Lounge7_EventScript_DefenseCurl::
	setvar VAR_0x8008, 16
	setvar VAR_0x8005, MOVE_DEFENSE_CURL
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_Snore::
	setvar VAR_0x8008, 24
	setvar VAR_0x8005, MOVE_SNORE
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_MudSlap::
	setvar VAR_0x8008, 24
	setvar VAR_0x8005, MOVE_MUD_SLAP
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_Swift::
	setvar VAR_0x8008, 24
	setvar VAR_0x8005, MOVE_SWIFT
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_IcyWind::
	setvar VAR_0x8008, 24
	setvar VAR_0x8005, MOVE_ICY_WIND
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_Endure::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_ENDURE
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_PsychUp::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_PSYCH_UP
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_IcePunch::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_ICE_PUNCH
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_ThunderPunch::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_FirePunch::
	setvar VAR_0x8008, 48
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect::
	special CloseBattleFrontierTutorWindow
	special CloseBattlePointsWindow
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge7_EventScript_CancelChooseMon::
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
	release
	end

@ VAR_0x8008 is the price
@ VAR_TEMP_C is the scroll multichoice ID
@ VAR_TEMP_FRONTIER_TUTOR_SELECTION is the move selection
@ VAR_TEMP_FRONTIER_TUTOR_ID is which move tutor was spoken to
BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection::
	special BufferBattleFrontierTutorMoveName
	buffernumberstring STR_VAR_2, VAR_0x8008
	msgbox BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_Lounge7_EventScript_ChooseNewMove
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_Lounge7_EventScript_TeachTutorMove
	msgbox BattleFrontier_Lounge7_Text_HaventGotEnoughPoints, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_ChooseNewMove
	end


BattleFrontier_Lounge7_EventScript_TeachTutorMove::
	msgbox BattleFrontier_Lounge7_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special CloseBattlePointsWindow
	special CloseBattleFrontierTutorWindow
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
	waitstate
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_Lounge7_EventScript_CancelChooseMon
	msgbox BattleFrontier_Lounge7_Text_IllTakeBattlePoints, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	release
	end

BattleFrontier_Lounge7_EventScript_ChooseNewMove::
	goto_if_eq VAR_TEMP_FRONTIER_TUTOR_ID, 0, BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove
	end

BattleFrontier_Lounge7_EventScript_Sailor::
	msgbox BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong, MSGBOX_NPC
	end

BattleFrontier_Lounge7_EventScript_Gentleman::
	msgbox BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful, MSGBOX_NPC
	end

BattleFrontier_Lounge7_Text_LeftTutorIntro:
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
	.string "hier\n"
	.string "neben mir. ICH habe wirklich Talent!\p"
	.string "Das werde ich dir beweisen.\n"
	.string "Ich kann deinen POKéMON Spezial-\l"
	.string "Attacken beibringen,\p"
	.string "die auch noch niedlich sind. Aber das\n"
	.string "kostet eine Kleinigkeit. Dafür möchte\l"
	.string "ich von dir Gewinnpunkte haben.$"

BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack:
	.string "Muahahahaha!\p"
	.string "Soll ich deinen POKéMON ein paar\n"
	.string "hübsche Spezial-Attacken beibringen?$"

BattleFrontier_Lounge7_Text_TeachWhichMove:
	.string "Schön, schön. Sehr gut. Welche\n"
	.string "Attacke soll ich ihnen beibringen?$"

BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints:
	.string "Die Attacke {STR_VAR_1} soll es sein?\n"
	.string "Die kostet dich {STR_VAR_2}\l"
	.string "Gewinnpunkte.$"

BattleFrontier_Lounge7_Text_TeachMoveToWhichMon:
	.string "Schön, schön. Und welchem POKéMON\n"
	.string "soll ich sie beibringen?$"

BattleFrontier_Lounge7_Text_HaventGotEnoughPoints:
	.string "Was… Du hast ja gar\n"
	.string "nicht genug Gewinnpunkte!$"

BattleFrontier_Lounge7_Text_IllTakeBattlePoints:
	.string "Siehst du nun, wie talentiert ich bin?\n"
	.string "Und nun hätte ich gerne deine\l"
	.string "Gewinnpunkte. Danke!$"

BattleFrontier_Lounge7_Text_YouDontWantTo:
	.string "Was denn? Was denn?\n"
	.string "Du musst doch nicht gleich…\p"
	.string "Wenn du sehen willst, wie talentiert\n"
	.string "ich bin, dann komm wieder. Jederzeit!$"

BattleFrontier_Lounge7_Text_RightTutorIntro:
	.string "Hihihihi!\p"
	.string "Auch wenn es schwer zu glauben ist:\n"
	.string "Ich\n"
	.string "war einmal eine grandiose TRAINERin!\p"
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

BattleFrontier_Lounge7_Text_RightTutorWelcomeBack:
	.string "Hihihihi!\p"
	.string "Ich soll deinen POKéMON starke und\n"
	.string "schöne Attacken beibringen?$"

BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong:
	.string "Diese Damen dahinten, die beschimpfen\n"
	.string "sich ständig. Du denkst bestimmt, die\l"
	.string "verstehen sich überhaupt nicht.\p"
	.string "Aber in Wahrheit würde die eine keinen\n"
	.string "Schritt ohne die andere machen.$"

BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful:
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

BattleFrontier_Lounge7_Text_SoftboiledDesc::
	.string "Regeneriert bis\n"
	.string "zur Hälfte\n"
	.string "der max. KP.$"

BattleFrontier_Lounge7_Text_SeismicTossDesc::
	.string "Fügt Schaden\n"
	.string "In Höhe des Lv.\n"
	.string "des Nutzers zu.$"

BattleFrontier_Lounge7_Text_DreamEaterDesc::
	.string "Erhält die hälfte\n"
	.string "des zugefügten\n"
	.string "Schadens als KP.$"

BattleFrontier_Lounge7_Text_MegaPunchDesc::
	.string "Ein starker Hieb\n"
	.string "mit brachialer\n"
	.string "Gewalt.$"

BattleFrontier_Lounge7_Text_MegaKickDesc::
	.string "Extrem starker\n"
	.string "Kick mit\n"
	.string "Wucht dahinter.$"

BattleFrontier_Lounge7_Text_BodySlamDesc::
	.string "Benutzt vollen\n"
	.string "Körpereinsatz\n"
	.string "kann paralysieren.$"

BattleFrontier_Lounge7_Text_RockSlideDesc::
	.string "Große Felsen\n"
	.string "werden geworfen.\n"
	.string "Kann zurückschrecken.$"

BattleFrontier_Lounge7_Text_CounterDesc::
	.string "Kontert jeden\n"
	.string "physischen Hieb\n"
	.string "mit doppelter Kraft.$"

BattleFrontier_Lounge7_Text_ThunderWaveDesc::
	.string "Schwacher Strom-\n"
	.string "stoß, der Gegner\n"
	.string "lähmt.$"

BattleFrontier_Lounge7_Text_SwordsDanceDesc::
	.string "Kampftanz, der\n"
	.string "den ANGRIFF stark\n"
	.string "erhöht.$"

BattleFrontier_Lounge7_Text_DefenseCurlDesc::
	.string "Rollt sich ein,\n"
	.string "versteckt Schwächen\n"
	.string "und erhöht DEF.$"

BattleFrontier_Lounge7_Text_SnoreDesc::
	.string "Lauter Angriff,\n"
	.string "nur nutzbar im\n"
	.string "Schlaf.$"

BattleFrontier_Lounge7_Text_MudSlapDesc::
	.string "Wirft Schlamm ins\n"
	.string "Gesicht und senkt\n"
	.string "die Genauigkeit.$"

BattleFrontier_Lounge7_Text_SwiftDesc::
	.string "Sternförmige\n"
	.string "Strahlen, die\n"
	.string "nie verfehlen.$"

BattleFrontier_Lounge7_Text_IcyWindDesc::
	.string "Eisiger Angriff,\n"
	.string "senkt die\n"
	.string "INITIATIVE.$"

BattleFrontier_Lounge7_Text_EndureDesc::
	.string "Hält jedem\n"
	.string "Angriff 1 Runde\n"
	.string "stand, 1 KP bleibt.$"

BattleFrontier_Lounge7_Text_PsychUpDesc::
	.string "Kopiert Effekt(e)\n"
	.string "des Gegners und\n"
	.string "gibt sie weiter.$"

BattleFrontier_Lounge7_Text_IcePunchDesc::
	.string "Eisiger Schlag,\n"
	.string "kann den Gegner\n"
	.string "einfrieren.$"

BattleFrontier_Lounge7_Text_ThunderPunchDesc::
	.string "Elektrischer\n"
	.string "Schlag, kann den\n"
	.string "Gegner Paral.$"

BattleFrontier_Lounge7_Text_FirePunchDesc::
	.string "Feuriger Schlag,\n"
	.string "kann den Gegner\n"
	.string "verbrennen.$"

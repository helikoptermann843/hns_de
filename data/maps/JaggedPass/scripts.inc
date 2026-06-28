JaggedPass_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, JaggedPass_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, JaggedPass_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, JaggedPass_OnLoad
	.byte 0

JaggedPass_OnResume:
	setstepcallback STEP_CB_ASH
	call_if_eq VAR_JAGGED_PASS_STATE, 0, JaggedPass_EventScript_CheckHasMagmaEmblem
	end

JaggedPass_EventScript_CheckHasMagmaEmblem::
	checkitem ITEM_MAGMA_EMBLEM
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_SetReadyToOpenHideout
	return

JaggedPass_EventScript_SetReadyToOpenHideout::
	setvar VAR_JAGGED_PASS_STATE, 1
	return

JaggedPass_OnTransition:
	call_if_eq VAR_JAGGED_PASS_ASH_WEATHER, 1, JaggedPass_EventScript_SetWeatherAsh
	end

JaggedPass_EventScript_SetWeatherAsh::
	setweather WEATHER_VOLCANIC_ASH
	doweather
	return

JaggedPass_OnLoad:
	goto_if_le VAR_JAGGED_PASS_STATE, 1, JaggedPass_EventScript_ConcealHideoutEntrance
	end

JaggedPass_EventScript_ConcealHideoutEntrance::
	setmetatile 16, 17, METATILE_Lavaridge_RockWall, TRUE
	setmetatile 16, 18, METATILE_Lavaridge_RockWall, TRUE
	end

JaggedPass_EventScript_OpenMagmaHideout::
	lockall
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	msgbox JaggedPass_Text_BoulderShakingInResponseToEmblem, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, 1   @ vertical pan
	setvar VAR_0x8005, 1   @ horizontal pan
	setvar VAR_0x8006, 16  @ num shakes
	setvar VAR_0x8007, 3   @ shake delay
	special ShakeCamera
	waitstate
	playse SE_EFFECTIVE
	setmetatile 16, 17, METATILE_Lavaridge_CaveEntrance_Top, TRUE
	setmetatile 16, 18, METATILE_Lavaridge_CaveEntrance_Bottom, FALSE
	special DrawWholeMapView
	delay 30
	setvar VAR_JAGGED_PASS_STATE, 2
	waitse
	releaseall
	end

JaggedPass_EventScript_MagmaHideoutGuard::
	lockall
	goto_if_set FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS, JaggedPass_EventScript_GuardDefeated
	waitse
	playse SE_PIN
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FacePlayer
	waitmovement 0
	msgbox JaggedPass_Text_GruntIntro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_JAGGED_PASS, JaggedPass_Text_GruntDefeat
	setflag FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

JaggedPass_EventScript_GuardDefeated::
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FacePlayer
	waitmovement 0
	msgbox JaggedPass_Text_GoWhereverYouWant, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAGMA_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

JaggedPass_EventScript_Eric::
	trainerbattle_single TRAINER_ERIC, JaggedPass_Text_EricIntro, JaggedPass_Text_EricDefeat
	msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
	end

JaggedPass_EventScript_Diana::
	trainerbattle_single TRAINER_DIANA_1, JaggedPass_Text_DianaIntro, JaggedPass_Text_DianaDefeat, JaggedPass_EventScript_RegisterDiana
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_DianaRematch
	msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_DEFAULT
	release
	end

JaggedPass_EventScript_RegisterDiana::
	special PlayerFaceTrainerAfterBattle
	msgbox JaggedPass_Text_DianaRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_DIANA_1
	release
	end

JaggedPass_EventScript_DianaRematch::
	trainerbattle_rematch TRAINER_DIANA_1, JaggedPass_Text_DianaRematchIntro, JaggedPass_Text_DianaRematchDefeat
	msgbox JaggedPass_Text_DianaPostRematch, MSGBOX_AUTOCLOSE
	end

JaggedPass_EventScript_Ethan::
	trainerbattle_single TRAINER_ETHAN_1, JaggedPass_Text_EthanIntro, JaggedPass_Text_EthanDefeat, JaggedPass_EventScript_RegisterEthan
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_EthanRematch
	msgbox JaggedPass_Text_EthanPostBattle, MSGBOX_DEFAULT
	release
	end

JaggedPass_EventScript_RegisterEthan::
	special PlayerFaceTrainerAfterBattle
	msgbox JaggedPass_Text_EthanRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ETHAN_1
	release
	end

JaggedPass_EventScript_EthanRematch::
	trainerbattle_rematch TRAINER_ETHAN_1, JaggedPass_Text_EthanRematchIntro, JaggedPass_Text_EthanRematchDefeat
	msgbox JaggedPass_Text_EthanPostRematch, MSGBOX_AUTOCLOSE
	end

JaggedPass_EventScript_Julio::
	trainerbattle_single TRAINER_JULIO, JaggedPass_Text_JulioIntro, JaggedPass_Text_JulioDefeat
	msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
	end

JaggedPass_EventScript_Autumn::
	trainerbattle_single TRAINER_AUTUMN, JaggedPass_Text_AutumnIntro, JaggedPass_Text_AutumnDefeat
	msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
	end

JaggedPass_Text_EricIntro:
	.string "SCHLOTBERG STEILPASS…\p"
	.string "Davon habe ich immer geträumt, wenn\n"
	.string "ich in den Bergen unterwegs war.\p"
	.string "Zerklüftete Massive…\n"
	.string "Das bringt meine Seele zum Erbeben.$"

JaggedPass_Text_EricDefeat:
	.string "Verlieren ist bitter.$"

JaggedPass_Text_EricPostBattle:
	.string "Ja, ich bin im Umgang mit POKéMON\n"
	.string "nicht gerade talentiert.\p"
	.string "Aber wenn es um die Leidenschaft für\n"
	.string "die Berge geht, stecke ich dich locker\l"
	.string "in die Tasche!$"

JaggedPass_Text_DianaIntro:
	.string "Dich habe ich hier noch nie gesehen.\n"
	.string "Dieser Platz eignet sich nicht für ein\l"
	.string "Picknick.$"

JaggedPass_Text_DianaDefeat:
	.string "Oooh, nein!\n"
	.string "Das liegt am Boden. Er ist zu uneben!$"

JaggedPass_Text_DianaPostBattle:
	.string "Stell dir mal vor!\p"
	.string "Einige fahren tatsächlich mit ihren\n"
	.string "Fahrrädern diesen zerklüfteten Pass\l"
	.string "hinauf.$"

JaggedPass_Text_DianaRegister:
	.string "Kommst du irgendwann wieder in diese\n"
	.string "Gegend? Ich würde gerne wieder gegen\l"
	.string "dich antreten.$"

JaggedPass_Text_DianaRematchIntro:
	.string "Picknicke machen überall und immer\n"
	.string "Spaß. Und PKMN leisten mir dabei\l"
	.string "Gesellschaft!$"

JaggedPass_Text_DianaRematchDefeat:
	.string "Ich habe nur verloren, weil der Boden\n"
	.string "wirklich sehr uneben ist.$"

JaggedPass_Text_DianaPostRematch:
	.string "Ich werde meine Niederlage einfach\n"
	.string "vergessen und mit dem Rad den Pass\l"
	.string "entlangdüsen.$"

JaggedPass_Text_EthanIntro:
	.string "Der STEILPASS ist sehr schwer zu Fuß\n"
	.string "zu meistern. Aber ein guter Ort zum\l"
	.string "Trainieren.$"

JaggedPass_Text_EthanDefeat:
	.string "Schon vorbei? Ich habe überhaupt\n"
	.string "keinen sicheren Stand gehabt.$"

JaggedPass_Text_EthanPostBattle:
	.string "Wenn ich ein KUNSTRAD hätte, könnte\n"
	.string "ich die Abhänge einfach überspringen.$"

JaggedPass_Text_EthanRegister:
	.string "Wenn ich mich erstmal an diesen\n"
	.string "unebenen Boden gewöhnt habe,\l"
	.string "werde ich mit Sicherheit gewinnen!\p"
	.string "Trägst du mich in deinen POKéNAV ein?$"

JaggedPass_Text_EthanRematchIntro:
	.string "Ich habe mich an die Unebenheiten ge-\n"
	.string "wöhnt. Ich singe beim Klettern.$"

JaggedPass_Text_EthanRematchDefeat:
	.string "Auf diesem unebenen Boden ist es wirk-\n"
	.string "lich nicht leicht, gut zu kämpfen.$"

JaggedPass_Text_EthanPostRematch:
	.string "Ich sollte mir ein KUNSTRAD von RADLA\n"
	.string "in MALVENFROH CITY besorgen…$"

JaggedPass_Text_GruntIntro:
	.string "Wah! Was machst du hier?\p"
	.string "Was ich hier mache?\p"
	.string "Was geht dich das an?$"

JaggedPass_Text_GruntDefeat:
	.string "Arrrrgh…\p"
	.string "Ich hätte mich besser sofort in\n"
	.string "unserem VERSTECK versteckt…$"

JaggedPass_Text_GoWhereverYouWant:
	.string "Okay, oh-kay!\n"
	.string "Ich geb es ja zu - du bist stark!\p"
	.string "Mach dir um mich keine Sorgen.\n"
	.string "Geh, wo immer du hin willst.$"

JaggedPass_Text_BoulderShakingInResponseToEmblem:
	.string "Oh! Der Felsen reagiert auf das\n"
	.string "MAGMAEMBLEM.$"

JaggedPass_Text_JulioIntro:
	.string "Aiyeeeh! Man bekommt wirklich Angst,\n"
	.string "wenn man den ganzen Weg hinunterrennt\l"
	.string "ohne anzuhalten.$"

JaggedPass_Text_JulioDefeat:
	.string "Ich fühle mich, als würde ich\n"
	.string "zu Sand zerbröseln…$"

JaggedPass_Text_JulioPostBattle:
	.string "Mein Fahrrad hat mich durch-\n"
	.string "geschüttelt, mein Hintern tut weh…$"

JaggedPass_Text_AutumnIntro:
	.string "Ich klettere jeden Tag auf diesen\n"
	.string "Berg! Ich weiß, wie stark ich bin.$"

JaggedPass_Text_AutumnDefeat:
	.string "Hmm… Was ist denn nur schief gelaufen?$"

JaggedPass_Text_AutumnPostBattle:
	.string "Da oben ist ein kleiner Vorsprung. Der\n"
	.string "sieht sehr merkwürdig aus.$"


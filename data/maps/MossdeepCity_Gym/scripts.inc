MossdeepCity_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_Gym_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_Gym_OnLoad
	.byte 0

@ NOTE: Mossdeep Gym was redesigned between R/S and E. Leftover (and now functionally unused) scripts are commented below

MossdeepCity_Gym_OnTransition:
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower since it can collide with moving statues
	end

@ All the below checks are leftover from RS. FLAG_MOSSDEEP_GYM_SWITCH_X is never set
MossdeepCity_Gym_OnLoad:
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_SetSwitch1Metatiles
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
	end

MossdeepCity_Gym_EventScript_CheckSwitch2::
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_SetSwitch2Metatiles
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
	end

MossdeepCity_Gym_EventScript_CheckSwitch3::
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_SetSwitch3Metatiles
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
	end

MossdeepCity_Gym_EventScript_CheckSwitch4::
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_SetSwitch4Metatiles
	end

@ All the below set metatile scripts are leftover from RS and are functionally unused
MossdeepCity_Gym_EventScript_SetSwitch1Metatiles::
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
	end

MossdeepCity_Gym_EventScript_SetSwitch2Metatiles::
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
	end

MossdeepCity_Gym_EventScript_SetSwitch3Metatiles::
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
	end

MossdeepCity_Gym_EventScript_SetSwitch4Metatiles::
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
	end

MossdeepCity_Gym_EventScript_TateAndLiza::
	trainerbattle_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaIntro, MossdeepCity_Gym_Text_TateAndLizaDefeat, MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons, MossdeepCity_Gym_EventScript_TateAndLizaDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MossdeepCity_Gym_EventScript_TateAndLizaRematch
	goto_if_unset FLAG_RECEIVED_TM_CALM_MIND, MossdeepCity_Gym_EventScript_GiveCalmMind2
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_EventScript_TateAndLizaDefeated::
	message MossdeepCity_Gym_Text_ReceivedMindBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
	setflag FLAG_BADGE07_GET
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
	clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
	clearflag FLAG_UNKNOWN_0x393
	setvar VAR_0x8008, 7
	call Common_EventScript_SetGymTrainers
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
	setvar VAR_MOSSDEEP_CITY_STATE, 1
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
	call MossdeepCity_Gym_EventScript_GiveCalmMind
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
	release
	end

MossdeepCity_Gym_EventScript_GiveCalmMind2::
	giveitem ITEM_TM_CALM_MIND
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_CALM_MIND
	release
	end

MossdeepCity_Gym_EventScript_GiveCalmMind::
	giveitem ITEM_TM_CALM_MIND
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_CALM_MIND
	return

MossdeepCity_Gym_EventScript_TateAndLizaRematch::
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
	end

@ All the below switch scripts are leftover from RS and are functionally unused
MossdeepCity_Gym_EventScript_Switch1::
	lockall
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_ClearSwitch1
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed::
	special DrawWholeMapView
	playse SE_CLICK
	releaseall
	end

MossdeepCity_Gym_EventScript_ClearSwitch1::
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch2::
	lockall
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_ClearSwitch2
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_ClearSwitch2::
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Down, FALSE
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch3::
	lockall
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_ClearSwitch3
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_ClearSwitch3::
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch4::
	lockall
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_ClearSwitch4
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_ClearSwitch4::
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_WarpToEntrance::
	lockall
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
	waitstate
	releaseall
	end

MossdeepCity_Gym_EventScript_Preston::
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Virgil::
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Blake::
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Hannah::
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Samantha::
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Maura::
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Sylvia::
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Nate::
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Macey::
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Clifford::
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Nicholas::
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Kathleen::
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_EventScript_GymGuidePostVictory::
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

@ Leftover from RS, functionally unused
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
	delay_16
	delay_16
	step_end

MossdeepCity_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
	goto MossdeepCity_Gym_EventScript_GymStatue
	end

MossdeepCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
	goto MossdeepCity_Gym_EventScript_GymStatue
	end

MossdeepCity_Gym_EventScript_GymStatueCertified::
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_Gym_EventScript_GymStatue::
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_Gym_EventScript_YellowFloorSwitch::
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 0
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_BlueFloorSwitch::
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 1
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_GreenFloorSwitch::
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 2
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 3
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_RedFloorSwitch::
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 4
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_Text_GymGuideAdvice:
	.string "Na, wie sieht es aus, auf dem Weg zum\n"
	.string "CHAMP, {PLAYER}?\p"
	.string "Die ARENALEITER hier setzen PSYCHO-\n"
	.string "POKéMON ein.\p"
	.string "Setzt du KAMPF- oder GIFT-POKéMON ein,\n"
	.string "werden diese großen Schaden nehmen!\p"
	.string "Und außerdem wirst du dich gegen eine\n"
	.string "außergewöhnliche Kombination von\l"
	.string "Attacken behaupten müssen.\p"
	.string "Wenn du gewinnen willst, musst du\n"
	.string "ihnen\n"
	.string "beweisen, wie sehr du mit deinen\l"
	.string "POKéMON verbunden bist! Und nun los!$"

MossdeepCity_Gym_Text_GymGuidePostVictory:
	.string "Wow, du bist erstaunlich!\n"
	.string "Du bist ein großartiger TRAINER!$"

MossdeepCity_Gym_Text_PrestonIntro:
	.string "Kämpfe hängen von der Stärke deines\n"
	.string "Geistes ab! Die mit schwachem Geist\l"
	.string "werden niemals gewinnen.$"

MossdeepCity_Gym_Text_PrestonDefeat:
	.string "Ich habe verloren! Ich muss meinen\n"
	.string "Geist stärken!$"

MossdeepCity_Gym_Text_PrestonPostBattle:
	.string "Eine nichtssagende Niederlage.\n"
	.string "Das war doch nur eine Warnung an dich.$"

MossdeepCity_Gym_Text_VirgilIntro:
	.string "Zeig mir, ob du Talent hast.$"

MossdeepCity_Gym_Text_VirgilDefeat:
	.string "Du besitzt offensichtlich Talent.$"

MossdeepCity_Gym_Text_VirgilPostBattle:
	.string "Wenn es überhaupt Wunderkinder gibt,\n"
	.string "dann sind es unsere ARENALEITER.\p"
	.string "Aber du scheinst doch talentierter\n"
	.string "als sie zu sein…$"

MossdeepCity_Gym_Text_BlakeIntro:
	.string "Hihihihi… Achtung! Ich lasse meinen\n"
	.string "POKéBALL durch Telekinese schweben!\p"
	.string "Wuhuuuuuuuhuiii! … … … … … … …\p"
	.string "Äh, manchmal fehlt es mir etwas an\n"
	.string "Balance…$"

MossdeepCity_Gym_Text_BlakeDefeat:
	.string "Meine POKéMON kämpften nicht\n"
	.string "synchron!$"

MossdeepCity_Gym_Text_BlakePostBattle:
	.string "Ein POKéBALL ist doch etwas zu schwer,\n"
	.string "um ihn schweben zu lassen!\l"
	.string "Aber ein Staubknäuel…\p"
	.string "Wuhuuuuuuuhu! … … … … … … …\p"
	.string "Das ist kein Trick!\n"
	.string "Da ist kein Luftstrom! Ehrlich!$"

MossdeepCity_Gym_Text_HannahIntro:
	.string "Solltest du gegen mich verlieren,\n"
	.string "darfst du dir das nicht so zu Herzen\l"
	.string "nehmen.\p"
	.string "Du bist nicht zu schwach - ich bin nur\n"
	.string "zu stark für dich!$"

MossdeepCity_Gym_Text_HannahDefeat:
	.string "Du bist nur zu stark für mich!$"

MossdeepCity_Gym_Text_HannahPostBattle:
	.string "Ich lasse mich von dieser Niederlage\n"
	.string "nicht herunterziehen. Ich werde härter\l"
	.string "trainieren.\p"
	.string "Positives Denken - das ist meine\n"
	.string "Stärke!$"

MossdeepCity_Gym_Text_SamanthaIntro:
	.string "Ich kann sie sehen…\n"
	.string "Ich sehe deine Zukunft…\p"
	.string "Wenn du mich besiegen kannst, sage ich\n"
	.string "dir deine Zukunft voraus.$"

MossdeepCity_Gym_Text_SamanthaDefeat:
	.string "Ich ergebe mich!$"

MossdeepCity_Gym_Text_SamanthaPostBattle:
	.string "Du wirst einen irrsinnigen Kampf gegen\n"
	.string "unsere ARENALEITER führen…\p"
	.string "Der Ausgang dieses Kampfes…\n"
	.string "Meine Lippen sind versiegelt.$"

MossdeepCity_Gym_Text_MauraIntro:
	.string "Die Straßen, die du gewandert bist…\n"
	.string "Das, was du erfahren hast…\p"
	.string "Leg mir alles, was du gelernt hast,\n"
	.string "zu Füßen.$"

MossdeepCity_Gym_Text_MauraDefeat:
	.string "Du wandelst auf dem Pfad der Größe!$"

MossdeepCity_Gym_Text_MauraPostBattle:
	.string "Eine glänzende Zukunft erwartet die,\n"
	.string "die fleißig sind.\p"
	.string "Die, die dem Müßiggang frönen,\n"
	.string "erwartet am Ende des Weges nur die\n"
	.string "Verzweiflung. \p"
	.string "Man erntet das, was man sät.$"

MossdeepCity_Gym_Text_SylviaIntro:
	.string "Auch wenn ich dabei mein Leben aufs\n"
	.string "Spiel setze - ich werde den Kampf\l"
	.string "gewinnen!$"

MossdeepCity_Gym_Text_SylviaDefeat:
	.string "Was du da machst…\n"
	.string "Das macht mir Angst…$"

MossdeepCity_Gym_Text_SylviaPostBattle:
	.string "Wie konntest du es wagen, mich zu\n"
	.string "besiegen…\p"
	.string "Es ist nicht meine Schuld, wenn dir\n"
	.string "bald etwas Schreckliches passiert…$"

MossdeepCity_Gym_Text_NateIntro:
	.string "Hohoho.\p"
	.string "Du lässt mir keine andere Wahl. Ich\n"
	.string "werde dir zeigen, wie zäh PSYCHO-\l"
	.string "POKéMON sind.$"

MossdeepCity_Gym_Text_NateDefeat:
	.string "Oh! Meine Güte!\n"
	.string "Dein Kampfstil ist einfach\l"
	.string "fantastisch!$"

MossdeepCity_Gym_Text_NatePostBattle:
	.string "Ich… lasse mich durch eine Niederlage\n"
	.string "nicht aus der Ruhe bringen.$"

MossdeepCity_Gym_Text_KathleenIntro:
	.string "Ich werde dir eine wunderbar\n"
	.string "schreckliche und gruselige Zeit\l"
	.string "bereiten.$"

MossdeepCity_Gym_Text_KathleenDefeat:
	.string "NnnneeeeeiiiinnnnN!$"

MossdeepCity_Gym_Text_KathleenPostBattle:
	.string "Deine Dynamik ist mit Sicherheit\n"
	.string "ansteckend! Geh schnell weg!$"

MossdeepCity_Gym_Text_CliffordIntro:
	.string "Ich mag meine beste Zeit gesehen\n"
	.string "haben, aber ich lasse mich von dir\n"
	.string "nicht\l"
	.string "bevormunden.$"

MossdeepCity_Gym_Text_CliffordDefeat:
	.string "Ah, deine jugendliche Energie strömt\n"
	.string "nur so aus dir heraus.$"

MossdeepCity_Gym_Text_CliffordPostBattle:
	.string "Gegen deine jugendliche Energie habe\n"
	.string "ich keine Chance.$"

MossdeepCity_Gym_Text_MaceyIntro:
	.string "Du wirst den Weg nicht zu Ende gehen!\n"
	.string "Nicht, wenn ich mich dir in den Weg\l"
	.string "stellen kann.$"

MossdeepCity_Gym_Text_MaceyDefeat:
	.string "Wie kann man nur so stark sein wie du?\n"
	.string "Lächerlich!$"

MossdeepCity_Gym_Text_MaceyPostBattle:
	.string "Hmpf! Du magst ja stark sein, aber mit\n"
	.string "PSYCHO-POKéMON kommst du nicht\l"
	.string "zurecht!\p"
	.string "Du hast einen recht brutalen\n"
	.string "Kampfstil.$"

MossdeepCity_Gym_Text_NicholasIntro:
	.string "Wroooaaar! Schmeck die Superkraft\n"
	.string "meines POKéMON!$"

MossdeepCity_Gym_Text_NicholasDefeat:
	.string "Oh! Das war’s dann wohl.$"

MossdeepCity_Gym_Text_NicholasPostBattle:
	.string "Gut! Ich glaube, ich sollte eine un-\n"
	.string "schlagbare POKéMON-Kraft entwickeln.$"

MossdeepCity_Gym_Text_TateAndLizaIntro:
	.string "BEN: Hähähä… Bist du überrascht?\p"
	.string "SVENJA: Hihihi… Bist du überrascht?\p"
	.string "BEN: Dass es hier 2 ARENALEITER gibt?\n"
	.string "SVENJA: Dass es hier 2 ARENALEITER\l"
	.string "gibt?\p"
	.string "BEN: Wir sind Zwillinge!\n"
	.string "SVENJA: Wir sind Zwillinge!\p"
	.string "BEN: Wir brauchen nicht zu sprechen…\n"
	.string "SVENJA: Wir wissen, was…\p"
	.string "BEN: Der andere gerade denkt…\n"
	.string "SVENJA: Gedankenübertragung!\p"
	.string "BEN: Diese doppelte Stärke…\n"
	.string "SVENJA: Kannst du sie besiegen?$"

MossdeepCity_Gym_Text_TateAndLizaDefeat:
	.string "BEN: Was?!? Unsere Kombination…\n"
	.string "SVENJA: Wurde auseinander gerissen!\p"
	.string "BEN: So sieht’s aus. Du hast gewonnen.\n"
	.string "SVENJA: Daher überreichen wir dir\l"
	.string "dies.$"

MossdeepCity_Gym_Text_ReceivedMindBadge:
	.string "{PLAYER} erhält den MENTALORDEN von\n"
	.string "SVENJA und BEN.$"

MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis:
	.string "BEN: Der MENTALORDEN erhöht den SP.\n"
	.string "ANG. und die SP. VER. von POKéMON.\p"
	.string "SVENJA: Und du kannst damit die VM\n"
	.string "TAUCHER außerhalb eines Kampfes\l"
	.string "einsetzen.\p"
	.string "BEN: Dies ist ebenfalls für dich.$"

MossdeepCity_Gym_Text_ExplainCalmMind:
	.string "BEN: TM04 enthält…\n"
	.string "SVENJA: GEDANKENGUT!\p"
	.string "BEN: Dies erhöht den SP. ANG. und…\n"
	.string "SVENJA: Erhöht die SP. VER.!\p"
	.string "BEN: Eine Attacke, die perfekt…\n"
	.string "SVENJA: Für PSYCHO-POKéMON ist!\p"
	.string "… … … … … …$"

MossdeepCity_Gym_Text_RegisteredTateAndLiza:
	.string "ARENALEITER BEN und SVENJA wurden im\n"
	.string "POKéNAV-Verzeichnis eingetragen.$"

MossdeepCity_Gym_Text_TateAndLizaPostBattle:
	.string "BEN: Es scheint, als sei das Band\n"
	.string "zwischen dir und deinen POKéMON viel\l"
	.string "stärker als zwischen uns Zwillingen.\p"
	.string "SVENJA: Und du wirst noch stärker\n"
	.string "werden! Wir haben gegen dich gekämpft,\l"
	.string "daher können wir das vorhersagen.$"

MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons:
	.string "BEN: Hähähä… Bist du überrascht?\p"
	.string "SVENJA: Dass es hier 2 ARENALEITER\n"
	.string "gibt?\p"
	.string "BEN: Hups, du hast nur ein…\n"
	.string "SVENJA: POKéMON für den Kampf.\p"
	.string "BEN: So können wir nicht kämpfen!\p"
	.string "SVENJA: Wenn du uns herausfordern\n"
	.string "willst, dann musst du mehr POKéMON\l"
	.string "haben.$"

MossdeepCity_Gym_Text_GymStatue:
	.string "POKéMON ARENA von MOOSBACH CITY$"

MossdeepCity_Gym_Text_GymStatueCertified:
	.string "POKéMON ARENA von MOOSBACH CITY\p"
	.string "SVENJA UND BENS ANERKANNTE TRAINER:\n"
	.string "{PLAYER}$"

MossdeepCity_Gym_Text_TateAndLizaPreRematch:
	.string "BEN: POKéMON…\n"
	.string "SVENJA: POKéMON…\p"
	.string "BEN: Die Zusammensetzung des Teams…\n"
	.string "SVENJA: Bestimmt den Kampfstil.\p"
	.string "BEN: Aber ich…\n"
	.string "SVENNJA: Aber ich…\p"
	.string "BEN: Kämpfe nur zusammen mit SVENJA!\n"
	.string "SVENJA: Kämpfe nur zusammen mit BEN!\p"
	.string "BEN: Diese Kombination…\n"
	.string "SVENJA: Wirst du immer wieder sehen!$"

MossdeepCity_Gym_Text_TateAndLizaRematchDefeat:
	.string "BEN: Du und deine POKéMON…\n"
	.string "SVENJA: Seid wie Geschwister! $"

MossdeepCity_Gym_Text_TateAndLizaPostRematch:
	.string "BEN: Du magst uns besiegen, aber wir\n"
	.string "werden nicht am Boden liegen bleiben!\n"
	.string "\p"
	.string "SVENJA: Denn wir beide werden immer\n"
	.string "füreinander da sein!$"

MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons:
	.string "BEN: Du bist zurückgekommen…\n"
	.string "SVENJA: Du bist zurückgekommen…\p"
	.string "BEN: Um erneut gegen uns anzutreten.\n"
	.string "SVENJA: Um erneut gegen uns\l"
	.string "anzutreten.\p"
	.string "BEN: Aber…\n"
	.string "SVENJA: Für diesen Kampf hast du…\p"
	.string "BEN: Nur ein einziges POKéMON dabei!\n"
	.string "SVENJA: Nur ein einziges POKéMON\n"
	.string "dabei! \p"
	.string "BEN: Du musst mindestens zwei…\n"
	.string "SVENJA: POKéMON haben.$"

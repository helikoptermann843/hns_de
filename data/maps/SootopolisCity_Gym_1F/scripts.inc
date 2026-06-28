SootopolisCity_Gym_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_Gym_1F_OnFrame
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_Gym_1F_OnResume
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_Gym_1F_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_Gym_1F_OnTransition
	.byte 0

SootopolisCity_Gym_1F_OnTransition:
	setvar VAR_ICE_STEP_COUNT, 1
	end

SootopolisCity_Gym_1F_OnResume:
	setstepcallback STEP_CB_SOOTOPOLIS_ICE
	end

SootopolisCity_Gym_1F_OnLoad:
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
	special SetSootopolisGymCrackedIceMetatiles
	end

SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles::
	goto_if_lt VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_StopCheckingStairs  @ All stairs ice
	goto_if_lt VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_OpenFirstStairs
	goto_if_lt VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs
	setmetatile 8, 4, METATILE_SootopolisGym_Stairs, FALSE
	setmetatile 8, 5, METATILE_SootopolisGym_Stairs, FALSE
SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs::
	setmetatile 8, 10, METATILE_SootopolisGym_Stairs, FALSE
	setmetatile 8, 11, METATILE_SootopolisGym_Stairs, FALSE
SootopolisCity_Gym_1F_EventScript_OpenFirstStairs::
	setmetatile 8, 15, METATILE_SootopolisGym_Stairs, FALSE
	setmetatile 8, 16, METATILE_SootopolisGym_Stairs, FALSE
SootopolisCity_Gym_1F_EventScript_StopCheckingStairs::
	return

SootopolisCity_Gym_1F_OnFrame:
	map_script_2 VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs
	map_script_2 VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs
	map_script_2 VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs
	map_script_2 VAR_ICE_STEP_COUNT, 0, SootopolisCity_Gym_1F_EventScript_FallThroughIce
	.2byte 0

SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs::
	addvar VAR_ICE_STEP_COUNT, 1
	delay 40
	playse SE_ICE_STAIRS
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
	special DrawWholeMapView
	end

SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs::
	addvar VAR_ICE_STEP_COUNT, 1
	delay 40
	playse SE_ICE_STAIRS
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
	special DrawWholeMapView
	end

SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs::
	addvar VAR_ICE_STEP_COUNT, 1
	delay 40
	playse SE_ICE_STAIRS
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
	special DrawWholeMapView
	end

SootopolisCity_Gym_1F_EventScript_FallThroughIce::
	lockall
	delay 20
	applymovement LOCALID_PLAYER, SootopolisCity_Gym_1F_Movement_FallThroughIce
	waitmovement 0
	playse SE_FALL
	delay 60
	warphole MAP_SOOTOPOLIS_CITY_GYM_B1F
	waitstate
	end

SootopolisCity_Gym_1F_Movement_FallThroughIce:
	set_invisible
	step_end

SootopolisCity_Gym_1F_EventScript_Juan::
	trainerbattle_single TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanIntro, SootopolisCity_Gym_1F_Text_JuanDefeat, SootopolisCity_Gym_1F_EventScript_JuanDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, SootopolisCity_Gym_1F_EventScript_JuanRematch
	goto_if_unset FLAG_RECEIVED_TM_WATER_PULSE, SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2
	goto_if_unset FLAG_BADGE06_GET, SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge
	msgbox SootopolisCity_Gym_1F_Text_JuanPostBattle, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_JuanDefeated::
	message SootopolisCity_Gym_1F_Text_ReceivedRainBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
	setflag FLAG_BADGE08_GET
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
	setvar VAR_SOOTOPOLIS_CITY_STATE, 6
	clearflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
	setvar VAR_0x8008, 8
	call Common_EventScript_SetGymTrainers
	call SootopolisCity_Gym_1F_EventScript_GiveWaterPulse
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox SootopolisCity_Gym_1F_Text_RegisteredJuan, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_JUAN_MATCH_CALL
	release
	end

SootopolisCity_Gym_1F_EventScript_GiveWaterPulse::
	giveitem ITEM_TM_WATER_PULSE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_WATER_PULSE
	return

SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2::
	giveitem ITEM_TM_WATER_PULSE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_WATER_PULSE
	release
	end

SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge::
	msgbox SootopolisCity_Gym_1F_Text_GoGetFortreeBadge, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_JuanRematch::
	trainerbattle_rematch_double TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanPreRematch, SootopolisCity_Gym_1F_Text_JuanRematchDefeat, SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons
	msgbox SootopolisCity_Gym_1F_Text_JuanPostRematch, MSGBOX_AUTOCLOSE
	end

SootopolisCity_Gym_1F_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory
	msgbox SootopolisCity_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory::
	msgbox SootopolisCity_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
	end

SootopolisCity_Gym_1F_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
	end

SootopolisCity_Gym_1F_EventScript_GymStatueCertified::
	msgbox SootopolisCity_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_Gym_1F_EventScript_GymStatue::
	msgbox SootopolisCity_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_Gym_1F_Text_GymGuideAdvice:
	.string "Na, wie sieht es aus, auf dem Weg zum\n"
	.string "CHAMP, {PLAYER}?\p"
	.string "ARENALEITER JUAN in XENEROVILLE\n"
	.string "ist der Meister der WASSER-POKéMON.\p"
	.string "Und auf dem Weg zu ihm wirst du auf\n"
	.string "gefrorenem Boden ins Rutschen kommen.\n"
	.string "\p"
	.string "Tut mir Leid, aber mehr kann ich dir\n"
	.string "dazu auch nicht sagen.\p"
	.string "Den Rest des Weges musst du alleine\n"
	.string "meistern.$"

SootopolisCity_Gym_1F_Text_GymGuidePostVictory:
	.string "Hui! Du hast JUAN besiegt, von dem\n"
	.string "man sagt, er sei der beste TRAINER in\l"
	.string "der HOENN-Region.\p"
	.string "Okay! Schau auf deinem\n"
	.string "TRAINERPASS nach.\p"
	.string "Wenn du alle ORDEN erhalten hast,\n"
	.string "kannst du die POKéMON LIGA\l"
	.string "herausfordern!$"

SootopolisCity_Gym_1F_Text_JuanIntro:
	.string "Lass mich dich was fragen.\n"
	.string "Wusstest du das schon? Ach, ich\l"
	.string "sollte nicht so schüchtern sein.\p"
	.string "Ich habe WASSILI alles beigebracht,\n"
	.string "was man über POKéMON wissen muss.\p"
	.string "Und dann habe ich mein Amt als\n"
	.string "ARENALEITER aufgegeben.\p"
	.string "Ich habe die ARENA an WASSILI\n"
	.string "übergeben.\p"
	.string "Doch es gab einen zwingenden Grund für\n"
	.string "mich zurückzukehren.\p"
	.string "Genug geredet.\n"
	.string "Lass uns kämpfen.\p"
	.string "Du sollst Zeuge unserer\n"
	.string "Kunstfertigkeit werden.\p"
	.string "Eine Illusion aus Wasser, geformt von\n"
	.string "meinen POKéMON und mir.$"

@ NOTE: This defeat text actually causes a buffer overflow. It's about 50 bytes too long for
@ the gDisplayedStringBattle buffer that it's put into, and it stomps all over the gBattleTextBuffs
@ after, as well as the otherwise unused array after that. One wonders if that's the reason for
@ the existence of that unused array of ints.
SootopolisCity_Gym_1F_Text_JuanDefeat:
	.string "Ahahahaha, ausgezeichnet!\n"
	.string "Sehr schön! Du hast gewonnen!\p"
	.string "Ich weiß, dein brillantes Talent wird\n"
	.string "jeden Gegner bezwingen.\p"
	.string "Aber im Vergleich zu mir oder auch\n"
	.string "WASSILI fehlt es dir an Eleganz.\p"
	.string "Vielleicht sollte ich dir ein paar\n"
	.string "meiner Kleidungsstücke leihen?\p"
	.string "… … … … …\n"
	.string "…\l"
	.string "… … … … …\l"
	.string "…\p"
	.string "Hahahaha, ich hab nur Spaß gemacht!\p"
	.string "Statt meiner Kleidung überreiche ich\n"
	.string "dir den SCHAUERORDEN.$"

SootopolisCity_Gym_1F_Text_ReceivedRainBadge:
	.string "{PLAYER} erhält den SCHAUERORDEN\n"
	.string "von JUAN.$"

SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis:
	.string "Dieser ORDEN sorgt dafür, dass dir\n"
	.string "alle deine POKéMON gehorchen.\p"
	.string "Der ORDEN befähigt dich außerdem dazu,\n"
	.string "mit der VM KASKADE Wasserfälle in jede\l"
	.string "Richtung zu passieren.\p"
	.string "Und damit du unseren Kampf stets in\n"
	.string "Erinnerung behältst, gebe ich dir\l"
	.string "dies…$"

SootopolisCity_Gym_1F_Text_ExplainWaterPulse:
	.string "Diese TM enthält AQUAWELLE.\p"
	.string "Damit kann das gegnerische POKéMON\n"
	.string "mit Ultraschallwellen verwirrt werden.\n"
	.string "\p"
	.string "… … … … … …$"

SootopolisCity_Gym_1F_Text_RegisteredJuan:
	.string "ARENALEITER JUAN  wurde im POKéNAV-\n"
	.string "Verzeichnis eingetragen.$"

SootopolisCity_Gym_1F_Text_JuanPostBattle:
	.string "TRAINER, die alle ORDEN der ARENen in\n"
	.string "HOENN erhalten haben, sollten sich…\p"
	.string "auf den Weg zur ultimativen Heraus-\n"
	.string "forderung machen. Der POKéMON LIGA!\p"
	.string "Reise zu den östlichsten Gebieten von\n"
	.string "HOENN, zur Insel PRACHTPOLIS CITY.\l"
	.string "Dort findest du die POKéMON LIGA.$"

SootopolisCity_Gym_1F_Text_GoGetFortreeBadge:
	.string "In HOENN gibt es nur noch einen ORDEN\n"
	.string "zu verdienen.\p"
	.string "Wenn du die POKéMON LIGA herausfordern\n"
	.string "willst, musst du zuerst den ORDEN der\l"
	.string "ARENA in BAUMHAUSEN CITY bekommen.$"

SootopolisCity_Gym_1F_Text_GymStatue:
	.string "POKéMON ARENA von XENEROVILLE$"

SootopolisCity_Gym_1F_Text_GymStatueCertified:
	.string "POKéMON ARENA von XENEROVILLE\p"
	.string "JUANS ANERKANNTE TRAINER:\n"
	.string "{PLAYER}$"

SootopolisCity_Gym_1F_Text_JuanPreRematch:
	.string "JUAN: Ah, diese ARENA strahlt wieder\n"
	.string "die alte Heiterkeit aus…\p"
	.string "Aber unser junger Wirbelwind ist\n"
	.string "zurückgekehrt, um uns erneut\l"
	.string "zu testen.\p"
	.string "Sicher doch, sicher doch.\p"
	.string "Es ist mir eine Freude, mit dir immer\n"
	.string "und immer wieder über das Wasser zu\l"
	.string "gleiten.$"

SootopolisCity_Gym_1F_Text_JuanRematchDefeat:
	.string "Ahahaha, du hast gewonnen!\n"
	.string "Du hast mich schon wieder besiegt.$"

SootopolisCity_Gym_1F_Text_JuanPostRematch:
	.string "JUAN: Wenn ich dich frage, ob du mein\n"
	.string "Schüler werden willst, wirst du\n"
	.string "bestimmt\l"
	.string "ablehnen.\p"
	.string "Ich würde dir stattdessen gerne meinen\n"
	.string "Mantel schenken.\p"
	.string "Aber auch den würdest du bestimmt\n"
	.string "ablehnen.\p"
	.string "Und das, Wirbelwind, ist ein Zeichen\n"
	.string "von hohen Idealen.$"

SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons:
	.string "JUAN: Ah, diese ARENA strahlt wieder\n"
	.string "die alte Heiterkeit aus…\p"
	.string "Aber unser junger Wirbelwind ist\n"
	.string "zurückgekehrt, um uns erneut\l"
	.string "zu testen.\p"
	.string "Sicher doch, sicher doch.\p"
	.string "Es ist mir eine Freude, mit dir immer\n"
	.string "und immer wieder über das Wasser zu\n"
	.string "gleiten. \p"
	.string "Aber, nein, nein, nein, nein.\n"
	.string "Du hast ja nur ein einziges POKéMON.\p"
	.string "Ich wünsche, dass du mit mindestens\n"
	.string "zwei POKéMON wiederkommst und dann\l"
	.string "gegen mich antrittst.$"


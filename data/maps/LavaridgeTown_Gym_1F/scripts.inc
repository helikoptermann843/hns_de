LavaridgeTown_Gym_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_1F_OnTransition
	.byte 0

LavaridgeTown_Gym_1F_OnTransition:
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
	call LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers
	end

@ Unclear where/if these temp vars are getting checked
LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars::
	setvar VAR_TEMP_B, 0
	setvar VAR_TEMP_C, 0
	setvar VAR_TEMP_D, 0
	setvar VAR_TEMP_E, 0
	setvar VAR_TEMP_F, 0
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar
	setvar VAR_TEMP_B, 1
LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar::
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar
	setvar VAR_TEMP_C, 1
LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar::
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar
	setvar VAR_TEMP_D, 1
LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar::
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars
	setvar VAR_TEMP_E, 1
LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars::
	return

LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers::
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald
	setobjectmovementtype LOCALID_COLE, MOVEMENT_TYPE_BURIED
LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald::
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle
	setobjectmovementtype LOCALID_GERALD, MOVEMENT_TYPE_BURIED
LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle::
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle
	setobjectmovementtype LOCALID_AXLE, MOVEMENT_TYPE_BURIED
LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle::
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers
	setobjectmovementtype LOCALID_DANIELLE, MOVEMENT_TYPE_BURIED
LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers::
	return

LavaridgeTown_Gym_1F_EventScript_Flannery::
	trainerbattle_single TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryIntro, LavaridgeTown_Gym_1F_Text_FlanneryDefeat, LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, LavaridgeTown_Gym_1F_EventScript_FlanneryRematch
	goto_if_unset FLAG_RECEIVED_TM_OVERHEAT, LavaridgeTown_Gym_1F_EventScript_GiveOverheat2
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated::
	message LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_WHITEOUT_TO_LAVARIDGE
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
	setflag FLAG_BADGE04_GET
	addvar VAR_PETALBURG_GYM_STATE, 1
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
	setvar VAR_0x8008, 4
	call Common_EventScript_SetGymTrainers
	setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
	setvar VAR_LAVARIDGE_TOWN_STATE, 1
	call LavaridgeTown_Gym_1F_EventScript_GiveOverheat
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox LavaridgeTown_Gym_1F_Text_RegisteredFlannery, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_FLANNERY_MATCH_CALL
	release
	end

LavaridgeTown_Gym_1F_EventScript_GiveOverheat2::
	giveitem ITEM_TM_OVERHEAT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_OVERHEAT
	release
	end

LavaridgeTown_Gym_1F_EventScript_GiveOverheat::
	giveitem ITEM_TM_OVERHEAT
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_OVERHEAT
	return

LavaridgeTown_Gym_1F_EventScript_FlanneryRematch::
	trainerbattle_rematch_double TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryPreRematch, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat, LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Cole::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_COLE, TRAINER_COLE, LavaridgeTown_Gym_1F_Text_ColeIntro, LavaridgeTown_Gym_1F_Text_ColeDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_EventScript_CheckTrainerScript::
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
	release
	special ShouldTryGetTrainerScript
	goto_if_eq VAR_RESULT, 1, EventScript_GotoTrainerScript
	end

LavaridgeTown_Gym_1F_EventScript_Axle::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_AXLE, TRAINER_AXLE, LavaridgeTown_Gym_1F_Text_AxleIntro, LavaridgeTown_Gym_1F_Text_AxleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Keegan::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_KEEGAN, TRAINER_KEEGAN, LavaridgeTown_Gym_B1F_Text_KeeganIntro, LavaridgeTown_Gym_B1F_Text_KeeganDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	msgbox LavaridgeTown_Gym_B1F_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Danielle::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_DANIELLE, TRAINER_DANIELLE, LavaridgeTown_Gym_1F_Text_DanielleIntro, LavaridgeTown_Gym_1F_Text_DanielleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Gerald::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_GERALD, TRAINER_GERALD, LavaridgeTown_Gym_1F_Text_GeraldIntro, LavaridgeTown_Gym_1F_Text_GeraldDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Jace::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_JACE, TRAINER_JACE, LavaridgeTown_Gym_B1F_Text_JaceIntro, LavaridgeTown_Gym_B1F_Text_JaceDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	msgbox LavaridgeTown_Gym_B1F_Text_JacePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Jeff::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_JEFF, TRAINER_JEFF, LavaridgeTown_Gym_B1F_Text_JeffIntro, LavaridgeTown_Gym_B1F_Text_JeffDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	msgbox LavaridgeTown_Gym_B1F_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Eli::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_ELI, TRAINER_ELI, LavaridgeTown_Gym_B1F_Text_EliIntro, LavaridgeTown_Gym_B1F_Text_EliDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	msgbox LavaridgeTown_Gym_B1F_Text_EliPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory::
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
	end

LavaridgeTown_Gym_1F_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
	end

LavaridgeTown_Gym_1F_EventScript_GymStatueCertified::
	msgbox LavaridgeTown_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

LavaridgeTown_Gym_1F_EventScript_GymStatue::
	msgbox LavaridgeTown_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

LavaridgeTown_Gym_1F_Text_GymGuideAdvice:
	.string "Na, wie sieht es aus, auf dem Weg zum\n"
	.string "CHAMP, {PLAYER}?\p"
	.string "Die ARENALEITERIN von BAD LAVA-\n"
	.string "STADT, FLAVIA, setzt FEUER-POKéMON\l"
	.string "ein.\p"
	.string "Ihre Leidenschaft für POKéMON brennt\n"
	.string "heißer und stärker als ein Vulkan.\p"
	.string "Komm ihr nicht zu nahe - du verbrennst\n"
	.string "dich! Lösche die Glut mit Wasser und\l"
	.string "dann besiege sie!$"

LavaridgeTown_Gym_1F_Text_GymGuidePostVictory:
	.string "Hui! Das war ein glühend heißer Kampf!$"

LavaridgeTown_Gym_1F_Text_ColeIntro:
	.string "Auauauauau! Hach, ist das heiß!$"

LavaridgeTown_Gym_1F_Text_ColeDefeat:
	.string "Der Schweiß lief mir in die Augen…$"

LavaridgeTown_Gym_1F_Text_ColePostBattle:
	.string "Ein Bad im heißen Sand regt den\n"
	.string "Kreislauf an.\p"
	.string "Auch Gelenkschmerzen lassen sich damit\n"
	.string "kurieren.$"

LavaridgeTown_Gym_1F_Text_AxleIntro:
	.string "Ich versuche, Stress abzubauen.\n"
	.string "Komm her. Ich will mich abreagieren.$"

LavaridgeTown_Gym_1F_Text_AxleDefeat:
	.string "Ich hoffe, FLAVIA wird dich rösten!$"

LavaridgeTown_Gym_1F_Text_AxlePostBattle:
	.string "Haaah… Huuuuh…\p"
	.string "Bleibt man zu lange im heißen Sand,\n"
	.string "macht einen das ganz schön fertig.$"

LavaridgeTown_Gym_B1F_Text_KeeganIntro:
	.string "Du musst ganz schön müde sein.\n"
	.string "Willst du dich nicht hier im heißen\l"
	.string "Sand ausruhen?\p"
	.string "Aber du solltest wissen, dass\n"
	.string "Willenskraft ganz wichtig für einen\l"
	.string "TRAINER ist.$"

LavaridgeTown_Gym_B1F_Text_KeeganDefeat:
	.string "Spiele mit Feuer und du verbrennst\n"
	.string "dich.$"

LavaridgeTown_Gym_B1F_Text_KeeganPostBattle:
	.string "Dein Können ist gut… Aber unsere\n"
	.string "LEITERIN FLAVIA ist stark.\p"
	.string "Wenn du nicht aufpasst, verbrennst\n"
	.string "du dich ernsthaft.$"

LavaridgeTown_Gym_1F_Text_GeraldIntro:
	.string "Kann dein POKéMON 200 Grad aushalten?$"

LavaridgeTown_Gym_1F_Text_GeraldDefeat:
	.string "Die Hitze war nicht stark genug…$"

LavaridgeTown_Gym_1F_Text_GeraldPostBattle:
	.string "Die Temperatur von Magma beträgt\n"
	.string "über 200 Grad.\p"
	.string "Deine POKéMON haben mich besiegt, sie\n"
	.string "sollten auch in Magma überleben\l"
	.string "können.$"

LavaridgeTown_Gym_1F_Text_DanielleIntro:
	.string "Ähm… Okay, ich kämpfe mit dir.$"

LavaridgeTown_Gym_1F_Text_DanielleDefeat:
	.string "Oh, du bist zu stark.$"

LavaridgeTown_Gym_1F_Text_DaniellePostBattle:
	.string "Ich will einmal so eine starke\n"
	.string "TRAINERIN werden wie FLAVIA.$"

LavaridgeTown_Gym_B1F_Text_JaceIntro:
	.string "Komm schon! Los geht’s!\n"
	.string "Bevor ich abkühle.$"

LavaridgeTown_Gym_B1F_Text_JaceDefeat:
	.string "Es ist so heiß und doch ist mein Herz\n"
	.string "von Eis umgeben…$"

LavaridgeTown_Gym_B1F_Text_JacePostBattle:
	.string "Dein Kampfstil ist feurig, ich denke,\n"
	.string "du\n"
	.string "hast eine gute Chance gegen unsere\l"
	.string "ARENALEITERIN.$"

LavaridgeTown_Gym_B1F_Text_JeffIntro:
	.string "Siehst du, wie wild die Flammen\n"
	.string "züngeln? Sie bejubeln meinen Sieg!$"

LavaridgeTown_Gym_B1F_Text_JeffDefeat:
	.string "Irgendwas ist da schief gelaufen.$"

LavaridgeTown_Gym_B1F_Text_JeffPostBattle:
	.string "Ach, was soll’s?!? Mir doch egal.\n"
	.string "Dafür\n"
	.string "kann ich barfuß über glühende Kohlen\l"
	.string "laufen. … Versuch das bloß nicht!$"

LavaridgeTown_Gym_B1F_Text_EliIntro:
	.string "So sehr ich die Berge auch liebe,\n"
	.string "meine\l"
	.string "Leidenschaft gehört den Vulkanen.$"

LavaridgeTown_Gym_B1F_Text_EliDefeat:
	.string "Ich habe verloren. Ich hatte nicht\n"
	.string "einmal den Kampf unter Kontrolle.$"

LavaridgeTown_Gym_B1F_Text_EliPostBattle:
	.string "Ich bleibe hier, weil ich FLAVIAs\n"
	.string "Kraft bewundere.\p"
	.string "Hähähähä…$"

LavaridgeTown_Gym_1F_Text_FlanneryIntro:
	.string "Willkommen… Halt, warte!\p"
	.string "Hallo, du Winzling von TRAINER, wie\n"
	.string "schön, dich hier zu sehen!\p"
	.string "Ich bin verantwortlich für, äh…\n"
	.string "Nein, warte.\p"
	.string "Ich bin FLAVIA und ich bin die ARENA-\n"
	.string "LEITERIN hier!\p"
	.string "Äh… Du solltest mich nicht\n"
	.string "unterschätzen, nur weil ich noch nicht\l"
	.string "so lange LEITERIN bin!\p"
	.string "Ich habe das Talent meines Großvaters\n"
	.string "geerbt und daher… äh… kann ich dir die\l"
	.string "heißen Attacken zeigen, die wir hier\l"
	.string "entwickelt haben!$"

LavaridgeTown_Gym_1F_Text_FlanneryDefeat:
	.string "Äh…\n"
	.string "Ich glaube, ich habe es übertrieben…\p"
	.string "Ich… Ich bin ja auch noch nicht lange\n"
	.string "ARENALEITERIN!\p"
	.string "Ich habe zu sehr versucht, jemand zu\n"
	.string "sein, der ich gar nicht bin.\p"
	.string "Ich muss die Dinge auf meine eigene\n"
	.string "Art\n"
	.string "angehen. Sonst verwirre ich nur meine\l"
	.string "POKéMON.\p"
	.string "Danke, dass du mich das gelehrt hast!\n"
	.string "Du hast dir das hier wohl verdient!$"

LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge:
	.string "{PLAYER} erhält den HITZEORDEN\n"
	.string "von FLAVIA.$"

LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis:
	.string "Mit dem HITZEORDEN gehorchen dir alle\n"
	.string "POKéMON bis Level 50, auch die, die du\l"
	.string "durch Tausch erhalten hast.\p"
	.string "Und du kannst ab sofort STÄRKE auch\n"
	.string "außerhalb eines Kampfes einsetzen.\p"
	.string "Dies ist das Zeichen meiner\n"
	.string "Anerkennung. Nimm es ruhig an!$"

LavaridgeTown_Gym_1F_Text_ExplainOverheat:
	.string "Die TM50 enthält HITZEKOLLER.\p"
	.string "Diese Attacke richtet beim Gegner\n"
	.string "großen Schaden an.\p"
	.string "Aber gleichzeitig wird der SP. ANG.\n"
	.string "des POKéMON, das die Attacke\p"
	.string "anwendet, herabgesetzt. Für längere\n"
	.string "Kämpfe ist sie daher nicht geeignet.$"

LavaridgeTown_Gym_1F_Text_RegisteredFlannery:
	.string "ARENALEITERIN FLAVIA wurde\n"
	.string "im POKéNAV eingetragen.$"

LavaridgeTown_Gym_1F_Text_FlanneryPostBattle:
	.string "Deine Stärke erinnert mich an\n"
	.string "jemanden…\p"
	.string "Jetzt weiß ich’s! Du kämpfst wie\n"
	.string "NORMAN,\l"
	.string "der ARENALEITER von BLÜTENBURG CITY.$"

LavaridgeTown_Gym_1F_Text_GymStatue:
	.string "POKéMON ARENA von BAD LAVASTADT$"

LavaridgeTown_Gym_1F_Text_GymStatueCertified:
	.string "POKéMON ARENA von BAD LAVASTADT\p"
	.string "FLAVIAs ANERKANNTE TRAINER:\n"
	.string "{PLAYER}$"

LavaridgeTown_Gym_1F_Text_FlanneryPreRematch:
	.string "FLAVIA: Eine Niederlage wird mein\n"
	.string "Feuer nicht löschen.\p"
	.string "Ich liebe POKéMON.\n"
	.string "Ich liebe Kämpfe.\l"
	.string "Und… Ich liebe diese ARENA!\p"
	.string "Lass uns einen ultraheißen Kampf\n"
	.string "austragen! Die Funken sollen fliegen.$"

LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat:
	.string "Wow!\n"
	.string "Da stand einer kurz vor dem Ausbruch!$"

LavaridgeTown_Gym_1F_Text_FlanneryPostRematch:
	.string "FLAVIA: Ich habe den Kampf zwar\n"
	.string "verloren, bin aber dennoch zufrieden.\n"
	.string "\p"
	.string "Ich habe nicht oft die Gelegenheit,\n"
	.string "einen so heißen Kampf zu genießen.\p"
	.string "Das müssen wir unbedingt wiederholen!\n"
	.string "Komm bald wieder!$"

LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons:
	.string "FLAVIA: Eine Niederlage wird mein\n"
	.string "Feuer nicht löschen.\p"
	.string "Ich liebe POKéMON.\n"
	.string "Ich liebe Kämpfe.\l"
	.string "Und… Ich liebe diese ARENA!\p"
	.string "Lass uns einen ultraheißen Kampf\n"
	.string "austragen! Die Funken sollen fliegen.\n"
	.string "\p"
	.string "Moment! Warte mal! Du hast ja nur ein\n"
	.string "POKéMON, das kämpfen kann, dabei!\p"
	.string "Bring das nächste Mal mindestens\n"
	.string "zwei POKéMON mit, sonst wird das\l"
	.string "nichts.$"

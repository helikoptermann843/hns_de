DewfordTown_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
	.byte 0

DewfordTown_Gym_OnTransition:
	call DewfordTown_Gym_EventScript_SetFlashLevel
	end

DewfordTown_Gym_EventScript_SetFlashLevel::
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_SetLightsOn
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
	copyvar VAR_0x8001, VAR_0x8000
	goto_if_eq VAR_0x8000, 0, DewfordTown_Gym_EventScript_SetFlashLevel7
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_SetFlashLevel6
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_SetFlashLevel5
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_SetFlashLevel4
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_SetFlashLevel3
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_SetFlashLevel2
	goto DewfordTown_Gym_EventScript_SetFlashLevel1

DewfordTown_Gym_EventScript_SetLightsOn::
	setflashlevel 0
	return

@ Brightest
DewfordTown_Gym_EventScript_SetFlashLevel1::
	setflashlevel 1
	return

DewfordTown_Gym_EventScript_SetFlashLevel2::
	setflashlevel 2
	return

DewfordTown_Gym_EventScript_SetFlashLevel3::
	setflashlevel 3
	return

DewfordTown_Gym_EventScript_SetFlashLevel4::
	setflashlevel 4
	return

DewfordTown_Gym_EventScript_SetFlashLevel5::
	setflashlevel 5
	return

DewfordTown_Gym_EventScript_SetFlashLevel6::
	setflashlevel 6
	return

@ Darkest
DewfordTown_Gym_EventScript_SetFlashLevel7::
	setflashlevel 7
	return

DewfordTown_Gym_EventScript_BrightenRoom::
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
	nop1
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
	copyvar VAR_0x8001, VAR_0x8000
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers

DewfordTown_Gym_EventScript_NoLightChange::
	return

@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
	playse SE_SWITCH
	animateflash 6
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
	playse SE_SWITCH
	animateflash 5
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
	playse SE_SWITCH
	animateflash 4
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
	playse SE_SWITCH
	animateflash 3
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
	playse SE_SWITCH
	animateflash 2
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
	playse SE_SWITCH
	animateflash 1
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
	playse SE_SWITCH
	animateflash 0
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_CountTrainersDefeated::
	setvar VAR_0x8000, 0
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckJocelyn::
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckLaura::
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckBrenden::
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckCristian::
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckLilith::
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_StopCountingTrainers::
	return

DewfordTown_Gym_EventScript_Brawly::
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_BrawlyRematch
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, DewfordTown_Gym_EventScript_GiveBulkUp2
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_BrawlyDefeated::
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_DEWFORD_GYM
	setflag FLAG_BADGE02_GET
	addvar VAR_PETALBURG_GYM_STATE, 1
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
	setvar VAR_0x8008, 2
	call Common_EventScript_SetGymTrainers
	call DewfordTown_Gym_EventScript_GiveBulkUp
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
	release
	end

DewfordTown_Gym_EventScript_GiveBulkUp::
	giveitem ITEM_TM_BULK_UP
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_BULK_UP
	return

DewfordTown_Gym_EventScript_GiveBulkUp2:
	giveitem ITEM_TM_BULK_UP
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_BULK_UP
	release
	end

DewfordTown_Gym_EventScript_BrawlyRematch::
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Takao::
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_TakaoBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Jocelyn::
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_JocelynBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Laura::
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_LauraBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Brenden::
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_BrendenBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Cristian::
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_CristianBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Lilith::
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_LilithBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_GymGuidePostVictory::
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
	goto DewfordTown_Gym_EventScript_GymStatue
	end

DewfordTown_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
	goto DewfordTown_Gym_EventScript_GymStatue
	end

DewfordTown_Gym_EventScript_GymStatueCertified::
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Gym_EventScript_GymStatue::
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Gym_Text_GymGuideAdvice:
	.string "Na, wie sieht es aus, auf dem Weg zum\n"
	.string "CHAMP, {PLAYER}?\p"
	.string "FAUSTAUHAVENs ARENALEITER KAMILLO\n"
	.string "besitzt KAMPF-POKéMON.\p"
	.string "Wenn du dort NORMAL-POKéMON antreten\n"
	.string "lässt, sind Probleme vorprogrammiert!\n"
	.string "\p"
	.string "KAMPF-POKéMON schlagen die NORMALEN\n"
	.string "POKéMON einfach nieder. Pass gut auf!\n"
	.string "\p"
	.string "Und das Schlimme ist: Die ARENA ist\n"
	.string "dunkel wie die Tiefsee!\p"
	.string "Aber mit jedem TRAINER, den du auf dem\n"
	.string "Weg zum ARENALEITER besiegst, wird sie\l"
	.string "heller!\p"
	.string "Also, dann leg mal los!$"

DewfordTown_Gym_Text_GymGuidePostVictory:
	.string "Huuh!\n"
	.string "Das ist mir hier aber schon zu hell!\p"
	.string "Deine Zukunft wird strahlend hell\n"
	.string "sein!$"

DewfordTown_Gym_Text_TakaoIntro:
	.string "Die Macht bestimmt alles!\n"
	.string "Komm schon!$"

DewfordTown_Gym_Text_TakaoDefeat:
	.string "Nicht genug Macht…$"

DewfordTown_Gym_Text_TakaoPostBattle:
	.string "Gegen dein Talent ist meine Macht\n"
	.string "machtlos. Deine Technik ist super!$"

DewfordTown_Gym_Text_JocelynIntro:
	.string "Man muss doch KAMILLO nicht mit so\n"
	.string "etwas Nichtigem belästigen!\p"
	.string "Ich mache dich fertig!$"

DewfordTown_Gym_Text_JocelynDefeat:
	.string "Aber… Wie…?\n"
	.string "Wie konnte ich nur so schnell\l"
	.string "verlieren?$"

DewfordTown_Gym_Text_JocelynPostBattle:
	.string "Ich werde diese Niederlage nicht ab-\n"
	.string "haken. Sie wird mich beim Training\l"
	.string "motivieren!\p"
	.string "Eines Tages werde ich auch ein\n"
	.string "ARENALEITER sein!\p"
	.string "Nein! Ich werde der CHAMP der\n"
	.string "POKéMON LIGA!$"

DewfordTown_Gym_Text_LauraIntro:
	.string "Du forderst mich heraus? Dann wundere\n"
	.string "dich nicht, wenn du weinst wie ein\l"
	.string "Baby!$"

DewfordTown_Gym_Text_LauraDefeat:
	.string "Waaaaahaaaaaa!\n"
	.string "Schluchz! Schnief! Ich habe\l"
	.string "verloooren!$"

DewfordTown_Gym_Text_LauraPostBattle:
	.string "Ich kämpfe im Dunkeln, das macht mich\n"
	.string "mutiger und trainiert mein Herz.\p"
	.string "Weil es hier so dunkel ist, habe ich\n"
	.string "noch\l"
	.string "nie das Gesicht von KAMILLO gesehen.$"

DewfordTown_Gym_Text_LilithIntro:
	.string "Huhuhu…\n"
	.string "Was stolperst du im Dunklen herum?$"

DewfordTown_Gym_Text_LilithDefeat:
	.string "Ach, du… Ich habe kein\n"
	.string "Interesse, dich kennen zu lernen.$"

DewfordTown_Gym_Text_LilithPostBattle:
	.string "Du verdienst eine Niederlage, damit du\n"
	.string "wieder von vorne anfangen musst.$"

DewfordTown_Gym_Text_BrendenIntro:
	.string "Ich zeige dir, wie viel Köpfchen ein\n"
	.string "Seemann hat!$"

DewfordTown_Gym_Text_BrendenDefeat:
	.string "Wie konnte das nur passieren? Es ist\n"
	.string "nicht meine Art, einfach zu verlieren.$"

DewfordTown_Gym_Text_BrendenPostBattle:
	.string "Ahoi! Du bist es wert, unserem\n"
	.string "ARENALEITER vorgestellt zu werden.$"

DewfordTown_Gym_Text_CristianIntro:
	.string "Wenn du hier vorbei willst, musst du\n"
	.string "erst an mir vorbei!$"

DewfordTown_Gym_Text_CristianDefeat:
	.string "Grrrr! Ich wurde einfach überwältigt!$"

DewfordTown_Gym_Text_CristianPostBattle:
	.string "Du hast gewonnen!\n"
	.string "Hol dir den ORDEN!$"

DewfordTown_Gym_Text_BrawlyIntro:
	.string "Ich bin KAMILLO!\n"
	.string "Der ARENALEITER von FAUSTAUHAVEN!\p"
	.string "Ich habe die wilden Strudel dieser\n"
	.string "Gegend gemeistert und bin in dieser\l"
	.string "pechschwarzen Höhle stark geworden.\p"
	.string "Du willst mich wirklich herausfordern?\n"
	.string "Dann zeig mir, woraus du gemacht bist!$"

DewfordTown_Gym_Text_BrawlyDefeat:
	.string "Huihuihui! Du hast eine größere Welle\n"
	.string "produziert, als ich dir zugetraut\n"
	.string "hätte. \p"
	.string "Du hast mich absaufen lassen!\p"
	.string "Okay, du hast mich erwischt!\n"
	.string "Nimm den ORDEN dieser ARENA!$"

DewfordTown_Gym_Text_ReceivedKnuckleBadge:
	.string "{PLAYER} erhält den KNÖCHELORDEN von\n"
	.string "KAMILLO.$"

DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
	.string "Dank des KNÖCHELORDENs werden dir alle\n"
	.string "POKéMON bis Level 30 gehorchen, auch\l"
	.string "die, die du durch Tausch erhalten\n"
	.string "hast. \p"
	.string "Und du kannst die VM BLITZ auch\n"
	.string "außerhalb eines Kampfes anwenden.\p"
	.string "Und wenn du magst, kannst du auch\n"
	.string "diese TECHNISCHE MASCHINE anwenden.$"

DewfordTown_Gym_Text_ExplainBulkUp:
	.string "Die TM08 enthält PROTZER.\p"
	.string "Diese Attacke hebt den Status des\n"
	.string "ANGRIFFs und der VERTEIDIGUNG.\p"
	.string "… … … … … …$"

DewfordTown_Gym_Text_RegisteredBrawly:
	.string "ARENALEITER KAMILLO wurde\n"
	.string "im POKéNAV eingetragen.$"

DewfordTown_Gym_Text_BrawlyPostBattle:
	.string "Ich sehe in dir ein Talent, das eines\n"
	.string "Tages zu einer riesigen Welle wird und\l"
	.string "einen Sturm des Erstaunens bei anderen\l"
	.string "TRAINERn entfachen wird!$"

DewfordTown_Gym_Text_GymStatue:
	.string "POKéMON ARENA von FAUSTAUHAVEN$"

DewfordTown_Gym_Text_GymStatueCertified:
	.string "POKéMON ARENA von FAUSTAUHAVEN\p"
	.string "KAMILLOS ANERKANNTE TRAINER:\n"
	.string "{PLAYER}$"

DewfordTown_Gym_Text_BrawlyPreRematch:
	.string "KAMILLO: Eine Welle kann sich zurück-\n"
	.string "ziehen, wird aber immer wieder an\l"
	.string "Land zurückkommen.\p"
	.string "Ein riesiges Talent wie du…\n"
	.string "Ich wusste, du würdest wiederkommen.\p"
	.string "Zeig mir, wie gut du geworden bist.$"

DewfordTown_Gym_Text_BrawlyRematchDefeat:
	.string "Und wieder wurde ich fortgespült.$"

DewfordTown_Gym_Text_BrawlyPostRematch:
	.string "KAMILLO: Kämpfe sind wild und tief wie\n"
	.string "die See. Du siehst kein Land.\l"
	.string "Wie das Meer um HOENN.$"

DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
	.string "KAMILLO: Eine Welle kann sich zurück-\n"
	.string "ziehen, wird aber immer wieder an\l"
	.string "Land zurückkommen.\p"
	.string "Ein riesiges Talent wie du…\n"
	.string "Ich wusste, du würdest wiederkommen.\p"
	.string "Oh, du hast ja nur ein POKéMON, das\n"
	.string "kämpfen kann.\p"
	.string "Tut mir Leid, aber ich trete nur gegen\n"
	.string "dich an, wenn du mindestens zwei\l"
	.string "POKéMON hast.$"

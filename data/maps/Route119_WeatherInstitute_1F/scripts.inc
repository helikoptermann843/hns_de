Route119_WeatherInstitute_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_1F_OnTransition
	.byte 0

Route119_WeatherInstitute_1F_OnTransition:
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_1F_EventScript_SetLittleBoyPos
	end

Route119_WeatherInstitute_1F_EventScript_SetLittleBoyPos::
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_LITTLE_BOY, 0, 5
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_LITTLE_BOY, MOVEMENT_TYPE_FACE_RIGHT
	return

Route119_WeatherInstitute_1F_EventScript_LittleBoy::
	lock
	faceplayer
	special GetPlayerBigGuyGirlString
	goto_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_1F_EventScript_LittleBoyTeamAquaHere
	msgbox Route119_WeatherInstitute_1F_Text_WowYoureStrong, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_1F_EventScript_LittleBoyTeamAquaHere::
	msgbox Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_1F_EventScript_InstituteWorker1::
	lock
	faceplayer
	goto_if_unset FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_1F_EventScript_StudyingRain
	setvar VAR_0x8004, 0
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
	goto_if_eq VAR_0x8004, 2, Route119_WeatherInstitute_1F_EventScript_StudyingRain  @ Both defeated
	msgbox Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated::
	addvar VAR_0x8004, 1
	return

Route119_WeatherInstitute_1F_EventScript_StudyingRain::
	msgbox Route119_WeatherInstitute_1F_Text_ProfStudyingRain, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_1F_EventScript_InstituteWorker2::
	msgbox Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo, MSGBOX_NPC
	end

Route119_WeatherInstitute_1F_EventScript_Bed::
	lockall
	msgbox Route119_WeatherInstitute_1F_Text_TakeRestInBed, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	releaseall
	end

Route119_WeatherInstitute_1F_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, Route119_WeatherInstitute_1F_Text_Grunt1Intro, Route119_WeatherInstitute_1F_Text_Grunt1Defeat
	msgbox Route119_WeatherInstitute_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_1F_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, Route119_WeatherInstitute_1F_Text_Grunt4Intro, Route119_WeatherInstitute_1F_Text_Grunt4Defeat
	msgbox Route119_WeatherInstitute_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_1F_Text_Grunt1Intro:
	.string "Der BOSS hat Interesse an den \n"
	.string "Forschungen gezeigt, daher hat er uns\l"
	.string "hergeschickt.\p"
	.string "Stör uns gefälligst nicht!$"

Route119_WeatherInstitute_1F_Text_Grunt1Defeat:
	.string "So ein Mist…\n"
	.string "Besiegt… von einem Kind!$"

Route119_WeatherInstitute_1F_Text_Grunt1PostBattle:
	.string "Unser BOSS weiß alles.\p"
	.string "Ich bin nur ein RÜPEL. Woher soll ich\n"
	.string "wissen, was er denkt?$"

Route119_WeatherInstitute_1F_Text_Grunt4Intro:
	.string "Wie? Was macht denn das Kind hier?$"

Route119_WeatherInstitute_1F_Text_Grunt4Defeat:
	.string "Wie? Ich habe verloren?!?$"

Route119_WeatherInstitute_1F_Text_Grunt4PostBattle:
	.string "Oh. Ich werde mir etwas anhören\l"
	.string "müssen,\n"
	.string "weil ich gegen ein Kind verloren habe…\p"
	.string "\p"
	.string "Ich muss mich jetzt dringend hinlegen…$"

Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs:
	.string "Als ich schlief, schlich sich jemand\n"
	.string "nach oben!$"

Route119_WeatherInstitute_1F_Text_WowYoureStrong:
	.string "Wow! Bist du aber stark!\p"
	.string "Ich wäre auch gerne ein POKéMON-\n"
	.string "TRAINER wie du!$"

Route119_WeatherInstitute_1F_Text_ProfStudyingRain:
	.string "Der PROFESSOR liebt den Regen.\n"
	.string "Das ist eine Tatsache.\p"
	.string "Aber wenn es noch lange so regnet,\n"
	.string "wird das zu Problemen führen. Das ist\l"
	.string "die andere Seite der Medaille.\p"
	.string "Und daher erforscht der PROFESSOR,\n"
	.string "wie man den Regen positiv nutzen kann.$"

Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather:
	.string "Im ersten Stock des INSTITUTs\n"
	.string "untersuchen wir die Klimaveränderungen\l"
	.string "in der HOENN-Region.\p"
	.string "Wir haben dort eine temporäre Dürre\n"
	.string "und einzelne Fälle von heftigem\l"
	.string "Niederschlag verzeichnen können.$"

Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo:
	.string "Hallo! Dein beherztes Eingreifen hat\n"
	.string "uns gerettet!\p"
	.string "Ich verstehe nur nicht, was die AQUAs\n"
	.string "von uns wollten…$"

Route119_WeatherInstitute_1F_Text_TakeRestInBed:
	.string "Da steht ein Bett…\n"
	.string "Eine Pause wäre willkommen.$"


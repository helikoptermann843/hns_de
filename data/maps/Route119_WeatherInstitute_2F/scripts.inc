Route119_WeatherInstitute_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_2F_OnTransition
	.byte 0

Route119_WeatherInstitute_2F_OnTransition:
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 0, Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere
	call_if_eq VAR_WEATHER_INSTITUTE_STATE, 1, Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone
	call_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear
	end

Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere::
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, 1, 6
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
	return

Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone::
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, 4, 6
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
	return

Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear::
	setobjectxyperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, 2, 2
	setobjectmovementtype LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, MOVEMENT_TYPE_FACE_UP
	return

Route119_WeatherInstitute_2F_EventScript_Grunt5::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_5, Route119_WeatherInstitute_2F_Text_Grunt5Intro, Route119_WeatherInstitute_2F_Text_Grunt5Defeat
	msgbox Route119_WeatherInstitute_2F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_2F_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, Route119_WeatherInstitute_2F_Text_Grunt2Intro, Route119_WeatherInstitute_2F_Text_Grunt2Defeat
	msgbox Route119_WeatherInstitute_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_2F_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, Route119_WeatherInstitute_2F_Text_Grunt3Intro, Route119_WeatherInstitute_2F_Text_Grunt3Defeat
	msgbox Route119_WeatherInstitute_2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_2F_EventScript_Shelly::
	trainerbattle_single TRAINER_SHELLY_WEATHER_INSTITUTE, Route119_WeatherInstitute_2F_Text_ShellyIntro, Route119_WeatherInstitute_2F_Text_ShellyDefeat, Route119_WeatherInstitute_2F_EventScript_ShellyDefeated
	msgbox Route119_WeatherInstitute_2F_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_2F_EventScript_ShellyDefeated::
	msgbox Route119_WeatherInstitute_2F_Text_ShellyPostBattle, MSGBOX_DEFAULT
	closemessage
	addobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_3
	applymovement LOCALID_WEATHER_INSTITUTE_2F_GRUNT_3, Route119_WeatherInstitute_2F_Movement_GruntApproachShelly
	applymovement LOCALID_PLAYER, Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay
	waitmovement 0
	msgbox Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SHELLY, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SHELLY, Common_Movement_Delay48
	waitmovement 0
	msgbox Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre, MSGBOX_DEFAULT
	closemessage
	setvar VAR_WEATHER_INSTITUTE_STATE, 1
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
	fadedefaultbgm
	fadescreen FADE_TO_BLACK
	setflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_1
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_2
	removeobject LOCALID_WEATHER_INSTITUTE_2F_SHELLY
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_4
	removeobject LOCALID_WEATHER_INSTITUTE_2F_GRUNT_3
	applymovement LOCALID_PLAYER, Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition
	waitmovement 0
	fadescreen FADE_FROM_BLACK
	applymovement LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST, Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer
	waitmovement 0
	copyobjectxytoperm LOCALID_WEATHER_INSTITUTE_2F_SCIENTIST
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
	end

Route119_WeatherInstitute_2F_EventScript_ReceiveCastform::
	msgbox Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon, MSGBOX_DEFAULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CASTFORM_NORMAL
	givemon SPECIES_CASTFORM_NORMAL, 25, ITEM_MYSTIC_WATER
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty::
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_ExplainCastform
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
	end

Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC::
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
	call Common_EventScript_NameReceivedBoxMon
	goto Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
	end

Route119_WeatherInstitute_2F_EventScript_SendCastformToPC::
	call Common_EventScript_TransferredToPC
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
	end

Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare::
	playfanfare MUS_OBTAIN_ITEM
	message Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_CASTFORM_NORMAL
	return

Route119_WeatherInstitute_2F_EventScript_ExplainCastform::
	msgbox Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_CASTFORM
	release
	end

Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather::
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather
	msgbox Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather::
	setvar VAR_0x8004, 0
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
	goto_if_eq VAR_0x8004, 2, Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather  @ Both defeated
	call_if_unset FLAG_TEMP_2, Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather
	specialvar VAR_RESULT, GetAbnormalWeatherMapNameAndType
	goto_if_eq VAR_RESULT, 1, Route119_WeatherInstitute_2F_EventScript_KyogreWeather
	msgbox Route119_WeatherInstitute_2F_Text_GroudonWeather, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_2F_EventScript_KyogreWeather::
	msgbox Route119_WeatherInstitute_2F_Text_KyogreWeather, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather::
	special CreateAbnormalWeatherEvent
	setflag FLAG_TEMP_2
	return

Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated::
	addvar VAR_0x8004, 1
	return

Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather::
	msgbox Route119_WeatherInstitute_2F_Text_NoAbnormalWeather, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_2F_Movement_GruntApproachShelly:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	ride_water_current_up
	walk_in_place_faster_down
	step_end

Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition:
	slide_down
	walk_in_place_faster_left
	step_end

Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer:
	walk_right
	walk_right
	walk_right
	step_end

Route119_WeatherInstitute_2F_EventScript_WeatherScientist::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_CASTFORM, Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
	end

Route119_WeatherInstitute_2F_Text_Grunt2Intro:
	.string "Das INSTITUT hat ein POKéMON ent-\n"
	.string "wickelt, das irgendwas mit dem Wetter\l"
	.string "zu tun hat. Das müssen wir kriegen!$"

Route119_WeatherInstitute_2F_Text_Grunt2Defeat:
	.string "Ein Kind hat unsere Pläne durchkreuzt?$"

Route119_WeatherInstitute_2F_Text_Grunt2PostBattle:
	.string "Wenn sie hier tatsächlich ein POKéMON\n"
	.string "entwickelt haben, das das Wetter kon-\l"
	.string "trollieren kann, müssen wir von TEAM\l"
	.string "AQUA es in unsere Gewalt bringen!$"

Route119_WeatherInstitute_2F_Text_Grunt3Intro:
	.string "Wir sind TEAM AQUA!\n"
	.string "Wir sind überall dort, wo Raritäten\l"
	.string "gefunden wurden!$"

Route119_WeatherInstitute_2F_Text_Grunt3Defeat:
	.string "Das war’s dann wohl!$"

Route119_WeatherInstitute_2F_Text_Grunt3PostBattle:
	.string "Du hast doch gar keine Ahnung, was wir\n"
	.string "von TEAM AQUA vorbereiten!\l"
	.string "Geh uns gefälligst aus dem Weg!$"

Route119_WeatherInstitute_2F_Text_Grunt5Intro:
	.string "Jetzt sag nicht, du bist auch auf der\n"
	.string "Suche nach diesem Wetter-POKéMON?\p"
	.string "Das erlaube ich nicht!\n"
	.string "Wir waren schließlich zuerst hier!$"

Route119_WeatherInstitute_2F_Text_Grunt5Defeat:
	.string "Nun schau dir meine POKéMON an.$"

Route119_WeatherInstitute_2F_Text_Grunt5PostBattle:
	.string "Hmpf… Was soll’s?!?\n"
	.string "Das, was wir suchen…\p"
	.string "ist sowieso nicht hier zu finden…\n"
	.string "Hihihihihihihiiiii…$"

Route119_WeatherInstitute_2F_Text_ShellyIntro:
	.string "Ahahahahaha!!!\p"
	.string "Du willst dich allen Ernstes in die\l"
	.string "Ange-\n"
	.string "legenheiten von TEAM AQUA einmischen?\p"
	.string "\p"
	.string "Dann bist du entweder furchtlos oder\n"
	.string "einfach dumm! Oder beides?\p"
	.string "Du bist ja so niedlich. Einfach wider-\n"
	.string "lich! Ich mach dich fertig, du Baby!$"

Route119_WeatherInstitute_2F_Text_ShellyDefeat:
	.string "Ahahahahaha!!!!!\n"
	.string "Du bist einfach widerlich… stark!$"

Route119_WeatherInstitute_2F_Text_ShellyPostBattle:
	.string "Es ist schon schlimm genug, sich\n"
	.string "ständig mit TEAM MAGMA auseinander-\p"
	.string "setzen zu müssen, und jetzt kommst du\n"
	.string "auch noch daher!\p"
	.string "Warum musst du deine spitze Nase in\n"
	.string "Dinge stecken, die dich nichts\l"
	.string "angehen?$"

Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy:
	.string "Wir haben hier eine Krisensituation!\p"
	.string "Eine Gruppe von TEAM MAGMA ist gerade\n"
	.string "am KLIMA-INSTITUT vorbeigelaufen!\p"
	.string "Sie ist wohl auf dem Weg zum PYROBERG!$"

Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre:
	.string "Was?!?\n"
	.string "Dann lasst uns von hier verschwinden!\n"
	.string "\p"
	.string "Und zwar schnell! Wir müssen so\n"
	.string "schnell wie möglich zum PYROBERG!\p"
	.string "Ahahahahahaha!\n"
	.string "TEAM MAGMA, mach dich auf was gefasst!$"

Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon:
	.string "Danke! Vielen Dank! Nun sind wir in\n"
	.string "Sicherheit! \p"
	.string "Es ist vielleicht eine seltsame Art\n"
	.string "danke zu sagen, aber dieses POKéMON\l"
	.string "ist für dich!$"

@ Unused
Route119_WeatherInstitute_2F_Text_NoRoomForPokemon:
	.string "Hm? You don’t seem to have any room\n"
	.string "for this POKéMON.$"

Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform:
	.string "{PLAYER} erhält FORMEO!$"

Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather:
	.string "Dieses POKéMON ändert seine Gestalt\n"
	.string "abhängig vom jeweiligen Wetter.\p"
	.string "Hier im INSTITUT gibt es sehr viele\n"
	.string "davon - du kannst es ruhig annehmen.$"

Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous:
	.string "Seit Jahren erforsche ich den Regen,\n"
	.string "aber zu denken, dass Menschen das\l"
	.string "Wetter frei bestimmen können, ist\n"
	.string "dumm.$"

Route119_WeatherInstitute_2F_Text_GroudonWeather:
	.string "Ich zeichne die Klimaveränderungen in\n"
	.string "der HOENN-Region auf.\p"
	.string "Im Moment gibt es eine Dürre. Und\n"
	.string "zwar… auf der {STR_VAR_1}.\p"
	.string "Bedeutet das, dass auf der\n"
	.string "{STR_VAR_1}…$"

Route119_WeatherInstitute_2F_Text_KyogreWeather:
	.string "Ich zeichne die Klimaveränderungen in\n"
	.string "der HOENN-Region auf.\p"
	.string "Im Moment gibt es starke\n"
	.string "Niederschläge.\n"
	.string "Und zwar… auf der {STR_VAR_1}.\p"
	.string "Bedeutet das, dass auf der\n"
	.string "{STR_VAR_1}…$"

Route119_WeatherInstitute_2F_Text_NoAbnormalWeather:
	.string "Das Wetter hat sich beruhigt. Es gibt\n"
	.string "keine außergewöhnlichen Vorkommnisse.\n"
	.string "\p"
	.string "Der gelegentliche Regen ist ein Segen,\n"
	.string "wirklich.$"


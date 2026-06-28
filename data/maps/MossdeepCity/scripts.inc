MossdeepCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_OnTransition
	.byte 0

MossdeepCity_OnTransition:
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	end

MossdeepCity_EventScript_PokefanF::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_PokefanFMagmaGone
	msgbox MossdeepCity_Text_SpaceCenterReceivedLetter, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_PokefanFMagmaGone::
	msgbox MossdeepCity_Text_SpaceCenterLaunchingRockets, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_Sailor::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_DIVE, MossdeepCity_EventScript_SailorMagmaGone
	msgbox MossdeepCity_Text_MossdeepTargetedByMagma, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_SailorMagmaGone::
	msgbox MossdeepCity_Text_FeelReliefOnLand, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_NinjaBoy::
	msgbox MossdeepCity_Text_WailmerWatching, MSGBOX_NPC
	end

MossdeepCity_EventScript_ExpertM::
	msgbox MossdeepCity_Text_LifeNeedsSeaToLive, MSGBOX_NPC
	end

MossdeepCity_EventScript_Girl::
	msgbox MossdeepCity_Text_NiceIfWorldCoveredByFlowers, MSGBOX_NPC
	end

MossdeepCity_EventScript_Woman::
	msgbox MossdeepCity_Text_SpecialSpaceCenterRock, MSGBOX_NPC
	end

MossdeepCity_EventScript_WhiteRock::
	msgbox MossdeepCity_Text_ItsAWhiteRock, MSGBOX_SIGN
	end

MossdeepCity_EventScript_GymSign::
	msgbox MossdeepCity_Text_GymSign, MSGBOX_SIGN
	end

MossdeepCity_EventScript_CitySign::
	msgbox MossdeepCity_Text_CitySign, MSGBOX_SIGN
	end

MossdeepCity_EventScript_SpaceCenterSign::
	msgbox MossdeepCity_Text_SpaceCenterSign, MSGBOX_SIGN
	end

MossdeepCity_EventScript_VisitedMossdeep::
	setflag FLAG_VISITED_MOSSDEEP_CITY
	setvar VAR_TEMP_1, 1
	end

MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter::
	lockall
	applymovement LOCALID_MOSSDEEP_MAXIE, MossdeepCity_Movement_MaxieGestureToSpaceCenter
	waitmovement 0
	applymovement LOCALID_MOSSDEEP_GRUNT_1, MossdeepCity_Movement_GruntFaceSpaceCenter
	applymovement LOCALID_MOSSDEEP_GRUNT_2, MossdeepCity_Movement_GruntFaceSpaceCenter
	applymovement LOCALID_MOSSDEEP_GRUNT_3, MossdeepCity_Movement_GruntFaceSpaceCenter
	applymovement LOCALID_MOSSDEEP_GRUNT_4, MossdeepCity_Movement_GruntFaceSpaceCenter
	waitmovement 0
	applymovement LOCALID_MOSSDEEP_MAXIE, MossdeepCity_Movement_MaxieEnterSpaceCenter
	applymovement LOCALID_MOSSDEEP_GRUNT_1, MossdeepCity_Movement_Grunt1EnterSpaceCenter
	applymovement LOCALID_MOSSDEEP_GRUNT_2, MossdeepCity_Movement_Grunt2EnterSpaceCenter
	applymovement LOCALID_MOSSDEEP_GRUNT_3, MossdeepCity_Movement_Grunt3EnterSpaceCenter
	applymovement LOCALID_MOSSDEEP_GRUNT_4, MossdeepCity_Movement_Grunt4EnterSpaceCenter
	waitmovement 0
	removeobject LOCALID_MOSSDEEP_MAXIE
	removeobject LOCALID_MOSSDEEP_GRUNT_1
	removeobject LOCALID_MOSSDEEP_GRUNT_2
	removeobject LOCALID_MOSSDEEP_GRUNT_3
	removeobject LOCALID_MOSSDEEP_GRUNT_4
	delay 30
	setvar VAR_MOSSDEEP_CITY_STATE, 2
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
	releaseall
	end

MossdeepCity_Movement_MaxieGestureToSpaceCenter:
	delay_16
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	step_end

MossdeepCity_Movement_GruntFaceSpaceCenter:
	face_right
	delay_16
	delay_16
	delay_16
	step_end

MossdeepCity_Movement_MaxieEnterSpaceCenter:
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MossdeepCity_Movement_Grunt1EnterSpaceCenter:
	delay_16
	delay_8
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MossdeepCity_Movement_Grunt2EnterSpaceCenter:
	delay_16
	delay_8
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MossdeepCity_Movement_Grunt3EnterSpaceCenter:
	delay_16
	delay_8
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MossdeepCity_Movement_Grunt4EnterSpaceCenter:
	delay_16
	delay_8
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MossdeepCity_EventScript_Man::
	lock
	faceplayer
	msgbox MossdeepCity_Text_SurfExhilarating, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MossdeepCity_EventScript_KingsRockBoy::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_KINGS_ROCK, MossdeepCity_EventScript_ReceivedKingsRock
	msgbox MossdeepCity_Text_WantKingsRockStevenGaveMe, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MossdeepCity_EventScript_DeclineKingsRock
	msgbox MossdeepCity_Text_YouCanKeepIt, MSGBOX_DEFAULT
	giveitem ITEM_KINGS_ROCK
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_KINGS_ROCK
	release
	end

MossdeepCity_EventScript_ReceivedKingsRock::
	msgbox MossdeepCity_Text_StevensHouseOverThere, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_DeclineKingsRock::
	msgbox MossdeepCity_Text_WhatToDoWithWeirdRock, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_BlackBelt::
	msgbox MossdeepCity_Text_SootopolisNewGymLeader, MSGBOX_NPC
	end

MossdeepCity_EventScript_Scott::
	lock
	faceplayer
	msgbox MossdeepCity_Text_ScottSomethingWrongWithTown, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_NORTH, MossdeepCity_EventScript_ScottExitNorth
	call_if_eq VAR_FACING, DIR_EAST, MossdeepCity_EventScript_ScottExitEast
	addvar VAR_SCOTT_STATE, 1
	removeobject LOCALID_MOSSDEEP_SCOTT
	release
	end

MossdeepCity_EventScript_ScottExitNorth::
	applymovement LOCALID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
	applymovement LOCALID_MOSSDEEP_SCOTT, MossdeepCity_Movement_ScottExitNorth
	waitmovement 0
	return

MossdeepCity_EventScript_ScottExitEast::
	applymovement LOCALID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
	applymovement LOCALID_MOSSDEEP_SCOTT, MossdeepCity_Movement_ScottExitEast
	waitmovement 0
	return

MossdeepCity_Movement_PlayerWatchScottExit:
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

MossdeepCity_Movement_ScottExitNorth:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MossdeepCity_Movement_ScottExitEast:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MossdeepCity_Text_WantKingsRockStevenGaveMe:
	.string "Ich habe das von TROY bekommen, weiß\n"
	.string "aber nicht, was ich damit machen soll.\n"
	.string "\p"
	.string "Ich glaube, es heißt KING-STEIN.\n"
	.string "Möchtest du das haben?$"

MossdeepCity_Text_YouCanKeepIt:
	.string "Warum willst du das haben?\n"
	.string "Du bist komisch.\p"
	.string "Du kannst es behalten, aber erzähle\n"
	.string "es nicht TROY.$"

MossdeepCity_Text_StevensHouseOverThere:
	.string "TROYs Haus befindet sich gleich\n"
	.string "dort drüben.$"

MossdeepCity_Text_WhatToDoWithWeirdRock:
	.string "Ach, du denkst das auch! Was soll man\n"
	.string "auch mit komischen Steinen anfangen?$"

MossdeepCity_Text_WailmerWatching:
	.string "In der Nähe von MOOSBACH CITY\n"
	.string "kann man wilde WAILMER sehen.\p"
	.string "Das nennt man, äh…\n"
	.string "Nennt man… äh… ähm…\p"
	.string "WAI…, WAI…, WAI…\p"
	.string "WAILMER Watching!$"

MossdeepCity_Text_SpaceCenterReceivedLetter:
	.string "Am RAUMFAHRTZENTRUM auf der Insel\n"
	.string "werden große Raketen gestartet.\p"
	.string "Dort ist vor kurzem ein Brief ange-\n"
	.string "kommen, der für Aufregung sorgte.$"

MossdeepCity_Text_SpaceCenterLaunchingRockets:
	.string "Am RAUMFAHRTZENTRUM auf der Insel\n"
	.string "werden große Raketen gestartet.$"

MossdeepCity_Text_MossdeepTargetedByMagma:
	.string "Ich habe von einem Freund, einem\l"
	.string "MATROSEN, gehört, dass TEAM AQUA sich\n"
	.string "\pin SEEGRASULB CITY aufgehalten\p"
	.string "haben soll.\p"
	.string "Aber dann ist jemand gekommen und hat\n"
	.string "sie aufgemischt.\p"
	.string "Und in MOOSBACH CITY ist TEAM\n"
	.string "MAGMA.\p"
	.string "Wenn du wissen willst, was sie\n"
	.string "vorhaben,\l"
	.string "dann geh zum RAUMFAHRTZENTRUM.$"

MossdeepCity_Text_FeelReliefOnLand:
	.string "Ich bin ein MATROSE, daher ist das\n"
	.string "Meer sehr wichtig für mich.\p"
	.string "Aber weißt du, was? Wenn ich nach\n"
	.string "einer\n"
	.string "langen Seefahrt wieder festen Boden\p"
	.string "unter den Füßen habe, bin ich jedes\n"
	.string "Mal erleichtert.$"

MossdeepCity_Text_NiceIfWorldCoveredByFlowers:
	.string "Wäre das nicht schön?\p"
	.string "Wenn die ganze Welt so mit Blumen und\n"
	.string "Pflanzen bewachsen wäre wie diese\l"
	.string "Insel?$"

MossdeepCity_Text_LifeNeedsSeaToLive:
	.string "Alle Lebewesen brauchen das Meer, um\n"
	.string "leben zu können, auch wenn sie an Land\l"
	.string "leben.\p"
	.string "Am Ende ihrer Reise wird aus den\n"
	.string "Lebewesen Erde und sie kehren zurück\l"
	.string "zum Land.\p"
	.string "Und das Meer steht immer in Verbindung\n"
	.string "zum Land.\p"
	.string "Genau wie dieses Ufer hier.$"

MossdeepCity_Text_SurfExhilarating:
	.string "Eine Reise auf einem Schiff ist toll.\n"
	.string "\p"
	.string "Aber das Meer auf einem POKéMON zu\n"
	.string "überqueren, das SURFER einsetzt…\p"
	.string "Das ist wirklich eine aufregende\n"
	.string "Sache. Meinst du nicht auch, Kindchen?$"

MossdeepCity_Text_SpecialSpaceCenterRock:
	.string "Dieser Felsen hat eine ganz besondere\n"
	.string "Bedeutung für das RAUMFAHRTZENTRUM.\p"
	.string "Sie haben ihn hier hingesetzt als\n"
	.string "Glücksbringer für den sicheren Flug\n"
	.string "der\l"
	.string "Raketen.\p"
	.string "Wenn du dir etwas wünschst, was machst\n"
	.string "du dann? Sternschnuppen beobachten?\p"
	.string "Ich benutze ein Wunschkärtchen.\n"
	.string "Genau das mache ich.$"

MossdeepCity_Text_ItsAWhiteRock:
	.string "Ein weißer Felsen.$"

MossdeepCity_Text_GymSign:
	.string "POKéMON ARENA von MOOSBACH CITY \n"
	.string "LEITER: SVENJA & BEN\p"
	.string "“Die mystische Kombination!”$"

MossdeepCity_Text_CitySign:
	.string "MOOSBACH CITY\n"
	.string "“Unser Motto: Liebe POKéMON!”$"

MossdeepCity_Text_SpaceCenterSign:
	.string "MOOSBACH CITY RAUMFAHRTZENTRUM\n"
	.string "“Der letzte Ort vor dem All.”$"

MossdeepCity_Text_ScottSomethingWrongWithTown:
	.string "SCOTT: Geht es dir gut, {PLAYER}{KUN}?\n"
	.string "Mir geht es fantastisch!\p"
	.string "Ich habe mir sagen lassen, dass die\n"
	.string "ARENALEITER von MOOSBACH sehr stark\l"
	.string "sein sollen.\p"
	.string "Davon musste ich mich einfach selbst\n"
	.string "überzeugen.\p"
	.string "Aber in dieser Stadt geht irgendetwas\n"
	.string "Merkwürdiges vor.\p"
	.string "Die Leute reden über einen Brief mit\n"
	.string "einer Warnung und dem\l"
	.string "RAUMFAHRTZENTRUM…\p"
	.string "Aber ich glaube nicht, dass mich das\n"
	.string "etwas angeht.$"

MossdeepCity_Text_SootopolisNewGymLeader:
	.string "Ahh… Ein großartiges Gefühl, wenn\n"
	.string "die Wellen über meine Füße spülen…\p"
	.string "Apropos Wellen. Kennst du die Stadt\n"
	.string "XENEROVILLE?\p"
	.string "Ich glaube, die ARENA dort hat einen\n"
	.string "neuen LEITER.\p"
	.string "Das soll der frühere Mentor von\n"
	.string "WASSILI sein.$"


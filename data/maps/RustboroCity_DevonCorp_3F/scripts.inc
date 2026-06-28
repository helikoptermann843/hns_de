RustboroCity_DevonCorp_3F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_3F_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RustboroCity_DevonCorp_3F_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_DevonCorp_3F_OnFrame
	.byte 0

RustboroCity_DevonCorp_3F_OnTransition:
	call_if_eq VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos
	end

RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos::
	setobjectxyperm LOCALID_DEVON_CORP_3F_EMPLOYEE, 3, 2
	setobjectmovementtype LOCALID_DEVON_CORP_3F_EMPLOYEE, MOVEMENT_TYPE_FACE_LEFT
	return

RustboroCity_DevonCorp_3F_OnWarp:
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast
	.2byte 0

RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast::
	turnobject LOCALID_PLAYER, DIR_EAST
	end

RustboroCity_DevonCorp_3F_OnFrame:
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_MeetPresident
	.2byte 0

RustboroCity_DevonCorp_3F_EventScript_MeetPresident::
	lockall
	msgbox RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen
	waitmovement 0
	delay 80
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer
	waitmovement 0
	msgbox RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_FOLLOW_ME, FALSE
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident
	applymovement LOCALID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident
	waitmovement 0
	msgbox RustboroCity_DevonCorp_3F_Text_PleaseGoAhead, MSGBOX_DEFAULT
	closemessage
	fadedefaultbgm
	applymovement LOCALID_DEVON_CORP_3F_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk
	applymovement LOCALID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk
	waitmovement 0
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor, MSGBOX_DEFAULT
	giveitem ITEM_LETTER
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message RustboroCity_DevonCorp_3F_Text_ReceivedPokenav
	waitfanfare
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_RECEIVED_POKENAV
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare, MSGBOX_DEFAULT
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	setvar VAR_BRINEY_LOCATION, 1
	clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
	setvar VAR_DEVON_CORP_3F_STATE, 1
	setvar VAR_RUSTBORO_CITY_STATE, 6
	releaseall
	end

RustboroCity_DevonCorp_3F_Movement_Unused:
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_left
	step_end

RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident:
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_left
	step_end

RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk:
	delay_16
	walk_in_place_faster_down
	step_end

RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen:
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	walk_left
	step_end

RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk:
	delay_16
	delay_16
	walk_down
	walk_down
	walk_in_place_faster_right
	step_end

RustboroCity_DevonCorp_3F_EventScript_MrStone::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_EXP_SHARE, RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, RustboroCity_DevonCorp_3F_EventScript_GiveExpShare
	msgbox RustboroCity_DevonCorp_3F_Text_CountingOnYou, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

RustboroCity_DevonCorp_3F_EventScript_GiveExpShare::
	msgbox RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter, MSGBOX_DEFAULT
	giveitem ITEM_EXP_SHARE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_EXP_SHARE
	msgbox RustboroCity_DevonCorp_3F_Text_ExplainExpShare, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor::
	msgbox RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

RustboroCity_DevonCorp_3F_EventScript_Employee::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_REPEAT_BALL, RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls
	msgbox RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls::
	msgbox RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_3F_EventScript_RareRocksDisplay::
	msgbox RustboroCity_DevonCorp_3F_Text_RareRocksDisplay, MSGBOX_SIGN
	end

RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor:
	.string "Ich bin MR. TRUMM, der PRÄSIDENT der\n"
	.string "DEVON CORPORATION.\p"
	.string "Ich muss etwas mit dir besprechen!\p"
	.string "Du hast unseren Mitarbeitern nicht\n"
	.string "nur einmal, sondern zweimal aus\l"
	.string "der Klemme geholfen!\p"
	.string "Du bist so außergewöhnlich, dass ich\n"
	.string "dich gerne um einen Gefallen\l"
	.string "bitten möchte.\p"
	.string "Ich weiß, dass du ein Paket zur WERFT\n"
	.string "in GRAPHITPORT CITY bringen willst.\p"
	.string "Könntest du auf dem Weg nicht\n"
	.string "auch in FAUSTAUHAVEN Halt machen?\p"
	.string "Und TROY in FAUSTAUHAVEN einen BRIEF\n"
	.string "von mir überbringen?$"

RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis:
	.string "MR. TRUMM: Nun, du sollst wissen, dass\n"
	.string "ich ein einflussreicher PRÄSIDENT bin.\n"
	.string "\p"
	.string "Und daher würde ich dich nie um einen\n"
	.string "Gefallen bitten, ohne eine\l"
	.string "Gegenleistung zu erbringen!\p"
	.string "Deshalb möchte ich dir dies hier\n"
	.string "geben.$"

RustboroCity_DevonCorp_3F_Text_ReceivedPokenav:
	.string "{PLAYER} erhält den POKéNAV.$"

RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp:
	.string "MR. TRUMM: Dieses Gerät…\p"
	.string "Es ist ein POKéMON NAVIGATOR - oder\n"
	.string "kurz ein POKéNAV.\p"
	.string "Ein unentbehrliches Hilfsmittel für\n"
	.string "jeden TRAINER auf Abenteuerreise.\p"
	.string "Er enthält die Karte von HOENN.\p"
	.string "So kannst du ganz leicht herausfinden,\n"
	.string "wo die Orte FAUSTAUHAVEN und\l"
	.string "GRAPHITPORT CITY liegen.\p"
	.string "Ich habe übrigens gehört, dass zwei\n"
	.string "fiese Kriminelle - MAGMA und AQUA\l"
	.string "heißen sie, glaube ich - überall nur\l"
	.string "Ärger bereiten.\p"
	.string "Vielleicht solltest du eine Pause\n"
	.string "einlegen, bevor du dich wieder auf den\l"
	.string "Weg machst.$"

RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare:
	.string "MR. TRUMM: Nun, {PLAYER}{KUN},\n"
	.string "sei vorsichtig und pass auf dich auf!$"

RustboroCity_DevonCorp_3F_Text_CountingOnYou:
	.string "MR. TRUMM: Ich verlasse mich auf dich!$"

RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter:
	.string "MR. TRUMM: Du hast meinen BRIEF\n"
	.string "überbracht? Herzlichen Dank!\p"
	.string "Dies ist ein Dankeschön von mir.\n"
	.string "Es wird dir als TRAINER sicher helfen.$"

RustboroCity_DevonCorp_3F_Text_ExplainExpShare:
	.string "MR. TRUMM: Trägt ein POKéMON den EP-\n"
	.string "TEILER, so erhält es in jedem Kampf\l"
	.string "Erfahrungspunkte.\p"
	.string "Auch wenn es gar nicht am Kampf\n"
	.string "teilnimmt.\p"
	.string "Ich würde sagen, der EP-TEILER ist\n"
	.string "sehr\n"
	.string "nützlich, um schwache POKéMON aufzu-\l"
	.string "ziehen.$"

RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends:
	.string "MR. TRUMM: Schon in meiner Jugend habe\n"
	.string "ich mich voll auf die Arbeit\l"
	.string "konzentriert.\p"
	.string "Deshalb weiß ich auch nicht unbedingt,\n"
	.string "was gerade im Trend liegt.\p"
	.string "Wollen alle jungen Leute TRAINER in\n"
	.string "der POKéMON LIGA werden?$"

RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere:
	.string "Dies ist die zweite Etage der DEVON\n"
	.string "CORPORATION.\p"
	.string "Hier befindet sich das BÜRO des\n"
	.string "PRÄSIDENTen.\p"
	.string "Nun ja, ich kann dir gar nicht sagen,\n"
	.string "wie\n"
	.string "dankbar ich dir für deine Taten bin.\p"
	.string "Ähm… Äh, das Paket, das du uns\n"
	.string "zurückgebracht hast…\p"
	.string "Darf ich dich bitten, es zur WERFT\n"
	.string "in GRAPHITPORT CITY zu bringen?\p"
	.string "Es wäre fürchterlich, wenn es den\n"
	.string "Dieben erneut in die Hände fallen\n"
	.string "würde. \p"
	.string "Äh… Hehehe, also, äh, kann ich auch\n"
	.string "dieses Mal wieder mit dir rechnen?\p"
	.string "Ach, da fällt mir ein… Würdest du mich\n"
	.string "einen Moment entschuldigen?$"

RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe:
	.string "Unser PRÄSIDENT würde gerne kurz mit\n"
	.string "dir sprechen.\p"
	.string "Komm bitte mit mir.$"

RustboroCity_DevonCorp_3F_Text_PleaseGoAhead:
	.string "Bitte, hier entlang.$"

RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard:
	.string "Wenn du die WERFT in GRAPHITPORT CITY\n"
	.string "besuchst, solltest du mit KAPT. BRIGG\l"
	.string "sprechen.$"

RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular:
	.string "DEVONs neue Produkte, der WIEDERBALL\n"
	.string "und der TIMERBALL, sind mittlerweile\l"
	.string "sehr populär unter den TRAINERn.$"

RustboroCity_DevonCorp_3F_Text_RareRocksDisplay:
	.string "Eine Kollektion seltener Steine und\n"
	.string "Mineralien - gesammelt vom\l"
	.string "PRÄSIDENTen.$"


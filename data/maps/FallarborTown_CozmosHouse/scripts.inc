FallarborTown_CozmosHouse_MapScripts::
	.byte 0

FallarborTown_CozmosHouse_EventScript_ProfCozmo::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_RETURN, FallarborTown_CozmosHouse_EventScript_GaveMeteorite
	checkitem ITEM_METEORITE
	goto_if_eq VAR_RESULT, TRUE, FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite::
	call_if_unset FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_NoticeMeteorite
	call_if_set FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_AskForMeteorite
	goto_if_eq VAR_RESULT, NO, FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite
	msgbox FallarborTown_CozmosHouse_Text_PleaseUseThisTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_RETURN
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setvar VAR_0x8004, ITEM_METEORITE
	call Common_EventScript_PlayerHandedOverTheItem
	setflag FLAG_RECEIVED_TM_RETURN
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_NoticeMeteorite::
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
	msgbox FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt, MSGBOX_YESNO
	return

FallarborTown_CozmosHouse_EventScript_AskForMeteorite::
	msgbox FallarborTown_CozmosHouse_Text_MayIHaveMeteorite, MSGBOX_YESNO
	return

FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite::
	setflag FLAG_TEMP_2
	msgbox FallarborTown_CozmosHouse_Text_CrushedWithDisappointment, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_GaveMeteorite::
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmosWife::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_RETURN, FallarborTown_CozmosHouse_EventScript_CozmoIsHappy
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_CozmoIsSad
	msgbox FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmoIsSad::
	msgbox FallarborTown_CozmosHouse_Text_FeelSorryForCozmo, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmoIsHappy::
	msgbox FallarborTown_CozmosHouse_Text_CozmoIsSoHappy, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow:
	.string "Prof. Kosmo: Oh…\n"
	.string "Ich hätte mich nie dazu verleiten\l"
	.string "lassen dürfen, Team Magma zu verraten,\l"
	.string "wo Meteoriten zu finden sind…\p"
	.string "Der Meteorit von den Meteorfällen…\n"
	.string "Nun wird er niemals mir gehören…$"

FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt:
	.string "Oh! Oooh?\p"
	.string "Dieses Item…\p"
	.string "Kann es sein?\p"
	.string "Ist das der Meteorit, den Team Magma\n"
	.string "aus den Meteorfällen entwendet hat?\p"
	.string "Bitte, darf ich den haben?\p"
	.string "Du bekommst auch etwas dafür.\n"
	.string "Was hältst du von dieser TM?$"

FallarborTown_CozmosHouse_Text_PleaseUseThisTM:
	.string "Prof. Kosmo: Mit dieser TM möchte ich\n"
	.string "dir meine Dankbarkeit ausdrücken.\l"
	.string "Bitte, nimm sie an!$"

FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch:
	.string "Prof. Kosmo: Oh, ich kann es einfach\n"
	.string "nicht glauben! Das ist nett! So\n"
	.string "nett!!! \p"
	.string "Das wird mir bei meinen Forschungen\n"
	.string "enorm weiterhelfen!$"

FallarborTown_CozmosHouse_Text_CrushedWithDisappointment:
	.string "Prof. Kosmo: Oh, aber…\n"
	.string "Das enttäuscht mich jetzt maßlos…$"

FallarborTown_CozmosHouse_Text_MayIHaveMeteorite:
	.string "Prof. Kosmo: Bitte, darf ich den\n"
	.string "Meteoriten haben?\p"
	.string "Ich möchte ihn nicht umsonst haben!\n"
	.string "Wie\l"
	.string "wäre es mit dieser TM im Tausch dafür?$"

FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls:
	.string "Prof. Kosmo ist unterwegs zu\n"
	.string "Meteorfälle an der Route 114. Einige\l"
	.string "Leute von Team Magma begleiten ihn.$"

FallarborTown_CozmosHouse_Text_FeelSorryForCozmo:
	.string "Armer Prof. Kosmo…\n"
	.string "Er ist so deprimiert… Er tut mir Leid.$"

FallarborTown_CozmosHouse_Text_CozmoIsSoHappy:
	.string "Schau dir nur Prof. Kosmo an…\n"
	.string "Er ist so glücklich! Richtig niedlich.$"


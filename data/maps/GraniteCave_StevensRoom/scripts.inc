GraniteCave_StevensRoom_MapScripts::
	.byte 0

GraniteCave_StevensRoom_EventScript_Steven::
	lock
	faceplayer
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe, MSGBOX_DEFAULT
	setvar VAR_0x8004, ITEM_LETTER
	call Common_EventScript_PlayerHandedOverTheItem
	setflag FLAG_DELIVERED_STEVEN_LETTER
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_TM_STEEL_WING
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister, MSGBOX_DEFAULT
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_REGISTERED_STEVEN_POKENAV
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_NORTH, GraniteCave_StevensRoom_EventScript_StevenExitNorth
	call_if_eq VAR_FACING, DIR_SOUTH, GraniteCave_StevensRoom_EventScript_StevenExitSouth
	call_if_eq VAR_FACING, DIR_WEST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
	call_if_eq VAR_FACING, DIR_EAST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
	playse SE_EXIT
	removeobject LOCALID_GRANITE_CAVE_STEVEN
	release
	end

GraniteCave_StevensRoom_EventScript_StevenExitNorth::
	applymovement LOCALID_GRANITE_CAVE_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
	waitmovement 0
	return

GraniteCave_StevensRoom_EventScript_StevenExitWestEast::
	applymovement LOCALID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
	applymovement LOCALID_GRANITE_CAVE_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
	waitmovement 0
	return

GraniteCave_StevensRoom_EventScript_StevenExitSouth::
	applymovement LOCALID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
	applymovement LOCALID_GRANITE_CAVE_STEVEN, GraniteCave_StevensRoom_Movement_StevenExitSouth
	waitmovement 0
	return

GraniteCave_StevensRoom_EventScript_BagFull::
	msgbox GraniteCave_StevensRoom_Text_OhBagIsFull, MSGBOX_DEFAULT
	return

GraniteCave_StevensRoom_Movement_StevenExit:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	delay_8
	step_end

GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
	delay_16
	delay_16
	delay_16
	walk_in_place_faster_up
	step_end

GraniteCave_StevensRoom_Movement_StevenExitSouth:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	delay_8
	step_end

GraniteCave_StevensRoom_Text_ImStevenLetterForMe:
	.string "Mein Name ist TROY.\p"
	.string "Ich sammle seltene Steine, daher gehe\n"
	.string "ich immer mal wieder auf Reisen.\p"
	.string "Oh? Ein BRIEF? Für mich?$"

GraniteCave_StevensRoom_Text_ThankYouTakeThis:
	.string "TROY: Okay, danke schön.\p"
	.string "Du hast all die Beschwerlichkeiten auf\n"
	.string "dich genommen, um ihn mir zu bringen.\n"
	.string "\p"
	.string "Ich muss mich bedanken. Ehrlich.\n"
	.string "Ich werde dir diese TM geben.\p"
	.string "Sie enthält meine Lieblingsattacke,\n"
	.string "STAHLFLÜGEL.$"

GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister:
	.string "TROY: Deine POKéMON sehen recht\n"
	.string "talentiert aus.\p"
	.string "Wenn du fleißig trainierst, wirst du\n"
	.string "vielleicht eines Tages der CHAMP der\l"
	.string "POKéMON LIGA. Das ist meine Meinung.\p"
	.string "Und da wir uns jetzt so gut kennen\n"
	.string "gelernt haben, sollten wir uns in\l"
	.string "unseren POKéNAVs eintragen.\p"
	.string "… … … … …\n"
	.string "…$"

GraniteCave_StevensRoom_Text_RegisteredSteven:
	.string "TROY wurde im POKéNAV-Verzeichnis\n"
	.string "eingetragen.$"

GraniteCave_StevensRoom_Text_IveGotToHurryAlong:
	.string "Nun muss ich mich aber wirklich\n"
	.string "beeilen.$"

GraniteCave_StevensRoom_Text_OhBagIsFull:
	.string "Oh, dein BEUTEL ist voll.\n"
	.string "Das ist aber wirklich schade.$"


Route7_EastEntrance_Frlg_MapScripts::
	.byte 0

Route7_EastEntrance_EventScript_Guard::
	msgbox Route7_EastEntrance_Text_HiHowsItGoing, MSGBOX_NPC
	end

Route7_EastEntrance_EventScript_GuardTriggerTop::
	lockall
	setvar VAR_TEMP_1, 0
	goto Route7_EastEntrance_EventScript_GuardTrigger
	end

Route7_EastEntrance_EventScript_GuardTriggerMid::
	lockall
	setvar VAR_TEMP_1, 1
	goto Route7_EastEntrance_EventScript_GuardTrigger
	end

Route7_EastEntrance_EventScript_GuardTriggerBottom::
	lockall
	setvar VAR_TEMP_1, 2
	goto Route7_EastEntrance_EventScript_GuardTrigger
	end

Route7_EastEntrance_EventScript_GuardTrigger::
	textcolor NPC_TEXT_COLOR_MALE
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	goto_if_set FLAG_GOT_TEA, Route7_EastEntrance_EventScript_GiveTea
	msgbox Route7_EastEntrance_Text_ThirstyOnGuardDuty
	closemessage
	applymovement LOCALID_PLAYER, Route7_EastEntrance_Movement_BlockPlayerEntry
	waitmovement 0
	releaseall
	end

Route7_EastEntrance_EventScript_GiveTea::
	removeitem ITEM_TEA
	goto Route7_EastEntrance_EventScript_GuardDrinkTea
	end

Route7_EastEntrance_EventScript_GuardDrinkTea::
	msgbox Route7_EastEntrance_Text_ThatTeaLooksTasty
	closemessage
	call_if_eq VAR_TEMP_1, 0, Route7_EastEntrance_WalkToGuardTop
	call_if_eq VAR_TEMP_1, 1, Route7_EastEntrance_WalkToGuardMid
	call_if_eq VAR_TEMP_1, 2, Route7_EastEntrance_WalkToGuardBottom
	msgbox Route7_EastEntrance_Text_ThanksIllShareTeaWithGuards
	setvar VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 1
	releaseall
	end

Route7_EastEntrance_WalkToGuardTop::
	applymovement LOCALID_PLAYER, Route7_EastEntrance_Movement_WalkToGuardTop
	waitmovement 0
	return

Route7_EastEntrance_WalkToGuardMid::
	applymovement LOCALID_PLAYER, Route7_EastEntrance_Movement_WalkToGuardMid
	waitmovement 0
	return

Route7_EastEntrance_WalkToGuardBottom::
	applymovement LOCALID_PLAYER, Route7_EastEntrance_Movement_WalkToGuardBottom
	waitmovement 0
	return

Route7_EastEntrance_Movement_WalkToGuardMid::
	walk_up
	step_end

Route7_EastEntrance_Movement_WalkToGuardBottom::
	walk_up
	walk_up
	step_end

Route7_EastEntrance_Movement_WalkToGuardTop::
	walk_in_place_up
	step_end

Route7_EastEntrance_Movement_BlockPlayerEntry::
	walk_left
	step_end

Route7_EastEntrance_Text_ThirstyOnGuardDuty::
	.string "Ich schiebe hier Wache.\n"
	.string "Ohhh... ich bin so durstig...\p"
	.string "Halt! Stopp!\n"
	.string "Der Durchgang ist gesperrt!$"

Route7_EastEntrance_Text_ThatTeaLooksTasty::
	.string "Oh, dieser Tee…\n"
	.string "Er riecht so lecker…$"

Route7_EastEntrance_Text_ThanksIllShareTeaWithGuards::
	.string "Häh? Ich kann ihn haben?\n"
	.string "Wow, das ist nett, danke!\l"
	.string "……\l"
	.string "Gluck, gluck…\l"
	.string "……\l"
	.string "Schluck…\l"
	.string "Falls du nach Saffronia City\l"
	.string "möchtest…\l"
	.string "……\l"
	.string "Dann darfst du passieren.\p"
	.string "Ich teile den Tee mit den anderen\n"
	.string "Wächtern!$"

Route7_EastEntrance_Text_HiHowsItGoing::
	.string "Hallo! Danke für die Erfrischung!$"


Route110_TrickHousePuzzle6_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHousePuzzle6_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route110_TrickHousePuzzle6_OnWarp
	.byte 0

Route110_TrickHousePuzzle6_OnTransition:
	special RotatingGate_InitPuzzle
	end

Route110_TrickHousePuzzle6_OnWarp:
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, Route110_TrickHousePuzzle6_EventScript_InitPuzzle
	.2byte 0

@ NOTE: This rotating gate puzzle makes use of VAR_TEMP_0 - VAR_TEMP_5
Route110_TrickHousePuzzle6_EventScript_InitPuzzle::
	special RotatingGate_InitPuzzleAndGraphics
	end

Route110_TrickHousePuzzle6_EventScript_Scroll::
	lockall
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_6_STATE, 0, Route110_TrickHousePuzzle6_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle6_EventScript_FoundScroll::
	setvar VAR_TRICK_HOUSE_PUZZLE_6_STATE, 1
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	end

Route110_TrickHousePuzzle6_EventScript_Sophia::
	trainerbattle_single TRAINER_SOPHIA, Route110_TrickHousePuzzle6_Text_SophiaIntro, Route110_TrickHousePuzzle6_Text_SophiaDefeat
	msgbox Route110_TrickHousePuzzle6_Text_SophiaPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle6_EventScript_Benny::
	trainerbattle_single TRAINER_BENNY, Route110_TrickHousePuzzle6_Text_BennyIntro, Route110_TrickHousePuzzle6_Text_BennyDefeat
	msgbox Route110_TrickHousePuzzle6_Text_BennyPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle6_EventScript_Sebastian::
	trainerbattle_single TRAINER_SEBASTIAN, Route110_TrickHousePuzzle6_Text_SebastianIntro, Route110_TrickHousePuzzle6_Text_SebastianDefeat
	msgbox Route110_TrickHousePuzzle6_Text_SebastianPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle6_Text_WroteSecretCodeLockOpened:
	.string "{PLAYER} hat den geheimen Code auf die\n"
	.string "Tür geschrieben.\p"
	.string "“RÄTSELMEISTER ist mein Leben.”\n"
	.string "… … … … … … … …\p"
	.string "Das Schloss geht klickend auf.$"

Route110_TrickHousePuzzle6_Text_SophiaIntro:
	.string "Als ich von dem seltsamen Haus hörte,\n"
	.string "musste ich mir das sofort ansehen.$"

Route110_TrickHousePuzzle6_Text_SophiaDefeat:
	.string "Ich habe einen starken TRAINER\n"
	.string "entdeckt!$"

Route110_TrickHousePuzzle6_Text_SophiaPostBattle:
	.string "Es hat viel Spaß gemacht, diesen Ort\n"
	.string "zu erforschen.\p"
	.string "Eine Herausforderung, die ich gerne\n"
	.string "wiederholen möchte!$"

Route110_TrickHousePuzzle6_Text_BennyIntro:
	.string "Vielleicht kann mein VOGEL-POKéMON\n"
	.string "über die Mauer fliegen…$"

Route110_TrickHousePuzzle6_Text_BennyDefeat:
	.string "Uaah! Ich hab’s vermasselt!$"

Route110_TrickHousePuzzle6_Text_BennyPostBattle:
	.string "Hihihihi… Ich habe doch nur verloren,\n"
	.string "weil ich bescheißen wollte.$"

Route110_TrickHousePuzzle6_Text_SebastianIntro:
	.string "Mir wird ganz schwindelig von diesen\n"
	.string "rotierenden Türen… Huuh…$"

Route110_TrickHousePuzzle6_Text_SebastianDefeat:
	.string "Bei mir dreht sich alles. Mir wird\n"
	.string "übel. Ich kann nicht mehr…$"

Route110_TrickHousePuzzle6_Text_SebastianPostBattle:
	.string "Dir scheint das gar nichts\n"
	.string "auszumachen. Oder ist das nur Show?$"


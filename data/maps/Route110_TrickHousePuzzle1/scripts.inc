Route110_TrickHousePuzzle1_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route110_TrickHousePuzzle1_OnLoad
	.byte 0

Route110_TrickHousePuzzle1_OnLoad:
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_1_STATE, 2, Route110_TrickHousePuzzle1_EventScript_OpenDoor
	end

Route110_TrickHousePuzzle1_EventScript_OpenDoor::
	setmetatile 13, 1, METATILE_TrickHousePuzzle_Stairs_Down, FALSE
	end

Route110_TrickHousePuzzle1_EventScript_Scroll::
	lockall
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_1_STATE, 0, Route110_TrickHousePuzzle1_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle1_EventScript_FoundScroll::
	setvar VAR_TRICK_HOUSE_PUZZLE_1_STATE, 1
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	end

Route110_TrickHousePuzzle1_EventScript_Sally::
	trainerbattle_single TRAINER_SALLY, Route110_TrickHousePuzzle1_Text_SallyIntro, Route110_TrickHousePuzzle1_Text_SallyDefeat
	msgbox Route110_TrickHousePuzzle1_Text_SallyPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle1_EventScript_Eddie::
	trainerbattle_single TRAINER_EDDIE, Route110_TrickHousePuzzle1_Text_EddieIntro, Route110_TrickHousePuzzle1_Text_EddieDefeat
	msgbox Route110_TrickHousePuzzle1_Text_EddiePostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle1_EventScript_Robin::
	trainerbattle_single TRAINER_ROBIN, Route110_TrickHousePuzzle1_Text_RobinIntro, Route110_TrickHousePuzzle1_Text_RobinDefeat
	msgbox Route110_TrickHousePuzzle1_Text_RobinPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle1_Text_WroteSecretCodeLockOpened::
	.string "{PLAYER} wrote down the secret code\n"
	.string "on the door.\p"
	.string "“TRICK MASTER is fabulous.”\n"
	.string "… … … … … … … …\p"
	.string "The lock clicked open!$"

Route110_TrickHousePuzzle1_Text_SallyIntro:
	.string "Ich habe mir den Weg zum Sieg mit dem\n"
	.string "ZERSCHNEIDER, den wir gerade gelernt\l"
	.string "haben, gebahnt.$"

Route110_TrickHousePuzzle1_Text_SallyDefeat:
	.string "Warum nimmst du das so ernst?$"

Route110_TrickHousePuzzle1_Text_SallyPostBattle:
	.string "Ich werde des Hackens und\n"
	.string "Schneidens nie müde!$"

Route110_TrickHousePuzzle1_Text_EddieIntro:
	.string "Ich bin nur zufällig in diesem\n"
	.string "verrückten Haus gelandet…$"

Route110_TrickHousePuzzle1_Text_EddieDefeat:
	.string "Und nun habe ich verloren…$"

Route110_TrickHousePuzzle1_Text_EddiePostBattle:
	.string "Ich bin vom Weg abgekommen, ich habe\n"
	.string "verloren und bin verloren. Ich finde\n"
	.string "den\l"
	.string "Ausgang nicht mehr…$"

Route110_TrickHousePuzzle1_Text_RobinIntro:
	.string "Wer ist dieser RÄTSELMEISTER bloß?$"

Route110_TrickHousePuzzle1_Text_RobinDefeat:
	.string "Ich verlor ganz gedankenverloren.$"

Route110_TrickHousePuzzle1_Text_RobinPostBattle:
	.string "Du bist stark!\n"
	.string "Wer bist du eigentlich?$"


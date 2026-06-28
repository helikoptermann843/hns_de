Route110_TrickHousePuzzle4_MapScripts::
	.byte 0

Route110_TrickHousePuzzle4_EventScript_Scroll::
	lockall
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_4_STATE, 0, Route110_TrickHousePuzzle4_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle4_EventScript_FoundScroll::
	setvar VAR_TRICK_HOUSE_PUZZLE_4_STATE, 1
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	end

Route110_TrickHousePuzzle4_EventScript_Cora::
	trainerbattle_single TRAINER_CORA, Route110_TrickHousePuzzle4_Text_CoraIntro, Route110_TrickHousePuzzle4_Text_CoraDefeat
	msgbox Route110_TrickHousePuzzle4_Text_CoraPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle4_EventScript_Yuji::
	trainerbattle_single TRAINER_YUJI, Route110_TrickHousePuzzle4_Text_YujiIntro, Route110_TrickHousePuzzle4_Text_YujiDefeat
	msgbox Route110_TrickHousePuzzle4_Text_YujiPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle4_EventScript_Paula::
	trainerbattle_single TRAINER_PAULA, Route110_TrickHousePuzzle4_Text_PaulaIntro, Route110_TrickHousePuzzle4_Text_PaulaDefeat
	msgbox Route110_TrickHousePuzzle4_Text_PaulaPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle4_Text_WroteSecretCodeLockOpened:
	.string "{PLAYER} hat den geheimen Code auf die\n"
	.string "Tür geschrieben.\p"
	.string "“RÄTSELMEISTER ist cool.”\n"
	.string "… … … … … … … …\p"
	.string "Das Schloss geht klickend auf.$"

Route110_TrickHousePuzzle4_Text_CoraIntro:
	.string "Ich habe keine Zeit, das zu verstehen.\n"
	.string "Ich will nur kämpfen!$"

Route110_TrickHousePuzzle4_Text_CoraDefeat:
	.string "Auch wenn ich verloren habe, liebe ich\n"
	.string "das Kämpfen.$"

Route110_TrickHousePuzzle4_Text_CoraPostBattle:
	.string "Stimmst du mir zu? Du würdest überall\n"
	.string "hingehen, wo man TRAINER findet.$"

Route110_TrickHousePuzzle4_Text_YujiIntro:
	.string "Hey! Felsen wie diese räume ich mit\n"
	.string "dem kleinen Finger aus dem Weg.$"

Route110_TrickHousePuzzle4_Text_YujiDefeat:
	.string "Ich kann Felsen bewegen, aber ein\n"
	.string "Rätsel zu lösen ist mir zu schwer…$"

Route110_TrickHousePuzzle4_Text_YujiPostBattle:
	.string "Muskeln alleine sind nicht alles… Auch\n"
	.string "Gehirnschmalz ist wichtig. Sei helle!$"

Route110_TrickHousePuzzle4_Text_PaulaIntro:
	.string "Das RÄTSELHAUS wird immer\n"
	.string "verrätselter… äh, komplizierter, oder?$"

Route110_TrickHousePuzzle4_Text_PaulaDefeat:
	.string "Aaaak!$"

Route110_TrickHousePuzzle4_Text_PaulaPostBattle:
	.string "Hat es jemand schon mal bis zum\n"
	.string "Ende geschafft?$"


Route110_TrickHousePuzzle8_MapScripts::
	.byte 0

Route110_TrickHousePuzzle8_EventScript_Scroll::
	lockall
	goto_if_eq VAR_TRICK_HOUSE_PUZZLE_8_STATE, 0, Route110_TrickHousePuzzle8_EventScript_FoundScroll
	goto Route110_TrickHousePuzzle_EventScript_ReadScrollAgain
	end

Route110_TrickHousePuzzle8_EventScript_FoundScroll::
	setvar VAR_TRICK_HOUSE_PUZZLE_8_STATE, 1
	goto Route110_TrickHousePuzzle_EventScript_FoundScroll
	end

Route110_TrickHousePuzzle8_EventScript_Vincent::
	trainerbattle_single TRAINER_VINCENT, Route110_TrickHousePuzzle8_Text_VincentIntro, Route110_TrickHousePuzzle8_Text_VincentDefeat
	msgbox Route110_TrickHousePuzzle8_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle8_EventScript_Keira::
	trainerbattle_single TRAINER_KEIRA, Route110_TrickHousePuzzle8_Text_KeiraIntro, Route110_TrickHousePuzzle8_Text_KeiraDefeat
	msgbox Route110_TrickHousePuzzle8_Text_KeiraPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle8_EventScript_Leroy::
	trainerbattle_single TRAINER_LEROY, Route110_TrickHousePuzzle8_Text_LeroyIntro, Route110_TrickHousePuzzle8_Text_LeroyDefeat
	msgbox Route110_TrickHousePuzzle8_Text_LeroyPostBattle, MSGBOX_AUTOCLOSE
	end

Route110_TrickHousePuzzle8_Text_WroteSecretCodeLockOpened::
	.string "{PLAYER} hat den geheimen Code auf die\n"
	.string "Tür geschrieben.\p"
	.string "“Ich liebe den RÄTSELMEISTER.”\n"
	.string "… … … … … … … …\p"
	.string "Das Schloss geht klickend auf.$"

Route110_TrickHousePuzzle8_Text_VincentIntro:
	.string "Nicht viele Trainer haben es bis\n"
	.string "hierher geschafft.$"

Route110_TrickHousePuzzle8_Text_VincentDefeat:
	.string "Das bedeutet, dass du sehr stark bist…$"

Route110_TrickHousePuzzle8_Text_VincentPostBattle:
	.string "Du hast den Champ der Pokémon Liga\n"
	.string "besiegt? Das ist zu viel für mich!$"

Route110_TrickHousePuzzle8_Text_KeiraIntro:
	.string "Sieh es als Glücksfall an, dass du\n"
	.string "gegen mich antreten darfst.$"

Route110_TrickHousePuzzle8_Text_KeiraDefeat:
	.string "Das ist nicht korrekt!\n"
	.string "Ich darf nicht verlieren!$"

Route110_TrickHousePuzzle8_Text_KeiraPostBattle:
	.string "Nur ein Wunder hat dir zu diesem Sieg\n"
	.string "verholfen. Prahl doch damit…$"

Route110_TrickHousePuzzle8_Text_LeroyIntro:
	.string "Du schleichst hier auch durch das\n"
	.string "Rätselhaus?$"

Route110_TrickHousePuzzle8_Text_LeroyDefeat:
	.string "Ich verstehe…\n"
	.string "Du hast einen außergewöhnlichen Stil.$"

Route110_TrickHousePuzzle8_Text_LeroyPostBattle:
	.string "Dein Anblick wird den Rätselmeister\n"
	.string "bestimmt erfreuen.$"


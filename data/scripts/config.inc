Debug_FlagsAndVarNotSetBattleConfigMessage::
	lockall
	message Debug_FlagsAndVarNotSetBattleConfigMessage_Text
	waitmessage
	waitbuttonpress
	releaseall
	end

Debug_FlagsAndVarNotSetBattleConfigMessage_Text:
	.string "Funktion nicht verfügbar! Bitte ein\n"
	.string "nutzbares Flag und eine nutzbare Var\l"
	.string "in 'include/config/battle.h' setzen!$"

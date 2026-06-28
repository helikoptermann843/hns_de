Aide_EventScript_HaventCaughtEnough::
	msgbox Aide_Text_HaventCaughtEnoughMonsForItem
	release
	end

Aide_EventScript_NoRoomForItem::
	msgbox Aide_Text_DontHaveAnyRoomForItem
	release
	end

Aide_EventScript_DeclineCheckMons::
	msgbox Aide_Text_GetEnoughMonsComeBackForItem
	release
	end

Aide_Text_HaventCaughtEnoughMonsForItem::
	.string "Mal sehen…\n"
	.string "Oh! Du hast erst {STR_VAR_3}\l"
	.string "POKéMON-ARTEN gefangen!\p"
	.string "Für das {STR_VAR_2} brauchst\n"
	.string "du {STR_VAR_1} Arten.$"

Aide_Text_GetEnoughMonsComeBackForItem::
	.string "…Oh, verstehe.\p"
	.string "Komm wieder, wenn du\n"
	.string "{STR_VAR_1} Arten gefangen hast.\p"
	.string "Dann erhältst du das\n"
	.string "{STR_VAR_2}.$"

Aide_Text_DontHaveAnyRoomForItem::
	.string "Oh! Du hast keinen Platz\n"
	.string "für das {STR_VAR_2}.$"

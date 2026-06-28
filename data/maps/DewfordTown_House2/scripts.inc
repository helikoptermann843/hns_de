DewfordTown_House2_MapScripts::
	.byte 0

DewfordTown_House2_EventScript_Man::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SILK_SCARF, DewfordTown_House2_EventScript_ExplainSilkScarf
	msgbox DewfordTown_House2_Text_WantYouToHaveSilkScarf, MSGBOX_DEFAULT
	giveitem ITEM_SILK_SCARF
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_House2_EventScript_NoRoomForScarf
	setflag FLAG_RECEIVED_SILK_SCARF
	release
	end

DewfordTown_House2_EventScript_NoRoomForScarf::
	msgbox DewfordTown_House2_Text_NoRoom, MSGBOX_DEFAULT
	release
	end

DewfordTown_House2_EventScript_ExplainSilkScarf::
	msgbox DewfordTown_House2_Text_ExplainSilkScarf, MSGBOX_DEFAULT
	release
	end

DewfordTown_House2_EventScript_Boy::
	msgbox DewfordTown_House2_Text_BrawlySoCool, MSGBOX_NPC
	end

DewfordTown_House2_Text_WantYouToHaveSilkScarf:
	.string "Wirf dein Auge mal hierauf!\p"
	.string "Das ist ein SEIDENSCHAL. Das ist\n"
	.string "der letzte Schrei in der Mode. Yeah!\p"
	.string "Oh, deine Augen blitzen.\n"
	.string "Du magst meinen Stil, nicht wahr?\p"
	.string "Hihi, du machst mir eine Freude!\n"
	.string "Hier, das möchte ich dir schenken!$"

DewfordTown_House2_Text_NoRoom:
	.string "Och, du hast ja gar keinen Platz mehr.\n"
	.string "\p"
	.string "Nun, hör gut zu… Diesen SCHAL musst\n"
	.string "du einfach haben! Ich würde alle meine\l"
	.string "Items verkaufen, um ihn zu bekommen!$"

DewfordTown_House2_Text_ExplainSilkScarf:
	.string "Dieser SEIDENSCHAL steigert die Stärke\n"
	.string "der NORMALen Attacken.\p"
	.string "Dieser wunderbare SCHAL passt einfach\n"
	.string "zu fast allen POKéMON!$"

DewfordTown_House2_Text_BrawlySoCool:
	.string "Wow, du hast die beschwerliche Reise\n"
	.string "über das Meer auf dich genommen, um\l"
	.string "nach FAUSTAUHAVEN zu gelangen?\p"
	.string "Bist du hier, weil du von KAMILLO\n"
	.string "gehört hast?\p"
	.string "Er ist sooo cool…\n"
	.string "Er ist ein Idol für jeden!$"


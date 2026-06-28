SootopolisCity_LotadAndSeedotHouse_MapScripts::
	.byte 0

SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotBrother::
	special GetSeedotSizeRecordInfo
	lock
	faceplayer
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigSeedot, MSGBOX_DEFAULT
	setvar VAR_0x8009, SPECIES_SEEDOT
	chooseboxmon SELECT_PC_MON_TRADE
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowSeedot
	special CompareSeedotSize
	goto_if_eq VAR_RESULT, 1, SootopolisCity_LotadAndSeedotHouse_EventScript_NotSeedot
	goto_if_eq VAR_RESULT, 2, SootopolisCity_LotadAndSeedotHouse_EventScript_SmallSeedot
	goto_if_eq VAR_RESULT, 3, SootopolisCity_LotadAndSeedotHouse_EventScript_BigSeedot
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowSeedot::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigSeedot, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_NotSeedot::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotSeedot, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_SmallSeedot::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerSeedot, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_BigSeedot::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanLotad, MSGBOX_DEFAULT
	giveitem ITEM_ELIXIR
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir1
	closemessage
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir1::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_LotadBrother::
	special GetLotadSizeRecordInfo
	lock
	faceplayer
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigLotad, MSGBOX_DEFAULT
	setvar VAR_0x8009, SPECIES_LOTAD
	chooseboxmon SELECT_PC_MON_TRADE
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowLotad
	special CompareLotadSize
	goto_if_eq VAR_RESULT, 1, SootopolisCity_LotadAndSeedotHouse_EventScript_NotLotad
	goto_if_eq VAR_RESULT, 2, SootopolisCity_LotadAndSeedotHouse_EventScript_SmallLotad
	goto_if_eq VAR_RESULT, 3, SootopolisCity_LotadAndSeedotHouse_EventScript_BigLotad
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowLotad::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigLotad, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_NotLotad::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotLotad, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_SmallLotad::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerLotad, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_BigLotad::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_WowMightBeBiggerThanSeedot, MSGBOX_DEFAULT
	giveitem ITEM_ELIXIR
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir2
	closemessage
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir2::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull2, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_SeedotSizeRecord::
	special GetSeedotSizeRecordInfo
	lockall
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BiggestSeedotInHistory, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_LotadSizeRecord::
	special GetLotadSizeRecordInfo
	lockall
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BiggestLotadInHistory, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigSeedot:
	.string "Kennst du das POKéMON SAMURZEL?\n"
	.string "In XENEROVILLE wird es kaum gesehen.\p"
	.string "Aber ich liebe große SAMURZEL.\n"
	.string "Je größer, desto besser.\p"
	.string "Aber mein jüngerer Bruder sagt, dass\n"
	.string "LOTURZEL größer ist.\p"
	.string "Verrückt! SAMURZEL muss einfach\n"
	.string "größer sein!\p"
	.string "Wie? Du hast ein SAMURZEL dabei???\n"
	.string "B-b-bitte zeig es mir!$"

SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanLotad:
	.string "{STR_VAR_2} cm!\n"
	.string "Meine Güte, ist das aber groß!\p"
	.string "Das wird sogar größer als das LOTURZEL\n"
	.string "sein, das mein Bruder gesehen hat!\p"
	.string "Danke, dass du es mir gezeigt hast.\n"
	.string "Hier, ein kleines Dankeschön!$"

@ Unused
SootopolisCity_LotadAndSeedotHouse_Text_ReceivedPotion1:
	.string "{PLAYER} received a POTION.$"

SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1:
	.string "Huch. Dein BEUTEL ist ja randvoll.$"

SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerSeedot:
	.string "{STR_VAR_2} cm, nicht wahr?\p"
	.string "Hmm… Ich habe schon größere\n"
	.string "SAMURZEL als dieses gesehen.$"

SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotSeedot:
	.string "Na, das ist doch schon ganz\n"
	.string "ordentlich…\l"
	.string "Aber das ist kein SAMURZEL!$"

SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigSeedot:
	.string "Du hast gar kein großes SAMURZEL?\n"
	.string "Och, wie schade…\p"
	.string "Wenn du ein großes SAMURZEL hast,\n"
	.string "dann komm bitte wieder und zeig es\l"
	.string "mir.$"

SootopolisCity_LotadAndSeedotHouse_Text_BiggestSeedotInHistory:
	.string "Das größte SAMURZEL aller Zeiten!\n"
	.string "Der {STR_VAR_3} cm-Gigant von\n"
	.string "{STR_VAR_2}! \p"
	.string "Ein SAMURZEL, so groß, wie ein\n"
	.string "LOTURZEL gerne sein würde!$"

SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigLotad:
	.string "Kennst du das POKéMON LOTURZEL?\n"
	.string "Das ist bisher selten in XENEROVILLE\l"
	.string "aufgetaucht.\p"
	.string "Ich liebe große LOTURZEL.\p"
	.string "Mein großer Bruder sagt, dass\n"
	.string "SAMURZEL größer ist.\p"
	.string "Aber das stimmt gar nicht! Jeder weiß\n"
	.string "doch, dass LOTURZEL viel größer\l"
	.string "ist.\p"
	.string "Wie? Oh, du hast ein LOTURZEL?\n"
	.string "Bitte, bitte zeig es mir!$"

SootopolisCity_LotadAndSeedotHouse_Text_WowMightBeBiggerThanSeedot:
	.string "{STR_VAR_2} cm!\n"
	.string "Wow, das ist aber groß!\p"
	.string "Das ist bestimmt größer als das\n"
	.string "SAMURZEL, das mein Bruder gesehen\l"
	.string "hat.\p"
	.string "Danke, dass ich es anschauen durfte.\n"
	.string "Hier, ein kleines Dankeschön!$"

@ Unused
SootopolisCity_LotadAndSeedotHouse_Text_ReceivedPotion2:
	.string "{PLAYER} received a POTION.$"

SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull2:
	.string "Huups, dein BEUTEL ist voll.$"

SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerLotad:
	.string "{STR_VAR_2} cm?\p"
	.string "Ach… Da habe ich aber schon ein\n"
	.string "größeres LOTURZEL gesehen.$"

SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotLotad:
	.string "Nun, das ist ganz stattlich.\n"
	.string "Aber es ist kein LOTURZEL!$"

SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigLotad:
	.string "Hast du kein großes LOTURZEL?\n"
	.string "Och, wie enttäuschend…\p"
	.string "Wenn du ein großes LOTURZEL hast,\n"
	.string "dann komm bitte wieder her.$"

SootopolisCity_LotadAndSeedotHouse_Text_BiggestLotadInHistory:
	.string "Das größte LOTURZEL aller Zeiten!\n"
	.string "Der {STR_VAR_3} cm-Koloss von\n"
	.string "{STR_VAR_2}! \p"
	.string "Ein LOTURZEL, so groß, wie ein\n"
	.string "SAMURZEL gerne sein würde.$"


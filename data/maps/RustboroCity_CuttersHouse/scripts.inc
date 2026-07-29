RustboroCity_CuttersHouse_MapScripts::
	.byte 0

RustboroCity_CuttersHouse_EventScript_Cutter::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_CUT, RustboroCity_CuttersHouse_EventScript_ExplainCut
	msgbox RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse, MSGBOX_DEFAULT
	giveitem ITEM_HM_CUT
	setflag FLAG_RECEIVED_HM_CUT
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
	release
	end

RustboroCity_CuttersHouse_EventScript_ExplainCut::
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
	release
	end

RustboroCity_CuttersHouse_EventScript_Lass::
	msgbox RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees, MSGBOX_NPC
	end

RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse:
	.string "Diese Entschlossenheit…\n"
	.string "Deine Beweglichkeit…\l"
	.string "Deine Hingabe für Pokémon…\p"
	.string "Du bist wirklich ein talentierter\n"
	.string "Trainer!\p"
	.string "Nein, warte. Sag jetzt nichts.\n"
	.string "Ich brauche dich nur anzuschauen.\p"
	.string "Ich bin mir sicher, dass du mit dieser\n"
	.string "VM sehr gut umgehen wirst.\p"
	.string "Kein Grund, so schüchtern zu sein.\n"
	.string "Hier, nimm sie!$"

RustboroCity_CuttersHouse_Text_ExplainCut:
	.string "Diese VM, sie enthält Zerschneider.\p"
	.string "Eine VM ist eine Attacke, die auch\n"
	.string "außerhalb des Kampfes von einem\l"
	.string "Pokémon angewandt werden kann.\p"
	.string "Jedes Pokémon, das diese Attacke\n"
	.string "gelernt hat, kann Bäume damit\p"
	.string "zerschneiden, wenn der Trainer den\n"
	.string "Steinorden besitzt.\p"
	.string "Und, im Gegensatz zur TM, kann eine VM\n"
	.string "mehrfach gelehrt werden.$"

RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees:
	.string "Als sie die Stadt Metarost City\n"
	.string "vergrößert haben, hat mein Vater ihnen\l"
	.string "geholfen.\p"
	.string "Seine Pokémon fällten die Bäume mit\n"
	.string "Zerschneider.$"


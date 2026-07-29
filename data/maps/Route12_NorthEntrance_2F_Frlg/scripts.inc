Route12_NorthEntrance_2F_Frlg_MapScripts::
	.byte 0

Route12_NorthEntrance_2F_EventScript_LeftBinoculars::
	msgbox Route12_NorthEntrance_2F_Text_TheresManFishing, MSGBOX_SIGN
	end

Route12_NorthEntrance_2F_EventScript_RightBinoculars::
	msgbox Route12_NorthEntrance_2F_Text_ItsPokemonTower, MSGBOX_SIGN
	end

Route12_NorthEntrance_2F_EventScript_Lass::
	lock
	faceplayer
	goto_if_set FLAG_GOT_TM27, Route12_NorthEntrance_2F_EventScript_ExplainTM27
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route12_NorthEntrance_2F_EventScript_TakeTMMale
	call_if_eq VAR_RESULT, FEMALE, Route12_NorthEntrance_2F_EventScript_TakeTMFemale
	checkitemspace ITEM_TM27
	goto_if_eq VAR_RESULT, FALSE, Route12_NorthEntrance_2F_EventScript_NoRoomForTM27
	giveitem_msg Route12_NorthEntrance_2F_Text_ReceivedTM27FromLittleGirl, ITEM_TM27
	msgbox Route12_NorthEntrance_2F_Text_ExplainTM27
	setflag FLAG_GOT_TM27
	release
	end

Route12_NorthEntrance_2F_EventScript_TakeTMMale::
	msgbox Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreMale
	return

Route12_NorthEntrance_2F_EventScript_TakeTMFemale::
	msgbox Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreFemale
	return

Route12_NorthEntrance_2F_EventScript_NoRoomForTM27::
	msgbox Route12_NorthEntrance_2F_Text_DontHaveRoomForThis
	release
	end

Route12_NorthEntrance_2F_EventScript_ExplainTM27::
	msgbox Route12_NorthEntrance_2F_Text_ExplainTM27
	release
	end

@ Male and female text identical, differ (presumably) in JP
Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreMale::
	.string "Meine Pokémon wurden im Pokémon-\n"
	.string "turm zur letzten Ruhe gebettet.\p"
	.string "Ich gebe dir diese TM. Ich\n"
	.string "benötige sie nicht länger...$"

Route12_NorthEntrance_2F_Text_TakeTMDontNeedAnymoreFemale::
	.string "Meine Pokémon wurden im Pokémon-\n"
	.string "turm zur letzten Ruhe gebettet.\p"
	.string "Ich gebe dir diese TM. Ich\n"
	.string "benötige sie nicht länger...$"

Route12_NorthEntrance_2F_Text_ReceivedTM27FromLittleGirl::
	.string "{PLAYER} received TM27\n"
	.string "from the little girl.$"

Route12_NorthEntrance_2F_Text_ExplainTM27::
	.string "TM27 ist Rückkehr.\p"
	.string "Behandelst du deine Pokémon\n"
	.string "gut, geben sie Liebe zurück, indem\l"
	.string "sie sich im Kampf besonders\l"
	.string "anstrengen.$"

Route12_NorthEntrance_2F_Text_DontHaveRoomForThis::
	.string "Du kannst nichts mehr tragen!$"

Route12_NorthEntrance_2F_Text_TheresManFishing::
	.string "Die Barriere verschwindet nicht?\p"
	.string "Major Bob war immer sehr\n"
	.string "vorsichtig!$"

Route12_NorthEntrance_2F_Text_ItsPokemonTower::
	.string "Du schaust durch das Fernrohr.\p"
	.string "Du siehst den Pokémon-Turm!$"


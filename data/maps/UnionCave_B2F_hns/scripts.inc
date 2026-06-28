UnionCave_B2F_hns_MapScripts::
	.byte 0

UnionCave_B2F_EventScript_CooltrainerNick::
	trainerbattle_single TRAINER_NICK_HNS, UnionCave_B2F_Text_CooltrainermNickSeen, UnionCave_B2F_Text_CooltrainermNickBeaten
	msgbox UnionCave_B2F_Text_CooltrainermNickAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_B2F_EventScript_CooltrainerfGwen::
	trainerbattle_single TRAINER_GWEN_HNS, UnionCave_B2F_Text_CooltrainerfGwenSeen, UnionCave_B2F_Text_CooltrainerfGwenBeaten
	msgbox UnionCave_B2F_Text_CooltrainerfGwenAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_B2F_EventScript_CooltrainerfEmma::
	trainerbattle_single TRAINER_EMMA_HNS, UnionCave_B2F_Text_CooltrainerfEmmaSeen, UnionCave_B2F_Text_CooltrainerfEmmaBeaten
	msgbox UnionCave_B2F_Text_CooltrainerfEmmaAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_B2F_EventScript_Lapras::
	lock
	faceplayer
	playmoncry SPECIES_LAPRAS, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_LAPRAS, 20
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, UnionCave_B2F_EventScript_LaprasRan
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_UNION_CAVE_LAPRAS
	setflag FLAG_HIDE_UNION_CAVE_LAPRAS
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

UnionCave_B2F_EventScript_LaprasRan::
	release
	end


UnionCave_B2F_EventScript_Item_Ether::
	finditem ITEM_ETHER
	end

UnionCave_B2F_EventScript_Item_HyperPotion::
	finditem ITEM_HYPER_POTION
	end

UnionCave_B2F_EventScript_Item_MaxRevive::
	finditem ITEM_MAX_REVIVE
	end

UnionCave_B2F_Text_CooltrainermNickSeen:
	.string "Es gibt zwei Arten von Leuten.\p"
	.string "Die mit Stil und die ohne.\n"
	.string "Und du, zu welcher Art gehörst du?$"

UnionCave_B2F_Text_CooltrainermNickBeaten:
	.string "Du hast einen strahlenden Stil!$"

UnionCave_B2F_Text_CooltrainermNickAfter:
	.string "Der Stil deiner Pokémon ist\n"
	.string "wundervoll und bunt, das geb ich zu.\p"
	.string "Du wirst immer besser!$"

UnionCave_B2F_Text_CooltrainerfGwenSeen:
	.string "Ich trainiere gerade.\n"
	.string "Willst du einen Kampf?$"

UnionCave_B2F_Text_CooltrainerfGwenBeaten:
	.string "Ach nein! Du bist zu stark für mich!$"

UnionCave_B2F_Text_CooltrainerfGwenAfter:
	.string "Ich trainiere alleine, bis ich\n"
	.string "mich verbessert habe.$"

UnionCave_B2F_Text_CooltrainerfEmmaSeen:
	.string "Wenn meine Pokémon dabei sind,\n"
	.string "gehe ich überall hin.\p"
	.string "So macht ein echter Trainer das.$"

UnionCave_B2F_Text_CooltrainerfEmmaBeaten:
	.string "Ich streichle lieber meine Pokémon!$"

UnionCave_B2F_Text_CooltrainerfEmmaAfter:
	.string "Nur einmal die Woche kommt ein\n"
	.string "Pokémon an den Rand vom Wasser.\p"
	.string "Ich wollte es sehen…$"

Akala_Forest_hns_MapScripts::
	.byte 0


Alola_Akala_Forest_FindItem1::
	finditem ITEM_FULL_RESTORE, 1
	end


Alola_Akala_Forest_FindItem2::
	finditem ITEM_PP_UP, 1
	end


Alola_AkalaForest_TrainerBattleBugCatcher1::
	trainerbattle_single TRAINER_AKALA_FOREST_BUGCATCHER_1_HNS, Alola_AkalaForest_TrainerBattleBugCatcher1_Text_0, Alola_AkalaForest_TrainerBattleBugCatcher1_Text_1
	msgbox Alola_AkalaForest_TrainerBattleBugCatcher1_Text_2, MSGBOX_AUTOCLOSE
	release
	end


Alola_AkalaForest_TrainerBattleBugCatcher2::
	trainerbattle_single TRAINER_AKALA_FOREST_BUGCATCHER_2_HNS, Alola_AkalaForest_TrainerBattleBugCatcher2_Text_0, Alola_AkalaForest_TrainerBattleBugCatcher2_Text_1
	msgbox Alola_AkalaForest_TrainerBattleBugCatcher2_Text_2, MSGBOX_AUTOCLOSE
	release
	end


Alola_Akala_BattleRaichu::
	lock
	faceplayer
	setflag FLAG_BATTLED_RAICHU
	playmoncry SPECIES_RAICHU_ALOLA, 0
	msgbox Alola_Akala_BattleRaichu_Text_0, MSGBOX_AUTOCLOSE
	waitmoncry
	setwildbattle SPECIES_RAICHU_ALOLA, 45
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Alola_Akala_BattleRaichu_2
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Alola_Akala_BattleRaichu_3
	release
	end

	release
	end

Alola_Akala_BattleRaichu_2:
	setflag FLAG_HIDE_RAICHU_ALOLA
	removeobject LOCALID_AKALA_RAICHU
	release
	end

Alola_Akala_BattleRaichu_3:
	setflag FLAG_HIDE_RAICHU_ALOLA
	removeobject LOCALID_AKALA_RAICHU
	release
	end


Alola_AkalaForest_TrainerBattleBugCatcher1_Text_0:
	.string "Sieh dir all die coolen Käfer hier\nauf den Inseln an!$"

Alola_AkalaForest_TrainerBattleBugCatcher1_Text_1:
	.string "Ouch, that stung!$"

Alola_AkalaForest_TrainerBattleBugCatcher1_Text_2:
	.string "Die Inseln liegen weit entfernt vom\n"
	.string "Festland. Die Käfer-Pokémon hier\l"
	.string "mussten sich wohl an die Umgebung\l"
	.string "anpassen.$"

Alola_AkalaForest_TrainerBattleBugCatcher2_Text_0:
	.string "Sieh mal, was ich gefangen habe!$"

Alola_AkalaForest_TrainerBattleBugCatcher2_Text_1:
	.string "Awh, that bites!$"

Alola_AkalaForest_TrainerBattleBugCatcher2_Text_2:
	.string "Das Klima auf den Alola-Inseln ist\n"
	.string "ein wenig anders…\p"
	.string "Bestimmt gibt es deshalb hier so\n"
	.string "einzigartige Käfer-Pokémon.$"


Alola_Akala_BattleRaichu_Text_0:
	.string "Urgs!$"


ViridianForest_hns_MapScripts::
	.byte 0

ViridianForest_EventScript_Bugsy::
	lock
	faceplayer
	msgbox ViridianForest_Text_Bugsy, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_HIDE_VIRIDIAN_BUGSY
	removeobject LOCALID_VIRIDIAN_BUGSY
	fadescreenswapbuffers FADE_FROM_BLACK
	clearflag FLAG_HIDE_DOJO_BUGSY
	release
	end

ViridianForest_Text_Bugsy:
	.string "Kai: Ich kam nach KANTO, um\n"
	.string "Käfer-Pokémon zu suchen,\p"
	.string "damit ich ein stärkerer Käfer-\l"
	.string "Pokémon-TRAINER werde!\p"
	.string "Wenn du bereit bist für ein\n"
	.string "weiteres Match, treffe mich im\l"
	.string "DOJO in SAFFRONIA!$"

ViridianForest_EventScript_SpikyEaredPichu::
	lock
	faceplayer
	playmoncry SPECIES_PICHU_SPIKY_EARED, CRY_MODE_ENCOUNTER
	waitmoncry
	setwildbattle SPECIES_PICHU_SPIKY_EARED, 35
	dowildbattle
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ViridianForest_EventScript_SpikyEaredPichuRan
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_VIRIDIAN_FOREST_PICHU
	setflag FLAG_HIDE_VIRIDIAN_FOREST_SPIKY_EARED_PICHU
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

ViridianForest_EventScript_SpikyEaredPichuRan::
	release
	end

ViridianForest_EventScript_Item_Psych_Up::
    finditem ITEM_TM_PSYCH_UP
    end

ViridianForest_EventScript_MaxPotion::
    finditem ITEM_MAX_POTION
    end

ViridianForest_EventScript_Elixir::
    finditem ITEM_ELIXIR
    end

ViridianForest_EventScript_Revive::
    finditem ITEM_REVIVE
    end

ViridianForest_EventScript_FullRestore::
    finditem ITEM_FULL_RESTORE
    end

ViridianForest_EventScript_MaxEther::
    finditem ITEM_MAX_ETHER
    end

ViridianForest_EventScript_FullHeal::
    finditem ITEM_FULL_HEAL
    end

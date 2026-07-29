SproutTower_2F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SproutTower_2F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

SproutTower_2F_OnTransition:
	callnative SetTimeBasedEncounters
	end

SproutTower_2F_EventScript_SageNico::
	trainerbattle_single TRAINER_NICO_HNS, SproutTower_Text_SageNico_Seen, SproutTower_Text_SageNico_Beaten
	msgbox SproutTower_Text_SageNico_AfterBattle, MSGBOX_AUTOCLOSE
	end

SproutTower_2F_EventScript_SageEdmond::
	trainerbattle_single TRAINER_EDMOND_HNS, SproutTower_Text_SageEdmond_Seen, SproutTower_Text_SageEdmond_Beaten
	msgbox SproutTower_Text_SageEdmond_AfterBattle, MSGBOX_AUTOCLOSE
	end

SproutTower_2F_EventScript_Statue::
	lock
	msgbox SproutTower_Text_2F_Statue, MSGBOX_AUTOCLOSE
	release
	end

SproutTower_2F_EventScript_Xdefend::
	finditem ITEM_X_DEFEND
	end

SproutTower_Text_SageNico_Seen:
	.string "So sehr wir hier auch wüten,\n"
	.string "der Turm steht felsenfest!$"

SproutTower_Text_SageNico_Beaten:
	.string "Ich habe hart gekämpft,\n"
	.string "doch ich war einfach zu schwach.$"

SproutTower_Text_SageNico_AfterBattle:
	.string "Aufgrund der flexiblen Säule\n"
	.string "ist der Turm erdbebensicher.$"

SproutTower_Text_SageEdmond_Seen:
	.string "…Zittere wie\n"
	.string "Laub im Wind!$"

SproutTower_Text_SageEdmond_Beaten:
	.string "Mein Wille ist schwach!$"

SproutTower_Text_SageEdmond_AfterBattle:
	.string "Ich habe versucht, die eleganten Bewe-\n"
	.string "gungen von Knofensa nachzuahmen…\l"
	.string "Aber ich habe nicht genug trainiert.$"

SproutTower_Text_2F_Statue:
	.string "Eine Pokémon-Statue…\n"
	.string "Sie sieht sehr erhaben aus.$"

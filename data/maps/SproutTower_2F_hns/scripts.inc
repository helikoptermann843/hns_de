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
	.string "Egal wie hart wir kämpfen,\n"
	.string "der TURM bleibt stark.$"

SproutTower_Text_SageNico_Beaten:
	.string "Ich kämpfte hart, doch ich\n"
	.string "bin zu schwach.$"

SproutTower_Text_SageNico_AfterBattle:
	.string "Die flexible Säule schützt\n"
	.string "den TURM, selbst vor Erdbeben.$"

SproutTower_Text_SageEdmond_Seen:
	.string "…Wie Blätter im Wind schwingen…$"

SproutTower_Text_SageEdmond_Beaten:
	.string "Oh, ich bin schwach!$"

SproutTower_Text_SageEdmond_AfterBattle:
	.string "Ich wollte Knofensas zarte\n"
	.string "Bewegungen im Kampf kopieren…\p"
	.string "Doch ich habe nicht genug trainiert.$"

SproutTower_Text_2F_Statue:
	.string "Eine PKMN-Statue…\p"
	.string "Sie sieht sehr erhaben aus.$"

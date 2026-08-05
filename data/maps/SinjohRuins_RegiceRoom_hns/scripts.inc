SinjohRuins_RegiceRoom_hns_MapScripts::
	.byte 0

SinjohRuins_RegiceRoom_EventScript_Regice::
	lock
	faceplayer
	playmoncry SPECIES_REGICE, CRY_MODE_ENCOUNTER
	waitmoncry
	seteventmon SPECIES_REGICE, 80
	special BattleSetup_StartLegendaryBattle
	waitstate
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SinjohRuins_RegiceRoom_EventScript_RegiceRan
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_SINJOHRUINS_REGICE
	setflag FLAG_HIDE_SINJOHRUINS_REGICE
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

SinjohRuins_RegiceRoom_EventScript_RegiceRan::
	release
	end


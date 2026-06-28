BattleFrontier_Lounge1_hns_MapScripts::
	.byte 0

@ NPC that rates pokemon based on their IVs
BattleFrontier_Lounge1_EventScript_Breeder_hns::
	lock
	faceplayer
	call_if_unset FLAG_MET_BATTLE_FRONTIER_BREEDER, BattleFrontier_Lounge1_EventScript_Breeder_hnsIntro_hns
	call_if_set FLAG_MET_BATTLE_FRONTIER_BREEDER, BattleFrontier_Lounge1_EventScript_AlreadyMetBreeder_hns
	setflag FLAG_MET_BATTLE_FRONTIER_BREEDER
	goto BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder_hns
	end

BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder_hns::
	chooseboxmon
	waitstate
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_hns
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge1_EventScript_CancelMonSelect_hns
	end

BattleFrontier_Lounge1_EventScript_Breeder_hnsIntro_hns::
	msgbox BattleFrontier_Lounge1_Text_PokemonBreederIntro_hns, MSGBOX_DEFAULT
	return

BattleFrontier_Lounge1_EventScript_AlreadyMetBreeder_hns::
	msgbox BattleFrontier_Lounge1_Text_LetsLookAtYourPokemon_hns, MSGBOX_DEFAULT
	return

@ BufferVarsForIVRater buffers the following values
@ VAR_0x8005: Sum of the mons IVs
@ VAR_0x8006: Stat id of highest IV stat
@ VAR_0x8007: IV of the highest IV stat
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder_hns::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, BattleFrontier_Lounge1_EventScript_ShowEggToBreeder_hns
	special BufferVarsForIVRater
	goto_if_le VAR_0x8005, 90, BattleFrontier_Lounge1_EventScript_AverageTotalIVs_hns       @ Average of 15
	goto_if_le VAR_0x8005, 120, BattleFrontier_Lounge1_EventScript_AboveAverageTotalIVs_hns @ Average of 20
	goto_if_le VAR_0x8005, 150, BattleFrontier_Lounge1_EventScript_HighTotalIVs_hns         @ Average of 25
	goto_if_ge VAR_0x8005, 151, BattleFrontier_Lounge1_EventScript_VeryHighTotalIVs_hns     @ Average of > 25
	end

BattleFrontier_Lounge1_EventScript_ShowEggToBreeder_hns::
	msgbox BattleFrontier_Lounge1_Text_EvenICantTell_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder_hns
	end

@ Comment on the highest IV stat
BattleFrontier_Lounge1_EventScript_HighestIVStat_hns::
	goto_if_eq VAR_0x8006, STAT_HP, BattleFrontier_Lounge1_EventScript_HighestIVHP_hns
	goto_if_eq VAR_0x8006, STAT_ATK, BattleFrontier_Lounge1_EventScript_HighestIVAtk_hns
	goto_if_eq VAR_0x8006, STAT_DEF, BattleFrontier_Lounge1_EventScript_HighestIVDef_hns
	goto_if_eq VAR_0x8006, STAT_SPEED, BattleFrontier_Lounge1_EventScript_HighestIVSpeed_hns
	goto_if_eq VAR_0x8006, STAT_SPATK, BattleFrontier_Lounge1_EventScript_HighestIVSpAtk_hns
	goto_if_eq VAR_0x8006, STAT_SPDEF, BattleFrontier_Lounge1_EventScript_HighestIVSpDef_hns
	end

@ Comment on the highest IV value
BattleFrontier_Lounge1_EventScript_HighestIVValue_hns::
	goto_if_le VAR_0x8007, 15, BattleFrontier_Lounge1_EventScript_HighestIVLow_hns
	goto_if_le VAR_0x8007, 25, BattleFrontier_Lounge1_EventScript_HighestIVMid_hns
	goto_if_le VAR_0x8007, 30, BattleFrontier_Lounge1_EventScript_HighestIVHigh_hns
	goto_if_ge VAR_0x8007, 31, BattleFrontier_Lounge1_EventScript_HighestIVMax_hns
	end

BattleFrontier_Lounge1_EventScript_EndBreederComments_hns::
	release
	end

BattleFrontier_Lounge1_EventScript_AverageTotalIVs_hns::
	msgbox BattleFrontier_Lounge1_Text_AverageAbility_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat_hns
	end

BattleFrontier_Lounge1_EventScript_AboveAverageTotalIVs_hns::
	msgbox BattleFrontier_Lounge1_Text_BetterThanAverageAbility_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat_hns
	end

BattleFrontier_Lounge1_EventScript_HighTotalIVs_hns::
	msgbox BattleFrontier_Lounge1_Text_ImpressiveAbility_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat_hns
	end

BattleFrontier_Lounge1_EventScript_VeryHighTotalIVs_hns::
	msgbox BattleFrontier_Lounge1_Text_OutstandingAbility_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat_hns
	end

BattleFrontier_Lounge1_EventScript_HighestIVHP_hns::
	msgbox BattleFrontier_Lounge1_Text_BestAspectHP_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue_hns
	end

BattleFrontier_Lounge1_EventScript_HighestIVAtk_hns::
	msgbox BattleFrontier_Lounge1_Text_BestAspectAtk_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue_hns
	end

BattleFrontier_Lounge1_EventScript_HighestIVDef_hns::
	msgbox BattleFrontier_Lounge1_Text_BestAspectDef_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue_hns
	end

BattleFrontier_Lounge1_EventScript_HighestIVSpeed_hns::
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpeed_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue_hns
	end

BattleFrontier_Lounge1_EventScript_HighestIVSpAtk_hns::
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpAtk_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue_hns
	end

BattleFrontier_Lounge1_EventScript_HighestIVSpDef_hns::
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpDef_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue_hns
	end

BattleFrontier_Lounge1_EventScript_HighestIVLow_hns::
	msgbox BattleFrontier_Lounge1_Text_StatRelativelyGood_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments_hns
	end

BattleFrontier_Lounge1_EventScript_HighestIVMid_hns::
	msgbox BattleFrontier_Lounge1_Text_StatImpressive_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments_hns
	end

BattleFrontier_Lounge1_EventScript_HighestIVHigh_hns::
	msgbox BattleFrontier_Lounge1_Text_StatOutstanding_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments_hns
	end

BattleFrontier_Lounge1_EventScript_HighestIVMax_hns::
	msgbox BattleFrontier_Lounge1_Text_StatFlawless_hns, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments_hns
	end

BattleFrontier_Lounge1_EventScript_CancelMonSelect_hns::
	msgbox BattleFrontier_Lounge1_Text_NoTimeForMyAdvice_hns, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge1_EventScript_Boy1_hns::
	msgbox BattleFrontier_Lounge1_Text_SaidMyMonIsOutstanding_hns, MSGBOX_NPC
	end

BattleFrontier_Lounge1_EventScript_Boy2_hns::
	msgbox BattleFrontier_Lounge1_Text_DidntDoAnythingSpecialRaisingIt_hns, MSGBOX_NPC
	end

BattleFrontier_Lounge1_Text_PokemonBreederIntro_hns:
	.string "Seit 70 Jahren ziehe ich POKéMON auf!\n"
	.string "Ich bin derjenige, den alle nur den\l"
	.string "legendären PKMN-ZÜCHTER nennen!\p"
	.string "Ein Mensch mit meiner Erfahrung\n"
	.string "erkennt die Fähigkeiten eines POKéMON\l"
	.string "mit einem Blick.\p"
	.string "Du bist ein TRAINER. Interessiert es\n"
	.string "dich nicht, welche Fähigkeiten deine\l"
	.string "POKéMON besitzen?\p"
	.string "Komm! Lass mich einen Blick auf deine\n"
	.string "POKéMON werfen!$"

BattleFrontier_Lounge1_Text_AverageAbility_hns:
	.string "Hmm… …\p"
	.string "Bei diesem hier erkenne ich\n"
	.string "durchschnittliche Fähigkeiten.$"

BattleFrontier_Lounge1_Text_BetterThanAverageAbility_hns:
	.string "Hmm… …\p"
	.string "Bei diesem hier erkenne ich über-\n"
	.string "durchschnittliche Fähigkeiten.$"

BattleFrontier_Lounge1_Text_ImpressiveAbility_hns:
	.string "Hmm… …\p"
	.string "Bei diesem hier erkenne ich\n"
	.string "beeindruckende Fähigkeiten.$"

BattleFrontier_Lounge1_Text_OutstandingAbility_hns:
	.string "Hmm… …\p"
	.string "Bei diesem hier erkenne ich\n"
	.string "herausragende Fähigkeiten.$"

BattleFrontier_Lounge1_Text_BestAspectHP_hns:
	.string "Meiner Meinung nach liegt seine Stärke\n"
	.string "in seinen KP…$"

BattleFrontier_Lounge1_Text_BestAspectAtk_hns:
	.string "Meiner Meinung nach liegt seine Stärke\n"
	.string "in seinem ANGRIFF…$"

BattleFrontier_Lounge1_Text_BestAspectDef_hns:
	.string "Meiner Meinung nach liegt seine Stärke\n"
	.string "in seiner VERTEIDIGUNG…$"

BattleFrontier_Lounge1_Text_BestAspectSpAtk_hns:
	.string "Meiner Meinung nach liegt seine Stärke\n"
	.string "in seinem SPEZIAL-ANGRIFF…$"

BattleFrontier_Lounge1_Text_BestAspectSpDef_hns:
	.string "Meiner Meinung nach liegt seine Stärke\n"
	.string "in seiner SPEZIAL-VERTEIDIGUNG…$"

BattleFrontier_Lounge1_Text_BestAspectSpeed_hns:
	.string "Meiner Meinung nach liegt seine Stärke\n"
	.string "in seiner INITIATIVE…$"

BattleFrontier_Lounge1_Text_StatRelativelyGood_hns:
	.string "Sein Status ist relativ gut.\n"
	.string "Hm… Genauso würde ich es ausdrücken.$"

BattleFrontier_Lounge1_Text_StatImpressive_hns:
	.string "Sein Status ist beeindruckend.\n"
	.string "Hm… Genauso würde ich es ausdrücken.$"

BattleFrontier_Lounge1_Text_StatOutstanding_hns:
	.string "Sein Status ist herausragend.\n"
	.string "Hm… Genauso würde ich es ausdrücken.$"

BattleFrontier_Lounge1_Text_StatFlawless_hns:
	.string "Dies ist makellos! Einfach perfekt!\n"
	.string "Hm… Genauso würde ich es ausdrücken.$"

BattleFrontier_Lounge1_Text_NoTimeForMyAdvice_hns:
	.string "Was? Du hast keine Zeit,\n"
	.string "meinen Rat zu hören?\p"
	.string "Du solltest dir immer die Zeit nehmen,\n"
	.string "von den Alten zu lernen.$"

@ Unused
BattleFrontier_Lounge1_Text_HaveBusinessNeedsTending_hns:
	.string "Yes, what is it now?\p"
	.string "I have business that needs tending!\n"
	.string "Save it for next time!$"

BattleFrontier_Lounge1_Text_LetsLookAtYourPokemon_hns:
	.string "Ah, ein junges Gesicht! Interessieren\n"
	.string "dich die Fähigkeiten deiner POKéMON?\p"
	.string "Dann komm! Lass uns einen Blick\n"
	.string "auf deine POKéMON werfen.$"

BattleFrontier_Lounge1_Text_EvenICantTell_hns:
	.string "Ich bin zwar ein Experte, aber auch\n"
	.string "ich\n"
	.string "bin nicht in der Lage, etwas zu einem\l"
	.string "ungeschlüpften POKéMON zu sagen.\p"
	.string "Zeig mir ein POKéMON!\n"
	.string "Ich muss nur einen Blick drauf werfen.$"

BattleFrontier_Lounge1_Text_SaidMyMonIsOutstanding_hns:
	.string "Er hat gesagt, mein POKéMON sei\n"
	.string "herausragend! Ich bin froh, dass ich\l"
	.string "es sorgfältig aufgezogen habe.$"

BattleFrontier_Lounge1_Text_DidntDoAnythingSpecialRaisingIt_hns:
	.string "Er hat gesagt, mein POKéMON sei\n"
	.string "herausragend! Dabei habe ich gar\n"
	.string "nichts\l"
	.string "Besonderes bei der Aufzucht gemacht…$"


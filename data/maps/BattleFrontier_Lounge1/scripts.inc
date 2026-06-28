BattleFrontier_Lounge1_MapScripts::
	.byte 0

@ NPC that rates pokemon based on their IVs
BattleFrontier_Lounge1_EventScript_Breeder::
	lock
	faceplayer
	call_if_unset FLAG_MET_BATTLE_FRONTIER_BREEDER, BattleFrontier_Lounge1_EventScript_BreederIntro
	call_if_set FLAG_MET_BATTLE_FRONTIER_BREEDER, BattleFrontier_Lounge1_EventScript_AlreadyMetBreeder
	setflag FLAG_MET_BATTLE_FRONTIER_BREEDER
	goto BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder
	end

BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder::
	chooseboxmon
	waitstate
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge1_EventScript_ShowMonToBreeder
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, BattleFrontier_Lounge1_EventScript_CancelMonSelect
	end

BattleFrontier_Lounge1_EventScript_BreederIntro::
	msgbox BattleFrontier_Lounge1_Text_PokemonBreederIntro, MSGBOX_DEFAULT
	return

BattleFrontier_Lounge1_EventScript_AlreadyMetBreeder::
	msgbox BattleFrontier_Lounge1_Text_LetsLookAtYourPokemon, MSGBOX_DEFAULT
	return

@ BufferVarsForIVRater buffers the following values
@ VAR_0x8005: Sum of the mons IVs
@ VAR_0x8006: Stat id of highest IV stat
@ VAR_0x8007: IV of the highest IV stat
BattleFrontier_Lounge1_EventScript_ShowMonToBreeder::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, BattleFrontier_Lounge1_EventScript_ShowEggToBreeder
	special BufferVarsForIVRater
	goto_if_le VAR_0x8005, 90, BattleFrontier_Lounge1_EventScript_AverageTotalIVs       @ Average of 15
	goto_if_le VAR_0x8005, 120, BattleFrontier_Lounge1_EventScript_AboveAverageTotalIVs @ Average of 20
	goto_if_le VAR_0x8005, 150, BattleFrontier_Lounge1_EventScript_HighTotalIVs         @ Average of 25
	goto_if_ge VAR_0x8005, 151, BattleFrontier_Lounge1_EventScript_VeryHighTotalIVs     @ Average of > 25
	end

BattleFrontier_Lounge1_EventScript_ShowEggToBreeder::
	msgbox BattleFrontier_Lounge1_Text_EvenICantTell, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_ChooseMonToShowBreeder
	end

@ Comment on the highest IV stat
BattleFrontier_Lounge1_EventScript_HighestIVStat::
	goto_if_eq VAR_0x8006, STAT_HP, BattleFrontier_Lounge1_EventScript_HighestIVHP
	goto_if_eq VAR_0x8006, STAT_ATK, BattleFrontier_Lounge1_EventScript_HighestIVAtk
	goto_if_eq VAR_0x8006, STAT_DEF, BattleFrontier_Lounge1_EventScript_HighestIVDef
	goto_if_eq VAR_0x8006, STAT_SPEED, BattleFrontier_Lounge1_EventScript_HighestIVSpeed
	goto_if_eq VAR_0x8006, STAT_SPATK, BattleFrontier_Lounge1_EventScript_HighestIVSpAtk
	goto_if_eq VAR_0x8006, STAT_SPDEF, BattleFrontier_Lounge1_EventScript_HighestIVSpDef
	end

@ Comment on the highest IV value
BattleFrontier_Lounge1_EventScript_HighestIVValue::
	goto_if_le VAR_0x8007, 15, BattleFrontier_Lounge1_EventScript_HighestIVLow
	goto_if_le VAR_0x8007, 25, BattleFrontier_Lounge1_EventScript_HighestIVMid
	goto_if_le VAR_0x8007, 30, BattleFrontier_Lounge1_EventScript_HighestIVHigh
	goto_if_ge VAR_0x8007, 31, BattleFrontier_Lounge1_EventScript_HighestIVMax
	end

BattleFrontier_Lounge1_EventScript_EndBreederComments::
	release
	end

BattleFrontier_Lounge1_EventScript_AverageTotalIVs::
	msgbox BattleFrontier_Lounge1_Text_AverageAbility, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
	end

BattleFrontier_Lounge1_EventScript_AboveAverageTotalIVs::
	msgbox BattleFrontier_Lounge1_Text_BetterThanAverageAbility, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
	end

BattleFrontier_Lounge1_EventScript_HighTotalIVs::
	msgbox BattleFrontier_Lounge1_Text_ImpressiveAbility, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
	end

BattleFrontier_Lounge1_EventScript_VeryHighTotalIVs::
	msgbox BattleFrontier_Lounge1_Text_OutstandingAbility, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVStat
	end

BattleFrontier_Lounge1_EventScript_HighestIVHP::
	msgbox BattleFrontier_Lounge1_Text_BestAspectHP, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end

BattleFrontier_Lounge1_EventScript_HighestIVAtk::
	msgbox BattleFrontier_Lounge1_Text_BestAspectAtk, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end

BattleFrontier_Lounge1_EventScript_HighestIVDef::
	msgbox BattleFrontier_Lounge1_Text_BestAspectDef, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end

BattleFrontier_Lounge1_EventScript_HighestIVSpeed::
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpeed, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end

BattleFrontier_Lounge1_EventScript_HighestIVSpAtk::
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpAtk, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end

BattleFrontier_Lounge1_EventScript_HighestIVSpDef::
	msgbox BattleFrontier_Lounge1_Text_BestAspectSpDef, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_HighestIVValue
	end

BattleFrontier_Lounge1_EventScript_HighestIVLow::
	msgbox BattleFrontier_Lounge1_Text_StatRelativelyGood, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
	end

BattleFrontier_Lounge1_EventScript_HighestIVMid::
	msgbox BattleFrontier_Lounge1_Text_StatImpressive, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
	end

BattleFrontier_Lounge1_EventScript_HighestIVHigh::
	msgbox BattleFrontier_Lounge1_Text_StatOutstanding, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
	end

BattleFrontier_Lounge1_EventScript_HighestIVMax::
	msgbox BattleFrontier_Lounge1_Text_StatFlawless, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge1_EventScript_EndBreederComments
	end

BattleFrontier_Lounge1_EventScript_CancelMonSelect::
	msgbox BattleFrontier_Lounge1_Text_NoTimeForMyAdvice, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge1_EventScript_Boy1::
	msgbox BattleFrontier_Lounge1_Text_SaidMyMonIsOutstanding, MSGBOX_NPC
	end

BattleFrontier_Lounge1_EventScript_Boy2::
	msgbox BattleFrontier_Lounge1_Text_DidntDoAnythingSpecialRaisingIt, MSGBOX_NPC
	end

BattleFrontier_Lounge1_Text_PokemonBreederIntro:
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

BattleFrontier_Lounge1_Text_AverageAbility:
	.string "Hmm… …\p"
	.string "Bei diesem hier erkenne ich\n"
	.string "durchschnittliche Fähigkeiten.$"

BattleFrontier_Lounge1_Text_BetterThanAverageAbility:
	.string "Hmm… …\p"
	.string "Bei diesem hier erkenne ich über-\n"
	.string "durchschnittliche Fähigkeiten.$"

BattleFrontier_Lounge1_Text_ImpressiveAbility:
	.string "Hmm… …\p"
	.string "Bei diesem hier erkenne ich\n"
	.string "beeindruckende Fähigkeiten.$"

BattleFrontier_Lounge1_Text_OutstandingAbility:
	.string "Hmm… …\p"
	.string "Bei diesem hier erkenne ich\n"
	.string "herausragende Fähigkeiten.$"

BattleFrontier_Lounge1_Text_BestAspectHP:
	.string "Meiner Meinung nach liegt seine Stärke\n"
	.string "in seinen KP…$"

BattleFrontier_Lounge1_Text_BestAspectAtk:
	.string "Meiner Meinung nach liegt seine Stärke\n"
	.string "in seinem ANGRIFF…$"

BattleFrontier_Lounge1_Text_BestAspectDef:
	.string "Meiner Meinung nach liegt seine Stärke\n"
	.string "in seiner VERTEIDIGUNG…$"

BattleFrontier_Lounge1_Text_BestAspectSpAtk:
	.string "Meiner Meinung nach liegt seine Stärke\n"
	.string "in seinem SPEZIAL-ANGRIFF…$"

BattleFrontier_Lounge1_Text_BestAspectSpDef:
	.string "Meiner Meinung nach liegt seine Stärke\n"
	.string "in seiner SPEZIAL-VERTEIDIGUNG…$"

BattleFrontier_Lounge1_Text_BestAspectSpeed:
	.string "Meiner Meinung nach liegt seine Stärke\n"
	.string "in seiner INITIATIVE…$"

BattleFrontier_Lounge1_Text_StatRelativelyGood:
	.string "Sein Status ist relativ gut.\n"
	.string "Hm… Genauso würde ich es ausdrücken.$"

BattleFrontier_Lounge1_Text_StatImpressive:
	.string "Sein Status ist beeindruckend.\n"
	.string "Hm… Genauso würde ich es ausdrücken.$"

BattleFrontier_Lounge1_Text_StatOutstanding:
	.string "Sein Status ist herausragend.\n"
	.string "Hm… Genauso würde ich es ausdrücken.$"

BattleFrontier_Lounge1_Text_StatFlawless:
	.string "Dies ist makellos! Einfach perfekt!\n"
	.string "Hm… Genauso würde ich es ausdrücken.$"

BattleFrontier_Lounge1_Text_NoTimeForMyAdvice:
	.string "Was? Du hast keine Zeit,\n"
	.string "meinen Rat zu hören?\p"
	.string "Du solltest dir immer die Zeit nehmen,\n"
	.string "von den Alten zu lernen.$"

@ Unused
BattleFrontier_Lounge1_Text_HaveBusinessNeedsTending:
	.string "Yes, what is it now?\p"
	.string "I have business that needs tending!\n"
	.string "Save it for next time!$"

BattleFrontier_Lounge1_Text_LetsLookAtYourPokemon:
	.string "Ah, ein junges Gesicht! Interessieren\n"
	.string "dich die Fähigkeiten deiner POKéMON?\p"
	.string "Dann komm! Lass uns einen Blick\n"
	.string "auf deine POKéMON werfen.$"

BattleFrontier_Lounge1_Text_EvenICantTell:
	.string "Ich bin zwar ein Experte, aber auch\n"
	.string "ich\n"
	.string "bin nicht in der Lage, etwas zu einem\l"
	.string "ungeschlüpften POKéMON zu sagen.\p"
	.string "Zeig mir ein POKéMON!\n"
	.string "Ich muss nur einen Blick drauf werfen.$"

BattleFrontier_Lounge1_Text_SaidMyMonIsOutstanding:
	.string "Er hat gesagt, mein POKéMON sei\n"
	.string "herausragend! Ich bin froh, dass ich\l"
	.string "es sorgfältig aufgezogen habe.$"

BattleFrontier_Lounge1_Text_DidntDoAnythingSpecialRaisingIt:
	.string "Er hat gesagt, mein POKéMON sei\n"
	.string "herausragend! Dabei habe ich gar\n"
	.string "nichts\l"
	.string "Besonderes bei der Aufzucht gemacht…$"


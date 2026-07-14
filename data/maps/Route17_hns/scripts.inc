Route17_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route17_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route17_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route17_EventScript_Riley::
	trainerbattle_single TRAINER_RILEY_HNS, Route17_Text_BikerRileySeen, Route17_Text_BikerRileyBeaten, Route17_EventScript_RegisterRiley
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route17_EventScript_RematchRiley
	msgbox Route17_Text_BikerRileyAfterBattle, MSGBOX_AUTOCLOSE
	end

Route17_EventScript_RegisterRiley::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route17_Text_RileyRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_RILEY_HNS
	release
	end

Route17_EventScript_RematchRiley::
	trainerbattle_rematch TRAINER_RILEY_HNS, Route17_Text_RileyRematchIntro, Route17_Text_RileyRematchDefeat
	msgbox Route17_Text_RileyPostRematch, MSGBOX_AUTOCLOSE
	end

Route17_EventScript_Joel::
	trainerbattle_single TRAINER_JOEL_HNS, Route17_Text_BikerJoelSeen, Route17_Text_BikerJoelBeaten, Route17_EventScript_RegisterJoel
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route17_EventScript_RematchJoel
	msgbox Route17_Text_BikerJoelAfterBattle, MSGBOX_AUTOCLOSE
	end

Route17_EventScript_RegisterJoel::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route17_Text_JoelRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_JOEL_HNS
	release
	end

Route17_EventScript_RematchJoel::
	trainerbattle_rematch TRAINER_JOEL_HNS, Route17_Text_JoelRematchIntro, Route17_Text_JoelRematchDefeat
	msgbox Route17_Text_JoelPostRematch, MSGBOX_AUTOCLOSE
	end

Route17_EventScript_Glenn::
	trainerbattle_single TRAINER_GLENN_HNS, Route17_Text_BikerGlennSeen, Route17_Text_BikerGlennBeaten
	msgbox Route17_Text_BikerGlennAfterBattle, MSGBOX_AUTOCLOSE
	end

Route17_EventScript_Charles::
	trainerbattle_single TRAINER_CHARLES_HNS, Route17_Text_BikerCharlesSeen, Route17_Text_BikerCharlesBeaten, Route17_EventScript_RegisterCharles
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route17_EventScript_RematchCharles
	msgbox Route17_Text_BikerCharlesAfterBattle, MSGBOX_AUTOCLOSE
	end

Route17_EventScript_RegisterCharles::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route17_Text_CharlesRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CHARLES_HNS
	release
	end

Route17_EventScript_RematchCharles::
	trainerbattle_rematch TRAINER_CHARLES_HNS, Route17_Text_CharlesRematchIntro, Route17_Text_CharlesRematchDefeat
	msgbox Route17_Text_CharlesPostRematch, MSGBOX_AUTOCLOSE
	end

Route17_Text_BikerRileySeen:
	.string "Hey, du! Du bist aus JOHTO, oder?$"

Route17_Text_BikerRileyBeaten:
	.string "Boah, du legst aber los!$"

Route17_Text_BikerRileyAfterBattle:
	.string "Werd' nicht frech, du Null aus JOHTO!$"

Route17_Text_BikerJoelSeen:
	.string "Wow, cooles Fahrrad!$"

Route17_Text_BikerJoelBeaten:
	.string "Aber du siehst nicht nur cool aus…$"

Route17_Text_BikerJoelAfterBattle:
	.string "Ich sehe zwar cool\n"
	.string "aus, bin aber schwach, also bin ich\l"
	.string "nicht wirklich cool.\p"
	.string "Ich muss härter trainieren…$"

Route17_Text_BikerGlennSeen:
	.string "Hey! Schneller Kampf gefällig?$"

Route17_Text_BikerGlennBeaten:
	.string "Ups! Du hast ganz schön Kraft!$"

Route17_Text_BikerGlennAfterBattle:
	.string "Freihändig fahren\n"
	.string "gilt als cool auf dem RADWEG.$"

Route17_Text_BikerCharlesSeen:
	.string "Wir sind die\n"
	.string "furchtlosen Helden des RADWEGs!$"

Route17_Text_BikerCharlesBeaten:
	.string "Argh! Bumm und krach!$"

Route17_Text_BikerCharlesAfterBattle:
	.string "Durch rücksichts-\n"
	.string "loses Fahren passieren viele Unfälle!\l"
	.string "Bleib locker!$"

Route17_Text_RileyRegister:
	.string "Gar nicht schlecht für ein Kind\n"
	.string "aus JOHTO!$"

Route17_Text_RileyRematchIntro:
	.string "Punks aus JOHTO gewinnen nur\n"
	.string "einmal!$"

Route17_Text_RileyRematchDefeat:
	.string "Ich wurde fertiggemacht...$"

Route17_Text_RileyPostRematch:
	.string "Vielleicht sollte ich doch mal\n"
	.string "in JOHTO trainieren.$"

Route17_Text_JoelRegister:
	.string "Du bist doch ziemlich cool!\n"
	.string "Tauschen wir Nummern!$"

Route17_Text_JoelRematchIntro:
	.string "Mal sehen, wer jetzt cooler ist!$"

Route17_Text_JoelRematchDefeat:
	.string "Noch immer nicht cool genug...$"

Route17_Text_JoelPostRematch:
	.string "Ich trainiere weiter, bis ich\n"
	.string "so cool bin wie du!$"

Route17_Text_CharlesRegister:
	.string "Du bist ein Herzensbrecher wie ich!\n"
	.string "Gib mir deine Nummer!$"

Route17_Text_CharlesRematchIntro:
	.string "Ich bin nicht nur ein Straßenheld,\n"
	.string "ich bin ein Herzensbrecher!$"

Route17_Text_CharlesRematchDefeat:
	.string "Schon wieder voll abgestürzt!$"

Route17_Text_CharlesPostRematch:
	.string "Ich traf mal einen Trainer wie dich\n"
	.string "in EINALL. Pass auf dich auf!$"


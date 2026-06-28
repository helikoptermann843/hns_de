Route26_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route26_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route26_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route26_EventScript_Jake::
	trainerbattle_single TRAINER_JAKE_HNS, Route26_Text_CooltrainermJakeSeen, Route26_Text_CooltrainermJakeBeaten
	msgbox Route26_Text_CooltrainermJakeAfter, MSGBOX_AUTOCLOSE
	end

Route26_EventScript_Gaven::
	trainerbattle_single TRAINER_GAVEN_HNS, Route26_Text_CooltrainermGavenSeen, Route26_Text_CooltrainermGavenBeaten, Route26_EventScript_RegisterGaven
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route26_EventScript_RematchGaven
	msgbox Route26_Text_CooltrainermGavenAfter, MSGBOX_AUTOCLOSE
	end

Route26_EventScript_RegisterGaven::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route26_Text_GavenRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_GAVEN_HNS
	release
	end

Route26_EventScript_RematchGaven::
	trainerbattle_rematch TRAINER_GAVEN_HNS, Route26_Text_GavenRematchIntro, Route26_Text_GavenRematchDefeat
	msgbox Route26_Text_GavenPostRematch, MSGBOX_AUTOCLOSE
	end

Route26_EventScript_Joyce::
	trainerbattle_single TRAINER_JOYCE_HNS, Route26_Text_CooltrainerfJoyceSeen, Route26_Text_CooltrainerfJoyceBeaten
	msgbox Route26_Text_CooltrainerfJoyceAfter, MSGBOX_AUTOCLOSE
	end

Route26_EventScript_Beth::
	trainerbattle_single TRAINER_BETH_HNS, Route26_Text_CooltrainerfBethSeen, Route26_Text_CooltrainerfBethBeaten, Route26_EventScript_RegisterBeth
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route26_EventScript_RematchBeth
	msgbox Route26_Text_CooltrainerfBethAfter, MSGBOX_AUTOCLOSE
	end

Route26_EventScript_RegisterBeth::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route26_Text_BethRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_BETH_HNS
	release
	end

Route26_EventScript_RematchBeth::
	trainerbattle_rematch TRAINER_BETH_HNS, Route26_Text_BethRematchIntro, Route26_Text_BethRematchDefeat
	msgbox Route26_Text_BethPostRematch, MSGBOX_AUTOCLOSE
	end

Route26_EventScript_Richard::
	trainerbattle_single TRAINER_RICHARD_HNS, Route26_Text_PsychicRichardSeen, Route26_Text_PsychicRichardBeaten
	msgbox Route26_Text_PsychicRichardAfter, MSGBOX_AUTOCLOSE
	end

Route26_Text_CooltrainermJakeSeen:
	.string "Ich treffe die\n"
	.string "letzten Vorbereitungen für die Pokémon\l"
	.string "LIGA.$"

Route26_Text_CooltrainermJakeBeaten:
	.string "Ich habe es vermasselt!$"

Route26_Text_CooltrainermJakeAfter:
	.string "Es wird schwer, in der LIGA\n"
	.string "zu gewinnen.\p"
	.string "Ich muss noch mehr trainieren.\p"
	.string "Man sagt, die TOP VIER der LIGA\n"
	.string "sind stärker als ARENA-LEITER.$"

Route26_Text_CooltrainermGavenSeen:
	.string "Wenn du harte\n"
	.string "Kämpfe bestreitest, wirst du stärker.$"

Route26_Text_CooltrainermGavenBeaten:
	.string "Gah! Das Leben ist noch härter!$"

Route26_Text_CooltrainermGavenAfter:
	.string "Um zur Pokémon LIGA zu gelangen,\p"
	.string "musst du die SIEGESSTRASSE passieren.\n"
	.string "\p"
	.string "Die SIEGESSTRASSE ist schwierig.\p"
	.string "Eigentlich geht niemand dorthin!$"

Route26_Text_GavenRegister:
    .string "Um zur POKéMON LIGA zu kommen,\n"
    .string "musst du durch die SIEGESSTRASSE.\p"
    .string "Aber die SIEGESSTRASSE hat es in\n"
    .string "sich.\p"
    .string "Fast niemand wagt sich dorthin!$"

Route26_Text_GavenRematchIntro:
    .string "Durch harte Kämpfe wirst du immer\n"
    .string "stärker.$"

Route26_Text_GavenRematchDefeat:
    .string "Aaah! Das Leben ist noch härter!$"

Route26_Text_GavenPostRematch:
    .string "Um zur POKéMON LIGA zu kommen,\n"
    .string "musst du durch die SIEGESSTRASSE.\p"
    .string "Aber die SIEGESSTRASSE hat es in\n"
    .string "sich.\p"
    .string "Fast niemand wagt sich dorthin!$"

Route26_Text_CooltrainerfJoyceSeen:
	.string "Da du es bis\n"
	.string "hierher geschafft hast, musst du gut\n"
	.string "sein.\p"
	.string "Ich werde in diesem Kampf alles geben!$"

Route26_Text_CooltrainerfJoyceBeaten:
	.string "Nein! Ich kann das nicht glauben!$"

Route26_Text_CooltrainerfJoyceAfter:
	.string "Ich habe acht ARENA-LEITER besiegt,\n"
	.string "darum war ich sehr selbstsicher.\p"
	.string "Nächstes Mal muss ich mehr geben.$"

Route26_Text_CooltrainerfBethSeen:
	.string "Ich habe gegen\n"
	.string "einen Trainer namens <RIVAL> verloren.\n"
	.string "\p"
	.string "Er war sehr stark, aber…\p"
	.string "Es schien, als\n"
	.string "sei er vom Siegen besessen.\p"
	.string "Seine Pokémon taten mir Leid.$"

Route26_Text_CooltrainerfBethBeaten:
	.string "Pokémon sind keine Kriegswerkzeuge.$"

Route26_Text_CooltrainerfBethAfter:
	.string "Pokémon sind\n"
	.string "unschätzbare, lebenslange Partner.$"

Route26_Text_BethRegister:
    .string "POKéMON sind unbezahlbare Partner\n"
    .string "fürs ganze Leben.$"

Route26_Text_BethRematchIntro:
    .string "Ich habe gegen einen Trainer namens\n"
    .string "{RIVAL} verloren.\p"
    .string "Aber gegen dich verliere ich nicht!$"

Route26_Text_BethRematchDefeat:
    .string "POKéMON sind keine Werkzeuge des\n"
    .string "Krieges.$"

Route26_Text_BethPostRematch:
    .string "POKéMON sind unbezahlbare Partner\n"
    .string "fürs ganze Leben.$"

Route26_Text_PsychicRichardSeen:
	.string "Wow, sieh dir all\n"
	.string "die ORDEN an! Ich bin beeindruckt.\p"
	.string "Aber es reicht dir nicht, sie nur zu\p"
	.string "sammeln, oder?$"

Route26_Text_PsychicRichardBeaten:
	.string "Guter Kampf!$"

Route26_Text_PsychicRichardAfter:
	.string "Menschen und Pokémon wachsen an\n"
	.string "ihren Erfahrungen.\p"
	.string "Werde nicht faul oder\n"
	.string "selbstzufrieden.$"

Route26_Text_Sign:
	.string "ROUTE 26\p"
	.string "Pokémon LIGA EMPFANG$"


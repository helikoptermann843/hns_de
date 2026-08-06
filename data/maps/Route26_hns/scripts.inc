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
	.string "Ich treffe die letzten\n"
	.string "Vorbereitungen für die Pokémon\l"
	.string "Liga.$"

Route26_Text_CooltrainermJakeBeaten:
	.string "Ich habe es vermasselt!$"

Route26_Text_CooltrainermJakeAfter:
	.string "Ich muss mehr trainieren, sonst gewinne\n"
	.string "ich niemals einen Ligakampf.\p"
	.string "Ich habe gehört, dass die Top Vier der\n"
	.string "Liga noch stärker sind als die\l"
	.string "Arenaleiter!$"

Route26_Text_CooltrainermGavenSeen:
	.string "Nur wenn du harte Kämpfe bestreitest,\n"
	.string "zeigt sich deine wahre Stärke.$"

Route26_Text_CooltrainermGavenBeaten:
	.string "Gah! Das Leben ist noch härter!$"

Route26_Text_CooltrainermGavenAfter:
	.string "Um zur Pokémon Liga zu gelangen,\n"
	.string "musst du die Siegesstraße passieren.\p"
	.string "Die Siegesstraße ist schwierig.\p"
	.string "Eigentlich geht niemand dorthin!$"

Route26_Text_GavenRegister:
    .string "Um zur Pokémon Liga zu kommen,\n"
    .string "musst du durch die Siegesstraße.\p"
    .string "Aber die Siegesstraße hat es in\n"
    .string "sich.\p"
    .string "Fast niemand wagt sich dorthin!$"

Route26_Text_GavenRematchIntro:
	.string "Nur wenn du harte Kämpfe bestreitest,\n"
	.string "zeigt sich deine wahre Stärke.$"

Route26_Text_GavenRematchDefeat:
    .string "Aaah! Das Leben ist noch härter!$"

Route26_Text_GavenPostRematch:
    .string "Um zur Pokémon Liga zu kommen,\n"
    .string "musst du durch die Siegesstraße.\p"
    .string "Aber die Siegesstraße hat es in\n"
    .string "sich.\p"
    .string "Fast niemand wagt sich dorthin!$"

Route26_Text_CooltrainerfJoyceSeen:
	.string "Da du es bis hierher geschafft hast,\n"
	.string "musst du gut sein.\p"
	.string "Also werde auch ich in diesem Kampf\n"
	.string "alles geben!$"

Route26_Text_CooltrainerfJoyceBeaten:
	.string "Donnerwetter! Jetzt bin ich aber platt!$"

Route26_Text_CooltrainerfJoyceAfter:
	.string "Ich habe alle acht Arenaleiter besiegt\n"
	.string "und war mir meiner Sache so sicher…\p"
	.string "Ich muss mich mehr ins Zeug legen!$"

Route26_Text_CooltrainerfBethSeen:
	.string "Ich habe gegen einen Trainer\n"
	.string "namens {RIVAL} verloren.\p"
	.string "Er war sehr stark, aber…\n"
	.string "Es schien, als sei er\l"
	.string "um jeden Preis auf den Sieg aus.\p"
	.string "Seine Pokémon taten mir leid.$"

Route26_Text_CooltrainerfBethBeaten:
	.string "Ich sag’s doch: Pokémon sind keine\n"
	.string "Kampfwerkzeuge.$"

Route26_Text_CooltrainerfBethAfter:
	.string "Pokémon sind unschätzbare,\n"
	.string "lebenslange Partner.$"

Route26_Text_BethRegister:
	.string "Pokémon sind unschätzbare,\n"
	.string "lebenslange Partner.$"

Route26_Text_BethRematchIntro:
    .string "Ich habe gegen einen Trainer namens\n"
    .string "{RIVAL} verloren.\p"
    .string "Aber gegen dich verliere ich nicht!$"

Route26_Text_BethRematchDefeat:
	.string "Ich sag’s doch: Pokémon sind keine\n"
	.string "Kampfwerkzeuge.$"

Route26_Text_BethPostRematch:
	.string "Pokémon sind unschätzbare,\n"
	.string "lebenslange Partner.$"

Route26_Text_PsychicRichardSeen:
	.string "Wow, sieh dir all die Orden an! Ich bin\n"
	.string "beeindruckt.\p"
	.string "Aber mit denen alleine scheinst du dich\n"
	.string "noch nicht zufrieden zu geben, was?$"

Route26_Text_PsychicRichardBeaten:
	.string "Das war ein guter Kampf!$"

Route26_Text_PsychicRichardAfter:
	.string "Menschen und Pokémon wachsen beide an\n"
	.string "ihren Erfahrungen.\p"
	.string "Du darfst nicht faul und selbstgefällig\n"
	.string "werden.$"

Route26_Text_Sign:
	.string "Route 26\p"
	.string "Pokémon Liga Empfang$"


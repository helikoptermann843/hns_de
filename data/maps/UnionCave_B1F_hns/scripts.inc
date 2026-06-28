UnionCave_B1F_hns_MapScripts::
	.byte 0

UnionCave_B1F_EventScript_HikerPhillip::
	trainerbattle_single TRAINER_PHILLIP_HNS, UnionCave_B1F_Text_HikerPhillipSeen, UnionCave_B1F_Text_HikerPhillipBeaten
	msgbox UnionCave_B1F_Text_HikerPhillipAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_B1F_EventScript_HikerLeonard::
	trainerbattle_single TRAINER_LEONARD_HNS, UnionCave_B1F_Text_HikerLeonardSeen, UnionCave_B1F_Text_HikerLeonardBeaten
	msgbox UnionCave_B1F_Text_HikerLeonardAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_B1F_EventScript_PokemaniacAndrew::
	trainerbattle_single TRAINER_ANDREW_HNS, UnionCave_B1F_Text_PokemaniacAndrewSeen, UnionCave_B1F_Text_PokemaniacAndrewBeaten
	msgbox UnionCave_B1F_Text_PokemaniacAndrewAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_B1F_EventScript_PokemaniacCalvin::
	trainerbattle_single TRAINER_CALVIN_HNS, UnionCave_B1F_Text_PokemaniacCalvinSeen, UnionCave_B1F_Text_PokemaniacCalvinBeaten
	msgbox UnionCave_B1F_Text_PokemaniacCalvinAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_B1F_EventScript_Item_RockTomb::
	finditem ITEM_TM_ROCK_TOMB
	end

UnionCave_B1F_EventScript_Item_Xdefend::
	finditem ITEM_X_DEFEND
	end

UnionCave_B1F_Text_HikerPhillipSeen:
	.string "Schon lange sah ich niemanden\n"
	.string "mehr hier.\p"
	.string "Keine Scheu! Lass uns kämpfen!$"

UnionCave_B1F_Text_HikerPhillipBeaten:
	.string "Uurggh…$"

UnionCave_B1F_Text_HikerPhillipAfter:
	.string "Ich bin schon lange verirrt…\p"
	.string "Hier ist es nicht schlimm, aber\n"
	.string "ich habe sooo Hunger!$"

UnionCave_B1F_Text_HikerLeonardSeen:
	.string "Was für eine Überraschung!\n"
	.string "Ein Besucher!$"

UnionCave_B1F_Text_HikerLeonardBeaten:
	.string "Wahahah! Du bist ja echt wild!$"

UnionCave_B1F_Text_HikerLeonardAfter:
	.string "Ich lebe hier unten.\p"
	.string "Du kannst auch hier wohnen,\n"
	.string "es ist genug Platz für alle.$"

UnionCave_B1F_Text_PokemaniacAndrewSeen:
	.string "Wer ist da?\p"
	.string "Lass mich und meine Pokémon in\n"
	.string "Ruhe!$"

UnionCave_B1F_Text_PokemaniacAndrewBeaten:
	.string "Geh… Geh weg!$"

UnionCave_B1F_Text_PokemaniacAndrewAfter:
	.string "Nur ich und meine Pokémon.\p"
	.string "Ich bin voller Freude!$"

UnionCave_B1F_Text_PokemaniacCalvinSeen:
	.string "Ich bin extra hierher gekommen\n"
	.string "für meine Pokémon-Forschung.\p"
	.string "Ich zeige meine Ergebnisse in\n"
	.string "einem richtigen Kampf!$"

UnionCave_B1F_Text_PokemaniacCalvinBeaten:
	.string "Du hast es mir gezeigt!$"

UnionCave_B1F_Text_PokemaniacCalvinAfter:
	.string "Ich sollte meine Studien\n"
	.string "veröffentlichen.\p"
	.string "Vielleicht werde ich berühmt wie\n"
	.string "PROF. Lind.$"

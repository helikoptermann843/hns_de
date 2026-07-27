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
	.string "Ich habe schon lange keinen Menschen\n"
	.string "mehr gesehen… los, lass uns kämpfen!$"

UnionCave_B1F_Text_HikerPhillipBeaten:
	.string "Urks…$"

UnionCave_B1F_Text_HikerPhillipAfter:
	.string "Ich irre hier schon ewig umher…\p"
	.string "Dass ich hier nicht mehr rauskomme, ist\n"
	.string "mir egal, aber ich habe echt Kohldampf!$"

UnionCave_B1F_Text_HikerLeonardSeen:
	.string "Oh!\n"
	.string "Besuch bekomme ich hier nur selten!$"

UnionCave_B1F_Text_HikerLeonardBeaten:
	.string "Wahahaha!\n"
	.string "Ein sehr lebhafter Besuch! Sehr schön!$"

UnionCave_B1F_Text_HikerLeonardAfter:
	.string "Ich lebe hier unten.\p"
	.string "Du kannst auch hier wohnen,\n"
	.string "es ist genug Platz für alle.$"

UnionCave_B1F_Text_PokemaniacAndrewSeen:
	.string "Wer bist du? Ich mag es nicht, wenn wer\n"
	.string "meine Idylle mit den Pokémon stört!$"

UnionCave_B1F_Text_PokemaniacAndrewBeaten:
	.string "Grrr…\n"
	.string "Verschwinde von hier!$"

UnionCave_B1F_Text_PokemaniacAndrewAfter:
	.string "Nur ich und meine Pokémon.\p"
	.string "Ich bin voller Freude!$"

UnionCave_B1F_Text_PokemaniacCalvinSeen:
	.string "Ich bin bis nach hier draußen gekommen,\n"
	.string "um die Pokémon zu erforschen.\p"
	.string "Hier, ich will dir die Ergebnisse meiner\n"
	.string "Studien im Kampf erläutern!$"

UnionCave_B1F_Text_PokemaniacCalvinBeaten:
	.string "Du hast es mir gezeigt!$"

UnionCave_B1F_Text_PokemaniacCalvinAfter:
	.string "Ich sollte vielleicht langsam meine\n"
	.string "Forschungsergebnisse veröffentlichen!\p"
	.string "Dann werde ich vielleicht genauso\n"
	.string "berühmt wie Prof. Lind!$"

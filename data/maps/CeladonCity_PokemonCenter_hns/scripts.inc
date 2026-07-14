CeladonCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_PokemonCenter_OnTransition
	.byte 0

CeladonCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_CELADON_CITY_HNS
	end

CeladonCity_PokemonCenter_EventScript_CooltrainerF::
	msgbox CeladonCity_PokemonCenter1F_Text_CooltrainerF, MSGBOX_NPC
	end

CeladonCity_PokemonCenter_EventScript_Pharmacist::
	msgbox CeladonCity_PokemonCenter1F_Text_Pharmacist, MSGBOX_NPC
	end

CeladonCity_PokemonCenter_EventScript_Eusine::
	msgbox Celadon_Text_Eusine1, MSGBOX_NPC
	end

CeladonCity_PokemonCenter1F_Text_CooltrainerF:
	.string "Erika ist eine Meisterin der\n"
	.string "Pflanzen-Pokémon.\p"
	.string "Sie wird dich bezahlen lassen, wenn\n"
	.string "du nicht aufpasst.$"

CeladonCity_PokemonCenter1F_Text_Pharmacist:
	.string "TEAM ROCKETs Versteck befindet sich\n"
	.string "im Keller des SPIELE-ECKS.\p"
	.string "Oh, Moment. Das war vor drei Jahren.$"

Celadon_Text_Eusine1:
	.string "Eusin: Hi!\p"
	.string "Ich besuche wieder meine Heimatstadt.\p"
	.string "Es ist schon eine ganze Weile her.$"

Celadon_Text_EusineLeaves:
	.string "{PLAYER}, hast du gehört?\p"
	.string "Es gibt frische Gerüchte über ein\n"
	.string "regenbogenfarbenes Pokémon,\l"
	.string "das im Glockenturm erscheint.\p"
	.string "Ich habe gerade meine Party heilen\n"
	.string "lassen, jetzt mache ich mich auf nach\l"
	.string "Teak-City. Wir sehen uns, {PLAYER}!$"

Celadon_Text_NoBeasts:
	.string "Ach übrigens, {PLAYER}.\p"
	.string "Hast du die legendären Pokémon\n"
	.string "Raikou und Entei gefangen?\p"
	.string "<……><……><……>\p"
	.string "Okay…\p"
	.string "Wenn du auch nur eines fängst\n"
	.string "hoffe ich, dass du es mir meldest.\p"
	.string "Ich zähle auf dich, {PLAYER}!$"

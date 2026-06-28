SSTidalLowerDeck_MapScripts::
	.byte 0

SSTidalLowerDeck_EventScript_Phillip::
	trainerbattle_single TRAINER_PHILLIP, SSTidalLowerDeck_Text_PhillipIntro, SSTidalLowerDeck_Text_PhillipDefeat
	msgbox SSTidalLowerDeck_Text_PhillipPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalLowerDeck_EventScript_Leonard::
	trainerbattle_single TRAINER_LEONARD, SSTidalLowerDeck_Text_LeonardIntro, SSTidalLowerDeck_Text_LeonardDefeat
	msgbox SSTidalLowerDeck_Text_LeonardPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalLowerDeck_Text_PhillipIntro:
	.string "Arrgh! Ich habe die Schnauze voll und\n"
	.string "bin hundemüde vom Putzen.\p"
	.string "Ein Kampf ist jetzt genau das\n"
	.string "Richtige!$"

SSTidalLowerDeck_Text_PhillipDefeat:
	.string "Brüderchen, ich habe verloren!$"

SSTidalLowerDeck_Text_PhillipPostBattle:
	.string "Wir sind die GEBRÜDER SAUBERMANN!\p"
	.string "Der Ältere verteilt die Schmierseife\n"
	.string "und der Jüngere schrubbt das Deck!$"

SSTidalLowerDeck_Text_LeonardIntro:
	.string "Dies ist der untere Bereich des\n"
	.string "Schiffs.\n"
	.string "Hier gibt es sehr viel Platz.\l"
	.string "Genau richtig für einen POKéMON-Kampf.$"

SSTidalLowerDeck_Text_LeonardDefeat:
	.string "Oh, großer Bruder. Ich habe verloren.$"

SSTidalLowerDeck_Text_LeonardPostBattle:
	.string "Wir sind die GEBRÜDER SAUBERMANN!\p"
	.string "Der Ältere verteilt die Schmierseife\n"
	.string "und der Jüngere schrubbt das Deck!$"


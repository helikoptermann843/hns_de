MysteryGiftScript_VisitingTrainer::
	setvaddress MysteryGiftScript_VisitingTrainer
	special ValidateEReaderTrainer
	vgoto_if_eq VAR_RESULT, 0, MysteryGiftScript_VisitingTrainerArrived
	lock
	faceplayer
	vmessage sText_MysteryGiftVisitingTrainerInstructions
	waitmessage
	waitbuttonpress
	release
	end

MysteryGiftScript_VisitingTrainerArrived:
	lock
	faceplayer
	vmessage sText_MysteryGiftVisitingTrainerArrived
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftVisitingTrainerInstructions:
	.string "Danke, dass du das Geheim-\n"
	.string "geschehen benutzt hast.\p"
	.string "Da du im Besitz dieser Wunder-\n"
	.string "karte bist, darfst du bei einer\l"
	.string "Umfrage im Pkmn-Supermarkt\l"
	.string "teilnehmen.\l"
	.string "Lade andere Trainer zu diesen\l"
	.string "Umfragen nach Xeneroville\l"
	.string "ein.\l"
	.string "… Ich gebe dir ein geheimes\l"
	.string "Passwort für die Umfrage:\p"
	.string "“Gib mir Coole\n"
	.string "Trainer”\p"
	.string "Schreibe dies in eine Umfrage und\n"
	.string "schicke es zum Drahtlosen\l"
	.string "Kommunikations-System.$"

sText_MysteryGiftVisitingTrainerArrived:
	.string "Danke, dass du das Geheim-\n"
	.string "geschehen benutzt hast.\p"
	.string "Ein Trainer, der nach Xeneroville\n"
	.string "gekommen ist, sucht dich!\l"
	.string "Wir hoffen, der Kampf gegen\l"
	.string "diesen Trainer macht dir Spaß!\p"
	.string "Wenn du andere Passwörter ein-\n"
	.string "gibst, kannst du andere Trainer\l"
	.string "einladen.\l"
	.string "Sieh dich nach anderen Passwörtern\l"
	.string "um, die evtl. funktionieren könnten.$"

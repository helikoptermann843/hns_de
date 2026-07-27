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
	.string "Danke, dass du das GEHEIM-\n"
	.string "GESCHEHEN benutzt hast.\p"
	.string "Da du im Besitz dieser WUNDER-\n"
	.string "KARTE bist, darfst du bei einer\l"
	.string "Umfrage im PKMN-SUPERMARKT\l"
	.string "teilnehmen.\l"
	.string "Lade andere TRAINER zu diesen\l"
	.string "Umfragen nach XENEROVILLE\l"
	.string "ein.\l"
	.string "… Ich gebe dir ein geheimes\l"
	.string "Passwort für die Umfrage:\p"
	.string "“GIB MIR COOLE\n"
	.string "TRAINER”\p"
	.string "Schreibe dies in eine Umfrage und\n"
	.string "schicke es zum DRAHTLOSEN\l"
	.string "KOMMUNIKATIONS-SYSTEM.$"

sText_MysteryGiftVisitingTrainerArrived:
	.string "Danke, dass du das GEHEIM-\n"
	.string "GESCHEHEN benutzt hast.\p"
	.string "Ein TRAINER, der nach XENEROVILLE\n"
	.string "gekommen ist, sucht dich!\l"
	.string "Wir hoffen, der Kampf gegen\l"
	.string "diesen TRAINER macht dir Spaß!\p"
	.string "Wenn du andere Passwörter ein-\n"
	.string "gibst, kannst du andere TRAINER\l"
	.string "einladen.\l"
	.string "Sieh dich nach anderen Passwörtern\l"
	.string "um, die evtl. funktionieren könnten.$"

EcruteakCity_House1_hns_MapScripts::
	.byte 0

EcruteakCity_House1_EventScript_Gramps::
	lock
	faceplayer
	msgbox EcruteakLugiaSpeechHouse_Text_Gramps, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_House1_EventScript_Youngster::
	lock
	faceplayer
	msgbox EcruteakLugiaSpeechHouse_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakLugiaSpeechHouse_Text_Gramps:
	.string "Es geschah, als ich jung war.\p"
	.string "Der Himmel färbte sich schwarz.\p"
	.string "Ein riesiges, fliegendes Pokémon\n"
	.string "verdunkelte die Sonne.\p"
	.string "Ich frage mich, was das für ein\n"
	.string "Pokémon war. Es war wie ein\l"
	.string "Vogel und ein Drache zugleich.$"

EcruteakLugiaSpeechHouse_Text_Youngster:
	.string "Ob es wirklich ein so großes Pokémon\n"
	.string "gibt? Wenn ja, so muss es\l"
	.string "unfassbar mächtig sein.$"

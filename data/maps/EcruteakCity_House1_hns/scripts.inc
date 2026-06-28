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
	.string "Dies geschah, als ich jung war.\p"
	.string "Der Himmel färbte sich schwarz. Ein\p"
	.string "riesiges, fliegendes Pokémon\p"
	.string "verdunkelte die Sonne.\p"
	.string "Ich frage mich, was das für ein\p"
	.string "Pokémon war. Es\n"
	.string "war wie ein Vogel und ein Drache.$"

EcruteakLugiaSpeechHouse_Text_Youngster:
	.string "Ob es wirklich ein so großes Pokémon\p"
	.string "gibt? Wenn ja, so\n"
	.string "muss es unfassbar mächtig sein.$"

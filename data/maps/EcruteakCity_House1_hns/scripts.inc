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
	.string "Als ich noch jung war, bemerkte ich\n"
	.string "eines Tages plötzlich, dass sich der\l"
	.string "Himmel pechschwarz gefärbt hatte\l"
	.string "und ein riesiges, fliegendes Pokémon\l"
	.string "am Himmel erschien.\p"
	.string "Ich frage mich, was für ein Typ Pokémon\n"
	.string "das wohl war - Vogel oder Drache?$"

EcruteakLugiaSpeechHouse_Text_Youngster:
	.string "Ob es dieses riesige Pokémon wohl\n"
	.string "wirklich gibt? Wenn ja, muss es echt\l"
	.string "unfassbar mächtig sein.$"

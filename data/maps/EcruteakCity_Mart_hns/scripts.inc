EcruteakCity_Mart_hns_MapScripts::
	.byte 0

EcruteakCity_Mart_EventScript_Nerd::
	lock
	faceplayer
	msgbox EcruteakMart_Text_SuperNerd, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_Mart_EventScript_Granny::
	lock
	faceplayer
	msgbox EcruteakMart_Text_Granny, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakMart_Text_SuperNerd:
	.string "Mein EVOLI entwickelte sich\n"
	.string "zu einem PSIANA.\p"
	.string "Aber das EVOLI meines Freundes\n"
	.string "wurde zu einem NACHTARA.\p"
	.string "Ich frage mich, wieso? Wir haben\n"
	.string "unsere EVOLI gleich aufgezogen…$"

EcruteakMart_Text_Granny:
	.string "Setzt du BELEBER ein,\n"
	.string "wacht ein besiegtes Pokémon\l"
	.string "wieder auf.$"

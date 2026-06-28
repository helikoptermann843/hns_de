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
	.string "Mein EVOLI ent-\n"
	.string "wickelte sich zu einem PSIANA.\p"
	.string "Aber das EVOLI\n"
	.string "meines Freundes wurde zu einem\n"
	.string "NACHTARA.\p"
	.string "Ich frage mich, wieso? Wir haben\p"
	.string "unsere EVOLI gleich aufgezogen…$"

EcruteakMart_Text_Granny:
	.string "Setzt du BELEBER\n"
	.string "ein, wacht ein besiegtes Pokémon\l"
	.string "wieder auf.$"

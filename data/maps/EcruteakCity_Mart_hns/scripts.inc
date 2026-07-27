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
	.string "Mein EVOLI hat sich zu einem PSIANA\n"
	.string "entwickelt, aber aus dem EVOLI eines\l"
	.string "Freundes von mir wurde ein NACHTARA…\p"
	.string "Was hat er bloß anders gemacht als ich?\p"
	.string "Wir haben unsere EVOLI schließlich\n"
	.string "immer gleich trainiert…$"

EcruteakMart_Text_Granny:
	.string "Setzt du Beleber ein, wacht ein\n"
	.string "bewusstloses Pokémon wieder auf.$"

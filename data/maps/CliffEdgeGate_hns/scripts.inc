CliffEdgeGate_hns_MapScripts::
	.byte 0

CliffEdgeGate_EventScript_Woman::
	lock
	faceplayer
	msgbox CliffEdgeGate_Text_IntroOpen, MSGBOX_DEFAULT
	closemessage
	release
	end

CliffEdgeGate_EventScript_Picnicker::
	lock
	faceplayer
	msgbox CliffEdgeGate_Text_Expectations, MSGBOX_DEFAULT
	closemessage
	release
	end

CliffEdgeGate_Text_IntroOpen:
	.string "Hey, du! Höre mir mal kurz zu!\p"
	.string "Hier hinten gibt es einen\n"
	.string "sehr, sehr spannenden Ort!\l"
	.string "Die Safari-Zone!\p"
	.string "Da soll es seltene Pokémon in\n"
	.string "Hülle und Fülle geben…\l"
	.string "Ein regelrechtes Paradies für Trainer!\l"
	.string "Damit machen die doch Verluste, oder?\p"
	.string "Es ist gar nicht weit! Wenn du dort\n"
	.string "hochgehst, bist du sofort da!\l"
	.string "Na? Schaust du mal vorbei?$"

CliffEdgeGate_Text_Expectations:
	.string "Es freut uns ja, dass alle so hohe \n"
	.string "Erwartungen an die Safari-Zone haben…\l"
	.string "aber die Dame am Empfang tönt ein\l"
	.string "bisschen zu laut durch die Gegend!\p"
	.string "Setze doch einfach ein gesundes Maß\n"
	.string "an Erwartungen in die Safari-Zone, ja?$"

CliffEdgeGate_EventScript_CaveSign::
	lock
	msgbox CliffEdgeGate_Text_SignOpen, MSGBOX_SIGN
	closemessage
	release
	end

CliffEdgeGate_Text_SignOpen:
	.string "Erlebe wilde Pokémon-Abenteuer,\n"
	.string "völlig ohne Stress und Sorgen!\p"
	.string "Die allseits beliebte Safari-Zone von\n"
	.string "Wärter Baoba wartet auf dich!$"


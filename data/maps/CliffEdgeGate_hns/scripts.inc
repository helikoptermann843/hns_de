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
	.string "Wusstest du schon? Gleich um die\n"
	.string "Ecke ist eine Safari-Zone.\p"
	.string "Es macht richtig Spaß! Du wirst viele\l"
	.string "verschiedene\n"
	.string "Pokémon sehen, und du kannst sie\p"
	.string "alle fangen!\p"
	.string "Es gibt keinen Grund, nicht hinzu-\n"
	.string "gehen, oder?\l"
	.string "Gleich um die Ecke.$"

CliffEdgeGate_Text_Expectations:
	.string "Ich freue mich, dass alle darauf\n"
	.string "warten.\p"
	.string "Aber die Dame am Empfang wirkt\n"
	.string "etwas zu dramatisch…\p"
	.string "Setze deine Erwartungen nicht zu\n"
	.string "hoch!$"

CliffEdgeGate_EventScript_CaveSign::
	lock
	msgbox CliffEdgeGate_Text_SignOpen, MSGBOX_SIGN
	closemessage
	release
	end

CliffEdgeGate_Text_SignOpen:
	.string "Alles ist aufregend!\n"
	.string "Erkunde die Wildnis und fange Pokémon!\l"
	.string "Leiter Baoba's Safari-Zone\l"
	.string "Jetzt endlich verfügbar!$"


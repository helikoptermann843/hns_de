BlackthornCity_Mart_hns_MapScripts::
	.byte 0

BlackthornMart_EventScript_CoolTrainerM::
	msgbox BlackthornMart_Text_CooltrainerM, MSGBOX_NPC
	end

BlackthornMart_EventScript_BlackBelt::
	msgbox BlackthornMart_Text_BlackBelt, MSGBOX_NPC
	end

BlackthornMart_Text_CooltrainerM:
	.string "Du kannst kein TOP-BELEBER kaufen,\n"
	.string "aber es belebt ein besiegtes Pokémon\n"
	.string "vollständig wieder.\p"
	.string "Achtung--es stellt keine AP wieder\n"
	.string "her, die ANGRIFFSPUNKTE für Attacken.$"

BlackthornMart_Text_BlackBelt:
	.string "TOP-SCHUTZ hält schwache Pokémon\n"
	.string "von dir fern.\p"
	.string "Es hält am längsten von allen\n"
	.string "Schutz-Sprays.$"

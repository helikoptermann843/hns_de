NewBarkTown_House2_hns_MapScripts::
	.byte 0


NewBarkTown_House2_EventScript_ElmsWife::
	lock
	faceplayer
	msgbox NewBarkTown_House2_Text_ElmsWife, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTown_House2_EventScript_ElmsSon::
	lock
	faceplayer
	msgbox NewBarkTown_House2_Text_ElmsSon, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTown_House2_Text_ElmsWife:
	.string "Hi, {PLAYER}! Mein Mann ist immer\n"
	.string "so beschäftigt--ich hoffe, ihm\n"
	.string "geht es gut.\p"
	.string "Wenn er in seiner Pokémon-Forschung\n"
	.string "steckt, vergisst er sogar zu essen.$"

NewBarkTown_House2_Text_ElmsSon:
	.string "Wenn ich groß bin, helfe ich meinem\n"
	.string "Vater!\p"
	.string "Ich werde ein großartiger\n"
	.string "Pokémon-Professor!$"

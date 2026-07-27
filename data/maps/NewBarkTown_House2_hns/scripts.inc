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
	.string "Ach du bist es, {PLAYER}!\p"
	.string "Mein Mann ist immer so beschäftigt.\n"
	.string "Ich hoffe, er überarbeitet sich nicht!\p"
	.string "Wenn er in seiner Pokémon-Forschung\n"
	.string "versinkt, vergisst er sogar zu essen.$"

NewBarkTown_House2_Text_ElmsSon:
	.string "Wenn ich groß bin, will ich meinem\n"
	.string "Papa bei der Arbeit helfen!\p"
	.string "Und dann werde ich zu einem\n"
	.string "ganz tollen Pokémon-Professor!$"

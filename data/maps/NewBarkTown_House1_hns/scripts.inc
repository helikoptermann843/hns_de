NewBarkTown_House1_hns_MapScripts::
	.byte 0

NewBarkTown_House1_EventScript_Mother::
	lock
	faceplayer
	msgbox NewBarkTown_House1_Text_Neighbor, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTown_House1_EventScript_Daughter::
	lock
	faceplayer
	msgbox NewBarkTown_House1_Text_NeighborsDaughter, MSGBOX_DEFAULT
	closemessage
	release
	end

NewBarkTown_House1_Text_NeighborsDaughter:
	.string "Pikachu ist ein entwickeltes Pokémon!\p"
	.string "Diese Erkenntnis verdanken wir ganz\n"
	.string "alleine Professor Lind…\p"
	.string "Er hat mir wirklich sehr imponiert.\p"
	.string "An seiner Ausstrahlung merkt man\n"
	.string "sofort, wie er zu so einem berühmten\l"
	.string "Pokémon-Professor werden konnte.\p"
	.string "Seufz… ich wünschte, ich wäre auch so\n"
	.string "ein toller Forscher wie er.$"


NewBarkTown_House1_Text_Neighbor:
	.string "Meine Tochter will unbedingt\n"
	.string "Prof. Linds Assistentin werden.\p"
	.string "Sie liebt Pokémon wirklich sehr!\p"
	.string "Aber ich ja schließlich auch!$"


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
	.string "Pikachu ist ein entwickeltes\n"
	.string "Pokémon.\p"
	.string "PROF. LINDs Entdeckung hat mich\n"
	.string "total überrascht.\p"
	.string "Er ist so berühmt für seine\n"
	.string "Forschung zur Entwicklung.\p"
	.string "…seufz…\p"
	.string "Ich wünschte, ich könnte auch\n"
	.string "Forscher werden wie er…$"


NewBarkTown_House1_Text_Neighbor:
	.string "Meine Tochter will unbedingt\n"
	.string "PROF. LINDSs Assistentin werden.\p"
	.string "Sie liebt Pokémon wirklich sehr!\p"
	.string "Aber ich ja schließlich auch!$"


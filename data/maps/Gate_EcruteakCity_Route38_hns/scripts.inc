Gate_EcruteakCity_Route38_hns_MapScripts::
	.byte 0

Route38_EventScript_Officer::
	lock
	faceplayer
	msgbox Route38_Text_EcruteakGateOfficer, MSGBOX_DEFAULT
	closemessage
	release
	end

Route38_Text_EcruteakGateOfficer:
	.string "Wo sagtest du, kommst du her?\p"
	.string "NEUBORKIA?\p"
	.string "PROF. LIND wohnt dort, nicht wahr?\p"
	.string "Du hast einen\n"
	.string "langen Weg auf dich genommen, um\l"
	.string "hierher zu gelangen.$"

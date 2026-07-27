Gate_EcruteakCity_Route42_hns_MapScripts::
	.byte 0

Gate_EcruteakCity_Route42_EventScript_Policeman::
	lock
	faceplayer
	msgbox Route42_Text_EcruteakGateOfficer, MSGBOX_DEFAULT
	closemessage
	release
	end

Route42_Text_EcruteakGateOfficer:
	.string "Der Vertania-Wald ist wie ein\n"
	.string "natürlicher Irrgarten.\l"
	.string "Pass auf, dass du dich nicht verläufst!$"


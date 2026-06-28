DewfordTown_House1_MapScripts::
	.byte 0

DewfordTown_House1_EventScript_Man::
	msgbox DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland, MSGBOX_NPC
	end

DewfordTown_House1_EventScript_Woman::
	msgbox DewfordTown_House1_Text_LifeGoesSlowlyOnIsland, MSGBOX_NPC
	end

DewfordTown_House1_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox DewfordTown_House1_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

DewfordTown_House1_Text_LotToBeSaidForLivingOnIsland:
	.string "Über das harmonische Leben mit den\n"
	.string "POKéMON und der Familie auf diesem\l"
	.string "kleinen Eiland ließe sich viel\n"
	.string "erzählen.$"

DewfordTown_House1_Text_LifeGoesSlowlyOnIsland:
	.string "Bevor ich meinen Mann geheiratet habe,\n"
	.string "lebte ich in der großen Hafenstadt\l"
	.string "GRAPHITPORT CITY.\p"
	.string "Hier auf der Insel verläuft das Leben\n"
	.string "geruhsamer. Vom wunderbaren Meer um-\l"
	.string "geben - das ist die pure\n"
	.string "Glückseligkeit!$"

DewfordTown_House1_Text_Zigzagoon:
	.string "ZIGZACHS: Guguuh!$"


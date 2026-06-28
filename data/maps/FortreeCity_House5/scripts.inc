FortreeCity_House5_MapScripts::
	.byte 0

FortreeCity_House5_EventScript_PokefanF::
	msgbox FortreeCity_House5_Text_TreeHousesAreGreat, MSGBOX_NPC
	end

FortreeCity_House5_EventScript_Man::
	msgbox FortreeCity_House5_Text_AdaptedToNature, MSGBOX_NPC
	end

FortreeCity_House5_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox FortreeCity_House5_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FortreeCity_House5_Text_TreeHousesAreGreat:
	.string "Die Baumhäuser von BAUMHAUSEN\n"
	.string "CITY sind fantastisch!\p"
	.string "Ich glaube, es ist der beste Platz, um\n"
	.string "mit seinen POKéMON zusammenzuleben.$"

FortreeCity_House5_Text_AdaptedToNature:
	.string "POKéMON und Menschen sind auf die\n"
	.string "Natur angewiesen, um zu überleben.\p"
	.string "Es gibt überhaupt keinen Grund, die\n"
	.string "Natur nach unserem Willen zu formen.$"

FortreeCity_House5_Text_Zigzagoon:
	.string "ZIGZACHS: Bufuu!$"


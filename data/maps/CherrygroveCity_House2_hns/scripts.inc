CherrygroveCity_House2_hns_MapScripts::
	.byte 0

CherrygroveCity_House2_EventScript_GuideGent::
	lock
	faceplayer
	msgbox CherrygroveCity_GuideHouse_Text_GuideGent, MSGBOX_DEFAULT
	closemessage
	release
	end

CherrygroveCity_GuideHouse_Text_GuideGent:
	.string "Als ich noch ein kleiner Junge\n"
	.string "war, war ich ein Spitzentrainer!\p"
	.string "Hier ein guter Rat:\n"
	.string "Fang viele Pokémon!\p"
	.string "Behandle sie alle mit\n"
	.string "Respekt und Freundschaftlichkeit!$"

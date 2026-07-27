Gate_RuinsOfAlph_Route32_hns_MapScripts::
	.byte 0


Gate_RuinsOfAlph_Route32_EventScript_PokefanM::
	lock
	faceplayer
	msgbox Gate_RuinsOfAlph_Route32_Text_PokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_RuinsOfAlph_Route32_EventScript_Youngster::
	lock
	faceplayer
	msgbox Gate_RuinsOfAlph_Route32_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_RuinsOfAlph_Route32_Text_PokefanM:
	.string "Oh, du untersuchst die Ruinen?\n"
	.string "Aus dir wird bestimmt mal ein\l"
	.string "guter Wissenschaftler!$"

Gate_RuinsOfAlph_Route32_Text_Youngster:
	.string "Auf den Steintafeln sind Zeichnungen!\n"
	.string "Ich habe versucht, sie ein bisschen\l"
	.string "zu bewegen, aber ich habe immer noch\l"
	.string "keine Ahnung, zu was sie gut sind.$"

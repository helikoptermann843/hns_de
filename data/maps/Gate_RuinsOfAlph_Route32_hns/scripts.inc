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
	.string "Studierst du die Ruinen?\n"
	.string "Vielleicht wirst du noch\l"
	.string "Wissenschaftler.$"

Gate_RuinsOfAlph_Route32_Text_Youngster:
	.string "Hier sind Zeichnungen\n"
	.string "auf den Steinen\p"
	.string "Ich frage mich was sie bedeuten.$"

GoldenrodCity_UndergroundEntrance_hns_MapScripts::
	.byte 0


GoldenrodUnderground_EventScript_SuperNerd::
	lock
	faceplayer
	msgbox GoldenrodUnderground1_Text_SuperNerd, MSGBOX_DEFAULT
	closemessage
	lock
	release
	end

GoldenrodUnderground_EventScript_Teacher::
	lock
	faceplayer
	msgbox GoldenrodUnderground1_Text_Teacher, MSGBOX_DEFAULT
	closemessage
	lock
	release
	end

GoldenrodUnderground1_Text_SuperNerd:
	.string "Uff… ich habe unten in der Passage\n"
	.string "einen Pokémon-Kampf angezettelt, aber\l"
	.string "dabei ziemlich auf die Mütze gekriegt.\l"
	.string "Sei besser auf dem, äh, der Hut!$"


GoldenrodUnderground1_Text_Teacher:
	.string "Unten in der Passage gibt es Geschäfte!\p"
	.string "Aber da lungern so viele Trainer herum,\n"
	.string "dass ich mich nicht hinuntertraue.$"

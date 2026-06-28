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
	.string "Unten hat mich jemand zum\n"
	.string "Kampf herausgefordert.\p"
	.string "Es geht dort echt hart zu.\n"
	.string "Du solltest vorsichtig sein.$"


GoldenrodUnderground1_Text_Teacher:
	.string "Unten gibt es ein paar Läden…\n"
	.string "aber auch Trainer.\p"
	.string "Ich habe Angst, dort\n"
	.string "hinunterzugehen.$"

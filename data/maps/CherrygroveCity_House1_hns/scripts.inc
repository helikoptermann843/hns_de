CherrygroveCity_House1_hns_MapScripts::
	.byte 0

CherrygroveCity_House1_EventScript_Baldingman::
	lock
	faceplayer
	msgbox CherrygroveCity_GymSpeechHouse_Text_PokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

CherrygroveCity_House1_EventScript_Kid::
	lock
	faceplayer
	msgbox CherrygroveCity_GymSpeechHouse_Text_BugCatcher, MSGBOX_DEFAULT
	closemessage
	release
	end

CherrygroveCity_GymSpeechHouse_Text_PokefanM:
	.string "Möchtest du herausfinden, wie gut\n"
	.string "du als Trainer wirklich bist?\p"
	.string "Dann solltest du alle Pokémon-Arenen\n"
	.string "in Johto aufsuchen und dir dort die\l"
	.string "zugehörigen Orden erkämpfen!$"

CherrygroveCity_GymSpeechHouse_Text_BugCatcher:
	.string "Wenn ich mal groß bin, möchte ich\n"
	.string "unbedingt Arenaleiter werden!\p"
	.string "Ich lasse meine Pokémon jetzt schon\n"
	.string "gegen die meiner Freunde antreten,\l"
	.string "damit sie stärker werden!$"

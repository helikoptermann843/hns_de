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
	.string "Du willst herausfinden, wie gut\n"
	.string "du als Pokémon-Trainer bist?\p"
	.string "Dann solltest du alle Pokémon-\n"
	.string "ARENEN in JOHTO besuchen und\l"
	.string "ORDEN sammeln.$"

CherrygroveCity_GymSpeechHouse_Text_BugCatcher:
	.string "Wenn ich älter bin, werde ich\n"
	.string "ein ARENALEITER!\p"
	.string "Ich lasse meine Pokémon gegen\n"
	.string "die meiner Freunde kämpfen, um\l"
	.string "sie stärker zu machen!$"

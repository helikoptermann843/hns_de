GoldenrodCity_House2_hns_MapScripts::
	.byte 0

GoldenrodCity_House2_EventScript_Man::
	faceplayer
	lock
	msgbox GoldenrodPPSpeechHouse_Text_Man, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_House2_EventScript_Woman::
	faceplayer
	lock
	msgbox GoldenrodPPSpeechHouse_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodPPSpeechHouse_Text_Man:
	.string "Einmal im Kampf konnte mein\n"
	.string "Pokémon keinen Zug ausführen.\p"
	.string "Die POWER POINTS, oder AP, aller\n"
	.string "Attacken waren aufgebraucht.$"

GoldenrodPPSpeechHouse_Text_Lass:
	.string "Manchmal kann auch ein gesundes\n"
	.string "Pokémon nicht mehr angreifen.\p"
	.string "In diesem Fall\n"
	.string "musst du es in einem Pokémon-CENTER\l"
	.string "oder mit einem Item heilen.$"

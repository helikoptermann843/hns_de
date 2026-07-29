SafariZoneGate_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SafariZoneGate_PokemonCenter_OnTransition
	.byte 0

SafariZoneGate_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_SAFARI_ZONE_GATE_HNS
	end

SafariZoneGate_PokemonCenter_EventScript_NPC1::
	lock
	faceplayer
	msgbox SafariZoneGate_PokemonCenter_Text_NPC1, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGate_PokemonCenter_EventScript_NPC2::
	lock
	faceplayer
	msgbox SafariZoneGate_PokemonCenter_Text_NPC2, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGate_PokemonCenter_Text_Boy::
	lock
	faceplayer
	msgbox SafariZoneGate_PokemonCenter_Text_SafariSong, MSGBOX_DEFAULT
	closemessage
	release
	end

SafariZoneGate_PokemonCenter_Text_NPC1:
	.string "Leute, die man ständig im Pokémon-\n"
	.string "Center sieht, sorgen sich bestimmt sehr\l"
	.string "um ihre Pokémon.\p"
	.string "Denkst du nicht auch?$"

SafariZoneGate_PokemonCenter_Text_NPC2:
	.string "Jemandem, der nach einem langen\n"
	.string "Aufstieg kurz vor dem Umkippen steht,\l"
	.string "muss der Anblick eines Pokémon-Centers\l"
	.string "wie eine Oase nach einem Marsch durch\l"
	.string "die Wüste vorkommen!$"

SafariZoneGate_PokemonCenter_Text_SafariSong:
	.string "Safari, Safari! So ein Spaß!\p"
	.string "Safari, Safari! Hier geb ich Gas!\p"
	.string "Wo in Schilf und Schlamm in Massen die\n"
	.string "Pokémon lauern im hohen Gras!\p"
	.string "Dieses Lied habe ich selbst\n"
	.string "geschrieben!\p"
	.string "Singe es doch auf deinen Streifzügen\n"
	.string "durch die Safari-Zone vor dich hin!$"

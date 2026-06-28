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
    .string "Diejenigen, die ein POKéMON-CENTER\n"
    .string "besuchen, kümmern sich oft gut um ihre\n"
    .string "POKéMON.\p"
    .string "Stimmst du zu?$"

SafariZoneGate_PokemonCenter_Text_NPC2:
    .string "Nach einem langen Marsch durch die\n"
    .string "Berge, um ein POKéMONCENTER zu finden\l"
    .string "wenn man kurz davor ist umzufallen…\p"
    .string "Dann fühlt es sich an wie im Paradies!$"

SafariZoneGate_PokemonCenter_Text_SafariSong:
    .string "Safari, Safari, es macht so viel Spaß.\n"
    .string "Safari, Safari, so interessant, was!\p"
    .string "So viele POKéMON warten auf uns!\p"
    .string "...Das ist ein Lied, das ich mir\n"
    .string "ausgedacht habe. Ich singe es wenn\n"
    .string "ich in der SAFARI-ZONE bin.$"

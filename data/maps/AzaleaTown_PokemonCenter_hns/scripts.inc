AzaleaTown_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AzaleaTown_Pokecenter_OnTransition
	.byte 0

AzaleaTown_Pokecenter_OnTransition::
	setrespawn HEAL_LOCATION_AZALEA_TOWN_HNS
	end

AzaleaPokeCenter_EventScript_Gentleman::
	lock
	faceplayer
	msgbox AzaleaPokecenter_Text_Gentleman, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaPokeCenter_EventScript_Fisher::
	lock
	faceplayer
	msgbox AzaleaPokecenter_Text_FishingGuru, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaPokeCenter_EventScript_PokefanF::
	lock
	faceplayer
	msgbox AzaleaPokecenter_Text_PokefanF, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaPokecenter_Text_Gentleman:
	.string "Können deine Pokémon VM-Attacken?\p"
	.string "Diese können benutzt werden\n"
	.string "sogar wenn dein Pokémon außer gefecht\l"
	.string "ist.$"

AzaleaPokecenter_Text_UnusedPCExplanation:
	.string "Dieser BILL hat\n"
	.string "das Pokémon- LAGERUNGS-SYSTEM für PC\n"
	.string "entwickelt.\p"
	.string "Auf BILLs PC können\n"
	.string "bis zu 30 Pokémon pro BOX gelagert\l"
	.string "werden.$"

AzaleaPokecenter_Text_FishingGuru:
	.string "Auf Bill's PC können bis zu 30\n"
	.string "Pokémon pro BOX gelagert werden.$"

AzaleaPokecenter_Text_PokefanF:
	.string "Weißt du über Beeren bescheid?\p"
	.string "Brich eine auf und höhle sie aus\n"
	.string "und verbinde sie mit einer\l"
	.string "speziellen Vorrichtung.\p"
	.string "Dann kannst du Pokémon damit fangen.\p"
	.string "Vor der Erfindung von Pokébällen\n"
	.string "hat jeder Beeren verwendet.$"

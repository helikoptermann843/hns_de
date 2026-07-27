ThreeIsland_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

ThreeIsland_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_THREE_ISLAND
	end

ThreeIsland_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

ThreeIsland_PokemonCenter_1F_EventScript_Sailor::
	msgbox ThreeIsland_PokemonCenter_1F_Text_ImpossibleToSurfBetweenIslands, MSGBOX_NPC
	end

ThreeIsland_PokemonCenter_1F_EventScript_Lass::
	msgbox ThreeIsland_PokemonCenter_1F_Text_AlwaysBerriesInBerryForest, MSGBOX_NPC
	end

ThreeIsland_PokemonCenter_1F_EventScript_Rocker::
	msgbox ThreeIsland_PokemonCenter_1F_Text_PCNetworkCanLinkWithKanto, MSGBOX_NPC
	end

ThreeIsland_PokemonCenter_1F_Text_PCNetworkCanLinkWithKanto::
	.string "Heh! Hast du schon gehört?\p"
	.string "Das PC-Netzwerk hier kann nun\n"
	.string "mit den PCs in KANTO verbunden\l"
	.string "werden.\l"
	.string "Ich weiß nicht, wie das zu Stande\l"
	.string "kam, aber es ist großartig!$"

ThreeIsland_PokemonCenter_1F_Text_ImpossibleToSurfBetweenIslands::
	.string "Es ist nicht möglich, zwischen den\n"
	.string "Inseln in dieser Gegend zu SURFen!\p"
	.string "Die Strömung ist zu stark und\n"
	.string "zu gefährlich!$"

ThreeIsland_PokemonCenter_1F_Text_AlwaysBerriesInBerryForest::
	.string "Lass uns BEEREN mahlen!\n"
	.string "… das wäre BEERENverschwendung?\p"
	.string "Im BEERENFORST kannst du stets\n"
	.string "BEEREN am Boden finden!$"


CinnabarIsland_PokemonLab_Entrance_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_PokemonLab_Entrance_OnTransition
	.byte 0

CinnabarIsland_PokemonLab_Entrance_OnTransition::
	call_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 1, CinnabarIsland_PokemonLab_Entrance_EventScript_ReadyFossil
	end

CinnabarIsland_PokemonLab_Entrance_EventScript_ReadyFossil::
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_POKEMON_LAB_EXPERIMENT_ROOM_REVIVE_STATE, 2
	return

CinnabarIsland_PokemonLab_Entrance_EventScript_Scientist::
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_StudyMonsExtensively, MSGBOX_NPC
	end

CinnabarIsland_PokemonLab_Entrance_EventScript_DrFujiPhoto::
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_PhotoOfLabFounderDrFuji, MSGBOX_SIGN
	end

CinnabarIsland_PokemonLab_Entrance_EventScript_MeetingRoomSign::
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_MeetingRoomSign, MSGBOX_SIGN
	end

CinnabarIsland_PokemonLab_Entrance_EventScript_RAndDRoomSign::
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_RAndDRoomSign, MSGBOX_SIGN
	end

CinnabarIsland_PokemonLab_Entrance_EventScript_TestingRoomSign::
	msgbox CinnabarIsland_PokemonLab_Entrance_Text_TestingRoomSign, MSGBOX_SIGN
	end

CinnabarIsland_Gym_Text_PhotoOfBlaineAndFuji::
	.string "Ein Foto von Pyro und Mr. Fuji!\p"
	.string "Sie stehen eng beisammen und\n"
	.string "grinsen!$"

CinnabarIsland_PokemonLab_Entrance_Text_StudyMonsExtensively::
	.string "Der Kapitän ist ein Meister des\n"
	.string "Schwertkampfes!\p"
	.string "Er unterrichtet sogar Pokémon im\n"
	.string "Umgang mit dem Zerschneider!$"

CinnabarIsland_PokemonLab_Entrance_Text_PhotoOfLabFounderDrFuji::
	.string "Sperrstunde! Die Party ist vorbei!\n"
	.string "Das Schiff sticht bald in See!$"

CinnabarIsland_PokemonLab_Entrance_Text_MeetingRoomSign::
	.string "Pokémon-Labor\n"
	.string "Konferenzraum$"

CinnabarIsland_PokemonLab_Entrance_Text_RAndDRoomSign::
	.string "Puh! Ich werde das Deck wohl nie\n"
	.string "sauber bekommen!$"

CinnabarIsland_PokemonLab_Entrance_Text_TestingRoomSign::
	.string "Hast du eine Ahnung, wie viele\n"
	.string "unterschiedliche Pokémon es gibt?$"


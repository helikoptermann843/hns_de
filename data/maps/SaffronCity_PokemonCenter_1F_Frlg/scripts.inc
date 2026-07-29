SaffronCity_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SaffronCity_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_SAFFRON_CITY
	end

SaffronCity_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

SaffronCity_PokemonCenter_1F_EventScript_Gentleman::
	msgbox SaffronCity_PokemonCenter_1F_Text_SilphCoVictimOfFame, MSGBOX_NPC
	end

SaffronCity_PokemonCenter_1F_EventScript_Woman::
	msgbox SaffronCity_PokemonCenter_1F_Text_GrowthRatesDifferBySpecies, MSGBOX_NPC
	end

SaffronCity_PokemonCenter_1F_EventScript_Youngster::
	lock
	faceplayer
	goto_if_eq VAR_MAP_SCENE_SILPH_CO_11F, 1, SaffronCity_PokemonCenter_1F_EventScript_YoungsterRocketsGone
	msgbox SaffronCity_PokemonCenter_1F_Text_GreatIfEliteFourCameBeatRockets
	release
	end

SaffronCity_PokemonCenter_1F_EventScript_YoungsterRocketsGone::
	msgbox SaffronCity_PokemonCenter_1F_Text_TeamRocketTookOff
	release
	end

SaffronCity_PokemonCenter_1F_Text_GrowthRatesDifferBySpecies::
	.string "{PLAYER}: Mein Pokémon sieht viel\n"
	.string "stärker aus!$"

SaffronCity_PokemonCenter_1F_Text_SilphCoVictimOfFame::
	.string "{PLAYER}: Ich bin nicht so\n"
	.string "ungeduldig wie du!\p"
	.string "Du darfst zuerst wählen, {PLAYER}!$"

SaffronCity_PokemonCenter_1F_Text_GreatIfEliteFourCameBeatRockets::
	.string "Ich wünschte, die Top Vier kämen\n"
	.string "und stampften das Team Rocket in\l"
	.string "den Boden!$"

SaffronCity_PokemonCenter_1F_Text_TeamRocketTookOff::
	.string "Danke, {PLAYER}!\n"
	.string "Meinen aufrichtigen Dank!\l"
	.string "Du hast meinen Traum erfüllt.$"


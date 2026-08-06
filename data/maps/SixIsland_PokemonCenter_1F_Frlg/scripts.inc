SixIsland_PokemonCenter_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SixIsland_PokemonCenter_1F_OnFrame
	.byte 0

SixIsland_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_SIX_ISLAND
	call_if_eq VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F, 0, SixIsland_PokemonCenter_1F_EventScript_ShowRival
	end

SixIsland_PokemonCenter_1F_EventScript_ShowRival::
	clearflag FLAG_HIDE_SIX_ISLAND_POKECENTER_RIVAL
	return

SixIsland_PokemonCenter_1F_OnFrame::
	map_script_2 VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F, 0, SixIsland_PokemonCenter_1F_EventScript_RivalScene
	.2byte 0

SixIsland_PokemonCenter_1F_EventScript_RivalScene::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	applymovement LOCALID_SIX_ISLAND_RIVAL, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
	applymovement LOCALID_SIX_ISLAND_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SIX_ISLAND_RIVAL, Common_Movement_Delay48
	waitmovement 0
	delay 25
	applymovement LOCALID_SIX_ISLAND_RIVAL, SixIsland_PokemonCenter_1F_Movement_RivalApproach
	waitmovement 0
	msgbox SixIsland_PokemonCenter_1F_Text_RivalImpossibleToGetAllMonsAroundHere
	closemessage
	applymovement LOCALID_PLAYER, SixIsland_PokemonCenter_1F_Movement_PlayerWatchRivalExit
	applymovement LOCALID_SIX_ISLAND_RIVAL, SixIsland_PokemonCenter_1F_Movement_RivalExit
	waitmovement 0
	fadedefaultbgm
	playse SE_EXIT
	delay 35
	removeobject LOCALID_SIX_ISLAND_RIVAL
	setvar VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F, 1
	setvar VAR_MAP_SCENE_FOUR_ISLAND, 1
	releaseall
	end

SixIsland_PokemonCenter_1F_Movement_RivalApproach::
	walk_right
	walk_right
	walk_down
	walk_down
	step_end

SixIsland_PokemonCenter_1F_Movement_RivalExit::
	delay_16
	delay_4
	walk_down
	step_end

SixIsland_PokemonCenter_1F_Movement_PlayerWatchRivalExit::
	walk_left
	walk_in_place_faster_right
	step_end

SixIsland_PokemonCenter_1F_EventScript_Nurse::
	lock
	faceplayer
	call EventScript_PkmnCenterNurse_Frlg
	release
	end

SixIsland_PokemonCenter_1F_EventScript_Hiker::
	msgbox SixIsland_PokemonCenter_1F_Text_SomethingHiddenOnThisIsland, MSGBOX_NPC
	end

SixIsland_PokemonCenter_1F_EventScript_OldMan::
	msgbox SixIsland_PokemonCenter_1F_Text_SomeMonsEvolveByTradingWithHeldItem, MSGBOX_NPC
	end

SixIsland_PokemonCenter_1F_Text_SomethingHiddenOnThisIsland::
	.string "Seit zehn Jahren erforsche ich die\n"
	.string "Ruinen.\p"
	.string "Nein, es sind zwanzig.\p"
	.string "Ich habe das Gefühl, dass auf die-\n"
	.string "ser Insel irgendein Geheimnis ist.$"

SixIsland_PokemonCenter_1F_Text_SomeMonsEvolveByTradingWithHeldItem::
	.string "Du weißt, dass es Pokémon\n"
	.string "gibt, die sich nur beim Tausch\l"
	.string "entwickeln?\l"
	.string "Aber wusstest du, dass es\l"
	.string "sogar noch speziellere\l"
	.string "Pokémon gibt?\l"
	.string "Einige Pokémon entwickeln\l"
	.string "sich nur, wenn sie beim Tausch\l"
	.string "ein spezielles Item tragen.$"

SixIsland_PokemonCenter_1F_Text_RivalImpossibleToGetAllMonsAroundHere::
	.string "{RIVAL}: Heh {PLAYER}!\n"
	.string "Wie ist es um deinen Pokédex\l"
	.string "bestellt?\l"
	.string "Es scheint unmöglich zu sein, alle\l"
	.string "Pokémon zu finden, wenn man\l"
	.string "sich nur hier aufhält.\l"
	.string "Vielleicht gibt es irgendwo Pkmn,\l"
	.string "über die wir nichts wissen…\p"
	.string "…………\n"
	.string "…………\l"
	.string "…\l"
	.string "Nun, wenn ich das nicht erledigen\l"
	.string "kann, musst du das übernehmen.\p"
	.string "Ich werde daran nicht verzweifeln.\p"
	.string "Ich sammle Pokémon in meinem\n"
	.string "Tempo, während ich sie trainiere.\p"
	.string "Das mache ich!\n"
	.string "Also macht es für mich keinen Sinn\l"
	.string "hier zu bleiben. Ich gehe nach\l"
	.string "Hause!\p"
	.string "Das wars!\n"
	.string "Bis demnächst!$"


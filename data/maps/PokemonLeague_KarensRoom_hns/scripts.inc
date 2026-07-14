PokemonLeague_KarensRoom_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EliteFourRoom_OnFrame
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_KarensRoom_OnResume
	map_script MAP_SCRIPT_ON_LOAD, EliteFourRoom_OnLoad
	.byte 0

PokemonLeague_KarensRoom_OnResume::
	setvar VAR_0x8004, 3
	special DoPokemonLeagueLightingEffect
	end

PokemonLeague_KarensRoom_EventScript_Karen::
	lock 
	faceplayer
	goto_if_ge VAR_LEAGUE_STATE, 5, PokemonLeague_KarensRoom_EventScript_KarenDefeated
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_KarensRoom_EventScript_KarenRematch
	msgbox PokemonLeague_KarensRoom_Text_Before, MSGBOX_DEFAULT
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_KAREN_1_HNS, PokemonLeague_KarensRoom_Text_Beaten
	goto PokemonLeague_KarensRoom_EventScript_KarenOnDefeat

PokemonLeague_KarensRoom_EventScript_KarenRematch::
	msgbox PokemonLeague_KarensRoom_Text_RematchBefore, MSGBOX_DEFAULT
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_KAREN_2_HNS, PokemonLeague_KarensRoom_Text_Beaten
	goto PokemonLeague_KarensRoom_EventScript_KarenOnDefeat

PokemonLeague_KarensRoom_EventScript_KarenOnDefeat::
    clearflag FLAG_TEMP_5
	msgbox PokemonLeague_KarensRoom_Text_Defeat, MSGBOX_DEFAULT
	closemessage
	setmetatile 6, 1, 0x28E, FALSE
	setmetatile 6, 2, 0x296, FALSE	
	playse SE_BANG
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 4  @ shake delay
	special ShakeCamera
	waitstate
	special DrawWholeMapView
	setvar VAR_LEAGUE_STATE, 5
	release
	end

PokemonLeague_KarensRoom_EventScript_KarenDefeated::
	msgbox PokemonLeague_KarensRoom_Text_Defeat, MSGBOX_DEFAULT
	closemessage
	release
	end

PokemonLeague_KarensRoom_Text_RematchBefore:
	.string "Melanie: Ah, du bist wieder hier.\p"
	.string "Ich vertraue darauf, dass du\n"
	.string "meinen Glauben nicht vergessen hast:\p"
	.string "Wahre Stärke entsteht aus dem\n"
	.string "Vertrauen zu den eigenen Pokémon.\p"
	.string "Seit unserem letzten Treffen hat sich\n"
	.string "meine Bindung zu meinen Pokémon\l"
	.string "weiter vertieft.\p"
	.string "Bist du bereit, einem Team\n"
	.string "gegenüberzustehen, vereint durch\l"
	.string "ein unzerbrechliches Band? \p"
	.string "Zeige mir die Kraft der Bindung\n"
	.string "mit deinen Pokémon.$"

PokemonLeague_KarensRoom_Text_Before:
	.string "Ich bin Melanie von der TOP VIER.\p"
	.string "Du bist {PLAYER}? Wie amüsant.\p"
	.string "Ich liebe Unlicht-Pokémon.\p"
	.string "Ihr wildes, hartes Image finde ich\n"
	.string "so faszinierend. Und sie sind\l"
	.string "so stark.\p"
	.string "Denkst du, du kannst sie besiegen?\n"
	.string "Versuche mich einfach zu unterhalten.\p"
	.string "Los geht's.$"

PokemonLeague_KarensRoom_Text_Beaten:
	.string "Nun, du bist wirklich gut. Das gefällt\n"
	.string "mir an einem Trainer.$"

PokemonLeague_KarensRoom_Text_Defeat:
	.string "Starke Pokémon.\p"
	.string "Schwache Pokémon.\p"
	.string "Das ist nur die egoistische\n"
	.string "Wahrnehmung der Menschen.\p"
	.string "Wirklich geschickte Trainer sollten\n"
	.string "versuchen, mit ihren Favoriten\l"
	.string "zu gewinnen.\p"
	.string "Dein Stil gefällt mir. Du verstehst,\n"
	.string "was wichtig ist.\p"
	.string "Mach weiter--der CHAMPION wartet.$"


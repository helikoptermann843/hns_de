PokemonLeague_BrunosRoom_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EliteFourRoom_OnFrame
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_BrunosRoom_OnResume
	map_script MAP_SCRIPT_ON_LOAD, EliteFourRoom_OnLoad
	.byte 0

PokemonLeague_BrunosRoom_OnResume::
	setvar VAR_0x8004, 2
	special DoPokemonLeagueLightingEffect
	end

PokemonLeague_BrunosRoom_EventScript_Bruno::
	lock 
	faceplayer
	goto_if_ge VAR_LEAGUE_STATE, 4, PokemonLeague_BrunosRoom_EventScript_BrunoDefeated
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_BrunosRoom_EventScript_BrunoRematch
	msgbox PokemonLeague_BrunosRoom_Text_Before, MSGBOX_DEFAULT
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_BRUNO_1_HNS, PokemonLeague_BrunosRoom_Text_Beaten
	goto PokemonLeague_BrunosRoom_EventScript_BrunoOnDefeat

PokemonLeague_BrunosRoom_EventScript_BrunoRematch::
	msgbox PokemonLeague_BrunosRoom_Text_RematchBefore, MSGBOX_DEFAULT
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_BRUNO_2_HNS, PokemonLeague_BrunosRoom_Text_Beaten
	goto PokemonLeague_BrunosRoom_EventScript_BrunoOnDefeat

PokemonLeague_BrunosRoom_EventScript_BrunoOnDefeat::
	clearflag FLAG_TEMP_5	
	msgbox PokemonLeague_BrunosRoom_Text_Defeat, MSGBOX_DEFAULT
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
	setvar VAR_LEAGUE_STATE, 4
	release
	end

PokemonLeague_BrunosRoom_EventScript_BrunoDefeated::
	msgbox PokemonLeague_BrunosRoom_Text_Defeat, MSGBOX_DEFAULT
	closemessage
	release
	end

PokemonLeague_BrunosRoom_Text_RematchBefore:
	.string "Bruno: Willkommen zurück,\n"
	.string "junger Krieger.\p"
	.string "Durch hartes Training sind wir\n"
	.string "noch stärker geworden.\p"
	.string "Mein steinharter Wille ist\n"
	.string "nun noch fester und unbeugsamer.\p"
	.string "Bist du bereit, dich einer\n"
	.string "noch größeren Prüfung zu stellen?\p"
	.string "Zeig mir die Früchte deines\n"
	.string "Trainings.\p"
	.string "Hoo hah!$"

PokemonLeague_BrunosRoom_Text_Before:
	.string "Ich bin Bruno von den\n"
	.string "TOP VIER.\p"
	.string "Ich trainiere bis ans Limit,\n"
	.string "denn ich glaube an unser Potenzial.\p"
	.string "So sind wir stark geworden.\p"
	.string "Hältst du unserer Kraft stand?\p"
	.string "Hm? Keine Angst in deinen Augen.\n"
	.string "Du wirkst entschlossen.\p"
	.string "Perfekt für den Kampf!\p"
	.string "Bereit, {PLAYER}? Du wirst dich\n"
	.string "unserer überwältigenden Macht\l"
	.string "beugen!\p"
	.string "Hoo hah!$"

PokemonLeague_BrunosRoom_Text_Beaten:
	.string "Warum? Wie konnten wir\n"
	.string "verlieren?$"

PokemonLeague_BrunosRoom_Text_Defeat:
	.string "Nach dieser Niederlage habe ich\n"
	.string "kein Recht mehr zu reden…\p"
	.string "Stell dich deiner nächsten\n"
	.string "Herausforderung!$"

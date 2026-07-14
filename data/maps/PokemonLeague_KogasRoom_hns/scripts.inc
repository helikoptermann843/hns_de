PokemonLeague_KogasRoom_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EliteFourRoom_OnFrame
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_KogasRoom_OnResume
	map_script MAP_SCRIPT_ON_LOAD, EliteFourRoom_OnLoad
	.byte 0

PokemonLeague_KogasRoom_OnResume::
	setvar VAR_0x8004, 1
	special DoPokemonLeagueLightingEffect
	end

PokemonLeague_KogasRoom_EventScript_Koga::
	lock 
	faceplayer
	goto_if_ge VAR_LEAGUE_STATE, 3, PokemonLeague_KogasRoom_EventScript_KogaDefeated
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_KogasRoom_EventScript_KogaRematch
	msgbox PokemonLeague_KogasRoom_Text_Before, MSGBOX_DEFAULT
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_KOGA_1_HNS, PokemonLeague_KogasRoom_Text_Beaten
	goto PokemonLeague_KogasRoom_EventScript_KogaOnDefeat

PokemonLeague_KogasRoom_EventScript_KogaRematch::
	msgbox PokemonLeague_KogasRoom_Text_RematchBefore, MSGBOX_DEFAULT
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_KOGA_2_HNS, PokemonLeague_KogasRoom_Text_Beaten
	goto PokemonLeague_KogasRoom_EventScript_KogaOnDefeat

PokemonLeague_KogasRoom_EventScript_KogaOnDefeat::
	clearflag FLAG_TEMP_5
	msgbox PokemonLeague_KogasRoom_Text_Defeat, MSGBOX_DEFAULT
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
	setvar VAR_LEAGUE_STATE, 3
	release
	end

PokemonLeague_KogasRoom_EventScript_KogaDefeated::
	msgbox PokemonLeague_KogasRoom_Text_Defeat, MSGBOX_DEFAULT
	closemessage
	release
	end

PokemonLeague_KogasRoom_Text_RematchBefore:
	.string "Koga: Fwahahahaha!\p"
	.string "Du bist zurück, mutiger\n"
	.string "Herausforderer.\p"
	.string "Meine Ninja-Fähigkeiten haben sich\n"
	.string "weiter geschärft.\p"
	.string "Neue heimtückische Fallen erwarten\n"
	.string "dich.\p"
	.string "Gift, Schlaf und mehr...\n"
	.string "Sei bereit!\p"
	.string "Fwahahahaha!\p"
	.string "Zeige mir, wie sehr du gewachsen bist!$"

PokemonLeague_KogasRoom_Text_Before:
	.string "Fwahahahaha!\p"
	.string "Ich bin Koga von der TOP VIER.\p"
	.string "Ich lebe in den Schatten, ein Ninja!\p"
	.string "Mein komplizierter Stil wird dich\n"
	.string "verwirren und vernichten!\p"
	.string "Konfusion, Schlaf, Gift…\p"
	.string "Bereite dich darauf vor, Opfer meiner\n"
	.string "heimtückischen Techniken zu werden!\p"
	.string "Fwahahahaha!\p"
	.string "Pokémon dreht sich nicht nur um rohe\n"
	.string "Kraft--das wirst du bald sehen!$"

PokemonLeague_KogasRoom_Text_Beaten:
	.string "Ah! Du hast deinen Wert bewiesen!$"

PokemonLeague_KogasRoom_Text_Defeat:
	.string "Ich habe alles eingesetzt, was ich\n"
	.string "hatte.\p"
	.string "Doch meine Bemühungen scheiterten. Ich\n"
	.string "muss meine Fähigkeiten weiter\l"
	.string "schärfen.\p"
	.string "Geh in den nächsten Raum und prüfe\n"
	.string "deine Fertigkeiten!$"

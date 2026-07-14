PokemonLeague_WillsRoom_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EliteFourRoom_OnFrame
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_WillsRoom_OnResume
	map_script MAP_SCRIPT_ON_LOAD, EliteFourRoom_OnLoad
	.byte 0

EliteFourRoom_OnLoad::
	call_if_eq VAR_TEMP_0, 1, EliteFourRoom_CreateDoor
	end

EliteFourRoom_CreateDoor::
	setmetatile 5, 11, 0x29D, TRUE
	setmetatile 6, 11, 0x29E, TRUE
	setmetatile 7, 11, 0x29F, TRUE
	setmetatile 5, 12, 0x2A5, TRUE
	setmetatile 6, 12, 0x2A6, TRUE
	setmetatile 7, 12, 0x2A7, TRUE
	return

PokemonLeague_WillsRoom_OnResume::
	setvar VAR_0x8004, 0
	special DoPokemonLeagueLightingEffect
	end

EliteFourRoom_OnFrame::
	map_script_2 VAR_TEMP_0, 0, EliteFourRoom_CloseDoor
	.2byte 0

EliteFourRoom_CloseDoor::
	lock
	setflag FLAG_TEMP_2
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp1
	waitmovement 0
	setmetatile 5, 11, 0x29D, TRUE
	setmetatile 6, 11, 0x29E, TRUE
	setmetatile 7, 11, 0x29F, TRUE
	setmetatile 5, 12, 0x2A5, TRUE
	setmetatile 6, 12, 0x2A6, TRUE
	setmetatile 7, 12, 0x2A7, TRUE
	playse SE_BANG
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 4  @ shake delay
	special ShakeCamera
	waitstate
	special DrawWholeMapView
	setvar VAR_TEMP_0, 1
	release
	end

PokemonLeague_WillsRoom_EventScript_Will::
	lock 
	faceplayer
	goto_if_ge VAR_LEAGUE_STATE, 2, PokemonLeague_WillsRoom_EventScript_WillDefeated
	goto_if_set FLAG_IS_CHAMPION, PokemonLeague_WillsRoom_EventScript_WillRematch
	msgbox PokemonLeague_WillsRoom_Text_Before, MSGBOX_DEFAULT
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_WILL_1_HNS, PokemonLeague_WillsRoom_Text_Beaten
	goto PokemonLeague_WillsRoom_EventScript_WillOnDefeat

PokemonLeague_WillsRoom_EventScript_WillRematch::
	msgbox PokemonLeague_WillsRoom_Text_RematchBefore, MSGBOX_DEFAULT
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_5
	trainerbattle_no_intro TRAINER_WILL_2_HNS, PokemonLeague_WillsRoom_Text_Beaten
	goto PokemonLeague_WillsRoom_EventScript_WillOnDefeat

PokemonLeague_WillsRoom_EventScript_WillOnDefeat::
	clearflag FLAG_TEMP_5
	msgbox PokemonLeague_WillsRoom_Text_Defeat, MSGBOX_DEFAULT
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
	setvar VAR_LEAGUE_STATE, 2
	release
	end

PokemonLeague_WillsRoom_EventScript_WillDefeated::
	msgbox PokemonLeague_WillsRoom_Text_Defeat, MSGBOX_DEFAULT
	closemessage
	release
	end

PokemonLeague_WillsRoom_Text_Before:
	.string "Willkommen in der POKéMON LIGA,\n"
	.string "{PLAYER}.\p"
	.string "Erlaube mir, mich vorzustellen.\n"
	.string "Ich bin WILLI.\p"
	.string "Ich habe auf der ganzen Welt\n"
	.string "trainiert, um meine Psycho-Pokémon\l"
	.string "mächtig zu machen.\p"
	.string "Und endlich wurde ich in die TOP VIER\n"
	.string "aufgenommen.\p"
	.string "Ich kann nur besser werden!\p"
	.string "Verlieren ist keine Option!$"

PokemonLeague_WillsRoom_Text_Beaten:
	.string "Ich… ich kann… es nicht… glauben…$"

PokemonLeague_WillsRoom_Text_Defeat:
	.string "Auch wenn ich besiegt wurde, werde ich\n"
	.string "meinen Kurs nicht ändern.\p"
	.string "Ich werde weiter kämpfen, bis ich über\n"
	.string "allen Trainern stehe!\p"
	.string "Nun, {PLAYER}, greif an und erlebe\n"
	.string "die wahre Kraft der ELITE VIER.$"

PokemonLeague_WillsRoom_Text_RematchBefore:
	.string "WILLI: Ah, willkommen zurück.\p"
	.string "Ich habe diese Begegnung vorausgesehen\p"
	.string "Meine Psycho-Pokémon und ich haben\n"
	.string "uns weiterentwickelt und\l"
	.string "neue Taktiken entwickelt.\p"
	.string "Bereite dich auf einen Kampf voller\n"
	.string "verbesserter Strategie und Stärke vor.\p"
	.string "Lass uns sehen, ob deine\n"
	.string "Auffassungsgabe der meinen nahekommt.$"

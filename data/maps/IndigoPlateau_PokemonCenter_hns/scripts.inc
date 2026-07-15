IndigoPlateau_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IndigoPlateau_PokemonCenter_OnFrame 
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_Pokecenter_OnTransition
	.byte 0

IndigoPlateau_PokemonCenter_OnFrame::
	map_script_2 VAR_LEAGUE_STATE, 0, IndigoPlateau_PokemonCenter_Enter
	map_script_2 VAR_LEAGUE_STATE, 2, IndigoPlateau_PokemonCenter_Enter
	map_script_2 VAR_LEAGUE_STATE, 3, IndigoPlateau_PokemonCenter_Enter
	map_script_2 VAR_LEAGUE_STATE, 4, IndigoPlateau_PokemonCenter_Enter
	map_script_2 VAR_LEAGUE_STATE, 5, IndigoPlateau_PokemonCenter_Enter
	map_script_2 VAR_LEAGUE_STATE, 6, IndigoPlateau_PokemonCenter_Enter
	.2byte 0

IndigoPlateau_PokemonCenter_Enter::
	setflag FLAG_VISITED_INDIGO_PLATEAU
	setvar VAR_LEAGUE_STATE, 1
	end

IndigoPlateau_Pokecenter_OnTransition::
	setrespawn HEAL_LOCATION_INDIGO_PLATEAU_HNS
	end


IndigoPlateau_EventScript_Cooltrainer::
	msgbox IndigoPlateau_Text_CooltrainerM, MSGBOX_NPC
	end

IndigoPlateau_EventScript_BlackBelt::
	msgbox IndigoPlateau_Text_Blackbelt, MSGBOX_NPC
	end

IndigoPlateau_EventScript_ShigyNinja::
	msgbox IndigoPlateau_Text_ShigyNinja, MSGBOX_NPC
	end

IndigoPlateau_Text_ShigyNinja:
	.string "Glückwunsch das du es hierher\n"
	.string "geschafft hast!\p"
	.string "Über die Jahre habe ich viele\n"
	.string "Trainer hier ankommen sehen,\l"
	.string "jeder Einzigartig.\p"
	.string "Du kannst stolz auf dich sein,\n"
	.string "so weit gekommen zu sein.\p"
	.string "Nun Los, weiter!$"

IndigoPlateau_Text_Blackbelt:
	.string "Die Pokémon LIGA akzeptiert\n"
	.string "momentan keine neuen Herausforderer.\p"
	.string "Bitte komm später wieder.$"

IndigoPlateau_Text_CooltrainerM:
	.string "In der Pokémon LIGA stellen dich\n"
	.string "die TOP VIER auf eine harte Probe.\p"
	.string "Du musst sie alle schlagen. Wenn du\n"
	.string "verlierst, musst du ganz\l"
	.string "von vorne anfangen!$"

IndigoPlateau_EventScript_Silver::
	lock
	faceplayer 
	goto_if_set FLAG_DAILY_BEAT_SILVER, IndigoPlateau_EventScript_SilverBeat
	msgbox IndigoPlateau_Text_RivalEntrance1, MSGBOX_DEFAULT
	call_if_eq VAR_STARTER_MON, 0, IndigoPlateau_Silver_Battle_Cyndaquil
	call_if_eq VAR_STARTER_MON, 1, IndigoPlateau_Silver_Battle_Totodile
	call_if_eq VAR_STARTER_MON, 2, IndigoPlateau_Silver_Battle_Chikorita
	msgbox IndigoPlateau_Text_RivalAfter, MSGBOX_DEFAULT
	setflag FLAG_DAILY_BEAT_SILVER
	release
	end

IndigoPlateau_EventScript_SilverBeat::
	msgbox IndigoPlateau_Text_RivalAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

IndigoPlateau_Silver_Battle_Cyndaquil::
	trainerbattle_no_intro TRAINER_RIVAL_CYNDAQUIL_7_HNS, IndigoPlateau_Text_RivalWin
	return

IndigoPlateau_Silver_Battle_Totodile::
	trainerbattle_no_intro TRAINER_RIVAL_TOTODILE_7_HNS, IndigoPlateau_Text_RivalWin
	return

IndigoPlateau_Silver_Battle_Chikorita::
	trainerbattle_no_intro TRAINER_RIVAL_CHIKORITA_7_HNS, IndigoPlateau_Text_RivalWin
	return

IndigoPlateau_Text_RivalEntrance1:
	.string "Halt.\p"
	.string "Du willst zur Pokémon LIGA?\p"
	.string "Das wird nicht passieren.\p"
	.string "Meine Pokémon sind super trainiert\n"
	.string "ich zerklatsch dich.\p"
	.string "{PLAYER}! Ich fordere dich heraus!$"

IndigoPlateau_Text_RivalWin:
	.string "… O.K. - Ich habe\p"
	.string "verloren…$"

IndigoPlateau_Text_RivalAfter:
	.string "…Mann… Ich kann noch nicht gewinnen…\p"
	.string "I… Ich muss über meine Pokémon\n"
	.string "nachdenken…\p"
	.string "Humph! Versuch nicht zu verlieren!$"

IndigoPlateau_EventScript_Psychic::
	lock
	faceplayer
	msgbox IndigoPlateau_Text_TeleportGuy1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, IndigoPlateau_EventScript_PsychicTeleport
	msgbox IndigoPlateau_Text_TeleportGuyNo, MSGBOX_DEFAULT
	closemessage
	release
	end

IndigoPlateau_EventScript_PsychicTeleport::
	msgbox IndigoPlateau_Text_TeleportGuyYes, MSGBOX_DEFAULT
	closemessage
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	playbgm MUS_HG_NEW_BARK, TRUE
	delay 60
	playmoncry SPECIES_ABRA, CRY_MODE_NORMAL
	applymovement2 LOCALID_INDIGOPLATEAU_ABRA, IndigoPLateau_Movement_Abra
	waitmovement 0
	fadescreen FADE_TO_WHITE
	warpteleport MAP_NEW_BARK_TOWN_HNS, 20, 12
	waitstate
	release
	end
	
IndigoPLateau_Movement_Abra:
	jump_in_place_right
	jump_in_place_right
	step_end

IndigoPlateau_EventScript_Abra::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ABRA, CRY_MODE_NORMAL
	msgbox IndigoPlateau_Text_Abra, MSGBOX_DEFAULT
	waitmoncry
	release
	end

IndigoPlateau_Text_TeleportGuy1:
	.string "Ah! Du forderst die TOP-VIER heraus?\p"
	.string "Bist du sicher, dass du bereit bist?\p"
	.string "Wenn du noch trainieren willst,\n"
	.string "kann mein Abra dir helfen.\p"
	.string "Es kann dich nach Hause teleportieren.\p"
	.string "Willst du jetzt nach Hause gehen?$"

IndigoPlateau_Text_TeleportGuyYes:
	.string "OK, OK. Stell dir dein Haus in\n"
	.string "deiner Vorstellung vor…$"

IndigoPlateau_Text_TeleportGuyNo:
	.string "OK, OK. Viel Glück für dich!$"

IndigoPlateau_Text_Abra:
	.string "Abra: Aabra…$"

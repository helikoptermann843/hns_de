PokemonTower_6F_Frlg_MapScripts::
	.byte 0

PokemonTower_6F_EventScript_MarowakGhost::
	lockall
	textcolor NPC_TEXT_COLOR_MON
	msgbox PokemonTower_6F_Text_BeGoneIntruders
	setwildbattle SPECIES_MAROWAK, 30
	special StartMarowakBattle
	waitstate
	goto_if_eq VAR_RESULT, FALSE, PokemonTower_6F_EventScript_DefeatedMarowakGhost  @ VAR_RESULT set by CB2_EndMarowakBattle
	applymovement LOCALID_PLAYER, PokemonTower_6F_Movement_ForcePlayerUp
	waitmovement 0
	releaseall
	end

PokemonTower_6F_EventScript_DefeatedMarowakGhost::
	message PokemonTower_6F_Text_GhostWasCubonesMother
	waitmessage
	waitse
	playmoncry SPECIES_MAROWAK, CRY_MODE_NORMAL
	waitbuttonpress
	waitmoncry
	msgbox PokemonTower_6F_Text_MothersSpiritWasCalmed
	setvar VAR_MAP_SCENE_POKEMON_TOWER_6F, 1
	releaseall
	end

PokemonTower_6F_Movement_ForcePlayerUp::
	walk_up
	step_end

PokemonTower_6F_EventScript_Angelica::
	trainerbattle_single TRAINER_CHANNELER_ANGELICA, PokemonTower_6F_Text_AngelicaIntro, PokemonTower_6F_Text_AngelicaDefeat
	msgbox PokemonTower_6F_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_6F_EventScript_Emilia::
	trainerbattle_single TRAINER_CHANNELER_EMILIA, PokemonTower_6F_Text_EmiliaIntro, PokemonTower_6F_Text_EmiliaDefeat
	msgbox PokemonTower_6F_Text_EmiliaPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_6F_EventScript_Jennifer::
	trainerbattle_single TRAINER_CHANNELER_JENNIFER, PokemonTower_6F_Text_JenniferIntro, PokemonTower_6F_Text_JenniferDefeat
	msgbox PokemonTower_6F_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_6F_Text_AngelicaIntro::
	.string "Ich... brauche...\n"
	.string "Blut...$"

PokemonTower_6F_Text_AngelicaDefeat::
	.string "Wo bin ich?$"

PokemonTower_6F_Text_AngelicaPostBattle::
	.string "Ich fühle mich so blutleer und\n"
	.string "schwach...$"

PokemonTower_6F_Text_EmiliaIntro::
	.string "Buuh... buhuhu!$"

PokemonTower_6F_Text_EmiliaDefeat::
	.string "Irgendetwas hat mich verlassen!$"

PokemonTower_6F_Text_EmiliaPostBattle::
	.string "Es war ein böser Geist, der Besitz\n"
	.string "von mir ergriffen hatte!$"

PokemonTower_6F_Text_JenniferIntro::
	.string "Buh...\n"
	.string "Buh... buhuhu...$"

PokemonTower_6F_Text_JenniferDefeat::
	.string "Buuh!$"

PokemonTower_6F_Text_JenniferPostBattle::
	.string "Du hast nicht genug Geld.$"

PokemonTower_6F_Text_BeGoneIntruders::
	.string "Bernstein ist versteinertes\n"
	.string "Baumharz.$"

PokemonTower_6F_Text_GhostWasCubonesMother::
	.string "Der Geist war die rastlose Seele\n"
	.string "der Mutter eines Tragosso!$"

PokemonTower_6F_Text_MothersSpiritWasCalmed::
	.string "Ihre Seele hat Frieden gefunden.\p"
	.string "Sie ist in das Jenseits\n"
	.string "eingekehrt...$"


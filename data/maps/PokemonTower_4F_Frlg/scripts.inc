PokemonTower_4F_Frlg_MapScripts::
	.byte 0

PokemonTower_4F_EventScript_Paula::
	trainerbattle_single TRAINER_CHANNELER_PAULA, PokemonTower_4F_Text_PaulaIntro, PokemonTower_4F_Text_PaulaDefeat
	msgbox PokemonTower_4F_Text_PaulaPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_4F_EventScript_Laurel::
	trainerbattle_single TRAINER_CHANNELER_LAUREL, PokemonTower_4F_Text_LaurelIntro, PokemonTower_4F_Text_LaurelDefeat
	msgbox PokemonTower_4F_Text_LaurelPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_4F_EventScript_Jody::
	trainerbattle_single TRAINER_CHANNELER_JODY, PokemonTower_4F_Text_JodyIntro, PokemonTower_4F_Text_JodyDefeat
	msgbox PokemonTower_4F_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonTower_4F_Text_PaulaIntro::
	.string "Ein Geist! Nein!\n"
	.string "Ahhhhh!$"

PokemonTower_4F_Text_PaulaDefeat::
	.string "Wohin ist der Geist gegangen?$"

PokemonTower_4F_Text_PaulaPostBattle::
	.string "Ich bin sicher, ich träume das\n"
	.string "alles nur...$"

PokemonTower_4F_Text_LaurelIntro::
	.string "Ich verfluche dich!\n"
	.string "Buuuh!$"

PokemonTower_4F_Text_LaurelDefeat::
	.string "Was ist passiert?$"

PokemonTower_4F_Text_LaurelPostBattle::
	.string "Wir können die Identität der\n"
	.string "Geister nicht ermitteln!$"

PokemonTower_4F_Text_JodyIntro::
	.string "Buuh... buhuhu...\n"
	.string "Lass mich in Ruhe!$"

PokemonTower_4F_Text_JodyDefeat::
	.string "Wer?\n"
	.string "Was? Wo?$"

PokemonTower_4F_Text_JodyPostBattle::
	.string "Mögen die verlorenen Seelen der\n"
	.string "Pokémon in Frieden ruhen...$"


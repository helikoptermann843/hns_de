RustboroCity_House3_MapScripts::
	.byte 0

RustboroCity_House3_EventScript_OldMan::
	msgbox RustboroCity_House3_Text_IGivePerfectlySuitedNicknames, MSGBOX_NPC
	end

RustboroCity_House3_EventScript_OldWoman::
	msgbox RustboroCity_House3_Text_NamingPikachuPekachu, MSGBOX_NPC
	end

@ Misspelling on purpose, see nickname
RustboroCity_House3_EventScript_Pekachu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox RustboroCity_House3_Text_Pekachu, MSGBOX_DEFAULT
	waitmoncry
	release
	end

RustboroCity_House3_Text_IGivePerfectlySuitedNicknames:
	.string "Meinen eigenen POKéMON habe ich\n"
	.string "perfekt passende Kosenamen gegeben!\p"
	.string "Das ist mein Ausdruck von… äh…\n"
	.string "Originalität. Genau! Originalität!$"

RustboroCity_House3_Text_NamingPikachuPekachu:
	.string "Aber ein PIKACHU einfach PEKACHU zu\n"
	.string "nennen? Das haut einen nicht gerade\l"
	.string "vom Hocker.\p"
	.string "Ich glaube ja auch, man sollte einen\n"
	.string "leicht verständlichen Kosenamen\l"
	.string "wählen, aber irgendwie…$"

RustboroCity_House3_Text_Pekachu:
	.string "PEKACHU: Peka!$"


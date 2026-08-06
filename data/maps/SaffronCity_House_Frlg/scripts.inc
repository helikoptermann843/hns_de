SaffronCity_House_Frlg_MapScripts::
	.byte 0

SaffronCity_House_EventScript_Lass::
	msgbox SaffronCity_House_Text_DontLookAtMyLetter, MSGBOX_NPC
	end

SaffronCity_House_EventScript_Youngster::
	msgbox SaffronCity_House_Text_GettingCopycatPokeDoll, MSGBOX_NPC
	end

SaffronCity_House_EventScript_Pidgey::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIDGEY, CRY_MODE_NORMAL
	msgbox SaffronCity_House_Text_Pidgey
	waitmoncry
	release
	end

SaffronCity_House_EventScript_Letter::
	msgbox SaffronCity_House_Text_ExplainPPUp, MSGBOX_SIGN
	end

SaffronCity_House_Text_DontLookAtMyLetter::
	.string "... vielen Dank für deinen Brief!\n"
	.string "Bis bald...\p"
	.string "Heh!\n"
	.string "Lies meinen Brief nicht!$"

SaffronCity_House_Text_Pidgey::
	.string "Taubsi: Taubsi!$"

SaffronCity_House_Text_GettingCopycatPokeDoll::
	.string "Ich mag die Nachahmerin!\n"
	.string "Ich kaufe ihr eine PokéPuppe!$"

SaffronCity_House_Text_ExplainPPUp::
	.string "Ich habe ein AP-Plus geschenkt\n"
	.string "bekommen!\p"
	.string "Es erhöht die Angriffspunkte einer\n"
	.string "Attacke!\p"
	.string "Ich sollte es bei einer mächtigen\n"
	.string "Attacke, die wenig AP hat,\l"
	.string "einsetzen.$"


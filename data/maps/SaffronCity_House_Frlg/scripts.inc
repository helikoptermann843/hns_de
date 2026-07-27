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
	.string "TAUBSI: TAUBSI!$"

SaffronCity_House_Text_GettingCopycatPokeDoll::
	.string "Die Türen der ARENA sind\n"
	.string "verschlossen...$"

SaffronCity_House_Text_ExplainPPUp::
	.string "TIPPS FÜR TRAINER\p"
	.string "Fange POKéMON, um deine Sammlung\n"
	.string "zu erweitern!\p"
	.string "Je mehr du besitzt, desto leichter\n"
	.string "werden die Kämpfe!$"


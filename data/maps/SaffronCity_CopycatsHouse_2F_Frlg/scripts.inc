SaffronCity_CopycatsHouse_2F_Frlg_MapScripts::
	.byte 0

SaffronCity_CopycatsHouse_2F_EventScript_Doduo::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DODUO, CRY_MODE_NORMAL
	msgbox SaffronCity_CopycatsHouse_2F_Text_Doduo
	waitmoncry
	release
	end

SaffronCity_CopycatsHouse_2F_EventScript_Doll::
	lock
	msgbox SaffronCity_CopycatsHouse_2F_Text_RareMonOnlyDoll
	release
	end

SaffronCity_CopycatsHouse_2F_EventScript_Copycat::
	lock
	faceplayer
	checkitem ITEM_POKE_DOLL
	goto_if_eq VAR_RESULT, TRUE, EventScript_MimicTutor
	checkplayergender
	call_if_eq VAR_RESULT, MALE, SaffronCity_CopycatsHouse_2F_EventScript_MimicPlayerMale
	call_if_eq VAR_RESULT, FEMALE, SaffronCity_CopycatsHouse_2F_EventScript_MimicPlayerFemale
	release
	end

SaffronCity_CopycatsHouse_2F_EventScript_MimicPlayerMale::
	msgbox SaffronCity_CopycatsHouse_2F_Text_MimickingFavoriteHobbyMale
	return

SaffronCity_CopycatsHouse_2F_EventScript_MimicPlayerFemale::
	msgbox SaffronCity_CopycatsHouse_2F_Text_MimickingFavoriteHobbyFemale
	return

SaffronCity_CopycatsHouse_2F_EventScript_Computer::
	msgbox SaffronCity_CopycatsHouse_2F_Text_MySecrets, MSGBOX_SIGN
	end

SaffronCity_CopycatsHouse_2F_EventScript_Game::
	msgbox SaffronCity_CopycatsHouse_2F_Text_MarioWearingABucket, MSGBOX_SIGN
	end

SaffronCity_CopycatsHouse_2F_Text_MimickingFavoriteHobbyMale::
	.string "Heh!\n"
	.string "Warte, du Champion in spe!\p"
	.string "Der hitzköpfige PYRO ist ein\n"
	.string "FEUER-POKéMON-Spezialist!\p"
	.string "Du solltest sein Mütchen mit Wasser\n"
	.string "kühlen!\p"
	.string "Und besorge dir FEUERHEILER!$"

SaffronCity_CopycatsHouse_2F_Text_MimickingFavoriteHobbyFemale::
	.string "{PLAYER}: Hallo!\n"
	.string "Magst du POKéMON?\p"
	.string "{PLAYER}: Halt, ich habe doch dich\n"
	.string "gefragt.\p"
	.string "{PLAYER}: Wie?\n"
	.string "Du bist komisch!\p"
	.string "NACHAHMERIN: Hmm? Ich soll die\n"
	.string "Nachahmerei aufgeben?\p"
	.string "Aber das ist doch mein Hobby!$"

Text_MimicTeach::
	.string "Wow!\n"
	.string "Das ist ja eine POKéPUPPE!\p"
	.string "Die ist für mich?\n"
	.string "Vielen Dank!\p"
	.string "Ich werde dafür einem deiner\n"
	.string "POKéMON die Attacke MIMIKRY\l"
	.string "beibringen!$"

Text_MimicDeclined::
	.string "Magst du MIMIKRY nicht?$"

Text_MimicWhichMon::
	.string "Ich liebe MIMIKRY!\n"
	.string "Wer soll es erlernen?$"

Text_MimicTaughtMale::
	.string "{PLAYER}: Hallo!\n"
	.string "Vielen Dank!\p"
	.string "{PLAYER}: Entschuldigung?\p"
	.string "{PLAYER}: … macht es dir wirklich\n"
	.string "so viel Spaß, mich nachzuahmen?\p"
	.string "NACHAHMERIN: Darauf kannst du\n"
	.string "wetten! Es ist grandios!$"

Text_MimicTaughtFemale::
	.string "{PLAYER}: Hallo!\n"
	.string "Vielen Dank!\p"
	.string "{PLAYER}: Entschuldigung?\p"
	.string "{PLAYER}: … macht es dir wirklich\n"
	.string "so viel Spaß, mich nachzuahmen?\p"
	.string "NACHAHMERIN: Darauf kannst du\n"
	.string "wetten! Es ist grandios!$"

SaffronCity_CopycatsHouse_2F_Text_Doduo::
	.string "DODU: Giegie!\p"
	.string "SPIEGLEIN, SPIEGLEIN AN DER\n"
	.string "WAND, WER IST DIE SCHÖNSTE IM\l"
	.string "GANZEN LAND?$"

SaffronCity_CopycatsHouse_2F_Text_RareMonOnlyDoll::
	.string "PONITA und VULNONA sind die\n"
	.string "Lieblings-POKéMON aller Pyromanen!$"

SaffronCity_CopycatsHouse_2F_Text_MarioWearingABucket::
	.string "Ein Spiel mit MARIO!$"

SaffronCity_CopycatsHouse_2F_Text_MySecrets::
	.string "...\p"
	.string "Meine Geheimnisse!\p"
	.string "Zeitvertreib: Mienenspiel\n"
	.string "Hobby: Puppen sammeln\l"
	.string "Lieblings-POKéMON: PIEPI!$"


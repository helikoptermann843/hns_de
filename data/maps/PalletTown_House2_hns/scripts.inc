PalletTown_House2_hns_MapScripts::
	.byte 0

PalletTown_House2_EventScript_Daisy::
	lock
	faceplayer
	goto_if_unset FLAG_HIDE_CINNABAR_BLUE, PalletTown_House2_EventScript_Blue
	goto_if_unset FLAG_DAILY_DAISY_GROOMED, PalletTown_House2_EventScript_DaisyGrooming
	msgbox PalletTown_House2_Text_AlreadyGroomed, MSGBOX_DEFAULT
	closemessage
	release
	end

PalletTown_House2_EventScript_Blue::
	msgbox PalletTown_House2_Text_Hello, MSGBOX_DEFAULT
	closemessage
	release
	end

PalletTown_House2_EventScript_DaisyDeclineGrooming::
	msgbox PalletTown_House2_Text_Refused, MSGBOX_DEFAULT
	closemessage
	release
	end
PalletTown_House2_EventScript_Egg::
	msgbox PalletTown_House2_Text_CantGroomEgg, MSGBOX_DEFAULT
	closemessage
	release
	end

PalletTown_House2_EventScript_DaisyGrooming::
	msgbox PalletTown_House2_Text_OfferGrooming, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, PalletTown_House2_EventScript_DaisyDeclineGrooming
	msgbox PalletTown_House2_Text_WhichMon, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	lock
	faceplayer
	bufferpartymonnick STR_VAR_1, VAR_0x8004
	goto_if_ge VAR_0x8004, PARTY_SIZE, PalletTown_House2_EventScript_DaisyDeclineGrooming
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, PalletTown_House2_EventScript_Egg
	goto_if_eq VAR_RESULT, FALSE, PalletTown_House2_EventScript_DaisyDeclineGrooming
	
	msgbox PalletTown_House2_Text_Alright
	closemessage
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special HaircutBrother1
	fadescreen FADE_FROM_BLACK
	special BufferMonNickname
	msgbox PalletTown_House2_Text_AllDone
	setflag FLAG_DAILY_DAISY_GROOMED
	release
	end

PalletTown_House2_Text_Hello:
	.string "Sarah: Hallo! Mein kleiner Bruder\n"
	.string "ist der ARENALEITER von\n"
	.string "VERTANIA CITY.\p"
	.string "Doch er verlässt die Stadt so\n"
	.string "oft, dass es für die Trainer\l"
	.string "Probleme gibt.$"

PalletTown_House2_Text_OfferGrooming:
	.string "Sarah: Hallo! Gutes Timing.\n"
	.string "Ich wollte gerade Tee trinken.\p"
	.string "Möchtest du auch einen?\p"
	.string "Oh, deine POKéMON sind etwas\n"
	.string "schmutzig.\p"
	.string "Soll ich eines pflegen?$"

PalletTown_House2_Text_WhichMon:
	.string "Sarah: Welches soll ich pflegen?$"

PalletTown_House2_Text_Alright:
	.string "Sarah: OK! Ich mache es im Nu\n"
	.string "wieder hübsch.$"

PalletTown_House2_Text_AllDone:
	.string "Sarah: Fertig! Siehst du?\p"
	.string "Sieht {STR_VAR_1} nicht\n"
	.string "schön aus?\p"
	.string "Es ist ein so süßes POKéMON.$"

PalletTown_House2_Text_AlreadyGroomed:
	.string "Sarah: Um diese Zeit trinke ich\n"
	.string "immer Tee. Komm doch dazu.$"

PalletTown_House2_Text_Refused:
	.string "Sarah: Du willst keines pflegen?\p"
	.string "Na gut, dann trinken wir Tee.$"

PalletTown_House2_Text_CantGroomEgg:
	.string "Sarah: Oh, tut mir leid.\n"
	.string "Ein EI kann ich nicht pflegen.$"

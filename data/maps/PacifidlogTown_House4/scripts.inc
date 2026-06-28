PacifidlogTown_House4_MapScripts::
	.byte 0

PacifidlogTown_House4_EventScript_LittleGirl::
	msgbox PacifidlogTown_House4_Text_SkyPokemon, MSGBOX_NPC
	end

PacifidlogTown_House4_EventScript_Woman::
	msgbox PacifidlogTown_House4_Text_PeopleSawHighFlyingPokemon, MSGBOX_NPC
	end

PacifidlogTown_House4_EventScript_Boy::
	lock
	faceplayer
	msgbox PacifidlogTown_House4_Text_WhereDidYouComeFrom, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, PacifidlogTown_House4_EventScript_Yes
	goto_if_eq VAR_RESULT, NO, PacifidlogTown_House4_EventScript_No
	end

PacifidlogTown_House4_EventScript_Yes::
	msgbox PacifidlogTown_House4_Text_YesTown, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House4_EventScript_No::
	msgbox PacifidlogTown_House4_Text_YouHaveToComeFromSomewhere, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House4_Text_PeopleSawHighFlyingPokemon:
	.string "Die Menschen sagen, sie hätten ein \n"
	.string "POKéMON über HOENN FLIEGEN sehen.\p"
	.string "FLIEGT es die ganze Zeit über herum?\n"
	.string "Muss es sich nicht ausruhen?$"

PacifidlogTown_House4_Text_SkyPokemon:
	.string "Ein Himmels-POKéMON!\n"
	.string "Ein Himmels-POKéMON!$"

PacifidlogTown_House4_Text_WhereDidYouComeFrom:
	.string "Woher kommst du?$"

PacifidlogTown_House4_Text_YesTown:
	.string "Ja? JA-Stadt???\p"
	.string "Davon habe ich ja noch nie gehört!$"

PacifidlogTown_House4_Text_YouHaveToComeFromSomewhere:
	.string "Nein? Das ergibt doch gar keinen Sinn.\n"
	.string "Du musst doch von irgendwo herkommen!\n"
	.string "\p"
	.string "Oh! Warte! Du willst doch nicht etwa\n"
	.string "be-\n"
	.string "haupten, du wärest in den Tiefen des\l"
	.string "Meeres geboren???$"


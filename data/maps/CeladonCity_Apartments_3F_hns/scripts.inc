CeladonCity_Apartments_3F_hns_MapScripts::
	.byte 0

CeladonCity_Apartments_3F_EventScript_Sign::
	msgbox CeladonMansion3F_Text_DevRoomSign, MSGBOX_SIGN
	end

CeladonCity_Apartments_3F_EventScript_Programmer::
	msgbox GameFreak_Text_Programmer, MSGBOX_NPC
	end

CeladonCity_Apartments_3F_EventScript_GraphicArtist::
	msgbox GameFreak_Text_GraphicArtist, MSGBOX_NPC
	end

CeladonCity_Apartments_3F_EventScript_Program::
	msgbox CeladonMansion3F_Text_GameProgram, MSGBOX_SIGN
	end

CeladonCity_Apartments_3F_EventScript_Picture::
	msgbox CeladonMansion3F_Text_Drawing, MSGBOX_SIGN
	end

CeladonCity_Apartments_3F_EventScript_CharacterDesigner::
	msgbox GameFreak_Text_CharacterDesigner, MSGBOX_NPC
	end

GameFreak_Text_GameDesigner:
	.string "Ist das richtig?\p"
	.string "Ich bin der SPIELDESIGNER!\p"
	.string "Deinen POKéDEX zu füllen ist schwer,\n"
	.string "aber gib nicht auf!$"

GameFreak_Text_GameDesignerCompletedPokedex:
	.string "Wow! Hervorragend! Du hast\n"
	.string "deinen POKéDEX vervollständigt!\p"
	.string "Herzlichen Glückwunsch!$"

GameFreak_Text_GraphicArtist:
	.string "Ich bin der GRAFIKDESIGNER.\p"
	.string "Ich habe dich gezeichnet!$"

GameFreak_Text_GraphicArtistPrintDiploma:
	.string "Ich bin der GRAFIKDESIGNER.\p"
	.string "Oh, du hast deinen POKéDEX\n"
	.string "vervollständigt?\p"
	.string "Willst du, dass ich dein DIPLOM\n"
	.string "ausdrucke?$"

GameFreak_Text_GraphicArtistRefused:
	.string "Sag Bescheid, wenn du dein DIPLOM\n"
	.string "ausgedruckt haben willst.$"

GameFreak_Text_GraphicArtistError:
	.string "Etwas stimmt nicht. Ich muss den\n"
	.string "Druck abbrechen.$"

GameFreak_Text_Programmer:
	.string "Wer, ich? Ich bin der PROGRAMMIERER.\p"
	.string "Spiel die Spielautomaten!$"

GameFreak_Text_CharacterDesigner:
	.string "Sind die ZWILLINGE nicht süß?\p"
	.string "Jasmin ist auch hübsch.\p"
	.string "Oh, ich liebe sie!$"

CeladonMansion3F_Text_DevRoomSign:
	.string "GAME FREAK ENTWICKLUNGSRAUM$"

CeladonMansion3F_Text_Drawing:
	.string "Es ist eine detaillierte Zeichnung\n"
	.string "eines hübschen Mädchens.$"

CeladonMansion3F_Text_GameProgram:
	.string "Es ist das Spielprogramm.\n"
	.string "Herumzuspielen\l"
	.string "könnte einen Käfer ins Spiel bringen!$"

CeladonMansion3F_Text_ReferenceMaterial:
	.string "Es ist voll mit Referenzmaterialien.\n"
	.string "Es gibt sogar eine Poképuppe.$"

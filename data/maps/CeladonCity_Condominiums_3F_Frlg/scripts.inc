CeladonCity_Condominiums_3F_Frlg_MapScripts::
	.byte 0

CeladonCity_Condominiums_3F_EventScript_Programmer::
	msgbox CeladonCity_Condominiums_3F_Text_ImTheProgrammer, MSGBOX_NPC
	end

CeladonCity_Condominiums_3F_EventScript_GraphicArtist::
	msgbox CeladonCity_Condominiums_3F_Text_ImTheGraphicArtist, MSGBOX_NPC
	end

CeladonCity_Condominiums_3F_EventScript_Writer::
	msgbox CeladonCity_Condominiums_3F_Text_IWroteTheStory, MSGBOX_NPC
	end

CeladonCity_Condominiums_3F_EventScript_Designer::
	lock
	faceplayer
	specialvar VAR_RESULT, HasAllKantoMons
	goto_if_eq VAR_RESULT, TRUE, CeladonCity_Condominiums_3F_EventScript_CompletedPokedex
	msgbox CeladonCity_Condominiums_3F_Text_ImGameDesignerShowMeFinishedPokedex
	release
	end

CeladonCity_Condominiums_3F_EventScript_CompletedPokedex::
	goto CeladonCity_Condominiums_3F_EventScript_ShowDiploma
	end

CeladonCity_Condominiums_3F_EventScript_ShowDiploma::
	message CeladonCity_Condominiums_3F_Text_CompletedPokedexCongratulations
	waitmessage
	delay 60
	special Special_ShowDiploma
	waitstate
	release
	end

CeladonCity_Condominiums_3F_EventScript_DevelopmentRoomSign::
	msgbox CeladonCity_Condominiums_3F_Text_GameFreakDevelopmentRoom, MSGBOX_SIGN
	end

CeladonCity_Condominiums_3F_EventScript_Computer1::
	msgbox CeladonCity_Condominiums_3F_Text_ItsTheGameProgram, MSGBOX_SIGN
	end

CeladonCity_Condominiums_3F_EventScript_Computer2::
	msgbox CeladonCity_Condominiums_3F_Text_SomeonesPlayingGame, MSGBOX_SIGN
	end

CeladonCity_Condominiums_3F_EventScript_Computer3::
	msgbox CeladonCity_Condominiums_3F_Text_ItsScriptBetterNotLookAtEnding, MSGBOX_SIGN
	end

CeladonCity_Condominiums_3F_Text_ImTheProgrammer::
	.string "Ich?\n"
	.string "Ich bin der Programmierer!$"

CeladonCity_Condominiums_3F_Text_ImTheGraphicArtist::
	.string "Ich bin der Grafiker!\n"
	.string "Ich habe dies alles gezeichnet!$"

CeladonCity_Condominiums_3F_Text_IWroteTheStory::
	.string "Die Geschichte stammt von mir!\n"
	.string "Ist ERIKA nicht süß?\p"
	.string "Aber MISTY mag ich auch gerne!\n"
	.string "Und nicht zu vergessen, SABRINA!$"

CeladonCity_Condominiums_3F_Text_ImGameDesignerShowMeFinishedPokedex::
	.string "Gefällt dir das Spiel?\p"
	.string "Ich habe das Spiel gestaltet!\p"
	.string "Auch wenn es sehr mühsam ist, den\n"
	.string "POKéDEX zu erstellen: Gib nicht\l"
	.string "auf!\p"
	.string "Zeige ihn mir, wenn er komplett ist!$"

CeladonCity_Condominiums_3F_Text_CompletedPokedexCongratulations::
	.string "Wow! Excellent!\n"
	.string "You completed your POKéDEX!\l"
	.string "Congratulations!\l"
	.string "…$"

CeladonCity_Condominiums_3F_Text_ItsTheGameProgram::
	.string "Der Programmcode! Davon sollte man\n"
	.string "besser die Finger lassen!$"

CeladonCity_Condominiums_3F_Text_SomeonesPlayingGame::
	.string "Dort spielt jemand, anstatt zu\n"
	.string "arbeiten!$"

CeladonCity_Condominiums_3F_Text_ItsScriptBetterNotLookAtEnding::
	.string "Das Drehbuch! Ich schaue mir das\n"
	.string "Ende besser nicht an!$"

CeladonCity_Condominiums_3F_Text_GameFreakDevelopmentRoom::
	.string "GAME FREAK Entwicklungs-Abteilung$"


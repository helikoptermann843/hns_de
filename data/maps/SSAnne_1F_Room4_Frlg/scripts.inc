SSAnne_1F_Room4_Frlg_MapScripts::
	.byte 0

SSAnne_1F_Room4_EventScript_Woman::
	lock
	faceplayer
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SSAnne_1F_Room4_EventScript_WomanPlayerMale
	msgbox SSAnne_1F_Room4_Text_WaitressCherryPiePlease
	release
	end

SSAnne_1F_Room4_EventScript_WomanPlayerMale::
	msgbox SSAnne_1F_Room4_Text_WaiterCherryPiePlease
	release
	end

SSAnne_1F_Room4_Text_WaiterCherryPiePlease::
	.string "So ein Mist! Ich muss ein paar\n"
	.string "Stärkere fangen!$"

SSAnne_1F_Room4_Text_WaitressCherryPiePlease::
	.string "Psst! Sei leise!\n"
	.string "Du verjagst alle Käfer...$"


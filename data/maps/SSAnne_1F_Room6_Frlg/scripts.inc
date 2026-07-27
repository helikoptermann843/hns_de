SSAnne_1F_Room6_Frlg_MapScripts::
	.byte 0

SSAnne_1F_Room6_EventScript_Woman::
	lock
	faceplayer
	msgbox SSAnne_1F_Room6_Text_TakeAShortRest, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SSAnne_1F_Room6_EventScript_DeclineHeal
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox SSAnne_1F_Room6_Text_GladEveryoneIsRefreshed
	release
	end

SSAnne_1F_Room6_EventScript_DeclineHeal::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SSAnne_1F_Room6_EventScript_DeclineHealMale
	msgbox SSAnne_1F_Room6_Text_SorryYouLookLikeMySister
	release
	end

SSAnne_1F_Room6_EventScript_DeclineHealMale::
	msgbox SSAnne_1F_Room6_Text_SorryYouLookLikeMyBrother
	release
	end

SSAnne_1F_Room6_Text_TakeAShortRest::
	.string "Du siehst müde aus!\n"
	.string "Komm, ruhe dich kurz aus!$"

SSAnne_1F_Room6_Text_GladEveryoneIsRefreshed::
	.string "Schön, dass alle erholt und\n"
	.string "erfrischt aussehen.$"

SSAnne_1F_Room6_Text_SorryYouLookLikeMyBrother::
	.string "Aber findest du auch durch dieses\n"
	.string "Labyrinth?$"

SSAnne_1F_Room6_Text_SorryYouLookLikeMySister::
	.string "Ich bin ein Spion und infiltriere\n"
	.string "die SILPH CO.!$"


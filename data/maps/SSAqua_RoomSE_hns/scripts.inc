SSAqua_RoomSE_hns_MapScripts::
	.byte 0

SSAqua_RoomSE_EventScript_Colin::
	trainerbattle_single TRAINER_COLIN_HNS, SSAqua_RoomSE_Text_PokefanmColinSeen, SSAqua_RoomSE_Text_PokefanmColinBeaten
	msgbox SSAqua_RoomSE_Text_PokefanmColinAfter, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomSE_EventScript_Meg::
	trainerbattle_double TRAINER_MEG_AND_PEG_HNS, SSAqua_RoomSE_Text_TwinsMegandpeg1Seen, SSAqua_RoomSE_Text_TwinsMegandpeg1Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox SSAqua_RoomSE_Text_TwinsMegandpeg1After, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomSE_EventScript_Peg::
	trainerbattle_double TRAINER_MEG_AND_PEG_HNS, SSAqua_RoomSE_Text_TwinsMegandpeg2Seen, SSAqua_RoomSE_Text_TwinsMegandpeg2Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox SSAqua_RoomSE_Text_TwinsMegandpeg2After, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomSE_Text_PokefanmColinSeen:
	.string "Hey, Kind! Willst du gegen mich\n"
	.string "kämpfen?$"

SSAqua_RoomSE_Text_PokefanmColinBeaten:
	.string "Du bist stark!$"

SSAqua_RoomSE_Text_PokefanmColinAfter:
	.string "Du reist ganz allein?\n"
	.string "Ist deine Mama nicht besorgt?$"

SSAqua_RoomSE_Text_TwinsMegandpeg1Seen:
	.string "Denkst du, ich sei ein Baby?\n"
	.string "Das ist unfair!$"

SSAqua_RoomSE_Text_TwinsMegandpeg1Beaten:
	.string "Oh! Wir haben verloren!$"

SSAqua_RoomSE_Text_TwinsMegandpeg1After:
	.string "Baby ist ein unhöflicher Name\n"
	.string "für uns Mädels!$"

SSAqua_RoomSE_Text_TwinsMegandpeg2Seen:
	.string "Ich bin kein Baby!\n"
	.string "So was sagt man nicht zu einer\l"
	.string "Dame!$"

SSAqua_RoomSE_Text_TwinsMegandpeg2Beaten:
	.string "Oh! Wir haben verloren!$"

SSAqua_RoomSE_Text_TwinsMegandpeg2After:
	.string "Manchmal sind Kinder klüger\n"
	.string "als Erwachsene!$"

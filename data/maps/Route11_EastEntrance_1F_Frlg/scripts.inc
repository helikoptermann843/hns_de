Route11_EastEntrance_1F_Frlg_MapScripts::
	.byte 0

Route11_EastEntrance_1F_EventScript_TopGuard::
	msgbox Route11_EastEntrance_1F_Text_ManInLavenderRatesNames, MSGBOX_NPC
	end

Route11_EastEntrance_1F_EventScript_BottomGuard::
	msgbox Route11_EastEntrance_1F_Text_RockTunnelToReachLavender, MSGBOX_NPC
	end

@ Unclear where this is originally from
Route11_EastEntrance_1F_Text_BagIsFull::
	.string "{PLAYER}{KUN}の　バッグ\n"
	.string "いっぱい　みたい　だね$"

Route11_EastEntrance_1F_Text_ManInLavenderRatesNames::
	.string "SARAH: Hi! Gutes Timing. Ich war\n"
	.string "gerade dabei, Tee zu machen.\p"
	.string "Hättest du auch gern eine Tasse\n"
	.string "Tee?\p"
	.string "Oh, deine POKéMON sehen ein\n"
	.string "bisschen mitgenommen aus.\p"
	.string "Möchtest du, dass ich eines für\n"
	.string "dich verschönere?$"

Route11_EastEntrance_1F_Text_RockTunnelToReachLavender::
	.string "Falls du nach LAVANDIA möchtest,\n"
	.string "empfehle ich dir den FELSTUNNEL.\p"
	.string "Du kannst den FELSTUNNEL von\n"
	.string "AZURIA CITY aus erreichen.$"


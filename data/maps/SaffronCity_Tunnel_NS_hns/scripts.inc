SaffronCity_Tunnel_NS_hns_MapScripts::
	.byte 0

SaffronCity_Tunnel_NS_EventScript_BaldingMan::
	lock
	faceplayer
	goto_if_set FLAG_ITEM_UNDERGROUND_PATH_TM_EXPLOSION, SaffronCity_Tunnel_NS_EventScript_BaldingManAfter
	msgbox SaffronCity_Tunnel_NS_Text_BaldingManIntro, MSGBOX_DEFAULT
	checkitem ITEM_RAGE_CANDY_BAR
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_Tunnel_NS_EventScript_BaldingManDetected
	closemessage
	release
	end

SaffronCity_Tunnel_NS_EventScript_BaldingManDetected::
	playse SE_PIN
	applymovement LOCALID_SAFFRONTUNNEL_UNCLE_RAGE, Common_Movement_ExclamationMark
	delay 55
	waitmovement LOCALID_SAFFRONTUNNEL_UNCLE_RAGE
	msgbox SaffronCity_Tunnel_NS_Text_BaldingManCandybarDetected, MSGBOX_DEFAULT
	removeitem ITEM_RAGE_CANDY_BAR
	msgbox SaffronCity_Tunnel_NS_Text_BaldingManGaveCandybar, MSGBOX_DEFAULT
	giveitem ITEM_TM_EXPLOSION
	setflag FLAG_ITEM_UNDERGROUND_PATH_TM_EXPLOSION
SaffronCity_Tunnel_NS_EventScript_BaldingManAfter::
	msgbox SaffronCity_Tunnel_NS_Text_BaldingManGaveTm, MSGBOX_DEFAULT
	closemessage
	release
	end

SaffronCity_Tunnel_NS_Text_BaldingManIntro:
	.string "Ich…\p"
	.string "Nein, ich will dir-ir-ir…\p"
	.string "Ich will dir nichts Böse-öses-öses…\p"
	.string "Dieser verlassene Ort ist wie \n"
	.string "ein Auffangbecken für böse Jungs-ungs,\l"
	.string "die hier ihr Unwesen…\p"
	.string "Die hier ihr Unwesen treiben-eiben!\p"
	.string "Mann, das macht mich so wüten-ütend…$"

SaffronCity_Tunnel_NS_Text_BaldingManCandybarDetected:
	.string "Aha!\n"
	.string "Das ist ein Wutriegel!\p"
	.string "Kann ich den haben?\n"
	.string "Bitte!$"

SaffronCity_Tunnel_NS_Text_BaldingManGaveCandybar:
	.string "Hamm!\p"
	.string "Knusper, knusper, knusper!\p"
	.string "Der ist aber lecker!\p"
	.string "Mampf, mampf, mampf!\p"
	.string "Knusper, knusper, knusper!\p"
	.string "Mampf, mampf, mampf!\p"
	.string "Knusper, knusper, knusper!\p"
	.string "…Puh.\p"
	.string "Jetzt bin ich irgendwie entspannt.\n"
	.string "Danke für den Snack!\l"
	.string "Hier, nimm das als Dankeschön!$"

SaffronCity_Tunnel_NS_Text_BaldingManGaveTm:
	.string "Die TM64 enthält…\p"
	.string "Tick,\n"
	.string "Tick,\l"
	.string "Tick,\l"
	.string "Tick,\l"
	.string "Tick,\l"
	.string "Tick,\l"
	.string "Tick,\l"
	.string "Tick,\l"
	.string "Tick,\l"
	.string "… … …\l"
	.string "… … …$"


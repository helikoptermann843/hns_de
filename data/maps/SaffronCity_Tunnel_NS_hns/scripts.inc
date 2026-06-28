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
	delay 60
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
	.string "Keine Angst, ich bin kein\n"
	.string "schlechter Mensch.\p"
	.string "So ein Ort wie dieser…\n"
	.string "zieht böse Menschen an.\p"
	.string "Die machen irgendwann\n"
	.string "Ärger…\p"
	.string "Allein der Gedanke macht\n"
	.string "mich wütend.$"

SaffronCity_Tunnel_NS_Text_BaldingManCandybarDetected:
	.string "Aha!\n"
	.string "Das ist ein WUTRIEGEL!\p"
	.string "Kann ich den haben?\n"
	.string "Bitte!$"

SaffronCity_Tunnel_NS_Text_BaldingManGaveCandybar:
	.string "{PLAYER} gab den WUTRIEGEL\n"
	.string "an den Typen im Tunnel.\p"
	.string "Mampf!\p"
	.string "Oh Mann!\p"
	.string "Aber der schmeckt so gut!\p"
	.string "Mampf mampf!\p"
	.string "Aaaargh! Das macht mich wütend!\p"
	.string "Mampf mampf!\p"
	.string "Aaaargh…\p"
	.string "…………………Puh!\p"
	.string "Ich fühl mich viel besser!\n"
	.string "Danke für den Riegel!\l"
	.string "Dafür sollst du das hier haben!$"

SaffronCity_Tunnel_NS_Text_BaldingManGaveTm:
	.string "TM 64 enthält........\p"
	.string "tick-\n"
	.string "            tock\l"
	.string "tick-\l"
	.string "            tock\l"
	.string "tick-\l"
	.string "            tock\l"
	.string "tick-\l"
	.string "            tock\l"
	.string "tick.....\l"
	.string "......................\l"
	.string "......................\l"
	.string "KABUMM!!!$"


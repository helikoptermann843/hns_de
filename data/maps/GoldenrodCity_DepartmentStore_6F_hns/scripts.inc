GoldenrodCity_DepartmentStore_6F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GoldenrodDeptElevator_OnFrame
	.byte 0

GoldenrodDeptStore6_EventScript_Whitney::
	lock
	faceplayer
	msgbox GoldenrodDeptStore6_Text_Whitney, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_HIDE_DEPTSTORE_WHITNEY
	removeobject LOCALID_STORE_WHITNEY
	fadescreenswapbuffers FADE_FROM_BLACK
	clearflag FLAG_HIDE_DOJO_WHITNEY
	release
	end

GoldenrodDeptStore6_Text_Whitney:
	.string "{PLAYER}! Schön dich zu sehen!\p"
	.string "Ich hole etwas für mein Miltank.\p"
	.string "Wenn du kämpfen willst komm zum\n"
	.string "Kampf DOJO$"

GoldenrodCity_DepartmentStore_6F_EventScript_Jose::
	lock
	faceplayer
	goto_if_set FLAG_GOLDENROD_NPC_TRADE_COMPLETED, GoldenrodCity_DepartmentStore_6F_EventScript_TradeCompleted
	ingame_trade INGAME_TRADE_MACHOP, GoldenrodCity_DepartmentStore_6F_Text_YouWillTradeWontYou, GoldenrodCity_DepartmentStore_6F_EventScript_DeclineTrade, GoldenrodCity_DepartmentStore_6F_EventScript_NotRequestedMon, GoldenrodCity_DepartmentStore_6F_Text_MonYouTakeCare
	setflag FLAG_GOLDENROD_NPC_TRADE_COMPLETED
	release
	end

GoldenrodCity_DepartmentStore_6F_EventScript_DeclineTrade::
	msgbox GoldenrodCity_DepartmentStore_6F_Text_YouWontTradeMe, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_DepartmentStore_6F_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox GoldenrodCity_DepartmentStore_6F_Text_ThisIsntAMon, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_DepartmentStore_6F_EventScript_TradeCompleted::
	msgbox GoldenrodCity_DepartmentStore_6F_Text_After, MSGBOX_DEFAULT
	release
	end

GoldenrodCity_DepartmentStore_6F_Text_YouWillTradeWontYou:
	.string "Ich sammle Pokémon!\n"
	.string "Hast du ein {STR_VAR_1}?\p"
	.string "Willst du es gegen mein\n"
	.string "{STR_VAR_2} tauschen?$"

GoldenrodCity_DepartmentStore_6F_Text_MonYouTakeCare:
	.string "Juhu! Ich habe ein {STR_VAR_1}!\p"
	.string "{STR_VAR_2}, pass gut auf dich auf!$"

GoldenrodCity_DepartmentStore_6F_Text_ThisIsntAMon:
	.string "Ähm, nein, ich glaube nicht.\n"
	.string "Das ist kein {STR_VAR_1}.$"

GoldenrodCity_DepartmentStore_6F_Text_YouWontTradeMe:
	.string "Du willst nicht tauschen? Ach…$"

GoldenrodCity_DepartmentStore_6F_Text_After:
	.string "Hi, wie geht es meinem alten Machollo?$"


GoldenrodDeptStore6_EventScript_Lass::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_6FLass, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore6_EventScript_Nerd::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_6FSuperNerd, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore6_EventScript_Sign::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_6FDirectory, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore_Text_6FLass:
	.string "Hörst du den GLÜCKSKANAL?\p"
	.string "Möchtest du gewinnen,\n"
	.string "tausche Pokémon mit so vielen\p"
	.string "Leuten wie möglich,\n"
	.string "um verschiedene ID-Nummern zu\l"
	.string "erhalten.$"

GoldenrodDeptStore_Text_6FSuperNerd:
	.string "Wenn du müde bist,\n"
	.string "dann hol dir ein Getränk aus dem\l"
	.string "Automaten.\p"
	.string "Auch deine Pokémon werden sie mögen.$"

GoldenrodDeptStore_Text_6FDirectory:
	.string "Mach eine Einkaufspause!\p"
	.string "5S PLATZ DER EWIGEN STILLE$"

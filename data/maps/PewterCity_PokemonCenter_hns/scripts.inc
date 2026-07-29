PewterCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_PokemonCenter_OnTransition
	.byte 0

PewterCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_PEWTER_CITY_HNS
	end

PewterCity_PokemonCenter_EventScript_Teacher::
	msgbox PewterCity_PokemonCenter1F_Text_Teacher, MSGBOX_NPC
	end

PewterCity_PokemonCenter_EventScript_BugCatcher::
	msgbox PewterCity_PokemonCenter1F_Text_BugCatcher, MSGBOX_NPC
	end

PewterCity_PokemonCenter1F_Text_Teacher:
	.string "Und jetzt höre dir das an! Die Arena\n"
	.string "auf der Zinnoberinsel ist futsch! Mann,\l"
	.string "ich bin glatt aus den Latschen gekippt!\p"
	.string "…Was willst du? Siehst du nicht, dass\n"
	.string "ich hier gerade telefoniere?$"

PewterCity_PokemonCenter1F_Text_Jigglypuff:
	.string "Pummeluff: Pummel… uff!$"

PewterCity_PokemonCenter_EventScript_Mondo::
	lock
	faceplayer
	goto_if_set FLAG_PEWTER_NPC_TRADE_COMPLETED, PewterCity_PokemonCenter_EventScript_TradeCompleted
	ingame_trade INGAME_TRADE_HAUNTER, PewterCity_PokemonCenter_Text_WantToTrade, PewterCity_PokemonCenter_EventScript_DeclineTrade, PewterCity_PokemonCenter_EventScript_NotRequestedMon, PewterCity_PokemonCenter_Text_TakeCare
	setflag FLAG_PEWTER_NPC_TRADE_COMPLETED
	release
	end

PewterCity_PokemonCenter_EventScript_DeclineTrade::
	msgbox PewterCity_PokemonCenter_Text_DeclineTrade, MSGBOX_DEFAULT
	release
	end

PewterCity_PokemonCenter_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox PewterCity_PokemonCenter_Text_NotRequestedMon, MSGBOX_DEFAULT
	release
	end

PewterCity_PokemonCenter_EventScript_TradeCompleted::
	msgbox PewterCity_PokemonCenter_Text_TradeCompleted, MSGBOX_DEFAULT
	release
	end

PewterCity_PokemonCenter_Text_WantToTrade:
	.string "Ich suche auf meinen Reisen\n"
	.string "ein gutes {STR_VAR_1}.\p"
	.string "Möchtest du tauschen für ein\n"
	.string "{STR_VAR_2}?$"

PewterCity_PokemonCenter_Text_TakeCare:
	.string "Vielen Dank!\n"
	.string "Kümmere dich gut um {STR_VAR_1}!$"

PewterCity_PokemonCenter_Text_DeclineTrade:
	.string "Nein? Sehr schade…\n"
	.string "Ich glaube du würdest es mögen.$"

PewterCity_PokemonCenter_Text_NotRequestedMon:
	.string "Hmm, das ist kein {STR_VAR_1}.\n"
	.string "Das suche ich nicht.$"

PewterCity_PokemonCenter_Text_TradeCompleted:
	.string "Wie geht es Apollo?\n"
	.string "Er ist echt schlau!$"

PewterCity_PokemonCenter1F_Text_BugCatcher:
	.string "Die meisten Pokémon werden schläfrig,\n"
	.string "wenn Pummeluff anfängt zu singen.\p"
	.string "Es gibt viele Attacken, die wie für\n"
	.string "diesen Augenblick gemacht sind!$"

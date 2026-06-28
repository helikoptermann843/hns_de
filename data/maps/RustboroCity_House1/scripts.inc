RustboroCity_House1_MapScripts::
	.byte 0

RustboroCity_House1_EventScript_Trader::
	lock
	faceplayer
	goto_if_set FLAG_RUSTBORO_NPC_TRADE_COMPLETED, RustboroCity_House1_EventScript_TradeCompleted
	ingame_trade INGAME_TRADE_SEEDOT, RustboroCity_House1_Text_IllTradeIfYouWant, RustboroCity_House1_EventScript_DeclineTrade, RustboroCity_House1_EventScript_NotRequestedMon, RustboroCity_House1_Text_PleaseBeGoodToMyPokemon
	setflag FLAG_RUSTBORO_NPC_TRADE_COMPLETED
	release
	end

RustboroCity_House1_EventScript_DeclineTrade::
	msgbox RustboroCity_House1_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
	release
	end

RustboroCity_House1_EventScript_NotRequestedMon::
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox RustboroCity_House1_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
	release
	end

RustboroCity_House1_EventScript_TradeCompleted::
	msgbox RustboroCity_House1_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
	release
	end

RustboroCity_House1_EventScript_Hiker::
	msgbox RustboroCity_House1_Text_AllSortsOfPlaces, MSGBOX_NPC
	end

RustboroCity_House1_Text_IllTradeIfYouWant:
	.string "Wie? Mein POKéMON ist niedlich?\n"
	.string "Sicher, das weiß ich doch!\p"
	.string "Aber ich weiß auch, dass ich es gerne\n"
	.string "mit dir tauschen würde.\p"
	.string "Ich gebe dir mein {STR_VAR_2}, wenn du\n"
	.string "mir ein {STR_VAR_1} gibst.\l"
	.string "Einverstanden?$"

RustboroCity_House1_Text_PleaseBeGoodToMyPokemon:
	.string "Ähähähähä… Sei nett zu meinem POKéMON.$"

RustboroCity_House1_Text_DoesntLookLikeMonToMe:
	.string "Wie? Das sieht für mich aber nicht wie\n"
	.string "ein {STR_VAR_1} aus!$"

RustboroCity_House1_Text_YouDontWantToThatsOkay:
	.string "Du willst nicht tauschen? Kein\l"
	.string "Problem.\n"
	.string "Aber mein POKéMON ist wirklich\p"
	.string "niedlich,\l"
	.string "das weißt du schon?!?$"

RustboroCity_House1_Text_AnyPokemonCanBeCute:
	.string "Jedes POKéMON ist niedlich, wenn es\n"
	.string "mit Freundlichkeit und Fürsorge\l"
	.string "aufgezogen wird.$"

RustboroCity_House1_Text_AllSortsOfPlaces:
	.string "An allen Orten gibt es alle Sorten von\n"
	.string "POKéMON und Menschen.\p"
	.string "Ich finde das faszinierend, daher\n"
	.string "besuche ich alle möglichen Orte.$"


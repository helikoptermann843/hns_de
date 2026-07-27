CeladonCity_DepartmentStore_3F_Frlg_MapScripts::
	.byte 0

CeladonCity_DepartmentStore_3F_EventScript_CounterTutor::
	goto EventScript_CounterTutor
	end

CeladonCity_DepartmentStore_3F_EventScript_GBAKid1::
	msgbox CeladonCity_DepartmentStore_3F_Text_OTStandsForOriginalTrainer, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_3F_EventScript_GBAKid2::
	msgbox CeladonCity_DepartmentStore_3F_Text_BuddyTradingKangaskhanForHaunter, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_3F_EventScript_GBAKid3::
	msgbox CeladonCity_DepartmentStore_3F_Text_HaunterEvolvedOnTrade, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_3F_EventScript_LittleGirl::
	msgbox CeladonCity_DepartmentStore_3F_Text_CanIdentifyTradeMonsByID, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_3F_EventScript_SuperNES::
	msgbox CeladonCity_DepartmentStore_3F_Text_ItsSuperNES, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_3F_EventScript_TV1::
	msgbox CeladonCity_DepartmentStore_3F_Text_AnRPG, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_3F_EventScript_TV2::
	msgbox CeladonCity_DepartmentStore_3F_Text_SportsGame, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_3F_EventScript_TV3::
	msgbox CeladonCity_DepartmentStore_3F_Text_PuzzleGame, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_3F_EventScript_TV4::
	msgbox CeladonCity_DepartmentStore_3F_Text_FightingGame, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_3F_EventScript_FloorSign::
	msgbox CeladonCity_DepartmentStore_3F_Text_TVGameShop, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_3F_EventScript_Poster::
	msgbox CeladonCity_DepartmentStore_3F_Text_RedGreenBothArePokemon, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_3F_Text_OTStandsForOriginalTrainer::
	.string "Jedes gefangene POKéMON erhält\n"
	.string "eine ID-Nr. und wird mit dem Namen\l"
	.string "des ORIGINALTRAINERs, OT,\l"
	.string "registriert. \p"
	.string "Der OT ist der TRAINER, der das\n"
	.string "POKéMON gefangen hat!$"

CeladonCity_DepartmentStore_3F_Text_BuddyTradingKangaskhanForHaunter::
	.string "Cool!\p"
	.string "Mein Kumpel tauscht sein KANGAMA\n"
	.string "gegen mein GEOROK!$"

CeladonCity_DepartmentStore_3F_Text_HaunterEvolvedOnTrade::
	.string "Komm, GEOROK!\p"
	.string "Ich bin GEOROK-Sammler!\p"
	.string "Nanu?\p"
	.string "GEOROK hat sich zu einem anderen\n"
	.string "POKéMON entwickelt!$"

CeladonCity_DepartmentStore_3F_Text_CanIdentifyTradeMonsByID::
	.string "Ach, wäre mein Freund doch auch\n"
	.string "so toll wie du!$"

CeladonCity_DepartmentStore_3F_Text_ItsSuperNES::
	.string "Das ist ein SUPER NINTENDO!$"

CeladonCity_DepartmentStore_3F_Text_AnRPG::
	.string "Mist!\n"
	.string "Mich hat ein ZUBAT gebissen!$"

CeladonCity_DepartmentStore_3F_Text_SportsGame::
	.string "Ein Rennspiel!\n"
	.string "Das würde meinem Vater gefallen!$"

CeladonCity_DepartmentStore_3F_Text_PuzzleGame::
	.string "Der Pfad dort unten ist eine\n"
	.string "Abkürzung nach AZURIA CITY.$"

CeladonCity_DepartmentStore_3F_Text_FightingGame::
	.string "Ein Kampfsport-Spiel!\n"
	.string "Aufregend!$"

CeladonCity_DepartmentStore_3F_Text_TVGameShop::
	.string "2S: VIDEOSPIELE-SHOP$"

CeladonCity_DepartmentStore_3F_Text_RedGreenBothArePokemon::
	.string "Ist mein POKéMON zu schwach,\n"
	.string "oder bin ich etwa nicht gut genug?$"

Text_CounterTeach::
	.string "Hallo! Ich habe kürzlich POKéMON\n"
	.string "durchgespielt!\p"
	.string "Du bist noch nicht soweit?\n"
	.string "Vielleicht hilft dir das hier!\p"
	.string "Ich denke an die Attacke KONTER.\p"
	.string "Nicht, dass ich mich darauf\n"
	.string "verlassen würde!$"

Text_CounterDeclined::
	.string "Du hast kein Interesse? Komme\n"
	.string "wieder, wenn du deine Meinung\l"
	.string "geändert hast!$"

Text_CounterWhichMon::
	.string "Welches POKéMON soll sie lernen?$"

Text_CounterTaught::
	.string "Setzt du die KONTER-Attacke ein,\n"
	.string "die ich einem deiner POKéMON\l"
	.string "beigebracht habe?$"

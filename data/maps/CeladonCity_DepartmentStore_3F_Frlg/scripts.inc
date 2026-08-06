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
	.string "Jedes gefangene Pokémon erhält\n"
	.string "eine ID-Nr. und wird mit dem Namen\l"
	.string "des Originaltrainers, OT,\l"
	.string "registriert. \p"
	.string "Der OT ist der Trainer, der das\n"
	.string "Pokémon gefangen hat!$"

CeladonCity_DepartmentStore_3F_Text_BuddyTradingKangaskhanForHaunter::
	.string "Cool!\p"
	.string "Mein Kumpel tauscht sein Kangama\n"
	.string "gegen mein Georok!$"

CeladonCity_DepartmentStore_3F_Text_HaunterEvolvedOnTrade::
	.string "Komm, Georok!\p"
	.string "Ich bin Georok-Sammler!\p"
	.string "Nanu?\p"
	.string "Georok hat sich zu einem anderen\n"
	.string "Pokémon entwickelt!$"

CeladonCity_DepartmentStore_3F_Text_CanIdentifyTradeMonsByID::
	.string "Anhand ihrer ID-Nr. kannst du\n"
	.string "Pokémon, die du bei einem Tausch\l"
	.string "erhalten hast, identifizieren!$"

CeladonCity_DepartmentStore_3F_Text_ItsSuperNES::
	.string "Das ist ein Super Nintendo!$"

CeladonCity_DepartmentStore_3F_Text_AnRPG::
	.string "Ein Rollenspiel!\n"
	.string "Ich habe keine Zeit! Schade!$"

CeladonCity_DepartmentStore_3F_Text_SportsGame::
	.string "Ein Rennspiel!\n"
	.string "Das würde meinem Vater gefallen!$"

CeladonCity_DepartmentStore_3F_Text_PuzzleGame::
	.string "Ein Puzzle-Spiel!\n"
	.string "Es ist bestimmt fesselnd!$"

CeladonCity_DepartmentStore_3F_Text_FightingGame::
	.string "Ein Kampfsport-Spiel!\n"
	.string "Aufregend!$"

CeladonCity_DepartmentStore_3F_Text_TVGameShop::
	.string "2S: Videospiele-Shop$"

CeladonCity_DepartmentStore_3F_Text_RedGreenBothArePokemon::
	.string "Die Rote und die Grüne Pokémon-\n"
	.string "Edition! Cool!$"

Text_CounterTeach::
	.string "Hallo! Ich habe kürzlich Pokémon\n"
	.string "durchgespielt!\p"
	.string "Du bist noch nicht soweit?\n"
	.string "Vielleicht hilft dir das hier!\p"
	.string "Ich denke an die Attacke Konter.\p"
	.string "Nicht, dass ich mich darauf\n"
	.string "verlassen würde!$"

Text_CounterDeclined::
	.string "Du hast kein Interesse? Komme\n"
	.string "wieder, wenn du deine Meinung\l"
	.string "geändert hast!$"

Text_CounterWhichMon::
	.string "Welches Pokémon soll sie lernen?$"

Text_CounterTaught::
	.string "Setzt du die Konter-Attacke ein,\n"
	.string "die ich einem deiner Pokémon\l"
	.string "beigebracht habe?$"

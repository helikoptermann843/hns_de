GoldenrodCity_hns_MapScripts::
	.byte 0

GoldenrodCity_EventScript_Trigger:: @flagheap
	call_if_unset FLAG_SHOWN_ELM_TOGEPI, GoldenrodCity_Elm_Togepi_Call
	setflag FLAG_VISITED_GOLDENROD_CITY
	setflag FLAG_HIDE_GOLDENROD_ROCKETS
	setflag FLAG_HIDE_GOLDENROD_BILL
	setflag FLAG_HIDE_GOLDENROD_UNDERGROUND_KIMONO
	setflag FLAG_HIDE_GOLDENROD_UNDERGROUND_SILVER
	setflag FLAG_HIDE_ROCKET_GOLDENROD_RADIOTOWER_1
	setflag FLAG_HIDE_GOLDENROD_RADIOTOWER_PETREL
	setflag FLAG_HIDE_GOLDENROD_RADIOTOWER_DIRECTOR_2
	
	clearflag FLAG_HIDE_GOLDENROD_BEAUTY
	clearflag FLAG_HIDE_GOLDENROD_ROCKET_SCOUT
	clearflag FLAG_HIDE_GOLDENROD_NPCS
	clearflag FLAG_GOT_RETURN
	clearflag FLAG_GOT_FRUSTRATION
	clearflag FLAG_RECEIVED_BIKE
	clearflag FLAG_RECEIVED_SQUIRTBOTTLE
	clearflag FLAG_GOT_EEVEE
	clearflag FLAG_SYS_PC_BILL
	clearflag FLAG_RETURNED_MACHINE_PART
	clearflag FLAG_UNLOCKED_GOLDENROD_UNDERGROUND_DOOR
	clearflag FLAG_GOLDENROD_MACHOKE_1
	clearflag FLAG_GOLDENROD_MACHOKE_2
	clearflag FLAG_GOLDENROD_MACHOKE_3
	clearflag FLAG_COMPLETED_SWITCHES
	clearflag FLAG_ENABLE_RADIO
	clearflag FLAG_KANTO_RADIO_GOT
	clearflag FLAG_GOLDENROD_NPC_TRADE_COMPLETED
	clearflag FLAG_GOT_SUNNY_DAY
	clearflag FLAG_HIDE_RADIOTOWER_GATE
	clearflag FLAG_HIDE_GOLDENROD_RADIOTOWER_DIRECTOR
	clearflag FLAG_GOT_MARY_BRIGHT_POWDER
	clearflag FLAG_GOT_QUICK_CLAW
	clearflag FLAG_GOT_MAGNET

	setvar VAR_BUG_CONTEST_STATE, 0
	setvar VAR_KENYA, 0
	setvar VAR_LUGIA_OR_HOOH, 0
	setvar VAR_TRAIN, 0
	setvar VAR_ELEVATOR, 0
	setvar VAR_GOLDENROD_CITY_STATE, 1
	release
	end

GoldenrodCity_Trigger_Music::
	goto_if_lt VAR_GOLDENROD_CITY_STATE, 6, GoldenrodCity_Trigger_MusicNotYet
	goto_if_ge VAR_GOLDENROD_CITY_STATE, 11, GoldenrodCity_Trigger_MusicNotYet
	fadenewbgm MUS_HG_ROCKET_TAKEOVER
	special ShowMapNamePopup
	setvar VAR_TEMP_0, 1 
	end

GoldenrodCity_Trigger_Music2::
	goto_if_lt VAR_GOLDENROD_CITY_STATE, 6, GoldenrodCity_Trigger_MusicNotYet
	goto_if_ge VAR_GOLDENROD_CITY_STATE, 11, GoldenrodCity_Trigger_MusicNotYet
	fadedefaultbgm
	special ShowMapNamePopup
	setvar VAR_TEMP_0, 1
	end

GoldenrodCity_Trigger_MusicNotYet::
	special ShowMapNamePopup
	setvar VAR_TEMP_0, 1
	end

GoldenrodCity_Elm_Togepi_Call::
	lock
	setspeaker GoldenrodCity_Text_ElmName
	pokenavcall GoldenrodCity_Text_ElmCall
	waitmessage
	delay 30
	release
	return

GoldenrodCity_EventScript_PokefanM::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_PokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_Youngster::
	msgbox GoldenrodCity_Text_Youngster1, MSGBOX_NPC
	end

GoldenrodCity_EventScript_Youngster2::
	msgbox GoldenrodCity_Text_Youngster2, MSGBOX_NPC
	end

GoldenrodCity_EventScript_CooltrainerF::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_GOLDENROD_ROCKET_SCOUT, GoldenrodCity_EventScript_CooltrainerFCleared
	msgbox GoldenrodCity_Text_CooltrainerF1, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_CooltrainerFCleared::
	msgbox GoldenrodCity_Text_CooltrainerF1_Cleared, MSGBOX_NPC
	end

GoldenrodCity_EventScript_Lass::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Lass, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_Gramps::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Gramps, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_NameRaterSign::
	msgbox GoldenrodCity_Text_NameRaterSign, MSGBOX_SIGN
	end

GoldenrodCity_EventScript_RocketScout::
	lock
	msgbox GoldenrodCity_Text_RocketScout1, MSGBOX_DEFAULT
	closemessage
	PLAYSE SE_PIN
	applymovement LOCALID_GOLDENROD_ROCKET_SCOUT, Common_Movement_ExclamationMark
	delay 20
	faceplayer
	msgbox GoldenrodCity_Text_RocketScout2, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_GOLDENROD_ROCKET_SCOUT, DIR_NORTH
	release
	end

GoldenrodCity_EventScript_Rocket1::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Rocket1, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_Rocket2::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Rocket2, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_Rocket3::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Rocket3, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_Rocket4::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Rocket4, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_Rocket5::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Rocket5, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_Rocket6::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Rocket6, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_Woman::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Woman, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_Hiker::
	lock
	faceplayer
	goto_if_set FLAG_DAY_POKEMON, GoldenrodCity_EventScript_Hiker2
	msgbox GoldenrodCity_Text_HikerDay, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_Hiker2::
	msgbox GoldenrodCity_Text_HikerNight, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_EventScript_Snubbull::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SNUBBULL, CRY_MODE_NORMAL
	msgbox GoldenrodCity_Text_Snubbull, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GoldenrodCity_EventScript_Mime::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MR_MIME, CRY_MODE_NORMAL
	msgbox GoldenrodCity_Text_MrMime, MSGBOX_DEFAULT
	waitmoncry
	release
	end

GoldenrodCity_EventScript_SignUnderground::
	lock
	msgbox GoldenrodCity_Text_UndergroundSouthSign, MSGBOX_SIGN
	closemessage
	release
	end
GoldenrodCity_EventScript_SignDept::
	lock
	msgbox GoldenrodCity_Text_DeptStoreSign, MSGBOX_SIGN
	closemessage
	release
	end
GoldenrodCity_EventScript_SignBike::
	lock
	msgbox GoldenrodCity_Text_BikeShopSign, MSGBOX_SIGN
	closemessage
	release
	end
GoldenrodCity_EventScript_SignTrain::
	lock
	msgbox GoldenrodCity_Text_StationSign, MSGBOX_SIGN
	closemessage
	release
	end
GoldenrodCity_EventScript_SignGym::
	lock
	msgbox GoldenrodCity_Text_GymSign, MSGBOX_SIGN
	closemessage
	release
	end
GoldenrodCity_EventScript_SignFlower::
	lock
	msgbox GoldenrodCity_Text_FlowerShopSign, MSGBOX_SIGN
	closemessage
	release
	end
GoldenrodCity_EventScript_SignRadio::
	lock
	msgbox GoldenrodCity_Text_RadioTowerSign, MSGBOX_SIGN
	closemessage
	release
	end
GoldenrodCity_EventScript_SignGameCorner::
	lock
	msgbox GoldenrodCity_Text_GameCornerSign, MSGBOX_SIGN
	closemessage
	release
	end

GoldenrodCity_EventScript_Beauty::
	lock
	faceplayer
	msgbox GoldenrodCity_Text_Beauty, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_Text_Beauty:
	.string "Das ist die DUKATIA Arena!\p"
	.string "Unsere Leiterin Bianka ist gerade\n"
	.string "nicht da. Sie könnte im Radioturm\l"
	.string "sein.$"

GoldenrodCity_Text_Woman:
	.string "Ich habe früher in Bianka's Arena\n"
	.string "trainiert, aber ihr ständiges weinen\l"
	.string "macht mir Kopfschmerzen.$"

GoldenrodCity_Text_HikerDay:
	.string "Als ich in die SPIELHALLE ging,\n"
	.string "war es Nacht… Wie lange war ich\l"
	.string "dort drin?!$"

GoldenrodCity_Text_HikerNight:
	.string "Als ich in die SPIELHALLE ging,\n"
	.string "war es Tag… Wie lange war ich\l"
	.string "dort drin?!$"

GoldenrodCity_Text_Snubbull:
	.string "Snubbull: SNUUUBUUUULL!$"

GoldenrodCity_Text_MrMime:
	.string "............................$"

GoldenrodCity_Text_ElmName:
	.string "PROF.ELM$"

GoldenrodCity_Text_ElmCall:
	.string "LIND: Hallo, {PLAYER}?\n"
	.string "Ist das Ei schon geschlüpft?\p"
	.string "Falls das passier, vergiss nicht\n"
	.string "es zum Labor zu bringen.\p"
	.string "Ich muss es untersuchen!$"

GoldenrodCity_Text_PokefanM:
	.string "Der neue RADIOTURM wurde erbaut,\n"
	.string "um den alten zu ersetzen.$"

GoldenrodCity_Text_Youngster1:
	.string "Es soll einen neuen FAHRRADLADEN\n"
	.string "geben, aber ich kann ihn\l"
	.string "nirgends finden.$"

GoldenrodCity_Text_CooltrainerF1:
	.string "Hat sich dieser Mann in Schwarz\n"
	.string "als Mitglied von TEAM ROCKET\l"
	.string "verkleidet? Wie dämlich!$"

GoldenrodCity_Text_CooltrainerF1_Cleared:
	.string "Hat sich dieser Mann in Schwarz\p"
	.string "als Mitglied von\n"
	.string "TEAM ROCKET verkleidet? Wie dämlich!$"

GoldenrodCity_Text_CooltrainerF2:
	.string "Der RADIOTURM in\n"
	.string "DUKATIA CITY ist ein Wahrzeichen.\p"
	.string "Zurzeit läuft ge-\n"
	.string "rade eine Werbekampagne.\p"
	.string "Sie können deinen\n"
	.string "COM modifizieren, so dass er auch als\n"
	.string "Radio\p"
	.string "verwendet werden kann.$"

GoldenrodCity_Text_CooltrainerF2_GotCard:
	.string "Oh, dein PokémonCom ist auch ein\n"
	.string "Radio!$"

GoldenrodCity_Text_Youngster2:
	.string "E-he-he-he…\p"
	.string "Ich habe Ärger bekommen,\n"
	.string "weil ich im Keller des\l"
	.string "KAUFHAUSes gespielt habe.$"

GoldenrodCity_Text_Lass:
	.string "Der Mann in diesem Haus\n"
	.string "bewertet deine Pokémon-Namen.\p"
	.string "Er kann deine Pokémon auch umbenennen.$"

GoldenrodCity_Text_Gramps:
	.string "Wow! Das ist eine große Stadt. Ich\p"
	.string "finde mich noch gar nicht zurecht.$"

GoldenrodCity_Text_RocketScout1:
	.string "Das ist also der RADIOTURM…$"

GoldenrodCity_Text_RocketScout2:
	.string "Was willst du, du Nervensäge? Hau ab!$"

GoldenrodCity_Text_Rocket1:
	.string "Aus dem Weg! Verschwinde!$"

GoldenrodCity_Text_Rocket2:
	.string "Den RADIOTURM einnehmen…\p"
	.string "Was? Das geht dich nichts an!$"

GoldenrodCity_Text_Rocket3:
	.string "Pokémon? Sie sind nicht mehr als\p"
	.string "Werkzeuge zum Geldscheffeln!$"

GoldenrodCity_Text_Rocket4:
	.string "Bald wird sich un-\n"
	.string "ser Traum erfüllen…\p"
	.string "So lange hat es schon gedauert…$"

GoldenrodCity_Text_Rocket5:
	.string "Hey, Grünschnabel!\n"
	.string "Du hast hier nichts zu suchen!$"

GoldenrodCity_Text_Rocket6:
	.string "Komm und werde\n"
	.string "Zeuge der Macht von TEAM ROCKET!$"

GoldenrodCity_Text_StationSign:
	.string "DUKATIA CITY BAHNHOF$"

GoldenrodCity_Text_RadioTowerSign:
	.string "DUKATIA CITY RADIOTURM$"

GoldenrodCity_Text_DeptStoreSign:
	.string "Große Auswahl an Pokémon-Artikeln!\p"
	.string "DUKATIA CITY KAUFHAUS$"

GoldenrodCity_Text_GymSign:
	.string "DUKATIA CITY\p"
	.string "Die festliche\n"
	.string "Stadt mit opulentem Charme$"

GoldenrodCity_Text_CitySign:
	.string "DUKATIA CITY\p"
	.string "Die festliche\n"
	.string "Stadt mit opulentem Charme$"

GoldenrodCity_Text_BikeShopSign:
	.string "Die Welt ist ein Radweg! FAHRRADLADEN$"

GoldenrodCity_Text_GameCornerSign:
	.string "Dein Spielplatz!\p"
	.string "DUKATIA CITY SPIELHALLE$"

GoldenrodCity_Text_NameRaterSign:
	.string "NAMEN-BEWERTER\p"
	.string "Möchtest du deine\n"
	.string "Spitznamen bewerten lassen?$"

GoldenrodCity_Text_UndergroundNorthSign:
	.string "UNTERGRUNDEINGANG$"

GoldenrodCity_Text_UndergroundSouthSign:
	.string "UNTERGRUNDEINGANG$"


GoldenrodCity_Text_FlowerShopSign:
	.string "Blühender BLUMENLADEN$"

GoldenrodCity_Text_MoveTutorAsk:
	.string "A-aber…$"

GoldenrodCity_Text_MoveTutorCost:
	.string "A-aber…$"

GoldenrodCity_Text_MoveTutorDecline:
	.string "Aww… But these moves are great!$"

GoldenrodCity_Text_MoveTutorWhich:
	.string "A-aber…$"

GoldenrodCity_Text_MoveTutorNoCash:
	.string "Hm, Mist. Ich muss\n"
	.string "noch Geld von zu Hause holen…$"

GoldenrodCity_Text_MoveTutorUnderstand:
	.string "A-aber…$"

GoldenrodCity_Text_MoveTutorFarewell:
	.string "Wahahah! Mach's gut, Wicht!$"

GoldenrodCity_Text_MoveTutorBut:
	.string "A-aber…$"

GoldenrodCity_Text_MoveTutorNotEnoughCoins:
	.string "…Du hast nicht genügend Münzen dabei…$"

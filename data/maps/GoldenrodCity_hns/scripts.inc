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
	.string "Das ist die Dukatia Arena!\p"
	.string "Unsere Leiterin Bianka ist gerade\n"
	.string "nicht da. Sie könnte im Radioturm\l"
	.string "sein.$"

GoldenrodCity_Text_Woman:
	.string "Ich habe früher in Biankas Arena\n"
	.string "trainiert, aber ihr ständiges weinen\l"
	.string "macht mir Kopfschmerzen.$"

GoldenrodCity_Text_HikerDay:
	.string "Als ich in die Spielhalle ging,\n"
	.string "war es Nacht… Wie lange war ich\l"
	.string "dort drin?!$"

GoldenrodCity_Text_HikerNight:
	.string "Als ich in die Spielhalle ging,\n"
	.string "war es Tag… Wie lange war ich\l"
	.string "dort drin?!$"

GoldenrodCity_Text_Snubbull:
	.string "Snubbull: Snuuubuuuull!$"

GoldenrodCity_Text_MrMime:
	.string "............................$"

GoldenrodCity_Text_ElmName:
	.string "Lind$"

GoldenrodCity_Text_ElmCall:
	.string "Lind: Hallo, {PLAYER}?\n"
	.string "Ist das Ei schon geschlüpft?\p"
	.string "Falls das passiert, vergiss nicht,\n"
	.string "es zum Labor zu bringen.\p"
	.string "Ich muss es untersuchen!$"

GoldenrodCity_Text_PokefanM:
	.string "Dieser hochmoderne Radiosender wurde\n"
	.string "aus einem alten einsturzgefährdeten\l"
	.string "Turm gebaut, der hier einmal stand.$"

GoldenrodCity_Text_Youngster1:
	.string "Hier soll es irgendwo einen neuen\n"
	.string "Fahrradladen geben. Aber wo bloß?\p"
	.string "Ich finde ihn einfach nicht…$"

GoldenrodCity_Text_CooltrainerF1:
	.string "Hat sich dieser Mann in Schwarz etwa\n"
	.string "als Mitglied von Team Rocket verkleidet?\l"
	.string "Was ist das denn für ein Widerling?$"

GoldenrodCity_Text_CooltrainerF1_Cleared:
	.string "Dann gehörte dieser Mann in Schwarz\n"
	.string "also wirklich zu Team Rocket?\l"
	.string "Ich kann es immer noch nicht glauben!$"

GoldenrodCity_Text_CooltrainerF2:
	.string "Der Radioturm in\n"
	.string "Dukatia City ist ein Wahrzeichen.\p"
	.string "Zurzeit läuft ge-\n"
	.string "rade eine Werbekampagne.\p"
	.string "Sie können deinen\n"
	.string "Com modifizieren, so dass er auch als\n"
	.string "Radio\p"
	.string "verwendet werden kann.$"

GoldenrodCity_Text_CooltrainerF2_GotCard:
	.string "Oh, dein PokémonCom ist auch ein\n"
	.string "Radio!$"

GoldenrodCity_Text_Youngster2:
	.string "E-he-he-he…\p"
	.string "Ich habe Ärger bekommen,\n"
	.string "weil ich im Keller des\l"
	.string "Kaufhauses gespielt habe.$"

GoldenrodCity_Text_Lass:
	.string "Der Mann in diesem Haus\n"
	.string "bewertet deine Pokémon-Namen.\p"
	.string "Er kann deine Pokémon auch umbenennen.$"

GoldenrodCity_Text_Gramps:
	.string "Wow! Das ist eine große Stadt. Ich\p"
	.string "finde mich noch gar nicht zurecht.$"

GoldenrodCity_Text_RocketScout1:
	.string "Das ist also der Radioturm…$"

GoldenrodCity_Text_RocketScout2:
	.string "Was willst du, Nervensäge? Hau ab!$"

GoldenrodCity_Text_Rocket1:
	.string "Aus dem Weg! Verschwinde!$"

GoldenrodCity_Text_Rocket2:
	.string "Wir haben den Radioturm besetzt, um…\p"
	.string "Moment mal! Das geht ein Kind wie dich\n"
	.string "doch gar nichts an!$"

GoldenrodCity_Text_Rocket3:
	.string "Pokémon? Sie sind nicht mehr als\p"
	.string "Werkzeuge zum Geldscheffeln!$"

GoldenrodCity_Text_Rocket4:
	.string "Bald geht unser Traum in Erfüllung…\n"
	.string "Es war ein steiniger Weg bis hierher…$"

GoldenrodCity_Text_Rocket5:
	.string "Ich glaube, ich sehe nicht recht!\n"
	.string "Was hat denn ein Kind hier verloren?\l"
	.string "Los, verzieh dich gefälligst!$"

GoldenrodCity_Text_Rocket6:
	.string "Komm und werde\n"
	.string "Zeuge der Macht von Team Rocket!$"

GoldenrodCity_Text_StationSign:
	.string "Dukatia City Bahnhof$"

GoldenrodCity_Text_RadioTowerSign:
	.string "Dukatia City Radioturm$"

GoldenrodCity_Text_DeptStoreSign:
	.string "Große Auswahl an Pokémon-Artikeln!\p"
	.string "Dukatia City Kaufhaus$"

GoldenrodCity_Text_GymSign:
	.string "Pokémon-Arena von Dukatia City\n"
	.string "Leiterin: Bianka\l"
	.string "Ein Mädchen so scharf wie Sprengstoff!$"

GoldenrodCity_Text_CitySign:
	.string "Dukatia City\p"
	.string "Die festliche\n"
	.string "Stadt mit opulentem Charme$"

GoldenrodCity_Text_BikeShopSign:
	.string "Die Welt ist ein Radweg! Fahrradladen$"

GoldenrodCity_Text_GameCornerSign:
	.string "Dein Spielplatz!\p"
	.string "Dukatia City Spielhalle$"

GoldenrodCity_Text_NameRaterSign:
	.string "Namenbewerter\p"
	.string "Hier erhältst du eine ehrliche\n"
	.string "Einschätzung deiner Spitznamen.$"

GoldenrodCity_Text_UndergroundNorthSign:
	.string "Untergrundeingang$"

GoldenrodCity_Text_UndergroundSouthSign:
	.string "Untergrundeingang$"


GoldenrodCity_Text_FlowerShopSign:
	.string "Blühender Blumenladen$"

GoldenrodCity_Text_MoveTutorAsk:
	.string "A-aber…$"

GoldenrodCity_Text_MoveTutorCost:
	.string "A-aber…$"

GoldenrodCity_Text_MoveTutorDecline:
	.string "Ohhh… Aber diese Attacken sind\n"
	.string "doch richtig gut!$"

GoldenrodCity_Text_MoveTutorWhich:
	.string "A-aber…$"

GoldenrodCity_Text_MoveTutorNoCash:
	.string "Hm, Mist. Ich muss\n"
	.string "noch Geld von zu Hause holen…$"

GoldenrodCity_Text_MoveTutorUnderstand:
	.string "A-aber…$"

GoldenrodCity_Text_MoveTutorFarewell:
	.string "Wahahah! Mach’s gut, Wicht!$"

GoldenrodCity_Text_MoveTutorBut:
	.string "A-aber…$"

GoldenrodCity_Text_MoveTutorNotEnoughCoins:
	.string "…Du hast nicht genügend Münzen dabei…$"

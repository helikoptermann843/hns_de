CeruleanCity_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_EventScript_CityEnter
	.byte 0

CeruleanCity_EventScript_CityEnter::
	setflag FLAG_VISITED_CERULEAN_CITY
	end

CeruleanCity_EventScript_CooltrainerM1::
	goto_if_set FLAG_RETURNED_MACHINE_PART, CeruleanCity_EventScript_CooltrainerMReturnedPart
	msgbox CeruleanCity_Text_CooltrainerM1, MSGBOX_NPC
	end

CeruleanCity_EventScript_CooltrainerMReturnedPart::
	msgbox CeruleanCity_Text_CooltrainerM2, MSGBOX_NPC
	end

CeruleanCity_EventScript_Boy::
	msgbox CeruleanCity_Text_SuperNerd, MSGBOX_NPC
	end

CeruleanCity_EventScript_Guard::
	msgbox CeruleanCity_Text_ThisIsCeruleanCave, MSGBOX_NPC
	end

CeruleanCity_Text_ThisIsCeruleanCave::
    .string "Dies ist die AZURIA-Höhle.\p"
    .string "Unglaublich starke POKéMON\n"
    .string "leben hier.\p"
    .string "Es braucht einen wirklich\n"
    .string "unglaublichen Trainer,\l"
    .string "um einlass zu erhalten.\p"
    .string "Werde zuerst KANTO POKéMON-\n"
    .string "LIGA CHAMPION.\p"
    .string "Und du müsstest eine große\n"
    .string "Tat vollbracht haben.$"

CeruleanCity_Text_CooltrainerM1:
	.string "KANTOs Kraftwerk?\p"
	.string "Es liegt am Ende von ROUTE 9, der\n"
	.string "Straße, die hier nach Osten führt.\p"
	.string "Ich glaube, dort gab es mal einen\n"
	.string "Unfall oder so etwas.$"

CeruleanCity_Text_CooltrainerM2:
	.string "Du sammelst wirklich jede Art von\n"
	.string "Pokémon?\p"
	.string "Das muss eine große Herausforderung\n"
	.string "sein, klingt aber auch nach Spaß.$"

CeruleanCity_Text_SuperNerd:
	.string "Das KAP im Norden ist ein guter\n"
	.string "Ort für Dates.\p"
	.string "Mädchen mögen das!$"

CeruleanCity_EventScript_Slowbro::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SLOWBRO, CRY_MODE_NORMAL
	msgbox CeruleanCity_Text_Slowbro, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CeruleanCity_Text_Slowbro:
	.string "Lahmus: Raahw?$"

CeruleanCity_EventScript_SlowbroWoman::
	msgbox CeruleanCity_Text_CooltrainerF1, MSGBOX_NPC
	turnobject LOCALID_CERULEAN_CITY_WOMAN, DIR_EAST
	msgbox CeruleanCity_Text_CooltrainerF2, MSGBOX_DEFAULT
	delay 20
	playmoncry SPECIES_SLOWBRO, CRY_MODE_NORMAL
	applymovement2 LOCALID_CERULEAN_CITY_SLOWBRO, Common_Movement_QuestionMark
	turnobject LOCALID_CERULEAN_CITY_SLOWBRO DIR_WEST
	delay 30
	turnobject LOCALID_CERULEAN_CITY_SLOWBRO, DIR_EAST
	delay 30
	turnobject LOCALID_CERULEAN_CITY_SLOWBRO, DIR_SOUTH
	delay 70
	msgbox CeruleanCity_Text_CooltrainerF3, MSGBOX_NPC
	end

CeruleanCity_Text_CooltrainerF1:
	.string "Mein Lahmus und ich sind ein\n"
	.string "super Team!$"

CeruleanCity_Text_CooltrainerF2:
	.string "Lahmus, zeig mir deine Konfusion!$"

CeruleanCity_Text_CooltrainerF3:
	.string "…$"

CeruleanCity_EventScript_Fisher::
	goto_if_eq VAR_CERULEAN_CITY_STATE, 2, CeruleanCity_EventScript_FisherDuringRocket
	msgbox CeruleanCity_Text_Fisher, MSGBOX_NPC
	end

CeruleanCity_EventScript_FisherDuringRocket::
	msgbox CeruleanCity_Text_Fisher_RocketTip, MSGBOX_NPC
	end

CeruleanCity_Text_Fisher:
	.string "Ich bin großer Fan von Misty,\n"
	.string "Arenaleiterin von Azuria City$"

CeruleanCity_Text_Fisher_RocketTip:
	.string "Ich habe diesen seltsamen Typen\n"
	.string "in Richtung des Kap gehen sehen.$"

CeruleanCity_EventScript_Youngster::
	msgbox CeruleanCity_Text_Youngster1, MSGBOX_NPC
	end

CeruleanCity_Text_Youngster1:
	.string "Die Höhle nördlich der Stadt\n"
	.string "soll von unfassbar starken \l"
	.string "Pokémon bewohnt sein.$"

CeruleanCity_Text_Youngster2:
	.string "Ayuh?\p"
	.string "Mein Itemradar schlägt aus…$"

CeruleanCity_EventScript_Sign::
	msgbox CeruleanCity_Text_Sign, MSGBOX_SIGN
	end

CeruleanCity_EventScript_GymSign::
	msgbox CeruleanCity_Text_GymSign, MSGBOX_SIGN
	end

CeruleanCity_EventScript_BikeShopSign::
	msgbox CeruleanCity_Text_BikeShopSign, MSGBOX_SIGN
	end

CeruleanCity_EventScript_PoliceSign::
	msgbox CeruleanCity_Text_PoliceSign, MSGBOX_SIGN
	end

CeruleanCity_EventScript_CapeSign::
	msgbox CeruleanCity_Text_CapeSign, MSGBOX_SIGN
	end

CeruleanCity_Text_Sign:
	.string "Azuria City\p"
	.string "Umgeben von einer Mystischen\n"
	.string "Blauen Aura$"

CeruleanCity_Text_GymSign:
	.string "Azuria City\n"
	.string "Pokémon Arena\l"
	.string "Leiter: Misty\p"
	.string "Die Jungenhafte Meerjungfrau$"

CeruleanCity_Text_BikeShopSign:
	.string "Hier ist eine Nachricht…\p"
	.string "Der Fahrradladen ist jetzt\n"
	.string "in Dukatia City in JOHTO…$"

CeruleanCity_Text_PoliceSign:
	.string "Hier ist eine Nachricht…\p"
	.string "Stoppt die Kriminalität und\n"
	.string "macht aus dieser Stadt einen Ort,\l"
	.string "an dem man sicher ist und gerne lebt!\p"
	.string "ORDNUNGSAMT von Azuria City$"

CeruleanCity_Text_CapeSign:
	.string "KAP bei AZURIA CITY\n"
	.string "voraus$"

CeruleanCity_Text_LockedDoor:
	.string "Abgeschlossen…$"


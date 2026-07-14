CeladonCity_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_EventScript_CityEnter
	.byte 0

CeladonCity_EventScript_CityEnter::
	setflag FLAG_VISITED_CELADON_CITY
	end

CeladonCity_EventScript_Erika::
    lock
    faceplayer
    msgbox CeladonCity_Text_Erika, MSGBOX_DEFAULT
    closemessage
    fadescreenswapbuffers FADE_TO_BLACK
    setflag FLAG_HIDE_FOUNTAIN_ERIKA
    removeobject LOCALID_CELADON_ERIKA
    fadescreenswapbuffers FADE_FROM_BLACK
    clearflag FLAG_HIDE_DOJO_ERIKA
    release
    end

CeladonCity_Text_Erika:
	.string "Oh, {PLAYER}.\n"
	.string "Ist der Brunnen heute nicht Traumhaft?\p"
	.string "wenn du erneut kämpfen willst,\n"
	.string "triff mich im Kampf DOJO.$"

CeladonCity_EventScript_Fatman::
	msgbox CeladonCity_Text_Fisher, MSGBOX_NPC
	end
CeladonCity_EventScript_Poliwrath::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_POLIWRATH, CRY_MODE_NORMAL
	msgbox CeladonCity_Text_Poliwrath, MSGBOX_DEFAULT
	waitmoncry
	release
	end

CeladonCity_EventScript_Teacher1::
	msgbox CeladonCity_Text_Teacher1, MSGBOX_NPC
	end

CeladonCity_EventScript_GrimerGramps::
	msgbox CeladonCity_Text_Gramps1, MSGBOX_NPC
	end

CeladonCity_EventScript_CreepGramps::
	msgbox CeladonCity_Text_Gramps2, MSGBOX_NPC
	end

CeladonCity_EventScript_Youngster::
	msgbox CeladonCity_Text_Youngster1, MSGBOX_NPC
	end

CeladonCity_EventScript_Youngster2::
	msgbox CeladonCity_Text_Youngster2, MSGBOX_NPC
	end

CeladonCity_EventScript_Teacher2::
	msgbox CeladonCity_Text_Teacher2, MSGBOX_NPC
	end

CeladonCity_EventScript_Lass::
	msgbox CeladonCity_Text_Lass, MSGBOX_NPC
	end

CeladonCity_EventScript_Item_Recycle::
    finditem ITEM_TM_RECYCLE
    end

CeladonCity_Text_Fisher:
	.string "Dieses Quappo ist mein Partner.\p"
	.string "Ich frage mich, ob es sich jemals\n"
	.string "in ein Frosch-POKéMON entwickeln wird.$"

CeladonCity_Text_Poliwrath:
	.string "Quappo: Quak!$"

CeladonCity_Text_Teacher1:
	.string "Ich habe wieder an den Spielautomaten\n"
	.string "verloren…\p"
	.string "Wir Mädchen spielen jetzt auch an den\n"
	.string "Slots.\p"
	.string "Du solltest sie auch ausprobieren.$"

CeladonCity_Text_Gramps1:
	.string "Sleima tauchen in letzter Zeit auf.\p"
	.string "Siehst du den Teich vor dem Haus?\n"
	.string "Dort leben jetzt Sleima.\p"
	.string "Woher sie kommen? Das ist ein ernstes\n"
	.string "Problem…$"

CeladonCity_Text_Gramps2:
	.string "Nihihi! Diese Arena ist großartig!\n"
	.string "Nur Mädchen dürfen hier rein!$"

CeladonCity_Text_Youngster1:
	.string "Willst du ein Geheimnis wissen?\p"
	.string "Die PRISMANIA-VILLA hat eine\n"
	.string "versteckte Hintertür.$"

CeladonCity_Text_Youngster2:
	.string "Sie veranstalten einen\n"
	.string "Wettess-Wettbewerb im Restaurant.\p"
	.string "Allein beim Zuschauen fühle ich mich\n"
	.string "vollgefressen…$"

CeladonCity_Text_Teacher2:
	.string "Das PRISMANIA-KAUFHAUS hat die\n"
	.string "größte und beste Auswahl an Waren.\p"
	.string "Wenn du es dort nicht bekommst,\n"
	.string "bekommst du es nirgendwo.\p"
	.string "Puh… Ich klinge wie eine Verkäuferin.$"

CeladonCity_Text_Lass:
	.string "Beim Gehen den Boden anzusehen\n"
	.string "wurde mir schwindelig.$"

CeladonCity_EventScript_CitySign::
	msgbox CeladonCity_Text_Sign, MSGBOX_SIGN
	end

CeladonCity_EventScript_GymSign::
	msgbox CeladonGym_Text_Sign, MSGBOX_SIGN
	end

CeladonCity_EventScript_StoreSign::
	msgbox CeladonCity_Text_DeptStoreSign, MSGBOX_SIGN
	end

CeladonCity_EventScript_MansionSign::
	msgbox CeladonCity_Text_MansionSign, MSGBOX_SIGN
	end

CeladonCity_EventScript_GameCornerSign::
	msgbox CeladonCity_Text_GameCornerSign, MSGBOX_SIGN
	end

CeladonCity_EventScript_TrainerTips::
	msgbox CeladonCity_Text_TrainerTips, MSGBOX_SIGN
	end

CeladonCity_Text_Sign:
	.string "Prismania City\p"
	.string "Die Stadt der Regenbogen-Träume$"

CeladonGym_Text_Sign:
	.string "Prismania City Pokémon Arena Leiter:\n"
	.string "Erika\p"
	.string "Die Prinzessin mit\n"
	.string "Herz für die Natur$"

CeladonCity_Text_DeptStoreSign:
	.string "Im EINKAUFSZENTRUM von\n"
	.string "PRISMANIA CITY Findest du Alles,\l"
	.string "was dein Herz begehrt!$"

CeladonCity_Text_MansionSign:
	.string "PRISMANIA-VILLA$"

CeladonCity_Text_GameCornerSign:
	.string "Der Spielplatz für Jedermann\n"
	.string "SPIELHALLE PRISMANIA$"

CeladonCity_Text_TrainerTips:
	.string "TIPPS FÜR TRAINER\p"
	.string "Der MEGABLOCK schützt Pokémon\n"
	.string "vor Spezialattacken wie z.B.\l"
	.string "Feuer und Wasser.\p"
	.string "Hol dir deine Items im\n"
	.string "EINKAUFSZENTRUM PRISMANIA CITY!$"

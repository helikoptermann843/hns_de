Route9_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route9_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route9_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route9_EventScript_Dean::
	trainerbattle_single TRAINER_DEAN_HNS, Route9_Text_CamperDeanSeen, Route9_Text_CamperDeanBeaten
	msgbox Route9_Text_CamperDeanAfter, MSGBOX_AUTOCLOSE
	end

Route9_EventScript_Heidi::
	trainerbattle_single TRAINER_HEIDI_HNS, Route9_Text_PicnickerHeidiSeen, Route9_Text_PicnickerHeidiBeaten
	msgbox Route9_Text_PicnickerHeidiAfter, MSGBOX_AUTOCLOSE
	end

Route9_EventScript_Edna::
	trainerbattle_single TRAINER_EDNA_HNS, Route9_Text_PicnickerEdnaSeen, Route9_Text_PicnickerEdnaBeaten
	msgbox Route9_Text_PicnickerEdnaAfter, MSGBOX_AUTOCLOSE
	end

Route9_EventScript_Sid::
	trainerbattle_single TRAINER_SID_HNS, Route9_Text_CamperSidSeen, Route9_Text_CamperSidBeaten
	msgbox Route9_Text_CamperSidAfter, MSGBOX_AUTOCLOSE
	end

Route9_EventScript_Tim::
	trainerbattle_single TRAINER_TIM_HNS, Route9_Text_HikerTimSeen, Route9_Text_HikerTimBeaten
	msgbox Route9_Text_HikerTimAfter, MSGBOX_AUTOCLOSE
	end

Route9_EventScript_Sidney::
	trainerbattle_single TRAINER_SIDNEY_HNS, Route9_Text_HikerSidneySeen, Route9_Text_HikerSidneyBeaten
	msgbox Route9_Text_HikerSidneyAfter, MSGBOX_AUTOCLOSE
	end

Route9_EventScript_Sign::
	msgbox Route9_Text_Sign, MSGBOX_SIGN
	end

Route9_EventScript_Item_Flash_Cannon::
    finditem ITEM_TM_FLASH_CANNON
    end

Route9_Text_CamperDeanSeen:
	.string "Ich bin hier, um den\n"
	.string "Felstunnel zu erforschen.$"

Route9_Text_CamperDeanBeaten:
	.string "Boah! Vorsicht!$"

Route9_Text_CamperDeanAfter:
	.string "Mein Pokémon-Team wurde verletzt,\n"
	.string "bevor ich den Felstunnel erreicht habe.\l"
	.string "Jetzt aber schnell ins Pokémon-Center.$"

Route9_Text_PicnickerHeidiSeen:
	.string "Warst du schon mal bei einem Picknick?\n"
	.string "Das macht großen Spaß!$"

Route9_Text_PicnickerHeidiBeaten:
	.string "Jiiieks!$"

Route9_Text_PicnickerHeidiAfter:
	.string "Wir backen viele gute Sachen, die\n"
	.string "wir mit allen teilen.\l"
	.string "Die sind lecker, glaube es ruhig!$"

Route9_Text_CamperSidSeen:
	.string "He, du Lump!\n"
	.string "Wirf deinen Müll nicht hier hin!$"

Route9_Text_CamperSidBeaten:
	.string "Ich wollte dich doch nur\n"
	.string "darauf hinweisen…$"

Route9_Text_CamperSidAfter:
	.string "Entschuldige! Jetzt sehe ich's!\n"
	.string "Das war ja gar nicht dein Müll!$"

Route9_Text_PicnickerEdnaSeen:
	.string "Die Leute sollten ihren Müll nicht\n"
	.string "hier liegen lassen.$"

Route9_Text_PicnickerEdnaBeaten:
	.string "Ach, Mist!\n"
	.string "Verloren.$"

Route9_Text_PicnickerEdnaAfter:
	.string "Energie sparen ist wichtig, aber\n"
	.string "die Natur ist noch viel wichtiger.$"

Route9_Text_HikerTimSeen:
	.string "Sie wird beim MT.SILVER sein,\n"
	.string "wenn sie kommt…\p"
	.string "MT.SILVER ist in JOHTO, richtig?$"

Route9_Text_HikerTimBeaten:
	.string "Ich war zu sehr\n"
	.string "mit Singen beschäftigt…$"

Route9_Text_HikerTimAfter:
	.string "Bei Kämpfen spielt Konzentration\n"
	.string "eine wichtige Rolle.$"

Route9_Text_HikerSidneySeen:
	.string "Ich verrate dir ein Geheimnis.\n"
	.string "Aber zuerst müssen wir kämpfen!$"

Route9_Text_HikerSidneyBeaten:
	.string "Oh, Mist! Ich habe verloren…$"

Route9_Text_HikerSidneyAfter:
	.string "Jenseits dieses Flüssleins\n"
	.string "liegt ein gigantisches Kraftwerk!$"

Route9_Text_Sign:
	.string "ROUTE 9\p"
	.string "AZURIA CITY - FELSTUNNEL$"

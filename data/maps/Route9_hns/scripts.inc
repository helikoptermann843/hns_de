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
	.string "Ich möchte den FELSTUNNEL erforschen.$"

Route9_Text_CamperDeanBeaten:
	.string "Boah! Vorsicht!$"

Route9_Text_CamperDeanAfter:
	.string "Meine Pokémon wurden verletzt,\n"
	.string "noch bevor wir den FELSTUNNEL\l"
	.string "betraten.\p"
	.string "Ich bringe sie besser sofort ins\n"
	.string "POKéMON CENTER.$"

Route9_Text_PicnickerHeidiSeen:
	.string "Warst du schon beim Picknicken?\p"
	.string "Das macht großen Spaß!$"

Route9_Text_PicnickerHeidiBeaten:
	.string "Ohhhh!$"

Route9_Text_PicnickerHeidiAfter:
	.string "Wir backen viele Leckereien\n"
	.string "und teilen sie mit allen.\p"
	.string "Sie sind köstlich!$"

Route9_Text_CamperSidSeen:
	.string "Hey, du Lump!\n"
	.string "Wirf deinen Müll nicht hier hin!$"

Route9_Text_CamperSidBeaten:
	.string "Ich wollte nur klarstellen, dass…$"

Route9_Text_CamperSidAfter:
	.string "Entschuldige. Du hast keinen\n"
	.string "Müll liegen lassen. Mein Fehler.$"

Route9_Text_PicnickerEdnaSeen:
	.string "Die Leute sollten\n"
	.string "ihren Müll nicht hier liegen lassen.$"

Route9_Text_PicnickerEdnaBeaten:
	.string "Ohh… Ich habe verloren…$"

Route9_Text_PicnickerEdnaAfter:
	.string "Energie sparen ist wichtig,\n"
	.string "doch die Umwelt ist noch viel\l"
	.string "wichtiger.$"

Route9_Text_HikerTimSeen:
	.string "Sie wird beim MT.SILVER sein,\n"
	.string "wenn sie kommt…\p"
	.string "MT.SILVER ist in JOHTO, richtig?$"

Route9_Text_HikerTimBeaten:
	.string "Ich war zu sehr\n"
	.string "mit Singen beschäftigt…$"

Route9_Text_HikerTimAfter:
	.string "Kämpfe erfordern volle\n"
	.string "Konzentration.$"

Route9_Text_HikerSidneySeen:
	.string "Ich verrate dir ein Geheimnis.\p"
	.string "Aber zuerst müssen wir kämpfen!$"

Route9_Text_HikerSidneyBeaten:
	.string "Oh, Mist! Ich habe verloren…$"

Route9_Text_HikerSidneyAfter:
	.string "Das Kraftwerk liegt hinter\n"
	.string "einem kleinen Fluss.$"

Route9_Text_Sign:
	.string "ROUTE 9\p"
	.string "AZURIA CITY - FELSTUNNEL$"

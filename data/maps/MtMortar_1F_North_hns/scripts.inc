MtMortar_1F_North_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtMortar_1F_North_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

MtMortar_1F_North_OnTransition: 
	callnative SetTimeBasedEncounters
	end

MtMortar_1F_North_EventScript_Item_MaxRepel::
    finditem ITEM_MAX_REPEL
    end

MtMortar_1F_North_EventScript_Item_EscapeRope::
    finditem ITEM_ESCAPE_ROPE
    end

MtMortar_1F_North_EventScript_Item_MaxPotion::
    finditem ITEM_MAX_POTION
    end

MtMortar_1F_North_EventScript_Item_Protector::
    finditem ITEM_PROTECTOR
    end

MtMortar_1F_North_EventScript_Item_UltraBall::
    finditem ITEM_ULTRA_BALL
    end

MtMortar_1F_North_EventScript_Item_FullIncense::
    finditem ITEM_REVIVE
    end

MtMortar_1F_North_EventScript_Item_KingsRock::
    finditem ITEM_KINGS_ROCK
    end

MtMortar_1F_North_EventScript_Miller::
	trainerbattle_single TRAINER_MILLER_HNS, MountMortar2_Text_PokemaniacMillerSeen, MountMortar2_Text_PokemaniacMillerBeaten
	msgbox MountMortar2_Text_PokemaniacMillerAfter, MSGBOX_AUTOCLOSE
	end

MtMortar_1F_North_EventScript_Markus::
	trainerbattle_single TRAINER_MARKUS_HNS, MountMortar2_Text_SupernerdMarkusSeen, MountMortar2_Text_SupernerdMarkusBeaten
	msgbox MountMortar2_Text_SupernerdMarkusAfter, MSGBOX_AUTOCLOSE
	end

MountMortar2_Text_PokemaniacMillerSeen:
	.string "Diesmal verliere ich nicht!$"

MountMortar2_Text_PokemaniacMillerBeaten:
	.string "Ich hab gegen so’n Kind verloren…?$"

MountMortar2_Text_PokemaniacMillerAfter:
	.string "Vor einer Weile wollte so’n\n"
	.string "Karate-Typ kämpfen.\p"
	.string "Er war unglaublich stark.\n"
	.string "Er hat uns einfach plattgemacht.\p"
	.string "Er ist tiefer hineingegangen,\n"
	.string "um zu trainieren.\p"
	.string "Frag mich, wie es ihm geht.$"

MountMortar2_Text_SupernerdMarkusSeen:
	.string "Hey! DU!$"

MountMortar2_Text_SupernerdMarkusBeaten:
	.string "Ich hab dich mit jemandem\n"
	.string "verwechselt…$"

MountMortar2_Text_SupernerdMarkusAfter:
	.string "Ich wollte den SILBERBERG\n"
	.string "erkunden, aber wurde von\l"
	.string "meinem Partner getrennt…\p"
	.string "Bist du einem Trainer begegnet,\n"
	.string "dessen Seemon Kaskade kann?$"

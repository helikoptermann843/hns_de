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
	.string "Wart's ab! Diesmal verliere ich nicht!$"

MountMortar2_Text_PokemaniacMillerBeaten:
	.string "Verloren… und das auch noch\n"
	.string "gegen ein Kind!$"

MountMortar2_Text_PokemaniacMillerAfter:
	.string "Vorhin hat mich so ein komischer\n"
	.string "Karate-Typ zum Kampf herausgefordert.\l"
	.string "Der war vielleicht stark!\l"
	.string "Mir tun immer noch alle Knochen weh!\p"
	.string "Am Schluss blaffte er mich an:\n"
	.string ""Du brauchst mehr Training!"\l"
	.string "und verschwand im Berginneren.\l"
	.string "Was der wohl hier macht?$"

MountMortar2_Text_SupernerdMarkusSeen:
	.string "He! Randalf!$"

MountMortar2_Text_SupernerdMarkusBeaten:
	.string "Pardon.\n"
	.string "Ich habe dich mit jemandem verwechselt.$"

MountMortar2_Text_SupernerdMarkusAfter:
	.string "Ich wollte den SILBERBERG\n"
	.string "erkunden, aber wurde von\l"
	.string "meinem Partner getrennt…\p"
	.string "Bist du einem Trainer begegnet,\n"
	.string "dessen Seemon Kaskade kann?$"

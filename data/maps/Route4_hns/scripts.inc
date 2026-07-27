Route4_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route4_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route4_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route4_EventScript_HpUp::
	finditem ITEM_HP_UP
	end

Route4_EventScript_UltraBall::
	finditem ITEM_ULTRA_BALL
	end

Route4_EventScript_Hank::
	trainerbattle_single TRAINER_HANK_HNS, Route4_Text_BirdKeeperHank_Seen, Route4_Text_BirdKeeperHank_Beaten
	msgbox Route4_Text_BirdKeeperHank_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route4_EventScript_Hope::
	trainerbattle_single TRAINER_HOPE_HNS, Route4_Text_PicnickerHope_Seen, Route4_Text_PicnickerHope_Beaten
	msgbox Route4_Text_PicnickerHope_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route4_EventScript_Sharon::
	trainerbattle_single TRAINER_SHARON_HNS, Route4_Text_PicnickerSharon_Seen, Route4_Text_PicnickerSharon_Beaten
	msgbox Route4_Text_PicnickerSharon_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route4_EventScript_Sign::
	msgbox Route4_Text_MtMoonSquareSign, MSGBOX_SIGN
	end

Route4_Text_BirdKeeperHank_Seen:
	.string "Ich trainiere gerade meine Pokémon.\n"
	.string "Trittst du gegen mich an?$"

Route4_Text_BirdKeeperHank_Beaten:
	.string "Uff! Ich habe verloren…$"

Route4_Text_BirdKeeperHank_AfterBattle:
	.string "Um ein Pokémon zu trainieren, setze es\n"
	.string "an die erste Stelle und tausche es aus.\p"
	.string "So funktioniert das.$"

Route4_Text_PicnickerHope_Seen:
	.string "Dich könnte ich, glaube ich, besiegen!\n"
	.string "Los, lass uns kämpfen!$"

Route4_Text_PicnickerHope_Beaten:
	.string "Nein, du warst doch zu stark.$"

Route4_Text_PicnickerHope_AfterBattle:
	.string "Ich hörte, dass man am Mondberg\n"
	.string "PIEPI über den Weg laufen kann.\l"
	.string "Aber wo genau finde ich sie?$"

Route4_Text_PicnickerSharon_Seen:
	.string "Ähm…\n"
	.string "Ich…$"

Route4_Text_PicnickerSharon_Beaten:
	.string "…$"

Route4_Text_PicnickerSharon_AfterBattle:
	.string "… Seufz…\n"
	.string "Immer noch nicht genug trainiert…$"

Route4_Text_MtMoonSquareSign:
	.string "MONDBERGPLATZ\p"
	.string "Geh einfach die Treppe hoch$"


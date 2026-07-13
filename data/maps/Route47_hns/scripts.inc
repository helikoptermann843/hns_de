Route47_hns_MapScripts::
	.byte 0


Route47_EventScript_Hiker::
	trainerbattle_single TRAINER_DEVIN_HNS, Route47_Text_HikerSeen, Route47_Text_HikerBeaten
	msgbox Route47_Text_HikerAfter, MSGBOX_AUTOCLOSE
	end

Route47_Text_HikerSeen::
	.string "Sehnsucht nach anderen ist…\n"
	.string "was sie eben ist.\p"
	.string "Aber Kämpfe sind Kämpfe,\n"
	.string "also los!$"

Route47_Text_HikerBeaten::
	.string "Wahaha!$"

Route47_Text_HikerAfter::
	.string "Nach einem Kampf sollte man immer\n"
	.string "mit einem Lachen gehen!$"

Route47_EventScript_Camper::
	trainerbattle_single TRAINER_GRANT_HNS, Route47_Text_CamperSeen, Route47_Text_CamperBeaten
	msgbox Route47_Text_CamperAfter, MSGBOX_AUTOCLOSE
	end

Route47_Text_CamperSeen::
	.string "Ich kann nicht gut mit großen\n"
	.string "Menschenmengen umgehen, also\l"
	.string "campiere ich hier mit meinen\l"
	.string "POKÉMON!$"

Route47_Text_CamperBeaten::
	.string "Ich sollte wohl tiefer in den\n"
	.string "Berg gehen…$"

Route47_Text_CamperAfter::
	.string "Tschüss!$"

Route47_EventScript_Thom::
	trainerbattle_double TRAINER_THOM_AND_KAE_HNS, Route47_Text_Couple1Seen, Route47_Text_Couple1Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox Route47_Text_Couple1After1, MSGBOX_AUTOCLOSE
	end

Route47_EventScript_Kae::
	trainerbattle_double TRAINER_THOM_AND_KAE_HNS, Route47_Text_Couple1Seen, Route47_Text_Couple1Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox Route47_Text_Couple1After2, MSGBOX_AUTOCLOSE
	end

Route47_Text_Couple1Seen::
	.string "THOMAS: Eins plus eins ist zwei.\p"
	.string "Aber wir zwei zusammen sind viel\n"
	.string "stärker!\p"
	.string "KATJA: Wir zwei sind kein\n"
	.string "langweiliges Gespann!$"

Route47_Text_Couple1Beaten::
	.string "THOMAS: Das hatte ich nicht erwartet.\n"
	.string "KATJA: Du bist auch ungewöhnlich!$"

Route47_Text_Couple1After1::
	.string "THOMAS: Deine Kraft scheint\n"
	.string "unvorhersehbar zu sein!$"

Route47_Text_Couple1After2::
	.string "KATJA: Ich dachte, du wärst ein\n"
	.string "gewöhnlicher Alleintrainer.\l"
	.string "Wie falsch ich lag!$"

Route47_EventScript_Duff::
	trainerbattle_double TRAINER_DUFF_AND_EDA_HNS, Route47_Text_Couple2Seen, Route47_Text_Couple2Beaten, Route104_Text_GinaNotEnoughMons
	special GetPlayerBigGuyGirlString
	msgbox Route47_Text_Couple2After1, MSGBOX_AUTOCLOSE
	end

Route47_EventScript_Eda::
	trainerbattle_double TRAINER_DUFF_AND_EDA_HNS, Route47_Text_Couple2Seen, Route47_Text_Couple2Beaten, Route104_Text_GinaNotEnoughMons
	msgbox Route47_Text_Couple2After2, MSGBOX_AUTOCLOSE
	end

Route47_Text_Couple2Seen::
	.string "DAVID: Meine Freundin zu beschützen\n"
	.string "lässt mein Herz höherfliegen!\p"
	.string "EVA: Meine Gefühle für meinen\n"
	.string "Freund sind so weit und tief\l"
	.string "wie der Ozean!$"

Route47_Text_Couple2Beaten::
	.string "DAVID: Ich war dir nicht gewachsen…\n"
	.string "EVA: Du bist wirklich etwas\l"
	.string "Besonderes…$"

Route47_Text_Couple2After1::
	.string "DAVID: Danke für den überwältigenden\n"
	.string "Kampf! Tschüss!$"

Route47_Text_Couple2After2::
	.string "EVA: Du solltest wirklich auch\n"
	.string "einen tollen Partner finden!$"

Route47_EventScript_Sage::
	lock
	faceplayer
	msgbox EmbeddedTower_Text_OldManIntro, MSGBOX_DEFAULT
	closemessage
	release
	end

EmbeddedTower_Text_OldManIntro:

Route47_EventScript_Item_Pearl::
    finditem ITEM_PEARL
    end

Route47_EventScript_Item_Revive::
    finditem ITEM_REVIVE
    end

Route47_EventScript_Item_WhiteFlute::
    finditem ITEM_WHITE_FLUTE
    end

Route47_EventScript_Item_Stardust::
	finditem ITEM_STARDUST
	end

Route47_EventScript_Item_LuckyPunch::
	finditem ITEM_LUCKY_PUNCH
	end

Route47_EventScript_Chinchou::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CHINCHOU, CRY_MODE_NORMAL
	msgbox Route47_Text_Chinchou, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route47_Text_Chinchou:
	.string "Lampi: Luuuu!$"

Route47_hns_MapScripts::
	.byte 0


Route47_EventScript_Hiker::
	trainerbattle_single TRAINER_DEVIN_HNS, Route47_Text_HikerSeen, Route47_Text_HikerBeaten
	msgbox Route47_Text_HikerAfter, MSGBOX_AUTOCLOSE
	end

Route47_Text_HikerSeen::
	.string "Du kommst goldrichtig! Ich war gerade\n"
	.string "dabei, mich ein wenig einsam zu fühlen…\p"
	.string "Aber ein Kampf ist ein Kampf! Also los!$"

Route47_Text_HikerBeaten::
	.string "Wuahahaha$"

Route47_Text_HikerAfter::
	.string "Nach einem Kampf sollte man immer mit\n"
	.string "einem Lachen auseinandergehen!$"

Route47_EventScript_Camper::
	trainerbattle_single TRAINER_GRANT_HNS, Route47_Text_CamperSeen, Route47_Text_CamperBeaten
	msgbox Route47_Text_CamperAfter, MSGBOX_AUTOCLOSE
	end

Route47_Text_CamperSeen::
	.string "Wir haben’s nicht so mit Menschenmengen\n"
	.string "und zelten daher lieber im Freien.\l"
	.string "Geht es dir etwa genauso?$"

Route47_Text_CamperBeaten::
	.string "Wir müssen wohl noch tiefer in\n"
	.string "die Berge gehen…$"

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
	.string "Thomas: Eins plus eins ist zwei.\p"
	.string "Aber wir zwei zusammen sind viel\n"
	.string "stärker!\p"
	.string "Katja: Wir zwei sind kein\n"
	.string "langweiliges Gespann!$"

Route47_Text_Couple1Beaten::
	.string "Uwe: Damit hatte ich jetzt\n"
	.string "nicht gerechnet…$"

Route47_Text_Couple1After1::
	.string "Uwe: Dass du so stark bist,\n"
	.string "hätte niemand ahnen können!$"

Route47_Text_Couple1After2::
	.string "Nele: Ich habe dich für einen einfachen\n"
	.string "Trainer gehalten, aber du bist mehr!$"

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
	.string "David: Meine Freundin zu beschützen\n"
	.string "lässt mein Herz höherfliegen!\p"
	.string "Eva: Meine Gefühle für meinen\n"
	.string "Freund sind so weit und tief\l"
	.string "wie der Ozean!$"

Route47_Text_Couple2Beaten::
	.string "David: Ich war dir nicht gewachsen…\n"
	.string "Eva: Du bist wirklich etwas\l"
	.string "Besonderes…$"

Route47_Text_Couple2After1::
	.string "Piz: Ich danke dir für diesen\n"
	.string "vorbildlichen Kampf. Mögen all deine\l"
	.string "Wege geebnet sein!$"

Route47_Text_Couple2After2::
	.string "Mari: Ich wünsche dir, dass auch du\n"
	.string "einen so wunderbaren Partner findest!$"

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

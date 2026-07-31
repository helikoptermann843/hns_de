EcruteakCity_House2_hns_MapScripts::
	.byte 0

Ecruteak_Text_ItemfinderAdventure:
	.string "Oh, suchst du mit deinem Pokémon-Team\n"
	.string "nach dem großen Abenteuer?\p"
	.string "Tja, aber zu einem echten Abenteuer\n"
	.string "gehört auch immer eine Schatzsuche!\p"
	.string "Habe ich nicht recht?$"

Ecruteak_Text_ItemfinderTrueSpirit:
	.string "Aha! Du weißt offensichtlich ganz genau,\n"
	.string "was Männerherzen höher schlagen lässt!\p"
	.string "Du gefällst mir! Hier, nimm das mit.$"

Ecruteak_Text_ItemfinderExplanation:
	.string "Manchmal liegen Items herum,\n"
	.string "die man leicht übersieht.\p"
	.string "Setze den Detektor ein,\n"
	.string "um Items aufzuspüren, die sich\l"
	.string "in der Nähe befinden.\p"
	.string "Den exakten Fundort musst du aber\n"
	.string "selbst herausfinden.\p"
	.string "Ich hörte auch,\n"
	.string "dass in der Turmruine von Teak\l"
	.string "City Items zu finden wären.$"

Ecruteak_Text_ItemfinderToEachHisOwn:
	.string "…Na gut, wenn du meinst!$"

EcruteakCity_House2_EventScript_ItemFinderMan::
	lock
	faceplayer
	checkitem ITEM_DOWSING_MACHINE
	goto_if_eq VAR_RESULT, TRUE, EcruteakCity_House2_EventScript_AlreadyGotItemfinder
	msgbox Ecruteak_Text_ItemfinderAdventure, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, EcruteakCity_House2_EventScript_GiveItemFinder
	msgbox Ecruteak_Text_ItemfinderToEachHisOwn, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_House2_EventScript_GiveItemFinder::
	msgbox Ecruteak_Text_ItemfinderTrueSpirit, MSGBOX_DEFAULT
	giveitem ITEM_DOWSING_MACHINE
EcruteakCity_House2_EventScript_AlreadyGotItemfinder::
	msgbox Ecruteak_Text_ItemfinderExplanation, MSGBOX_DEFAULT
	closemessage
	release
	end


EcruteakCity_House2_EventScript_Book::
	lock
	msgbox Ecruteak_Text_HistoryBook, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, EcruteakCity_House2_EventScript_Book2
	closemessage
	release
	end

EcruteakCity_House2_EventScript_Book2::
	msgbox Ecruteak_Text_TwoTowers, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, EcruteakCity_House2_EventScript_Book3
	release
	end

EcruteakCity_House2_EventScript_Book3::
	msgbox Ecruteak_Text_ThreeMon, MSGBOX_DEFAULT
	closemessage
	release
	end

Ecruteak_Text_ItemFinderMan::
	.string "Teak City ist eine sehr alte Stadt.\n"
	.string "Viele Generationen Geschichte\l"
	.string "stehen in Büchern wie diesem.$"

Ecruteak_Text_HistoryBook:
	.string "Die Geschichte von Teak City…\p"
	.string "Lesen?$"

Ecruteak_Text_TwoTowers:
	.string "In Teak City gab es einmal zwei Türme.\n"
	.string "Jeder der beiden diente einem von zwei\l"
	.string "fliegenden Pokémon als Landestelle.\p"
	.string "Doch dann brannte einer dieser Türme\n"
	.string "ab, und auch die Pokémon verschwanden.\l"
	.string "So steht es geschrieben.\p"
	.string "Weiterlesen?$"

Ecruteak_Text_ThreeMon:
	.string "Drei weitere Pokémon streiften damals\n"
	.string "durch die nähere Umgebung der Stadt.\p"
	.string "Die Leute aus Teak City bezeichneten\n"
	.string "sie als Reinkarnationen der Typen\l"
	.string "Blitz, Feuer und Wasser.\p"
	.string "Doch keines von ihnen konnte die\n"
	.string "überwältigende Macht, die ihnen\l"
	.string "innewohnte, bändigen.\p"
	.string "Irgendwann verschwanden sie eins\n"
	.string "nach dem anderen im hohen Gras,\l"
	.string "und der Wind trug jedes von ihnen\l"
	.string "in eine andere Richtung.\p"
	.string "So steht es geschrieben.$"

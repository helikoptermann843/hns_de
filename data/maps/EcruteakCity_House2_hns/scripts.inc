EcruteakCity_House2_hns_MapScripts::
	.byte 0

Ecruteak_Text_ItemfinderAdventure:
	.string "Ah, suchst du mit\n"
	.string "deinen Pokémon nach Abenteuern?\p"
	.string "Was wäre ein Abenteuer\n"
	.string "ohne eine Schatzsuche?\p"
	.string "Hab ich Recht oder hab ich Recht?$"

Ecruteak_Text_ItemfinderTrueSpirit:
	.string "Gut! Du trägst den\n"
	.string "wahren Abenteurergeist in dir.\p"
	.string "Das mag ich! Nimm dies mit dir.$"

Ecruteak_Text_ItemfinderExplanation:
	.string "Manchmal liegen Items herum,\n"
	.string "die man leicht übersieht.\p"
	.string "Setze den DETEKTOR ein,\n"
	.string "um Items aufzuspüren, die sich\l"
	.string "in der Nähe befinden.\p"
	.string "Den exakten Fundort musst du aber\n"
	.string "selbst herausfinden.\p"
	.string "Ich hörte auch,\n"
	.string "dass in der TURMRUINE von TEAK\l"
	.string "CITY Items zu finden wären.$"

Ecruteak_Text_ItemfinderToEachHisOwn:
	.string "Oh… Jedem das Seine…$"

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
	.string "TEAK-City ist eine sehr alte Stadt.\n"
	.string "Viele Generationen Geschichte\l"
	.string "stehen in Büchern wie diesem.$"

Ecruteak_Text_HistoryBook:
	.string "GESCHICHTE VON TEAK CITY\p"
	.string "Lesen?$"

Ecruteak_Text_TwoTowers:
	.string "In TEAK CITY gab es zwei Türme.\p"
	.string "Jeder Turm war das Zuhause\n"
	.string "mächtiger fliegender Pokémon.\p"
	.string "Doch einer der Türme brannte ab.\p"
	.string "Die beiden Pokémon wurden\n"
	.string "seitdem nicht mehr gesehen…\p"
	.string "Weiterlesen?$"

Ecruteak_Text_ThreeMon:
	.string "TEAK CITY war auch die Heimat dreier\n"
	.string "Pokémon, die durch die Stadt rannten.\p"
	.string "Es heißt, sie entstanden durch\n"
	.string "Wasser, Blitz und Feuer.\p"
	.string "Doch konnten sie ihre Kräfte\n"
	.string "nicht beherrschen.\p"
	.string "Also sind sie wie der Wind\n"
	.string "ins offene Grasland gerannt.$"

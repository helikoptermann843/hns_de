EcruteakCity_House2_hns_MapScripts::
	.byte 0

Ecruteak_Text_ItemfinderAdventure:
	.string "Ah, suchst du mit\n"
	.string "deinen Pokémon nach Abenteuern?\p"
	.string "Was wäre ein Aben-\n"
	.string "teuer ohne eine Schatzsuche?\p"
	.string "Hab ich Recht oder hab ich Recht?$"

Ecruteak_Text_ItemfinderTrueSpirit:
	.string "Gut! Du trägst den\n"
	.string "wahren Abenteurergeist in dir.\p"
	.string "Das mag ich! Nimm dies mit dir.$"

Ecruteak_Text_ItemfinderExplanation:
	.string "Manchmal liegen Items herum, die\p"
	.string "man leicht übersieht.\p"
	.string "Setze den DETEKTOR\n"
	.string "ein, um Items aufzuspüren, die sich\p"
	.string "in der Nähe befinden.\p"
	.string "Den exakten Fundort musst du aber\p"
	.string "selbst herausfinden.\p"
	.string "Ich hörte auch,\n"
	.string "dass in der TURMRUINE von TEAK\p"
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
	.string "ECRUTEAK is a very old city.\n"
	.string "Many generations passed down\l"
	.string "their history in books like these.$"

Ecruteak_Text_HistoryBook:
	.string "GESCHICHTE VON TEAK CITY\p"
	.string "Lesen?$"

Ecruteak_Text_TwoTowers:
	.string "In TEAK CITY gab es zwei Türme.\p"
	.string "Jeder Turm war das\n"
	.string "Zuhause mächtiger fliegender - MON.\p"
	.string "Doch einer der Türme brannte ab.\p"
	.string "Die beiden Pokémon\n"
	.string "wurden seitdem nicht mehr gesehen…\p"
	.string "Weiterlesen?$"

Ecruteak_Text_ThreeMon:
	.string "TEAK CITY war auch die Heimat dreier\p"
	.string "Pokémon, die durch die Stadt rannten.\n"
	.string "\p"
	.string "Es heißt, sie ent-\n"
	.string "standen durch Wasser, Blitz und Feuer.\n"
	.string "\p"
	.string "Doch konnten sie\n"
	.string "ihre Kräfte nicht beherrschen.\p"
	.string "Also sind sie wie\n"
	.string "der Wind ins offene Grasland gerannt.$"

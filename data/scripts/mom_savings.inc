EventScript_MomGiftCall_Item::
	lockall
	pokenavcall Mom_Text_GiftCall_Item
	waitmessage
	delay 30
	clearflag FLAG_MOM_HAS_GIFT
	releaseall
	end

EventScript_MomGiftCall_Berry::
	lockall
	pokenavcall Mom_Text_GiftCall_Berry
	waitmessage
	delay 30
	clearflag FLAG_MOM_HAS_GIFT
	releaseall
	end

EventScript_MomGiftCall_Decoration::
	lockall
	pokenavcall Mom_Text_GiftCall_Decoration
	waitmessage
	delay 30
	clearflag FLAG_MOM_HAS_GIFT
	releaseall
	end

Mom_Text_GiftCall_Item:
	.string "Mama: Hallo, {PLAYER}!\n"
	.string "Wie geht es dir?\p"
	.string "Ich habe heute beim Einkaufen ein\n"
	.string "nützliches Item gefunden und es dir\l"
	.string "von deinem Geld gekauft! Tut mir leid!\p"
	.string "Ich habe es auf deinen PC übertragen.\n"
	.string "Du wirst es sicher brauchen können!\p"
	.string "Mach’s gut!$"

Mom_Text_GiftCall_Berry:
	.string "Mama: Hallo, {PLAYER}!\n"
	.string "Wie geht es dir?\p"
	.string "Ich habe heute beim Einkaufen leckere\n"
	.string "Beeren gefunden und sie dir von\l"
	.string "deinem Geld gekauft! Tut mir leid!\p"
	.string "Ich habe sie auf deinen PC übertragen.\n"
	.string "Du wirst sie sicher brauchen können!\p"
	.string "Mach’s gut!$"

Mom_Text_GiftCall_Decoration:
	.string "Mama: Hallo, {PLAYER}!\n"
	.string "Wie geht es dir?\p"
	.string "Ich habe heute beim Einkaufen eine\n"
	.string "niedliche Poképuppe für dein Zimmer\l"
	.string "gefunden! Tut mir leid!\p"
	.string "Sieh dir die Dekorationen an, wenn du\n"
	.string "wieder zu Hause bist!\p"
	.string "Mach’s gut!$"

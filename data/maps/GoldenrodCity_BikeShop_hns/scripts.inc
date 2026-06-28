GoldenrodCity_BikeShop_hns_MapScripts::
	.byte 0

GoldenrodCity_BikeShop_EventScript_Clerk::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_BIKE, GoldenrodCity_BikeShop_EventScript_Clerk_BikeReceived
	msgbox GoldenrodCity_BikeShop_Text_ClerkIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, GoldenrodCity_BikeShop_EventScript_Clerk_BikeAgreed
	msgbox GoldenrodCity_BikeShop_Text_Refused, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_BikeShop_EventScript_Clerk_BikeAgreed::
	msgbox GoldenrodCity_BikeShop_Text_ClerkAgreed, MSGBOX_DEFAULT
	giveitem ITEM_MACH_BIKE
	setflag FLAG_RECEIVED_BIKE
	closemessage
	release
	end

GoldenrodCity_BikeShop_EventScript_Clerk_BikeReceived::
	msgbox GoldenrodCity_BikeShop_Text_Mainshop, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_BikeShop_EventScript_Clerk2::
	lock
	faceplayer
	msgbox GoldenrodCity_BikeShop_Text_Clerk2, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_BikeShop_EventScript_Bike::
	lock
	msgbox GoldenrodCity_BikeShop_Text_Bicycle, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_BikeShop_Text_Clerk2:
	.string "…Höhöhö,\n"
	.string "ich laufe dicken Leuten mit\l"
	.string "einer Tuba hinterher.\p"
	.string "Zum Glück habe ich mein Fahrrad,\n"
	.string "die kriegen mich nie!$"

GoldenrodCity_BikeShop_Text_ClerkIntro:
	.string "…Seufz… Ich bin hierher gezogen,\n"
	.string "aber ich kann meine FAHRRÄDER nicht\l"
	.string "verkaufen. Warum nur?\p"
	.string "Würdest du ein FAHRRAD fahren\n"
	.string "und so Werbung machen?$"

GoldenrodCity_BikeShop_Text_ClerkAgreed:
	.string "Ja? Großartig!\p"
	.string "Gib mir bitte Namen und Nummer.\p"
	.string "Dann leihe ich dir ein FAHRRAD.$"

GoldenrodCity_BikeShop_Text_BorrowedBicycle:
	.string "{PLAYER} leiht ein Fahrrad.$"

GoldenrodCity_BikeShop_Text_Mainshop:
	.string "Die Welt ist ein Radweg! FAHRRADLADEN$"

GoldenrodCity_BikeShop_Text_Refused:
	.string "…Seufz… Oh, für die Güte der Menschen…$"

GoldenrodCity_BikeShop_Text_JustReleasedCompact:
	.string "Brandneu!\p"
	.string "Erste Klasse Kompakt-FAHRRÄDER!$"

GoldenrodCity_BikeShop_Text_Bicycle:
	.string "Ein nagelneues FAHRRAD!$"

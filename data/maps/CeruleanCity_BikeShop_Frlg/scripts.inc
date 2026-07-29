CeruleanCity_BikeShop_Frlg_MapScripts::
	.byte 0

CeruleanCity_BikeShop_EventScript_Clerk::
	lock
	faceplayer
	goto_if_set FLAG_GOT_BICYCLE, CeruleanCity_BikeShop_EventScript_AlreadyGotBicycle
	goto_if_set FLAG_GOT_BIKE_VOUCHER, CeruleanCity_BikeShop_EventScript_ExchangeBikeVoucher
	showmoneybox 0, 0
	message CeruleanCity_BikeShop_Text_WelcomeToBikeShop
	waitmessage
	multichoice 11, 0, MULTI_BIKE_SHOP, FALSE
	hidemoneybox
	showmoneybox 0, 0
	switch VAR_RESULT
	case 0, CeruleanCity_BikeShop_EventScript_TryPurchaseBicycle
	case 1, CeruleanCity_BikeShop_EventScript_ClerkGoodbye
	case 127, CeruleanCity_BikeShop_EventScript_ClerkGoodbye
	end

@ The Bicycle price / players money is never actually checked
CeruleanCity_BikeShop_EventScript_TryPurchaseBicycle::
	msgbox CeruleanCity_BikeShop_Text_SorryYouCantAffordIt
	goto CeruleanCity_BikeShop_EventScript_ClerkGoodbye
	end

CeruleanCity_BikeShop_EventScript_ClerkGoodbye::
	msgbox CeruleanCity_BikeShop_Text_ThankYouComeAgain
	hidemoneybox
	release
	end

CeruleanCity_BikeShop_EventScript_ExchangeBikeVoucher::
	msgbox CeruleanCity_BikeShop_Text_OhBikeVoucherHereYouGo
	msgreceiveditem CeruleanCity_BikeShop_Text_ExchangedVoucherForBicycle, ITEM_BICYCLE, 1, MUS_RG_OBTAIN_KEY_ITEM
	setflag FLAG_GOT_BICYCLE
	additem ITEM_BICYCLE
	removeitem ITEM_BIKE_VOUCHER
	msgbox CeruleanCity_BikeShop_Text_ThankYouComeAgain
	release
	end

CeruleanCity_BikeShop_EventScript_AlreadyGotBicycle::
	msgbox CeruleanCity_BikeShop_Text_HowDoYouLikeNewBicycle
	release
	end

@ Unused
CeruleanCity_BikeShop_EventScript_NoRoomForBicycle::
	msgbox CeruleanCity_BikeShop_Text_MakeRoomForBicycle
	release
	end

CeruleanCity_BikeShop_EventScript_Woman::
	msgbox CeruleanCity_BikeShop_Text_CityBikeGoodEnoughForMe, MSGBOX_NPC
	end

CeruleanCity_BikeShop_EventScript_Youngster::
	lock
	faceplayer
	goto_if_set FLAG_GOT_BICYCLE, CeruleanCity_BikeShop_EventScript_YoungsterHaveBike
	msgbox CeruleanCity_BikeShop_Text_BikesCoolButExpensive
	release
	end

CeruleanCity_BikeShop_EventScript_YoungsterHaveBike::
	msgbox CeruleanCity_BikeShop_Text_WowYourBikeIsCool
	release
	end

CeruleanCity_BikeShop_EventScript_Bicycle::
	msgbox CeruleanCity_BikeShop_Text_ShinyNewBicycle, MSGBOX_SIGN
	end

CeruleanCity_BikeShop_Text_WelcomeToBikeShop::
	.string "Hi!\n"
	.string "Welcome to our Bike Shop.\p"
	.string "Have we got just the Bike for\n"
	.string "you!$"

CeruleanCity_BikeShop_Text_SorryYouCantAffordIt::
	.string "Es tut mir Leid, du kannst es dir\n"
	.string "nicht leisten!$"

CeruleanCity_BikeShop_Text_OhBikeVoucherHereYouGo::
	.string "Oh, das ist ein...\p"
	.string "... Rad-Coupon!\p"
	.string "O.K.!\n"
	.string "Es gehört dir!$"

CeruleanCity_BikeShop_Text_ExchangedVoucherForBicycle::
	.string "{PLAYER} exchanged the\n"
	.string "Bike Voucher for a Bicycle.$"

CeruleanCity_BikeShop_Text_ThankYouComeAgain::
	.string "Besuch uns doch wieder!$"

CeruleanCity_BikeShop_Text_HowDoYouLikeNewBicycle::
	.string "Wie gefällt dir dein neues Fahrrad?\p"
	.string "Du kannst damit auf dem Radweg und\n"
	.string "in Höhlen fahren!$"

CeruleanCity_BikeShop_Text_MakeRoomForBicycle::
	.string "Du kannst es momentan nicht\n"
	.string "mitnehmen!$"

CeruleanCity_BikeShop_Text_CityBikeGoodEnoughForMe::
	.string "Ich möchte ein Hollandrad kaufen!\p"
	.string "Ein Mountainbike hat keinen\n"
	.string "Gepäckträger!$"

CeruleanCity_BikeShop_Text_BikesCoolButExpensive::
	.string "Die Fahrräder sind ziemlich cool,\n"
	.string "aber unheimlich teuer!$"

CeruleanCity_BikeShop_Text_WowYourBikeIsCool::
	.string "Wow!\n"
	.string "Du hast ein cooles Fahrrad!$"

@ Unused
CeruleanCity_BikeShop_Text_GermanFoldableBicyleFinallyOnMarket::
	.string "ついに　はつばい！\p"
	.string "ドイツ　せい　さいこうきゅう\n"
	.string "おりたたみ　じてんしゃ！$"

CeruleanCity_BikeShop_Text_ShinyNewBicycle::
	.string "Ein brandneues Fahrrad!$"


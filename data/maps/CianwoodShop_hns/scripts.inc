CianwoodShop_hns_MapScripts::
	.byte 0

CianwoodShop_EventScriptMan::	
	setvar VAR_OLIVINE_CITY_STATE, 4
	giveitem ITEM_SECRET_POTION
	end

CianwoodCity_EventScript_Pharmacist::
	lock
	faceplayer
	checkitem ITEM_SECRET_POTION
	goto_if_eq VAR_RESULT, TRUE, CianwoodCity_EventScript_PharmacistAfter
	goto_if_ge VAR_OLIVINE_CITY_STATE, 5, CianwoodCity_EventScript_PharmacistAfter
	msgbox CianwoodCity_Text_PharmacistGivePotion, MSGBOX_DEFAULT
	giveitem ITEM_SECRET_POTION
	closemessage
	setvar VAR_OLIVINE_CITY_STATE, 4
	release
	end

CianwoodCity_EventScript_PharmacistAfter::
	msgbox CianwoodCity_Text_PharmacistDescribePotion, MSGBOX_DEFAULT
	closemessage
	release
	end


CianwoodCity_Text_PharmacistGivePotion:
	.string "Deine Pokémon scheinen OK zu sein.\p"
	.string "Machst du dir Sorgen?\p"
	.string "…\p"
	.string "Das Leuchtturm-Pokémon steckt\n"
	.string "in Schwierigkeiten?\p"
	.string "Ich hab's!\p"
	.string "Das sollte Funktionieren.$"

CianwoodCity_Text_ReceivedSecretpotion:
	.string "{PLAYER} erhielt GEHEIMTRANK.$"

CianwoodCity_Text_PharmacistDescribePotion:
	.string "Mein GEHEIMTRANK ist etwas zu\n"
	.string "stark, deshalb gebe ich ihn nur\l"
	.string "im Notfall.$"

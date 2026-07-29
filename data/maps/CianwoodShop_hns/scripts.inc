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
	.string "Hm? Medizin willst du von mir?\p"
	.string "Dein Pkmn-Team wirkt jetzt nicht gerade\n"
	.string "schwerverletzt oder krank auf mich…\l"
	.string "Wo drückt denn der Schuh?\p"
	.string "… … …\p"
	.string "Ach so, dann geht es hier also um das\n"
	.string "Pokémon vom Leuchtturm! Na klar!\p"
	.string "Diese Medizin sollte genau das sein,\n"
	.string "was du brauchst. Hier, nimm!$"

CianwoodCity_Text_ReceivedSecretpotion:
	.string "{PLAYER} hat einen\n"
	.string "{STR_VAR_1}?-Öffner{STR_VAR_1} erhalten!$"

CianwoodCity_Text_PharmacistDescribePotion:
	.string "Mein Geheimtrank ist etwas zu\n"
	.string "stark, deshalb gebe ich ihn nur\l"
	.string "im Notfall.$"

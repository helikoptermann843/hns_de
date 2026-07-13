OlivineCity_Cafe_hns_MapScripts::
	.byte 0

OlivineCity_Cafe_EventScript_Jasmine::
	lock
	faceplayer
	msgbox OlivineCity_Cafe_Text_Jasmine, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_HIDE_CAFE_JASMINE
	removeobject LOCALID_CAFE_JASMINE
	fadescreenswapbuffers FADE_FROM_BLACK
	clearflag FLAG_HIDE_DOJO_JASMINE
	release
	end

OlivineCity_Cafe_Text_Jasmine:
	.string "Oh… Hallo, {PLAYER}.\p"
	.string "Diese Teller vor mir gehören\n"
	.string "nicht alle mir…\p"
	.string "Ähm…\p"
	.string "Eigentlich hat die Person, die\n"
	.string "vor mir saß, viel gegessen…\p"
	.string "Wenn du wieder kämpfen willst,\n"
	.string "besuche mich bitte im Kampf-DOJO\l"
	.string "in Saffronia City.$"

OlivineCity_EventScript_SailorA::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_STRENGTH, OlivineCity_EventScript_SailorA2
	msgbox OlivineCity_Text_CafeSailorStrength, MSGBOX_DEFAULT
	giveitem ITEM_HM_STRENGTH
	setflag FLAG_RECEIVED_HM_STRENGTH
OlivineCity_EventScript_SailorA2::
	msgbox OlivineCity_Text_CafeSailorGotStrength, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_Cook::
	lock
	faceplayer
	msgbox OlivineCity_Text_CafeFishingGuru, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_SailorB::
	lock
	faceplayer
	msgbox OlivineCity_Text_CafeSailor, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Text_CafeSailorStrength:
	.string "Hah! Deine Pokémon sehen echt\n"
	.string "schwächlich aus!\p"
	.string "Sie haben nicht die Kraft,\n"
	.string "Felsen wegzustossen.\p"
	.string "Hier, nimm das und lehre sie\n"
	.string "Stärke!$"

OlivineCity_Text_CafeSailorGotStrength:
	.string "Der Einzige, auf den du dich auf\n"
	.string "hoher See verlassen kannst,\l"
	.string "bist du selbst!\p"
	.string "Ich bin so stolz auf mich selbst!$"

OlivineCity_Text_CafeFishingGuru:
	.string "Im OLIVIANA CAFE gibt es nur\n"
	.string "delikate Seemannskost für MATROSEN\l"
	.string "auf dem Speiseplan!$"

OlivineCity_Text_CafeSailor:
	.string "Immer wenn ich in diese Stadt komme,\n"
	.string "gehe ich ins OLIVIANA CITYCAFE.\p"
	.string "Jedes Gericht auf der Karte stärkt\n"
	.string "mich. Ich kann nicht\l"
	.string "aufhören zu essen!$"


CeladonCity_Apartments_RoofHouse_hns_MapScripts::
	.byte 0

CeladonCity_Apartments_RoofHouse_EventScript_BlackBelt::
	lock 
	faceplayer
	goto_if_set FLAG_GOT_TM_SLEEP_TALK, CeladonCity_Apartments_RoofHouse_EventScript_BlackBeltAfter
	msgbox CeladonMansionRoofHouse_Text_PharmacistIntro, MSGBOX_DEFAULT	
	goto_if_set FLAG_NIGHT_POKEMON, CeladonCity_Apartments_RoofHouse_EventScript_BlackBeltRefused
	msgbox CeladonMansionRoofHouse_Text_PharmacistStory, MSGBOX_NPC
	giveitem ITEM_TM_SLEEP_TALK
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_GOT_TM_SLEEP_TALK
	msgbox CeladonMansionRoofHouse_Text_PharmacistCurse, MSGBOX_NPC
	closemessage
	release
	end

CeladonCity_Apartments_RoofHouse_EventScript_BlackBeltRefused::
	msgbox CeladonMansionRoofHouse_Text_PharmacistNotNight, MSGBOX_NPC
	closemessage
	release
	end

CeladonCity_Apartments_RoofHouse_EventScript_BlackBeltAfter::
	msgbox CeladonMansionRoofHouse_Text_PharmacistCurse, MSGBOX_NPC
	release
	end

CeladonMansionRoofHouse_Text_PharmacistIntro:
	.string "Lass mich eine unheimliche Geschichte\n"
	.string "erzählen…$"

CeladonMansionRoofHouse_Text_PharmacistNotNight:
	.string "Andererseits ist es nicht so gruselig,\n"
	.string "solange es noch hell draußen ist.\p"
	.string "Komm nach Sonnenuntergang wieder,\n"
	.string "okay?$"

CeladonMansionRoofHouse_Text_PharmacistStory:
	.string "Es war einmal ein kleiner Junge,\n"
	.string "der ein neues Fahrrad bekam…\l"
	.string "Er wollte es sofort ausprobieren…\p"
	.string "Er hatte so viel Spaß, dass er nicht\n"
	.string "merkte,\n"
	.string "dass die Sonne untergegangen war…\p"
	.string "Auf dem Heimweg in der pechschwarzen\n"
	.string "Nacht\n"
	.string "verlangsamte das Fahrrad plötzlich!\l"
	.string "Die Pedale wurden schwer!\p"
	.string "Als er aufhörte zu treten,\n"
	.string "rutschte das Fahrrad rückwärts!\p"
	.string "Es war, als sei das Fahrrad verflucht\n"
	.string "und wollte ihn ins Verderben ziehen!\l"
	.string "…\p"
	.string "…\p"
	.string "SCHEIII!K!\p"
	.string "Der Junge fuhr den Hügel auf dem\n"
	.string "Radweg hinauf!\p"
	.string "… Ba-dum ba-dum!\p"
	.string "Für dein geduldiges Zuhören bekommst\n"
	.string "du, {PLAYER}, dies--TM44!$"

CeladonMansionRoofHouse_Text_PharmacistCurse:
	.string "TM44 ist ERHOLUNG.\p"
	.string "Damit kann dein Pokémon mitten im\n"
	.string "Kampf ein Nickerchen machen und KP\n"
	.string "wiederherstellen.\p"
	.string "Aber viel Glück beim Einschlafen nach\n"
	.string "dieser furchterregenden Geschichte!$"


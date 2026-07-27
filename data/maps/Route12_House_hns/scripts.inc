Route12_House_hns_MapScripts::
	.byte 0

Route12_House_EventScript_SuperRod::
	lock
	faceplayer
	goto_if_set FLAG_GOT_SUPER_ROD, Route12_House_EventScript_SuperRodGot
	msgbox Route12_House_Text_OfferSuperRod, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, Route12_House_EventScript_SuperRodRefused
	msgbox Route12_House_Text_GiveSuperRod, MSGBOX_DEFAULT
	giveitem ITEM_SUPER_ROD
	msgbox Route12_House_Text_GaveSuperRod, MSGBOX_DEFAULT
	setflag FLAG_GOT_SUPER_ROD
	closemessage
	release
	end

Route12_House_EventScript_SuperRodRefused::
	msgbox Route12_House_Text_DontWantSuperRod, MSGBOX_DEFAULT
	closemessage
	release
	end

Route12_House_EventScript_SuperRodGot::
	msgbox Route12_House_Text_GaveSuperRod, MSGBOX_NPC
	release
	end

Route12_House_Text_OfferSuperRod:
	.string "Ich bin der jüngere Bruder\n"
	.string "des ANGEL-GURUS.\p"
	.string "Ich sehe, dass du gern angelst.\p"
	.string "Daran besteht kein Zweifel!\p"
	.string "Na? Hab ich recht?$"

Route12_House_Text_GiveSuperRod:
	.string "Ja, ganz eindeutig! Du angelst gerne!\n"
	.string "Genau wie ich mir dachte!\p"
	.string "Hier, ein kleines Geschenk unter\n"
	.string "Anglern! Diese Angel ist der Wahnsinn!$"

Route12_House_Text_GaveSuperRod:
	.string "Damit kannst du an den verschiedensten\n"
	.string "Orten dem Angeln frönen!\p"
	.string "Wenn du verschiedene Ruten benutzt,\n"
	.string "beißen auch immer andere Pokémon an!$"

Route12_House_Text_DontWantSuperRod:
	.string "Echt jetzt? Sollte ich mich in meiner\n"
	.string "Einschätzung etwa getäuscht haben?$"


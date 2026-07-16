Route28_House_hns_MapScripts::
	.byte 0

Route28House_EventScript_Celebrity::
	lock
	faceplayer
	goto_if_set FLAG_GOT_TM_STEEL_WING, Route28House_EventScript_CelebrityAfter
	msgbox Route28House_Text_Celebrity1, MSGBOX_NPC
	giveitem ITEM_TM_STEEL_WING
	setflag FLAG_GOT_TM_STEEL_WING
Route28House_EventScript_CelebrityAfter::
	msgbox Route28House_Text_Celebrity2, MSGBOX_NPC
	release
	end

Route28House_Text_Celebrity1:
	.string "Oh je… Du hast mich gefunden.\p"
	.string "Bitte erzähl niemandem von mir.\p"
	.string "Ich gebe dir was, wenn du mein\n"
	.string "Geheimnis bewahrst. Ok?$"

Route28House_Text_Celebrity2:
	.string "Es ist hart, ein Star zu sein.\p"
	.string "Überall jagen mir die Leute nach.\p"
	.string "Ich möchte einfach nur meine\n"
	.string "Ruhe haben…$"

Route28House_Text_Fearow:
	.string "Ibitak: Fuuuah!$"


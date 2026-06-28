GoldenrodCity_FlowerShop_hns_MapScripts::
	.byte 0

GoldenrodCity_FlowerShop_EventScript_Owner::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_SUDOWOODO, GoldenrodCity_FlowerShop_EventScript_Normal
	goto_if_set FLAG_RECEIVED_SQUIRTBOTTLE, GoldenrodCity_FlowerShop_EventScript_GotSquirtBottle
	goto_if_set FLAG_BADGE03_GET, GoldenrodCity_FlowerShop_EventScript_GiveSquirtBottle
	msgbox GoldenrodCity_FlowerShop_Text_Owner1, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_FlowerShop_EventScript_GiveSquirtBottle::
	lock
	faceplayer
	msgbox GoldenrodCity_FlowerShop_Text_Owner2, MSGBOX_DEFAULT
	giveitem ITEM_SQUIRT_BOTTLE
	setflag FLAG_RECEIVED_SQUIRTBOTTLE
	closemessage
	release
	end

GoldenrodCity_FlowerShop_EventScript_GotSquirtBottle::
	lock
	faceplayer
	msgbox GoldenrodCity_FlowerShop_Text_Owner3, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_FlowerShop_EventScript_Normal::
	lock
	faceplayer
	msgbox GoldenrodCity_FlowerShop_Text_Owner4, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_FlowerShop_EventScript_Floria1::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_SUDOWOODO, GoldenrodCity_FlowerShop_EventScript_Floria3
	goto_if_set FLAG_BADGE03_GET, GoldenrodCity_FlowerShop_EventScript_Floria2
	msgbox GoldenrodCity_FlowerShop_Text_Floria, MSGBOX_DEFAULT
	closemessage
	release
	end
	
GoldenrodCity_FlowerShop_EventScript_Floria2::
	msgbox GoldenrodCity_FlowerShop_Text_FloriaYouBeatWhitney, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_FlowerShop_EventScript_Floria3::
	msgbox GoldenrodCity_FlowerShop_Text_FloriaItWasAMon, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodCity_FlowerShop_Text_Floria:
	.string "Als ich meiner Schwester vom\n"
	.string "wackeligen Baum erzählte, sagte\l"
	.string "sie, das sei gefährlich.\p"
	.string "Wenn ich Bianka besiege, leiht\n"
	.string "sie mir vielleicht ihre Gießkanne…$"

GoldenrodCity_FlowerShop_Text_Owner1:
	.string "Anscheinend gibt es einen seltsamen\n"
	.string "Baum auf Route 36.\p"
	.string "Er soll tanzen, wenn man ihn gießt…\p"
	.string "Natürlich nicht!\p"
	.string "Dies ist ein Blumenladen, wir\n"
	.string "haben Gießkannen…\p"
	.string "Aber du darfst keine haben!\n"
	.string "Zu gefährlich!\p"
	.string "Vielleicht, wenn du Arena Leiter\n"
	.string "Bianka besiegst, ist es okay.$"
.string "Apparently, there is an odd tree\n"
.string "on ROUTE 36.\p"
.string "They say it dances when you water\n"
.string "it...\p"
.string "Oh, of course not!\p"
.string "This is a flower shop, so we do\n"
.string "have watering cans...\p"
.string "But I cannot let you have one!\n"
.string "It's too dangerous!\p"
.string "Well, maybe if you manage to\n"
.string "defeat gym leader WHITNEY, it\l"
.string "might be okay.$"

GoldenrodCity_FlowerShop_Text_Owner2:
	.string "Anscheinend gibt es einen seltsamen\n"
	.string "Baum auf Route 36.\p"
	.string "Er soll tanzen, wenn man ihn gießt…\p"
	.string "Oh, das ist ein Normalorden von\n"
	.string "der DUKATIA-Arena!\p"
	.string "Hast du Bianka besiegt?!\p"
	.string "Dann ist alles in Ordnung.\p"
	.string "Ich leihe dir diese SCHIGGYKANNE.\p"
	.string "…\p"
	.string "Ach, egal. Behalte sie!$"
.string "Apparently, there is an odd tree\n"
.string "on ROUTE 36.\p"
.string "They say it dances when you water\n"
.string "it...\p"
.string "Oh, that's a PLAINBADGE from\n"
.string "The GOLDENROD GYM!\p"
.string "Did you defeat WHITNEY?!\p"
.string "Well, then there's nothing to worry\n"
.string "about, is there?\p"
.string "I'll let you use this SQUIRTBOTTLE\n"
.string "for a while then.\l"
.string "...\p"
.string "Oh, never mind. Keep it!$"

GoldenrodCity_FlowerShop_Text_Owner3:
	.string "Der seltsame Baum steht auf Route 36.\n"
	.string "Bitte sei vorsichtig!$"
.string "The odd tree is on ROUTE 36.\n"
.string "Please be careful!$"

GoldenrodCity_FlowerShop_Text_Owner4:
	.string "Lalala lalalala. Trinke viel\n"
	.string "Wasser, meine Liebe!$"

GoldenrodCity_FlowerShop_Text_FloriaYouBeatWhitney:
	.string "Wow, du hast Bianka besiegt? Super!$"

GoldenrodCity_FlowerShop_Text_FloriaItWasAMon:
	.string "Also war es wirklich ein Pokémon!$"

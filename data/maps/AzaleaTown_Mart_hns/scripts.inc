AzaleaTown_Mart_hns_MapScripts::
	.byte 0

AzaleaTown_Mart_EventScriptCooltrainerM::
	lock
	faceplayer
	msgbox AzaleaMart_Text_CooltrainerM, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaTown_Mart_EventScriptBugCatcher::
	lock
	faceplayer
	msgbox AzaleaMart_Text_BugCatcher, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaMart_Text_CooltrainerM:
	.string "Kannst du Superbälle kaufen?\n"
	.string "Ich kann nur Pokébällen bekommen.\p"
	.string "Ich habe gehört mehr werden verfügbar\n"
	.string "wenn man sich weitere\l"
	.string "Arena-Orden verdient!\p"
	.string "Ich wünschte Kurt würde mir ein\n"
	.string "paar seiner Bälle anfertigen.$"

AzaleaMart_Text_BugCatcher:
	.string "Mit einem Superball lassen sich Pokémon\n"
	.string "sehr viel leichter fangen als mit einem\l"
	.string "regulären Pokéball.\p"
	.string "Aber manchmal geht einfach nichts über\n"
	.string "einen von Kurts Bällen!$"


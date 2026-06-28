Route26_House1_hns_MapScripts::
	.byte 0

Route26_House1_EventScript_HealWoman::
	lock
	faceplayer
	msgbox Route26_Text_HealHouseRest, MSGBOX_DEFAULT
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox Route26_Text_HealHouseKeepAtIt, MSGBOX_DEFAULT
	release
	end


Route26_Text_HealHouseRest:
	.string "Deine Pokémon sehen müde aus.\p"
	.string "Gönne ihnen eine kleine Pause.$"

Route26_Text_HealHouseKeepAtIt:
	.string "Hier!\p"
	.string "Deine Pokémon sehen gut aus!\p"
	.string "Mach weiter so!$"

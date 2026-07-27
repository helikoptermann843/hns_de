OlivineCity_House2_hns_MapScripts::
	.byte 0

OlivineCity_EventScript_Punisher::
	lock
	faceplayer
	msgbox OlivineCity_Text_PunishmentBro, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_PunisherBoy::
	lock
	faceplayer
	msgbox OlivineCity_Text_PunishmentBoy, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Text_PunishmentBro:
	.string "Auf dem Weg nach Anemonia City\n"
	.string "gibt es vier unbewohnte Inseln.\p"
	.string "Ungezogene Kinder werden zur\n"
	.string "Bestrafung dorthin geschickt!$"

OlivineCity_Text_PunishmentBoy:
	.string "Wenn ich ungezogen bin, macht\n"
	.string "mir mein Papa immer sofort mit\l"
	.string "gruseligen Geschichten Angst…$"

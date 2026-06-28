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
	.string "Auf dem Weg nach ANEMONIA\n"
	.string "gibt es vier verlassene Inseln.\p"
	.string "Böse Kinder werden als\n"
	.string "Strafe dorthin gebracht!$"

OlivineCity_Text_PunishmentBoy:
	.string "Wenn ich in Schwierigkeiten bin,\n"
	.string "erschreckt mich mein großer Bruder.$"

CeladonCity_GameCorner_hns_MapScripts::
	.byte 0

CeladonGameCorner_EventScript_PokefanM::
	lock
	faceplayer
	msgbox CeladonGameCorner_Text_PokefanM, MSGBOX_NPC
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

CeladonGameCorner_EventScript_Teacher::
	lock
	faceplayer
	msgbox CeladonGameCorner_Text_Teacher, MSGBOX_NPC
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceRight
	waitmovement 0
	release
	end

CeladonGameCorner_EventScript_FishingGuru::
	lock
	faceplayer
	msgbox CeladonGameCorner_Text_FishingGuru, MSGBOX_NPC
	closemessage
	release
	end

CeladonGameCorner_EventScript_Fisher1::
	lock
	faceplayer
	msgbox CeladonGameCorner_Text_Fisher1, MSGBOX_NPC
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

CeladonGameCorner_EventScript_Fisher2::
	lock
	faceplayer
	msgbox CeladonGameCorner_Text_Fisher2, MSGBOX_NPC
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

CeladonGameCorner_EventScript_GymGuide::
	lock
	faceplayer
	msgbox CeladonGameCorner_Text_GymGuide, MSGBOX_NPC
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceRight
	waitmovement 0
	release
	end

CeladonGameCorner_EventScript_Gramps::
	lock
	faceplayer
	msgbox CeladonGameCorner_Text_Gramps, MSGBOX_NPC
	closemessage
	release
	end

CeladonGameCorner_EventScript_PokefanF::
	lock
	faceplayer
	msgbox CeladonGameCorner_Text_PokefanF, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceRight
	waitmovement 0
	release
	end

CeladonGameCorner_EventScript_Woman::
	lock
	faceplayer
	msgbox CeladonGameCorner_Text_Woman, MSGBOX_DEFAULT
	closemessage
	release
	end

CeladonGameCorner_Text_PokefanM:
	.string "Die Spielautomaten sind alle auf\n"
	.string "dem neuesten Stand.$"

CeladonGameCorner_Text_Teacher:
	.string "Genau diese Maschine will ich.\p"
	.string "Gestern hat sie mich leergeräumt,\n"
	.string "heute sollte sie auszahlen.$"

CeladonGameCorner_Text_FishingGuru:
	.string "Ich glaube, dieser Spielautomat wird\n"
	.string "auszahlen…\p"
	.string "Die Chancen unterscheiden sich bei den\n"
	.string "Maschinen.$"

CeladonGameCorner_Text_Fisher1:
	.string "Gahahaha!\p"
	.string "Die Münzen kommen einfach immer wieder\n"
	.string "heraus!\p"
	.string "Hm? Was, Junge? Willst du spielen?\p"
	.string "Ich teile mein Glück mit dir!$"

CeladonGameCorner_Text_Fisher2:
	.string "Gahahaha!\p"
	.string "Es macht mich froh, anderen Leuten\n"
	.string "eine Freude zu bereiten!$"

CeladonGameCorner_Text_GymGuide:
	.string "Hey! Künftiger CHAMP!\p"
	.string "Spielst du auch an den Spielautomaten?\p"
	.string "Ich versuche, genug Münzen für\n"
	.string "ein Preis-Pokémon zu bekommen.\p"
	.string "Aber ich habe noch nicht genug Münzen…$"

CeladonGameCorner_Text_PokefanF:
	.string "Roulette…\p"
	.string "Ich mag die Slots lieber,\n"
	.string "da ist es leichter, die Chancen.\p"
	.string "auszurechnen.$"

CeladonGameCorner_Text_Gramps:
	.string "Hmmm… Die Chancen sind sicher besser\n"
	.string "für Pikachus Linie,\l"
	.string "aber… was tun?$"

CeladonGameCorner_Text_Woman:
	.string "Ich kann nicht aufhören zu gewinnen!$"

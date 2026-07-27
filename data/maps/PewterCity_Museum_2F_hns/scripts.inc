PewterCity_Museum_2F_hns_MapScripts::
	.byte 0


PewterCity_Museum_2F_EventScript_Nerd::
	msgbox PewterCity_Museum_2F_Text_Nerd, MSGBOX_NPC
	end

PewterCity_Museum_2F_EventScript_Daughter::
	lock
	msgbox PewterCity_Museum_2F_Text_AskedDaddyToCatchPikachu, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_2F_EventScript_Dad::
	lock
	msgbox PewterCity_Museum_2F_Text_PikachuSoonIPromise, MSGBOX_DEFAULT
	release
	end

PewterCity_Museum_2F_EventScript_Meteor::
	msgbox PewterCity_Museum_2F_Text_MeteoriteThatFellOnMtMoon, MSGBOX_SIGN
	end

PewterCity_Museum_2F_Text_Nerd:
	.string "Irgendwo in der Nähe von Marmoria City\n"
	.string "soll ein Meteorit eingeschlagen sein!\p"
	.string "So einen seltenen Fund würden wir nur\n"
	.string "zu gerne hier im Museum ausstellen…\p"
	.string "Aber angeblich geht von dem Stein eine\n"
	.string "merkwürdige Energie aus, die es\l"
	.string "verhindert, dass man ihn von dort\l"
	.string "entfernt…$"

PewterCity_Museum_2F_Text_AskedDaddyToCatchPikachu::
    .string "Ich will ein PIKACHU!\n"
    .string "Es ist so süß!\p"
    .string "Ich frag Vati mir eines zu fangen!$"

PewterCity_Museum_2F_Text_PikachuSoonIPromise::
    .string "Yeah, bald ein Pikachu, ich schöre es!$"

PewterCity_Museum_2F_Text_SpaceShuttle::
    .string "Ein Raumschiff$"

PewterCity_Museum_2F_Text_MeteoriteThatFellOnMtMoon::
    .string "Ein Meteorit fiel auf den Mondberg.\n"
    .string "Man sagt es sei ein Mondstein.$"

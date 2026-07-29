EcruteakCity_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EcruteakCity_PokemonCenter_OnTransition
	.byte 0

EcruteakCity_PokemonCenter_OnTransition::
	setrespawn HEAL_LOCATION_ECRUTEAK_CITY_HNS
	end

EcruteakCity_PokemonCenter_EventScript_Bill::
	lock
	delay 30
	playse SE_PC_OFF
	delay 55
	faceplayer
	msgbox EcruteakCity_PokemonCenter1F_Text_Bill1, MSGBOX_DEFAULT
	msgbox EcruteakCity_PokemonCenter1F_Text_Bill2, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_NORTH, EcruteakCity_PokemonCenter_EventScript_BillLeaveBot
	call_if_eq VAR_FACING, DIR_WEST, EcruteakCity_PokemonCenter_EventScript_BillLeaveTop
	playse SE_EXIT
	setflag FLAG_HIDE_ECRUTEAK_BILL
	removeobject LOCALID_ECRUTEAK_BILL
	setflag FLAG_SYS_PC_BILL
	clearflag FLAG_HIDE_GOLDENROD_BILL
	release
	end

EcruteakCity_PokemonCenter_EventScript_BillFaceDown::
	turnobject LOCALID_ECRUTEAK_BILL, DIR_SOUTH
	return

EcruteakCity_PokemonCenter_EventScript_BillFaceRight::
	turnobject LOCALID_ECRUTEAK_BILL, DIR_EAST
	return

EcruteakCity_PokemonCenter_EventScript_BillLeaveTop::
	applymovement LOCALID_ECRUTEAK_BILL, EcruteakCity_PokemonCenter_Movement_BillTop
	waitmovement 0
	return

EcruteakCity_PokemonCenter_EventScript_BillLeaveBot::
	applymovement LOCALID_ECRUTEAK_BILL, EcruteakCity_PokemonCenter_Movement_BillBot
	waitmovement 0
	return

EcruteakCity_PokemonCenter_EventScript_Hiker::
	lock
	faceplayer
	msgbox EcruteakCity_PokemonCenter1F_Text_PokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_PokemonCenter_EventScript_Woman::
	lock
	faceplayer
	msgbox EcruteakCity_PokemonCenter1F_Text_CooltrainerF, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_PokemonCenter_EventScript_Nerd::
	lock
	faceplayer
	msgbox EcruteakCity_PokemonCenter1F_Text_GymGuide, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_PokemonCenter_Movement_BillTop:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

EcruteakCity_PokemonCenter_Movement_BillBot:
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	step_end


EcruteakCity_PokemonCenter1F_Text_Bill1:
	.string "Hi, ich bin Bill. Und wer bist du?\p"
	.string "Hmm, {PLAYER}?\n"
	.string "Du bist gerade zum richtigen Zeitpunkt\l"
	.string "gekommen.$"

EcruteakCity_PokemonCenter1F_Text_Bill2:
	.string "Ich habe gerade mein Pokémon\n"
	.string "Lager-System fertig eingestellt.\p"
	.string "Du kennst doch den PC, den du\n"
	.string "zum Aufbewahren deiner Pokémon\p"
	.string "benutzt, oder?\p"
	.string "Diesen habe ich selbst entwickelt!\p"
	.string "Jetzt, wo ich diesen hier installiert\n"
	.string "habe, läuft mein PC in allen\l"
	.string "Pokécenter in Johto und Kanto.\p"
	.string "Ich muss schnell zurück nach\n"
	.string "Dukatia und meine Leute sehen.\l"
	.string "Du kannst aber jederzeit vorbeikommen!\n"
	.string "\p"
	.string "Tschüss!$"

EcruteakCity_PokemonCenter1F_Text_PokefanM:
	.string "Sowohl der Tanz der Kimono-Girls\p"
	.string "als auch die Art,\n"
	.string "wie sie ihre Pokémon einsetzen,\l"
	.string "ist wunderbar!$"

EcruteakCity_PokemonCenter1F_Text_PokefanM_Mobile:
	.string "Du hoffst, hier\n"
	.string "mehr Kämpfe zu erleben, nicht wahr?\p"
	.string "Es gibt offensichtlich einen\p"
	.string "Ort, an dem sich Trainer treffen.\p"
	.string "Wo, fragst du?\p"
	.string "Kurz nach Oliviana City.$"

EcruteakCity_PokemonCenter1F_Text_CooltrainerF:
	.string "Jens, der Arenaleiter, ist sooo cool!\n"
	.string "Seine Pokémon sind auch total stark!$"

EcruteakCity_PokemonCenter1F_Text_GymGuide:
	.string "Hm, der See des Zorns… das plötzliche\n"
	.string "Erscheinen des roten Garados…\l"
	.string "Da ist doch irgendwas im Busch!\n$"


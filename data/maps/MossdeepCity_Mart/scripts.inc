MossdeepCity_Mart_MapScripts::
	.byte 0

MossdeepCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart MossdeepCity_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
MossdeepCity_Mart_Pokemart:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	pokemartlistend

MossdeepCity_Mart_EventScript_Woman::
	msgbox MossdeepCity_Mart_Text_ReviveIsFantastic, MSGBOX_NPC
	end

MossdeepCity_Mart_EventScript_Boy::
	msgbox MossdeepCity_Mart_Text_MaxRepelLastsLongest, MSGBOX_NPC
	end

MossdeepCity_Mart_EventScript_Sailor::
	msgbox MossdeepCity_Mart_Text_NetAndDiveBallsRare, MSGBOX_NPC
	end

MossdeepCity_Mart_Text_ReviveIsFantastic:
	.string "Beleber ist einfach fantastisch!\p"
	.string "Gib es einem besiegten Pokémon und\n"
	.string "es ist wieder fit.\p"
	.string "Aber Vorsicht! Beleber füllt nicht die\n"
	.string "verbrauchten AP neu auf!$"

MossdeepCity_Mart_Text_MaxRepelLastsLongest:
	.string "Top-Schutz hält alle schwachen\n"
	.string "Pokémon auf Distanz.\p"
	.string "Von allen Schutz-Sprays hält dieses am\n"
	.string "längsten an.$"

MossdeepCity_Mart_Text_NetAndDiveBallsRare:
	.string "Der Netz- und der Tauchball sind\n"
	.string "seltene Pokébälle, die in\l"
	.string "Moosbach City hergestellt werden.\p"
	.string "Ein Netzball ist höchst wirkungsvoll\n"
	.string "bei Käfer- und Wasser-Pokémon.\p"
	.string "Der Tauchball ist wirkungsvoll bei\n"
	.string "Pokémon, die in der Tiefsee leben.$"


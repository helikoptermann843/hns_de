LavenderTown_SoulHouse_hns_MapScripts::
	.byte 0

LavenderTownSoulHouse_EventScript_MrFuji::
	msgbox MrFuji_Text_Main, MSGBOX_NPC
	end
LavenderTownSoulHouse_EventScript_Lass::
	msgbox SoulHouse_Text_Lass, MSGBOX_NPC
	end
LavenderTownSoulHouse_EventScript_Teacher::
	msgbox SoulHouse_Text_Teacher, MSGBOX_NPC
	end
LavenderTownSoulHouse_EventScript_Granny::
	msgbox SoulHouse_Text_Granny, MSGBOX_NPC
	end

MrFuji_Text_Main:
	.string "Mr. Fuji: Willkommen.\p"
	.string "Hmm… Du scheinst deine Pokémon\n"
	.string "freundlich und liebevoll zu erziehen.\p"
	.string "Pokémon-Liebhaber kommen hierher,\n"
	.string "um den verstorbenen Pokémon Respekt\l"
	.string "zu zollen.\p"
	.string "Bitte erweise den Seelen der\n"
	.string "verstorbenen Pokémon dein Mitgefühl.\p"
	.string "Ich bin sicher, das macht sie\n"
	.string "glücklich.$"

SoulHouse_Text_Teacher:
	.string "Ich glaube, hier liegen noch andere\n"
	.string "Pokémon begraben.\p"
	.string "Es gibt viele Kammern, die nur\n"
	.string "Mr. Fuji betreten darf.$"

SoulHouse_Text_Lass:
	.string "Ich besuche mit\n"
	.string "meiner Mutter die Grabmale der\l"
	.string "Pokémon…$"

SoulHouse_Text_Granny:
	.string "Ich habe so lange mit diesen Pokémon\n"
	.string "zusammengelebt, dass sie für mich\l"
	.string "denselben Stellenwert einnehmen\l"
	.string "wie meine Enkelkinder…$"

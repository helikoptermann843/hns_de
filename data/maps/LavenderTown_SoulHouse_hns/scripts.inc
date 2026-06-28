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
	.string "MR. FUJI: Willkommen.\p"
	.string "Hmm… Du scheinst deine Pokémon\n"
	.string "freundlich und liebevoll zu erziehen.\n"
	.string "\p"
	.string "Pokémon-Liebhaber kommen hierher,\n"
	.string "um den verstorbenen Pokémon Respekt\n"
	.string "zu zollen.\p"
	.string "Bitte erweise den Seelen der\n"
	.string "verstorbenen Pokémon dein Mitgefühl.\p"
	.string "Ich bin sicher, das macht sie\n"
	.string "glücklich.$"

SoulHouse_Text_Teacher:
	.string "Ich glaube, hier\n"
	.string "liegen noch andere Pokémon begraben.\p"
	.string "Es gibt viele\n"
	.string "Kammern, die nur MR. FUJI betreten\l"
	.string "darf.$"

SoulHouse_Text_Lass:
	.string "Ich besuche mit\n"
	.string "meiner Mutter die Grabmale der\l"
	.string "Pokémon…$"

SoulHouse_Text_Granny:
	.string "Die Pokémon, die bei mir lebten…\p"
	.string "Ich hatte sie so\n"
	.string "lieb wie meine Enkelkinder…$"

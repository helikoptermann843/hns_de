FiveIsland_LostCave_Room4_Frlg_MapScripts::
	.byte 0

FiveIsland_LostCave_Room4_EventScript_Laura::
	trainerbattle_single TRAINER_PSYCHIC_LAURA, FiveIsland_LostCave_Room4_Text_LauraIntro, FiveIsland_LostCave_Room4_Text_LauraDefeat
	msgbox FiveIsland_LostCave_Room4_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
	end

FiveIsland_LostCave_Room4_Text_LauraIntro::
	.string "Ich glaube, dass in dieser\n"
	.string "Höhle eine geheimnisvolle\l"
	.string "Kraft wirkt.$"

FiveIsland_LostCave_Room4_Text_LauraDefeat::
	.string "Wenn du nicht den richtigen\n"
	.string "Tunnel erwischst, kommst\l"
	.string "du nie voran!$"

FiveIsland_LostCave_Room4_Text_LauraPostBattle::
	.string "Vor kurzem ging eine Frau\n"
	.string "in diese Höhlen.$"


ThreeIsland_House2_Frlg_MapScripts::
	.byte 0

ThreeIsland_House2_EventScript_Man::
	lock
	faceplayer
	famechecker FAMECHECKER_SABRINA, 1
	msgbox ThreeIsland_House2_Text_IAdmireSabrina
	release
	end

ThreeIsland_House2_EventScript_Rocker::
	msgbox ThreeIsland_House2_Text_CantMakeThisSpoonBend, MSGBOX_NPC
	end

ThreeIsland_House2_Text_CantMakeThisSpoonBend::
	.string "Urgh!\n"
	.string "Kiah!\p"
	.string "… es ist unnütz! Ich kann\n"
	.string "diesen Löffel nicht mit meiner\l"
	.string "Willenskraft verbiegen.\p"
	.string "Vielleicht habe ich keine\n"
	.string "Psychokräfte!$"

ThreeIsland_House2_Text_IAdmireSabrina::
	.string "EICH: {VAR}!\p"
	.string "Du hast begriffen, dass dein Sieg\n"
	.string "nicht allein dein Verdienst war!\p"
	.string "Die Beziehung zu deinen POKéMON\n"
	.string "ist vorbildlich!\p"
	.string "{VAR}!\n"
	.string "Folge mir!$"


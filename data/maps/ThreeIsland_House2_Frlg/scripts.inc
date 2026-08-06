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
	.string "Kennst du ein Mädchen, das in\n"
	.string "SAFFRONIA City\l"
	.string "ARENALEITERIN ist?\l"
	.string "Sie setzt Pokémon der Element-\l"
	.string "klasse Psycho ein, nicht wahr?\p"
	.string "Ich bewundere sie wirklich!\p"
	.string "Ich hörte, dass sie ein cooles\n"
	.string "Mädchen ist und sie soll schön\l"
	.string "sein!$"


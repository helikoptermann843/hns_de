ThreeIsland_House5_Frlg_MapScripts::
	.byte 0

ThreeIsland_House5_EventScript_LittleGirl::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_LOSTELLE, ThreeIsland_House5_EventScript_LittleGirlLostelleFound
	msgbox ThreeIsland_House5_Text_ImNotLostelle
	release
	end

ThreeIsland_House5_EventScript_LittleGirlLostelleFound::
	msgbox ThreeIsland_House5_Text_IllGoPlayWithLostelle
	release
	end

ThreeIsland_House5_Text_ImNotLostelle::
	.string "Welch Rückschlag…\n"
	.string "Wir müssen uns neu gruppieren.\p"
	.string "Du! Denk nicht einmal daran,\n"
	.string "einzutreten!\p"
	.string "Wenn du weißt, was gut für dich\n"
	.string "ist, denk nicht einmal daran!$"

ThreeIsland_House5_Text_IllGoPlayWithLostelle::
	.string "Was zur…?\n"
	.string "Du bist im Weg! Verschwinde!$"


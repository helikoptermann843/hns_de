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
	.string "Ich?\n"
	.string "Ich bin nicht Irrma!\p"
	.string "Sie ist vermutlich im Beerenforst!\p"
	.string "Sie sammelt dort Beeren, um\n"
	.string "das Mittagessen zuzubereiten!$"

ThreeIsland_House5_Text_IllGoPlayWithLostelle::
	.string "Ich werde heute mit Irrma spielen!$"


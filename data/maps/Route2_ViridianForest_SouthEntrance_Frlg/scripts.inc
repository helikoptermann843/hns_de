Route2_ViridianForest_SouthEntrance_Frlg_MapScripts::
	.byte 0

Route2_ViridianForest_SouthEntrance_EventScript_Woman1::
	msgbox Route2_ViridianForest_SouthEntrance_Text_ForestIsMaze, MSGBOX_NPC
	end

Route2_ViridianForest_SouthEntrance_EventScript_Woman2::
	msgbox Route2_ViridianForest_SouthEntrance_Text_RattataHasWickedBite, MSGBOX_NPC
	end

Route2_ViridianForest_SouthEntrance_Text_ForestIsMaze::
	.string "Entschuldige, dass ich mich über\n"
	.string "dich aufgeregt habe. Du siehst aus\l"
	.string "wie mein kleiner Bruder…$"

Route2_ViridianForest_SouthEntrance_Text_RattataHasWickedBite::
	.string "Besitzt du ein {PLAYER}?\p"
	.string "Willst du es gegen {PLAYER}\n"
	.string "tauschen?$"


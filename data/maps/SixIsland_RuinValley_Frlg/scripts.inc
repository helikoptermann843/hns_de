SixIsland_RuinValley_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SixIsland_RuinValley_OnLoad
	.byte 0

SixIsland_RuinValley_OnLoad::
	call_if_set FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE, SixIsland_RuinValley_EventScript_OpenDottedHoleDoor
	end

SixIsland_RuinValley_EventScript_OpenDottedHoleDoor::
	setmetatile 24, 24, METATILE_SeviiIslands67_DottedHoleDoor_Open, 0
	return

SixIsland_RuinValley_EventScript_Scientist::
	lock
	msgbox SixIsland_RuinValley_Text_CantFigureOutHowToGetInside
	applymovement LOCALID_RUIN_VALLEY_SCIENTIST, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SixIsland_RuinValley_Text_IFoundThisPlace
	applymovement LOCALID_RUIN_VALLEY_SCIENTIST, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SixIsland_RuinValley_EventScript_DottedHoleDoor::
	lockall
	goto_if_set FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE, SixIsland_RuinValley_EventScript_DottedHoleDoorOpen
	msgbox SixIsland_RuinValley_Text_CheckDoorMoreThoroughly, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SixIsland_RuinValley_EventScript_IgnoreDottedHoleDoor
	msgbox SixIsland_RuinValley_Text_SeveralDotsOnTheDoor
	braillemsgbox Braille_Text_Cut
	releaseall
	end

SixIsland_RuinValley_EventScript_DottedHoleDoorOpen::
	msgbox SixIsland_RuinValley_Text_DoorIsOpen
	releaseall
	end

SixIsland_RuinValley_EventScript_IgnoreDottedHoleDoor::
	msgbox SixIsland_RuinValley_Text_LeftDoorAlone
	releaseall
	end

SixIsland_RuinValley_Text_CantFigureOutHowToGetInside::
	.string "Wenn ich ein Fahrrad hätte, würde\n"
	.string "ich den Radweg benutzen!$"

SixIsland_RuinValley_Text_IFoundThisPlace::
	.string "Willkommen!\p"
	.string "Nebenan kannst du deine\n"
	.string "Münzen gegen Preise tauschen.$"

SixIsland_RuinValley_Text_CheckDoorMoreThoroughly::
	.string "Die Tür bewegt sich nicht.\n"
	.string "Sorgfältiger untersuchen?$"

SixIsland_RuinValley_Text_LeftDoorAlone::
	.string "Dein Münzkorb ist voll!$"

SixIsland_RuinValley_Text_SeveralDotsOnTheDoor::
	.string "Nein? Dann komm vorbei, wenn du\n"
	.string "spielen möchtest!$"

SixIsland_RuinValley_Text_DoorIsOpen::
	.string "Die Tür ist offen.$"

SixIsland_RuinValley_Text_StanlyIntro::
	.string "Es scheint, als ob es noch viele\n"
	.string "ungelöste Rätsel in dieser\l"
	.string "Welt gibt.$"

SixIsland_RuinValley_Text_StanlyDefeat::
	.string "Hm…$"

SixIsland_RuinValley_Text_StanlyPostBattle::
	.string "Ich rate dir, eines Tages auch\n"
	.string "über die Rätsel und Geheimnisse\l"
	.string "unserer Welt nachzudenken.$"

SixIsland_RuinValley_Text_FosterIntro::
	.string "Ich bin neugierig, zu erfahren, was\n"
	.string "dich hierher gebracht hat!$"

SixIsland_RuinValley_Text_FosterDefeat::
	.string "Es ist schon so lange her, dass\n"
	.string "ich gekämpft habe. Meine\l"
	.string "Instinkte sind schwach.$"

SixIsland_RuinValley_Text_FosterPostBattle::
	.string "Es gibt einige Ruinen auf\n"
	.string "Sevii Eiland.\p"
	.string "Der Großteil von ihnen ist\n"
	.string "vor langer Zeit entstanden.$"

SixIsland_RuinValley_Text_LarryIntro::
	.string "Man sagt, dass es auf dieser Insel\n"
	.string "geheimnisvolle Steine geben soll.\p"
	.string "Ich nehme an, dass es etwas mit\n"
	.string "den Ruinen hier zu tun hat.$"

SixIsland_RuinValley_Text_LarryDefeat::
	.string "Oh, interessant.$"

SixIsland_RuinValley_Text_LarryPostBattle::
	.string "Die Ruinen dort drüben…\p"
	.string "Ich hatte noch nicht das Glück,\n"
	.string "herauszufinden, wie man hinein-\l"
	.string "kommt.$"

SixIsland_RuinValley_Text_DarylIntro::
	.string "Ein Kampf mit dir, hier oben?$"

SixIsland_RuinValley_Text_DarylDefeat::
	.string "Oh, mein Herz zerbricht, da du\n"
	.string "so überlegen warst.$"

SixIsland_RuinValley_Text_DarylPostBattle::
	.string "Genieße die Kletterfreude!$"

SixIsland_RuinValley_Text_HectorIntro::
	.string "Ich kenne mich in dieser Gegend\n"
	.string "gut aus.$"

SixIsland_RuinValley_Text_HectorDefeat::
	.string "Du musst nicht nachhaken.\n"
	.string "Ich verrate es dir gerne.$"

SixIsland_RuinValley_Text_HectorPostBattle::
	.string "Die Türe zu den Ruinen…\n"
	.string "Sie ist mit diesen merkwürdigen\l"
	.string "Mustern übersät.\p"
	.string "Ich weiß allerdings nicht, was sie\n"
	.string "bedeuten.$"

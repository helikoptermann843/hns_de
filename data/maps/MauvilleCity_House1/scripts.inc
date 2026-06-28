MauvilleCity_House1_MapScripts::
	.byte 0

MauvilleCity_House1_EventScript_RockSmashDude::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_ROCK_SMASH, MauvilleCity_House1_EventScript_ReceivedRockSmash
	msgbox MauvilleCity_House1_Text_ImRockSmashDudeTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_HM_ROCK_SMASH
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
	setflag FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY
	msgbox MauvilleCity_House1_Text_ExplainRockSmash, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House1_EventScript_ReceivedRockSmash::
	msgbox MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House1_Text_ImRockSmashDudeTakeThis:
	.string "Woohoo!\p"
	.string "Die Leute nennen mich den\n"
	.string "ZERTRÜMMERER, aber ich finde den Namen\l"
	.string "unter meinem Niveau!\p"
	.string "Ich verdiene doch wohl etwas mehr\n"
	.string "Respekt! Man sollte mich ZERTRÜMMERER-\l"
	.string "Meister nennen!\p"
	.string "Woohoo, deine POKéMON sehen wirklich\n"
	.string "sehr stark aus.\p"
	.string "Das sehe ich gerne!\n"
	.string "Hier, nimm diese VM!$"

MauvilleCity_House1_Text_ExplainRockSmash:
	.string "Diese VM enthält ZERTRÜMMERER.\p"
	.string "Wenn du unterwegs auf große\n"
	.string "Felsbrocken stößt…\p"
	.string "Dann nutze diese VM, um dir den Weg\n"
	.string "freizumachen.\p"
	.string "Jawohl! Zertrümmert Hindernisse, das\n"
	.string "ist meine Devise. Woohoo!$"

MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock:
	.string "Oh ja, wenn du einen Felsen\n"
	.string "zertrümmerst, könnte ein POKéMON\l"
	.string "zum Vorschein kommen.\p"
	.string "Woohoo!$"


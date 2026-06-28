MossdeepCity_House3_MapScripts::
	.byte 0

MossdeepCity_House3_EventScript_SuperRodFisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SUPER_ROD, MossdeepCity_House3_EventScript_ReceivedSuperRod
	msgbox MossdeepCity_House3_Text_YouWantSuperRod, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MossdeepCity_House3_EventScript_DeclineSuperRod
	msgbox MossdeepCity_House3_Text_SuperRodIsSuper, MSGBOX_DEFAULT
	giveitem ITEM_SUPER_ROD
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SUPER_ROD
	msgbox MossdeepCity_House3_Text_TryDroppingRodInWater, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House3_EventScript_ReceivedSuperRod::
	msgbox MossdeepCity_House3_Text_GoAfterSeafloorPokemon, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House3_EventScript_DeclineSuperRod::
	msgbox MossdeepCity_House3_Text_DontYouLikeToFish, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House3_Text_YouWantSuperRod:
	.string "Hey, du da! TRAINER!\n"
	.string "Eine SUPERANGEL ist wirklich super!\p"
	.string "Man kann sagen, was man will, aber mit\n"
	.string "diesem Baby kann man POKéMON vom\l"
	.string "Meeresboden weg fangen!\p"
	.string "Na? Du würdest doch zu gerne auch so\n"
	.string "eine Angel haben, oder?$"

MossdeepCity_House3_Text_SuperRodIsSuper:
	.string "Sicher, sicher!\n"
	.string "Schließlich ist eine SUPERANGEL super!$"

MossdeepCity_House3_Text_TryDroppingRodInWater:
	.string "Stehst du am Wasser, dann wirf die\n"
	.string "ANGEL aus und schau, was anbeißt!$"

MossdeepCity_House3_Text_DontYouLikeToFish:
	.string "Was??? Liebst du das Angeln nicht?$"

MossdeepCity_House3_Text_GoAfterSeafloorPokemon:
	.string "Mit deiner SUPERANGEL kannst du die\n"
	.string "POKéMON am Meeresboden fangen.$"


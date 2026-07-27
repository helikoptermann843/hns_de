ThreeIsland_Mart_Frlg_MapScripts::
	.byte 0

ThreeIsland_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart ThreeIsland_Mart_Items
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
ThreeIsland_Mart_Items::
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE
	release
	end

ThreeIsland_Mart_EventScript_Picnicker::
	msgbox ThreeIsland_Mart_Text_TrueThatCeldadonDeptStoreBigger, MSGBOX_NPC
	end

ThreeIsland_Mart_EventScript_BugCatcher::
	msgbox ThreeIsland_Mart_Text_PeopleHealWithBerriesFromForest, MSGBOX_NPC
	end

ThreeIsland_Mart_EventScript_Youngster::
	msgbox ThreeIsland_Mart_Text_BikersWereAboutToTrashMart, MSGBOX_NPC
	end

ThreeIsland_Mart_Text_TrueThatCeldadonDeptStoreBigger::
	.string "Mampf...\p"
	.string "Der Mann dort drüben am Tisch hat\n"
	.string "Haus und Hof verzockt.$"

ThreeIsland_Mart_Text_PeopleHealWithBerriesFromForest::
	.string "Ich kaufe hier manchmal Medizin.\p"
	.string "Viele Leute heilen POKéMON mit\n"
	.string "BEEREN aus dem BEERENFORST.\p"
	.string "Schließlich sind BEEREN umsonst\n"
	.string "und ihr Vorrat ist unerschöpflich!$"

ThreeIsland_Mart_Text_BikersWereAboutToTrashMart::
	.string "Diese BIKER wollten den POKéMON-\n"
	.string "SUPERMARKT in Schutt und Asche\l"
	.string "legen.\l"
	.string "Ich bin froh, dass sie weg sind!$"


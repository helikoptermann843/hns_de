CeladonCity_DepartmentStore_3F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CeladonDeptElevator_OnFrame
	.byte 0

CeladonDept3_EventScript_Youngster::
	msgbox CeladonDeptStore3F_Text_Youngster, MSGBOX_NPC
	end
CeladonDept3_EventScript_Gbakid1::
	msgbox CeladonDeptStore3F_Text_GameboyKid1, MSGBOX_NPC
	end
CeladonDept3_EventScript_Gbakid2::
	msgbox CeladonDeptStore3F_Text_GameboyKid2, MSGBOX_NPC
	end
CeladonDept3_EventScript_SuperNerd::
	msgbox CeladonDeptStore3F_Text_SuperNerd, MSGBOX_NPC
	end
CeladonDept3_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart CeladonDept3_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
CeladonDept3_Pokemart:
	.2byte ITEM_TM_SAFEGUARD
	.2byte ITEM_TM_CAPTIVATE
	.2byte ITEM_TM_STEALTH_ROCK
	.2byte ITEM_TM_BRINE
	.2byte ITEM_TM_AVALANCHE
	.2byte ITEM_TM_DARK_PULSE
	pokemartlistend

CeladonDept3_EventScript_Directory::
	msgbox CeladonDeptStore3F_Text_Directory, MSGBOX_SIGN
	end

CeladonDeptStore3F_Text_Youngster:
	.string "Hm, ich kann mich nicht entscheiden,\n"
	.string "welches Pokémon diese TM erhalten soll!$"

CeladonDeptStore3F_Text_GameboyKid1:
	.string "Oh, oh! Ich habe mein Pokémon\n"
	.string "getauscht, ohne ihm vorher\l"
	.string "Up-Grade wegzunehmen!$"

CeladonDeptStore3F_Text_GameboyKid2:
	.string "Klasse! Jetzt kann ich mir endlich\n"
	.string "doch noch ein PORYGON besorgen!\p"
	.string "Ich habe einfach kein Händchen für\n"
	.string "Münzspiele, und deshalb haben mir\l"
	.string "immer noch ein paar Münzen gefehlt…\p"
	.string "…Huch?\p"
	.string "Das getauschte PORYGON hat sich\n"
	.string "in ein anderes Pokémon verwandelt!$"

CeladonDeptStore3F_Text_SuperNerd:
	.string "Der TM-Laden hat ein paar seltene\n"
	.string "Attacken im Angebot!$"

CeladonDeptStore3F_Text_Directory:
	.string "Wir peppen deine Pokémon auf!\n"
	.string "2S: TM-Laden$"


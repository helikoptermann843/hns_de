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
	.string "Ich kann mich nicht entscheiden,\n"
	.string "auf welches Pokémon ich diese TM\l"
	.string "anwenden soll…$"

CeladonDeptStore3F_Text_GameboyKid1:
	.string "Oh-oh! Ich habe mein Pokémon\n"
	.string "getauscht,\l"
	.string "ohne das Upgrade vorher zu entfernen.$"

CeladonDeptStore3F_Text_GameboyKid2:
	.string "Juhu! Endlich bekomme ich ein Porygon!\n"
	.string "\p"
	.string "Ich bin schlecht an den\n"
	.string "Spielautomaten,\n"
	.string "deshalb hatte ich nie genug Münzen…\p"
	.string "…Huh?\p"
	.string "Das getauschte Porygon hat sich in\n"
	.string "ein anderes Pokémon verwandelt!$"

CeladonDeptStore3F_Text_SuperNerd:
	.string "Der TM-Laden verkauft ein paar seltene\n"
	.string "Attacken.$"

CeladonDeptStore3F_Text_Directory:
	.string "2F: TM-LADEN\p"
	.string "Stärke deine Pokémon!$"


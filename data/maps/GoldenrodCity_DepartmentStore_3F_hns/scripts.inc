GoldenrodCity_DepartmentStore_3F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GoldenrodDeptElevator_OnFrame
	.byte 0

GoldenrodDeptStore3_EventScript_Nerd::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_3FSuperNerd, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore3_EventScript_Sign::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_3FDirectory, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore3_EventScript_Rocker::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_3FRocker, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore_Text_3FSuperNerd:
	.string "I-ich bin so ungeduldig, dass i-ich in\n"
	.string "einem Pokémon-Kampf i-immer gleich\l"
	.string "X-Tempo einsetze. I-ich erhöhe damit\l"
	.string "die Initiative meines Pokémon!$"

GoldenrodDeptStore_Text_3FRocker:
	.string "Hey! Setzt du im Kampf öfter auch mal\n"
	.string "X-Spezial ein?\p"
	.string "Das ist einfach toll! Es verstärkt den\n"
	.string "Spezial-Angriff deines Pokémon!$"

GoldenrodDeptStore3_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart GoldenrodDeptStore3_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
GoldenrodDeptStore3_Pokemart:
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_SP_ATK
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_X_ACCURACY
	pokemartlistend

GoldenrodDeptStore_Text_3FDirectory:
	.string "Für Siegeshungrige\p"
	.string "2S Kampfkollektion$"

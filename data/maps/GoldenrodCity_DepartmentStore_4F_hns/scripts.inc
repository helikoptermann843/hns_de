GoldenrodCity_DepartmentStore_4F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GoldenrodDeptElevator_OnFrame
	.byte 0

GoldenrodDeptStore4_EventScript_Cooltrainer::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_4FCooltrainerM, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore4_EventScript_BugCatcher::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_4FBugCatcher, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore4_EventScript_GBAKid::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_4FGameboyKid, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore4_EventScript_Sign::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_4FDirectory, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore_Text_4FCooltrainerM:
	.string "Ich pumpe mein Team mit Protein voll,\n"
	.string "weil ich auf starke Pokémon stehe und\l"
	.string "es ihren Angriffs-Wert steigert!$"

GoldenrodDeptStore_Text_4FBugCatcher:
	.string "Mit Eisen kannst du die Verteidigung\n"
	.string "deiner Pokémon verstärken!$"

GoldenrodDeptStore_Text_4FGameboyKid:
	.string "Manche Pokémon entwickeln sich\n"
	.string "nur durch Tausch.\p"
	.string "Ich kenne vier: Maschock, Kadabra,\n"
	.string "Alpollo und Georok.\p"
	.string "Ich hörte, es gibt noch weitere.$"

GoldenrodDeptStore4_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart GoldenrodDeptStore4_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
GoldenrodDeptStore4_Pokemart:
	.2byte ITEM_PROTEIN
	.2byte ITEM_CALCIUM
	.2byte ITEM_IRON
	.2byte ITEM_ZINC
	.2byte ITEM_CARBOS
	.2byte ITEM_HP_UP
	pokemartlistend

GoldenrodDeptStore_Text_4FDirectory:
	.string "Wir kümmern uns um deine Pokémon 3S:\n"
	.string "Arznei$"

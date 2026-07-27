Gate_AzaleaTown_IlexForest_hns_MapScripts::
	.byte 0

Gate_AzaleaTown_IlexForest_EventScript_Officer::
	lock
	faceplayer
	msgbox Gate_AzaleaTown_IlexForest_Text_Officer, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_AzaleaTown_IlexForest_EventScript_Granny::
	lock
	faceplayer
	msgbox Gate_AzaleaTown_IlexForest_Text_Granny, MSGBOX_DEFAULT
	closemessage
	release
	end

Gate_AzaleaTown_IlexForest_Text_Officer:
	.string "Pass auf, dass du dich nicht verläufst!\n"
	.string "Der Steineichenwald ist sehr groß!$"

Gate_AzaleaTown_IlexForest_Text_Granny:
	.string "Es heißt, ein Schutzpatron wache über\n"
	.string "den Steineichenwald…\l"
	.string "Mach also besser keine Dummheiten!$"

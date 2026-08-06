SaffronCity_CopycatsHouse_1F_Frlg_MapScripts::
	.byte 0

SaffronCity_CopycatsHouse_1F_EventScript_CopycatsMom::
	msgbox SaffronCity_CopycatsHouse_1F_Text_DaughterIsSelfCentered, MSGBOX_NPC
	end

SaffronCity_CopycatsHouse_1F_EventScript_CopycatsDad::
	msgbox SaffronCity_CopycatsHouse_1F_Text_DaughterLikesToMimicPeople, MSGBOX_NPC
	end

SaffronCity_CopycatsHouse_1F_EventScript_Chansey::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
	msgbox SaffronCity_CopycatsHouse_1F_Text_Chansey
	waitmoncry
	release
	end

SaffronCity_CopycatsHouse_1F_Text_DaughterIsSelfCentered::
	.string "Meine Tochter ist furchtbar\n"
	.string "schüchtern! Sie hat nur wenige\l"
	.string "Freunde!$"

SaffronCity_CopycatsHouse_1F_Text_DaughterLikesToMimicPeople::
	.string "Meine Tochter ahmt gerne Leute\n"
	.string "nach.\p"
	.string "Wegen ihres Mienenspiels nennt man\n"
	.string "sie die Nachahmerin!$"

SaffronCity_CopycatsHouse_1F_Text_Chansey::
	.string "Chaneira: Cha! Neera!$"


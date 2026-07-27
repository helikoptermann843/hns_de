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
	.string "Du wirst nicht ungestraft\n"
	.string "davonkommen!$"

SaffronCity_CopycatsHouse_1F_Text_DaughterLikesToMimicPeople::
	.string "Hier drüben!\n"
	.string "Wir versuchen, hier zu graben.\p"
	.string "Der Schatz, über den die VORS.\n"
	.string "reden, muss hier irgendwo sein.$"

SaffronCity_CopycatsHouse_1F_Text_Chansey::
	.string "Warum musstest du gewinnen?$"


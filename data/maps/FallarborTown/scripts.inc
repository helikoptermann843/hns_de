FallarborTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
	.byte 0

FallarborTown_OnTransition:
	setflag FLAG_VISITED_FALLARBOR_TOWN
	setvar VAR_CONTEST_HALL_STATE, 0
	clearflag FLAG_CONTEST_SKETCH_CREATED
	end

FallarborTown_EventScript_ExpertM::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_ExpertMNormal::
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
	release
	end

FallarborTown_EventScript_Girl::
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
	end

FallarborTown_EventScript_Gentleman::
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
	end

FallarborTown_EventScript_Azurill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FallarborTown_EventScript_BattleTentSign::
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_TownSign::
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
	end

FallarborTown_EventScript_MoveTutorSign::
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
	end

FallarborTown_Text_ShadyCharactersCozmosHome:
	.string "Was ist los? Was ist los?\p"
	.string "Ich habe eine zwielichtige Gestalt aus\n"
	.string "dem LABOR von PROF. KOSMO flitzen\l"
	.string "sehen.$"

FallarborTown_Text_RegionKnownForMeteors:
	.string "Diese Region ist schon seit Urzeiten\n"
	.string "für ihre Meteoritenschauer bekannt.\p"
	.string "Man sagt, METEORFÄLLE sei durch\n"
	.string "den Aufprall eines METEORITen\l"
	.string "entstanden.$"

FallarborTown_Text_MyPreciousAzurill:
	.string "Schau mal! Guck doch mal!\n"
	.string "Das ist mein süßes AZURILL!\p"
	.string "Es ist glatt, weich und plüschig!$"

FallarborTown_Text_Azurill:
	.string "AZURILL: Rooreelooo.$"

FallarborTown_Text_HaveYouChallengedFlannery:
	.string "Hast du schon FLAVIA, die LEITERIN\n"
	.string "der ARENA von BAD LAVASTADT,\l"
	.string "herausgefordert?\p"
	.string "Ihr Großvater ist sehr berühmt.\n"
	.string "Er war einer der TOP VIER in der\l"
	.string "POKéMON LIGA.\p"
	.string "Es würde mich gar nicht wundern, wenn\n"
	.string "FLAVIA ebenfalls ein großer TRAINER\l"
	.string "wird.$"

FallarborTown_Text_BattleTentSign:
	.string "KAMPFCAMP LAUBWECHSELFELD\n"
	.string "“Mögen Sich Die Besten Teams Hier\l"
	.string "Treffen!”$"

FallarborTown_Text_TownSign:
	.string "LAUBWECHSELFELD\n"
	.string "“Eine Gemeinschaft von Farmern mit\l"
	.string "kleinen Gärten.”$"

FallarborTown_Text_MoveTutorSign:
	.string "HAUS des ATTACKEN-HELFERS\n"
	.string "“Neue Attacken für deine POKéMON.”$"


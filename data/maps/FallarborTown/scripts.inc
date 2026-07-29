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
	.string "dem Labor von Prof. Kosmo flitzen\l"
	.string "sehen.$"

FallarborTown_Text_RegionKnownForMeteors:
	.string "Diese Region ist schon seit Urzeiten\n"
	.string "für ihre Meteoritenschauer bekannt.\p"
	.string "Man sagt, Meteorfälle sei durch\n"
	.string "den Aufprall eines Meteoriten\l"
	.string "entstanden.$"

FallarborTown_Text_MyPreciousAzurill:
	.string "Schau mal! Guck doch mal!\n"
	.string "Das ist mein süßes Azurill!\p"
	.string "Es ist glatt, weich und plüschig!$"

FallarborTown_Text_Azurill:
	.string "Azurill: Rooreelooo.$"

FallarborTown_Text_HaveYouChallengedFlannery:
	.string "Hast du schon Flavia, die Leiterin\n"
	.string "der Arena von Bad Lavastadt,\l"
	.string "herausgefordert?\p"
	.string "Ihr Großvater ist sehr berühmt.\n"
	.string "Er war einer der Top Vier in der\l"
	.string "Pokémon Liga.\p"
	.string "Es würde mich gar nicht wundern, wenn\n"
	.string "Flavia ebenfalls ein großer Trainer\l"
	.string "wird.$"

FallarborTown_Text_BattleTentSign:
	.string "Kampfcamp Laubwechselfeld\n"
	.string "“Mögen Sich Die Besten Teams Hier\l"
	.string "Treffen!”$"

FallarborTown_Text_TownSign:
	.string "Laubwechselfeld\n"
	.string "“Eine Gemeinschaft von Farmern mit\l"
	.string "kleinen Gärten.”$"

FallarborTown_Text_MoveTutorSign:
	.string "Haus des Attacken-Helfers\n"
	.string "“Neue Attacken für deine Pokémon.”$"


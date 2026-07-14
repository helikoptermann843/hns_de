Route6_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route6_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route6_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route6_EventScript_Rex::
	trainerbattle_single TRAINER_REX_HNS, PokefanM_Text_RexSeen, PokefanM_Text_RexBeaten
	msgbox PokefanM_Text_RexAfter, MSGBOX_AUTOCLOSE
	end

Route6_EventScript_Allan::
	trainerbattle_single TRAINER_ALLAN_HNS, PokefanM_Text_AllanSeen, PokefanM_Text_AllanBeaten
	msgbox PokefanM_Text_AllanAfter, MSGBOX_AUTOCLOSE
	end

Route6_EventScript_Pokefan::
	msgbox Route6_Text_PokefanM, MSGBOX_NPC
	end

Route6_EventScript_Sign::
	msgbox Route6_Text_UndergroundPathSign, MSGBOX_SIGN
	end

Route6_EventScript_Item_Silver_Wind::
    finditem ITEM_TM_SILVER_WIND
    end

Route6_Text_PokefanM:
	.string "Die Straße zum KRAFTWERK bleibt\n"
	.string "gesperrt, bis das\l"
	.string "Problem gelöst wurde.$"

Route6_Text_UndergroundPathSign:
	.string "TUNNELPFAD\p"
	.string "AZURIA CITY - ORANIA CITY$"

PokefanM_Text_RexSeen:
	.string "Mein DAMHIRPLEX ist\n"
	.string "das niedlichste der ganzen Welt.$"

PokefanM_Text_RexBeaten:
	.string "Mein DAMHIRPLEX!$"

PokefanM_Text_RexAfter:
	.string "Sieh nur wie süß mein\n"
	.string "DAMHIRPLEX sich verhält!\p"
	.string "Mein Herz\n"
	.string "schmilzt dahin?$"

PokefanM_Text_AllanSeen:
	.string "Mein GRANBULL ist\n"
	.string "das niedlichste der ganzen Welt.$"

PokefanM_Text_AllanBeaten:
	.string "Mein GRANBULL!$"

PokefanM_Text_AllanAfter:
	.string "Sieh nur wie süß mein\n"
	.string "GRANBULL sich verhält!\p"
	.string "Mein Herz\n"
	.string "schmilzt dahin?$"


Route11_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route11_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route11_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route11_EventScript_Owen::
	trainerbattle_single TRAINER_OWEN_HNS, Route11_Text_YoungsterOwenSeen, Route11_Text_YoungsterOwenBeaten
	msgbox Route11_Text_YoungsterOwenAfterBattle, MSGBOX_AUTOCLOSE
	end

Route11_EventScript_Jason::
	trainerbattle_single TRAINER_JASON_HNS, Route11_Text_YoungsterJasonSeen, Route11_Text_YoungsterJasonBeaten
	msgbox Route11_Text_YoungsterJasonAfterBattle, MSGBOX_AUTOCLOSE
	end

Route11_EventScript_Herman::
	trainerbattle_single TRAINER_HERMAN_HNS, Route11_Text_PsychicHermanSeen, Route11_Text_PsychicHermanBeaten
	msgbox Route11_Text_PsychicHermanAfterBattle, MSGBOX_AUTOCLOSE
	end

Route11_EventScript_Fidel::
	trainerbattle_single TRAINER_FIDEL_HNS, Route11_Text_PsychicFidelSeen, Route11_Text_PsychicFidelBeaten
	msgbox Route11_Text_PsychicFidelAfterBattle, MSGBOX_AUTOCLOSE
	end

Route11_EventScript_Engineer::
	msgbox Route11_Text_Engineer, MSGBOX_NPC
	end

Route11_EventScript_Item_Grass_Knot::
    finditem ITEM_TM_GRASS_KNOT
    end

Route11_Text_Engineer:
	.string "Ich habe ein seltsames Pokémon\n"
	.string "im Baum klettern sehen,\l"
	.string "Es sah nicht wie ein Menki aus...$"

Route11_Text_YoungsterOwenSeen:
	.string "Bei Pokémon wird nicht gemogelt.\p"
	.string "Immer fair spielen.$"

Route11_Text_YoungsterOwenBeaten:
	.string "Huch? Wie konnte das passieren?$"

Route11_Text_YoungsterOwenAfterBattle:
	.string "Ich habe immer\n"
	.string "fair und ehrenhaft gekämpft.\p"
	.string "Ich habe es noch nie bedauert.$"

Route11_Text_YoungsterJasonSeen:
	.string "Es juckt und sticht, wenn ich\p"
	.string "mit meinen Shorts durchs Gras laufe.$"

Route11_Text_YoungsterJasonBeaten:
	.string "Aiyaaah! Ich bekam Dresche!$"

Route11_Text_YoungsterJasonAfterBattle:
	.string "Im Gras werde ich mehr Pokémon fangen.$"

Route11_Text_PsychicHermanSeen:
	.string "…$"

Route11_Text_PsychicHermanBeaten:
	.string "…$"

Route11_Text_PsychicHermanAfterBattle:
	.string "…\p"
	.string "Ich verlor, als\n"
	.string "ich meine Augen schloss…$"

Route11_Text_PsychicFidelSeen:
	.string "Ich kann es sehen…\p"
	.string "Ich kann alles über dich sehen…$"

Route11_Text_PsychicFidelBeaten:
	.string "Deine Stärke konnte ich nicht sehen…$"

Route11_Text_PsychicFidelAfterBattle:
	.string "Deine Überzeugung ist stark…\p"
	.string "Du bist stark,\n"
	.string "weil du an deine Pokémon glaubst.$"

Route11_Text_Sign:
	.string "ROUTE 11$"


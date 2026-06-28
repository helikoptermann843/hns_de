Route3_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route3_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route3_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route3_EventScript_Otis::
	trainerbattle_single TRAINER_OTIS_HNS, Route3_Text_FirebreatherOtis_Seen, Route3_Text_FirebreatherOtis_Beaten
	msgbox Route3_Text_FirebreatherOtis_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route3_EventScript_Warren::
	trainerbattle_single TRAINER_WARREN_HNS, Route3_Text_YoungsterWarren_Seen, Route3_Text_YoungsterWarren_Beaten
	msgbox Route3_Text_YoungsterWarren_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route3_EventScript_Jimmy::
	trainerbattle_single TRAINER_JIMMY_HNS, Route3_Text_YoungsterJimmy_Seen, Route3_Text_YoungsterJimmy_Beaten
	msgbox Route3_Text_YoungsterJimmy_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route3_EventScript_Burt::
	trainerbattle_single TRAINER_BURT_HNS, Route3_Text_FirebreatherBurt_Seen, Route3_Text_FirebreatherBurt_Beaten
	msgbox Route3_Text_FirebreatherBurt_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route3_EventScript_Sign::
	msgbox Route3_Text_MtMoonSquareSign, MSGBOX_SIGN
	end

Route3_Text_FirebreatherOtis_Seen:
	.string "Ah! Das Wetter ist so schön wie immer.$"

Route3_Text_FirebreatherOtis_Beaten:
	.string "Die Sonne scheint,\n"
	.string "dennoch bin ich nass…$"

Route3_Text_FirebreatherOtis_AfterBattle:
	.string "Bei Regen ist\n"
	.string "eine Zündung sehr schwierig…$"

Route3_Text_YoungsterWarren_Seen:
	.string "Hmmm… Ich weiß\n"
	.string "nicht, was ich tun soll…$"

Route3_Text_YoungsterWarren_Beaten:
	.string "Ich wusste es…$"

Route3_Text_YoungsterWarren_AfterBattle:
	.string "Du hast gleich\n"
	.string "einen starken Eindruck gemacht.\p"
	.string "Ich hatte Angst,\n"
	.string "gegen dich zu kämpfen…$"

Route3_Text_YoungsterJimmy_Seen:
	.string "Ich bin schnell wie der Wind!$"

Route3_Text_YoungsterJimmy_Beaten:
	.string "Hinfortgeweht!$"

Route3_Text_YoungsterJimmy_AfterBattle:
	.string "Ich trage das ganze Jahr Shorts.\p"
	.string "Das ist meine Auffassung von Mode.$"

Route3_Text_FirebreatherBurt_Seen:
	.string "Komm schnell her und schau!$"

Route3_Text_FirebreatherBurt_Beaten:
	.string "Wow! Das ist heiß!$"

Route3_Text_FirebreatherBurt_AfterBattle:
	.string "Ich bin der beste\n"
	.string "Feuerspucker in KANTO.\p"
	.string "Aber nicht der beste Trainer…$"

Route3_Text_MtMoonSquareSign:
	.string "MONDBERGPLATZ\p"
	.string "Geh einfach die Treppe hoch$"


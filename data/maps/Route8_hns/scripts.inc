Route8_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route8_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route8_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route8_EventScript_Dwayne::
	trainerbattle_single TRAINER_DWAYNE_HNS, Route8_Text_BikerDwayneSeen, Route8_Text_BikerDwayneBeaten
	msgbox Route8_Text_BikerDwayneAfter, MSGBOX_AUTOCLOSE
	end

Route8_EventScript_Harris::
	trainerbattle_single TRAINER_HARRIS_HNS, Route8_Text_BikerHarrisSeen, Route8_Text_BikerHarrisBeaten
	msgbox Route8_Text_BikerHarrisAfter, MSGBOX_AUTOCLOSE
	end

Route8_EventScript_Zeke::
	trainerbattle_single TRAINER_ZEKE_HNS, Route8_Text_BikerZekeSeen, Route8_Text_BikerZekeBeaten
	msgbox Route8_Text_BikerZekeAfter, MSGBOX_AUTOCLOSE
	end

Route8_EventScript_Sam::
	trainerbattle_single TRAINER_SAM_HNS, Route8_Text_SupernerdSamSeen, Route8_Text_SupernerdSamBeaten
	msgbox Route8_Text_SupernerdSamAfter, MSGBOX_AUTOCLOSE
	end

Route8_EventScript_Tom::
	trainerbattle_single TRAINER_TOM_HNS, Route8_Text_SupernerdTomSeen, Route8_Text_SupernerdTomBeaten
	msgbox Route8_Text_SupernerdTomAfter, MSGBOX_AUTOCLOSE
	end

Route8_Text_BikerDwayneSeen:
	.string "Wir repräsentieren\n"
	.string "die PokémonTRAINERGILDE aus KANTO.\p"
	.string "Hier kommst du unter die Räder!$"

Route8_Text_BikerDwayneBeaten:
	.string "En-entschuldigung!$"

Route8_Text_BikerDwayneAfter:
	.string "The KANTO Pokémon FEDERATION will\n"
	.string "never fall!$"

Route8_Text_BikerHarrisSeen:
	.string "Das ORDNUNGSAMT hat unseren\p"
	.string "TUNNELPFAD zu-\n"
	.string "schütten lassen. Das ängstigt mich!$"

Route8_Text_BikerHarrisBeaten:
	.string "V-vergib mir!$"

Route8_Text_BikerHarrisAfter:
	.string "Verprügelt von einem Bengel aus\n"
	.string "JOHTO…$"

Route8_Text_BikerZekeSeen:
	.string "Wir sind die\n"
	.string "Pokémon-TRAINERGILDE aus KANTO! Nimm\l"
	.string "dich in Acht!$"

Route8_Text_BikerZekeBeaten:
	.string "Uah! Entschuldige!$"

Route8_Text_BikerZekeAfter:
	.string "Wir werden von jetzt an\n"
	.string "netter sein…$"

Route8_Text_SupernerdSamSeen:
	.string "Wie funktioniert der MAGNETZUG?$"

Route8_Text_SupernerdSamBeaten:
	.string "Ich möchte nur den MAGNETZUG sehen…$"

Route8_Text_SupernerdSamAfter:
	.string "Magnete sind super!$"

Route8_Text_SupernerdTomSeen:
	.string "Hm… Du hast viele ORDEN.$"

Route8_Text_SupernerdTomBeaten:
	.string "Wie ich dachte… Du bist stark!$"

Route8_Text_SupernerdTomAfter:
	.string "Arena-Orden verleihen Vorteile\n"
	.string "in kämpfen.$"

Route8_Text_LockedDoor:
	.string "Es ist verriegelt…$"

Route8_Text_UndergroundPathSign:
	.string "Das Flugblatt ist zerrissen.\p"
	.string "Es ist nicht mehr lesbar…$"

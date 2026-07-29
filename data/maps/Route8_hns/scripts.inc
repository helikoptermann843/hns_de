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
	.string "Wir repräsentieren die\n"
	.string "Pokémon-Trainergilde aus Kanto.\l"
	.string "Einen wie dich erledigen wir mit links!$"

Route8_Text_BikerDwayneBeaten:
	.string "E-entschuldigung!$"

Route8_Text_BikerDwayneAfter:
	.string "Die Pokémon-Trainergilde aus Kanto\n"
	.string "wird niemals untergehen!$"

Route8_Text_BikerHarrisSeen:
	.string "Das Ordnungsamt hat unseren\n"
	.string "Tunnelpfad zuschütten lassen.\l"
	.string "Uuuh, das macht mich ganz rasend!$"

Route8_Text_BikerHarrisBeaten:
	.string "V-vergib mir!$"

Route8_Text_BikerHarrisAfter:
	.string "In die Schranken gewiesen\n"
	.string "von einem Rowdy aus Johto…$"

Route8_Text_BikerZekeSeen:
	.string "Wir sind die\n"
	.string "Pokémon-Trainergilde aus Kanto! Nimm\l"
	.string "dich in Acht!$"

Route8_Text_BikerZekeBeaten:
	.string "E-entschuldige!$"

Route8_Text_BikerZekeAfter:
	.string "Wir werden unser Bestes geben,\n"
	.string "von nun an niemandem mehr\l"
	.string "Ärger zu bereiten… wirklich!$"

Route8_Text_SupernerdSamSeen:
	.string "Möchte zu gerne mal wissen, wie\n"
	.string "dieser Magnetzug funktioniert!$"

Route8_Text_SupernerdSamBeaten:
	.string "Ich möchte nur den Magnetzug sehen…$"

Route8_Text_SupernerdSamAfter:
	.string "Die Kraft von Magneten\n"
	.string "ist schon beeindruckend!$"

Route8_Text_SupernerdTomSeen:
	.string "Toll… du hast aber\n"
	.string "viele Orden!$"

Route8_Text_SupernerdTomBeaten:
	.string "Wie ich dachte…\n"
	.string "Du bist stark!$"

Route8_Text_SupernerdTomAfter:
	.string "Arena-Orden verleihen Vorteile\n"
	.string "in kämpfen.$"

Route8_Text_LockedDoor:
	.string "Abgeschlossen…$"

Route8_Text_UndergroundPathSign:
	.string "Das Flugblatt ist zerrissen.\p"
	.string "Es ist nicht mehr lesbar…$"

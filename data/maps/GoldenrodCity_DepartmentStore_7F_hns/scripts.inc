GoldenrodCity_DepartmentStore_7F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GoldenrodCity_DepartmentStore_7F_OnTransition
	.byte 0

GoldenrodCity_DepartmentStore_7F_OnTransition:
	call_if_set FLAG_DAY_POKEMON, GoldenrodCity_DepartmentStore_7F_EventScript_SetNight
	call_if_unset FLAG_DAY_POKEMON, GoldenrodCity_DepartmentStore_7F_EventScript_SetDay
	end

GoldenrodCity_DepartmentStore_7F_EventScript_SetNight::
	setmaplayoutindex LAYOUT_GOLDENROD_CITY_DEPARTMENT_STORE_7FNIGHT_HNS
	return

GoldenrodCity_DepartmentStore_7F_EventScript_SetDay::
	setmaplayoutindex LAYOUT_GOLDENROD_CITY_DEPARTMENT_STORE_7F_HNS
	return


GoldenrodDeptStore7_EventScript_PokefanF::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_RoofPokefanF, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore7_EventScript_PokefanM::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_RoofPokefanM, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore7_EventScript_Twin::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_RoofTwin, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore7_EventScript_Nerd::
	lock
	msgbox GoldenrodDeptStore_Text_RoofSuperNerdOhWow, MSGBOX_DEFAULT
	closemessage
	PLAYSE SE_PIN
	applymovement LOCALID_GOLDENROD_ROOF_NERD, Common_Movement_ExclamationMark
	delay 20
	faceplayer
	msgbox GoldenrodDeptStore_Text_RoofSuperNerdQuitBotheringMe, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_GOLDENROD_ROOF_NERD, DIR_SOUTH
	release
	end

GoldenrodDeptStore7_EventScript_Teacher::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_RoofTeacher, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore7_EventScript_Bugcatcher::
	lock
	faceplayer
	msgbox GoldenrodDeptStore_Text_RoofBugCatcher, MSGBOX_DEFAULT
	closemessage
	release
	end

GoldenrodDeptStore_Text_RoofPokefanF:
	.string "Puh, bin ich müde.\p"
	.string "Manchmal gehe ich\n"
	.string "auf die Dachterrasse, um eine\l"
	.string "Einkaufspause einzulegen.$"

GoldenrodDeptStore_Text_RoofFisher:
	.string "Bitte? Wer sagt,\n"
	.string "dass das nichts für Erwachsene ist?\p"
	.string "Ich komme jeden Tag, um wirklich\n"
	.string "alle Puppen zu bekommen!$"

GoldenrodDeptStore_Text_RoofTwin:
	.string "Oft gibt es hier Sonderangebote.$"

GoldenrodDeptStore_Text_RoofSuperNerdOhWow:
	.string "Oh, wow!$"

GoldenrodDeptStore_Text_RoofSuperNerdQuitBotheringMe:
	.string "Hörst du auf, mich zu belästigen?$"

GoldenrodDeptStore_Text_RoofPokefanM:
	.string "Es gibt etwas, das ich unbedingt\n"
	.string "möchte, aber mir\l"
	.string "fehlt das nötige Kleingeld…\p"
	.string "Soll ich meine\n"
	.string "gesammelten BEEREN verkaufen…$"

GoldenrodDeptStore_Text_RoofTeacher:
	.string "Oh, alles ist so billig!\p"
	.string "Ich habe soviel\n"
	.string "gekauft, dass mein BEUTEL voll ist!$"

GoldenrodDeptStore_Text_RoofBugCatcher:
	.string "Meine Pokémon\n"
	.string "sind immer paralysiert oder vergiftet,\l"
	.string "wenn es darauf ankommt…\p"
	.string "Daher möchte ich HYPERHEILER kaufen.\p"
	.string "Hoffentlich gibt es noch welche?$"

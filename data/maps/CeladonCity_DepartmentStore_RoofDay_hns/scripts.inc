CeladonCity_DepartmentStore_RoofDay_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_DepartmentStore_RoofDay_OnTransition
	.byte 0

CeladonCity_DepartmentStore_RoofDay_OnTransition:
	call_if_set FLAG_DAY_POKEMON, CeladonCity_DepartmentStore_RoofDay_EventScript_SetNight
	call_if_unset FLAG_DAY_POKEMON, CeladonCity_DepartmentStore_RoofDay_EventScript_SetDay
	end

CeladonCity_DepartmentStore_RoofDay_EventScript_SetNight::
	setmaplayoutindex LAYOUT_CELADON_CITY_DEPARTMENT_STORE_ROOF_NIGHT_HNS
	return

CeladonCity_DepartmentStore_RoofDay_EventScript_SetDay::
	setmaplayoutindex LAYOUT_CELADON_CITY_DEPARTMENT_STORE_ROOF_DAY_HNS
	return

CeladonDept6_EventScript_Nerd::
	msgbox CeladonDeptStore6F_Text_SuperNerd, MSGBOX_NPC
	end
CeladonDept6_EventScript_Youngster::
	msgbox CeladonDeptStore6F_Text_Youngster, MSGBOX_NPC
	end
CeladonDept6_EventScript_Directory::
	msgbox CeladonDeptStore6F_Text_Directory, MSGBOX_SIGN
	end


CeladonDeptStore6F_Text_Vending:
	.string "Ein Verkaufsautomat! Hier ist das\n"
	.string "Menü.$"

CeladonDeptStore6F_Text_Clang:
	.string "Klong!\p"
	.string "{STRING} ist herausgesprungen.$"

CeladonDeptStore6F_Text_VendingNoMoney:
	.string "Ups, nicht genug Geld…$"

CeladonDeptStore6F_Text_VendingNoSpace:
	.string "Es ist kein Platz mehr…$"

CeladonDeptStore6F_Text_SuperNerd:
	.string "Ein Verkaufsautomat mit Preisroulette…\n"
	.string "\p"
	.string "Solche sieht man heute kaum noch.$"

CeladonDeptStore6F_Text_Youngster:
	.string "Oh nein! Hier gibt es keine Spiele!\p"
	.string "Ich wollte spielen…$"

CeladonDeptStore6F_Text_Directory:
	.string "5F: DACHTERRASSE VERKAUFS\n"
	.string "AUTOMATEN$"

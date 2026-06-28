FarawayIsland_Entrance_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FarawayIsland_Entrance_hns_OnTransition
	.byte 0

FarawayIsland_Entrance_hns_OnTransition:
	setflag FLAG_ARRIVED_ON_FARAWAY_ISLAND
	end

FarawayIsland_Entrance_hns_EventScript_SetCloudsWeather::
	setweather WEATHER_SUNNY_CLOUDS
	doweather
	end

FarawayIsland_Entrance_hns_EventScript_ClearWeather::
	setweather WEATHER_NONE
	doweather
	end

FarawayIsland_Entrance_hns_EventScript_Sailor::
	lock
	faceplayer
	msgbox FarawayIsland_Entrance_Text_SailorReturn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FarawayIsland_Entrance_hns_EventScript_AsYouLike
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 30
	hideobjectat LOCALID_FARAWAY_ISLAND_ENTRANCE_HNS_SAILOR, MAP_FARAWAY_ISLAND_ENTRANCE_HNS
	setvar VAR_0x8004, LOCALID_FARAWAY_ISLAND_ENTRANCE_HNS_SS_TIDAL
	call Common_EventScript_FerryDepartIsland
	warpsilent MAP_OLIVINE_CITY_PORT_INSIDE_HNS, 8, 16
	waitstate
	release
	end

FarawayIsland_Entrance_hns_EventScript_AsYouLike::
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
	release
	end

FarawayIsland_Entrance_hns_EventScript_Sign::
	msgbox FarawayIsland_Entrance_hns_Text_Sign, MSGBOX_SIGN
	closemessage
	end

FarawayIsland_Entrance_hns_Text_Sign:
	.string "Die Schrift ist ausgegraut,\n"
	.string "muss sehr alt sein..\p"
	.string "..ber, 6. Tag falls ein Mensch..\n"
	.string "hier anlegt.. wieder..es i..\l"
	.string "sei reinen Herzens.. .mit\l"
	.string "der Hoffnung, gehe ic..$"

OlivineCity_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OlivineCity_MapScript_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OlivineCity_OnFrame
	.byte 0

OlivineCity_MapScript_OnTransition::
	callnative SetTimeBasedEncounters
	goto_if_ge VAR_OLIVINE_CITY_STATE, 5, OlivineCity_MapScript_ClearWeather
	end

OlivineCity_MapScript_ClearWeather::
	setweather WEATHER_NONE
	end

OlivineCity_OnFrame::
	map_script_2 VAR_SAFARI_ZONE_GATE_STATE, 1, OlivineCity_EventScript_BaobaCall
	.2byte 0

OlivineCity_EventScript_BaobaCall::
	lock
	setspeaker OlivineCity_Text_BaobaName
	pokenavcall OlivineCity_Text_Baoba
	waitmessage
	delay 30
	setvar VAR_SAFARI_ZONE_GATE_STATE, 2
	release
	end

OlivineCity_Text_BaobaName:
	.string "Baoba$"

OlivineCity_Text_Baoba:
	.string "Hallo, {PLAYER}!\n"
	.string "Ich bin’s, Baoba!\p"
	.string "Entschuldige, dass ich dich habe\n"
	.string "warten lassen!\p"
	.string "Sie ist endlich eröffnet, die\n"
	.string "Safari-Zone! Du weißt, wo?\p"
	.string "Du kennst doch das in den Fels\n"
	.string "gehauene Tor in Anemonia City, oder?\p"
	.string "Wenn du dort durchgehst, erreichst\n"
	.string "du sie nach einer Weile, die Safari-Zone!\p"
	.string "Nun, es liegt nicht gerade auf dem Weg,\n"
	.string "aber schau unbedingt einmal vorbei!$"

OlivineCity_EventScript_CityTrigger:: @FLAGHEAP
	setflag FLAG_HIDE_OLIVINE_CITY_GYM_JASMINE
	setflag FLAG_HIDE_OLIVINE_SILVER
	setflag FLAG_VISITED_OLIVINE_CITY
	clearflag FLAG_SAFARI_ZONE_WEST_EXPANSION
	clearflag FLAG_SAFARI_ZONE_EAST_EXPANSION
	clearflag FLAG_HIDE_BATTLEFRONTIER_ENGINEER
	clearflag FLAG_HIDE_LIGHTHOUSE_JASMINE
	clearflag FLAG_HIDE_WHIRL_ISLANDS_TENTACRUEL
	setvar VAR_GETFLY, 0

	setvar VAR_OLIVINE_CITY_STATE, 1

	@cianwood flags
	setvar VAR_SUICUNE_ENCOUNTERS, 1
	clearflag FLAG_HIDE_CIANWOOD_SUICUNE
	setflag FLAG_HIDE_CIANWOOD_EUSINE
	setvar VAR_CIANWOOD_CITY_STATE, 1
	end

OlivineCity_EventScript_SilverTrigger::
	lock
	clearflag FLAG_HIDE_OLIVINE_SILVER
	opendoor 11, 27
	addobject LOCALID_OLIVINE_SILVER
	playbgm MUS_HG_ENCOUNTER_RIVAL, FALSE
	delay 20

	closedoor 11, 27
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_eq VAR_TEMP_1, 28, OlivineCity_EventScript_SilverWalkToPlayer1
	call_if_eq VAR_TEMP_1, 29, OlivineCity_EventScript_SilverWalkToPlayer2
	call_if_eq VAR_TEMP_1, 30, OlivineCity_EventScript_SilverWalkToPlayer3
	msgbox OlivineCity_Text_SilverEncounter, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_TEMP_1, 28, OlivineCity_EventScript_SilverLeaveAdjust1
	call_if_eq VAR_TEMP_1, 29, OlivineCity_EventScript_SilverLeaveAdjust2
	call_if_eq VAR_TEMP_1, 30, OlivineCity_EventScript_SilverLeaveAdjust2
	applymovement LOCALID_OLIVINE_SILVER, OlivineCity_Movement_SilverLeave
	waitmovement 0
	setvar VAR_OLIVINE_CITY_STATE, 2
	setflag FLAG_HIDE_OLIVINE_SILVER
	removeobject LOCALID_OLIVINE_SILVER
	fadedefaultbgm
	release
	end

OlivineCity_EventScript_SilverWalkToPlayer1::
	applymovement LOCALID_OLIVINE_SILVER OlivineCity_Movement_SilverWalkToPlayer1
	waitmovement 0
	return

OlivineCity_EventScript_SilverWalkToPlayer2::
	applymovement LOCALID_OLIVINE_SILVER OlivineCity_Movement_SilverWalkToPlayer2
	waitmovement 0
	return

OlivineCity_EventScript_SilverWalkToPlayer3::
	applymovement LOCALID_OLIVINE_SILVER OlivineCity_Movement_SilverWalkToPlayer3
	waitmovement 0
	return

OlivineCity_EventScript_SilverLeaveAdjust1::
	applymovement LOCALID_OLIVINE_SILVER Common_Movement_WalkDown1
	waitmovement 0
	return

OlivineCity_EventScript_SilverLeaveAdjust2::
	applymovement LOCALID_OLIVINE_SILVER Common_Movement_WalkUp1
	waitmovement 0
	return

OlivineCity_Movement_SilverWalkToPlayer1:
	walk_down
	walk_right
	walk_right
	walk_right
	step_end
OlivineCity_Movement_SilverWalkToPlayer2:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end
OlivineCity_Movement_SilverWalkToPlayer3:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end


OlivineCity_Movement_SilverLeave:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OlivineCity_Text_SilverEncounter:
	.string "{PLAYER}: … … …\p"
	.string "…Du schon wieder?\p"
	.string "Was stellst du dir eigentlich vor?\n"
	.string "Mit Verlierern wie dir gebe ich\l"
	.string "mich nicht ab.\p"
	.string "Apropos Verlierer: Die Arenaleiterin\n"
	.string "dieser Stadt ist gerade außer Haus.\p"
	.string "Sie kümmert sich wohl gerade um ein\n"
	.string "krankes Pokémon im Leuchtturm.\p"
	.string "…Hmpf! So ein Unfug!\p"
	.string "Ein Pokémon, das zu schwach zum\n"
	.string "Kämpfen ist, ist wertlos!\p"
	.string "Warum trainierst du nicht etwas im\n"
	.string "Leuchtturm?\p"
	.string "Wer weiß, vielleicht wird aus dir ja\n"
	.string "doch noch ein annehmbarer Trainer?$"

OlivineCity_EventScript_Sailor1::
	lock
	faceplayer
	msgbox OlivineCity_Text_Sailor1, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_Sailor2::
	lock
	faceplayer
	msgbox OlivineCity_Text_Sailor2, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_Youngster::
	lock
	faceplayer
	msgbox OlivineCity_Text_YoungsterPokegear, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_Machoke::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MACHOKE, CRY_MODE_NORMAL
	msgbox OlivineCity_Text_Machoke, MSGBOX_DEFAULT
	waitmoncry
	release
	end

OlivineCity_EventScript_Sign::
	lock
	msgbox OlivineCity_Text_Sign, MSGBOX_SIGN
	end

OlivineCity_EventScript_PortSign::
	lock
	msgbox OlivineCity_Text_PortSign, MSGBOX_SIGN
	end

OlivineCity_EventScript_CafeSign::
	msgbox OlivineCity_Text_CafeSign, MSGBOX_SIGN
	end

OlivineCity_EventScript_GymSign::
	lock
	msgbox OlivineCity_Text_GymSign, MSGBOX_SIGN
	end

OlivineCity_EventScript_LighthouseSign::
	lock
	msgbox OlivineCity_Text_LighthouseSign, MSGBOX_SIGN
	end

OlivineCity_EventScript_Item_ChargeBeam::
	finditem ITEM_TM_CHARGE_BEAM
	end

OlivineCity_EventScript_EonTicketWoman::
	lock
	faceplayer
	checkitem ITEM_AURORA_TICKET
	goto_if_eq VAR_RESULT, TRUE, OlivineCity_EventScript_EonTicketWomanAfter
	goto_if_set FLAG_IS_KANTO_CHAMPION, OlivineCity_EventScript_EonTicketWomanChamp
	msgbox OlivineCity_Text_EonTicketWoman1, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_EventScript_EonTicketWomanChamp::
	msgbox OlivineCity_Text_EonTicketWoman2, MSGBOX_DEFAULT
	giveitem ITEM_AURORA_TICKET
	closemessage
	release
	end

OlivineCity_EventScript_EonTicketWomanAfter::
	msgbox OlivineCity_Text_EonTicketWoman3, MSGBOX_DEFAULT
	closemessage
	release
	end

OlivineCity_Text_CafeSign:
	.string "Oliviana City Cafe\p"
	.string "Lachs und Aal, Phänomenal.$"

OlivineCity_Text_EonTicketWoman1:
	.string "Ich bin Mary!\p"
	.string "Ich mache nur Spaß!\n"
	.string "Aber ich mag ihre Radiosendung!$"

OlivineCity_Text_EonTicketWoman2:
	.string "Du musst {PLAYER} sein!!!\p"
	.string "Oh mein Gott! Der Champion!\p"
	.string "Ich hörte von dir in\n"
	.string "Marys Radiosendung!\p"
	.string "Hier, nimm das!$"

OlivineCity_Text_EonTicketWoman3:
	.string "Ich glaube es nicht!\n"
	.string "Ich hab den Champion getroffen!!!$"

OlivineCity_Text_Sailor1:
	.string "Dunkle Straßen sind nachts gefährlich!\n"
	.string "Dunkle Meeresuntiefen ebenso!\p"
	.string "Ohne das Licht des Leuchtturms sind\n"
	.string "alle Schiffe auf dem Meer gefangen.$"

OlivineCity_Text_YoungsterPokegear:
	.string "Dieses Ding da ist doch ein PokéCom!\n"
	.string "Wow, das ist ja sooo cool!$"

OlivineCity_Text_YoungsterPokedex:
	.string "Wow, du hast einen Pokédex!\n"
	.string "Das ist echt cool!$"

OlivineCity_Text_Sailor2:
	.string "Die Liga führt Jasmin als sechst-\n"
	.string "stärkste Arenaleiterin!\p"
	.string "Pah! So ein Unsinn.\p"
	.string "Niemals könnte Norbert ihren\n"
	.string "Stahl-Pokémon gefährlich werden!\p"
	.string "Reine Bürokratie, wenn du mich fragst.\p"
	.string "Sie ist eine ernst zu nehmende\n"
	.string "Gegnerin, so viel steht fest!$"

OlivineCity_Text_Sign:
	.string "Oliviana City\p"
	.string "Das Tor zu einer neuen Welt$"

OlivineCity_Text_PortSign:
	.string "Hafen von Oliviana\n"
	.string "City Schnellboot-Pier$"

OlivineCity_Text_GymSign:
	.string "Pokémon-Arena von Oliviana City\n"
	.string "Leiterin: Jasmin\l"
	.string "Ein stahlhartes Mädchen!$"

OlivineCity_Text_LighthouseSign:
	.string "Leuchtturm von Oliviana City\p"
	.string "Auch bekannt als der\n"
	.string "Glitzer-Leuchtturm$"

OlivineCity_Text_BattleTowerSign:
	.string "Duellturm Voraus Geöffnet!$"

OlivineCity_Text_Machoke:
	.string "Maschock: Cho!$"

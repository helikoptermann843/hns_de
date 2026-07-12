EcruteakCity_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EcruteakCity_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

EcruteakCity_OnTransition::
	callnative SetTimeBasedEncounters
	end

EcruteakCity_Test_Lugia::
	setvar VAR_LUGIA_OR_HOOH, 1
	end
EcruteakCity_Test_League::
	setvar VAR_COMPLETED_HO_OH, 4
	setvar VAR_COMPLETED_LUGIA, 4
	end


EcruteakCity_EventScript_Trigger::
	@flagheap
	clearflag FLAG_RELEASED_BEASTS
	clearflag FLAG_AMPHAROS_HEALED
	clearflag FLAG_HIDE_ECRUTEAK_BILL
	clearflag FLAG_DEFEATED_HO_OH
	clearflag FLAG_CAUGHT_HO_OH
	clearflag FLAG_DEFEATED_LUGIA
	clearflag FLAG_CAUGHT_LUGIA
	clearflag FLAG_HIDE_ECRUTEAK_ROCKET
	clearflag FLAG_HIDE_BURNED_TOWER_NPCS  
	clearflag FLAG_HIDE_BURNED_TOWER_BEASTS
	clearflag FLAG_HIDE_BURNED_TOWER_B1F_EUSINE
	clearflag FLAG_HIDE_ECRUTEAK_CITY_SAGE
	clearflag FLAG_CAUGHT_ENTEI
	clearflag FLAG_CAUGHT_RAIKOU
	clearflag FLAG_GOT_TM_SNATCH
	clearflag FLAG_HIDE_ROUTE42_SUICUNE
	clearflag FLAG_GOT_TYROGUE
	clearflag FLAG_BEAT_KIYO
	clearflag FLAG_ENABLE_BAOBA_MATCH_CALL
	clearflag FLAG_HIDE_ECRUTEAK_CITY_THEATER_NPCS
	clearflag FLAG_HIDE_ECRUTEAK_CITY_THEATER_ZUKI
	clearflag FLAG_HIDE_TINTOWER_GUARD
	clearflag FLAG_HIDE_WHIRL_ISLANDS_TENTACRUEL
	clearflag FLAG_HIDE_LUGIA
	clearflag FLAG_HIDE_HO_OH

	setflag FLAG_VISITED_ECRUTEAK_CITY
	setflag FLAG_HIDE_ROUTE42_EUSINE

	setflag FLAG_HIDE_TIN_TOWER_KIMONO_GIRLS
	setflag FLAG_HIDE_WHIRL_ISLANDS_KIMONO_GIRLS
	setflag FLAG_HIDE_ECRUTEAK_CITY_THEATER_KIMONOS
	setflag FLAG_HIDE_ROUTE39_SHADOW
	setflag FLAG_HIDE_ECRUTEAK_SILVER
	setvar VAR_COMPLETED_HO_OH, 0
	setvar VAR_COMPLETED_LUGIA, 0
	setvar VAR_ECRUTEAK_CITY_THEATER, 0 
	setvar VAR_ECRUTEAK_CITY_STATE, 1
	end

EcruteakCity_Trigger_Silver::
	lockall
	opendoor 39, 40
	waitdooranim
	delay 10
	clearflag FLAG_HIDE_ECRUTEAK_SILVER
	addobject LOCALID_ECRUTEK_SILVER
	playbgm MUS_HG_ENCOUNTER_RIVAL, TRUE
	playse SE_BANG
	applymovement LOCALID_ECRUTEK_SILVER, EcruteakCity_Movement_Silver1
	applymovement OBJ_EVENT_ID_PLAYER, EcruteakCity_Movement_Silver1
	message EcruteakCity_Text_Silver1
	
	waitmovement OBJ_EVENT_ID_PLAYER
	waitmovement LOCALID_ECRUTEK_SILVER
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	closedoor 39, 40
	waitdooranim
	msgbox EcruteakCity_Text_Silver2, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	applymovement LOCALID_ECRUTEK_SILVER, Common_Movement_ExclamationMark
	delay 60
	turnobject LOCALID_ECRUTEK_SILVER, DIR_SOUTH
	msgbox EcruteakCity_Text_Silver3, MSGBOX_DEFAULT
	closemessage

	applymovement LOCALID_ECRUTEK_SILVER, EcruteakCity_Movement_Silver2
	waitmovement LOCALID_ECRUTEK_SILVER


	setflag FLAG_HIDE_ECRUTEAK_SILVER
	removeobject LOCALID_ECRUTEK_SILVER
	fadedefaultbgm

	setvar VAR_ECRUTEAK_CITY_THEATER, 5
	releaseall
	end

EcruteakCity_Movement_Silver1:
	delay_16
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

EcruteakCity_Movement_Silver2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

EcruteakCity_Text_Silver1:
	.string "BUMM!!$"

EcruteakCity_Text_Silver2:
	.string "SILVER: Wie...? Wie ist das\n"
	.string "möglich? Wie kann ich gegen\l"
	.string "die KIMONO-GIRLS verlieren...?$"

EcruteakCity_Text_Silver3:
	.string "SILVER: Du hast mich beobachtet,\n"
	.string "{PLAYER}...\p"
	.string "Ja, genau!\p"
	.string "Ich hätte nie gedacht, dass es so\n"
	.string "schwer ist, fünf KIMONO-GIRLS zu\n"
	.string "besiegen...\p"
	.string "Ich wurde richtig vermöbelt...\p"
	.string "...\p"
	.string "Du bist sicher aus dem gleichen\n"
	.string "Grund hier, oder?\p"
	.string "Werde nicht übermütig, nur weil\n"
	.string "du TEAM ROCKET besiegt hast!\p"
	.string "Diese KIMONO-GIRLS sind extrem\n"
	.string "stark.\p"
	.string "Schau, ob du sie besiegen kannst.\p"
	.string "Aber ich gebe nicht auf, ich will\n"
	.string "nicht, dass du gewinnst.$"

EcruteakCity_EventScript_Gramps::
	lock
	faceplayer
	msgbox EcruteakCity_Text_Gramps1, MSGBOX_DEFAULT
	closemessage
	release
	end
		
EcruteakCity_EventScript_Lass::
	lock
	faceplayer
	msgbox EcruteakCity_Text_Lass1, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_EventScript_Girl::
	lock
	faceplayer
	goto_if_set FLAG_RELEASED_BEASTS, EcruteakCity_EventScript_Girl2
	msgbox EcruteakCity_Text_Lass2, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_EventScript_Girl2::
	msgbox EcruteakCity_Text_Lass2_ReleasedBeasts, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_EventScrip_Man::
	lock
	faceplayer
	goto_if_set FLAG_AMPHAROS_HEALED, EcruteakCity_EventScrip_Man2
	msgbox EcruteakCity_Text_Fisher, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_EventScrip_Man2::
	msgbox EcruteakCity_Text_Fisher_JasmineReturned, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_EventScript_Youngster::
	lock
	faceplayer
	msgbox EcruteakCity_Text_Youngster, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_EventScript_SageRight::
	lock
	faceplayer
	msgbox EcruteakCity_Text_Gramps2, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_EventScript_SageTower::
	lock
	faceplayer
	msgbox EcruteakCity_Text_Gramps3, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_EventScript_SageGym::
	lock
	faceplayer
	msgbox EcruteakCity_Text_SageGym, MSGBOX_DEFAULT
	closemessage
	release
	end

EcruteakCity_EventScript_TheaterSign::
	lock
	msgbox EcruteakCity_Text_DanceTheaterSign, MSGBOX_SIGN
	closemessage
	release
	end	

EcruteakCity_EventScript_OfficeSign::
	lock
	msgbox EcruteakCity_Text_OfficeSign, MSGBOX_SIGN
	closemessage
	release
	end	

EcruteakCity_EventScript_BurnedSign::
	lock
	msgbox EcruteakCity_Text_BurnedTowerSign, MSGBOX_SIGN
	closemessage
	release
	end	

EcruteakCity_EventScript_CitySign::
	lock
	msgbox EcruteakCity_Text_Sign, MSGBOX_SIGN
	closemessage
	release
	end	

EcruteakCity_EventScript_GymSign::
	lock
	msgbox EcruteakCity_Text_GymSign, MSGBOX_SIGN
	closemessage
	release
	end

EcruteakCity_EventScript_Eevee::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
	msgbox EcruteakCity_Text_Eevee, MSGBOX_DEFAULT
	waitmoncry
	release
	end

EcruteakCity_EventScript_Vulpix::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_VULPIX, CRY_MODE_NORMAL
	msgbox EcruteakCity_Text_Vulpix, MSGBOX_DEFAULT
	waitmoncry
	release
	end

EcruteakCity_EventScript_Item_RareCandy::
	finditem ITEM_RARE_CANDY
	end

EcruteakCity_Text_Eevee:
	.string "Evoli: Veee!$"

EcruteakCity_Text_Vulpix:
	.string "Vulpix: Vullll Pix!$"


EcruteakCity_Text_UnusedMissingDaughter:
	.string "Oh, no. Oh, no…\p"
	.string "My daughter is missing.\p"
	.string "No… She couldn't have gone to the\n"
	.string "BURNED TOWER.\p"
	.string "I told her not to go near it…\p"
	.string "People seem to disappear there…\p"
	.string "Oh, what should I do…?$"

EcruteakCity_Text_Gramps1:
	.string "Es gab zwei Türme in TEAK CITY.\n"
	.string "Einen im Osten, einen im Westen.$"

EcruteakCity_Text_Gramps2:
	.string "Na, Kröte? Hast du gelernt zu\n"
	.string "tanzen wie die KIMONO-GIRLS?\p"
	.string "Ich habe gehört, dass dir\n"
	.string "ein eigenartiger Mann etwas\l"
	.string "Nettes geben wird,\p"
	.string "wenn du zu ihrem\n"
	.string "TANZTHEATER gehst.$"

EcruteakCity_Text_Lass1:
	.string "Ich will im TANZTHEATER üben.\p"
	.string "Kommst du mit?$"

EcruteakCity_Text_Lass2:
	.string "Der Turm, der früher hier stand…\p"
	.string "Meine Oma sagte mir,\n"
	.string "dass er früher höher war.$"

EcruteakCity_Text_Lass2_ReleasedBeasts:
	.string "Drei große Pokémon sind in\l"
	.string "verschiedene Richtungen\n"
	.string "davongelaufen! Was waren das für\p"
	.string "welche?$"

EcruteakCity_Text_Fisher:
	.string "Es kursiert ein Gerücht\n"
	.string "über den LEUCHTTURM in\l"
	.string "OLIVIANA CITY.\p"
	.string "Das Pokémon, das als Leuchtfeuer\n"
	.string "dient, wurde krank.\p"
	.string "Sieht so aus, als wären sie\n"
	.string "in Schwierigkeiten.$"

EcruteakCity_Text_Fisher_JasmineReturned:
	.string "Das Pokémon im LEUCHTTURM\n"
	.string "von OLIVIANA CITY wurde\l"
	.string "geheilt.\p"
	.string "Jetzt können die Schiffe\n"
	.string "wieder gefahrlos nachts in See\l"
	.string "stechen.$"

EcruteakCity_Text_Youngster:
	.string "Ich hörte, dass Pokémon am\n"
	.string "SEE DES ZORNS Unruhe stiften.\p"
	.string "Das würde ich gerne sehen.$"

EcruteakCity_Text_Gramps3:
	.string "Vor langer Zeit…\n"
	.string "Ist dieser Turm abgebrannt.\p"
	.string "Drei namenlose Pokémon sind\n"
	.string "dabei umgekommen.\p"
	.string "Ein regenbogenfarbenes Pokémon\n"
	.string "kam herab und hauchte ihnen\l"
	.string "wieder Leben ein…\p"
	.string "Diese Legende wird von jedem LEITER\n"
	.string "der PKMN-ARENA von TEAK CITY an den\l"
	.string "nächsten weitergegeben.\p"
	.string "Ich?\p"
	.string "Damals war ich ein Trainer. Hohoho!$"

EcruteakCity_Text_SageGym:
	.string "Arenaleiter Jens ist gerade\n"
	.string "nicht hier. Du kannst ihn vielleicht\l"
	.string "an der TURMRUINE finden.$"

EcruteakCity_Text_Sign:
	.string "TEAK CITY Eine historische Stadt,\n"
	.string "wo Vergangenheit und\l"
	.string "Gegenwart aufeinandertreffen$"

EcruteakCity_Text_TinTowerSign:
	.string "TIN TOWER\p"
	.string "A legendary Pokémon is said to\n"
	.string "Ruheort here.$"

EcruteakCity_Text_OfficeSign:
	.string "Durchgang zum ZINNTURM.\n"
	.string "Kein Eintritt für unwürdige.$"

EcruteakCity_Text_GymSign:
	.string "TEAK CITY POKéMON ARENA\n"
	.string "LEITER: JENS\p"
	.string "Mystischer Seher der Zukunft$"

EcruteakCity_Text_DanceTheaterSign:
	.string "TANZTHEATER VON TEAK CITY$"

EcruteakCity_Text_BurnedTowerSign:
	.string "TURMRUINE\p"
	.string "Wurde von einem mysteriösem\n"
	.string "Feuer zerstört.\p"
	.string "Bitte Abstand halten, Einsturzgefahr!$"

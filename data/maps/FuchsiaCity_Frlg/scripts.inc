FuchsiaCity_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FuchsiaCity_OnTransition
	.byte 0

FuchsiaCity_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_FUCHSIA_CITY
	call_if_set FLAG_GOT_DOME_FOSSIL, FuchsiaCity_EventScript_SetOmanyteGfx
	call_if_unset FLAG_GOT_DOME_FOSSIL, FuchsiaCity_EventScript_SetKabutoGfx
	end

FuchsiaCity_EventScript_SetOmanyteGfx::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OMANYTE
	return

FuchsiaCity_EventScript_SetKabutoGfx::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_KABUTO
	return

FuchsiaCity_EventScript_LittleBoy::
	msgbox FuchsiaCity_Text_DidYouTrySafariGame, MSGBOX_NPC
	end

FuchsiaCity_EventScript_OldMan::
	msgbox FuchsiaCity_Text_SafariZoneZooInFront, MSGBOX_NPC
	end

FuchsiaCity_EventScript_Erik::
	msgbox FuchsiaCity_Text_WheresSara, MSGBOX_NPC
	end

FuchsiaCity_EventScript_Youngster::
	msgbox FuchsiaCity_Text_ItemBallInThere, MSGBOX_NPC
	end

FuchsiaCity_EventScript_Lass::
	lock
	faceplayer
	famechecker FAMECHECKER_KOGA, 3
	msgbox FuchsiaCity_Text_MyFatherIsGymLeader
	release
	end

FuchsiaCity_EventScript_CitySign::
	msgbox FuchsiaCity_Text_CitySign, MSGBOX_SIGN
	end

FuchsiaCity_EventScript_SafariZoneSign::
	msgbox FuchsiaCity_Text_SafariZoneSign, MSGBOX_SIGN
	end

FuchsiaCity_EventScript_SafariGameSign::
	msgbox FuchsiaCity_Text_SafariGameSign, MSGBOX_SIGN
	end

FuchsiaCity_EventScript_WardensHomeSign::
	msgbox FuchsiaCity_Text_WardensHomeSign, MSGBOX_SIGN
	end

@ Unused
FuchsiaCity_EventScript_SafariZoneOfficeSign::
	msgbox FuchsiaCity_Text_SafariZoneOfficeSign, MSGBOX_SIGN
	end

FuchsiaCity_EventScript_GymSign::
	lockall
	famechecker FAMECHECKER_KOGA, 0
	msgbox FuchsiaCity_Text_GymSign
	releaseall
	end

FuchsiaCity_EventScript_ChanseySign::
	lockall
	setvar VAR_0x8004, SPECIES_CHANSEY
	special SetSeenMon
	showmonpic SPECIES_CHANSEY, 10, 3
	msgbox FuchsiaCity_Text_ChanseySign
	hidemonpic
	releaseall
	end

FuchsiaCity_EventScript_VoltorbSign::
	lockall
	setvar VAR_0x8004, SPECIES_VOLTORB
	special SetSeenMon
	showmonpic SPECIES_VOLTORB, 10, 3
	msgbox FuchsiaCity_Text_VoltorbSign
	hidemonpic
	releaseall
	end

FuchsiaCity_EventScript_KangaskhanSign::
	lockall
	setvar VAR_0x8004, SPECIES_KANGASKHAN
	special SetSeenMon
	showmonpic SPECIES_KANGASKHAN, 10, 3
	msgbox FuchsiaCity_Text_KangaskhanSign
	hidemonpic
	releaseall
	end

FuchsiaCity_EventScript_SlowpokeSign::
	lockall
	setvar VAR_0x8004, SPECIES_SLOWPOKE
	special SetSeenMon
	showmonpic SPECIES_SLOWPOKE, 10, 3
	msgbox FuchsiaCity_Text_SlowpokeSign
	hidemonpic
	releaseall
	end

FuchsiaCity_EventScript_LaprasSign::
	lockall
	setvar VAR_0x8004, SPECIES_LAPRAS
	special SetSeenMon
	showmonpic SPECIES_LAPRAS, 10, 3
	msgbox FuchsiaCity_Text_LaprasSign
	hidemonpic
	releaseall
	end

FuchsiaCity_EventScript_FossilMonSign::
	lockall
	goto_if_set FLAG_GOT_DOME_FOSSIL, FuchsiaCity_EventScript_OmanyteSign
	setvar VAR_0x8004, SPECIES_KABUTO
	special SetSeenMon
	showmonpic SPECIES_KABUTO, 10, 3
	msgbox FuchsiaCity_Text_KabutoSign
	hidemonpic
	releaseall
	end

FuchsiaCity_EventScript_OmanyteSign::
	setvar VAR_0x8004, SPECIES_OMANYTE
	special SetSeenMon
	showmonpic SPECIES_OMANYTE, 10, 3
	msgbox FuchsiaCity_Text_OmanyteSign
	hidemonpic
	releaseall
	end

FuchsiaCity_Text_DidYouTrySafariGame::
	.string "Hast du schon das SAFARI-SPIEL\n"
	.string "gespielt?\p"
	.string "Manche POKéMON kann man nur dabei\n"
	.string "fangen!$"

FuchsiaCity_Text_SafariZoneZooInFront::
	.string "Vor dem Eingang zur SAFARI-ZONE\n"
	.string "befindet sich ein Zoo.\p"
	.string "Das SAFARI-SPIEL ist ideal, um\n"
	.string "POKéMON zu fangen.$"

FuchsiaCity_Text_WheresSara::
	.string "ERIK: Wo ist SARA? Ich wollte mich\n"
	.string "hier mit ihr treffen!$"

FuchsiaCity_Text_ItemBallInThere::
	.string "Dieser Ball dort ist tatsächlich ein\n"
	.string "POKéMON?!$"

FuchsiaCity_Text_CitySign::
	.string "FUCHSANIA CITY\n"
	.string "Die Stadt der rosaroten Träume!$"

FuchsiaCity_Text_SafariZoneSign::
	.string "POKéMON-PARADIES\n"
	.string "SAFARI-ZONE$"

FuchsiaCity_Text_SafariGameSign::
	.string "SAFARI-SPIEL\n"
	.string "POKéMON-FANGEN!$"

FuchsiaCity_Text_WardensHomeSign::
	.string "SAFARI-ZONE\n"
	.string "HAUS DES WÄRTERS$"

FuchsiaCity_Text_SafariZoneOfficeSign::
	.string "POKéMON-PARADIES\n"
	.string "Willkommen in der SAFARI-ZONE\l"
	.string "BÜRO der SAFARI-ZONE$"

FuchsiaCity_Text_GymSign::
	.string "FUCHSANIA CITY POKéMON-ARENA\n"
	.string "ARENALEITER: KOGA\l"
	.string "Der Giftige Ninja-Meister!$"

FuchsiaCity_Text_ChanseySign::
	.string "Name: CHANEIRA\p"
	.string "Dieses POKéMON zu fangen, ist reine\n"
	.string "Glückssache!$"

FuchsiaCity_Text_VoltorbSign::
	.string "Name: VOLTOBAL\p"
	.string "Dieses POKéMON ähnelt einem\n"
	.string "POKéBALL.$"

FuchsiaCity_Text_KangaskhanSign::
	.string "Name: KANGAMA\p"
	.string "Ein POKéMON, das seinen Nachwuchs\n"
	.string "in einem Beutel am Bauch trägt.$"

FuchsiaCity_Text_SlowpokeSign::
	.string "Name: FLEGMON\p"
	.string "Ein freundliches, aber sehr lahmes\n"
	.string "POKéMON.$"

FuchsiaCity_Text_LaprasSign::
	.string "Name: LAPRAS\n"
	.string "Der König der Meere!$"

FuchsiaCity_Text_OmanyteSign::
	.string "Name: AMONITAS\p"
	.string "Ein POKéMON, das aus einem Fossil\n"
	.string "wiedererschaffen wurde.$"

FuchsiaCity_Text_KabutoSign::
	.string "Name: KABUTO\p"
	.string "Ein POKéMON, das aus einem Fossil\n"
	.string "wiedererschaffen wurde.$"

@ Unused. May have been meant to be the placeholder text for the zoo mons, similar to RB's "!" text
FuchsiaCity_Text_Ellipsis::
	.string "……$"

Text_SubstituteTeach::
	.string "Argh, ich wünschte, ich wäre\n"
	.string "ein KANGAMA-Baby.\p"
	.string "Ich wäre so gerne an Stelle des\n"
	.string "Babys…\p"
	.string "Und würde mich in den Beutel der\n"
	.string "Mutter KANGAMA kuscheln.\p"
	.string "Aber nur POKéMON können\n"
	.string "DELEGATOR anwenden…\p"
	.string "Soll ich DELEGATOR einem deiner\n"
	.string "POKéMON beibringen?$"

Text_SubstituteDeclined::
	.string "Oh, wirklich?\n"
	.string "DELEGATOR macht Spaß…$"

Text_SubstituteWhichMon::
	.string "Welches POKéMON soll\n"
	.string "DELEGATOR erlernen?$"

Text_SubstituteTaught::
	.string "Was ich geben würde, wenn ich\n"
	.string "in den Beutel eines KANGAMAs\l"
	.string "klettern könnte…$"

FuchsiaCity_Text_MyFatherIsGymLeader::
	.string "Mein Vater ist der ARENALEITER\n"
	.string "dieser Stadt.\p"
	.string "Ich trainiere mit GIFT-POKéMON,\n"
	.string "genau wie mein Vater.$"


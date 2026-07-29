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
	.string "Hast du schon das Safari-Spiel\n"
	.string "gespielt?\p"
	.string "Manche Pokémon kann man nur dabei\n"
	.string "fangen!$"

FuchsiaCity_Text_SafariZoneZooInFront::
	.string "Vor dem Eingang zur Safari-Zone\n"
	.string "befindet sich ein Zoo.\p"
	.string "Das Safari-Spiel ist ideal, um\n"
	.string "Pokémon zu fangen.$"

FuchsiaCity_Text_WheresSara::
	.string "Erik: Wo ist Sara? Ich wollte mich\n"
	.string "hier mit ihr treffen!$"

FuchsiaCity_Text_ItemBallInThere::
	.string "Dieser Ball dort ist tatsächlich ein\n"
	.string "Pokémon?!$"

FuchsiaCity_Text_CitySign::
	.string "Fuchsania City\n"
	.string "Die Stadt der rosaroten Träume!$"

FuchsiaCity_Text_SafariZoneSign::
	.string "Pokémon-Paradies\n"
	.string "Safari-Zone$"

FuchsiaCity_Text_SafariGameSign::
	.string "Safari-Spiel\n"
	.string "Pokémon-Fangen!$"

FuchsiaCity_Text_WardensHomeSign::
	.string "Safari-Zone\n"
	.string "Haus des Wärters$"

FuchsiaCity_Text_SafariZoneOfficeSign::
	.string "Pokémon-Paradies\n"
	.string "Willkommen in der Safari-Zone\l"
	.string "Büro der Safari-Zone$"

FuchsiaCity_Text_GymSign::
	.string "Fuchsania City Pokémon-Arena\n"
	.string "Arenaleiter: Koga\l"
	.string "Der Giftige Ninja-Meister!$"

FuchsiaCity_Text_ChanseySign::
	.string "Name: Chaneira\p"
	.string "Dieses Pokémon zu fangen, ist reine\n"
	.string "Glückssache!$"

FuchsiaCity_Text_VoltorbSign::
	.string "Name: Voltobal\p"
	.string "Dieses Pokémon ähnelt einem\n"
	.string "Pokéball.$"

FuchsiaCity_Text_KangaskhanSign::
	.string "Name: Kangama\p"
	.string "Ein Pokémon, das seinen Nachwuchs\n"
	.string "in einem Beutel am Bauch trägt.$"

FuchsiaCity_Text_SlowpokeSign::
	.string "Name: Flegmon\p"
	.string "Ein freundliches, aber sehr lahmes\n"
	.string "Pokémon.$"

FuchsiaCity_Text_LaprasSign::
	.string "Name: Lapras\n"
	.string "Der König der Meere!$"

FuchsiaCity_Text_OmanyteSign::
	.string "Name: Amonitas\p"
	.string "Ein Pokémon, das aus einem Fossil\n"
	.string "wiedererschaffen wurde.$"

FuchsiaCity_Text_KabutoSign::
	.string "Name: Kabuto\p"
	.string "Ein Pokémon, das aus einem Fossil\n"
	.string "wiedererschaffen wurde.$"

@ Unused. May have been meant to be the placeholder text for the zoo mons, similar to RB's "!" text
FuchsiaCity_Text_Ellipsis::
	.string "……$"

Text_SubstituteTeach::
	.string "Argh, ich wünschte, ich wäre\n"
	.string "ein Kangama-Baby.\p"
	.string "Ich wäre so gerne an Stelle des\n"
	.string "Babys…\p"
	.string "Und würde mich in den Beutel der\n"
	.string "Mutter Kangama kuscheln.\p"
	.string "Aber nur Pokémon können\n"
	.string "Delegator anwenden…\p"
	.string "Soll ich Delegator einem deiner\n"
	.string "Pokémon beibringen?$"

Text_SubstituteDeclined::
	.string "Oh, wirklich?\n"
	.string "Delegator macht Spaß…$"

Text_SubstituteWhichMon::
	.string "Welches Pokémon soll\n"
	.string "Delegator erlernen?$"

Text_SubstituteTaught::
	.string "Was ich geben würde, wenn ich\n"
	.string "in den Beutel eines Kangamas\l"
	.string "klettern könnte…$"

FuchsiaCity_Text_MyFatherIsGymLeader::
	.string "Mein Vater ist der Arenaleiter\n"
	.string "dieser Stadt.\p"
	.string "Ich trainiere mit Gift-Pokémon,\n"
	.string "genau wie mein Vater.$"


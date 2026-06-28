MauvilleCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

MauvilleCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
	call Common_EventScript_UpdateBrineyLocation
	goto MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx
	end

MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx::
	special SetMauvilleOldManObjEventGfx
	end

MauvilleCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_MAUVILLE_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_Woman1::
	msgbox MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings, MSGBOX_NPC
	end

MauvilleCity_PokemonCenter_1F_EventScript_Woman2::
	msgbox MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner, MSGBOX_NPC
	end

MauvilleCity_PokemonCenter_1F_EventScript_Youngster::
	msgbox MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun, MSGBOX_NPC
	end

MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings:
	.string "Der Mann dort drüben, der sagt\n"
	.string "vielleicht verrückte Dinge!\p"
	.string "Auf seltsame Weise ist er aber\n"
	.string "amüsant.\l"
	.string "Den werde ich wohl nicht vergessen!$"

MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner:
	.string "Wenn ich auf STATISTIKTAUSCH Zugriff\n"
	.string "nehme, werden die neuesten Nachrichten\l"
	.string "aus FAUSTAUHAVEN hochgeladen.\p"
	.string "Diese Daten decken sich nun mit denen\n"
	.string "meines Freundes!$"

MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun:
	.string "Im oberen Stockwerk des POKéMON-\n"
	.string "CENTERs wurde die Möglichkeit des\l"
	.string "STATISTIKTAUSCHes eingerichtet.\p"
	.string "Ich weiß nicht genau, was das ist.\n"
	.string "Aber das werde ich herausfinden! Ist\l"
	.string "bestimmt lustig!$"


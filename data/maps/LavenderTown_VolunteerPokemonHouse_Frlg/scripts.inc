LavenderTown_VolunteerPokemonHouse_Frlg_MapScripts::
	.byte 0

LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji::
	lock
	faceplayer
	goto_if_set FLAG_GOT_POKE_FLUTE, LavenderTown_VolunteerPokemonHouse_EventScript_AlreadyHavePokeFlute
	msgbox LavenderTown_VolunteerPokemonHouse_Text_IdLikeYouToHaveThis
	checkitemspace ITEM_POKE_FLUTE
	goto_if_eq VAR_RESULT, FALSE, LavenderTown_VolunteerPokemonHouse_EventScript_NoRoomForPokeFlute
	setflag FLAG_GOT_POKE_FLUTE
	giveitem_msg LavenderTown_VolunteerPokemonHouse_Text_ReceivedPokeFluteFromMrFuji, ITEM_POKE_FLUTE, 1, MUS_RG_OBTAIN_KEY_ITEM
	msgbox LavenderTown_VolunteerPokemonHouse_Text_ExplainPokeFlute
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_AlreadyHavePokeFlute::
	msgbox LavenderTown_VolunteerPokemonHouse_Text_HasPokeFluteHelpedYou
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_NoRoomForPokeFlute::
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MustMakeRoomForThis
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_LittleGirl::
	lock
	faceplayer
	famechecker FAMECHECKER_MRFUJI, 0
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiLooksAfterOrphanedMons
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_LittleBoy::
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MonsNiceToHug, MSGBOX_NPC
	end

LavenderTown_VolunteerPokemonHouse_EventScript_Youngster::
	lock
	faceplayer
	goto_if_set FLAG_RESCUED_MR_FUJI, LavenderTown_VolunteerPokemonHouse_EventScript_YoungsterFujiBack
	msgbox LavenderTown_VolunteerPokemonHouse_Text_WhereDidMrFujiGo
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_YoungsterFujiBack::
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiWasPrayingForCubonesMother
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_Nidorino::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_NIDORINO, CRY_MODE_NORMAL
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Nidorino
	waitmoncry
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_Psyduck::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Psyduck
	waitmoncry
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_PokemonFanMagazine::
	lockall
	famechecker FAMECHECKER_MRFUJI, 2
	msgbox LavenderTown_VolunteerPokemonHouse_Text_GrandPrizeDrawingClipped
	releaseall
	end

LavenderTown_VolunteerPokemonHouse_EventScript_Bookshelf::
	msgbox LavenderTown_VolunteerPokemonHouse_Text_PokemonMagazinesLineShelf, MSGBOX_SIGN
	end

LavenderTown_PokemonCenter_1F_Text_HearMrFujiNotFromAroundHere::
	.string "Ich bin erst vor kurzem in diese\n"
	.string "Stadt gezogen!\p"
	.string "Ich hörte, dass MR. FUJI auch\n"
	.string "nicht von hier stammt!$"

LavenderTown_VolunteerPokemonHouse_Text_WhereDidMrFujiGo::
	.string "MR. FUJI ist nicht zu Hause.\n"
	.string "Wohin mag er gegangen sein?$"

LavenderTown_VolunteerPokemonHouse_Text_MrFujiWasPrayingForCubonesMother::
	.string "MR. FUJI hat oft für TRAGOSSOs\n"
	.string "Mutter gebetet.$"

LavenderTown_VolunteerPokemonHouse_Text_MrFujiLooksAfterOrphanedMons::
	.string "Das hier ist MR. FUJIs Haus.\p"
	.string "Er ist sehr fürsorglich!\p"
	.string "Er kümmert sich um ausgesetzte\n"
	.string "und verwaiste POKéMON!$"

LavenderTown_VolunteerPokemonHouse_Text_MonsNiceToHug::
	.string "Sie sind so putzig! POKéMON sind\n"
	.string "wunderbare Schmusetiere!$"

LavenderTown_VolunteerPokemonHouse_Text_Nidorino::
	.string "NIDORINO: Nido!$"

LavenderTown_VolunteerPokemonHouse_Text_Psyduck::
	.string "ENTON: Quacka!$"

LavenderTown_VolunteerPokemonHouse_Text_IdLikeYouToHaveThis::
	.string "MR. FUJI: {PLAYER}!\p"
	.string "Du kannst deinen POKéDEX nicht\n"
	.string "vollenden, wenn du deinen POKéMON\l"
	.string "nicht genügend Liebe und Respekt\l"
	.string "entgegenbringst.\p"
	.string "Dies wird dir bei deinem Abenteuer\n"
	.string "helfen.$"

LavenderTown_VolunteerPokemonHouse_Text_ReceivedPokeFluteFromMrFuji::
	.string "{PLAYER} received a POKé FLUTE\n"
	.string "from MR. FUJI.$"

LavenderTown_VolunteerPokemonHouse_Text_ExplainPokeFlute::
	.string "Schlafende POKéMON wachen auf,\n"
	.string "wenn sie das Spiel der POKéFLÖTE\l"
	.string "hören!\p"
	.string "Du kannst damit alle schlafenden\n"
	.string "POKéMON wecken!$"

LavenderTown_VolunteerPokemonHouse_Text_MustMakeRoomForThis::
	.string "Du hast keinen Platz für weitere\n"
	.string "Items!$"

LavenderTown_VolunteerPokemonHouse_Text_HasPokeFluteHelpedYou::
	.string "MR. FUJI: War die FLÖTE schon von\n"
	.string "Nutzen für dich?$"

LavenderTown_VolunteerPokemonHouse_Text_GrandPrizeDrawingClipped::
	.string "GROSSES POKéMON-GEWINNSPIEL!\p"
	.string "Es sind keine Teilnahmekarten mehr\n"
	.string "vorhanden!\p"
	.string "Sie wurden alle abgeschickt!$"

LavenderTown_VolunteerPokemonHouse_Text_PokemonMagazinesLineShelf::
	.string "POKéMON-Zeitschriften!\p"
	.string "POKéMON-Notizbücher!\p"
	.string "POKéMON-Schaubilder!$"


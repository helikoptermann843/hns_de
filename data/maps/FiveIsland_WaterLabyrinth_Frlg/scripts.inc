FiveIsland_WaterLabyrinth_Frlg_MapScripts::
	.byte 0

FiveIsland_WaterLabyrinth_EventScript_EggGentleman::
	lock
	faceplayer
	goto_if_set FLAG_GOT_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_PostEggComment
	goto_if_set FLAG_NO_ROOM_FOR_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_ReturnForEgg
	msgbox FiveIsland_WaterLabyrinth_Text_LetMeTakeLookAtMons
	specialvar VAR_RESULT, GetLeadMonFriendship
	goto_if_eq VAR_RESULT, 6, FiveIsland_WaterLabyrinth_EventScript_LeadMonMaxFriendship
	msgbox FiveIsland_WaterLabyrinth_Text_HmmISeeIsee
	release
	end

FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment::
	famechecker FAMECHECKER_DAISY, 2
	msgbox FiveIsland_WaterLabyrinth_Text_CuteMonRemindsMeOfDaisy
	release
	end

FiveIsland_WaterLabyrinth_EventScript_LeadMonMaxFriendship::
	msgbox FiveIsland_WaterLabyrinth_Text_TreatMonRightHaveThis
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
	end

FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg::
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, FiveIsland_WaterLabyrinth_EventScript_NoRoomForEgg
	setflag FLAG_GOT_TOGEPI_EGG
	giveegg SPECIES_TOGEPI
	textcolor NPC_TEXT_COLOR_NEUTRAL
	playfanfare MUS_LEVEL_UP
	message FiveIsland_WaterLabyrinth_Text_ReceivedEggFromMan
	waitfanfare
	waitmessage
	call EventScript_RestorePrevTextColor
	goto FiveIsland_WaterLabyrinth_EventScript_PostEggComment
	end

@ If the player has a Togepi/Togetic from this game (assumed to be the one the man gave you) then comment on it
@ Otherwise make normal comment
FiveIsland_WaterLabyrinth_EventScript_PostEggComment::
	bufferspeciesname STR_VAR_2, SPECIES_TOGEPI
	setvar VAR_0x8004, SPECIES_TOGEPI
	specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
	bufferspeciesname STR_VAR_2, SPECIES_TOGETIC
	setvar VAR_0x8004, SPECIES_TOGETIC
	specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
	msgbox FiveIsland_WaterLabyrinth_Text_GladIMetSomeoneLikeYou
	release
	end

FiveIsland_WaterLabyrinth_EventScript_NoRoomForEgg::
	setflag FLAG_NO_ROOM_FOR_TOGEPI_EGG
	msgbox FiveIsland_WaterLabyrinth_Text_DontHaveSpaceInYourParty
	release
	end

FiveIsland_WaterLabyrinth_EventScript_ReturnForEgg::
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
	end

FiveIsland_WaterLabyrinth_Text_LetMeTakeLookAtMons::
	.string "Du reist überall hin, oder?\p"
	.string "Aber du nimmst Rücksicht auf\n"
	.string "deine Pokémon, oder?\p"
	.string "Lass mich das überprüfen!\n"
	.string "…………\l"
	.string "……$"

FiveIsland_WaterLabyrinth_Text_HmmISeeIsee::
	.string "Ah, hmm…\n"
	.string "So, so…$"

FiveIsland_WaterLabyrinth_Text_TreatMonRightHaveThis::
	.string "Ah, wirklich beeindruckend.\n"
	.string "Du behandelst deine Pokémon gut.\p"
	.string "Ich denke, ich kann dir das\n"
	.string "überlassen.\p"
	.string "Bitte, nimm dies!$"

FiveIsland_WaterLabyrinth_Text_ReceivedEggFromMan::
	.string "{PLAYER} erhält ein Ei.$"

FiveIsland_WaterLabyrinth_Text_DontHaveSpaceInYourParty::
	.string "… leider hast du keinen Platz\n"
	.string "in deinem Team.\p"
	.string "Hole es dir später ab!$"

@ Unused
FiveIsland_WaterLabyrinth_Text_YouveComeBackForTheEgg::
	.string "やあ\n"
	.string "タマゴを　もらいに\l"
	.string "きて　くれたんだね$"

FiveIsland_WaterLabyrinth_Text_GladIMetSomeoneLikeYou::
	.string "Ich habe das Ei auf meinen Reisen\n"
	.string "bekommen.\p"
	.string "Ich bin froh, jemanden wie dich\n"
	.string "getroffen zu haben.$"

FiveIsland_WaterLabyrinth_Text_CuteMonRemindsMeOfDaisy::
	.string "Oh, hallo!\n"
	.string "Das ist ein süßes {STR_VAR_2}.\p"
	.string "Beim Betrachten fällt mir ein\n"
	.string "kleines Mädchen ein, das\l"
	.string "ich auf einer meiner Reisen traf.\p"
	.string "Sie hat sich rührend um Pokémon\n"
	.string "gekümmert. Sie war ein Engel.\p"
	.string "Der Name dieses kleinen Mädchens…\n"
	.string "Ich glaube er lautete Sarah.$"

FiveIsland_WaterLabyrinth_Text_AlizeIntro::
	.string "Dies ist die perfekte Umgebung,\n"
	.string "um Pokémon zu trainieren.$"

FiveIsland_WaterLabyrinth_Text_AlizeDefeat::
	.string "Deine Pokémon sind bewundernswert\n"
	.string "trainiert.$"

FiveIsland_WaterLabyrinth_Text_AlizePostBattle::
	.string "Ich glaube, du hast das Talent für\n"
	.string "einen guten Züchter.$"

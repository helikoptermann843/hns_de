MossdeepCity_GameCorner_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_GameCorner_1F_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MossdeepCity_GameCorner_1F_OnWarp
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
	.byte 0

MossdeepCity_GameCorner_1F_OnWarp:
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, CableClub_EventScript_CheckTurnAttendant
	.2byte 0

MossdeepCity_GameCorner_1F_OnFrame:
	map_script_2 VAR_CABLE_CLUB_STATE, USING_MINIGAME, CableClub_EventScript_ExitMinigameRoom
	.2byte 0

@ Script is redundant, the label in the goto also does lock and faceplayer
MossdeepCity_GameCorner_1F_EventScript_InfoMan::
	lock
	faceplayer
	goto MossdeepCity_GameCorner_1F_EventScript_InfoMan2
	release
	end

@ Script is redundant, the label in the goto also does lock and faceplayer
MossdeepCity_GameCorner_1F_EventScript_OldMan::
	lock
	faceplayer
	goto MossdeepCity_GameCorner_1F_EventScript_OldMan2
	release
	end


@ Everything below is leftover from RS
@ The house that was here in RS was moved to Sootopolis and replaced by the Game Corner
@ The text below is unused and duplicated in its replacement in Sootopolis City
@ And the BG Door event was moved inaccessibly into a wall

RS_MysteryEventsHouse_EventScript_Door::
	msgbox RS_MysteryEventsHouse_Text_DoorIsLocked, MSGBOX_SIGN
	end

RS_MysteryEventsHouse_Text_OldManGreeting:
	.string "Als ich noch jung war, bin ich als\n"
	.string "Pokémon-Trainer durch die Welt\l"
	.string "gereist.\p"
	.string "Nun, da ich ein alter Knabe geworden\n"
	.string "bin, beobachte ich mit Freuden die\l"
	.string "jungen Trainer bei ihren Kämpfen.$"

RS_MysteryEventsHouse_Text_DoorIsLocked:
	.string "Diese Tür ist verschlossen.$"

RS_MysteryEventsHouse_Text_ChallengeVisitingTrainer:
	.string "Ein Trainer namens {STR_VAR_1} ist bei\n"
	.string "mir zu Besuch.\p"
	.string "Möchtest du einmal gegen {STR_VAR_1}\n"
	.string "antreten?$"

RS_MysteryEventsHouse_Text_YouWontBattle:
	.string "Du möchtest nicht kämpfen? Es ent-\n"
	.string "täuscht mich, dass ich dich nicht\l"
	.string "kämpfen sehen kann.$"

RS_MysteryEventsHouse_Text_KeepItToA3On3:
	.string "Oh, sehr gut!\p"
	.string "Aber mein Haus ist nicht sehr stabil.\p"
	.string "Könntet ihr einen 3-gegen-3-Kampf\n"
	.string "ausfechten?$"

RS_MysteryEventsHouse_Text_SaveYourProgress:
	.string "Bevor ihr gegeneinander antretet,\n"
	.string "solltet ihr eure Spiele speichern!$"

RS_MysteryEventsHouse_Text_HopeToSeeAGoodMatch:
	.string "Ich hoffe, einen guten Kampf zu sehen!$"

RS_MysteryEventsHouse_Text_BattleTie:
	.string "Der Kampf endet unentschieden.$"

RS_MysteryEventsHouse_Text_BattleWon:
	.string "Das war absolute Spitzenklasse!\p"
	.string "Ich habe mich wieder erkannt - mich in\n"
	.string "meinen jungen Jahren!$"

RS_MysteryEventsHouse_Text_BattleLost:
	.string "Ach, wie bedauerlich für dich!\p"
	.string "Aber es war ein guter Kampf.\n"
	.string "Ich hoffe, das nächste Mal gewinnst du.$"

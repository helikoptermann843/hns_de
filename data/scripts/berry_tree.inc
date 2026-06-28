#if IS_HNS

BerryTreeScript::
	special ObjectEventInteractionGetBerryTreeData
	switch VAR_0x8004
	case BERRY_STAGE_SPARKLING, BerryTree_EventScript_Hns_NotRipe
	case BERRY_STAGE_NO_BERRY, BerryTree_EventScript_Hns_NotRipe
	case BERRY_STAGE_PLANTED, BerryTree_EventScript_Hns_NotRipe
	case BERRY_STAGE_SPROUTED, BerryTree_EventScript_Hns_NotRipe
	case BERRY_STAGE_TALLER, BerryTree_EventScript_Hns_NotRipe
	case BERRY_STAGE_FLOWERING, BerryTree_EventScript_Hns_NotRipe
	case BERRY_STAGE_BERRIES, BerryTree_EventScript_Hns_FullyGrown
	end

BerryTree_EventScript_Hns_NotRipe::
	lock
	message BerryTree_Text_Hns_NotRipe
	waitmessage
	waitbuttonpress
	release
	end

BerryTree_EventScript_Hns_FullyGrown::
	buffernumberstring STR_VAR_2, VAR_0x8006
	lock
	faceplayer
	goto BerryTree_EventScript_Hns_PickBerry

BerryTree_EventScript_Hns_PickBerry::
	special ObjectEventInteractionPickBerryTree
	goto_if_eq VAR_0x8004, 0, BerryTree_EventScript_Hns_BagFull
	special IncrementDailyPickedBerries
	special ObjectEventInteractionRemoveBerryTree
	message BerryTree_Text_Hns_Picked
	playfanfare MUS_OBTAIN_BERRY
	special ObjectEventInteractionPlantBerryTree
	incrementgamestat GAME_STAT_PLANTED_BERRIES
	special IncrementDailyPlantedBerries
	waitmessage
	waitfanfare
	release
	end

BerryTree_EventScript_Hns_BagFull::
	message BerryTree_Text_Hns_BagFull
	waitmessage
	waitbuttonpress
	release
	end

BerryTree_EventScript_Hns_Sprout::
	message BerryTree_Text_Hns_Sprouted
	waitmessage
	callnative Berry_Ready
	waitbuttonpress
	release
	end

BerryTree_EventScript_ItemUsePlantBerry::
	end

BerryTree_EventScript_ItemUseWailmerPail::
	end

BerryTree_Text_Hns_NotRipe:
	.string "Ein Strauß Beeren!\n"
	.string "Diese Beeren sind noch nicht reif.$"

BerryTree_Text_Hns_Picked:
	.string "{PLAYER} pflückt die {STR_VAR_2} {STR_VAR_1}.$"

BerryTree_Text_Hns_BagFull:
	.string "Die Beerentasche ist voll.\p"
	.string "Kann {STR_VAR_1} nicht mitnehmen.$"

BerryTree_Text_Hns_Sprouted:
	.string "Die Beeren sprießen plötzlich!$"

#else

BerryTreeScript::
	special ObjectEventInteractionGetBerryTreeData
	switch VAR_0x8004
	case BERRY_STAGE_SPARKLING, BerryTree_EventScript_Sparkling
	case BERRY_STAGE_NO_BERRY, BerryTree_EventScript_CheckSoil
	case BERRY_STAGE_PLANTED, BerryTree_EventScript_CheckBerryStage1
	case BERRY_STAGE_SPROUTED, BerryTree_EventScript_CheckBerryStage2
	case BERRY_STAGE_TALLER, BerryTree_EventScript_CheckBerryStage3
	case BERRY_STAGE_TRUNK, BerryTree_EventScript_CheckBerryStageTrunk
	case BERRY_STAGE_BUDDING, BerryTree_EventScript_CheckBerryStageBudding
	case BERRY_STAGE_FLOWERING, BerryTree_EventScript_CheckBerryStage4
	case BERRY_STAGE_BERRIES, BerryTree_EventScript_CheckBerryFullyGrown
	end

BerryTree_EventScript_Sparkling::
	lockall
	message BerryTree_Text_ExclamationPoint
	waitmessage
	waitbuttonpress
	releaseall
	end

BerryTree_EventScript_CheckSoil::
	lock
	faceplayer
	specialvar VAR_RESULT, PlayerHasBerries
	goto_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_WantToPlant
	specialvar VAR_RESULT, PlayerHasMulch
	goto_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_WantToMulch
	message BerryTree_Text_ItsSoftLoamySoil
	waitmessage
	waitbuttonpress
	release
	end

BerryTree_EventScript_WantToPlant::
	specialvar VAR_RESULT, PlayerHasMulch
	goto_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_WantToPlantMulch
	msgbox BerryTree_Text_WantToPlant, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_ChooseBerryToPlant
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_CancelPlanting
	end

BerryTree_EventScript_WantToMulch::
.if OW_BERRY_MULCH_USAGE == TRUE
	msgbox BerryTree_Text_WantToMulch, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_ChooseMulchToUse
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_CancelPlanting
.endif
	end

BerryTree_EventScript_WantToPlantMulch::
.if OW_BERRY_MULCH_USAGE == TRUE
	message BerryTree_Text_ItsSoftLoamySoil
	waitmessage
	multichoice 0, 0, MULTI_BERRY_PLOT, FALSE
	switch VAR_RESULT
	case 0, BerryTree_EventScript_ChooseMulchToUse
	case 1, BerryTree_EventScript_ChooseBerryToPlant
	case 2, BerryTree_EventScript_CancelPlanting
	case MULTI_B_PRESSED, BerryTree_EventScript_CancelPlanting

BerryTree_EventScript_ChooseMulchToUse::
	fadescreen FADE_TO_BLACK
	closemessage
	special Bag_ChooseMulch
	waitstate
	goto_if_eq VAR_ITEM_ID, 0, BerryTree_EventScript_CancelPlanting
	removeitem VAR_ITEM_ID
	call BerryTree_EventScript_UseMulch
.endif

BerryTree_EventScript_ChooseBerryToPlant::
	fadescreen FADE_TO_BLACK
	closemessage
	special Bag_ChooseBerry
	waitstate
	goto_if_eq VAR_ITEM_ID, 0, BerryTree_EventScript_CancelPlanting
	removeitem VAR_ITEM_ID
	call BerryTree_EventScript_PlantBerry

BerryTree_EventScript_CancelPlanting::
	release
	end

BerryTree_EventScript_CheckBerryStage1::
	lockall
	special ObjectEventInteractionGetBerryCountString
	message BerryTree_Text_BerryGrowthStage1
	waitmessage
	waitbuttonpress
	goto BerryTree_EventScript_WantToWater

BerryTree_EventScript_CheckBerryStage2::
	lockall
	special ObjectEventInteractionGetBerryName
	message BerryTree_Text_BerryGrowthStage2
	waitmessage
	waitbuttonpress
	goto BerryTree_EventScript_WantToWater

BerryTree_EventScript_CheckBerryStage3::
	lockall
	special ObjectEventInteractionGetBerryName
	message BerryTree_Text_BerryGrowthStage3
	waitmessage
	waitbuttonpress
	goto BerryTree_EventScript_WantToWater

BerryTree_EventScript_CheckBerryStageTrunk::
	lockall
	special ObjectEventInteractionGetBerryName
	message BerryTree_Text_BerryGrowthStageTrunk
	waitmessage
	waitbuttonpress
	goto BerryTree_EventScript_WantToWater

BerryTree_EventScript_CheckBerryStageBudding::
	lockall
	special ObjectEventInteractionGetBerryName
	message BerryTree_Text_BerryGrowthStageBudding
	waitmessage
	waitbuttonpress
	goto BerryTree_EventScript_WantToWater

BerryTree_EventScript_CheckBerryStage4::
	call BerryTree_EventScript_GetCareAdverb
	lockall
	special ObjectEventInteractionGetBerryName
	message BerryTree_Text_BerryGrowthStage4
	waitmessage
	waitbuttonpress
	goto BerryTree_EventScript_WantToWater

@ VAR_0x8005 here is the number of times watered
@ Buffered by ObjectEventInteractionGetBerryTreeData
BerryTree_EventScript_GetCareAdverb::
	goto_if_eq VAR_0x8005, 0, BerryTree_EventScript_SetAdverbPoor
	goto_if_eq VAR_0x8005, 4, BerryTree_EventScript_SetAdverbGreat
	bufferstring STR_VAR_2, BerryTree_Text_CareAdverbGood
	return

BerryTree_EventScript_SetAdverbGreat::
	bufferstring STR_VAR_2, BerryTree_Text_CareAdverbGreat
	return

BerryTree_EventScript_SetAdverbPoor::
	bufferstring STR_VAR_2, BerryTree_Text_CareAdverbPoor
	return

@ VAR_0x8006 here is the number of berries
BerryTree_EventScript_CheckBerryFullyGrown::
	buffernumberstring STR_VAR_2, VAR_0x8006
	lock
	faceplayer
	special ObjectEventInteractionGetBerryCountString
.if OW_BERRY_MUTATIONS == TRUE
	goto_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_CheckBerryFullyGrown_Mutation
.endif
	msgbox BerryTree_Text_WantToPick, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_PickBerry
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_CancelPickingBerry

.set BERRY_NORMAL_BAG_FULL, 0
.set BERRY_NORMAL_SPACE_IN_BAG, 1
.set BERRY_MUTATION_BAG_FULL, 2
.set BERRY_MUTATION_SPACE_IN_BAG, 3

BerryTree_EventScript_PickBerry::
	special ObjectEventInteractionPickBerryTree
	goto_if_eq VAR_0x8004, BERRY_NORMAL_BAG_FULL, BerryTree_EventScript_BerryPocketFull
.if OW_BERRY_MUTATIONS == TRUE
	goto_if_eq VAR_0x8004, BERRY_MUTATION_BAG_FULL, BerryTree_EventScript_BerryPocketFull_Mutation
	goto_if_eq VAR_0x8004, BERRY_MUTATION_SPACE_IN_BAG, BerryTree_EventScript_PickBerry_Mutation
.endif
	special IncrementDailyPickedBerries
	special ObjectEventInteractionRemoveBerryTree
	message BerryTree_Text_PickedTheBerry
	delay 10
	showberrydescription
	playfanfare MUS_OBTAIN_BERRY
	waitmessage
	waitfanfare
	waitbuttonpress
	message BerryTree_Text_PutAwayBerry
	waitmessage
	waitbuttonpress
	hideitemdescription
	release
	end

BerryTree_EventScript_BerryPocketFull::
	message BerryTree_Text_BerryPocketFull
	waitmessage
	waitbuttonpress
	release
	end

BerryTree_EventScript_CancelPickingBerry::
	message BerryTree_Text_BerryLeftUnpicked
	waitmessage
	waitbuttonpress
	release
	end

BerryTree_EventScript_ItemUsePlantBerry::
	lockall
	special ObjectEventInteractionGetBerryTreeData
	call BerryTree_EventScript_PlantBerry
	releaseall
	end

BerryTree_EventScript_WantToWater::
.if OW_BERRY_PESTS == TRUE
	call BerryTree_EventScript_CheckForPests
.endif
.if OW_BERRY_WEEDS == TRUE
	call BerryTree_EventScript_CheckForWeed
.endif
	checkitem ITEM_WAILMER_PAIL
	goto_if_eq VAR_RESULT, FALSE, BerryTree_EventScript_DontWater
	specialvar VAR_RESULT, CanWaterBerryPlot
	goto_if_eq VAR_RESULT, FALSE, BerryTree_EventScript_DontWater
	special ObjectEventInteractionGetBerryName
	msgbox BerryTree_Text_WantToWater, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_WaterBerry
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_DontWater

BerryTree_EventScript_DontWater::
	releaseall
	end

BerryTree_EventScript_ItemUseWailmerPail::
	special ObjectEventInteractionGetBerryTreeData
	lockall
BerryTree_EventScript_WaterBerry::
	special ObjectEventInteractionGetBerryName
	message BerryTree_Text_WateredTheBerry
	waitmessage
	special ObjectEventInteractionWaterBerryTree
	special DoWateringBerryTreeAnim
	waitstate
	message BerryTree_Text_PlantIsDelighted
	waitmessage
	waitbuttonpress
	releaseall
	end

BerryTree_EventScript_PlantBerry::
	special ObjectEventInteractionPlantBerryTree
	incrementgamestat GAME_STAT_PLANTED_BERRIES
	special IncrementDailyPlantedBerries
	special ObjectEventInteractionGetBerryCountString
	message BerryTree_Text_PlantedOneBerry
	waitmessage
	waitbuttonpress
	return

BerryTree_Text_ItsSoftLoamySoil:
	.string "Fruchtbarer Boden.$"

BerryTree_Text_WantToPlant:
	.string "Fruchtbarer Boden.\n"
	.string "Möchtest du eine Beere pflanzen?$"

BerryTree_Text_PlantedOneBerry:
	.string "{PLAYER} pflanzt eine {STR_VAR_1} in\n"
	.string "den lehmigen Boden.$"

BerryTree_Text_BerryGrowthStage1:
.if OW_BERRY_SIX_STAGES == TRUE
	.string "Hier hast du die\n{STR_VAR_1}gepflanzt!$"
.else
	.string "Ein {STR_VAR_1} wurde hier gepflanzt.$"
.endif

BerryTree_Text_BerryGrowthStage2:
.if OW_BERRY_SIX_STAGES == TRUE
	.string "Die {STR_VAR_1} sprießt!$"
.else
	.string "{STR_VAR_1} ist gesprossen!$"
.endif

BerryTree_Text_BerryGrowthStage3:
.if OW_BERRY_SIX_STAGES == TRUE
	.string "Der {STR_VAR_1} Samen wächst gut!$"
.else
	.string "Diese {STR_VAR_1} Pflanze wächst gut.$"
.endif

BerryTree_Text_BerryGrowthStageTrunk:
	.string "Der {STR_VAR_1} Stamm wird dicker!$"

BerryTree_Text_BerryGrowthStageBudding:
	.string "Der {STR_VAR_1} Baum hat Knospen!$"

BerryTree_Text_BerryGrowthStage4:
.if OW_BERRY_SIX_STAGES == TRUE
	.string "Der {STR_VAR_1} Baum steht in Blüte!$"
.else
	.string "Diese {STR_VAR_1} Blumen sprießen\n"
	.string "{STR_VAR_2}.$"
.endif

BerryTree_Text_CareAdverbGreat:
	.string "wunderschön$"

BerryTree_Text_CareAdverbPoor:
	.string "zierlich$"

BerryTree_Text_CareAdverbGood:
	.string "hübsch$"

BerryTree_Text_WantToPick:
	.string "Du findest {STR_VAR_2} {STR_VAR_1}!\p"
	.string "Möchtest du die\n"
	.string "{STR_VAR_1} mitnehmen?$"

BerryTree_Text_PickedTheBerry:
	.string "{PLAYER} pflückt die {STR_VAR_2} {STR_VAR_1}.$"

BerryTree_Text_PutAwayBerry:
	.string "{PLAYER} verstaut die {STR_VAR_1}\n"
	.string "in der Beeren-Tasche.\p"
	.string "Der Boden ist wieder\n"
	.string "weich und lehmig.$"

BerryTree_Text_BerryPocketFull:
	.string "Die Beeren-Tasche ist voll.\p"
	.string "Kann {STR_VAR_1} nicht mitnehmen.$"

BerryTree_Text_BerryLeftUnpicked:
	.string "{PLAYER} lässt die {STR_VAR_1}\n"
	.string "ungepflückt zurück.$"

BerryTree_Text_WantToWater:
	.string "Möchtest du die {STR_VAR_1} mit der\n"
	.string "WAILMER-KANNE gießen?$"

BerryTree_Text_WateredTheBerry:
	.string "{PLAYER} gießt die {STR_VAR_1}.$"

BerryTree_Text_PlantIsDelighted:
	.string "Die Pflanze scheint sich zu freuen.$"

BerryTree_Text_ExclamationPoint:
	.string "!$"

.if OW_BERRY_MUTATIONS == TRUE
BerryTree_EventScript_CheckBerryFullyGrown_Mutation:
	msgbox BerryTree_Text_WantToPick_Mutation, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_PickBerry
	goto_if_eq VAR_RESULT, NO, BerryTree_EventScript_CancelPickingBerry_Mutation

BerryTree_EventScript_CancelPickingBerry_Mutation::
	message BerryTree_Text_BerryLeftUnpicked_Mutation
	waitmessage
	waitbuttonpress
	release
	end

BerryTree_EventScript_BerryPocketFull_Mutation::
	message BerryTree_Text_BerryPocketFull_Mutation
	waitmessage
	waitbuttonpress
	release
	end

BerryTree_EventScript_PickBerry_Mutation::
	special IncrementDailyPickedBerries
	special ObjectEventInteractionRemoveBerryTree
	message BerryTree_Text_PickedTheBerry_Mutation
	playfanfare MUS_OBTAIN_BERRY
	waitmessage
	waitfanfare
	waitbuttonpress
	message BerryTree_Text_PutAwayBerry_Mutation
	waitmessage
	waitbuttonpress
	release
	end

BerryTree_Text_WantToPick_Mutation:
	.string "Du findest {STR_VAR_2} {STR_VAR_1}\n"
	.string "und 1 {STR_VAR_3}!\p"
	.string "Möchtest du sie pflücken?$"

BerryTree_Text_BerryLeftUnpicked_Mutation:
	.string "{PLAYER} lässt {STR_VAR_1}\n"
	.string "und die {STR_VAR_3} zurück.$"

BerryTree_Text_BerryPocketFull_Mutation:
	.string "Die Beeren-Tasche ist voll.\p"
	.string "Die {STR_VAR_1} und die\n"
	.string "{STR_VAR_3} bleiben zurück.$"

BerryTree_Text_PickedTheBerry_Mutation:
	.string "{PLAYER} pflückt {STR_VAR_2} {STR_VAR_1}\n"
	.string "und die {STR_VAR_3}.$"

BerryTree_Text_PutAwayBerry_Mutation:
	.string "{PLAYER} verstaut die {STR_VAR_1}\n"
	.string "und die {STR_VAR_3} in der\l"
	.string "BEERENTASCHE.\p"
	.string "Der Boden ist wieder weich\n"
	.string "und lehmig.$"
.endif

.if OW_BERRY_MULCH_USAGE == TRUE
BerryTree_EventScript_UseMulch::
	special ObjectEventInteractionApplyMulch
	message BerryTree_Text_ScatteredMulch
	waitmessage
	waitbuttonpress
	return

BerryTree_Text_WantToMulch:
	.string "Es ist lehmiger Boden.\n"
	.string "Dünger verwenden?$"

BerryTree_Text_ScatteredMulch:
	.string "{PLAYER} verstreut die {STR_VAR_1}\n"
	.string "auf dem weichen Boden.$"
.endif

.if OW_BERRY_WEEDS == TRUE
BerryTree_EventScript_CheckForWeed::
	specialvar VAR_RESULT, ObjectEventInteractionBerryHasWeed
	call_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_WeedIsGrowing
	return

BerryTree_EventScript_WeedIsGrowing::
	msgbox BerryTree_Text_WeedIsGrowing, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, BerryTree_EventScript_PullOutWeed
	return

BerryTree_EventScript_PullOutWeed::
	special ObjectEventInteractionPullBerryWeed
	message BerryTree_Text_PulledOutTheWeed
	waitmessage
	waitbuttonpress
	return

BerryTree_Text_WeedIsGrowing:
	.string "Unkraut wächst hier.\n"
	.string "Möchtest du es herausziehen?$"

BerryTree_Text_PulledOutTheWeed:
	.string "{PLAYER} zieht das Unkraut heraus!$"
.endif

.if OW_BERRY_PESTS == TRUE
BerryTree_EventScript_CheckForPests::
	specialvar VAR_RESULT, ObjectEventInteractionBerryHasPests
	call_if_eq VAR_RESULT, TRUE, BerryTree_EventScript_EncounterPests
	return

BerryTree_EventScript_EncounterPests::
	message BerryTree_Text_APokemonAppeared
	waitmessage
	waitbuttonpress
	dowildbattle
	return

BerryTree_Text_APokemonAppeared:
	.string "Ein Pokémon erscheint!$"
.endif

#endif

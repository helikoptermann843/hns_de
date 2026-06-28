PetalburgWoods_MapScripts::
	.byte 0

PetalburgWoods_EventScript_DevonResearcherLeft::
	lockall
	call PetalburgWoods_EventScript_DevonResearcherIntro
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
	waitmovement 0
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
	waitmovement 0
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
	waitmovement 0
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
	waitmovement 0
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
	waitmovement 0
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
	waitmovement 0
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
	waitmovement 0
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
	end

PetalburgWoods_EventScript_DevonResearcherRight::
	lockall
	call PetalburgWoods_EventScript_DevonResearcherIntro
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_AQUA, FALSE
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaEntrance
	waitmovement 0
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
	waitmovement 0
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
	waitmovement 0
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaBackOff
	waitmovement 0
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
	applymovement LOCALID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
	waitmovement 0
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
	end

PetalburgWoods_EventScript_DevonResearcherIntro::
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
	waitmovement 0
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
	closemessage
	return

PetalburgWoods_EventScript_DevonResearcherPostBattle::
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PETALBURG_WOODS_GRUNT, PetalburgWoods_Movement_AquaRunAway
	waitmovement 0
	removeobject LOCALID_PETALBURG_WOODS_GRUNT
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
	giveitem ITEM_GREAT_BALL
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
	goto PetalburgWoods_EventScript_DevonResearcherFinish
	end

PetalburgWoods_EventScript_BagFull::
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
	goto PetalburgWoods_EventScript_DevonResearcherFinish
	end

PetalburgWoods_EventScript_DevonResearcherFinish::
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
	applymovement LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
	waitmovement 0
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
	closemessage
	return

PetalburgWoods_EventScript_RemoveDevonResearcher::
	removeobject LOCALID_PETALBURG_WOODS_DEVON_EMPLOYEE
	setvar VAR_PETALBURG_WOODS_STATE, 1
	releaseall
	end

PetalburgWoods_Movement_DevonResearcherLookAround:
	face_up
	delay_16
	delay_4
	face_right
	delay_16
	delay_8
	face_left
	delay_16
	delay_8
	face_down
	delay_16
	face_right
	delay_16
	delay_8
	face_up
	delay_16
	step_end

PetalburgWoods_Movement_DevonResearcherExitLeft:
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
	delay_16
	face_player
	walk_down
	walk_down
	step_end

PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
	delay_16
	face_player
	walk_down
	walk_down
	walk_down
	walk_in_place_faster_right
	step_end

PetalburgWoods_Movement_DevonResearcherExitRight:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

PetalburgWoods_Movement_WatchResearcherLeave:
	delay_16
	delay_16
	walk_in_place_faster_up
	step_end

PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_in_place_faster_up
	step_end

PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
	walk_fast_down
	walk_fast_right
	walk_in_place_faster_up
	step_end

PetalburgWoods_Movement_DevonResearcherStartExit:
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_up
	step_end

PetalburgWoods_Movement_AquaApproachResearcherLeft:
	walk_fast_down
	walk_fast_down
	step_end

PetalburgWoods_Movement_AquaBackOff:
	lock_facing_direction
	walk_up
	unlock_facing_direction
	step_end

PetalburgWoods_Movement_AquaRunAway:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	delay_16
	delay_16
	step_end

PetalburgWoods_Movement_AquaApproachResearcherRight:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

PetalburgWoods_Movement_AquaEntrance:
	walk_down
	walk_down
	delay_16
	delay_16
	step_end

PetalburgWoods_Movement_AquaApproachPlayer:
	walk_down
	step_end

PetalburgWoods_EventScript_Boy1::
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
	end

PetalburgWoods_EventScript_Boy2::
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
	end

PetalburgWoods_EventScript_Girl::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
	giveitem ITEM_MIRACLE_SEED
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_MIRACLE_SEED
	release
	end

PetalburgWoods_EventScript_ExplainMiracleSeed::
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
	release
	end

PetalburgWoods_EventScript_Sign1::
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
	end

PetalburgWoods_EventScript_Sign2::
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
	end

PetalburgWoods_EventScript_Lyle::
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
	end

PetalburgWoods_EventScript_James::
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
	setvar VAR_0x8004, TRAINER_JAMES_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
	release
	end

PetalburgWoods_EventScript_TryRegisterJames::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
	release
	end

PetalburgWoods_EventScript_RegisterJames::
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
	register_matchcall TRAINER_JAMES_1
	release
	end

PetalburgWoods_EventScript_TryRegisterJames2::
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
	release
	end

PetalburgWoods_EventScript_RegisterJames2::
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
	register_matchcall TRAINER_JAMES_1
	release
	end

PetalburgWoods_EventScript_JamesRematch::
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
	end

PetalburgWoods_Text_NotAOneToBeFound:
	.string "Hmmm… Kein Einziges zu finden.$"

PetalburgWoods_Text_HaveYouSeenShroomish:
	.string "Hallo, du hast nicht zufällig einige\n"
	.string "POKéMON namens KNILZ hier\p"
	.string "gesehen? Ich liebe diese POKéMON.$"

PetalburgWoods_Text_IWasGoingToAmbushYou:
	.string "Ich wollte dich eigentlich aus dem\n"
	.string "Hinterhalt angreifen, aber du trödelst\l"
	.string "wohl auf ewig im BLÜTENBURGWALD\l"
	.string "herum, oder?\p"
	.string "Das Warten machte mich ganz krank.\n"
	.string "Also, hier bin ich.$"

PetalburgWoods_Text_HandOverThosePapers:
	.string "He, du! FORSCHER von DEVON!\p"
	.string "Gib sofort die Papiere her!$"

PetalburgWoods_Text_YouHaveToHelpMe:
	.string "Attackeee!\p"
	.string "Du bist ein POKéMON-TRAINER, oder?\n"
	.string "Du musst mir bitte helfen!$"

PetalburgWoods_Text_NoOneCrossesTeamAqua:
	.string "Huch. Was machst du da eigentlich???\n"
	.string "Was?!? Du schützt ihn???\p"
	.string "Niemand, der sich TEAM AQUA in den Weg\n"
	.string "stellt, kann auf Gnade hoffen.\n"
	.string "Niemand! \p"
	.string "Los, kämpfe gegen mich!$"

PetalburgWoods_Text_YoureKiddingMe:
	.string "Du hast mich geleimt! Du bist stark!$"

PetalburgWoods_Text_YouveGotSomeNerve:
	.string "Grrr… Du hast vielleicht Nerven, dich\n"
	.string "mit TEAM AQUA anzulegen!\l"
	.string "Los, kämpfen wir noch einmal!\p"
	.string "Hm, das würde ich jetzt zu gerne\n"
	.string "sagen,\n"
	.string "aber ich habe keine POKéMON mehr…\p"
	.string "Außerdem sind wir, TEAM AQUA, auf dem\n"
	.string "Weg nach METAROST CITY.\p"
	.string "Für heute lasse ich dich gehen.$"

PetalburgWoods_Text_ThatWasAwfullyClose:
	.string "Huuuh… Das war aber mehr als knapp!\p"
	.string "Dank dir konnte er mir diese\n"
	.string "wichtigen Papiere nicht rauben.\p"
	.string "Ich weiß! Ich gebe dir diesen\n"
	.string "SUPERBALL als Dankeschön!$"

PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
	.string "Hat dieser Schuft von TEAM AQUA nicht\n"
	.string "gesagt, dass sie irgendetwas in\l"
	.string "METAROST CITY erledigen wollen?$"

PetalburgWoods_Text_ICantBeWastingTime:
	.string "Oh oh! Das ist ein Notfall!\n"
	.string "Ich darf keine Zeit verlieren!$"

PetalburgWoods_Text_YoureLoadedWithItems:
	.string "Du bist mit Items überfrachtet.\n"
	.string "Ich kann dir den SUPERBALL nicht\l"
	.string "geben.$"

PetalburgWoods_Text_GoBugPokemonTeam:
	.string "Ich habe eine Menge POKéMON gefangen!\n"
	.string "\p"
	.string "Los, los, los!\n"
	.string "Mein KÄFER-POKéMON-Team!$"

PetalburgWoods_Text_ICouldntWin:
	.string "Ich habe all diese POKéMON, aber ich\n"
	.string "konnte doch nicht gewinnen…$"

PetalburgWoods_Text_ImOutOfPokeBalls:
	.string "Ich habe eine Menge POKéMON gefangen.\n"
	.string "Nun habe ich keine POKéBÄLLe mehr.$"

PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
	.string "Wenn du ein KÄFER-POKéMON mit zur\n"
	.string "Schule bringst, bist du sofort\l"
	.string "beliebt.$"

PetalburgWoods_Text_CantBePopularIfILose:
	.string "Wenn ich verliere, kann ich nicht\n"
	.string "beliebt werden.$"

PetalburgWoods_Text_PeopleRespectYou:
	.string "Hast du ein großes KÄFER-POKéMON,\n"
	.string "werden die Leute dich respektieren.$"

PetalburgWoods_Text_IWantRematch1:
	.string "Ich möchte wieder kämpfen, wenn meine\n"
	.string "KÄFER-POKéMON stärker geworden sind.\p"
	.string "Ich trage dich in meinen POKéNAV ein.$"

PetalburgWoods_Text_IWantRematch2:
	.string "Ich möchte wieder kämpfen, wenn meine\n"
	.string "KÄFER-POKéMON stärker geworden sind.\p"
	.string "Ich trage dich in meinen POKéNAV ein.$"

PetalburgWoods_Text_MyPokemonHaveGrown:
	.string "Meine KÄFER-POKéMON sind gewachsen.\n"
	.string "Ich werde wieder beliebt sein.$"

PetalburgWoods_Text_CantBePopularIfLose:
	.string "Ich werde nie beliebt, wenn ich\n"
	.string "immer verliere.$"

PetalburgWoods_Text_IveBeenTrainingHard:
	.string "Du wirst beliebt, wenn du starke\n"
	.string "POKéMON besitzt, oder?\l"
	.string "Daher trainiere ich bis zum Umfallen.$"

PetalburgWoods_Text_StayOutOfTallGrass:
	.string "Hey, du!\n"
	.string "Geht es deinen POKéMON gut?\p"
	.string "Wenn deine POKéMON schwach sind und\n"
	.string "du Kämpfe vermeiden willst, solltest\n"
	.string "du\l"
	.string "dich von hohem Gras fernhalten.$"

PetalburgWoods_Text_HiddenItemsExplanation:
	.string "Manchmal liegen auf dem Boden Dinge,\n"
	.string "die einem auf Anhieb gar nicht\l"
	.string "auffallen.\p"
	.string "Daher schaue ich mich bei jedem\n"
	.string "Schritt sorgfältig um.$"

PetalburgWoods_Text_TryUsingThisItem:
	.string "Oh, hübsch! Das ist der ORDEN\n"
	.string "der ARENA in METAROST CITY!\p"
	.string "Du siehst wie ein TRAINER aus. Dann\n"
	.string "musst du dieses Item ausprobieren.$"

PetalburgWoods_Text_MiracleSeedExplanation:
	.string "Das ist WUNDERSAAT.\n"
	.string "Wenn ein POKéMON sie trägt, werden\l"
	.string "die PFLANZEN-Attacken stärker.\p"
	.string "Neben der WUNDERSAAT gibt es bestimmt\n"
	.string "noch andere nützliche Items, die von\l"
	.string "POKéMON getragen werden können.$"

PetalburgWoods_Text_TrainerTipsExperience:
	.string "TIPPS für TRAINER\p"
	.string "Jedes POKéMON, das am Kampf teilnimmt,\n"
	.string "erhält ERFAHRUNGSPUNKTE, auch wenn es\l"
	.string "nur ganz kurz dabei ist.\p"
	.string "Setze eines deiner schwachen POKéMON\n"
	.string "daher an die Spitze der Liste.\p"
	.string "Sobald der Kampf beginnt, wechselst du\n"
	.string "es aus. Es wird E-Punkte bekommen und\l"
	.string "bleibt trotzdem immer unbeschadet.$"

PetalburgWoods_Text_TrainerTipsPP:
	.string "TIPPS für TRAINER\p"
	.string "Neben den Kraftpunkten (KP) besitzt\n"
	.string "ein POKéMON auch Angriffspunkte (AP),\l"
	.string "die für die Attacken im Kampf\n"
	.string "gebraucht\l"
	.string "werden.\p"
	.string "Wenn ein POKéMON keine AP mehr\n"
	.string "besitzt,\n"
	.string "muss es in ein POKéMON-CENTER gebracht\l"
	.string "werden.$"


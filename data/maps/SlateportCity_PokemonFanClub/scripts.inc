SlateportCity_PokemonFanClub_MapScripts::
	.byte 0

SlateportCity_PokemonFanClub_EventScript_Chairman::
	lock
	faceplayer
	goto_if_unset FLAG_ENTERED_CONTEST, SlateportCity_PokemonFanClub_EventScript_ChairmanNotEnteredContest
	call_if_unset FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN, SlateportCity_PokemonFanClub_EventScript_MeetChairman
	switch VAR_SLATEPORT_FAN_CLUB_STATE
	case 0, SlateportCity_PokemonFanClub_EventScript_ChairmanFirstAssessment
	case 1, SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon
	case 2, SlateportCity_PokemonFanClub_EventScript_NoMoreScarves
	release
	end

SlateportCity_PokemonFanClub_EventScript_ChairmanFirstAssessment::
	setvar VAR_SLATEPORT_FAN_CLUB_STATE, 1
	msgbox SlateportCity_PokemonFanClub_Text_AllowMeToExamineYourPokemon, MSGBOX_DEFAULT
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon
	end

SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon::
	setvar VAR_TEMP_2, 0
	call_if_set FLAG_RECEIVED_YELLOW_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
	call_if_set FLAG_RECEIVED_GREEN_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
	call_if_set FLAG_RECEIVED_PINK_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
	call_if_set FLAG_RECEIVED_BLUE_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
	call_if_set FLAG_RECEIVED_RED_SCARF, SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf
	call_if_eq VAR_TEMP_2, CONTEST_CATEGORIES_COUNT, SlateportCity_PokemonFanClub_EventScript_ReceivedAllScarves
	goto_if_eq VAR_SLATEPORT_FAN_CLUB_STATE, 2, SlateportCity_PokemonFanClub_EventScript_NoMoreScarves
	msgbox SlateportCity_PokemonFanClub_Text_HowIsYourPokemonGrowing, MSGBOX_DEFAULT
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon
	end

SlateportCity_PokemonFanClub_EventScript_NoMoreScarves::
	msgbox SlateportCity_PokemonFanClub_Text_NothingElseToGiveYou, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon::
	msgbox SlateportCity_PokemonFanClub_Text_HmHmISee, MSGBOX_DEFAULT
	setvar VAR_TEMP_1, 0
	call_if_unset FLAG_RECEIVED_YELLOW_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonTough
	call_if_unset FLAG_RECEIVED_GREEN_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonSmart
	call_if_unset FLAG_RECEIVED_PINK_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonCute
	call_if_unset FLAG_RECEIVED_BLUE_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonBeauty
	call_if_unset FLAG_RECEIVED_RED_SCARF, SlateportCity_PokemonFanClub_EventScript_CheckMonCool
	bufferleadmonspeciesname STR_VAR_1
	switch VAR_TEMP_1
	case 0, SlateportCity_PokemonFanClub_EventScript_NoHighConditions
	case 1, SlateportCity_PokemonFanClub_EventScript_GiveRedScarf
	case 2, SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf
	case 3, SlateportCity_PokemonFanClub_EventScript_GivePinkScarf
	case 4, SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf
	case 5, SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf
	release
	end

SlateportCity_PokemonFanClub_EventScript_ReceivedAllScarves::
	setvar VAR_SLATEPORT_FAN_CLUB_STATE, 2
	return

SlateportCity_PokemonFanClub_EventScript_CountReceivedScarf::
	addvar VAR_TEMP_2, 1
	return

SlateportCity_PokemonFanClub_EventScript_NoHighConditions::
	msgbox SlateportCity_PokemonFanClub_Text_GiveMonMorePokeblocks, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_GiveRedScarf::
	checkitemspace ITEM_RED_SCARF
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_RED_SCARF
	giveitem ITEM_RED_SCARF
	msgbox SlateportCity_PokemonFanClub_Text_ExplainRedScarf, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_GiveBlueScarf::
	checkitemspace ITEM_BLUE_SCARF
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_BLUE_SCARF
	giveitem ITEM_BLUE_SCARF
	msgbox SlateportCity_PokemonFanClub_Text_ExplainBlueScarf, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_GivePinkScarf::
	checkitemspace ITEM_PINK_SCARF
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_PINK_SCARF
	giveitem ITEM_PINK_SCARF
	msgbox SlateportCity_PokemonFanClub_Text_ExplainPinkScarf, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_GiveGreenScarf::
	checkitemspace ITEM_GREEN_SCARF
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_GREEN_SCARF
	giveitem ITEM_GREEN_SCARF
	msgbox SlateportCity_PokemonFanClub_Text_ExplainGreenScarf, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_GiveYellowScarf::
	checkitemspace ITEM_YELLOW_SCARF
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf
	msgbox SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_YELLOW_SCARF
	giveitem ITEM_YELLOW_SCARF
	msgbox SlateportCity_PokemonFanClub_Text_ExplainYellowScarf, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_NoRoomForScarf::
	msgbox SlateportCity_PokemonFanClub_Text_NoSpaceForReward, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_CheckMonCool::
	specialvar VAR_RESULT, CheckLeadMonCool
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonCool
	return

SlateportCity_PokemonFanClub_EventScript_SetMonCool::
	setvar VAR_TEMP_1, 1
	return

SlateportCity_PokemonFanClub_EventScript_CheckMonBeauty::
	specialvar VAR_RESULT, CheckLeadMonBeauty
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonBeauty
	return

SlateportCity_PokemonFanClub_EventScript_SetMonBeauty::
	setvar VAR_TEMP_1, 2
	return

SlateportCity_PokemonFanClub_EventScript_CheckMonCute::
	specialvar VAR_RESULT, CheckLeadMonCute
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonCute
	return

SlateportCity_PokemonFanClub_EventScript_SetMonCute::
	setvar VAR_TEMP_1, 3
	return

SlateportCity_PokemonFanClub_EventScript_CheckMonSmart::
	specialvar VAR_RESULT, CheckLeadMonSmart
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonSmart
	return

SlateportCity_PokemonFanClub_EventScript_SetMonSmart::
	setvar VAR_TEMP_1, 4
	return

SlateportCity_PokemonFanClub_EventScript_CheckMonTough::
	specialvar VAR_RESULT, CheckLeadMonTough
	call_if_eq VAR_RESULT, TRUE, SlateportCity_PokemonFanClub_EventScript_SetMonTough
	return

SlateportCity_PokemonFanClub_EventScript_SetMonTough::
	setvar VAR_TEMP_1, 5
	return

SlateportCity_PokemonFanClub_EventScript_ChairmanNotEnteredContest::
	goto_if_set FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN, SlateportCity_PokemonFanClub_EventScript_ChairmanEnterContest
	msgbox SlateportCity_PokemonFanClub_Text_MeetChairman, MSGBOX_DEFAULT
	setflag FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN
	release
	end

SlateportCity_PokemonFanClub_EventScript_ChairmanEnterContest::
	msgbox SlateportCity_PokemonFanClub_Text_LikeToSeeEnteredContestPokemon, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_MeetChairman::
	msgbox SlateportCity_PokemonFanClub_Text_MeetChairman, MSGBOX_DEFAULT
	setflag FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN
	return

SlateportCity_PokemonFanClub_EventScript_SootheBellWoman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SOOTHE_BELL, SlateportCity_PokemonFanClub_EventScript_ReceivedSootheBell
	msgbox SlateportCity_PokemonFanClub_Text_ShowMePokemonThatLoveYou, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	goto_if_ge VAR_RESULT, FRIENDSHIP_150_TO_199, SlateportCity_PokemonFanClub_EventScript_GiveSootheBell
	release
	end

SlateportCity_PokemonFanClub_EventScript_GiveSootheBell::
	playse SE_PIN
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
	waitmovement 0
	msgbox SlateportCity_PokemonFanClub_Text_PokemonAdoresYou, MSGBOX_DEFAULT
	giveitem ITEM_SOOTHE_BELL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SOOTHE_BELL
	release
	end

SlateportCity_PokemonFanClub_EventScript_ReceivedSootheBell::
	msgbox SlateportCity_PokemonFanClub_Text_TreatPokemonWithLove, MSGBOX_DEFAULT
	release
	end

SlateportCity_PokemonFanClub_EventScript_Man::
	msgbox SlateportCity_PokemonFanClub_Text_PokemonDontLikeFainting, MSGBOX_NPC
	end

SlateportCity_PokemonFanClub_EventScript_Twin::
	msgbox SlateportCity_PokemonFanClub_Text_MonEnjoyedProtein, MSGBOX_NPC
	end

SlateportCity_PokemonFanClub_EventScript_Skitty::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
	msgbox SlateportCity_PokemonFanClub_Text_Skitty, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SlateportCity_PokemonFanClub_EventScript_Zigzagoon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
	msgbox SlateportCity_PokemonFanClub_Text_Zigzagoon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SlateportCity_PokemonFanClub_EventScript_Azumarill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
	msgbox SlateportCity_PokemonFanClub_Text_Azumarill, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SlateportCity_PokemonFanClub_Text_MeetChairman:
	.string "Äh-hm. Ich bin der VORSITZENDE des\n"
	.string "POKéMON-FANCLUBs!\p"
	.string "Als VORSITZENDER bin ich natürlich die\n"
	.string "wichtigste Person hier!\p"
	.string "Keiner kann mir im Umgang mit POKéMON\n"
	.string "das Wasser reichen! Keiner!!!\p"
	.string "Aber jetzt lass mich dir etwas zu den\n"
	.string "POKéMON WETTBEWERBen sagen.\p"
	.string "Hier kann jeder seine POKéMON der\n"
	.string "Welt vorstellen!\p"
	.string "Sie finden allerdings in abgelegenen\n"
	.string "Orten statt, daher kann ich nicht an\l"
	.string "ihnen teilnehmen.\p"
	.string "Deshalb haben wir uns hier getroffen.\n"
	.string "Wir zeigen uns gegenseitig unsere\l"
	.string "POKéMON.$"

SlateportCity_PokemonFanClub_Text_LikeToSeeEnteredContestPokemon:
	.string "Das POKéMON eines TRAINERs, das an\n"
	.string "einem POKéMON  WETTBEWERB teilnimmt…\l"
	.string "Das würde ich zu gerne mal sehen.$"

SlateportCity_PokemonFanClub_Text_AllowMeToExamineYourPokemon:
	.string "Äh-hm. Wie ich sehe, hast du an einem\n"
	.string "POKéMON WETTBEWERB teilgenommen.\p"
	.string "Bitte! Darf ich mir mal anschauen, wie\n"
	.string "du deine POKéMON aufgezogen hast?\p"
	.string "Es ist toll, zu sehen, wie andere\n"
	.string "TRAINER ihre POKéMON aufziehen.\p"
	.string "Die zufriedenen Gesichter der POKéMON,\n"
	.string "die gut behandelt werden…\p"
	.string "Die fürsorgliche und liebevolle Art\n"
	.string "ihrer TRAINER…\p"
	.string "Mein Herz geht über vor Freude - da\n"
	.string "gibt es so viel Glück.\p"
	.string "Oh je! Entschuldige, ich schwatze hier\n"
	.string "die ganze Zeit vor mich hin!\p"
	.string "Bitte, erlaube mir einen Blick auf\n"
	.string "deine POKéMON. Wie sind sie gewachsen?$"

SlateportCity_PokemonFanClub_Text_HowIsYourPokemonGrowing:
	.string "Wie sehen deine POKéMON aus? Wie sind\n"
	.string "sie gewachsen? Erlaube mir einen\l"
	.string "Blick!$"

SlateportCity_PokemonFanClub_Text_HmHmISee:
	.string "Hm, hm…\n"
	.string "Verstehe…$"

SlateportCity_PokemonFanClub_Text_GiveMonMorePokeblocks:
	.string "Hmmm… Das ist weder gut noch\n"
	.string "schlecht…\p"
	.string "Du bist der TRAINER. Streng dich bei\n"
	.string "der Aufzucht dieses POKéMON mehr an!\p"
	.string "Dürfte ich vorschlagen, ihm mehr\n"
	.string "{POKEBLOCK} zu geben?$"

SlateportCity_PokemonFanClub_Text_NoSpaceForReward:
	.string "Oh, hey…\p"
	.string "Dein POKéMON macht einen guten Ein-\n"
	.string "druck. Ich möchte dir eine Belohnung\l"
	.string "geben.\p"
	.string "Leider hast du in deinem BEUTEL nicht\n"
	.string "mehr genügend Platz.$"

SlateportCity_PokemonFanClub_Text_MonMostImpressiveGiveItThis:
	.string "Dein {STR_VAR_1} ist wirklich sehr\n"
	.string "beeindruckend! Das ist wirklich ein\l"
	.string "wunderbares Exemplar!\p"
	.string "Und wenn du ihm dies gibst, wird\n"
	.string "es noch besser wachsen! Wirklich!$"

SlateportCity_PokemonFanClub_Text_ExplainRedScarf:
	.string "Lass ein POKéMON einen ROTEN SCHAL\n"
	.string "tragen.\p"
	.string "Dadurch wird die Coolness deines\n"
	.string "POKéMON unübersehbar!$"

SlateportCity_PokemonFanClub_Text_ExplainBlueScarf:
	.string "Lass ein POKéMON einen BLAUEN SCHAL\n"
	.string "tragen.\p"
	.string "Dadurch wird die Schönheit deines\n"
	.string "POKéMON unübersehbar!$"

SlateportCity_PokemonFanClub_Text_ExplainPinkScarf:
	.string "Lass ein POKéMON einen ROSA SCHAL\n"
	.string "tragen.\p"
	.string "Dadurch wird die Anmut deines\n"
	.string "POKéMON unübersehbar!$"

SlateportCity_PokemonFanClub_Text_ExplainGreenScarf:
	.string "Lass ein POKéMON einen GRÜNEN SCHAL\n"
	.string "tragen.\p"
	.string "Dadurch wird die Klugheit deines\n"
	.string "POKéMON unübersehbar!$"

SlateportCity_PokemonFanClub_Text_ExplainYellowScarf:
	.string "Lass ein POKéMON einen GELBEN SCHAL\n"
	.string "tragen.\p"
	.string "Dadurch wird die Stärke deines\n"
	.string "POKéMON unübersehbar!$"

SlateportCity_PokemonFanClub_Text_NothingElseToGiveYou:
	.string "Tut mir Leid, mehr kann ich dir leider\n"
	.string "nicht geben! Ich habe nichts mehr!\l"
	.string "Aber du besitzt etwas viel\p"
	.string "Wertvolleres: Das Talent, POKéMON ohne\n"
	.string "Zuhilfenahme von Items perfekt\l"
	.string "aufzuziehen!$"

SlateportCity_PokemonFanClub_Text_ShowMePokemonThatLoveYou:
	.string "Ich freue mich immer, POKéMON zu\n"
	.string "sehen, die ihre TRAINER lieben.\p"
	.string "POKéMON haben ein sensibles Gespür\n"
	.string "für die Gefühle ihrer TRAINER.\p"
	.string "Wenn du einem POKéMON Liebe und\n"
	.string "Achtung entgegenbringst, werden die\l"
	.string "Gefühle erwidert.\p"
	.string "Sobald dein POKéMON dich liebt, komm\n"
	.string "und besuche mich nochmals.$"

SlateportCity_PokemonFanClub_Text_PokemonAdoresYou:
	.string "Dein POKéMON betet dich geradezu an.\p"
	.string "Für einen so mitfühlenden TRAINER\n"
	.string "hat der FANCLUB ein Geschenk!$"

SlateportCity_PokemonFanClub_Text_TreatPokemonWithLove:
	.string "POKéMON haben ein sensibles Gespür\n"
	.string "für die Gefühle ihrer TRAINER.\p"
	.string "Wenn du einem POKéMON Liebe und\n"
	.string "Achtung entgegenbringst, werden die\l"
	.string "Gefühle erwidert.$"

SlateportCity_PokemonFanClub_Text_PokemonDontLikeFainting:
	.string "Wenn ein POKéMON in einem Kampf\n"
	.string "besiegt wird, nimmt es das übel.\p"
	.string "Und bald wird es dem TRAINER weniger\n"
	.string "Vertrauen schenken.\p"
	.string "Mit anderen Worten: Es wird dich nicht\n"
	.string "mehr so sehr mögen.$"

SlateportCity_PokemonFanClub_Text_MonEnjoyedProtein:
	.string "Mögen POKéMON Items?\p"
	.string "Mein POKéMON hat sich sehr gefreut,\n"
	.string "als ich ihm PROTEIN gegeben habe.$"

SlateportCity_PokemonFanClub_Text_Skitty:
	.string "ENECO: Fffnyaaaah…$"

SlateportCity_PokemonFanClub_Text_Zigzagoon:
	.string "ZIGZACHS: Kyuuu…$"

SlateportCity_PokemonFanClub_Text_Azumarill:
	.string "AZUMARILL: Marimari?$"


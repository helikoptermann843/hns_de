RustboroCity_PokemonSchool_MapScripts::
	.byte 0

RustboroCity_PokemonSchool_EventScript_Blackboard::
	lockall
	msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
	waitmessage
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
	switch VAR_RESULT
	case 0, RustboroCity_PokemonSchool_EventScript_Poison
	case 1, RustboroCity_PokemonSchool_EventScript_Paralysis
	case 2, RustboroCity_PokemonSchool_EventScript_Sleep
	case 3, RustboroCity_PokemonSchool_EventScript_Burn
	case 4, RustboroCity_PokemonSchool_EventScript_Freeze
	case 5, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
	end

RustboroCity_PokemonSchool_EventScript_Poison::
	msgbox RustboroCity_PokemonSchool_Text_ExplainPoison, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Paralysis::
	msgbox RustboroCity_PokemonSchool_Text_ExplainParalysis, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Sleep::
	msgbox RustboroCity_PokemonSchool_Text_ExplainSleep, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Burn::
	msgbox RustboroCity_PokemonSchool_Text_ExplainBurn, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_Freeze::
	msgbox RustboroCity_PokemonSchool_Text_ExplainFreeze, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
	end

RustboroCity_PokemonSchool_EventScript_ExitTopicSelect::
	releaseall
	end

RustboroCity_PokemonSchool_EventScript_GameboyKid1::
	msgbox RustboroCity_PokemonSchool_Text_TradingRightNow, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_GameboyKid2::
	msgbox RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_RichBoy::
	msgbox RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_Lass::
	msgbox RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_SchoolKidM::
	msgbox RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry, MSGBOX_NPC
	end

RustboroCity_PokemonSchool_EventScript_StudentNotebook::
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
	end

RustboroCity_PokemonSchool_EventScript_Teacher::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_GaveQuickClaw
	call_if_eq VAR_FACING, DIR_EAST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast
	call_if_eq VAR_FACING, DIR_WEST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest
	msgbox RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw, MSGBOX_DEFAULT
	giveitem ITEM_QUICK_CLAW
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	setflag FLAG_RECEIVED_QUICK_CLAW
	release
	end

RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast::
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast
	waitmovement 0
	return

RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest::
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest
	waitmovement 0
	return

RustboroCity_PokemonSchool_EventScript_GaveQuickClaw::
	msgbox RustboroCity_PokemonSchool_Text_ExplainQuickClaw, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	release
	end

RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest:
	walk_left
	walk_down
	walk_down
	walk_right
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_faster_left
	delay_16
	delay_16
	walk_right
	delay_16
	delay_16
	delay_8
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	walk_right
	step_end

RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_16
	walk_down
	walk_in_place_faster_left
	delay_16
	delay_16
	walk_right
	delay_16
	delay_16
	delay_8
	walk_up
	walk_right
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

RustboroCity_PokemonSchool_EventScript_Scott::
	lock
	faceplayer
	goto_if_set FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE, RustboroCity_PokemonSchool_EventScript_ScottWatchStudents
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut, MSGBOX_DEFAULT
	addvar VAR_SCOTT_STATE, 1
	setflag FLAG_MET_SCOTT_RUSTBORO
	release
	end

RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready::
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge::
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
	end

RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge::
	msgbox RustboroCity_PokemonSchool_Text_ScottStoneBadge, MSGBOX_DEFAULT
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
	end

RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge::
	addvar VAR_SCOTT_STATE, 1
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
	release
	end

RustboroCity_PokemonSchool_EventScript_ScottWatchStudents::
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
	release
	end

RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges:
	.string "Auf der Tafel sind die Statusverände-\n"
	.string "rungen von Pokémon aufgelistet.$"

RustboroCity_PokemonSchool_Text_ReadWhichTopic:
	.string "Welches Thema möchtest du lesen?$"

RustboroCity_PokemonSchool_Text_ExplainPoison:
	.string "Wenn ein Pokémon vergiftet wurde, wird\n"
	.string "es ständig KP verlieren.\p"
	.string "Die Auswirkungen des Giftes halten\n"
	.string "auch nach dem Kampf an.\p"
	.string "Die KP eines vergifteten Pokémon\n"
	.string "werden auch unterwegs weiter sinken.\p"
	.string "Mit einem Gegengift kann das Pokémon\n"
	.string "geheilt werden.$"

RustboroCity_PokemonSchool_Text_ExplainParalysis:
	.string "Wurde ein Pokémon paralysiert, sinkt\n"
	.string "seine Initiative.\p"
	.string "Es kann passieren, dass es während des\n"
	.string "Kampfes bewegungsunfähig wird.\p"
	.string "Die Paralyse hält auch nach dem Kampf\n"
	.string "an. Heile das Pokémon mit Para-Heiler.$"

RustboroCity_PokemonSchool_Text_ExplainSleep:
	.string "Wenn ein Pokémon einschläft, kann es\n"
	.string "nicht mehr angreifen.\p"
	.string "Das Pokémon wird vielleicht von selber\n"
	.string "wieder wach, aber wenn der Kampf endet\l"
	.string "und es noch schläft, schläft es\n"
	.string "weiter. \p"
	.string "Wecke es mit Aufwecker auf.$"

RustboroCity_PokemonSchool_Text_ExplainBurn:
	.string "Eine Verbrennung senkt die Kraft des\n"
	.string "Angriffs. Die KP nehmen ständig ab.\p"
	.string "Eine Verbrennung hält auch nach dem\n"
	.string "Kampf an. Setze Feuerheiler ein!$"

RustboroCity_PokemonSchool_Text_ExplainFreeze:
	.string "Wurde ein Pokémon eingefroren, so ist\n"
	.string "es völlig hilflos.\p"
	.string "Auch nach dem Kampf hält der Zustand\n"
	.string "an. Setze dann Eisheiler ein.$"

RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw:
	.string "Schüler, die nicht aufpassen, bekommen\n"
	.string "meine Flinkklaue zu spüren.\p"
	.string "Wie du dieses Item einsetzt, zeigt,\n"
	.string "ob du ein guter Schüler bist oder\l"
	.string "nicht.$"

RustboroCity_PokemonSchool_Text_ExplainQuickClaw:
	.string "Ein Pokémon, das die Flinkklaue trägt,\n"
	.string "steigert seine Schnelligkeit und\n"
	.string "greift\l"
	.string "eventuell schneller an als sein\n"
	.string "Gegner. \p"
	.string "Es gibt noch viele andere Items, die\l"
	.string "von\n"
	.string "einem Pokémon getragen werden können.\p"
	.string "\p"
	.string "Du kannst also noch viel lernen.$"

RustboroCity_PokemonSchool_Text_TradingRightNow:
	.string "Ich tausche gerade mit meinem Freund\n"
	.string "Pokémon.$"

RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot:
	.string "Ich wollte schon immer ein Samurzel\n"
	.string "haben - und endlich habe ich eines!$"

RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems:
	.string "Pokémon können Items tragen, aber sie\n"
	.string "wissen nicht, was sie mit Items von\l"
	.string "Menschen wie Trank oder Gegengift\l"
	.string "machen sollen.$"

RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself:
	.string "Weißt du, wie man mit einigen Pokémon-\n"
	.string "Attacken ein Pokémon verwirren kann?\p"
	.string "Ein verwirrtes Pokémon wird manchmal\n"
	.string "sich selber verletzen, ohne es zu\l"
	.string "wollen.\p"
	.string "Aber sobald es aus dem Kampf genommen\n"
	.string "wird, ist es wieder normal.$"

RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry:
	.string "Ein Pokémon, das eine Beere trägt,\n"
	.string "wird sich selber heilen…\p"
	.string "Es gibt viele Items, die ein Pokémon\n"
	.string "tragen kann…\p"
	.string "Junge, Junge, ist das alles schwer\n"
	.string "zu merken…$"

RustboroCity_PokemonSchool_Text_StudentsNotes:
	.string "Das ist das Heft eines Schülers…\p"
	.string "Pokémon werden mit Pokébällen\n"
	.string "gefangen.\p"
	.string "Bis zu sechs Pokémon können den\n"
	.string "Trainer begleiten.\p"
	.string "Ein Trainer ist jemand, der Pokémon\n"
	.string "fängt, sie aufzieht, und mit ihnen\l"
	.string "kämpft.\p"
	.string "Die Aufgabe eines Trainers ist es, die\n"
	.string "starken Trainer, die ihn in den Arenen\l"
	.string "erwarten, zu besiegen.$"

RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut:
	.string "Hallo? Haben wir uns nicht schon einmal\n"
	.string "gesehen? Ich glaube, das war in\l"
	.string "Blütenburg City?\p"
	.string "Ich will mich mal vorstellen.\n"
	.string "Mein Name ist Scott.\p"
	.string "Ich reise durch die Lande, auf der\n"
	.string "Suche nach herausragenden TRAINERn.\p"
	.string "Genauer gesagt bin ich auf der\n"
	.string "Suche nach Experten des Pokémon-\l"
	.string "Kampfes.\p"
	.string "Was machst du in dieser Trainerschule?\n"
	.string "Bist du auch ein Trainer?\p"
	.string "Als Erstes solltest du einem Pokémon\n"
	.string "die Attacke Zerschneider beibringen.\p"
	.string "Und wenn ich mich recht erinnere,\n"
	.string "besitzt einer in diesem Ort\l"
	.string "Zerschneider.$"

RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown:
	.string "Scott: Hmm…\p"
	.string "Ich frage mich, welches Talent-Niveau\n"
	.string "die Schüler hier haben. Das ist völlig\l"
	.string "unbekannt.$"

RustboroCity_PokemonSchool_Text_ScottStoneBadge:
	.string "Scott: Hmm…\p"
	.string "Das ist der Steinorden, oder?!?\n"
	.string "Wirklich beeindruckend, muss ich schon\l"
	.string "sagen.\p"
	.string "Ich würde dich liebend gerne mal in\n"
	.string "einem Kampf beobachten.\p"
	.string "Man kann einen Trainer, der einen\n"
	.string "Orden der Liga besitzt, immer schwer\l"
	.string "einschätzen.$"

RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge:
	.string "Hallo? Haben wir uns nicht schon einmal\n"
	.string "gesehen? Ich glaube, das war in\l"
	.string "Blütenburg City?\p"
	.string "Ich will mich mal vorstellen.\n"
	.string "Mein Name ist Scott.\p"
	.string "Ich reise durch die Lande, auf der\n"
	.string "Suche nach herausragenden TRAINERn.\p"
	.string "Besser gesagt, ich suche nach Experten\n"
	.string "des Pokémon-Kampfes.\p"
	.string "Was ist das?\n"
	.string "Das ist der Steinorden, oder?!?\p"
	.string "Wirklich beeindruckend, muss ich schon\n"
	.string "sagen.\p"
	.string "Ich würde dich liebend gerne mal in\n"
	.string "einem Kampf beobachten.\p"
	.string "Man kann einen Trainer, der einen\n"
	.string "Orden der Liga besitzt, immer schwer\l"
	.string "einschätzen.$"


Route34_DayCare_hns_MapScripts::
	.byte 0

Route34_DayCare_Bookshelf1::
	lock
	msgbox Route34_DayCare_Text_Bookshelf1, MSGBOX_AUTOCLOSE
	helpwindow HELP_DAYCARE1_WINDOW
	release
	end

Route34_DayCare_Bookshelf2::
	lock
	msgbox Route34_DayCare_Text_Bookshelf2, MSGBOX_AUTOCLOSE
	helpwindow HELP_DAYCARE2_WINDOW
	release
	end

Route34_DayCare_Bookshelf3::
	lock
	msgbox Route34_DayCare_Text_Bookshelf3, MSGBOX_AUTOCLOSE
	helpwindow HELP_DAYCARE3_WINDOW
	release
	end

Route34_DayCare_Bookshelf4::
	lock
	msgbox Route34_DayCare_Text_Bookshelf4, MSGBOX_AUTOCLOSE
	helpwindow HELP_DAYCARE4_WINDOW
	release
	end

Route34_DayCare_Text_Bookshelf1:
	.string "Eine Enzyklopädie über Baby-Pokémon.\p"
	.string "TEIL 1: Über Fähigkeiten.$"

Route34_DayCare_Text_Bookshelf2:
	.string "Eine Enzyklopädie über Baby-Pokémon.\p"
	.string "TEIL 2: Typen.$"

Route34_DayCare_Text_Bookshelf3:
	.string "Eine Enzyklopädie über Baby-Pokémon.\p"
	.string "TEIL 3: Geräusche von Babies.$"

Route34_DayCare_Text_Bookshelf4:
	.string "Eine Enzyklopädie über Baby-Pokémon.\p"
	.string "TEIL 4: Süße Eigenheiten.$"

Route34_DayCare_EventScript_Clerk::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_ODD_EGG, Route34_DayCare_EventScript_ClerkAfter
	msgbox Route34_DayCare_Text_ClerkBefore, MSGBOX_DEFAULT
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, Route34_DayCare_EventScript_ClerkPartyFull
	msgbox Route34_DayCare_Text_ClerkQuestion, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, EASY_CHAT_TYPE_INTERVIEW
	setvar VAR_0x8005, 0
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	switch VAR_RESULT
	case 0, Route34_DayCare_EventScript_ClerkRejection
	case 1, Route34_DayCare_EventScript_GivePichu
	case 2, Route34_DayCare_EventScript_GiveCleffa
	case 3, Route34_DayCare_EventScript_GiveIgglybuff
	case 4, Route34_DayCare_EventScript_GiveTyrogue
	case 5, Route34_DayCare_EventScript_GiveSmoochum
	case 6, Route34_DayCare_EventScript_GiveElekid
	case 7, Route34_DayCare_EventScript_GiveMagby
	case 8, Route34_DayCare_EventScript_GiveMantyke
	case 9, Route34_DayCare_EventScript_GiveBonsly
	case 10, Route34_DayCare_EventScript_GiveHappiny
	case 11, Route34_DayCare_EventScript_GiveMimeJr
	closemessage
	release
	end

Route34_DayCare_EventScript_GivePichu::
	giveoddegg 1
	goto Route34_DayCare_EventScript_Clerk_GaveEgg

Route34_DayCare_EventScript_GiveCleffa::
	giveoddegg 2
	goto Route34_DayCare_EventScript_Clerk_GaveEgg

Route34_DayCare_EventScript_GiveIgglybuff::
	giveoddegg 3
	goto Route34_DayCare_EventScript_Clerk_GaveEgg

Route34_DayCare_EventScript_GiveTyrogue::
	giveoddegg 4
	goto Route34_DayCare_EventScript_Clerk_GaveEgg

Route34_DayCare_EventScript_GiveSmoochum::
	giveoddegg 5
	goto Route34_DayCare_EventScript_Clerk_GaveEgg

Route34_DayCare_EventScript_GiveElekid::
	giveoddegg 6
	goto Route34_DayCare_EventScript_Clerk_GaveEgg

Route34_DayCare_EventScript_GiveMagby::
	giveoddegg 7
	goto Route34_DayCare_EventScript_Clerk_GaveEgg

Route34_DayCare_EventScript_GiveMantyke::
	giveoddegg 8
	goto Route34_DayCare_EventScript_Clerk_GaveEgg

Route34_DayCare_EventScript_GiveBonsly::
	giveoddegg 9
	goto Route34_DayCare_EventScript_Clerk_GaveEgg

Route34_DayCare_EventScript_GiveHappiny::
	giveoddegg 10
	goto Route34_DayCare_EventScript_Clerk_GaveEgg

Route34_DayCare_EventScript_GiveMimeJr::
	giveoddegg 11
	goto Route34_DayCare_EventScript_Clerk_GaveEgg

Route34_DayCare_EventScript_Clerk_GaveEgg::
	msgbox Route34_DayCare_Text_TakeCare, MSGBOX_DEFAULT
	closemessage
	delay 30
	setflag FLAG_RECEIVED_ODD_EGG
	playfanfare MUS_OBTAIN_ITEM
	message Route34_DayCare_Text_ReceivedOddEgg
	waitfanfare
	closemessage
	release
	end

Route34_DayCare_EventScript_ClerkPartyFull::
	msgbox Route34_DayCare_Text_ClerkNoRoom, MSGBOX_DEFAULT
	closemessage
	release
	end

Route34_DayCare_EventScript_ClerkRejection::
	msgbox Route34_DayCare_Text_Rejection, MSGBOX_DEFAULT
	closemessage
	release
	end

Route34_DayCare_EventScript_ClerkAfter::
	msgbox Route34_DayCare_Text_ClerkAfter, MSGBOX_DEFAULT
	closemessage
	release
	end

Route34_DayCare_Text_ClerkBefore:
	.string "Ich bin der Sohn des PENSIONS-\n"
	.string "Paars.\p"
	.string "Ein SELTSAMES Ei wurde bei einem\n"
	.string "Trainer gefunden, doch er wollte\n"
	.string "es nicht…\p"
	.string "Ich könnte es dir geben…\n"
	.string "Aber wie kann ich wissen, dass du\l"
	.string "gut darauf aufpasst?$"

Route34_DayCare_Text_ClerkNoRoom:
	.string "Sieht so aus, als könntest du kein\n"
	.string "weiteres Pokémon tragen.$"

Route34_DayCare_Text_ClerkQuestion:
	.string "Beantworte mir diese Frage.\n"
	.string "Was hältst du von diesem Ei?$"

Route34_DayCare_Text_Rejection:
	.string "Hmm, ich glaube, dieses Ei ist\n"
	.string "nicht für dich.\p"
	.string "Es wäre unverantwortlich, ein\l"
	.string "kostbares Ei an jemanden zu\n"
	.string "geben, der sich noch nicht\p"
	.string "genug mit Baby-Pokémon auskennt!$"

Route34_DayCare_Text_ReceivedOddEgg:
	.string "{PLAYER} erhielt das SELTSAME Ei.$"

Route34_DayCare_Text_TakeCare:
	.string "Ich wusste, dass du der richtige\n"
	.string "Trainer dafür bist. Pass gut auf es\l"
	.string "auf!$"

Route34_DayCare_Text_ClerkAfter:
	.string "Wir sehen hier oft solche Eier.\p"
	.string "Doch bei diesem war etwas\n"
	.string "anders.$"

Route34_DayCare_EventScript_Ditto::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DITTO, CRY_MODE_NORMAL
	msgbox Route34_DayCare_Text_Ditto, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route34_DayCare_Text_Ditto:
	.string "Ditto: Tto!$"

Route34_EventScript_DaycareMan::
	lock
	faceplayer
	special GetDaycareMonNicknames
	specialvar VAR_RESULT, GetDaycareState
	goto_if_eq VAR_RESULT, DAYCARE_EGG_WAITING, Route34_EventScript_DaycareEggWaiting
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, Route34_EventScript_CheckOnOneMon
	goto_if_eq VAR_RESULT, DAYCARE_TWO_MONS, Route34_EventScript_CheckOnTwoMons
	msgbox Route34_Text_SeeWifeIfYoudLikeMeToRaiseMon, MSGBOX_DEFAULT
	release
	end

Route34_EventScript_DaycareEggWaiting::
	msgbox Route34_Text_DoYouWantEgg, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route34_EventScript_DaycareAcceptEgg
	msgbox Route34_Text_IWillKeepDoYouWantIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route34_EventScript_DaycareAcceptEgg
	msgbox Route34_Text_IllKeepIt, MSGBOX_DEFAULT
	clearflag FLAG_PENDING_DAYCARE_EGG
	special RejectEggFromDayCare
	release
	end

Route34_EventScript_DaycareAcceptEgg::
	@specialvar VAR_0x8004, GetMaxPartySize @ tx_randomizer_and_challenges
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	goto_if_ne VAR_RESULT, VAR_0x8004, Route34_EventScript_DaycareReceiveEgg
	msgbox Route34_Text_YouHaveNoRoomForIt, MSGBOX_DEFAULT
	release
	end

Route34_EventScript_DaycareReceiveEgg::
	message Route34_Text_ReceivedEgg
	playfanfare MUS_LEVEL_UP
	waitfanfare
	waitbuttonpress
	msgbox Route34_Text_TakeGoodCareOfIt, MSGBOX_DEFAULT
	special GiveEggFromDaycare
	clearflag FLAG_PENDING_DAYCARE_EGG
	release
	end

Route34_EventScript_CheckMonReceivedMail::
	specialvar VAR_RESULT, CheckDaycareMonReceivedMail
	call_if_eq VAR_RESULT, 1, Route34_EventScript_MonReceivedMail
	return

Route34_EventScript_MonReceivedMail::
	msgbox Route34_Text_FriendlyWithOtherTrainersMon, MSGBOX_DEFAULT
	return

Route34_EventScript_CheckOnOneMon::
	special GetDaycareMonNicknames
	msgbox Route34_Text_YourMonIsDoingFine, MSGBOX_DEFAULT
	setvar VAR_0x8004, 0
	call Route34_EventScript_CheckMonReceivedMail
	release
	end

Route34_EventScript_CheckOnTwoMons::
	special GetDaycareMonNicknames
	msgbox Route34_Text_YourMonsAreDoingFine, MSGBOX_DEFAULT
	special SetDaycareCompatibilityString
	special ShowFieldMessageStringVar4
	waitmessage
	waitbuttonpress
	setvar VAR_0x8004, 0
	call Route34_EventScript_CheckMonReceivedMail
	setvar VAR_0x8004, 1
	call Route34_EventScript_CheckMonReceivedMail
	release
	end

Route34_DayCare_EventScript_DaycareWoman::
	lock
	faceplayer
	specialvar VAR_RESULT, GetDaycareState
	goto_if_eq VAR_RESULT, DAYCARE_EGG_WAITING, Route34_DayCare_EventScript_EggWaiting
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, Route34_DayCare_EventScript_OneMonInDaycare
	goto_if_eq VAR_RESULT, DAYCARE_TWO_MONS, Route34_DayCare_EventScript_TwoMonsInDaycare
	msgbox Route34_DayCare_Text_WouldYouLikeUsToRaiseAMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route34_DayCare_EventScript_GiveMonToRaise
	msgbox Route34_DayCare_Text_FineThenComeAgain, MSGBOX_DEFAULT
	release
	end

Route34_DayCare_EventScript_GiveMonToRaise::
	specialvar VAR_RESULT, CountPartyNonEggMons
	goto_if_eq VAR_RESULT, 1, Route34_DayCare_EventScript_OnlyOneMon
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
	goto_if_eq VAR_RESULT, 2, Route34_DayCare_EventScript_OnlyTwoAliveMons
	msgbox Route34_DayCare_Text_WhichMonShouldWeRaise, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special ChooseSendDaycareMon
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Route34_DayCare_EventScript_ComeAgain
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
	goto_if_eq VAR_RESULT, 0, Route34_DayCare_EventScript_OnlyOneAliveMon
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
	waitse
	playmoncry VAR_0x8005, CRY_MODE_NORMAL
	msgbox Route34_DayCare_Text_WellRaiseYourMon, MSGBOX_DEFAULT
	waitmoncry
	special StoreSelectedPokemonInDaycare
	callnative UpdateFollowingPokemon
	incrementgamestat GAME_STAT_USED_DAYCARE
	specialvar VAR_RESULT, GetDaycareState
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, Route34_DayCare_EventScript_CanRaiseOneMore
	release
	end

Route34_DayCare_EventScript_ComeAgain::
	msgbox Route34_DayCare_Text_ComeAgain, MSGBOX_DEFAULT
	release
	end

Route34_DayCare_EventScript_CanRaiseOneMore::
	msgbox Route34_DayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route34_DayCare_EventScript_GiveMonToRaise
	goto Route34_DayCare_EventScript_ComeAgain
	end

Route34_DayCare_EventScript_OnlyOneMon::
	msgbox Route34_DayCare_Text_YouHaveJustOneMon, MSGBOX_DEFAULT
	release
	end

Route34_DayCare_EventScript_OnlyOneAliveMon::
	msgbox Route34_DayCare_Text_WhatWillYouBattleWith, MSGBOX_DEFAULT
	release
	end

Route34_DayCare_EventScript_OnlyTwoAliveMons::
	msgbox Route34_DayCare_Text_YoullBeLeftWithJustOne, MSGBOX_DEFAULT
	release
	end

Route34_DayCare_EventScript_EggWaiting::
	msgbox Route34_DayCare_Text_HusbandWasLookingForYou, MSGBOX_DEFAULT
	release
	end

Route34_DayCare_EventScript_YourMonHasGrownXLevels::
	msgbox Route34_DayCare_Text_YourMonHasGrownXLevels, MSGBOX_DEFAULT
	return

Route34_DayCare_EventScript_DisplayLevelsGained::
	specialvar VAR_RESULT, GetNumLevelsGainedFromDaycare
	call_if_ne VAR_RESULT, 0, Route34_DayCare_EventScript_YourMonHasGrownXLevels
	return

Route34_DayCare_EventScript_OneMonInDaycare::
	msgbox Route34_DayCare_Text_GoodToSeeYou, MSGBOX_DEFAULT
	setvar VAR_0x8004, 0
	call Route34_DayCare_EventScript_DisplayLevelsGained
	msgbox Route34_DayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route34_DayCare_EventScript_GiveMonToRaise
	msgbox Route34_DayCare_Text_TakeYourMonBack, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route34_DayCare_EventScript_TryRetrieveMon
	goto Route34_DayCare_EventScript_ComeAgain
	end

Route34_DayCare_EventScript_TryRetrieveMon::
	@specialvar VAR_0x8004, GetMaxPartySize @ tx_randomizer_and_challenges
	specialvar VAR_RESULT, CalculatePlayerPartyCount
	goto_if_eq VAR_RESULT, VAR_0x8004, Route34_DayCare_EventScript_NoRoom
	specialvar VAR_RESULT, GetDaycareState
	setvar VAR_0x8004, 0
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, Route34_DayCare_EventScript_CostPrompt
	special ShowDaycareLevelMenu
	waitstate
	copyvar VAR_0x8004, VAR_RESULT
	goto_if_eq VAR_RESULT, DAYCARE_EXITED_LEVEL_MENU, Route34_DayCare_EventScript_ComeAgain
	goto Route34_DayCare_EventScript_CostPrompt
	end

Route34_DayCare_EventScript_CostPrompt::
	special GetDaycareCost
	msgbox Route34_DayCare_Text_ItWillCostX, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route34_DayCare_EventScript_CheckEnoughMoney
	goto Route34_DayCare_EventScript_ComeAgain
	end

Route34_DayCare_EventScript_CheckEnoughMoney::
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
	goto_if_eq VAR_RESULT, 1, Route34_DayCare_EventScript_RetrieveMon
	msgbox Route34_DayCare_Text_NotEnoughMoney, MSGBOX_DEFAULT
	release
	end

Route34_DayCare_EventScript_RetrieveMon::
	@applymovement LOCALID_DAYCARE_LADY, Route34_DayCare_Movement_RetrieveDaycareMon
	@waitmovement 0
	specialvar VAR_RESULT, TakePokemonFromDaycare
	special SubtractMoneyFromVar0x8005
	playse SE_SHOP
	msgbox Route34_DayCare_Text_HeresYourMon, MSGBOX_DEFAULT
	waitse
	playmoncry VAR_RESULT, CRY_MODE_NORMAL
	msgbox Route34_DayCare_Text_TookBackMon, MSGBOX_DEFAULT
	waitmoncry
	specialvar VAR_RESULT, GetDaycareState
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, Route34_DayCare_EventScript_AskRetrieveOtherMon
	goto Route34_DayCare_EventScript_ComeAgain
	end

Route34_DayCare_EventScript_AskRetrieveOtherMon::
	msgbox Route34_DayCare_Text_TakeOtherOneBackToo, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route34_DayCare_EventScript_TryRetrieveMon
	goto Route34_DayCare_EventScript_ComeAgain
	end

Route34_DayCare_EventScript_NoRoom::
	msgbox Route34_DayCare_Text_YourTeamIsFull, MSGBOX_DEFAULT
	release
	end

Route34_DayCare_Movement_RetrieveDaycareMon:
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	face_up
	walk_slow_up
	set_invisible
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_down
	set_visible
	walk_slow_down
	step_end

@ Unused. Possibly a commented script, or a typo end added to the above Movement script
Route34_DayCare_EventScript_UnusedEnd::
	end

Route34_DayCare_EventScript_TwoMonsInDaycare::
	msgbox Route34_DayCare_Text_GoodToSeeYou, MSGBOX_DEFAULT
	setvar VAR_0x8004, 0
	call Route34_DayCare_EventScript_DisplayLevelsGained
	setvar VAR_0x8004, 1
	call Route34_DayCare_EventScript_DisplayLevelsGained
	msgbox Route34_DayCare_Text_TakeYourMonBack, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route34_DayCare_EventScript_TryRetrieveMon
	msgbox Route34_DayCare_Text_ComeAgain, MSGBOX_DEFAULT
	release
	end

Route34_Text_SeeWifeIfYoudLikeMeToRaiseMon:
	.string "Ich bin der PENSIONS-MANN.\p"
	.string "Ich helfe, die kostbaren Pokémon\n"
	.string "der TRAINER zu betreuen.\p"
	.string "Wenn du möchtest, dass ich dein\n"
	.string "Pokémon aufziehe,\l"
	.string "sprich mit meiner Frau.$"

Route34_Text_DoYouWantEgg:
	.string "Ah, du bist es!\p"
	.string "Wir haben dein Pokémon großgezogen,\n"
	.string "und wir waren wirklich überrascht!\p"
	.string "Dein Pokémon hat ein Ei!\p"
	.string "Wir wissen nicht, wo es\n"
	.string "hergekommen ist, aber dein Pokémon\n"
	.string "hat es.\p"
	.string "Willst du es haben?$"

Route34_Text_YourMonIsDoingFine:
	.string "Ah, du bist es! Schön dich zu sehen.\n"
	.string "Dein {STR_VAR_1} geht es gut.$"

Route34_Text_IllKeepIt:
	.string "Na dann, ich behalte es.\n"
	.string "Danke!$"

Route34_Text_YouHaveNoRoomForIt:
	.string "Du hast keinen Platz dafür…\n"
	.string "Komm zurück, wenn du Platz gemacht\l"
	.string "hast.$"

Route34_Text_ReceivedEgg:
	.string "{PLAYER} erhielt das Ei vom\n"
	.string "PENSIONS-MANN.$"

Route34_Text_TakeGoodCareOfIt:
	.string "Pass gut auf es auf.$"

Route34_Text_FriendlyWithOtherTrainersMon:
	.string "Übrigens, dein {STR_VAR_1} war\n"
	.string "freundlich zu {STR_VAR_2}s\n"
	.string "{STR_VAR_3}. \p"
	.string "Ich habe sogar gesehen, wie es\n"
	.string "POST bekam.$"

@ Unused
Route34_Text_SeeWifeIfYouWantToPickUpMon:
	.string "Wenn du dein Pokémon abholen willst,\n"
	.string "sprich mit meiner Frau.$"

Route34_Text_YourMonsAreDoingFine:
	.string "Ah, du bist es! Deinem {STR_VAR_1} und\n"
	.string "{STR_VAR_2} geht es gut.$"

Route34_Text_IWillKeepDoYouWantIt:
	.string "Ich behalte es wirklich.\n"
	.string "Willst du es haben?$"

Route34_DayCare_Text_WouldYouLikeUsToRaiseAMon:
	.string "Ich bin die PENSIONS-FRAU.\p"
	.string "Wir können dein Pokémon aufziehen.\p"
	.string "Möchtest du, dass wir eins aufziehen?$"

Route34_DayCare_Text_WhichMonShouldWeRaise:
	.string "Welches Pokémon sollen wir für dich\n"
	.string "aufziehen?$"

Route34_DayCare_Text_WellRaiseYourMon:
	.string "Gut, wir ziehen dein {STR_VAR_1}\n"
	.string "eine Weile auf.\p"
	.string "Komm später wieder.$"

Route34_DayCare_Text_WeCanRaiseOneMore:
	.string "Wir können zwei deiner Pokémon\l"
	.string "aufziehen.\n"
	.string "Möchtest du, dass wir noch eins\p"
	.string "aufziehen?$"

Route34_DayCare_Text_HusbandWasLookingForYou:
	.string "Mein Mann hat nach dir gesucht.$"

Route34_DayCare_Text_FineThenComeAgain:
	.string "Oh, gut, dann komm wieder.$"

Route34_DayCare_Text_NotEnoughMoney:
	.string "Du hast nicht genug Geld…$"

Route34_DayCare_Text_TakeOtherOneBackToo:
	.string "Willst du das andere Pokémon auch\n"
	.string "zurücknehmen?$"

Route34_DayCare_Text_ComeAgain:
	.string "Komm wieder.$"

Route34_DayCare_Text_GoodToSeeYou:
	.string "Ah, du bist es! Schön dich zu sehen.\n"
	.string "Deinem Pokémon geht es sicher gut.$"

Route34_DayCare_Text_YourMonHasGrownXLevels:
	.string "Dein {STR_VAR_1} ist um {STR_VAR_2}\n"
	.string "Level gewachsen.$"

Route34_DayCare_Text_YourTeamIsFull:
	.string "Dein Pokémon-Team ist voll.\n"
	.string "Mach Platz und komm zu mir.$"

@ Unused
Route34_DayCare_Text_TakeBackWhichMon:
	.string "Welches Pokémon willst du\n"
	.string "zurücknehmen?$"

Route34_DayCare_Text_ItWillCostX:
	.string "Wenn du dein {STR_VAR_1} zurück\n"
	.string "haben willst, kostet das ¥{STR_VAR_2}.$"

Route34_DayCare_Text_HeresYourMon:
	.string "Perfekt! Hier ist dein Pokémon.$"

Route34_DayCare_Text_TookBackMon:
	.string "{PLAYER} nahm {STR_VAR_1} von der\n"
	.string "PENSIONS-FRAU zurück.$"

Route34_DayCare_Text_YouHaveJustOneMon:
	.string "Oh? Du hast nur ein Pokémon.\p"
	.string "Komm ein anderes Mal wieder.$"

Route34_DayCare_Text_TakeYourMonBack:
	.string "Willst du dein Pokémon zurückhaben?$"

Route34_DayCare_Text_WhatWillYouBattleWith:
	.string "Wenn du mir das Pokémon lässt,\n"
	.string "womit willst du dann kämpfen?\p"
	.string "Komm ein anderes Mal wieder.$"

Route34_DayCare_Text_YoullBeLeftWithJustOne:
	.string "Hmm? Heh doch.\p"
	.string "Wenn du das Pokémon bei mir lässt,\n"
	.string "hast du nur noch eines.\p"
	.string "Es ist besser, wenn du noch ein paar\n"
	.string "fängst.$"

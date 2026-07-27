MauvilleCity_PokemonCenter_1F_EventScript_MauvilleOldMan::
	special Script_GetCurrentMauvilleMan
	switch VAR_RESULT
	case MAUVILLE_MAN_BARD, MauvilleCity_PokemonCenter_1F_EventScript_Bard
	case MAUVILLE_MAN_HIPSTER, MauvilleCity_PokemonCenter_1F_EventScript_Hipster
	case MAUVILLE_MAN_TRADER, MauvilleCity_PokemonCenter_1F_EventScript_Trader
	case MAUVILLE_MAN_STORYTELLER, MauvilleCity_PokemonCenter_1F_EventScript_Storyteller
	case MAUVILLE_MAN_GIDDY, MauvilleCity_PokemonCenter_1F_EventScript_Giddy
	end

@ Bard
MauvilleCity_PokemonCenter_1F_EventScript_Bard::
	lock
	faceplayer
	msgbox MauvilleCity_PokemonCenter_1F_Text_WouldYouLikeToHearMySong, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MauvilleCity_PokemonCenter_1F_EventScript_PlaySong
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineSong
	end

MauvilleCity_PokemonCenter_1F_EventScript_PlaySong::
	setvar VAR_0x8004, FALSE  @ Play his current song
	special PlayBardSong
	delay 60
	special HasBardSongBeenChanged
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_AskToWriteLyrics
	msgbox MauvilleCity_PokemonCenter_1F_Text_WishICouldPlaySongForOthers, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineSong::
	msgbox MauvilleCity_PokemonCenter_1F_Text_BardFeelingTheBlues1, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_AskToWriteLyrics::
	msgbox MauvilleCity_PokemonCenter_1F_Text_WouldYouLikeToWriteSomeLyrics, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MauvilleCity_PokemonCenter_1F_EventScript_WriteLyrics
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineWritingLyrics
	end

MauvilleCity_PokemonCenter_1F_EventScript_WriteLyrics::
	setvar VAR_0x8004, EASY_CHAT_TYPE_BARD_SONG
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_RESULT, 0, MauvilleCity_PokemonCenter_1F_EventScript_DeclineWritingLyrics
	msgbox MauvilleCity_PokemonCenter_1F_Text_LetMeSingItForYou, MSGBOX_DEFAULT
	setvar VAR_0x8004, TRUE  @ Play the new song
	special PlayBardSong
	delay 60
	msgbox MauvilleCity_PokemonCenter_1F_Text_ThatHowYouWantedSongToGo, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_WriteLyrics
	special SaveBardSongLyrics
	msgbox MauvilleCity_PokemonCenter_1F_Text_IllSingThisSongForAWhile, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineWritingLyrics::
	msgbox MauvilleCity_PokemonCenter_1F_Text_BardFeelingTheBlues2, MSGBOX_DEFAULT
	release
	end

@ Hipster
MauvilleCity_PokemonCenter_1F_EventScript_Hipster::
	lock
	faceplayer
	setflag FLAG_UNLOCKED_TRENDY_SAYINGS
	msgbox MauvilleCity_PokemonCenter_1F_Text_TeachWhatsHipAndHappening, MSGBOX_DEFAULT
	special HasHipsterTaughtWord
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_TryTeachWord
	msgbox MauvilleCity_PokemonCenter_1F_Text_IAlreadyTaughtYou, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_TryTeachWord::
	special HipsterTryTeachWord
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_TeachWord
	msgbox MauvilleCity_PokemonCenter_1F_Text_IveGotNothingNewToTeach, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_TeachWord::
	msgbox MauvilleCity_PokemonCenter_1F_Text_HaveYouHeardOfWord, MSGBOX_DEFAULT
	special SetHipsterTaughtWord
	release
	end

@ Trader
MauvilleCity_PokemonCenter_1F_Text_WantToTradeDecor:
	.string "Hallo! Ich bin der HÄNDLER. Möchtest\n"
	.string "du Dekorationen mit mir tauschen?$"

MauvilleCity_PokemonCenter_1F_Text_TraderFeelingTheBlues:
	.string "Oh…\n"
	.string "Du überlässt mich meinem Blues?$"

MauvilleCity_PokemonCenter_1F_Text_WeveAlreadyTraded:
	.string "But we've traded decorations already,\n"
	.string "you and I.$"

MauvilleCity_PokemonCenter_1F_Text_PickADecorItem:
	.string "Wenn du etwas Dekoratives siehst, das\n"
	.string "du haben möchtest, lass es mich wissen.$"

MauvilleCity_PokemonCenter_1F_Text_YouDontWantAnything:
	.string "Du möchtest nichts haben?\n"
	.string "Ich fühle mich so überflüssig…$"

MauvilleCity_PokemonCenter_1F_Text_OnceBelongedToPlayerDoYouWantIt:
	.string "Das dekorative Item gehörte einst\n"
	.string "{STR_VAR_1}.\p"
	.string "Möchtest du es haben?$"

MauvilleCity_PokemonCenter_1F_Text_YouDontHaveAnyDecor:
	.string "Äh… Warte eine Sekunde. Du hast über-\n"
	.string "haupt kein dekoratives Item!$"

MauvilleCity_PokemonCenter_1F_Text_PickTheDecorToTrade:
	.string "Okay, wähle die Dekoration aus, die du\n"
	.string "mit mir tauschen willst.$"

MauvilleCity_PokemonCenter_1F_Text_YouDontWantToTrade:
	.string "Du willst nicht mit mir tauschen?\n"
	.string "Ich fühle mich überflüssig…$"

MauvilleCity_PokemonCenter_1F_Text_YouveNoRoomForThis:
	.string "Du hast keinen Platz mehr für {STR_VAR_2}.$"

MauvilleCity_PokemonCenter_1F_Text_SoWellTradeTheseDecor:
	.string "Okay, so we'll trade my {STR_VAR_3}\n"
	.string "for your {STR_VAR_2}?$"

MauvilleCity_PokemonCenter_1F_Text_ThatDecorIsInUse:
	.string "Dieses Dekorationsstück ist in Ge-\n"
	.string "brauch. Das kannst du nicht tauschen.$"

MauvilleCity_PokemonCenter_1F_Text_SendDecorToYourPC:
	.string "Lass uns tauschen! Ich werde meine\n"
	.string "Dekorationen auf deinen PC senden.$"

MauvilleCity_PokemonCenter_1F_Text_CantTradeThatOne:
	.string "Huups! Tut mir Leid!\n"
	.string "Das ist ein ganz seltenes Stück!\l"
	.string "Das kann ich nicht tauschen!\p"
	.string "Kann ich dich für etwas anderes\n"
	.string "begeistern?$"

MauvilleCity_PokemonCenter_1F_EventScript_Trader::
	lock
	faceplayer
	msgbox MauvilleCity_PokemonCenter_1F_Text_WantToTradeDecor, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineTrade
	special GetTraderTradedFlag
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_AlreadyTraded
	message MauvilleCity_PokemonCenter_1F_Text_PickADecorItem
	waitmessage
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToReceive
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineTrade::
	msgbox MauvilleCity_PokemonCenter_1F_Text_TraderFeelingTheBlues, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_AlreadyTraded::
	msgbox MauvilleCity_PokemonCenter_1F_Text_WeveAlreadyTraded, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToReceive::
	special TraderMenuGetDecoration
	waitstate
	goto_if_eq VAR_0x8004, 0, MauvilleCity_PokemonCenter_1F_EventScript_CancelPickDecor
	goto_if_eq VAR_0x8004, 0xFFFF, MauvilleCity_PokemonCenter_1F_EventScript_InvalidDecor
	msgbox MauvilleCity_PokemonCenter_1F_Text_OnceBelongedToPlayerDoYouWantIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_PickDifferentDecor
	special DoesPlayerHaveNoDecorations
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_DontHaveAnyDecor
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToGive
	end

MauvilleCity_PokemonCenter_1F_EventScript_CancelPickDecor::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouDontWantAnything, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_InvalidDecor::
	message MauvilleCity_PokemonCenter_1F_Text_CantTradeThatOne
	waitmessage
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToReceive
	end

MauvilleCity_PokemonCenter_1F_EventScript_PickDifferentDecor::
	message MauvilleCity_PokemonCenter_1F_Text_PickADecorItem
	waitmessage
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToReceive
	end

MauvilleCity_PokemonCenter_1F_EventScript_DontHaveAnyDecor::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouDontHaveAnyDecor, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToGive::
	msgbox MauvilleCity_PokemonCenter_1F_Text_PickTheDecorToTrade, MSGBOX_DEFAULT
	special TraderShowDecorationMenu
	waitstate
	goto_if_eq VAR_0x8006, 0, MauvilleCity_PokemonCenter_1F_EventScript_CancelGiveDecor
	goto_if_eq VAR_0x8006, 0xFFFF, MauvilleCity_PokemonCenter_1F_EventScript_DecorInUse
	special IsDecorationCategoryFull
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_NoRoomForDecor
	msgbox MauvilleCity_PokemonCenter_1F_Text_SoWellTradeTheseDecor, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToGive
	special TraderDoDecorationTrade
	msgbox MauvilleCity_PokemonCenter_1F_Text_SendDecorToYourPC, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_CancelGiveDecor::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouDontWantToTrade, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_DecorInUse::
	msgbox MauvilleCity_PokemonCenter_1F_Text_ThatDecorIsInUse, MSGBOX_DEFAULT
	goto MauvilleCity_PokemonCenter_1F_EventScript_PickDecorToGive
	end

MauvilleCity_PokemonCenter_1F_EventScript_NoRoomForDecor::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouveNoRoomForThis, MSGBOX_DEFAULT
	release
	end

@ Storyteller
MauvilleCity_PokemonCenter_1F_Text_WillYouHearMyTale:
	.string "Ich bin der GESCHICHTENERZÄHLER.\n"
	.string "Ich erzähle dir die Geschichten von\l"
	.string "legendären TRAINERn.\p"
	.string "Soll ich dir etwas erzählen?$"

MauvilleCity_PokemonCenter_1F_Text_StorytellerFeelingTheBlues:
	.string "Oh…\n"
	.string "Du überlässt mich meinem Blues?$"

MauvilleCity_PokemonCenter_1F_Text_WhichTaleToTell:
	.string "Ich kenne so manche Legende.\n"
	.string "Welche möchtest du hören?$"

MauvilleCity_PokemonCenter_1F_Text_IKnowNoTales:
	.string "Aber ich weiß nichts über legendäre\n"
	.string "TRAINER. Also habe ich keine Ge-\l"
	.string "schichten darüber auf Lager.\p"
	.string "Wo findet man wohl einen TRAINER, der\n"
	.string "einer Legende würdig ist?$"

MauvilleCity_PokemonCenter_1F_Text_YouDidStatXTimes:
	.string "Was ist?\n"
	.string "Du… Du…\p"
	.string "{STR_VAR_2}\n"
	.string "{STR_VAR_1}-mal?\p"
	.string "Das ist einfach großartig!\n"
	.string "Die Geburt einer neuen Legende!$"

MauvilleCity_PokemonCenter_1F_Text_CouldThereBeOtherLegends:
	.string "Ich überlege, ob es nicht noch andere\n"
	.string "TRAINER gibt, die mir beeindruckende\l"
	.string "Geschichten erzählen können.$"

MauvilleCity_PokemonCenter_1F_Text_HaveYouAnyLegendaryTales:
	.string "Bist du ein TRAINER?\p"
	.string "Dann sag mir, ob du Geschichten\n"
	.string "für mich hast, die legendär sind?$"

@ Unused
MauvilleCity_PokemonCenter_1F_Text_HearAnotherLegendaryTale:
	.string "Incidentally… Would you care to hear\n"
	.string "another legendary tale?$"

MauvilleCity_PokemonCenter_1F_Text_NotWorthyOfLegend:
	.string "Hmm…\n"
	.string "Ich bin nicht zufrieden…\p"
	.string "Ich wünschte, du würdest mir Neuig-\n"
	.string "keiten erzählen, die den Titel Legende\l"
	.string "verdienen.$"

MauvilleCity_PokemonCenter_1F_Text_IWishMorePeopleWereInterested:
	.string "Ich wollte, mehr Leute würden sich für\n"
	.string "meine epischen Geschichten über\l"
	.string "legendäre TRAINER interessieren.$"

MauvilleCity_PokemonCenter_1F_Text_SavedGameTitle::
	.string "Der speicherfreudige TRAINER$"

MauvilleCity_PokemonCenter_1F_Text_SavedGameAction::
	.string "Hast das Spiel gespeichert?$"

MauvilleCity_PokemonCenter_1F_Text_SavedGameStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat das Spiel\n"
	.string "{STR_VAR_1}-mal gespeichert!\p"
	.string "Einen vorsichtigeren TRAINER als\n"
	.string "{STR_VAR_3} wird man nicht finden!$"

MauvilleCity_PokemonCenter_1F_Text_TrendsStartedTitle::
	.string "Der TRAINER als Trendsetter$"

MauvilleCity_PokemonCenter_1F_Text_TrendsStartedAction::
	.string "Started trends$"

MauvilleCity_PokemonCenter_1F_Text_TrendsStartedStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}-mal\n"
	.string "neue Trends gesetzt!\p"
	.string "{STR_VAR_3} setzt den Trend für alle - in\n"
	.string "der ganzen HOENN-Region!$"

MauvilleCity_PokemonCenter_1F_Text_BerriesPlantedTitle::
	.string "Der BEEREn pflanzende TRAINER$"

MauvilleCity_PokemonCenter_1F_Text_BerriesPlantedAction::
	.string "Planted BERRIES$"

MauvilleCity_PokemonCenter_1F_Text_BerriesPlantedStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}-mal\n"
	.string "BEEREn gepflanzt!\p"
	.string "{STR_VAR_3} ist ein legendärer Lieb-\n"
	.string "haber von BEEREn!$"

MauvilleCity_PokemonCenter_1F_Text_BikeTradesTitle::
	.string "Der RAD verrückte TRAINER$"

MauvilleCity_PokemonCenter_1F_Text_BikeTradesAction::
	.string "Traded BIKES$"

MauvilleCity_PokemonCenter_1F_Text_BikeTradesStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}-mal\n"
	.string "das RAD getauscht!\p"
	.string "{STR_VAR_3} ist ein TRAINER, dessen\n"
	.string "Passion das RADfahren ist!$"

MauvilleCity_PokemonCenter_1F_Text_InterviewsTitle::
	.string "Der Interviews gebende TRAINER$"

MauvilleCity_PokemonCenter_1F_Text_InterviewsAction::
	.string "Got interviewed$"

MauvilleCity_PokemonCenter_1F_Text_InterviewsStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER wurde {STR_VAR_1}-mal\n"
	.string "interviewt!\p"
	.string "{STR_VAR_3} ist ein TRAINER, der überall\n"
	.string "Aufmerksamkeit erregt!$"

MauvilleCity_PokemonCenter_1F_Text_TrainerBattlesTitle::
	.string "Der kampfliebende TRAINER$"

MauvilleCity_PokemonCenter_1F_Text_TrainerBattlesAction::
	.string "Battled$"

MauvilleCity_PokemonCenter_1F_Text_TrainerBattlesStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}-mal\n"
	.string "gekämpft!\p"
	.string "{STR_VAR_3} ist ein TRAINER, der zu\n"
	.string "einem Kampf nicht nein sagt!$"

MauvilleCity_PokemonCenter_1F_Text_PokemonCaughtTitle::
	.string "Der POKéMON fangende TRAINER$"

MauvilleCity_PokemonCenter_1F_Text_PokemonCaughtAction::
	.string "Caught POKéMON$"

MauvilleCity_PokemonCenter_1F_Text_PokemonCaughtStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}\n"
	.string "POKéMON gefangen!\p"
	.string "{STR_VAR_3} ist ein legendärer Fänger\n"
	.string "von POKéMON!$"

MauvilleCity_PokemonCenter_1F_Text_FishingPokemonCaughtTitle::
	.string "Der angelnde TRAINER$"

MauvilleCity_PokemonCenter_1F_Text_FishingPokemonCaughtAction::
	.string "Hast POKéMON mit einer ANGEL gefangen?$"

MauvilleCity_PokemonCenter_1F_Text_FishingPokemonCaughtStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}\n"
	.string "POKéMON beim Angeln gefangen!\p"
	.string "{STR_VAR_3} ist ein legendärer Angel-\n"
	.string "experte!$"

MauvilleCity_PokemonCenter_1F_Text_EggsHatchedTitle::
	.string "Der EIer wärmende TRAINER$"

MauvilleCity_PokemonCenter_1F_Text_EggsHatchedAction::
	.string "Hatched EGGS$"

MauvilleCity_PokemonCenter_1F_Text_EggsHatchedStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Es passierte {STR_VAR_1}-mal, dass der\n"
	.string "TRAINER ein POKéMON aus einem EI\l"
	.string "schlüpfen ließ!\p"
	.string "{STR_VAR_3} ist ein legendärer Pfleger\n"
	.string "von EIern!$"

MauvilleCity_PokemonCenter_1F_Text_PokemonEvolvedTitle::
	.string "Der TRAINER der Entwicklungen$"

MauvilleCity_PokemonCenter_1F_Text_PokemonEvolvedAction::
	.string "Evolved POKéMON$"

MauvilleCity_PokemonCenter_1F_Text_PokemonEvolvedStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}\n"
	.string "POKéMON zur Entwicklung gebracht!\p"
	.string "{STR_VAR_3} ist der ultimative Ent-\n"
	.string "wickler von POKéMON!$"

MauvilleCity_PokemonCenter_1F_Text_UsedPokemonCenterTitle::
	.string "Der PKMN-CENTER liebende TRAINER$"

MauvilleCity_PokemonCenter_1F_Text_UsedPokemonCenterAction::
	.string "Used POKéMON CENTERS$"

MauvilleCity_PokemonCenter_1F_Text_UsedPokemonCenterStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat POKéMON\n"
	.string "{STR_VAR_1}-mal in einem POKéMON-CENTER\l"
	.string "heilen lassen!\p"
	.string "Es gibt keinen größeren Fan der\n"
	.string "POKéMON-CENTER als {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_RestedAtHomeTitle::
	.string "Der gastfreundliche TRAINER$"

MauvilleCity_PokemonCenter_1F_Text_RestedAtHomeAction::
	.string "Rested POKéMON at home$"

MauvilleCity_PokemonCenter_1F_Text_RestedAtHomeStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat POKéMON\n"
	.string "{STR_VAR_1}-mal bei sich zu Hause\l"
	.string "ausruhen und heilen lassen.\p"
	.string "Kein TRAINER ist so gastfreundlich\n"
	.string "wie {STR_VAR_3}!$"

MauvilleCity_PokemonCenter_1F_Text_SafariGamesTitle::
	.string "Der SAFARI liebende TRAINER$"

MauvilleCity_PokemonCenter_1F_Text_SafariGamesAction::
	.string "Bist in die SAFARI-ZONE gegangen?$"

MauvilleCity_PokemonCenter_1F_Text_SafariGamesStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER ist {STR_VAR_1}-mal in die\n"
	.string "SAFARI-ZONE gegangen!\p"
	.string "{STR_VAR_3} ist ein TRAINER, dessen\n"
	.string "wilde Seite in der SAFARI-ZONE zum\l"
	.string "Vorschein kommt!$"

MauvilleCity_PokemonCenter_1F_Text_UsedCutTitle::
	.string "Der TRAINER als ZERSCHNEIDER$"

MauvilleCity_PokemonCenter_1F_Text_UsedCutAction::
	.string "Used CUT$"

MauvilleCity_PokemonCenter_1F_Text_UsedCutStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}-mal\n"
	.string "ZERSCHNEIDER eingesetzt!\p"
	.string "{STR_VAR_3} ist ein TRAINER, der es\n"
	.string "liebt, etwas zu ZERSCHNEIDEN.$"

MauvilleCity_PokemonCenter_1F_Text_UsedRockSmashTitle::
	.string "Der TRAINER als ZERTRÜMMERER$"

MauvilleCity_PokemonCenter_1F_Text_UsedRockSmashAction::
	.string "Smashed rocks$"

MauvilleCity_PokemonCenter_1F_Text_UsedRockSmashStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}-mal\n"
	.string "ZERTRÜMMERER eingesetzt!\p"
	.string "{STR_VAR_3} ist ein TRAINER, der keinen\n"
	.string "Felsen unbeschädigt lassen kann.$"

MauvilleCity_PokemonCenter_1F_Text_MovedBasesTitle::
	.string "Der Umzüge liebende TRAINER$"

MauvilleCity_PokemonCenter_1F_Text_MovedBasesAction::
	.string "Bist du mit der GEHEIMBASIS umgezogen?$"

MauvilleCity_PokemonCenter_1F_Text_MovedBasesStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER ist {STR_VAR_1}-mal mit\n"
	.string "seiner GEHEIMBASIS umgezogen!\p"
	.string "{STR_VAR_3} ist ein TRAINER, der es\n"
	.string "liebt, sich ein neues Haus einzurichten.$"

MauvilleCity_PokemonCenter_1F_Text_UsedSplashTitle::
	.string "Der PLATSCHER des TRAINERs$"

MauvilleCity_PokemonCenter_1F_Text_UsedSplashAction::
	.string "Used SPLASH$"

MauvilleCity_PokemonCenter_1F_Text_UsedSplashStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}-mal\n"
	.string "PLATSCHER eingesetzt!\p"
	.string "{STR_VAR_3} ist ein TRAINER, der es\n"
	.string "liebt, zu PLATSCHEN.$"

MauvilleCity_PokemonCenter_1F_Text_UsedStruggleTitle::
	.string "Der verbissene TRAINER$"

MauvilleCity_PokemonCenter_1F_Text_UsedStruggleAction::
	.string "Resorted to using STRUGGLE$"

MauvilleCity_PokemonCenter_1F_Text_UsedStruggleStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat sich {STR_VAR_1}-mal\n"
	.string "auf VERZWEIFLER verlassen!\p"
	.string "{STR_VAR_3}… Ein verbissener TRAINER,\n"
	.string "der auch in der Not nicht aufgibt.$"

MauvilleCity_PokemonCenter_1F_Text_SlotJackpotsTitle::
	.string "Der König der EINARMIGEN BANDITen$"

MauvilleCity_PokemonCenter_1F_Text_SlotJackpotsAction::
	.string "Won the jackpot on the SLOTS$"

MauvilleCity_PokemonCenter_1F_Text_SlotJackpotsStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}-mal\n"
	.string "am EINARMIGEN BANDITen gewonnen!\p"
	.string "{STR_VAR_3}… Ein TRAINER, der am\n"
	.string "EINARMIGEN BANDITen Glück hat.$"

MauvilleCity_PokemonCenter_1F_Text_RouletteWinsTitle::
	.string "Der König des ROULETTEs$"

MauvilleCity_PokemonCenter_1F_Text_RouletteWinsAction::
	.string "Had consecutive ROULETTE wins of$"

MauvilleCity_PokemonCenter_1F_Text_RouletteWinsStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}-mal in\n"
	.string "Folge beim ROULETTE gewonnen!\p"
	.string "{STR_VAR_3}… Ein TRAINER, dem die Kugel\n"
	.string "beim ROULETTE gehorcht.$"

MauvilleCity_PokemonCenter_1F_Text_BattleTowerChallengesTitle::
	.string "Der Herausforderer im DUELLTURM$"

MauvilleCity_PokemonCenter_1F_Text_BattleTowerChallengesAction::
	.string "Took the BATTLE TOWER challenge$"

MauvilleCity_PokemonCenter_1F_Text_BattleTowerChallengesStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}-mal\n"
	.string "Gegner im DUELLTURM herausgefordert!\p"
	.string "{STR_VAR_3}… Ein TRAINER, der im DUELL-\n"
	.string "TURM nach Perfektion strebt.$"

MauvilleCity_PokemonCenter_1F_Text_MadePokeblocksTitle::
	.string "Der mixende TRAINER$"

MauvilleCity_PokemonCenter_1F_Text_MadePokeblocksAction::
	.string "Made {POKEBLOCK}S$"

MauvilleCity_PokemonCenter_1F_Text_MadePokeblocksStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}-mal\n"
	.string "{POKEBLOCK} hergestellt!\p"
	.string "Niemand bedient den BEERENMIXER\n"
	.string "besser als {STR_VAR_3}.$"

MauvilleCity_PokemonCenter_1F_Text_EnteredContestsTitle::
	.string "Der Fan der WETTBEWERBe$"

MauvilleCity_PokemonCenter_1F_Text_EnteredContestsAction::
	.string "Entered CONTESTS$"

MauvilleCity_PokemonCenter_1F_Text_EnteredContestsStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}-mal\n"
	.string "an einem WETTBEWERB teilgenommen!\p"
	.string "{STR_VAR_3} liebt es, anderen seine\n"
	.string "POKéMON zu zeigen.$"

MauvilleCity_PokemonCenter_1F_Text_WonContestsTitle::
	.string "Der Meister der WETTBEWERBe$"

MauvilleCity_PokemonCenter_1F_Text_WonContestsAction::
	.string "Won CONTESTS$"

MauvilleCity_PokemonCenter_1F_Text_WonContestsStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}-mal\n"
	.string "einen WETTBEWERB gewonnen!\p"
	.string "{STR_VAR_3} ist ein unvergleichlicher\n"
	.string "Meister der WETTBEWERBe.$"

MauvilleCity_PokemonCenter_1F_Text_TimesShoppedTitle::
	.string "Der glückliche Einkäufer$"

MauvilleCity_PokemonCenter_1F_Text_TimesShoppedAction::
	.string "Shopped$"

MauvilleCity_PokemonCenter_1F_Text_TimesShoppedStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}-mal\n"
	.string "in einem Geschäft Items gekauft!\p"
	.string "{STR_VAR_3} - ein geborener Einkäufer.$"

MauvilleCity_PokemonCenter_1F_Text_UsedItemFinderTitle::
	.string "Der TRAINER, der Items findet$"

MauvilleCity_PokemonCenter_1F_Text_UsedItemFinderAction::
	.string "Used an ITEMFINDER$"

MauvilleCity_PokemonCenter_1F_Text_UsedItemFinderStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}-mal\n"
	.string "den DETEKTOR eingesetzt!\p"
	.string "{STR_VAR_3} liebt es, den Boden nach\n"
	.string "verborgenen Items abzusuchen.$"

MauvilleCity_PokemonCenter_1F_Text_TimesRainedTitle::
	.string "Der regennasse TRAINER$"

MauvilleCity_PokemonCenter_1F_Text_TimesRainedAction::
	.string "Got rained on$"

MauvilleCity_PokemonCenter_1F_Text_TimesRainedStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER wurde {STR_VAR_1}-mal\n"
	.string "nass geregnet!\p"
	.string "Das Charisma von {STR_VAR_3} zieht\n"
	.string "sogar den Regen an.$"

MauvilleCity_PokemonCenter_1F_Text_CheckedPokedexTitle::
	.string "Der passionierte POKéDEX-Leser$"

MauvilleCity_PokemonCenter_1F_Text_CheckedPokedexAction::
	.string "Checked a POKéDEX$"

MauvilleCity_PokemonCenter_1F_Text_CheckedPokedexStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}-mal\n"
	.string "im POKéDEX nachgeschlagen!\p"
	.string "{STR_VAR_3} liebt es, alles über\n"
	.string "POKéMON im POKéDEX nachzulesen.$"

MauvilleCity_PokemonCenter_1F_Text_ReceivedRibbonsTitle::
	.string "Der Sammler der BÄNDER$"

MauvilleCity_PokemonCenter_1F_Text_ReceivedRibbonsAction::
	.string "Received RIBBONS$"

MauvilleCity_PokemonCenter_1F_Text_ReceivedRibbonsStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}\n"
	.string "BÄNDER erhalten!\p"
	.string "{STR_VAR_3} ist ein TRAINER, der es\n"
	.string "liebt, BÄNDER zu sammeln.$"

MauvilleCity_PokemonCenter_1F_Text_LedgesJumpedTitle::
	.string "Der springende TRAINER$"

MauvilleCity_PokemonCenter_1F_Text_LedgesJumpedAction::
	.string "Jumped down ledges$"

MauvilleCity_PokemonCenter_1F_Text_LedgesJumpedStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER ist {STR_VAR_1}-mal\n"
	.string "einen Absatz hinabgesprungen!\p"
	.string "Sobald er an einen Absatz kommt, muss\n"
	.string "TRAINER {STR_VAR_3} einfach hinab-\l"
	.string "springen.$"

MauvilleCity_PokemonCenter_1F_Text_TVWatchedTitle::
	.string "Der legendäre Fernsehzuschauer$"

MauvilleCity_PokemonCenter_1F_Text_TVWatchedAction::
	.string "Watched TV$"

MauvilleCity_PokemonCenter_1F_Text_TVWatchedStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}-mal\n"
	.string "Fernsehen geschaut!\p"
	.string "{STR_VAR_3} liebt es, fernzusehen.$"

MauvilleCity_PokemonCenter_1F_Text_CheckedClockTitle::
	.string "Der zeitbewusste TRAINER$"

MauvilleCity_PokemonCenter_1F_Text_CheckedClockAction::
	.string "Hast nach der Uhrzeit gesehen?$"

MauvilleCity_PokemonCenter_1F_Text_CheckedClockStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}-mal\n"
	.string "nach der Uhrzeit geschaut!\p"
	.string "{STR_VAR_3} ist ein pünktlicher\n"
	.string "TRAINER, der sich der Zeit bewusst ist.$"

MauvilleCity_PokemonCenter_1F_Text_WonLotteryTitle::
	.string "Der Zauberer der POKéMON-LOTTERIE$"

MauvilleCity_PokemonCenter_1F_Text_WonLotteryAction::
	.string "Won POKéMON LOTTERIES$"

MauvilleCity_PokemonCenter_1F_Text_WonLotteryStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}-mal\n"
	.string "in der POKéMON-LOTTERIE gewonnen!\p"
	.string "TRAINER {STR_VAR_3} hat viele Freunde,\n"
	.string "die mit ihm POKéMON tauschen.$"

MauvilleCity_PokemonCenter_1F_Text_UsedDaycareTitle::
	.string "Der TRAINER und die PENSION$"

MauvilleCity_PokemonCenter_1F_Text_UsedDaycareAction::
	.string "Hast POKéMON in die PENSION gebracht?$"

MauvilleCity_PokemonCenter_1F_Text_UsedDaycareStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}-mal\n"
	.string "seine POKéMON in die PENSION gegeben!\p"
	.string "{STR_VAR_3} ist ein Ellenbogentyp, der\n"
	.string "alles für die Entwicklung seiner\l"
	.string "POKéMON tut.$"

MauvilleCity_PokemonCenter_1F_Text_RodeCableCarTitle::
	.string "Der SEILBAHN verrückte TRAINER$"

MauvilleCity_PokemonCenter_1F_Text_RodeCableCarAction::
	.string "Bist mit der SEILBAHN gefahren?$"

MauvilleCity_PokemonCenter_1F_Text_RodeCableCarStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER ist {STR_VAR_1}-mal\n"
	.string "mit der SEILBAHN gefahren!\p"
	.string "{STR_VAR_3} ist ein sehr beschäftigter\n"
	.string "TRAINER, der ständig rauf und runter\l"
	.string "fährt.$"

MauvilleCity_PokemonCenter_1F_Text_HotSpringsTitle::
	.string "Der Liebhaber der Heißen Quellen$"

MauvilleCity_PokemonCenter_1F_Text_HotSpringsAction::
	.string "Bathed in hot springs$"

MauvilleCity_PokemonCenter_1F_Text_HotSpringsStory::
	.string "Dies ist die Geschichte eines TRAINERs\n"
	.string "namens {STR_VAR_3}.\p"
	.string "Dieser TRAINER hat {STR_VAR_1}-mal\n"
	.string "in den Heißen Quellen gebadet!\p"
	.string "{STR_VAR_3} wird eine babyweiche Haut\n"
	.string "haben.$"


MauvilleCity_PokemonCenter_1F_EventScript_Storyteller::
	lock
	faceplayer
	setvar VAR_0x8008, 0
	setvar VAR_0x8009, 0
	setvar VAR_0x800A, 0
	setvar VAR_0x800B, 0
	msgbox MauvilleCity_PokemonCenter_1F_Text_WillYouHearMyTale, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineStoryteller
	specialvar VAR_RESULT, StorytellerGetFreeStorySlot
	goto_if_eq VAR_RESULT, 0, MauvilleCity_PokemonCenter_1F_EventScript_KnowNoTales
	message MauvilleCity_PokemonCenter_1F_Text_WhichTaleToTell
	waitmessage
	special StorytellerStoryListMenu
	waitstate
	goto_if_eq VAR_RESULT, 0, MauvilleCity_PokemonCenter_1F_EventScript_CancelStorySelection
	setvar VAR_0x8008, 1
	special Script_StorytellerDisplayStory
	waitmessage
	waitbuttonpress
	specialvar VAR_RESULT, StorytellerUpdateStat
	goto_if_eq VAR_RESULT, 0, MauvilleCity_PokemonCenter_1F_EventScript_AreThereOtherTales
	goto MauvilleCity_PokemonCenter_1F_EventScript_TellPlayersTale

MauvilleCity_PokemonCenter_1F_EventScript_CancelStorySelection::
	goto MauvilleCity_PokemonCenter_1F_EventScript_DeclineStoryteller
	end

MauvilleCity_PokemonCenter_1F_EventScript_AreThereOtherTales::
	msgbox MauvilleCity_PokemonCenter_1F_Text_CouldThereBeOtherLegends, MSGBOX_DEFAULT
	specialvar VAR_RESULT, HasStorytellerAlreadyRecorded
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_StorytellerEnd
	goto MauvilleCity_PokemonCenter_1F_EventScript_DoYouHaveAnyTales

MauvilleCity_PokemonCenter_1F_EventScript_KnowNoTales::
	msgbox MauvilleCity_PokemonCenter_1F_Text_IKnowNoTales, MSGBOX_DEFAULT
MauvilleCity_PokemonCenter_1F_EventScript_DoYouHaveAnyTales::
	msgbox MauvilleCity_PokemonCenter_1F_Text_HaveYouAnyLegendaryTales, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineStoryteller
	specialvar VAR_RESULT, Script_StorytellerInitializeRandomStat
	goto_if_eq VAR_RESULT, 1, MauvilleCity_PokemonCenter_1F_EventScript_TellPlayersTale
	msgbox MauvilleCity_PokemonCenter_1F_Text_NotWorthyOfLegend, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_TellPlayersTale::
	msgbox MauvilleCity_PokemonCenter_1F_Text_YouDidStatXTimes, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineStoryteller::
	msgbox MauvilleCity_PokemonCenter_1F_Text_StorytellerFeelingTheBlues, MSGBOX_DEFAULT
	release
	end

@ Unused
MauvilleCity_PokemonCenter_1F_EventScript_WaitingForRecordMix::
	msgbox MauvilleCity_PokemonCenter_1F_Text_IWishMorePeopleWereInterested, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_StorytellerEnd::
	release
	end

@ Giddy
MauvilleCity_PokemonCenter_1F_Text_HearMyStory:
	.string "Ich bin MÄRCHEN-MAN! Ich habe eine\n"
	.string "sehr geistreiche Geschichte für dich!\p"
	.string "Soll ich sie dir erzählen?$"

MauvilleCity_PokemonCenter_1F_Text_GiddyFeelingTheBlues:
	.string "Oh…\n"
	.string "Du überlässt mich meinem Blues?$"

MauvilleCity_PokemonCenter_1F_Text_AlsoIWasThinking:
	.string "Also, I was thinking…$"

MauvilleCity_PokemonCenter_1F_Text_WeShouldChatAgain:
	.string "That's about it, I think…\p"
	.string "We should chat again!\n"
	.string "Bye-bye!$"

MauvilleCity_PokemonCenter_1F_EventScript_Giddy::
	lock
	faceplayer
	msgbox MauvilleCity_PokemonCenter_1F_Text_HearMyStory, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MauvilleCity_PokemonCenter_1F_EventScript_TryTellTale
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_DeclineGiddy
	end

MauvilleCity_PokemonCenter_1F_EventScript_TryTellTale::
	special GiddyShouldTellAnotherTale
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_GiddyTellTale
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_ToldEnoughTales
	end

MauvilleCity_PokemonCenter_1F_EventScript_TryTellNewTale::
	special GiddyShouldTellAnotherTale
	goto_if_eq VAR_RESULT, TRUE, MauvilleCity_PokemonCenter_1F_EventScript_GiddyStartNewTale
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_PokemonCenter_1F_EventScript_ToldEnoughTales
	end

MauvilleCity_PokemonCenter_1F_EventScript_GiddyStartNewTale::
	msgbox MauvilleCity_PokemonCenter_1F_Text_AlsoIWasThinking, MSGBOX_DEFAULT
	goto MauvilleCity_PokemonCenter_1F_EventScript_GiddyTellTale
	end

@ Giddy will continue to tell stories regardless of whether yes or no is selected below.
@ Each story there is a 10% chance it will be his last. Otherwise he will stop at 10 stories.
MauvilleCity_PokemonCenter_1F_EventScript_GiddyTellTale::
	special GenerateGiddyLine
	special ShowFieldMessageStringVar4
	waitmessage
	yesnobox 20, 8
	goto_if_eq VAR_RESULT, YES, MauvilleCity_PokemonCenter_1F_EventScript_TryTellNewTale
	goto_if_eq VAR_RESULT, NO, MauvilleCity_PokemonCenter_1F_EventScript_TryTellNewTale
	end

MauvilleCity_PokemonCenter_1F_EventScript_DeclineGiddy::
	msgbox MauvilleCity_PokemonCenter_1F_Text_GiddyFeelingTheBlues, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_ToldEnoughTales::
	msgbox MauvilleCity_PokemonCenter_1F_Text_WeShouldChatAgain, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_Text_WouldYouLikeToHearMySong:
	.string "Hallo, ich bin der BARDE.\n"
	.string "Möchtest du meinem Lied lauschen?$"

MauvilleCity_PokemonCenter_1F_Text_BardFeelingTheBlues1:
	.string "Oh…\n"
	.string "Du überlässt mich meinem Blues?$"

MauvilleCity_PokemonCenter_1F_Text_WishICouldPlaySongForOthers:
	.string "Hach, was für ein bewegendes Lied…\n"
	.string "Ich wünschte, ich könnte es für\l"
	.string "andere spielen…$"

MauvilleCity_PokemonCenter_1F_Text_WouldYouLikeToWriteSomeLyrics:
	.string "So?\n"
	.string "Wie fandest du mein Lied?\p"
	.string "Ich bin noch nicht ganz zufrieden mit\n"
	.string "dem Text.\p"
	.string "Hast du nicht Lust, den Text für mich\n"
	.string "neu zu schreiben?$"

MauvilleCity_PokemonCenter_1F_Text_BardFeelingTheBlues2:
	.string "Oh…\n"
	.string "Du überlässt mich meinem Blues?$"

MauvilleCity_PokemonCenter_1F_Text_LetMeSingItForYou:
	.string "Vielen herzlichen Dank!\n"
	.string "Ich möchte für dich singen.$"

MauvilleCity_PokemonCenter_1F_Text_ThatHowYouWantedSongToGo:
	.string "Hast du dir dein Lied so vorgestellt?$"

MauvilleCity_PokemonCenter_1F_Text_IllSingThisSongForAWhile:
	.string "Okay! Das ist es! Dieses Lied werde\n"
	.string "ich nun für eine Weile singen.$"

MauvilleCity_PokemonCenter_1F_Text_TeachWhatsHipAndHappening:
	.string "Hey, yo! Man nennt mich TRENDWIG. Ich\n"
	.string "zeige dir, was hip ist und abgeht.$"

MauvilleCity_PokemonCenter_1F_Text_IAlreadyTaughtYou:
	.string "Aber, hey, ich habe dir doch schon ge-\n"
	.string "zeigt, was hip ist und abgeht.\p"
	.string "Ich will das auch anderen mitteilen.$"

MauvilleCity_PokemonCenter_1F_Text_IveGotNothingNewToTeach:
	.string "Aber, hey, ich habe dir doch schon ge-\n"
	.string "zeigt, was hip ist und abgeht.\p"
	.string "Ich habe nichts mehr in petto.$"

MauvilleCity_PokemonCenter_1F_Text_HaveYouHeardOfWord:
	.string "Hast du schon von\n"
	.string "“{STR_VAR_1}” gehört?\p"
	.string "Was das heißt? Ähäm…\n"
	.string "Frag mal deinen Papi oder deine Mami.$"

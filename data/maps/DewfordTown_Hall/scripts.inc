DewfordTown_Hall_MapScripts::
	.byte 0

DewfordTown_Hall_EventScript_Girl::
	lock
	faceplayer
	call Common_EventScript_BufferTrendyPhrase
	special IsTrendyPhraseBoring
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Hall_EventScript_GirlBoredOfTrend
	msgbox DewfordTown_Hall_Text_CantImagineLifeWithoutTrend, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_GirlBoredOfTrend::
	msgbox DewfordTown_Hall_Text_GettingBoredOfTrend, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_Woman::
	lock
	faceplayer
	call Common_EventScript_BufferTrendyPhrase
	msgbox DewfordTown_Hall_Text_TeachingMonAboutTrend, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_Man::
	lock
	faceplayer
	call Common_EventScript_BufferTrendyPhrase
	special BufferDeepLinkPhrase
	msgbox DewfordTown_Hall_Text_DeepLinkBetweenXAndY, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DewfordTown_Hall_EventScript_ConfirmTrendLink
	goto_if_eq VAR_RESULT, NO, DewfordTown_Hall_EventScript_RejectTrendLink
	end

DewfordTown_Hall_EventScript_ConfirmTrendLink::
	msgbox DewfordTown_Hall_Text_MyHunchWasRight, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_RejectTrendLink::
	msgbox DewfordTown_Hall_Text_NotEasyToKeepUp, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_ExpertM::
	lock
	faceplayer
	call Common_EventScript_BufferTrendyPhrase
	msgbox DewfordTown_Hall_Text_TVShowAboutTrend, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DEWFORD_HALL_EXPERT_M, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	release
	end

DewfordTown_Hall_EventScript_Twin::
	lock
	faceplayer
	call Common_EventScript_BufferTrendyPhrase
	msgbox DewfordTown_Hall_Text_IsTrendMorePopularAcrossSea, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DEWFORD_HALL_TWIN, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	release
	end

DewfordTown_Hall_EventScript_LittleBoy::
	lock
	faceplayer
	call Common_EventScript_BufferTrendyPhrase
	msgbox DewfordTown_Hall_Text_CollectTrendMerchandise, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_Bookshelf::
	lockall
	call Common_EventScript_BufferTrendyPhrase
	msgbox DewfordTown_Hall_Text_BooksAboutTrend, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_Painting::
	lockall
	call Common_EventScript_BufferTrendyPhrase
	special GetDewfordHallPaintingNameIndex
	switch VAR_RESULT
	case 0, DewfordTown_Hall_EventScript_ScreamTitle
	case 4, DewfordTown_Hall_EventScript_ScreamTitle
	case 1, DewfordTown_Hall_EventScript_SmileTitle
	case 5, DewfordTown_Hall_EventScript_ScreamTitle
	case 2, DewfordTown_Hall_EventScript_LastTitle
	case 6, DewfordTown_Hall_EventScript_LastTitle
	case 3, DewfordTown_Hall_EventScript_BirthTitle
	case 7, DewfordTown_Hall_EventScript_LastTitle
	end

DewfordTown_Hall_EventScript_ScreamTitle::
	msgbox DewfordTown_Hall_Text_TrendsScream, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_SmileTitle::
	msgbox DewfordTown_Hall_Text_TrendsSmile, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_LastTitle::
	msgbox DewfordTown_Hall_Text_LastTrend, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_BirthTitle::
	msgbox DewfordTown_Hall_Text_BirthOfTrend, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_SchoolKidM::
	lockall
	setvar VAR_0x8008, 0
	goto DewfordTown_Hall_EventScript_DoTrendDebate
	end

DewfordTown_Hall_EventScript_PsychicM::
	lockall
	setvar VAR_0x8008, 1
	goto DewfordTown_Hall_EventScript_DoTrendDebate
	end

DewfordTown_Hall_EventScript_DoTrendDebate::
	call Common_EventScript_BufferTrendyPhrase
	special GetDewfordHallPaintingNameIndex
	switch VAR_RESULT
	case 0, DewfordTown_Hall_EventScript_TrendDebate1
	case 1, DewfordTown_Hall_EventScript_TrendDebate1
	case 2, DewfordTown_Hall_EventScript_TrendDebate2
	case 3, DewfordTown_Hall_EventScript_TrendDebate2
	case 4, DewfordTown_Hall_EventScript_TrendDebate3
	case 5, DewfordTown_Hall_EventScript_TrendDebate3
	case 6, DewfordTown_Hall_EventScript_TrendDebate4
	case 7, DewfordTown_Hall_EventScript_TrendDebate5
	end

DewfordTown_Hall_EventScript_TrendDebate1::
	call DewfordTown_Hall_EventScript_DebateReact1
	msgbox DewfordTown_Hall_Text_SawTrendCoolestThing, MSGBOX_DEFAULT
	call DewfordTown_Hall_EventScript_DebateReact2
	msgbox DewfordTown_Hall_Text_AllegedTrendNotAuthentic, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_TrendDebate2::
	call DewfordTown_Hall_EventScript_DebateReact1
	msgbox DewfordTown_Hall_Text_ComposedTrendThemeSong, MSGBOX_DEFAULT
	call DewfordTown_Hall_EventScript_DebateReact2
	msgbox DewfordTown_Hall_Text_WorkOnYourSinging, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_TrendDebate3::
	call DewfordTown_Hall_EventScript_DebateReact1
	msgbox DewfordTown_Hall_Text_OrganizeTrendParty, MSGBOX_DEFAULT
	call DewfordTown_Hall_EventScript_DebateReact2
	msgbox DewfordTown_Hall_Text_BrilliantIndeed, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_TrendDebate4::
	call DewfordTown_Hall_EventScript_DebateReact1
	msgbox DewfordTown_Hall_Text_TrendHasBecomePartOfLife, MSGBOX_DEFAULT
	call DewfordTown_Hall_EventScript_DebateReact2
	msgbox DewfordTown_Hall_Text_TrendWeighsHeavilyOnMind, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_TrendDebate5::
	call DewfordTown_Hall_EventScript_DebateReact1
	msgbox DewfordTown_Hall_Text_IfWeTeamUpWellBeInvincible, MSGBOX_DEFAULT
	call DewfordTown_Hall_EventScript_DebateReact2
	msgbox DewfordTown_Hall_Text_WellBeTrendDuo, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_DontMovePlayer1::
	return

DewfordTown_Hall_EventScript_DebateReact1::
	applymovement LOCALID_DEWFORD_HALL_PSYCHIC_M, DewfordTown_Hall_Movement_PsychicWalkInPlaceLeft
	waitmovement 0
	goto_if_eq VAR_0x8008, 0, DewfordTown_Hall_EventScript_PlayerReactWest
	goto_if_eq VAR_0x8008, 1, DewfordTown_Hall_EventScript_DontMovePlayer2
	end

DewfordTown_Hall_EventScript_PlayerReactWest::
	goto_if_eq VAR_FACING, DIR_EAST, DewfordTown_Hall_EventScript_DontMovePlayer1
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

DewfordTown_Hall_EventScript_DontMovePlayer2::
	return

DewfordTown_Hall_EventScript_DebateReact2::
	applymovement LOCALID_DEWFORD_HALL_SCHOOL_KID_M, DewfordTown_Hall_Movement_SchoolKidWalkInPlaceRight
	waitmovement 0
	goto_if_eq VAR_0x8008, 0, DewfordTown_Hall_EventScript_PlayerReactNorthSouth
	goto_if_eq VAR_0x8008, 1, DewfordTown_Hall_EventScript_PlayerReactEast
	end

DewfordTown_Hall_EventScript_PlayerReactNorthSouth::
	call_if_eq VAR_FACING, DIR_NORTH, DewfordTown_Hall_EventScript_PlayerWalkInPlaceUp
	call_if_eq VAR_FACING, DIR_SOUTH, DewfordTown_Hall_EventScript_PlayerWalkInPlaceDown
	return

DewfordTown_Hall_EventScript_PlayerWalkInPlaceUp::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

DewfordTown_Hall_EventScript_PlayerWalkInPlaceDown::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

DewfordTown_Hall_EventScript_PlayerReactEast::
	goto_if_eq VAR_FACING, DIR_WEST, DewfordTown_Hall_EventScript_DontMovePlayer1
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

DewfordTown_Hall_Movement_PsychicWalkInPlaceLeft:
	walk_in_place_left
	step_end

DewfordTown_Hall_Movement_SchoolKidWalkInPlaceRight:
	walk_in_place_right
	step_end

DewfordTown_Hall_EventScript_SludgeBombMan::
	lock
	faceplayer
	call Common_EventScript_BufferTrendyPhrase
	goto_if_set FLAG_RECEIVED_TM_SLUDGE_BOMB, DewfordTown_Hall_EventScript_ReceivedSludgeBomb
	msgbox DewfordTown_Hall_Text_GiveYouSludgeBomb, MSGBOX_DEFAULT
	giveitem ITEM_TM_SLUDGE_BOMB
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_SLUDGE_BOMB
	release
	end

DewfordTown_Hall_EventScript_ReceivedSludgeBomb::
	msgbox DewfordTown_Hall_Text_LoveSludgeBombButTrendInToo, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_Text_CantImagineLifeWithoutTrend:
	.string "Was in ist? Nun, mit Sicherheit\n"
	.string "“{STR_VAR_1}”!\p"
	.string "Ich kann mir ein Leben ohne\n"
	.string "“{STR_VAR_1}” nicht\l"
	.string "vorstellen!$"

DewfordTown_Hall_Text_GettingBoredOfTrend:
	.string "Was in ist? Nun, mit Sicherheit\n"
	.string "“{STR_VAR_1}”!\p"
	.string "Aber so langsam langweilt es mich.\p"
	.string "Ich sollte mich nach neuen Sachen\n"
	.string "umsehen.$"

DewfordTown_Hall_Text_TeachingMonAboutTrend:
	.string "Ich bringe meinen POKéMON etwas über\n"
	.string "“{STR_VAR_1}” bei,\l"
	.string "aber es klappt nicht so recht.\p"
	.string "Scheinbar sind sie damit überfordert.$"

DewfordTown_Hall_Text_DeepLinkBetweenXAndY:
	.string "Ich vertiefe mich gerade in ein hippes\n"
	.string "“{STR_VAR_1}”.\p"
	.string "Gibt es eine enge Verbindung\n"
	.string "zwischen “{STR_VAR_1}”\l"
	.string "und “{STR_VAR_2}”?$"

DewfordTown_Hall_Text_MyHunchWasRight:
	.string "Oh! Da lag ich ja absolut richtig!\p"
	.string "Ich bin einen Schritt weiter in meinen\n"
	.string "Bemühungen, hip und aufregend zu sein!$"

DewfordTown_Hall_Text_NotEasyToKeepUp:
	.string "Was?!? Wirklich?!?\p"
	.string "Für einen alten Menschen ist es gar\n"
	.string "nicht so leicht, mit der Mode zu\l"
	.string "gehen!$"

DewfordTown_Hall_Text_TVShowAboutTrend:
	.string "Diese ganze Sache mit\n"
	.string "“{STR_VAR_1}”…\l"
	.string "Gibt es da nicht eine Sendung drüber?$"

DewfordTown_Hall_Text_IsTrendMorePopularAcrossSea:
	.string "Jenseits des Meeres…\p"
	.string "Ist dort “{STR_VAR_1}”\n"
	.string "noch beliebter?$"

DewfordTown_Hall_Text_CollectTrendMerchandise:
	.string "Ich sammle lizenzierte\n"
	.string "“{STR_VAR_1}”-\l"
	.string "Artikel.\p"
	.string "Ich habe die offiziellen\n"
	.string "“{STR_VAR_1}”-Puppen.\p"
	.string "Offizielle “{STR_VAR_1}”-\l"
	.string "Kleidung…\p"
	.string "Und die offiziellen\n"
	.string "“{STR_VAR_1}”-\l"
	.string "Bilderbücher.\p"
	.string "Hähähä, das besitze ich alles!\n"
	.string "Und ich gebe dir nichts ab! Ätsch!$"

DewfordTown_Hall_Text_BooksAboutTrend:
	.string "GUTE “{STR_VAR_1}” &\n"
	.string "SCHLECHTE\l"
	.string "“{STR_VAR_1}”…\p"
	.string "DAS BAND ZWISCHEN\n"
	.string "“{STR_VAR_1}”\l"
	.string "UND POKéMON…\p"
	.string "HILFREICHE “{STR_VAR_1}”…\p"
	.string "Es ist total voll gestopft mit Büchern\n"
	.string "über “{STR_VAR_1}”.$"

DewfordTown_Hall_Text_TrendsScream:
	.string "“DER RUF VON\n"
	.string "{STR_VAR_1}”\l"
	.string "ist der Titel.$"

DewfordTown_Hall_Text_TrendsSmile:
	.string "“DAS LÄCHELN VON\n"
	.string "{STR_VAR_1}”\l"
	.string "ist der Titel.$"

DewfordTown_Hall_Text_LastTrend:
	.string "Es heißt “DAS LETZTE\n"
	.string "{STR_VAR_1}”.$"

DewfordTown_Hall_Text_BirthOfTrend:
	.string "Es heißt “DIE GEBURT EINES\n"
	.string "{STR_VAR_1}”.$"

DewfordTown_Hall_Text_SawTrendCoolestThing:
	.string "Ich habe “{STR_VAR_1}”\n"
	.string "gesehen! Cool, was?\p"
	.string "Das Coolste überhaupt, würde ich\n"
	.string "sagen! \p"
	.string "Es war unglaublich!\n"
	.string "Das war das absolut Wahre, oh yeah!$"

DewfordTown_Hall_Text_AllegedTrendNotAuthentic:
	.string "Oh, nein, nein, nein.\p"
	.string "Das vermeintliche\n"
	.string "“{STR_VAR_1}”,\l"
	.string "das du gesehen hast - war nicht echt.\n"
	.string "\p"
	.string "Das echte ist…\n"
	.string "Wie soll ich sagen?\l"
	.string "Ist spitzer und wohlgeformter!\p"
	.string "Aber egal. Es ist erstaunlich!$"

DewfordTown_Hall_Text_ComposedTrendThemeSong:
	.string "Hey, hör zu! Ich habe ein Leitmotiv\n"
	.string "für “{STR_VAR_1}”\l"
	.string "komponiert.\p"
	.string "“{STR_VAR_1}”\n"
	.string "ist gerade sehr populär.\p"
	.string "Okay, hör zu!\n"
	.string "… …\p"
	.string "Oh! {STR_VAR_1}!\p"
	.string "Wundervolles {STR_VAR_1}!$"

DewfordTown_Hall_Text_WorkOnYourSinging:
	.string "… …\p"
	.string "Ich würde sagen, du solltest erst\n"
	.string "einmal Gesangsunterricht nehmen, bevor\l"
	.string "du es mit “{STR_VAR_1}”\l"
	.string "aufnimmst.$"

DewfordTown_Hall_Text_OrganizeTrendParty:
	.string "Wie ich vorhin schon sagte, sollten\n"
	.string "wir uns zusammentun und eine\l"
	.string "“{STR_VAR_1}”-Party\l"
	.string "auf der Insel veranstalten.$"

DewfordTown_Hall_Text_BrilliantIndeed:
	.string "Oh, was für eine gute Idee!\p"
	.string "Nun stellen wir ein für alle Mal fest,\n"
	.string "wer der Beste in\l"
	.string "“{STR_VAR_1}” ist.\l"
	.string "Brillant, wirklich!\p"
	.string "Von heute an dreht sich unser Leben\n"
	.string "um “{STR_VAR_1}”!$"

DewfordTown_Hall_Text_TrendHasBecomePartOfLife:
	.string "Ich habe nachgedacht…\p"
	.string "Stimmst du mir zu, dass\n"
	.string "“{STR_VAR_1}” von\l"
	.string "etwas Modernem zu einem Teil unseres\l"
	.string "Lebens geworden ist?$"

DewfordTown_Hall_Text_TrendWeighsHeavilyOnMind:
	.string "Bitte? So dominant?\p"
	.string "Nun ja, natürlich bestimmt\n"
	.string "“{STR_VAR_1}” auch\l"
	.string "unsere Gedanken, im Wachen und\l"
	.string "im Schlafen.\p"
	.string "Du bist mit Sicherheit der\n"
	.string "“{STR_VAR_1}”-\l"
	.string "PROFESSOR!$"

DewfordTown_Hall_Text_IfWeTeamUpWellBeInvincible:
	.string "Wenn du und ich ein Team bilden,\n"
	.string "sind wir unverwundbar gegen\l"
	.string "“{STR_VAR_1}”!$"

DewfordTown_Hall_Text_WellBeTrendDuo:
	.string "Licht an, mein Freund!\p"
	.string "Wir sind das\n"
	.string "“{STR_VAR_1}”-DUO!\p"
	.string "Ist das nicht eine irre Vorstellung?\n"
	.string "Hahahaha!$"

DewfordTown_Hall_Text_GiveYouSludgeBomb:
	.string "Für mich ist MATSCHBOMBE das absolut\n"
	.string "Größte!\p"
	.string "Wie? Du willst mir doch nicht\n"
	.string "weismachen, dass du MATSCHBOMBE\l"
	.string "nicht kennst?\p"
	.string "Das ist aber jammerschade.\n"
	.string "Ich werde dir eine geben.$"

DewfordTown_Hall_Text_LoveSludgeBombButTrendInToo:
	.string "Ich liebe MATSCHBOMBE.\p"
	.string "Aber POKéMON, die\n"
	.string "“{STR_VAR_1}” kennen,\l"
	.string "sind auch absolut angesagt.$"


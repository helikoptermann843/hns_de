RustboroCity_Flat1_2F_MapScripts::
	.byte 0

RustboroCity_Flat1_2F_EventScript_WaldasDad::
	lock
	faceplayer
	specialvar VAR_RESULT, TryBufferWaldaPhrase
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase

RustboroCity_Flat1_2F_EventScript_GivePhrase::
	special DoWaldaNamingScreen
	waitstate
	goto_if_eq VAR_0x8004, 1, RustboroCity_Flat1_2F_EventScript_CancelGivePhrase
	goto_if_eq VAR_0x8004, 2, RustboroCity_Flat1_2F_EventScript_CancelGiveFirstPhrase
	specialvar VAR_RESULT, TryGetWallpaperWithWaldaPhrase
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Flat1_2F_EventScript_WaldaLikesPhrase
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_Flat1_2F_EventScript_WaldaDoesntLikePhrase
	end

RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase::
	msgbox RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase
	msgbox RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion, MSGBOX_DEFAULT
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase

RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase::
	msgbox RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase
	msgbox RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion, MSGBOX_DEFAULT
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase

RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase::
	msgbox RustboroCity_Flat1_2F_Text_OhIsThatRight, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat1_2F_EventScript_CancelGivePhrase::
	msgbox RustboroCity_Flat1_2F_Text_OhYouDontKnowAny, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat1_2F_EventScript_CancelGiveFirstPhrase::
	msgbox RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase, MSGBOX_DEFAULT
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
	msgbox RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll2, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat1_2F_EventScript_WaldaLikesPhrase::
	msgbox RustboroCity_Flat1_2F_Text_LetsGiveItATry2, MSGBOX_DEFAULT
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
	msgbox RustboroCity_Flat1_2F_Text_OhShesLaughing, MSGBOX_DEFAULT
	applymovement LOCALID_WALDAS_DAD, Common_Movement_FacePlayer
	waitmovement 0
	msgbox RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat1_2F_EventScript_WaldaDoesntLikePhrase::
	msgbox RustboroCity_Flat1_2F_Text_LetsGiveItATry, MSGBOX_DEFAULT
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
	msgbox RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll, MSGBOX_DEFAULT
	release
	end

RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda::
	turnobject LOCALID_WALDAS_DAD, DIR_EAST
	return

RustboroCity_Flat1_2F_EventScript_WaldasMom::
	msgbox RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard, MSGBOX_NPC
	end

RustboroCity_Flat1_2F_EventScript_PokeDoll::
	msgbox RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll, MSGBOX_SIGN
	end

RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard:
	.string "Oh, jeden Tag wird es schwerer…\p"
	.string "Was so schwer ist?\n"
	.string "Das fragst du noch?\p"
	.string "Herauszufinden, was ich jeden Tag\n"
	.string "kochen soll, natürlich!\p"
	.string "Es ist nicht einfach, jeden Tag eine\n"
	.string "Mahlzeit auf den Tisch zu bringen.$"

RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase:
	.string "Oh, hallo!\n"
	.string "Willkommen im Hause SCHLÄFER.\p"
	.string "Ich würde dir gerne eine Frage\n"
	.string "stellen. Hast du jemals auf ein Kind\l"
	.string "aufgepasst?\p"
	.string "Weißt du, ich bin noch ein junger\n"
	.string "Vater\n"
	.string "und ein Kind zu haben, ist eine völlig\l"
	.string "neue Erfahrung für mich.\p"
	.string "Ich habe ein Problem: Meine Tochter\n"
	.string "TAPETRA lacht so selten.\p"
	.string "Vielleicht lacht sie ja für mich, wenn\n"
	.string "ich ihr etwas Lustiges erzähle…\p"
	.string "Fällt dir nicht etwas Lustiges ein,\n"
	.string "das ich ihr sagen könnte?$"

RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase:
	.string "Ich habe neulich “{STR_VAR_1}”\n"
	.string "zu ihr gesagt, damit sie lacht…\p"
	.string "Fällt dir kein besseres Wort oder ein\n"
	.string "besserer Ausdruck ein?$"

RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion:
	.string "Oh, das ist einfach wundervoll!\n"
	.string "Komm, lass mal hören.$"

RustboroCity_Flat1_2F_Text_OhIsThatRight:
	.string "Wirklich?\p"
	.string "Nun, wenn dir irgendetwas Gutes\n"
	.string "einfällt, dann lass es mich wissen.$"

RustboroCity_Flat1_2F_Text_LetsGiveItATry2:
	.string "Verstehe.\n"
	.string "Komm, wir versuchen es einfach.$"

RustboroCity_Flat1_2F_Text_OhShesLaughing:
	.string "{STR_VAR_1}. {STR_VAR_1}.\p"
	.string "Oh, ja! Schau! Sie lacht!\n"
	.string "Ich bin so glücklich!$"

RustboroCity_Flat1_2F_Text_LetsGiveItATry:
	.string "Verstehe.\n"
	.string "Komm, wir versuchen es einfach.$"

RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll:
	.string "{STR_VAR_1}. {STR_VAR_1}.\p"
	.string "Hmmm… Sie lächelt noch nicht\n"
	.string "einmal… Vielleicht ist TAPETRA\l"
	.string "ja einfach nur ein sehr ernstes Kind…$"

RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase:
	.string "Och, du kennst keine guten Sprüche?\n"
	.string "Dann muss ich mir wohl selbst was\l"
	.string "einfallen lassen.\p"
	.string "Hmm… Wie wäre es mit “{STR_VAR_1}”?\l"
	.string "Mal sehen, ob das wirkt.$"

RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll2:
	.string "{STR_VAR_1}. {STR_VAR_1}.\p"
	.string "Hmmm… Sie lächelt noch nicht\n"
	.string "einmal… Vielleicht ist TAPETRA\l"
	.string "ja einfach nur ein sehr ernstes Kind…$"

RustboroCity_Flat1_2F_Text_OhYouDontKnowAny:
	.string "Och, du kennst keine guten Sprüche?\n"
	.string "Dann muss ich mir wohl selbst was\l"
	.string "einfallen lassen.\p"
	.string "Aber wenn dir noch etwas Gutes\n"
	.string "einfällt, dann musst du es mich\l"
	.string "unbedingt wissen lassen!$"

RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper:
	.string "Vielen Dank!\p"
	.string "Dank dir hat meine TAPETRA\n"
	.string "für mich gelacht!\p"
	.string "Ich mag vielleicht nicht so aussehen,\n"
	.string "aber ich bin einer der Topforscher der\l"
	.string "DEVON CORPORATION.\p"
	.string "Ich würde dir gerne etwas zum Dank\n"
	.string "schenken.\p"
	.string "Da fällt mir was ein! Ich werde dir\n"
	.string "für die BOXen in deinem POKéMON-\p"
	.string "LAGERUNGS-SYSTEM ein neues\n"
	.string "Hintergrund-Muster schenken!\p"
	.string "Wenn du dich dort im Menü befindest,\n"
	.string "dann wähle einfach “FREUNDE”.\p"
	.string "Damit kannst du auf die neuen Muster\n"
	.string "zugreifen.$"

RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll:
	.string "Das ist eine POKéMON Plüsch-PUPPE.$"


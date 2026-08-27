SafariZone_EventScript_OutOfBallsMidBattle::
#if IS_FRLG
	setvar VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 3
#elif IS_HNS
	setvar VAR_SAFARI_ZONE_STATE, 1
#else
	setvar VAR_SAFARI_ZONE_STATE, 1
#endif
	special ExitSafariMode
#if IS_FRLG
	setwarp MAP_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 4, 1
#elif IS_HNS
	goto_if_set FLAG_IN_KANTO_SAFARI_ZONE, SafariZone_EventScript_ExitKantoMidBattle
	setwarp MAP_SAFARI_ZONE_GATE_SAFARI_ZONE_ENTRANCE_HNS, 9, 3
#else
	setwarp MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 2, 5
#endif
	end

SafariZone_EventScript_ExitKantoMidBattle::
	clearflag FLAG_IN_KANTO_SAFARI_ZONE
	setwarp MAP_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE_HNS, 5, 6
	end

SafariZone_EventScript_Exit::
#if IS_FRLG
	setvar VAR_MAP_SCENE_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 1
#elif IS_HNS
	setvar VAR_SAFARI_ZONE_STATE, 1
#else
	setvar VAR_SAFARI_ZONE_STATE, 1
#endif
	special ExitSafariMode
#if IS_FRLG
	warp MAP_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE, 4, 1
#elif IS_HNS
	goto_if_set FLAG_IN_KANTO_SAFARI_ZONE, SafariZone_EventScript_ExitKanto
	warp MAP_SAFARI_ZONE_GATE_SAFARI_ZONE_ENTRANCE_HNS, 9, 3
#else
	warp MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 2, 5
#endif
	waitstate
	end

SafariZone_EventScript_ExitKanto::
	clearflag FLAG_IN_KANTO_SAFARI_ZONE
	warp MAP_FUCHSIA_CITY_SAFARI_ZONE_ENTRANCE_HNS, 5, 6
	waitstate
	end

SafariZone_EventScript_RetirePrompt::
	lockall
	msgbox SafariZone_Text_WouldYouLikeToExit, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SafariZone_EventScript_Retire
	releaseall
	end

SafariZone_EventScript_Retire::
	goto SafariZone_EventScript_Exit

SafariZone_EventScript_TimesUp::
	lockall
	playse SE_DING_DONG
	message SafariZone_Text_TimesUp
	waitmessage
	waitbuttonpress
	releaseall
	goto SafariZone_EventScript_Exit

SafariZone_EventScript_OutOfBalls::
	lockall
	playse SE_DING_DONG
	message SafariZone_Text_OutOfBalls
	waitmessage
	waitbuttonpress
	releaseall
	goto SafariZone_EventScript_Exit

EventScript_PokeBlockFeeder::
	lockall
	special GetPokeblockFeederInFront
	goto_if_ne VAR_RESULT, 0xFFFF, SafariZone_EventScript_PokeblockPresent
	msgbox SafariZone_Text_PlacePokeblockOnFeeder, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SafariZone_EventScript_ChoosePokeblock
	releaseall
	end

SafariZone_EventScript_ChoosePokeblock::
	fadescreen FADE_TO_BLACK
	special OpenPokeblockCaseOnFeeder
	waitstate
	goto_if_ne VAR_RESULT, 0xFFFF, SafariZone_EventScript_PokeblockPlaced
#ifdef BUGFIX
	releaseall  @ Only gets called from EventScript_PokeBlockFeeder which uses lockall.
#endif
	end

SafariZone_EventScript_PokeblockPlaced::
	message SafariZone_Text_PokeblockWasPlaced
	waitmessage
	waitbuttonpress
	releaseall
	end

SafariZone_EventScript_PokeblockPresent::
	message SafariZone_Text_PokeblockStillHere
	waitmessage
	waitbuttonpress
	releaseall
	end

SafariZone_Text_WouldYouLikeToExit:
	.string "Möchtest du die Safari-Zone jetzt\n"
	.string "verlassen?$"

SafariZone_Text_TimesUp:
	.string "Ding Dong! Die Zeit ist abgelaufen!\n"
	.string "Dein Safari-Spiel ist vorbei.$"

SafariZone_Text_OutOfBalls:
	.string "Du hast keine Safaribälle mehr.\n"
	.string "Dein Safari-Spiel ist vorbei.$"

SafariZone_Text_PlacePokeblockOnFeeder:
	.string "Möchtest du einen {POKEBLOCK} in den\n"
	.string "{POKEBLOCK}Napf legen?$"

SafariZone_Text_PokeblockStillHere:
	.string "Dein {STR_VAR_1} liegt immer hier.$"

SafariZone_Text_PokeblockWasPlaced:
	.string "{STR_VAR_1} wurde in den {POKEBLOCK}-\n"
	.string "Napf gelegt.$"

Route121_SafariZoneEntrance_Text_WelcomeToSafariZone:
	.string "Willkommen in der Safari-Zone!\p"
	.string "Hier bekommst du viele Pokémon zu\n"
	.string "Gesicht, die in dieser Region sehr\l"
	.string "selten sind.\p"
	.string "Du kannst sie in ihrer ganzen Wildheit\n"
	.string "und ungezähmt in ihrer natürlichen\l"
	.string "Umgebung beobachten.\p"
	.string "Wir haben unsere Tore für die Pokémon-\n"
	.string "Trainer geöffnet.\p"
	.string "Fangt euch Pokémon. Und behaltet sie!\p"
	.string "Kommt und genießt die Welt der\n"
	.string "Safari-Zone!$"

Route121_SafariZoneEntrance_Text_WelcomeFirstTime:
	.string "Willkommen in der Safari-Zone!\n"
	.string "Bist du zum ersten Mal hier?$"

Route121_SafariZoneEntrance_Text_ComeInAndEnjoy:
	.string "Komm und genieße die Safari-Zone!$"

Route121_SafariZoneEntrance_Text_FirstTimeInfo:
	.string "Sobald du die Safari-Zone betrittst,\n"
	.string "stehen dir 30 Safaribälle zur Ver-\l"
	.string "fügung, um Pokémon zu fangen.\p"
	.string "Das Safari-Spiel ist vorbei, sobald du\n"
	.string "deine Safaribälle verbraucht oder\l"
	.string "500 Schritte gemacht hast.\p"
	.string "Komm und genieße die Safari-Zone!$"

Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay:
	.string "Willkommen in der Safari-Zone!\p"
	.string "Alles, was du für nur ¥500 fangen\n"
	.string "kannst! Möchtest du es probieren?$"

Route121_SafariZoneEntrance_Text_PlayAnotherTime:
	.string "Okay.\n"
	.string "Bitte beehre uns doch später einmal.$"

Route121_SafariZoneEntrance_Text_NotEnoughMoney:
	.string "Du hast nicht genug Geld dabei.\n"
	.string "Tut mir Leid.$"

Route121_SafariZoneEntrance_Text_ThatWillBe500Please:
	.string "Das macht dann ¥500, bitte.$"

Route121_SafariZoneEntrance_Text_HereAreYourSafariBalls:
	.string "Hier sind deine Safaribälle.$"

Route121_SafariZoneEntrance_Text_Received30SafariBalls:
	.string "{PLAYER} erhält 30 Safaribälle.$"

Route121_SafariZoneEntrance_Text_PleaseEnjoyYourself:
	.string "Wir geben dir Bescheid, wenn das Spiel\n"
	.string "vorbei ist.\p"
	.string "Bis dahin wünschen wir viel Spaß!\n"
	.string "Und auf geht’s in die Wildnis!$"

Route121_SafariZoneEntrance_Text_PCIsFull:
	.string "Entschuldigung!\n"
	.string "Deine PC-Boxen sind voll.$"

Route121_SafariZoneEntrance_Text_YouNeedPokeblockCase:
	.string "Entschuldigung!\n"
	.string "Du besitzt keine {POKEBLOCK}Box.\p"
	.string "Dein Safari-Spiel wäre viel erfolg-\n"
	.string "reicher, wenn du {POKEBLOCK} benutzen\l"
	.string "würdest.\p"
	.string "Bitte besorge dir doch eine {POKEBLOCK}Box.\p"
	.string "Vielleicht erhältst du\n"

#if IS_HNS
	.string "von dem Jungen da drüben eine.$"
#else
	.string "in Seegrasulb City eine.$"
#endif

SafariZone_South_Text_StillHaveTimeExit:
	.string "Du hast noch Zeit übrig. Möchtest du\n"
	.string "die Safari-Zone jetzt verlassen?$"

SafariZone_South_Text_EnjoyTheRestOfYourAdventure:
	.string "Viel Vergnügen bei dem Rest deines\n"
	.string "wilden Abenteuers!$"

SafariZone_South_Text_ExitEarlyThankYouForPlaying:
	.string "Okay.\p"
	.string "Ich nehme die verbleibenden\n"
	.string "Safaribälle zurück.\p"
	.string "Vielen Dank für deine Teilnahme.\n"
	.string "Komm bald wieder!$"

SafariZone_South_Text_GoodLuck:
	.string "Viel Glück!\p"
	.string "Wenn du irgendetwas brauchst, zögere\n"
	.string "nicht, mich anzusprechen!$"

SafariZone_South_Text_Boy:
	.string "Weißt du was?\p"
	.string "Wenn du einen {POKEBLOCK} in diese Kiste\n"
	.string "dort legst, werden Pokémon angelockt.$"

SafariZone_South_Text_Man:
	.string "Ich wollte noch weiter hinein, aber\n"
	.string "ich habe mein Rad vergessen.\p"
	.string "Irgendetwas sagt mir, dass in den abge-\n"
	.string "legenen Gegenden seltene Pokémon\l"
	.string "leben.$"

SafariZone_Southwest_Text_Woman:
	.string "Manchmal, wenn ich einem Pokémon einen\n"
	.string "{POKEBLOCK} zuwerfe, ignoriert es das total.\p"
	.string "Ob Pokémon auch manche Dinge mögen\n"
	.string "und manche nicht? Wie wir Menschen?$"

SafariZone_Northwest_Text_Man:
	.string "Hechel… Keuch…\n"
	.string "Ich… bin hierher gekommen… aber…\p"
	.string "Ich bin erschöpft… Japs… Ich habe\n"
	.string "keine Energie, ein Pokémon zu fangen.$"

SafariZone_North_Text_Fisherman:
	.string "Ich habe eine Mission. Ich will Wasser-\n"
	.string "Pokémon fangen, die es in Hoenn nicht\l"
	.string "gibt.\p"
	.string "Weißt du zufällig, wo hier der See ist?$"

SafariZone_North_Text_Man:
	.string "Ich will viele seltene Pokémon fangen\n"
	.string "und mit meinen Freunden tauschen.$"

SafariZone_South_Text_Youngster:
	.string "Ich habe einen {POKEBLOCK} in den {POKEBLOCK}-\n"
	.string "Napf gelegt. Er ist verschwunden.\p"
	.string "Ein Pokémon muss ihn gefuttert haben,\n"
	.string "ohne dass ich das gemerkt habe.$"

Route121_SafariZoneEntrance_Text_TrainerTip:
	.string "Tipp für Trainer in der Safari-Zone!\p"
	.string "Wirf Pokémon {POKEBLOCK} zu, dann ergreifen\n"
	.string "sie nicht so schnell die Flucht.$"

SafariZone_Southwest_Text_RestHouseSign:
	.string "Rasthaus\n"
	.string "“Erhole deine gemarterten Füße.”$"

SafariZone_RestHouse_Text_Youngster:
	.string "Ich habe keine {POKEBLOCK}, aber ich habe\n"
	.string "trotzdem viele Pokémon gefangen.\p"
	.string "Du kannst deine Chancen erhöhen, indem\n"
	.string "du näher an das Pokémon herangehst,\l"
	.string "bevor du den Safariball wirfst.$"

SafariZone_RestHouse_Text_PsychicM:
	.string "Pokémon fliehen nicht so schnell, wenn\n"
	.string "man ihnen {POKEBLOCK} zuwirft.\p"
	.string "Pokémon, die von Natur aus nicht\n"
	.string "schnell fliehen, braucht man sie nicht\l"
	.string "unbedingt zuzuwerfen.$"

SafariZone_RestHouse_Text_FatMan:
	.string "Wird ein {POKEBLOCK} in den Napf gelegt,\n"
	.string "werden Pokémon angelockt.\p"
	.string "Ich glaube, Pokémon mit der gleichen\n"
	.string "Wesensart werden von ähnlichen\l"
	.string "{POKEBLOCK}n angezogen.$"

SafariZone_South_Text_AreaOffLimits1:
	.string "In diesem Gebiet finden Bauarbeiten\n"
	.string "statt. Zutritt verboten!$"

SafariZone_Southeast_Text_ExpansionIsFinished:
	.string "Der Ausbau der Safari-Zone ist\n"
	.string "abgeschlossen.\p"
	.string "Wir hoffen, du genießt den Aufenthalt.$"

SafariZone_South_Text_AreaOffLimits2:
	.string "In diesem Gebiet finden Bauarbeiten\n"
	.string "statt. Zutritt verboten!$"

SafariZone_Southeast_Text_LittleGirl:
	.string "Wow! Huiii! Diese Pokémon habe ich noch\n"
	.string "nie vorher gesehen!$"

SafariZone_Southeast_Text_FatMan:
	.string "Die Pokémon in diesem Gebiet sind mir\n"
	.string "völlig unbekannt.\p"
	.string "Und ich darf diese seltenen Pokémon\n"
	.string "auch noch fangen! Ich kann mein Glück\l"
	.string "kaum fassen! Cool!$"

SafariZone_Southeast_Text_RichBoy:
	.string "Die Pokémon in diesem Gebiet scheinen\n"
	.string "nicht aus Hoenn zu kommen.$"

SafariZone_Northeast_Text_Boy:
	.string "Ich habe nur noch wenige Safaribälle\n"
	.string "übrig.\p"
	.string "Mir fällt es schwer, mich zu\n"
	.string "entscheiden, welches Pokémon ich\l"
	.string "nun fangen soll.$"

SafariZone_Northeast_Text_Woman:
	.string "Ich habe gehört, man könne hier auf\n"
	.string "Pikachu treffen. Wo mag nur eins sein?$"

SafariZone_Northeast_Text_Girl:
	.string "Schluchz heul!\n"
	.string "Ich schaffe es nicht, eines zu fangen.\p"
	.string "Ich habe mein Geld umsonst ausgegeben,\n"
	.string "wenn ich nichts fange.$"

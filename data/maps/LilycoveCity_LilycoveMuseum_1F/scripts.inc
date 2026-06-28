LilycoveCity_LilycoveMuseum_1F_MapScripts::
	.byte 0

LilycoveCity_LilycoveMuseum_1F_EventScript_Greeter::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_Curator::
	lockall
	applymovement LOCALID_MUSEUM_1F_CURATOR, Common_Movement_FacePlayer
	message LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings
	waitmessage
	multichoice 20, 8, MULTI_VIEWED_PAINTINGS, TRUE
	goto_if_eq VAR_RESULT, 0, LilycoveCity_LilycoveMuseum_1F_EventScript_SawPaintings
	goto_if_eq VAR_RESULT, 1, LilycoveCity_LilycoveMuseum_1F_EventScript_NotYet
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_NotYet::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_SawPaintings::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LilycoveCity_LilycoveMuseum_1F_EventScript_NotInterested
	goto_if_eq VAR_RESULT, YES, LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_NotInterested::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat, MSGBOX_SIGN
	releaseall
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe, MSGBOX_SIGN
	applymovement LOCALID_MUSEUM_1F_CURATOR, LilycoveCity_LilycoveMuseum_1F_Movement_CuratorEnterStairs
	waitmovement 0
	removeobject LOCALID_MUSEUM_1F_CURATOR
	switch VAR_FACING
	case DIR_NORTH, LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorNorth
	case DIR_WEST, LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorWest
	case DIR_EAST, LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorEast
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorNorth::
	lockall
	applymovement LOCALID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorNorth
	waitmovement 0
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 11, 8
	waitstate
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorWest::
	lockall
	applymovement LOCALID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorWest
	waitmovement 0
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 11, 8
	waitstate
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorEast::
	lockall
	applymovement LOCALID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorEast
	waitmovement 0
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 11, 8
	waitstate
	end

LilycoveCity_LilycoveMuseum_1F_Movement_CuratorEnterStairs:
	walk_up
	step_end

LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorWest:
	walk_left
	walk_up
	step_end

LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorEast:
	walk_right
	walk_up
	step_end

LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorNorth:
	walk_up
	walk_up
	step_end

LilycoveCity_LilycoveMuseum_1F_EventScript_OldPainting::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_FantasyPainting::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_WomanPainting::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_LegendaryPokemonPainting::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_GrassPokemonPainting::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_BerryPainting::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_EventScript_BirdSculpture::
	msgbox LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_PokeBallSculpture::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_StoneTablet::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_SchoolKidM::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_Artist1::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_NinjaBoy::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_Woman1::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_Woman2::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_PsychicM::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_Artist2::
	lock
	faceplayer
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MUSEUM_1F_ARTIST_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_FatMan::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum:
	.string "Willkommen im MUSEUM von\n"
	.string "SEEGRASULB CITY.\p"
	.string "Bitte nimm dir die Zeit, unsere\n"
	.string "Sammlung\n"
	.string "wunderbarer Kunstwerke zum Thema\l"
	.string "POKéMON zu betrachten.$"

LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings:
	.string "Ich bin der KURATOR dieses MUSEUMs der\n"
	.string "schönen Künste.\p"
	.string "Es freut mich immer wieder, junge\n"
	.string "Menschen wie dich im MUSEUM zu\n"
	.string "treffen. \p"
	.string "Hast du dir schon unsere Gemäldesamm-\n"
	.string "lung angesehen?$"

LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime:
	.string "Ah, dann möchte ich dich nicht länger\n"
	.string "aufhalten. Bitte, nimm dir Zeit.$"

LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings:
	.string "Oh? Ich glaube, du bist ein POKéMON-\n"
	.string "TRAINER.\p"
	.string "Bist du auch an Gemälden interessiert?$"

LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat:
	.string "Ich verstehe…\p"
	.string "Ich fühle mich geehrt, dass du uns\n"
	.string "trotzdem besuchst.$"

LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe:
	.string "Ah, exzellent!\n"
	.string "Du magst Gemälde!\p"
	.string "Dann möchte ich dir gerne etwas\n"
	.string "zeigen.$"

LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting:
	.string "Dies ist ein sehr altes Gemälde.\n"
	.string "Die Farbe blättert hier und da schon\l"
	.string "ab.$"

LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery:
	.string "Eine merkwürdige Landschaft mit\n"
	.string "bizarren und fantastischen Details.$"

LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman:
	.string "Das Bildnis einer hübschen, lächelnden\n"
	.string "Frau mit einem POKéMON auf dem Schoß.$"

LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon:
	.string "Das Bild eines legendären POKéMON aus\n"
	.string "längst vergangener Zeit.\p"
	.string "Der Künstler hat dies aus der\n"
	.string "Vorstellung heraus gemalt.$"

LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon:
	.string "PFLANZEN-POKéMON, die sich im\n"
	.string "Wind wiegen.\p"
	.string "Es scheint, als genießen sie das zarte\n"
	.string "Streicheln des Windes.$"

LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries:
	.string "BEEREn. Sie sehen äußerst delikat aus.\n"
	.string "\p"
	.string "Das Bild kann einen hungrig machen!$"

LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica:
	.string "Ein Replikat einer berühmten Skulptur.\n"
	.string "\p"
	.string "Es zeigt ein antikes VOGEL-POKéMON.$"

LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone:
	.string "Ein großer POKéBALL, aus schwarzem\n"
	.string "Stein gehauen.\p"
	.string "In früheren Zeiten wurde er zu\n"
	.string "Festlichkeiten ausgestellt.$"

LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText:
	.string "Eine große Steintafel, auf der POKéMON\n"
	.string "und eng gesetzte, kleine Schrift-\l"
	.string "zeichen einer alten, unverständlichen\l"
	.string "Sprache eingraviert sind.$"

LilycoveCity_LilycoveMuseum_1F_Text_WorksOfMagnificence:
	.string "Hmmm…\n"
	.string "What works of great magnificence…$"

LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts:
	.string "Die Kämpfe mit POKéMON machen schon\n"
	.string "Spaß, das gebe ich zu.\p"
	.string "Aber man darf darüber nicht seine\n"
	.string "Liebe\l"
	.string "zu den schönen Künsten vergessen.$"

LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration:
	.string "Dieses KUNSTMUSEUM… Hier bekommst du\n"
	.string "viele fantastische Gemälde zu sehen.\p"
	.string "Und der KURATOR ist einfach wunderbar.\n"
	.string "\p"
	.string "Unter Künstlern wie mir ist dieses\n"
	.string "MUSEUM einfach eine Inspiration.$"

LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty:
	.string "Diese Frau ist hübsch!\n"
	.string "Genau wie meine Mama!$"

LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable:
	.string "Dieses POKéMON ist anbetungswürdig!\n"
	.string "Genau wie unser kleiner Sohn!$"

LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings:
	.string "Ich habe gehört, dass das KUNSTMUSEUM\n"
	.string "einige neue Gemälde erhalten hat.\p"
	.string "Die will ich mir natürlich sofort\n"
	.string "anschauen.\p"
	.string "Befinden sich die neuen Gemälde im\n"
	.string "zweiten Stockwerk?$"

LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful:
	.string "In letzter Zeit war der KURATOR außer-\n"
	.string "gewöhnlich gut gelaunt.\p"
	.string "Ich wette, er hat etwas Tolles erlebt.\n"
	.string "Mit Sicherheit!$"

LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings:
	.string "Ich will mir hier viele große Werke\n"
	.string "an- schauen und von ihnen lernen.\p"
	.string "Ich träume davon, eines Tages hier\n"
	.string "meine eigene Ausstellung zu haben.$"

LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination:
	.string "Das KUNSTMUSEUM ist zu einem\n"
	.string "beliebten Ziel für Touristen geworden.\n"
	.string "\p"
	.string "Das ist großartig für SEEGRASULB CITY.\n"
	.string "Nein, großartig für die ganze HOENN-\l"
	.string "Region!\p"
	.string "Ein einziger TRAINER soll all die\n"
	.string "Gemälde im oberen Stockwerk beschafft\l"
	.string "haben.$"


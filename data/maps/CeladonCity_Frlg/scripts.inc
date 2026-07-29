CeladonCity_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_OnTransition
	.byte 0

CeladonCity_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_CELADON_CITY
	end

CeladonCity_EventScript_LittleGirl::
	msgbox CeladonCity_Text_GotMyKoffingInCinnabar, MSGBOX_NPC
	end

CeladonCity_EventScript_OldMan1::
	lock
	msgbox CeladonCity_Text_GymIsGreatFullOfWomen
	release
	end

CeladonCity_EventScript_Woman::
	msgbox CeladonCity_Text_GameCornerIsBadForCitysImage, MSGBOX_NPC
	end

CeladonCity_EventScript_OldMan2::
	msgbox CeladonCity_Text_BlewItAllAtSlots, MSGBOX_NPC
	end

CeladonCity_EventScript_SoftboiledTutor::
	goto EventScript_SoftboiledTutor
	end

CeladonCity_EventScript_FatMan::
	lock
	faceplayer
	msgbox CeladonCity_Text_MyTrustedPalPoliwrath
	closemessage
	applymovement LOCALID_CELADON_FAT_MAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

CeladonCity_EventScript_Poliwrath::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_POLIWRATH, CRY_MODE_NORMAL
	msgbox CeladonCity_Text_Poliwrath
	closemessage
	waitmoncry
	applymovement LOCALID_CELADON_POLIWRATH, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

CeladonCity_EventScript_RocketGrunt1::
	msgbox CeladonCity_Text_KeepOutOfTeamRocketsWay, MSGBOX_NPC
	end

CeladonCity_EventScript_RocketGrunt2::
	msgbox CeladonCity_Text_GetLostOrIllPunchYou, MSGBOX_NPC
	end

CeladonCity_EventScript_Boy::
	msgbox CeladonCity_Text_ScaldedTongueOnTea, MSGBOX_NPC
	end

CeladonCity_EventScript_SilphCoScientist::
	msgbox CeladonCity_Text_SomeoneStoleSilphScope, MSGBOX_NPC
	end

CeladonCity_EventScript_TrainerTips1::
	msgbox CeladonCity_Text_ExplainXAccuracyDireHit, MSGBOX_SIGN
	end

CeladonCity_EventScript_CitySign::
	msgbox CeladonCity_Text_CitySign, MSGBOX_SIGN
	end

CeladonCity_EventScript_GymSign::
	lockall
	famechecker FAMECHECKER_ERIKA, 0
	msgbox CeladonCity_Text_GymSign
	releaseall
	end

CeladonCity_EventScript_MansionSign::
	msgbox CeladonCity_Text_MansionSign, MSGBOX_SIGN
	end

CeladonCity_EventScript_DeptStoreSign::
	msgbox CeladonCity_Text_DeptStoreSign, MSGBOX_SIGN
	end

CeladonCity_EventScript_TrainerTips2::
	msgbox CeladonCity_Text_GuardSpecProtectsFromStatus, MSGBOX_SIGN
	end

CeladonCity_EventScript_PrizeExchangeSign::
	msgbox CeladonCity_Text_PrizeExchangeSign, MSGBOX_SIGN
	end

CeladonCity_EventScript_GameCornerSign::
	msgbox CeladonCity_Text_GameCornerSign, MSGBOX_SIGN
	end

CeladonCity_Text_GotMyKoffingInCinnabar::
	.string "Ich habe Smogon auf der\n"
	.string "Zinnoberinsel gefangen!\p"
	.string "Es ist nett, doch wenn man es\n"
	.string "ärgert, atmet es Gift aus!$"

CeladonCity_Text_GymIsGreatFullOfWomen::
	.string "Hehe!\n"
	.string "Diese Arena ist voller Frauen...$"

CeladonCity_Text_GameCornerIsBadForCitysImage::
	.string "Die Spielhalle schadet dem Ruf\n"
	.string "unserer Stadt!$"

CeladonCity_Text_BlewItAllAtSlots::
	.string "Mist!\n"
	.string "Ich habe alles verspielt!\p"
	.string "Hätte ich doch meine Münzen\n"
	.string "rechtzeitig gegen einen Preis\l"
	.string "eingetauscht!$"

CeladonCity_Text_MyTrustedPalPoliwrath::
	.string "Quappo ist mein bester Freund!\p"
	.string "Es entwickelte sich, als ich einem\n"
	.string "Quaputzi einen Wasserstein gab!$"

CeladonCity_Text_Poliwrath::
	.string "Quappo: Quappo! Quappo!$"

CeladonCity_Text_GetLostOrIllPunchYou::
	.string "Was starrst du mich so an?$"

CeladonCity_Text_KeepOutOfTeamRocketsWay::
	.string "Halte dich aus Team Rockets\n"
	.string "Angelegenheiten heraus!$"

CeladonCity_Text_ExplainXAccuracyDireHit::
	.string "Tipps für Trainer\p"
	.string "X-Treffer erhöht die Genauigkeit\n"
	.string "von Attacken!\p"
	.string "Angriffplus erhöht die\n"
	.string "Wahrscheinlichkeit, einen\l"
	.string "Volltreffer zu landen!\p"
	.string "Diese Items kannst du im\n"
	.string "Einkaufszentrum von Prismania\l"
	.string "City kaufen!$"

CeladonCity_Text_CitySign::
	.string "Prismania City\n"
	.string "Die Stadt der Regenbogen-Träume!$"

CeladonCity_Text_GymSign::
	.string "Prismania City Pokémon-Arena\n"
	.string "Leiterin: Erika\l"
	.string "Die Prinzessin mit dem grünen Daumen$"

CeladonCity_Text_MansionSign::
	.string "Prismania-Villa$"

CeladonCity_Text_DeptStoreSign::
	.string "Das Prismania Einkaufszentrum\n"
	.string "Wo Träume wahr werden$"

CeladonCity_Text_GuardSpecProtectsFromStatus::
	.string "Tipps für Trainer\p"
	.string "Megablock schützt Pokémon fünf Runden\n"
	.string "lang vor Statusveränderungen im Kampf.\p"
	.string "Besorgen kannst du dir dieses hilfreiche\n"
	.string "Item im Prismania Einkaufszentrum!$"

CeladonCity_Text_PrizeExchangeSign::
	.string "Wechselstube\n"
	.string "Tausche Münzen gegen Preise!$"

CeladonCity_Text_GameCornerSign::
	.string "Rocket Spielhalle\n"
	.string "Ein Spielplatz für Erwachsene!$"

CeladonCity_Text_ScaldedTongueOnTea::
	.string "Argh, oh…\n"
	.string "Ich habe meine Zunge verbrüht!\p"
	.string "Die nette, alte Dame in der Villa\n"
	.string "gab mir Tee.\p"
	.string "Aber er war kochend heiß!\n"
	.string "Ich muss ihn erst abkühlen, ehe\l"
	.string "ich ihn trinke!$"

Text_SoftboiledTeach::
	.string "Hallo!\p"
	.string "Ich kenne dich vom Sehen! Aber ich\n"
	.string "hatte bisher keine Zeit, dich\l"
	.string "anzusprechen!\p"
	.string "Glück hat uns scheinbar zusammen-\n"
	.string "gebracht.\p"
	.string "Das möchte ich feiern, indem ich\n"
	.string "einem deiner Pokémon\l"
	.string "Weichei beibringe.$"

Text_SoftboiledDeclined::
	.string "Ich habe immer ein Auge auf dich\n"
	.string "geworfen.\p"
	.string "Hoffentlich können wir erneut\n"
	.string "plaudern.$"

Text_SoftboiledWhichMon::
	.string "Also, wie heißt das Pokémon,\n"
	.string "das Weichei erlernen soll?$"

Text_SoftboiledTaught::
	.string "Ich wünsche dir viel Glück!$"

CeladonCity_Text_SomeoneStoleSilphScope::
	.string "Oh, was soll ich tun…\p"
	.string "Jemand hat unser Silph Scope\n"
	.string "gestohlen.\p"
	.string "Der Dieb kam aus dieser Richtung.\n"
	.string "Da bin ich mir sicher.\p"
	.string "Aber ich habe ihn verloren!\n"
	.string "Wo ist er nur hin?$"


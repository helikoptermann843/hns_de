AzaleaTown_KurtsHouse_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AzaleaTown_KurtsHouse_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, AzaleaTown_KurtsHouse_OnTransition
	.byte 0

AzaleaTown_KurtsHouse_OnTransition::
	goto_if_eq VAR_AZALEA_TOWN_STATE, 3, AzaleaTown_KurtsHouse_EventScript_ReturnFromWellSetup
	end

AzaleaTown_KurtsHouse_OnFrame::
	map_script_2 VAR_AZALEA_TOWN_STATE, 3, AzaleaTown_KurtsHouse_EventScript_ReturnFromWell
	.2byte 0

AzaleaTown_KurtsHouse_EventScript_KurtBefore::
	lock
	faceplayer
	msgbox KurtsHouse_Text_KurtMakingBallsMustWait, MSGBOX_DEFAULT
	closemessage
	goto_if_eq VAR_FACING, DIR_NORTH, AzaleaTown_KurtsHouse_EventScript_PlayerMove
	applymovement LOCALID_AZALEA_TOWN_KURT_BEFORE, AzaleaTown_KurtsHouse_Movement_KurtWalkDown
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_AZALEA_TOWN_KURT_BEFORE
	setflag FLAG_HIDE_KURT_1
	setflag FLAG_HIDE_AZALEA_TOWN_WELL_ROCKET
	setvar VAR_AZALEA_TOWN_STATE, 2
	release
	end

AzaleaTown_KurtsHouse_EventScript_PlayerMove::
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTown_KurtsHouse_Movement_Player
	waitmovement 0
	applymovement LOCALID_AZALEA_TOWN_KURT_BEFORE, AzaleaTown_KurtsHouse_Movement_KurtWalkDown
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_AZALEA_TOWN_KURT_BEFORE
	setflag FLAG_HIDE_KURT_1
	setflag FLAG_HIDE_AZALEA_TOWN_WELL_ROCKET
	release
	end

AzaleaTown_KurtsHouse_EventScript_Girl::
	lock
	faceplayer
	goto_if_unset FLAG_HIDE_KURT_2, AzaleaTown_KurtsHouse_EventScript_Girl2
	goto_if_set FLAG_HIDE_KURT_1, AzaleaTown_KurtsHouse_EventScript_Girl3
	msgbox KurtsHouse_Text_GranddaughterSlowpokeGone, MSGBOX_DEFAULT
	release
	end

AzaleaTown_KurtsHouse_EventScript_Girl2::
	goto_if_eq VAR_AZALEA_TOWN_STATE, 3, AzaleaTown_KurtsHouse_EventScript_Girl4
	goto_if_eq VAR_AZALEA_TOWN_STATE, 4, AzaleaTown_KurtsHouse_EventScript_Girl4
	goto_if_eq VAR_AZALEA_TOWN_STATE, 5, AzaleaTown_KurtsHouse_EventScript_Girl4
	goto_if_eq VAR_AZALEA_TOWN_STATE, 6, AzaleaTown_KurtsHouse_EventScript_Girl4
	goto_if_eq VAR_AZALEA_TOWN_STATE, 8, AzaleaTown_KurtsHouse_EventScript_Girl5
	goto_if_eq VAR_AZALEA_TOWN_STATE, 9, AzaleaTown_KurtsHouse_EventScript_Girl5

	msgbox KurtsHouse_Text_GranddaughterDad, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaTown_KurtsHouse_EventScript_Girl3::
	msgbox KurtsHouse_Text_GranddaughterLonely, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaTown_KurtsHouse_EventScript_Girl4::
	msgbox KurtsHouse_Text_GranddaughterSlowpokeBack, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaTown_KurtsHouse_EventScript_Girl5::
	msgbox KurtsHouse_Text_GranddaughterSound, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaTown_KurtsHouse_EventScript_ReturnFromWellSetup::
	setobjectmovementtype LOCALID_AZALEA_TOWN_KURT, MOVEMENT_TYPE_FACE_DOWN
	end

AzaleaTown_KurtsHouse_EventScript_ReturnFromWell::
	lock
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	msgbox KurtsHouse_Text_KurtHonoredToMakeBalls, MSGBOX_DEFAULT
	giveitem ITEM_FAST_BALL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox KurtsHouse_Text_KurtBallsFromApricorns, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_AZALEA_TOWN_KURT, DIR_NORTH
	setvar VAR_AZALEA_TOWN_STATE, 4
	release
	end

AzaleaTown_KurtsHouse_EventScript_KurtCheckGSBall::
	checkitem ITEM_GS_BALL
	goto_if_eq VAR_RESULT, TRUE, AzaleaTown_KurtsHouse_EventScript_KurtGsBall
	return

AzaleaTown_KurtsHouse_EventScript_Kurt::
	lock
	faceplayer
	goto_if_eq VAR_AZALEA_TOWN_STATE, 8, AzaleaTown_KurtsHouse_EventScript_KurtGsBall2
	goto_if_eq VAR_AZALEA_TOWN_STATE, 9, AzaleaTown_KurtsHouse_EventScript_KurtGsBall3
	msgbox KurtsHouse_Text_KurtAskYouHaveAnApricorn, MSGBOX_DEFAULT
	closemessage
	call_if_unset FLAG_CAUGHT_CELEBI, AzaleaTown_KurtsHouse_EventScript_KurtCheckGSBall
AzaleaTown_KurtsHouse_EventScript_Kurt2::
	special CreateKurtBallShop
	waitstate
	goto_if_eq VAR_RESULT, FALSE, AzaleaTown_KurtsHouse_EventScript_KurtCancel
	playse SE_BANG
	applymovement LOCALID_AZALEA_TOWN_KURT, AzaleaTownKurt_Movement_Making_Ball
	waitmovement 0
	playse SE_BANG
	applymovement LOCALID_AZALEA_TOWN_KURT, AzaleaTownKurt_Movement_Making_Ball
	waitmovement 0
	turnobject LOCALID_AZALEA_TOWN_KURT, DIR_SOUTH
	goto_if_eq VAR_0x8005, 1, AzaleaTown_KurtsHouse_EventScript_SingularBall
	bufferitemname STR_VAR_1, VAR_0x8004
	buffernumberstring STR_VAR_2, VAR_0x8005
	playfanfare MUS_OBTAIN_ITEM
	msgbox KurtsHouse_Text_KurtFinishedPlural, MSGBOX_DEFAULT
	waitfanfare
	additem VAR_0x8004, VAR_0x8005
	msgbox KurtsHouse_Text_KurtTurnedOutGreat, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_AZALEA_TOWN_KURT, DIR_NORTH
	release
	end

AzaleaTown_KurtsHouse_EventScript_SingularBall::
	bufferitemname STR_VAR_1, VAR_0x8004
	playfanfare MUS_OBTAIN_ITEM
	msgbox KurtsHouse_Text_KurtFinishedSingular, MSGBOX_DEFAULT
	waitfanfare
	additem VAR_0x8004, VAR_0x8005
	msgbox KurtsHouse_Text_KurtTurnedOutGreat, MSGBOX_DEFAULT
	closemessage
	turnobject LOCALID_AZALEA_TOWN_KURT, DIR_NORTH
	release
	end

AzaleaTown_KurtsHouse_EventScript_KurtCancel::
	closemessage
	turnobject LOCALID_AZALEA_TOWN_KURT, DIR_NORTH
	release
	end

AzaleaTown_KurtsHouse_EventScript_KurtGsBall::
	msgbox KurtsHouse_Text_KurtWhatIsThat, MSGBOX_DEFAULT
	closemessage
	removeitem ITEM_GS_BALL
	playse SE_BANG
	applymovement LOCALID_AZALEA_TOWN_KURT, AzaleaTownKurt_Movement_Making_Ball
	waitmovement 0
	playse SE_BANG
	applymovement LOCALID_AZALEA_TOWN_KURT, AzaleaTownKurt_Movement_Making_Ball
	waitmovement 0
	faceplayer
	msgbox KurtsHouse_Text_KurtThisBallStartedToShake, MSGBOX_DEFAULT
	closemessage
	playse SE_M_PETAL_DANCE
	waitse
	playse SE_PIN
	applymovement LOCALID_AZALEA_TOWN_KURT, Common_Movement_ExclamationMark
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	delay 60
	waitse
	playse SE_M_PETAL_DANCE
	waitse
	applymovement LOCALID_AZALEA_TOWN_KURT, AzaleaTownKurt_Movement_Look_Around
	applymovement OBJ_EVENT_ID_PLAYER, AzaleaTownKurt_Movement_Look_Around
	waitmovement 0
	waitmovement 0
AzaleaTown_KurtsHouse_EventScript_KurtGsBall2::
	msgbox KurtsHouse_Text_Kurt_Whatwasthat, MSGBOX_DEFAULT
	setvar VAR_AZALEA_TOWN_STATE, 8
	closemessage
	release
	end

AzaleaTown_KurtsHouse_EventScript_KurtGsBall3::
	msgbox KurtsHouse_Text_Forest, MSGBOX_DEFAULT
	closemessage
	delay 30
	msgbox KurtsHouse_Text_BallAnyway, MSGBOX_DEFAULT
	closemessage
	goto AzaleaTown_KurtsHouse_EventScript_Kurt2
	release
	end
KurtsHouse_Text_BallAnyway:
	.string "Wie auch immer, soll ich dir ein\n"
	.string "paar Bälle machen?$"

AzaleaTown_KurtsHouse_EventScript_OakPhoto::
	msgbox KurtsHouse_Text_OakPhoto, MSGBOX_SIGN
	closemessage
	end

AzaleaTown_KurtsHouse_EventScript_CelebiStatue::
	msgbox KurtsHouse_Text_CelebiStatue, MSGBOX_SIGN
	closemessage
	end

AzaleaTownKurt_Movement_Look_Around:
	face_left
	delay_8
	face_right
	delay_8
	face_up
	delay_8
	face_down
	delay_8
	face_left
	step_end

AzaleaTownKurt_Movement_Making_Ball:
	face_up
	walk_in_place_fast_up
	delay_8
	walk_in_place_fast_up
	delay_8
	walk_in_place_fast_up
	step_end

AzaleaTown_KurtsHouse_Movement_Player:
	face_right
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end

AzaleaTown_KurtsHouse_Movement_KurtWalkDown:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

KurtsHouse_Text_KurtGetStarted:
	.string "Kurt: Ich fange jetzt an!$"

KurtsHouse_Text_KurtMakingBallsMustWait:
	.string "Hm? Wer bist du denn?\p"
	.string "Oh, {PLAYER} heißt du also!\n"
	.string "Bist du hier, weil du willst, dass ich\l"
	.string "ein paar Bälle für dich herstelle?\p"
	.string "Tut mir leid, aber das muss warten.\p"
	.string "Kennst du Team Rocket? Keine Sorge,\n"
	.string "du schläfst besser, wenn nicht.\l"
	.string "Ich werde mich kurz fassen.\p"
	.string "Team Rocket missbraucht unschuldige\n"
	.string "Pokémon für ihre Schandtaten.\l"
	.string "Diese Typen sind einfach das Letzte.\p"
	.string "Sie hatten sich eigentlich vor drei\n"
	.string "Jahren aufgelöst, aber nun…\p"
	.string "Na ja, genau diese Bande schneidet\n"
	.string "jetzt den Flegmon im Brunnen die\l"
	.string "Ruten ab und verdient sich damit\l"
	.string "eine goldene Nase.\p"
	.string "Aber ich gehe jetzt zu ihnen und\n"
	.string "erteile ihnen eine Lektion!\p"
	.string "Haltet durch, Flegmon!\n"
	.string "Der alte Kurt eilt euch zur Rettung!$"

KurtsHouse_Text_KurtHonoredToMakeBalls:
	.string "Kurt: Hi, {PLAYER}!\p"
	.string "Die Situation am Brunnen hast du\n"
	.string "wie ein echter Held gemeistert.\p"
	.string "Ich mag deinen Stil!\p"
	.string "Ich wäre geehrt für jemanden\n"
	.string "wie dich Pokebälle anfertigen\l"
	.string "zu dürfen.\p"
	.string "Im moment habe ich nur das hier,\n"
	.string "aber nimm es.$"

KurtsHouse_Text_KurtBallsFromApricorns:
	.string "Kurt: Ich kann aus Beeren\n"
	.string "Spezialbälle anfertigen!\p"
	.string "Pflücke überall fleißig Beeren von\n"
	.string "den Bäumen und bringe sie zu mir.\l"
	.string "Ich verarbeite sie dann zu Bällen.$"

KurtsHouse_Text_KurtAskYouHaveAnApricorn:
	.string "Kurt: Oh, wie ich sehe, hast du ein\n"
	.string "paar Beeren mitgebracht!\p"
	.string "Na schön! Dann mache ich mich\n"
	.string "mal ans Verarbeiten!$"

KurtsHouse_Text_KurtThatsALetdown:
	.string "Kurt: Ich sehe keine 5 {STR_VAR_1}!$"

KurtsHouse_Text_KurtFinishedPlural:
	.string "Kurt: {PLAYER}!\n"
	.string "Deine {STR_VAR_1}e sind fertig. Hier!\p"
	.string "{PLAYER} erhält\n"
	.string "{STR_VAR_2} {STR_VAR_1}e!$"

KurtsHouse_Text_KurtFinishedSingular:
	.string "Kurt: {PLAYER}!\n"
	.string "Dein {STR_VAR_1} ist fertig. Hier!\p"
	.string "{PLAYER} erhält\n"
	.string "den {STR_VAR_1}!$"

KurtsHouse_Text_KurtTurnedOutGreat:
	.string "Kurt: Dieses Mal habe ich mich\n"
	.string "wirklich selbst übertroffen!\p"
	.string "Versuche doch mal, ein Pokémon\n"
	.string "damit zu fangen!$"

KurtsHouse_Text_KurtWhatIsThat:
	.string "W-was ist das?\p"
	.string "Ich habe sowas noch nie gesehen.\p"
	.string "Es sieht aus wie ein Pokéball,\n"
	.string "aber es scheint etwas anderes zu sein.\p"
	.string "Lass es mich prüfen.$"

KurtsHouse_Text_KurtImCheckingItNow:
	.string "Ich prüfe es gerade.$"

KurtsHouse_Text_KurtAhHaISee:
	.string "Ah-ha! Verstehe! So ist das…$"

KurtsHouse_Text_KurtThisBallStartedToShake:
	.string "{PLAYER}!\p"
	.string "Dieser Ball hat sich bewegt,\n"
	.string "als ich ihn überprüfen wollte.\p"
	.string "Da geht etwas vor sich!$"

KurtsHouse_Text_Kurt_Whatwasthat:
	.string "Was ist das für ein Geräusch?!\p"
	.string "Lass uns draußen nachsehen!$"

KurtsHouse_Text_GranddaughterSlowpokeGone:
	.string "Die Flegmon sind verschwunden…\n"
	.string "Ob sie wohl von irgendwelchen bösen\l"
	.string "Leuten entführt wurden?$"

KurtsHouse_Text_GranddaughterLonely:
	.string "Wo steckt bloß mein Großvater?\n"
	.string "Ich fühle mich so alleine…$"

KurtsHouse_Text_GranddaughterSlowpokeBack:
	.string "Das Flegmon, das ich von meinem Vater\n"
	.string "bekommen habe, ist wieder da!\l"
	.string "Seine Rute wächst schon wieder nach.$"

KurtsHouse_Text_GranddaughterDad:
	.string "Mein Vater arbeitet bei der Silph Co.\n"
	.string "Er ist dort an der Entwicklung neuer\l"
	.string "Pokébälle beteiligt!\p"
	.string "Ich hüte hier mit meinem Großvater\n"
	.string "und Flegmon das Haus.$"

KurtsHouse_Text_GranddaughterHelp:
	.string "Ich muss jetzt Opa helfen!\p"
	.string "Wir machen dir einen hervorragenden\n"
	.string "Ball! Warte mal!$"

KurtsHouse_Text_GranddaughterFun:
	.string "Bälle anfertigen macht Spaß!$"

KurtsHouse_Text_GranddaughterSound:
	.string "Kam dieses Geräusch aus dem\n"
	.string "Steineichenwald????$"

KurtsHouse_Text_Forest:
	.string "Warst du schon im Steineichenwald?\n"
	.string "Es hört sich gruselig an.$"

KurtsHouse_Text_Slowpoke:
	.string "Flegmon: …Flegmon?$"

KurtsHouse_Text_OakPhoto:
	.string "…Ein junger Prof. Eich?$"

KurtsHouse_Text_CelebiStatue:
	.string "Eine Statue des Waldpatrons.$"

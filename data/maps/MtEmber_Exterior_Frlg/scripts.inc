MtEmber_Exterior_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmber_Exterior_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, MtEmber_Exterior_OnLoad
	.byte 0

MtEmber_Exterior_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_MT_EMBER_EXTERIOR
	call_if_eq VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 2, MtEmber_Exterior_EventScript_RocketsFaceDown
	end

MtEmber_Exterior_EventScript_RocketsFaceDown::
	setobjectmovementtype LOCALID_MT_EMBER_GRUNT1, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype LOCALID_MT_EMBER_GRUNT2, MOVEMENT_TYPE_FACE_DOWN
	return

MtEmber_Exterior_OnLoad::
	call_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, MtEmber_Exterior_EventScript_OpenCave
	end

MtEmber_Exterior_EventScript_OpenCave::
	setmetatile 42, 39, METATILE_MtEmber_CaveEntrance, 0
	return

MtEmber_Exterior_EventScript_Grunt1::
	lock
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_EventScript_Grunt1Defeated
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, MtEmber_Exterior_EventScript_BattleGrunt1
	msgbox MtEmber_Exterior_Text_WellTryDiggingHere
	release
	end

MtEmber_Exterior_EventScript_Grunt1Defeated::
	msgbox MtEmber_Exterior_Text_Grunt1PostBattle
	release
	end

MtEmber_Exterior_EventScript_BattleGrunt1::
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_FacePlayer
	waitmovement 0
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
	msgbox MtEmber_Exterior_Text_Grunt1Intro
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_Text_Grunt1Defeat
	msgbox MtEmber_Exterior_Text_Grunt1PostBattle
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_EventScript_DefeatedBothGrunts
	release
	end

MtEmber_Exterior_EventScript_DefeatedBothGrunts::
	msgbox MtEmber_Exterior_Text_WellRegroupDontStepInsideThere
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_MT_EMBER_GRUNT1
	removeobject LOCALID_MT_EMBER_GRUNT2
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

MtEmber_Exterior_EventScript_Grunt2::
	lock
	faceplayer
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_EventScript_DefeatedGrunt2
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, MtEmber_Exterior_EventScript_BattleGrunt2
	msgbox MtEmber_Exterior_Text_YoureInTheWayGetLost
	closemessage
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MtEmber_Exterior_EventScript_DefeatedGrunt2::
	msgbox MtEmber_Exterior_Text_Grunt2PostBattle
	release
	end

MtEmber_Exterior_EventScript_BattleGrunt2::
	playbgm MUS_RG_ENCOUNTER_ROCKET, 0
	msgbox MtEmber_Exterior_Text_Grunt2Intro
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_44, MtEmber_Exterior_Text_Grunt2Defeat
	msgbox MtEmber_Exterior_Text_Grunt2PostBattle
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_43, MtEmber_Exterior_EventScript_DefeatedBothGrunts
	release
	end

MtEmber_Exterior_EventScript_RocketPasswordScene::
	lockall
	textcolor NPC_TEXT_COLOR_MALE
	msgbox MtEmber_Exterior_Text_PunchedThroughAtLast
	message MtEmber_Exterior_Text_WhatsPasswordAgain
	waitmessage
	playse SE_PIN
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_QuestionMark
	waitmovement 0
	waitbuttonpress
	msgbox MtEmber_Exterior_Text_FirstPasswordGoldeen
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_MT_EMBER_GRUNT1, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_MT_EMBER_GRUNT2, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	call MtEmber_Exterior_EventScript_RocketsFaceDown
	msgbox MtEmber_Exterior_Text_SnoopsBeenListeningIn
	setvar VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 2
	releaseall
	end

MtEmber_Exterior_EventScript_Logan::
	trainerbattle_single TRAINER_PKMN_RANGER_LOGAN, MtEmber_Exterior_Text_LoganIntro, MtEmber_Exterior_Text_LoganDefeat
	msgbox MtEmber_Exterior_Text_LoganPostBattle, MSGBOX_AUTOCLOSE
	end

MtEmber_Exterior_EventScript_Beth::
	trainerbattle_single TRAINER_PKMN_RANGER_BETH, MtEmber_Exterior_Text_BethIntro, MtEmber_Exterior_Text_BethDefeat
	msgbox MtEmber_Exterior_Text_BethPostBattle, MSGBOX_AUTOCLOSE
	end

MtEmber_Exterior_EventScript_Jocelyn::
	trainerbattle_single TRAINER_CRUSH_GIRL_JOCELYN, MtEmber_Exterior_Text_JocelynIntro, MtEmber_Exterior_Text_JocelynDefeat
	msgbox MtEmber_Exterior_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
	end

Text_ExplosionTeach::
	.string "Stell dir vor, dieser Vulkan würde\n"
	.string "ausbrechen!\p"
	.string "Die Eruption wäre unser Ende! Ist\n"
	.string "das nicht erschreckend?\p"
	.string "Während uns die Knie schlottern,\n"
	.string "könnte ich einem Pokémon\l"
	.string "Explosion lehren!$"

Text_ExplosionDeclined::
	.string "Ja, genau, du hast Recht!\n"
	.string "Das ist zu erschreckend!$"

Text_ExplosionWhichMon::
	.string "Du bist unheimlich tapfer!\p"
	.string "Welches Pokémon soll\n"
	.string "Explosion erlernen?$"

Text_ExplosionTaught::
	.string "Explosion auf diesem Vulkan\n"
	.string "einzusetzen…\p"
	.string "Was für ein aufreibender\n"
	.string "Nervenkitzel!$"

MtEmber_Exterior_Text_WellTryDiggingHere::
	.string "Hier drüben!\n"
	.string "Wir versuchen, hier zu graben.\p"
	.string "Der Schatz, über den die Vors.\n"
	.string "reden, muss hier irgendwo sein.$"

MtEmber_Exterior_Text_YoureInTheWayGetLost::
	.string "Was zur…?\n"
	.string "Du bist im Weg! Verschwinde!$"

MtEmber_Exterior_Text_PunchedThroughAtLast::
	.string "Wow! Endlich durch! Auf zur\n"
	.string "Schatzsuche!$"

MtEmber_Exterior_Text_WhatsPasswordAgain::
	.string "Wir bringen jeden Schatz, den wir\n"
	.string "finden, ins Lager, verstanden?\p"
	.string "… und wie lauten die Passwörter?\n"
	.string "Für das Lager, natürlich!$"

MtEmber_Exterior_Text_FirstPasswordGoldeen::
	.string "Wie?!? Du hast das Passwort \n"
	.string "vergessen? Eigentlich sind es zwei!\p"
	.string "Das erste lautet “Arbok Kobra”.\p"
	.string "Und das zweite ist…$"

MtEmber_Exterior_Text_SnoopsBeenListeningIn::
	.string "Heh!\n"
	.string "Das Balg belauscht uns!$"

MtEmber_Exterior_Text_Grunt1Intro::
	.string "Du hast uns bespitzelt, gib es zu!$"

MtEmber_Exterior_Text_Grunt1Defeat::
	.string "Huh, what?$"

MtEmber_Exterior_Text_Grunt1PostBattle::
	.string "Warum musstest du gewinnen?$"

MtEmber_Exterior_Text_Grunt2Intro::
	.string "Du willst wohl etwas von unserem\n"
	.string "Schatz? Das kannst du vergessen!$"

MtEmber_Exterior_Text_Grunt2Defeat::
	.string "Wait!\n"
	.string "But how?$"

MtEmber_Exterior_Text_Grunt2PostBattle::
	.string "Fröne der Amnesie und vergiss,\n"
	.string "was du gehört hast!$"

MtEmber_Exterior_Text_WellRegroupDontStepInsideThere::
	.string "Welch Rückschlag…\n"
	.string "Wir müssen uns neu gruppieren.\p"
	.string "Du! Denk nicht einmal daran,\n"
	.string "einzutreten!\p"
	.string "Wenn du weißt, was gut für dich\n"
	.string "ist, denk nicht einmal daran!$"

MtEmber_Exterior_Text_LoganIntro::
	.string "Ein Vulkan gilt als aktiv, wenn er\n"
	.string "ausbricht oder kurz vor dem\l"
	.string "Ausbruch steht.$"

MtEmber_Exterior_Text_LoganDefeat::
	.string "Puh… das war heiß!\n"
	.string "Ich hatte einen Schweißausbruch!$"

MtEmber_Exterior_Text_LoganPostBattle::
	.string "Es soll mehr als 1500 aktive\n"
	.string "Vulkane in der Welt geben.\p"
	.string "Allein beim Gedanken daran wird\n"
	.string "mir heiß und mulmig!$"

MtEmber_Exterior_Text_BethIntro::
	.string "Weißt du, wie in Vulkanen Höhlen\n"
	.string "entstehen?$"

MtEmber_Exterior_Text_BethDefeat::
	.string "Aua!\n"
	.string "Du bist erschreckend gut!$"

MtEmber_Exterior_Text_BethPostBattle::
	.string "Wenn die Lava an der Oberfläche\n"
	.string "des Magmas erhärtet und das Magma\l"
	.string "darunter herausfließt, entsteht\l"
	.string "eine Höhle.$"

MtEmber_Exterior_Text_JocelynIntro::
	.string "Ich habe hart trainiert, damit\n"
	.string "ich meinen Liebeskummer\l"
	.string "überwinde…\l"
	.string "Es hat mich zumindest körperlich\l"
	.string "gestärkt! Hey-Ho!$"

MtEmber_Exterior_Text_JocelynDefeat::
	.string "Ich denke, ich habe es\n"
	.string "übertrieben…$"

MtEmber_Exterior_Text_JocelynPostBattle::
	.string "Deine Art zu kämpfen erinnert mich\n"
	.string "an den Kerl, der mich loswerden\l"
	.string "wollte.$"


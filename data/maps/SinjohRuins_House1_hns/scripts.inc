SinjohRuins_House1_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SinjohRuins_Lab_OnFrame
	map_script 	MAP_SCRIPT_ON_TRANSITION, SinjohRuins_Lab_OnTransition
	.byte 0

SinjohRuins_Lab_OnTransition::
	call_if_eq VAR_SINJOH_STORYLINE, 7, SinjohRuins_Lab_SetupFinalPlateScene
	end

SinjohRuins_Lab_OnFrame::
	map_script_2 VAR_SINJOH_STORYLINE, 7, SinjohRuins_Lab_FinalPlateScene
	.2byte 0

@==========================Intro Cutscene SCRIPTS================================================================================

SinjohRuins_Lab_EventScript_TriggerIntroTop::
	lock
	playse SE_PIN
	applymovement2 LOCALID_SINJOHRUINS_LAB_STEVEN, Common_Movement_ExclamationMark
	delay 60
	msgbox SinjohRuins_Lab_Text_StevenIntroCutscene1, MSGBOX_AUTOCLOSE
	applymovement2 LOCALID_PLAYER, Common_Movement_WalkDown1
	applymovement2 LOCALID_SINJOHRUINS_LAB_STEVEN, SinjohRuins_Lab_Movement_StevenMeetPlayer
	waitmovement 0
	waitmovement LOCALID_SINJOHRUINS_LAB_STEVEN
	goto SinjohRuins_Lab_EventScript_TriggerIntro

SinjohRuins_Lab_EventScript_TriggerIntroMid::
	lock
	playse SE_PIN
	applymovement2 LOCALID_SINJOHRUINS_LAB_STEVEN, Common_Movement_ExclamationMark
	delay 60
	msgbox SinjohRuins_Lab_Text_StevenIntroCutscene1, MSGBOX_AUTOCLOSE
	applymovement2 LOCALID_SINJOHRUINS_LAB_STEVEN, SinjohRuins_Lab_Movement_StevenMeetPlayer
	waitmovement LOCALID_SINJOHRUINS_LAB_STEVEN
	goto SinjohRuins_Lab_EventScript_TriggerIntro

SinjohRuins_Lab_EventScript_TriggerIntroBot::
	lock
	playse SE_PIN
	applymovement2 LOCALID_SINJOHRUINS_LAB_STEVEN, Common_Movement_ExclamationMark
	delay 60
	msgbox SinjohRuins_Lab_Text_StevenIntroCutscene1, MSGBOX_AUTOCLOSE
	applymovement2 LOCALID_PLAYER, Common_Movement_WalkUp1
	applymovement2 LOCALID_SINJOHRUINS_LAB_STEVEN, SinjohRuins_Lab_Movement_StevenMeetPlayer
	waitmovement 0
	waitmovement LOCALID_SINJOHRUINS_LAB_STEVEN
	goto SinjohRuins_Lab_EventScript_TriggerIntro

SinjohRuins_Lab_EventScript_TriggerIntro::
	turnobject LOCALID_PLAYER, DIR_EAST
	msgbox SinjohRuins_Lab_Text_StevenIntroCutscene2, MSGBOX_AUTOCLOSE
	applymovement2 LOCALID_SINJOHRUINS_LAB_STEVEN, SinjohRuins_Lab_Movement_StevenSitsDown
	delay 10
	applymovement LOCALID_PLAYER, SinjohRuins_Lab_Movement_PlayerGoesToTable
	delay 40
	applymovement2 LOCALID_NEWSINJOH_LAB_LINGUIST, SinjohRuins_Lab_Movement_LinguistWalkDown
	waitmovement 0
	waitmovement LOCALID_SINJOHRUINS_LAB_STEVEN
	waitmovement LOCALID_NEWSINJOH_LAB_LINGUIST
	applymovement2 LOCALID_SINJOHRUINS_LAB_STEVEN, Common_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox SinjohRuins_Lab_Text_StevenIntroCutscene3, MSGBOX_AUTOCLOSE
	delay 10
	waitmovement 0
	applymovement2 LOCALID_NEWSINJOH_LAB_LINGUIST, Common_Movement_WalkInPlaceDown
	waitmovement 0
	msgbox SinjohRuins_Lab_Text_StevenIntroCutscene4, MSGBOX_AUTOCLOSE
	delay 10
	applymovement LOCALID_NEWSINJOH_LAB_LINGUIST, SinjohRuins_Lab_Movement_LinguistWalkUp
	applymovement2 LOCALID_SINJOHRUINS_LAB_STEVEN, Common_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox SinjohRuins_Lab_Text_StevenIntroCutscene5, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, SinjohRuins_Lab_EventScript_IntroChoseYes
SinjohRuins_Lab_EventScript_IntroChoice::
	msgbox SinjohRuins_Lab_Text_StevenIntroCutsceneRefused, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, TRUE, SinjohRuins_Lab_EventScript_IntroChoseYes
	goto SinjohRuins_Lab_EventScript_IntroChoice

SinjohRuins_Lab_EventScript_IntroChoseYes::
	msgbox SinjohRuins_Lab_Text_StevenIntroCutscene6, MSGBOX_AUTOCLOSE
	setvar VAR_SINJOH_STORYLINE, 6
	setvar VAR_NOBLE_SNEASLER, 1
	setvar VAR_NOBLE_OVERQWIL, 1
	setvar VAR_NOBLE_WYRDEER, 1
	setvar VAR_NOBLE_ARCANINE, 1
	setvar VAR_NOBLE_URSALUNA, 1
	setvar VAR_NOBLE_KLEAVOR, 1
	setvar VAR_NOBLE_ELECTRODE, 1
	setvar VAR_NOBLE_TYPHLOSION, 1
	release
	end

SinjohRuins_Lab_Movement_StevenMeetPlayer:
	walk_up
	walk_up
	walk_up
	face_left
	step_end

SinjohRuins_Lab_Movement_StevenSitsDown:
	walk_down
	walk_down
	walk_down
	face_right
	step_end

SinjohRuins_Lab_Movement_PlayerGoesToTable:
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	face_left
	step_end

SinjohRuins_Lab_Movement_LinguistWalkDown:
	walk_down
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	face_down
	step_end

SinjohRuins_Lab_Movement_LinguistWalkUp:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	step_end


SinjohRuins_Lab_Text_StevenIntroCutscene1:
   	.string "STEVEN: Hm?$"

SinjohRuins_Lab_Text_StevenIntroCutscene2:
	.string "Troy: {PLAYER}!\p"
	.string "Diese Augen würde ich überall\n"
	.string "wiedererkennen.\p"
	.string "Was führt dich so weit in den\n"
	.string "Norden?\p"
	.string "…………\p"
	.string "Verstehe, die Kimono-Girls von\n"
	.string "Neu-Sinjoh haben dich geschickt,\l"
	.string "um unsere Untersuchung zu\l"
	.string "unterstützen.\p"
	.string "Dann bringe ich dich mal auf den\n"
	.string "neuesten Stand.$"

SinjohRuins_Lab_Text_StevenIntroCutscene3:
	.string "Troy: Als ich zum ersten Mal von\n"
	.string "diesen Ruinen hörte, musste ich sie\l"
	.string "mit eigenen Augen sehen.\p"
	.string "Ich habe ein Team der Devon Corp.\n"
	.string "zusammengestellt und wir sind zu\l"
	.string "einer Forschungsexpedition\l"
	.string "aufgebrochen.\p"
	.string "Wer weiß, was hier alles begraben\n"
	.string "liegt.\p"
	.string "Einiges haben wir bereits\n"
	.string "herausgefunden.$"

SinjohRuins_Lab_Text_StevenIntroCutscene4:
	.string "Linguist: Die vollständige Über-\n"
	.string "setzung der Schriftzeichen rund um\l"
	.string "die Ruinen entzieht sich mir noch,\l"
	.string "aber einige Aspekte konnte ich\l"
	.string "entschlüsseln.\p"
	.string "Es gibt 17 besondere Tafeln.\p"
	.string "Sie haben eine Bedeutung für die\n"
	.string "Ruinen, doch wir haben bisher nur\l"
	.string "eine gefunden.\p"
	.string "Die übrigen sollen von Pokémon und\n"
	.string "Trainern mit gewaltigen Kräften\l"
	.string "bewacht werden.$"

SinjohRuins_Lab_Text_StevenIntroCutscene5:
	.string "Troy: So weit die Geschichte,\n"
	.string "{PLAYER}.\p"
	.string "Die Königlichen Pokémon, die die\n"
	.string "übrigen Tafeln bewachen, sind für\l"
	.string "mein Team leider zu stark.\p"
	.string "Und ich muss hierbleiben, um die\n"
	.string "Forschung zu leiten.\p"
	.string "Aber ich glaube, du könntest es\n"
	.string "schaffen. Hilfst du uns?$"

SinjohRuins_Lab_Text_StevenIntroCutscene6:
	.string "Ausgezeichnet.\p"
	.string "Laut den Schriftzeichen befinden\n"
	.string "sich die Tafeln im Besitz Königlicher\l"
	.string "Pokémon und starker Trainer in ganz\l"
	.string "Sinjoh.\p"
	.string "Ich rufe dich auf dem Pokégear an,\n"
	.string "sobald wir Neues erfahren.\p"
	.string "Danke, {PLAYER}.$"

SinjohRuins_Lab_Text_StevenIntroCutsceneRefused:
	.string "Bist du sicher?\p"
	.string "Wer weiß, was hier alles begraben\n"
	.string "liegt.\p"
	.string "Überlegst du es dir nicht noch\n"
	.string "einmal?$"

@==========================Final plate Cutscene SCRIPTS================================================================================

SinjohRuins_Lab_SetupFinalPlateScene::
	setobjectxyperm LOCALID_SINJOHRUINS_LAB_STEVEN, 4, 7
	setobjectmovementtype LOCALID_SINJOHRUINS_LAB_STEVEN, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm LOCALID_NEWSINJOH_LAB_LINGUIST, 5, 7
	setobjectmovementtype LOCALID_NEWSINJOH_LAB_LINGUIST, MOVEMENT_TYPE_FACE_LEFT
	return

SinjohRuins_Lab_FinalPlateScene::
	lock
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp1
	waitmovement 0
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp1
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_SINJOHRUINS_LAB_STEVEN, Common_Movement_ExclamationMark
	delay 60
	turnobject LOCALID_SINJOHRUINS_LAB_STEVEN, DIR_SOUTH
	delay 30
	applymovement LOCALID_SINJOHRUINS_LAB_STEVEN, Common_Movement_WalkDown1
	turnobject LOCALID_NEWSINJOH_LAB_LINGUIST, DIR_SOUTH
	delay 30
	msgbox SinjohRuins_Lab_Text_FinalPlateScene1, MSGBOX_AUTOCLOSE
	dofieldeffectsparkle 3, 8, 0
	waitfieldeffect FLDEFF_SPARKLE
	setvar VAR_RESULT, 3
	playfanfare MUS_AWAKEN_LEGEND
	playse SE_ORB
	special DoOrbEffect
	delay 200
	special FadeOutOrbEffect
	waitstate
	setvar VAR_0x8004, 2  @ vertical pan
	setvar VAR_0x8005, 2  @ horizontal pan
	setvar VAR_0x8006, 40  @ num shakes
	setvar VAR_0x8007, 3  @ shake delay
	special ShakeCamera
	waitstate
	msgbox SinjohRuins_Lab_Text_FinalPlateScene2, MSGBOX_AUTOCLOSE
	applymovement LOCALID_PLAYER, SinjohRuins_Lab_Movement_PlayerLeaveLab
	applymovement LOCALID_SINJOHRUINS_LAB_STEVEN, SinjohRuins_Lab_Movement_StevenLeaveLab
	waitmovement 0
	waitmovement 0
	setvar VAR_SINJOH_STORYLINE, 8
	warp MAP_SINJOH_RUINS_HNS, 0
	waitstate
	end

SinjohRuins_Lab_Text_FinalPlateScene1:
	.string "Troy: {PLAYER}!\p"
	.string "Ich glaube, ich weiß, was geschehen\n"
	.string "wird, wenn wir alle 17 Tafeln\l"
	.string "zusammenbringen.\p"
	.string "Ich spüre…\l"
	.string "………………$"

SinjohRuins_Lab_Text_FinalPlateScene2:
	.string "Troy: Das muss ich mit eigenen\n"
	.string "Augen sehen!\p"
	.string "Nach draußen, {PLAYER}!$"

SinjohRuins_Lab_Movement_PlayerLeaveLab:
	walk_fast_down
	walk_fast_down
	walk_in_place_fast_down
	step_end

SinjohRuins_Lab_Movement_StevenLeaveLab:
	walk_fast_down
	walk_fast_down
	walk_in_place_fast_down
	step_end

@==========================NPC SCRIPTS================================================================================

SinjohRuins_Lab_EventScript_Steven::
	lock
	faceplayer
	buffernumberstring STR_VAR_1, VAR_PLATECOUNTER
	goto_if_ge VAR_PLATECOUNTER, 17, SinjohRuins_Lab_EventScript_StevenAfterAllPlates
	goto_if_ge VAR_PLATECOUNTER, 15, SinjohRuins_Lab_EventScript_StevenAfter15Plates
	goto_if_ge VAR_PLATECOUNTER, 12, SinjohRuins_Lab_EventScript_StevenAfter12Plates
	goto_if_ge VAR_PLATECOUNTER, 9, SinjohRuins_Lab_EventScript_StevenAfter9Plates
	goto_if_ge VAR_PLATECOUNTER, 6, SinjohRuins_Lab_EventScript_StevenAfter6Plates
	goto_if_ge VAR_PLATECOUNTER, 3, SinjohRuins_Lab_EventScript_StevenAfter3Plates
	msgbox SinjohRuins_Lab_Text_StevenFindPlates, MSGBOX_AUTOCLOSE
	release
	end

SinjohRuins_Lab_EventScript_StevenAfter3Plates::
	msgbox SinjohRuins_Lab_Text_StevenFindPlates3, MSGBOX_AUTOCLOSE
	release
	end

SinjohRuins_Lab_EventScript_StevenAfter6Plates::
	msgbox SinjohRuins_Lab_Text_StevenFindPlates3, MSGBOX_AUTOCLOSE
	release
	end

SinjohRuins_Lab_EventScript_StevenAfter9Plates::
	msgbox SinjohRuins_Lab_Text_StevenFindPlates9, MSGBOX_AUTOCLOSE
	release
	end

SinjohRuins_Lab_EventScript_StevenAfter12Plates::
	msgbox SinjohRuins_Lab_Text_StevenFindPlates9, MSGBOX_AUTOCLOSE
	release
	end

SinjohRuins_Lab_EventScript_StevenAfter15Plates::
	msgbox SinjohRuins_Lab_Text_StevenFindPlates9, MSGBOX_AUTOCLOSE
	release
	end

SinjohRuins_Lab_EventScript_StevenAfterAllPlates::
	msgbox SinjohRuins_Lab_Text_StevenAfterAll, MSGBOX_AUTOCLOSE
	release
	end

SinjohRuins_Lab_Text_StevenFindPlates:
	.string "Troy: Ah, {PLAYER}.\p"
	.string "Schon {STR_VAR_1} Tafeln.\n"
	.string "Gar nicht übel.\p"
	.string "Ich muss zugeben, ich bin gespannt,\n"
	.string "was geschieht, wenn alle beisammen\l"
	.string "sind.\p"
	.string "Nun, mal sehen, was du noch findest.$"

SinjohRuins_Lab_Text_StevenFindPlates3:
	.string "Troy: Ah, {PLAYER}.\p"
	.string "Schon {STR_VAR_1} Tafeln.\n"
	.string "Gar nicht übel.\p"
	.string "Hast du dir die Kammer schon\n"
	.string "angesehen?\l"
	.string "Das alles ist höchst rätselhaft.$"

SinjohRuins_Lab_Text_StevenFindPlates9:
	.string "Troy: Ah, {PLAYER}.\p"
	.string "Schon {STR_VAR_1} Tafeln.\n"
	.string "Du machst große Fortschritte.\p"
	.string "Die Kammern, die sich geöffnet\n"
	.string "haben, ähneln auffällig einer Reihe\l"
	.string "von Kammern in der Hoenn-Region.\p"
	.string "Auch dort war jede die Heimat eines\n"
	.string "legendären Pokémon.\p"
	.string "Doch in Hoenn wurden überhaupt nur\n"
	.string "3 entdeckt.\p"
	.string "Und hier gibt es mindestens 6.\p"
	.string "Wer weiß, was wir als Nächstes\n"
	.string "finden.$"

SinjohRuins_Lab_Text_StevenAfterAll:
	.string "Troy: {PLAYER}!\p"
	.string "Diese Expedition war das Erlebnis\n"
	.string "meines Lebens.\p"
	.string "Seit ich von diesen Ruinen gehört\n"
	.string "habe, hatte ich dieses Gefühl.\p"
	.string "Ich dachte, wir würden etwas\n"
	.string "Unglaubliches entdecken.\p"
	.string "Und meine Vorahnungen bewahrheiten\n"
	.string "sich meistens.\p"
	.string "Danke für all deine Hilfe, Champ.\p"
	.string "Wohin wird es dich als Nächstes\n"
	.string "verschlagen?\p"
	.string "Ich hoffe, wir sehen uns irgendwo\n"
	.string "wieder.$"

SinjohRuins_Lab_EventScript_Geologist::
	goto_if_ge VAR_SINJOH_STORYLINE, 13, SinjohRuins_Lab_EventScript_GeologistAfterEvent
	goto_if_ge VAR_SINJOH_STORYLINE, 9, SinjohRuins_Lab_EventScript_GeologistDuringEvent
	msgbox SinjohRuins_Lab_Text_Geologist MSGBOX_NPC
	end
SinjohRuins_Lab_EventScript_GeologistDuringEvent::
	msgbox SinjohRuins_Lab_Text_GeologistDuring, MSGBOX_NPC
	end
SinjohRuins_Lab_EventScript_GeologistAfterEvent::
	msgbox SinjohRuins_Lab_Text_GeologistAfter, MSGBOX_NPC
	end

SinjohRuins_Lab_Text_Geologist:
	.string "Das Bodenradar zeigt 6 unterirdische\n"
	.string "Kammern in diesem Tal.\p"
	.string "5 davon scheinen näher an der\n"
	.string "Oberfläche zu liegen, eine ist noch\l"
	.string "tiefer vergraben.$"
SinjohRuins_Lab_Text_GeologistDuring:
	.string "Die ganze Zeit habe ich meine Geräte\n"
	.string "nach unten gerichtet, um den\l"
	.string "Untergrund abzubilden.\p"
	.string "Dabei hätte ich sie eindeutig nach\n"
	.string "oben richten sollen!$"
SinjohRuins_Lab_Text_GeologistAfter:
	.string "Diese Tafeln standen mit dem\n"
	.string "mächtigsten Pokémon in Verbindung??\p"
	.string "Ich wünschte, ich hätte mehr Zeit,\n"
	.string "sie zu erforschen.$"

SinjohRuins_Lab_EventScript_Linguist::
	goto_if_ge VAR_SINJOH_STORYLINE, 13, SinjohRuins_Lab_EventScript_LinguistAfterEvent
	goto_if_ge VAR_SINJOH_STORYLINE, 9, SinjohRuins_Lab_EventScript_LinguistDuringEvent
	msgbox SinjohRuins_Lab_Text_Linguist MSGBOX_NPC
	end
SinjohRuins_Lab_EventScript_LinguistDuringEvent::
	msgbox SinjohRuins_Lab_Text_LinguistDuring, MSGBOX_NPC
	end
SinjohRuins_Lab_EventScript_LinguistAfterEvent::
	msgbox SinjohRuins_Lab_Text_LinguistAfter, MSGBOX_NPC
	end

SinjohRuins_Lab_Text_Linguist:
	.string "Uff…\n"
	.string "So viele Schriftzeichen zu\l"
	.string "übersetzen…\p"
	.string "In der Hoenn-Region gibt es nichts\n"
	.string "Vergleichbares.$"
SinjohRuins_Lab_Text_LinguistDuring:
	.string "Stell dir meine Überraschung vor,\n"
	.string "als ich das Schriftzeichen übersetzt\l"
	.string "habe!\p"
	.string "Ich habe es drei- und vierfach\n"
	.string "geprüft, bevor ich es Troy gesagt\l"
	.string "habe!\p"
	.string "Ich meine, wirklich - der Gott der\n"
	.string "Pokémon?\p"
	.string "Es ist unglaublich.$"
SinjohRuins_Lab_Text_LinguistAfter:
	.string "Diese Expedition war eine wahre\n"
	.string "Freude, {PLAYER}.\p"
	.string "Danke, dass du die ganze Feldarbeit\n"
	.string "übernommen hast.$"

SinjohRuins_Lab_EventScript_Archaeologist::
	goto_if_ge VAR_SINJOH_STORYLINE, 13, SinjohRuins_Lab_EventScript_ArchaeologistAfterEvent
	goto_if_ge VAR_SINJOH_STORYLINE, 9, SinjohRuins_Lab_EventScript_ArchaeologistDuringEvent
	msgbox SinjohRuins_Lab_Text_Archaeologist MSGBOX_NPC
	end
SinjohRuins_Lab_EventScript_ArchaeologistDuringEvent::
	msgbox SinjohRuins_Lab_Text_ArchaeologistDuring, MSGBOX_NPC
	end
SinjohRuins_Lab_EventScript_ArchaeologistAfterEvent::
	msgbox SinjohRuins_Lab_Text_ArchaeologistAfter, MSGBOX_NPC
	end

SinjohRuins_Lab_Text_Archaeologist:
	.string "Die Existenz einer Zivilisation in\n"
	.string "dieser Gegend verändert unser\l"
	.string "gesamtes Geschichtsverständnis.\p"
	.string "Viele der gefundenen Artefakte sind\n"
	.string "über tausend Jahre alt.\p"
	.string "Die Datierung passt zu Artefakten\n"
	.string "aus der Sinnoh-Region.\p"
	.string "Allerdings… die Flöte, die du\n"
	.string "gefunden hast, scheint weit älter\l"
	.string "zu sein.$"
SinjohRuins_Lab_Text_ArchaeologistDuring:
	.string "Diese Tafeln…\n"
	.string "Die Verbindung zur Sinnoh-Region…\l"
	.string "Diese Flöte…\l"
	.string "Langsam ergibt alles einen Sinn.$"
SinjohRuins_Lab_Text_ArchaeologistAfter:
	.string "Der historische Wert dessen, was du\n"
	.string "uns hier freizulegen geholfen hast,\l"
	.string "ist gar nicht hoch genug\l"
	.string "einzuschätzen, {PLAYER}.\p"
	.string "Wirklich, vielen Dank.$"

SinjohRuins_Lab_EventScript_Growlithe_Hisui::
    lock
	faceplayer
	playmoncry SPECIES_GROWLITHE, 0
	msgbox SinjohRuins_Lab_Text_Growlithe_Cry, MSGBOX_DEFAULT
	waitmoncry
    closemessage
	release
	end

SinjohRuins_Lab_Text_Growlithe_Cry:
    .string "Growh owh!!$"

SinjohRuins_Lab_EventScript_GrowlithePokeball::
    msgbox SinjohRuins_Lab_Text_GrowlitheBall MSGBOX_SIGN
	end

SinjohRuins_Lab_Text_GrowlitheBall:
	.string "Das scheint der Ball von Fukano zu\n"
	.string "sein… Besser nicht anfassen.$"

SinjohRuins_Lab_EventScript_Biologist::
	goto_if_ge VAR_SINJOH_STORYLINE, 13, SinjohRuins_Lab_EventScript_BiologistAfterEvent
	goto_if_ge VAR_SINJOH_STORYLINE, 9, SinjohRuins_Lab_EventScript_BiologistDuringEvent
	msgbox SinjohRuins_Lab_Text_Biologist MSGBOX_NPC
	end
SinjohRuins_Lab_EventScript_BiologistDuringEvent::
	msgbox SinjohRuins_Lab_Text_BiologistDuring, MSGBOX_NPC
	end
SinjohRuins_Lab_EventScript_BiologistAfterEvent::
	msgbox SinjohRuins_Lab_Text_BiologistAfter, MSGBOX_NPC
	end

SinjohRuins_Lab_Text_Biologist:
	.string "Sieh dir dieses wundervolle Exemplar\n"
	.string "an!\p"
	.string "Diese Fukano-Art gleicht keiner\n"
	.string "anderen auf der ganzen Welt.\p"
	.string "Die DNS-Analyse zeigt, dass sie\n"
	.string "einen gemeinsamen Vorfahren mit den\l"
	.string "Fukano anderer Regionen teilt.\p"
	.string "Doch Wesen und Typ unterscheiden\n"
	.string "sich deutlich.\p"
	.string "Beschreibungen von Fukano in alten\n"
	.string "Sinnoh-Aufzeichnungen scheinen zu\l"
	.string "passen.\p"
	.string "Vielleicht bewohnte diese Art einst\n"
	.string "ein viel größeres Gebiet, das sich\l"
	.string "nordwärts durch das alte Sinnoh\l"
	.string "erstreckte.$"
SinjohRuins_Lab_Text_BiologistDuring:
	.string "Wenn das Wesen am oberen Ende der\n"
	.string "Treppe wirklich der Gott aller\l"
	.string "Pokémon ist - heißt das, es ist der\l"
	.string "erste gemeinsame Vorfahre?$"
SinjohRuins_Lab_Text_BiologistAfter:
	.string "Auf dieser Expedition konnte ich so\n"
	.string "viele Daten über Regionalformen und\l"
	.string "getrennte Entwicklungslinien\l"
	.string "sammeln. Danke, {PLAYER}.$"

SinjohRuins_Lab_EventScript_Hiker::
	goto_if_ge VAR_SINJOH_STORYLINE, 9, SinjohRuins_Lab_EventScript_HikerDuringAfter
	msgbox SinjohRuins_Lab_Text_Hiker MSGBOX_NPC
	end
SinjohRuins_Lab_EventScript_HikerDuringAfter::
	msgbox SinjohRuins_Lab_Text_HikerDuringAfter, MSGBOX_NPC
	end
SinjohRuins_Lab_Text_Hiker:
	.string "Seit zehn Jahren durchstreife ich\n"
	.string "diese Wildnis.\p"
	.string "Nein, es sind wohl schon zwanzig.\p"
	.string "Bis ich eines Tages diese großen\n"
	.string "Steinsäulen und den unheimlichen\l"
	.string "Tempel fand.\p"
	.string "Das sind die Sinjoh-Ruinen.\n"
	.string "So nennt man sie jedenfalls.\p"
	.string "Vom Dorf wusste ich damals nichts.\p"
	.string "Ich habe nur ein paar Kumpels davon\n"
	.string "erzählt. Aber so etwas spricht sich\l"
	.string "schnell herum.\p"
	.string "Ich hätte nie gedacht, dass es der\n"
	.string "Gegend so viel Aufmerksamkeit\l"
	.string "beschert.\p"
	.string "Irgendwie ein komisches Gefühl.\n"
	.string "Weißt du?$"
SinjohRuins_Lab_Text_HikerDuringAfter:
	.string "Sag es niemandem, {PLAYER},\n"
	.string "aber ich habe den Tempel auf dem\l"
	.string "Berggipfel schon gesehen, als ich\l"
	.string "diesen Ort entdeckt habe.\p"
	.string "Ich habe es für mich behalten.\p"
	.string "Ich habe schon genug über diese\n"
	.string "Ruinen ausgeplaudert.\p"
	.string "Immerhin scheint ja alles gut\n"
	.string "ausgegangen zu sein.$"

@ENVIRONMENT
SinjohRuins_Lab_EventScript_Notes1::
	msgbox SinjohRuins_Lab_Text_Note1 MSGBOX_SIGN
	end
SinjohRuins_Lab_EventScript_Notes2::
	msgbox SinjohRuins_Lab_Text_Note2 MSGBOX_SIGN
	end
SinjohRuins_Lab_EventScript_Notes3::
	msgbox SinjohRuins_Lab_Text_Note3 MSGBOX_SIGN
	end
SinjohRuins_Lab_EventScript_Notes4::
	msgbox SinjohRuins_Lab_Text_Note4 MSGBOX_SIGN
	end
SinjohRuins_Lab_EventScript_Notes5::
	msgbox SinjohRuins_Lab_Text_Note5 MSGBOX_SIGN
	end
SinjohRuins_Lab_EventScript_Notes6::
	msgbox SinjohRuins_Lab_Text_Note6 MSGBOX_SIGN
	end
SinjohRuins_Lab_EventScript_Notes7::
	msgbox SinjohRuins_Lab_Text_Note7 MSGBOX_SIGN
	end
SinjohRuins_Lab_EventScript_Notes8::
	msgbox SinjohRuins_Lab_Text_Note8 MSGBOX_SIGN
	end

SinjohRuins_Lab_Text_Note1:
	.string "Forschungslog 1: 3. Mai 1975\p"
	.string "Wir haben den Standort der Ruinen\n"
	.string "erreicht.\p"
	.string "Die beißende Kälte des Silberbergs\n"
	.string "ist bis hier unten zu spüren…\p"
	.string "Bald wird das Haupt-Grabungsteam\n"
	.string "den Berg durchbrochen haben…\l"
	.string "Ich kann es kaum erwarten, zu sehen,\l"
	.string "was unter unseren Füßen auf uns\l"
	.string "wartet!$"

SinjohRuins_Lab_Text_Note2:
	.string "Forschungslog 2: 10. Mai 1975\p"
	.string "Eine Woche Graben hat rein gar\n"
	.string "nichts gebracht.\p"
	.string "Das Eis hier ist unfassbar dick und\n"
	.string "der Fels zerstört unsere Ausrüstung\l"
	.string "vollständig.\p"
	.string "Nicht einmal Machomei konnte ihm\n"
	.string "etwas anhaben.\p"
	.string "Was ist das für ein Ort?\p"
	.string "Wir müssen es herausfinden.$"

SinjohRuins_Lab_Text_Note3:
	.string "Forschungslog 3: 14. Mai 1975\p"
	.string "Man kommt im Leben nicht voran,\n"
	.string "wenn man nur herumsteht und nichts\l"
	.string "tut.\p"
	.string "Ich bin nur ein Arbeiter.\p"
	.string "Aber ich hatte eine Idee, wie wir\n"
	.string "das Eis durchbrechen könnten.\p"
	.string "Oder besser gesagt: durchschmelzen.\p"
	.string "Wir brauchen Feuer-Pokémon, und\n"
	.string "zwar jede Menge.\p"
	.string "Aber wie bekommen wir sie den weiten\n"
	.string "Weg aus Sinnoh hierher?$"

SinjohRuins_Lab_Text_Note4:
	.string "Forschungslog 4: 21. Mai 1975\p"
	.string "Wir waren fleißig.\p"
	.string "Meine Idee, durch das Eis zu kommen,\n"
	.string "hat funktioniert. Nur haben wir die\l"
	.string "Feuer-Pokémon nicht von zu Hause\l"
	.string "geholt.\p"
	.string "Der Chef bestand darauf, sie vor Ort\n"
	.string "zu beschaffen.\p"
	.string "Wir fanden eine heiße Quelle bei\n"
	.string "einem Dorf in der Nähe…\p"
	.string "Und wir nahmen, was wir brauchten…\p"
	.string "Ich bin nicht stolz darauf. Aber\n"
	.string "Fortschritt verlangt manchmal Opfer.\p"
	.string "Nun denn, das Eis ist weg.\p"
	.string "Es gibt 6 Kammern und einen\n"
	.string "versiegelten Tempel in der Mitte.\p"
	.string "Die Architektur des Hauptbauwerks\n"
	.string "deutet auf das alte Celestica-Volk\l"
	.string "hin…\p"
	.string "Unsere Vorfahren. Bevor sie gen\n"
	.string "Norden zogen.\p"
	.string "Der Chef will den Tempel so schnell\n"
	.string "wie möglich offen sehen…$"

SinjohRuins_Lab_Text_Note5:
	.string "Forschungslog 5: 2. Juni 1975\p"
	.string "Wir haben ihn geöffnet…\p"
	.string "Ich dachte, ich wäre überglücklich…\p"
	.string "Doch wir haben gute Männer in der\n"
	.string "Energieentladung verloren, die aus\l"
	.string "dem Tempel schoss.\p"
	.string "Ganz zu schweigen von den Pokémon,\n"
	.string "die uns beim Öffnen geholfen haben.\l"
	.string "Mögen sie in Frieden ruhen…\p"
	.string "………………\p"
	.string "Wie dem auch sei.\p"
	.string "Der Tempel ist offen, doch wir\n"
	.string "stehen nur vor neuen Fragen.\p"
	.string "Kein legendäres Pokémon darin.\n"
	.string "Kein Schatz.\p"
	.string "Unsere Vorräte gehen zur Neige und\n"
	.string "wir haben nichts für unsere Mühen\l"
	.string "vorzuweisen…$"

SinjohRuins_Lab_Text_Note6:
	.string "Forschungslog 6: 10. Juni 1975\p"
	.string "Die Expedition ist beendet.\n"
	.string "Die übrigen Männer packen zusammen.\p"
	.string "Aber ich kann nicht.\p"
	.string "Ich kann diese Mission nicht\n"
	.string "aufgeben. Nicht nach allem, was wir\l"
	.string "verloren haben.\p"
	.string "Ich werde hierbleiben.$"

SinjohRuins_Lab_Text_Note7:
	.string "Forschungslog 7: 10. September 1975\p"
	.string "Es ist Monate her, seit wir hier\n"
	.string "ankamen. Seit ich hier ankam.\p"
	.string "Die übrigen Männer sind fort.\p"
	.string "Jetzt sind nur noch ich und die\n"
	.string "Pokémon hier, die wir als Helfer\l"
	.string "für die Arbeiten gefangen haben.\p"
	.string "Ich trainiere sie, damit sie\n"
	.string "stärker werden.\p"
	.string "Mein Tornupto allen voran.\p"
	.string "Wir müssen herausfinden, was unter\n"
	.string "dem Tempel liegt.$"

SinjohRuins_Lab_Text_Note8:
	.string "Forschungslog 8: 15. September 1975\p"
	.string "Gescheitert.\p"
	.string "………………\p"
	.string "Meine Pokémon…\p"
	.string "Gemeinsam konnten alle 6 meiner\n"
	.string "Pokémon eine Scheinwand im Tempel\l"
	.string "durchbrechen.\p"
	.string "Doch es hat dort auf uns gewartet…\p"
	.string "Etwas wie ein riesiger Titan…\p"
	.string "Die Energie, die es freisetzte, war\n"
	.string "wie beim letzten Mal.\p"
	.string "Sie wurden alle vernichtet…\p"
	.string "Und das Schlimmste: Das Ungetüm hat\n"
	.string "die Wand wieder versiegelt.\p"
	.string "Ich kann nicht nach Hause.\n"
	.string "Sie würden mich nicht mehr\l"
	.string "wiedererkennen…\p"
	.string "Dieser Ort hat mich verändert…\p"
	.string "Ich werde mit den Dorfbewohnern\n"
	.string "sprechen.\p"
	.string "Sie wissen nicht, was ich getan\n"
	.string "habe.\p"
	.string "Da die anderen Männer längst fort\n"
	.string "sind, werden sie mich für einen\l"
	.string "verirrten Wanderer halten.\p"
	.string "Für mich gibt es keinen Ort mehr\n"
	.string "außer diesem.$"

SinjohRuins_EventScript_DisplayCase::
    lock
	msgbox SinjohRuins_DisplayCase_Text MSGBOX_DEFAULT
	release
	end

SinjohRuins_DisplayCase_Text:
	.string "Eine Vitrine, ordentlich bestückt\n"
	.string "mit Proben und Artefakten!$"

SinjohRuins_EventScript_WallSign::
    lock
	msgbox SinjohRuins_WallSign_Text MSGBOX_DEFAULT
	release
	end

SinjohRuins_WallSign_Text:
	.string "Röntgen- und Drucklabor.$"


SinjohRuins_EventScript_Artifact::
   lock
   msgbox SinjohRuins_Artifact_Text MSGBOX_DEFAULT
   release
   end

SinjohRuins_Artifact_Text:
	.string "Ein Artefakt, das im Inneren der\n"
	.string "Ruinen gefunden wurde!$"


@==========================Unified other map SCRIPTS================================================================================

SinjohRuins_Lab_EventScript_NoOp::
	release
	end

SinjohRuins_Lab_Text_PlayFlute:
	.string "Die Azurflöte reagiert.\n"
	.string "Willst du auf ihr spielen?$"

SinjohRuins_Lab_Text_DropedItem:
	.string "Das Königliche {STR_VAR_1} ließ\n"
	.string "ein Item fallen…$"

SinjohRuins_Lab_Text_StevenName:
	.string "STEVEN$"

SinjohRuins_Lab_EventScript_3Plates::
	setspeaker SinjohRuins_Lab_Text_StevenName
	pokenavcall SinjohRuins_Lab_Text_StevenCall3Plates
	waitmessage
	delay 30
	return
SinjohRuins_Lab_EventScript_6Plates::
	setspeaker SinjohRuins_Lab_Text_StevenName
	pokenavcall SinjohRuins_Lab_Text_StevenCall6Plates
	waitmessage
	delay 30
	return
SinjohRuins_Lab_EventScript_9Plates::
	setspeaker SinjohRuins_Lab_Text_StevenName
	pokenavcall SinjohRuins_Lab_Text_StevenCall9Plates
	waitmessage
	delay 30
	return
SinjohRuins_Lab_EventScript_12Plates::
	setspeaker SinjohRuins_Lab_Text_StevenName
	pokenavcall SinjohRuins_Lab_Text_StevenCall12Plates
	waitmessage
	delay 30
	return
SinjohRuins_Lab_EventScript_15Plates::
	setspeaker SinjohRuins_Lab_Text_StevenName
	pokenavcall SinjohRuins_Lab_Text_StevenCall15Plates
	waitmessage
	delay 30
	return
SinjohRuins_Lab_EventScript_16Plates::
	setspeaker SinjohRuins_Lab_Text_StevenName
	pokenavcall SinjohRuins_Lab_Text_StevenCall16Plates
	waitmessage
	delay 30
	setvar VAR_SINJOH_STORYLINE, 7
	return

SinjohRuins_Lab_Text_StevenCall3Plates:
	.string "Troy: {PLAYER}.\p"
	.string "Wir haben gerade eine Erschütterung\n"
	.string "an den Ruinen gespürt.\p"
	.string "Keine Sorge, es geht allen gut.\p"
	.string "Es ist höchst faszinierend: Eine der\n"
	.string "unterirdischen Kammern unter den\l"
	.string "Ruinen ist aufgebrochen.\p"
	.string "Die Zeichen darin erinnern mich an\n"
	.string "etwas aus Hoenn.\p"
	.string "Komm vorbei und sieh es dir an,\n"
	.string "wenn du kannst.$"

SinjohRuins_Lab_Text_StevenCall6Plates:
	.string "Troy: {PLAYER}.\p"
	.string "Wie läuft die Suche?\p"
	.string "Wir hatten wieder eine Erschütterung.\n"
	.string "Diesmal hat sich eine zweite Kammer\l"
	.string "geöffnet.\p"
	.string "Ich habe unseren Geologen gebeten,\n"
	.string "seine Instrumente bereitzuhalten,\l"
	.string "falls es erneut passiert.\p"
	.string "Je tiefer wir graben… desto mehr\n"
	.string "Fragen tun sich auf.$"

SinjohRuins_Lab_Text_StevenCall9Plates:
	.string "Troy: {PLAYER}.\p"
	.string "Wieder eine Erschütterung hier an\n"
	.string "den Ruinen.\p"
	.string "Die Daten zeichnen ein faszinierendes\n"
	.string "Bild.\p"
	.string "Es war gar kein Erdbeben.\p"
	.string "Eine Art Energie hat sich im\n"
	.string "Untergrund aufgestaut und den Fels\l"
	.string "von innen aufgesprengt.\p"
	.string "Was das verursachen könnte…\n"
	.string "Ich weiß es ehrlich nicht.$"

SinjohRuins_Lab_Text_StevenCall12Plates:
	.string "Troy: {PLAYER}.\p"
	.string "Wieder eine Erschütterung. Wieder\n"
	.string "öffnet sich eine Kammer.\p"
	.string "Wir können noch immer kein Muster\n"
	.string "hinter den Zeitpunkten erkennen.\p"
	.string "Sag mal, {PLAYER}… du steckst\n"
	.string "nicht etwa hinter alledem, oder?\p"
	.string "Nein, das kann nicht sein.$"

SinjohRuins_Lab_Text_StevenCall15Plates:
	.string "Troy: {PLAYER}.\p"
	.string "Hast du gerade eine weitere Tafel\n"
	.string "gefunden?\p"
	.string "………………\p"
	.string "Natürlich.\p"
	.string "Die legendären Pokémon, die in\n"
	.string "diesen Ruinen ruhen… sie reagieren\l"
	.string "auf dich, nicht wahr?\p"
	.string "Als wollten sie gefunden werden.\p"
	.string "Meine Vorahnungen bewahrheiten sich\n"
	.string "meistens. Ich hätte nicht an dir\l"
	.string "zweifeln sollen.$"

SinjohRuins_Lab_Text_StevenCall16Plates:
	.string "Troy: {PLAYER}.\p"
	.string "Wir sind jetzt ganz nah dran.\n"
	.string "Ich kann es spüren.\p"
	.string "………………\p"
	.string "Das solltest du dir mit eigenen\n"
	.string "Augen ansehen.$"


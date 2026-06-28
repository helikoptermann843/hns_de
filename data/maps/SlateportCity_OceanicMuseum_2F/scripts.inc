SlateportCity_OceanicMuseum_2F_MapScripts::
	.byte 0

SlateportCity_OceanicMuseum_2F_EventScript_CaptStern::
	lock
	faceplayer
	msgbox SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_AQUA, TRUE
	addobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter
	waitmovement 0
	addobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter
	waitmovement 0
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach
	waitmovement 0
	call_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
	call_if_eq VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
	msgbox SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts, MSGBOX_DEFAULT
	call_if_ne VAR_FACING, DIR_EAST, SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou, MSGBOX_DEFAULT
	msgbox SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
	waitmovement 0
	call_if_eq VAR_FACING, DIR_SOUTH, SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth
	call_if_eq VAR_FACING, DIR_WEST, SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat
	msgbox SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
	waitmovement 0
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
	waitmovement 0
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1, Common_Movement_WalkInPlaceFasterDown
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_2F_Text_MeddlingKid, MSGBOX_DEFAULT
	closemessage
	delay 35
	addobject LOCALID_OCEANIC_MUSEUM_2F_ARCHIE
	applymovement LOCALID_OCEANIC_MUSEUM_2F_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter
	applymovement LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_OCEANIC_MUSEUM_2F_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWarning, MSGBOX_DEFAULT
	closemessage
	savebgm MUS_DUMMY
	fadedefaultbgm
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_OCEANIC_MUSEUM_2F_ARCHIE
	removeobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_1
	removeobject LOCALID_OCEANIC_MUSEUM_2F_GRUNT_2
	fadescreen FADE_FROM_BLACK
	delay 30
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs, MSGBOX_DEFAULT
	setvar VAR_0x8004, ITEM_DEVON_PARTS
	call Common_EventScript_PlayerHandedOverTheItem
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	callnative UpdateFollowingPokemon
	removeobject LOCALID_OCEANIC_MUSEUM_2F_CAPT_STERN
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
	call_if_eq VAR_REGISTER_BIRCH_STATE, 0, SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch
	setflag FLAG_DELIVERED_DEVON_GOODS
	clearflag FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
	fadescreen FADE_FROM_BLACK
	release
	end

SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch::
	setvar VAR_REGISTER_BIRCH_STATE, 1
	return

SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts::
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts::
	applymovement LOCALID_OCEANIC_MUSEUM_2F_CAPT_STERN, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth::
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
	waitmovement 0
	return

SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest::
	applymovement LOCALID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest
	waitmovement 0
	return

SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth:
	walk_left
	walk_down
	walk_in_place_faster_left
	step_end

SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest:
	walk_up
	walk_left
	walk_left
	walk_down
	walk_in_place_faster_left
	step_end

SlateportCity_OceanicMuseum_2F_Movement_Unused:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	delay_8
	step_end

SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer:
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle:
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter:
	walk_down
	walk_right
	walk_in_place_faster_down
	step_end

SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated:
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end

SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter:
	walk_down
	step_end

SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_8
	walk_fast_down
	walk_in_place_faster_up
	step_end

SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1::
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2::
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment::
	msgbox SlateportCity_OceanicMuseum_2F_Text_PressureExperiment, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_HoennModel::
	msgbox SlateportCity_OceanicMuseum_2F_Text_HoennModel, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay::
	msgbox SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay::
	msgbox SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica::
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica::
	msgbox SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica::
	msgbox SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica::
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica, MSGBOX_SIGN
	end

SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1::
	msgbox SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2::
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum, MSGBOX_NPC
	end

SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3::
	lock
	faceplayer
	msgbox SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts:
	.string "Ja? Wenn du BRIGG suchst… Der\n"
	.string "bin ich.\p"
	.string "Ah! Das müssen die Stücke sein, die\l"
	.string "ich\n"
	.string "bei MR. TRUMM von DEVON bestellt habe.\p"
	.string "\p"
	.string "Danke schön! Das ist großartig!\n"
	.string "Nun können wir unsere Expedition\l"
	.string "vorbereiten.$"

SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts:
	.string "Hähähähä! Wartet! Das ist doch viel zu\n"
	.string "schwer für euch! Wir nehmen das an\l"
	.string "uns!$"

SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou:
	.string "KAPT. BRIGG: W… Was?\n"
	.string "Wer seid ihr?$"

SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua:
	.string "Wir sind TEAM AQUA!\p"
	.string "Unser BOSS will diese Dinge haben!\n"
	.string "Also hört auf zu labern und lasst die\l"
	.string "Teile rüberwachsen!$"

SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat:
	.string "Oooaaah! Geschlagen von einem KIND!$"

SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious:
	.string "Oh, Mann! Was für ein Desaster…\n"
	.string "Der BOSS wird verdammt wütend sein…$"

SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis:
	.string "Pah, du Waschlappen!\n"
	.string "Ich werde das Ding schon schaukeln!$"

SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat:
	.string "Was?!? Ich habe auch verloren?!?$"

SlateportCity_OceanicMuseum_2F_Text_MeddlingKid:
	.string "Und nun? Wenn wir die Stücke nicht\n"
	.string "bekommen, können wir uns auf etwas\l"
	.string "gefasst machen!\p"
	.string "Argh, ich hatte nicht damit gerechnet,\n"
	.string "dass ein nervendes Kind meine Nerven\l"
	.string "nervt.$"

SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong:
	.string "Ich bin gekommen, um zu sehen, warum\l"
	.string "ihr\n"
	.string "so lange braucht. Und was sehe ich?\p"
	.string "Ihr\l"
	.string "Idioten lasst euch von einem kleinen\l"
	.string "Kind die Suppe versalzen!$"

SlateportCity_OceanicMuseum_2F_Text_ArchieWarning:
	.string "Wir sind TEAM AQUA und lieben\n"
	.string "das Meer!\p"
	.string "Und ich bin TEAM AQUAs BOSS,\n"
	.string "ADRIAN!\p"
	.string "Wieso mischst du dich in unsere\n"
	.string "Angelegenheiten ein?\p"
	.string "Nein… Das kann nicht sein!\n"
	.string "Du bist doch nicht von TEAM MAGMA?\p"
	.string "Warte mal, das stimmt doch einfach\n"
	.string "nicht! Du bist doch gar nicht danach\l"
	.string "angezogen!\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "POKéMON, Menschen - alles Leben\n"
	.string "basiert auf den Kräften des Meeres.\p"
	.string "Daher setzt TEAM AQUA sich für die\n"
	.string "Ausweitung des Meeres ein.\p"
	.string "Meinst du nicht auch, dass wir uns\n"
	.string "eine\n"
	.string "großartige Aufgabe gestellt haben?\p"
	.string "Mhm…\n"
	.string "Du bist wahrscheinlich noch zu klein.\n"
	.string "\p"
	.string "Du kannst unsere Ideale einfach noch\n"
	.string "nicht verstehen.\p"
	.string "Aber: Wenn du dich jemals wieder gegen\n"
	.string "uns stellst, wirst du die Konsequenzen\l"
	.string "zu spüren bekommen!\p"
	.string "Vergiss das nicht!$"

SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs:
	.string "KAPT. BRIGG: Du bist…\n"
	.string "Aah, du bist {PLAYER}{KUN}…\p"
	.string "Wow, das war eine kritische Situation!\n"
	.string "Danke, dass du uns gerettet hast!\p"
	.string "Oh, fast hätte ich vergessen, dass du\n"
	.string "uns die Teile von DEVON gebracht hast!$"

SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo:
	.string "KAPT. BRIGG: Hoppla!\n"
	.string "Wir dürfen keine Zeit mehr verlieren!\n"
	.string "\p"
	.string "Wir müssen so schnell wie möglich zur\n"
	.string "Expedition zum Meeresgrund\l"
	.string "aufbrechen.\p"
	.string "Danke! Und entschuldige mich nun!\p"
	.string "Du kannst dir hier ruhig alles in Ruhe\n"
	.string "anschauen, wenn du magst.$"

SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip:
	.string "Ich habe hier ein Schiffsmodell\n"
	.string "gesehen.\p"
	.string "Es erinnert mich an das SCHIFFSWRACK\n"
	.string "in der Nähe von FAUSTAUHAVEN…$"

SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum:
	.string "Es ist strikt verboten, im MUSEUM\n"
	.string "zu rennen!$"

SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine:
	.string "Wow, das U-Boot ist der helle\n"
	.string "Wahnsinn!\l"
	.string "Damit würde ich gerne auf Fahrt gehen!$"

SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1:
	.string "“WASSERQUALITÄT BEISPIEL 1”\n"
	.string "steht auf dem Schild.\p"
	.string "Das Meer ist grenzübergreifend, aber\n"
	.string "das Wasser scheint in jeder Region\n"
	.string "eine\l"
	.string "andere Qualität zu haben.$"

SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2:
	.string "“ WASSERQUALITÄT BEISPIEL 2”\n"
	.string "steht auf dem Schild.\p"
	.string "Anscheinend ist der Salzgehalt in\n"
	.string "jeder Region anders.$"

SlateportCity_OceanicMuseum_2F_Text_PressureExperiment:
	.string "Ein Gummiball wird größer und kleiner.\n"
	.string "\p"
	.string "“Im Meer sorgt das Gewicht des Wassers\n"
	.string "für ständigen Druck.\p"
	.string "In seichtem Wasser ist der Druck nicht\n"
	.string "sehr hoch.\p"
	.string "In extrem tiefem Wasser kann der\n"
	.string "Druck zehntausende von Tonnen inner-\l"
	.string "halb eines kleinen Bereiches\n"
	.string "betragen.”$"

SlateportCity_OceanicMuseum_2F_Text_HoennModel:
	.string "“MODELL DER HOENN-REGION”\p"
	.string "Ein Diorama der HOENN-Region.\p"
	.string "Wo liegt hier WURZELHEIM?$"

SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay:
	.string "Dies ist eine Anzeige der Meeres-\n"
	.string "strömungen.\p"
	.string "“In der Nähe des Meeresbodens sind die\n"
	.string "Strömungen abhängig von Faktoren wie\l"
	.string "Temperatur und Salzgehalt.”$"

SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay:
	.string "Dies ist eine Anzeige der Meeres-\n"
	.string "strömungen.\p"
	.string "“An der Oberfläche sind die Strömungen\n"
	.string "abhängig vom Einfluss des Windes.”$"

SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica:
	.string "“DIE FÄHRE MS TIDE”\p"
	.string "“Ein maßstabsgetreues Modell eines\n"
	.string "Schiffes unter Konstruktion in der\l"
	.string "BRIGGWERFT.”$"

SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica:
	.string "“TIEFSEE-FORSCHUNGSBOOT 1”\p"
	.string "“Ein Replikat des Hochleistungs-\n"
	.string "U-Bootes zur Erforschung des\l"
	.string "Meeresbodens.”$"

SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica:
	.string "“TAUCHBOOT”\p"
	.string "“Ein Replikat eines kompakten,\n"
	.string "unbemannten Spezial-U-Bootes zur Er-\l"
	.string "forschung des Meeresbodens.”$"

SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica:
	.string "“MS ANNE”\p"
	.string "“Ein Replikat eines Luxusliners, der\n"
	.string "um den Globus kreuzt.”$"

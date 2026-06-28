SSAqua_RoomNW_hns_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, SSAqua_RoomNW_OnTransition
	.byte 0

SSAqua_RoomNW_OnTransition::
    goto_if_ge VAR_SSAQUA_STATE, 3, SSAqua_RoomNW_SetTrainerPos
    end

SSAqua_RoomNW_SetTrainerPos::
    setobjectxyperm 2, 2, 6
    setobjectxyperm 3, 4, 3
    end

SSAqua_RoomNW_EventScript_Stanly::
    lock
    faceplayer
    msgbox SSAqua_RoomNW_Text_SailorStanlySeen, MSGBOX_DEFAULT
    trainerbattle_no_intro TRAINER_STANLY_HNS, SSAqua_RoomNW_Text_SailorStanlyBeaten
	msgbox SSAqua_RoomNW_Text_SailorStanlyAfterBattle, MSGBOX_DEFAULT
    closemessage
    fadescreenswapbuffers FADE_TO_BLACK
    delay 60
    playse SE_DOOR
    removeobject LOCALID_SSAQUA_SLEEPYSAILOR
    fadescreenswapbuffers FADE_FROM_BLACK
    setvar VAR_SSAQUA_STATE, 3
	end

SSAqua_RoomNW_EventScript_Edward::
    trainerbattle_single TRAINER_EDWARD_HNS, SSAqua_RoomNW_Text_GentlemanEdwardSeen, SSAqua_RoomNW_Text_GentlemanEdwardBeaten
	msgbox SSAqua_RoomNW_Text_GentlemanEdwardAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomNW_EventScript_Corey::
    trainerbattle_single TRAINER_COREY_HNS, SSAqua_RoomNW_Text_BurglarCoreySeen, SSAqua_RoomNW_Text_BurglarCoreyBeaten
	msgbox SSAqua_RoomNW_Text_BurglarCoreyAfterBattle, MSGBOX_AUTOCLOSE
	end


SSAqua_RoomNW_Text_SailorStanlySeen:
	.string "Ja, ich bin ein Matrose, echt!\p"
	.string "Ich habe nicht getrödelt!\p"
	.string "Die Kabine war frei, also hab\n"
	.string "ich kurz ein Nickerchen gemacht!\p"
	.string "Ach, egal! Lass uns kämpfen!$"

SSAqua_RoomNW_Text_SailorStanlyBeaten:
	.string "Sorry! Ganz meine Schuld!$"

SSAqua_RoomNW_Text_SailorStanlyAfterBattle:
	.string "Als Matrose muss ich hart arbeiten.\p"
	.string "Das ist echt anstrengend!$"

SSAqua_RoomNW_Text_GentlemanEdwardSeen:
	.string "Oh nein. Ich habe etwas\n"
	.string "sehr Wichtiges verloren.$"

SSAqua_RoomNW_Text_GentlemanEdwardBeaten:
	.string "Ich… ich kann es nicht finden…$"

SSAqua_RoomNW_Text_GentlemanEdwardAfterBattle:
	.string "Ich gebe auf. Du musst nicht\n"
	.string "weiter suchen. Vergiss es!$"

SSAqua_RoomNW_Text_BurglarCoreySeen:
	.string "Yeehaw! Glück gehabt!$"

SSAqua_RoomNW_Text_BurglarCoreyBeaten:
	.string "Wie unglücklich! Ich verliere!$"

SSAqua_RoomNW_Text_BurglarCoreyAfterBattle:
	.string "Ich habe hier eine hübsche Münze\n"
	.string "gefunden. Jemand muss sie\l"
	.string "verloren haben…$"

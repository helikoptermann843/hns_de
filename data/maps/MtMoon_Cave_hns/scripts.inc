MtMoon_Cave_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MtMoon_Cave_MapScript_OnFrame
	map_script MAP_SCRIPT_ON_TRANSITION, MtMoon_Cave_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

MtMoon_Cave_OnTransition: 
	callnative SetTimeBasedEncounters
	end


MtMoon_Cave_MapScript_OnFrame::
	map_script_2 VAR_PEWTER_CITY_STATE, 0, MtMoon_Cave_EventScript_Silver
	map_script_2 VAR_PEWTER_CITY_STATE, 1, MtMoon_Cave_EventScript_Silver
	.2byte 0

MtMoon_Cave_EventScript_Sign::
	msgbox MtMoon_Cave_Text_Sign, MSGBOX_SIGN
	end

MtMoon_Cave_EventScript_Silver::
	lock
	playbgm MUS_HG_ENCOUNTER_RIVAL, TRUE
	playse SE_PIN
	applymovement2 LOCALID_MTMOON_SILVER, Common_Movement_ExclamationMark
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	delay 60
	applymovement2 LOCALID_MTMOON_SILVER MtMoon_Cave_Movement_WalkToPlayer
	applymovement2 OBJ_EVENT_ID_PLAYER Common_Movement_WalkRight1
	waitmovement LOCALID_MTMOON_SILVER
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox MtMoon_Cave_Text_Rival_Before, MSGBOX_DEFAULT
	goto_if_eq VAR_STARTER_MON, 0, MtMoon_Cave_EventScript_Silver_Battle_Cyndaquil
	goto_if_eq VAR_STARTER_MON, 1, MtMoon_Cave_EventScript_Silver_Battle_Totodile
	goto_if_eq VAR_STARTER_MON, 2, MtMoon_Cave_EventScript_Silver_Battle_Chikorita
	release
	end

MtMoon_Cave_EventScript_Silver_Battle_Cyndaquil::
	trainerbattle_no_intro TRAINER_RIVAL_CYNDAQUIL_6_HNS, MtMoon_Cave_Text_Rival_Win
	goto MtMoon_Cave_EventScript_SilverAfterBattle

MtMoon_Cave_EventScript_Silver_Battle_Totodile::
	trainerbattle_no_intro TRAINER_RIVAL_TOTODILE_6_HNS, MtMoon_Cave_Text_Rival_Win
	goto MtMoon_Cave_EventScript_SilverAfterBattle

MtMoon_Cave_EventScript_Silver_Battle_Chikorita::
	trainerbattle_no_intro TRAINER_RIVAL_CHIKORITA_6_HNS, MtMoon_Cave_Text_Rival_Win
	goto MtMoon_Cave_EventScript_SilverAfterBattle

MtMoon_Cave_EventScript_SilverAfterBattle::
	playbgm MUS_HG_RIVAL_EXIT, TRUE
	msgbox MtMoon_Cave_Text_Rival_After, MSGBOX_DEFAULT
	closemessage
	applymovement2 LOCALID_MTMOON_SILVER, MtMoon_Cave_Movement_SilverLeave
	waitmovement 0
	removeobject LOCALID_MTMOON_SILVER
	setflag FLAG_HIDE_MTMOON_SILVER
	clearflag FLAG_HIDE_INDIGO_PLATEAU_SILVER
	setvar VAR_PEWTER_CITY_STATE, 2
	fadedefaultbgm
	release
	end

MtMoon_Cave_Movement_WalkToPlayer:
	walk_left
	walk_left
	walk_left
	step_end

MtMoon_Cave_Movement_SilverLeave:
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	step_end

MtMoon_Cave_Text_Rival_Before:
	.string "... ... ...\p"
	.string "Es ist schon lange her, {PLAYER}.\p"
	.string "…Seit ich gegen dich verlor, mache\n"
	.string "ich mir Gedanken,\l"
	.string "was meinen Pokémon noch fehlt…\p"
	.string "Nun, wir haben eine Antwort gefunden.\p"
	.string "{PLAYER}, wir beweisen es dir!$"

MtMoon_Cave_Text_Rival_Win:
	.string "..................................\p"
	.string "Ich dachte ich hätte meine Pokémon\n"
	.string "so gut es irgendwie geht trainiert,\l"
	.string "zur perfektion…\p"
	.string "…Immer noch nicht genug…$"

MtMoon_Cave_Text_Rival_After:
	.string "... ... ...\p"
	.string "…Du hast mich fair besiegt.\p"
	.string "Das muss ich dir\n"
	.string "lassen. Wir werden uns wiedersehen.\p"
	.string "Ich werde der beste\n"
	.string "PokémonTrainer aller Zeiten\l"
	.string "sein.\p"
	.string "Und sie werden mir dabei helfen.\p"
	.string "…Hör mal, {PLAYER}.\p"
	.string "Eines Tages werde ich es dir bewei-\n"
	.string "sen. Dann besiege ich dich.$"

MtMoon_Cave_Text_Rival_Loss:
	.string "... ... ...\p"
	.string "Ich habe meine\n"
	.string "Schuld bei dir abgegolten.\p"
	.string "Mit meinen Pokémon werde ich den\n"
	.string "CHAMP besiegen\l"
	.string "und weltbester Trainer werden.$"

MtMoon_Cave_Text_Sign:
	.string "MONDBERG VORPLATZ ->$"

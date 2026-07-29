SevenIsland_TrainerTower_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_TrainerTower_OnTransition
	.byte 0

SevenIsland_TrainerTower_OnTransition::
	setvar VAR_MAP_SCENE_TRAINER_TOWER, 0
	end

SevenIsland_TrainerTower_EventScript_TrainerTowerSign::
	msgbox SevenIsland_TrainerTower_Text_TrainerTowerSign, MSGBOX_SIGN
	end

SevenIsland_TrainerTower_EventScript_TrainerTowerAheadSign::
	msgbox SevenIsland_TrainerTower_Text_TrainerTowerAhead, MSGBOX_SIGN
	end

SevenIsland_TrainerTower_Text_DarioIntro::
	.string "Ich spürte, dass du kommst!$"

SevenIsland_TrainerTower_Text_DarioDefeat::
	.string "Gib auf…$"

SevenIsland_TrainerTower_Text_DarioPostBattle::
	.string "Ich sage dir voraus, dass du\n"
	.string "viele andere Leute triffst.\p"
	.string "Ich sehe, dass du durch eine\n"
	.string "merkwürdige Kraft mit ihnen\l"
	.string "verbunden bist.$"

SevenIsland_TrainerTower_Text_RodetteIntro::
	.string "Irgendwo auf dieser Insel schlafen\n"
	.string "besondere Pokémon.$"

SevenIsland_TrainerTower_Text_RodetteDefeat::
	.string "Was für ein Trainer!$"

SevenIsland_TrainerTower_Text_RodettePostBattle::
	.string "Irgendwo auf dieser Insel schlafen\n"
	.string "besondere Pokémon.\p"
	.string "Kann es sein, dass sie auf dich\n"
	.string "warten?$"

SevenIsland_TrainerTower_Text_TrainerTowerSign::
	.string "Ob die Silph Co. schon erledigt\n"
	.string "ist?$"

SevenIsland_TrainerTower_Text_TrainerTowerAhead::
	.string "Vielen Dank für unsere Rettung!$"


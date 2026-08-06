SilphCo_6F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_6F_OnLoad
	.byte 0

SilphCo_6F_OnLoad::
	call_if_unset FLAG_SILPH_6F_DOOR, EventScript_Close6FDoor
	end

SilphCo_6F_EventScript_WorkerM2::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerM2RocketsGone
	msgbox SilphCo_6F_Text_TargetedSilphForOurMonProducts
	release
	end

SilphCo_6F_EventScript_WorkerM2RocketsGone::
	msgbox SilphCo_6F_Text_ComeWorkForSilphWhenYoureOlder
	release
	end

SilphCo_6F_EventScript_WorkerM3::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerM3RocketsGone
	msgbox SilphCo_6F_Text_RocketsTookOverBuilding
	release
	end

SilphCo_6F_EventScript_WorkerM3RocketsGone::
	msgbox SilphCo_6F_Text_BetterGetBackToWork
	release
	end

SilphCo_6F_EventScript_WorkerM1::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerM1RocketsGone
	msgbox SilphCo_6F_Text_HelpMePlease
	release
	end

SilphCo_6F_EventScript_WorkerM1RocketsGone::
	msgbox SilphCo_6F_Text_WeGotEngaged
	release
	end

SilphCo_6F_EventScript_WorkerF1::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerF1RocketsGone
	msgbox SilphCo_6F_Text_ThatManIsSuchACoward
	release
	end

SilphCo_6F_EventScript_WorkerF1RocketsGone::
	msgbox SilphCo_6F_Text_NeedsMeToLookAfterHim
	release
	end

SilphCo_6F_EventScript_WorkerF2::
	lock
	faceplayer
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerF2RocketsGone
	msgbox SilphCo_6F_Text_RocketsTryingToConquerWorld
	release
	end

SilphCo_6F_EventScript_WorkerF2RocketsGone::
	msgbox SilphCo_6F_Text_RocketsRanAwayBecauseOfYou
	release
	end

SilphCo_6F_EventScript_FloorSign::
	msgbox SilphCo_6F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_6F_EventScript_Taylor::
	trainerbattle_single TRAINER_SCIENTIST_TAYLOR, SilphCo_6F_Text_TaylorIntro, SilphCo_6F_Text_TaylorDefeat
	msgbox SilphCo_6F_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_6F_EventScript_Grunt1::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_30, SilphCo_6F_Text_Grunt1Intro, SilphCo_6F_Text_Grunt1Defeat
	msgbox SilphCo_6F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_6F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_31, SilphCo_6F_Text_Grunt2Intro, SilphCo_6F_Text_Grunt2Defeat
	msgbox SilphCo_6F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	end

SilphCo_6F_Text_RocketsTookOverBuilding::
	.string "Das Team Rocket hat die Kontrolle\n"
	.string "über das Gebäude übernommen!$"

SilphCo_6F_Text_BetterGetBackToWork::
	.string "O.K., die Arbeit ruft!\n"
	.string "Los geht’s!$"

SilphCo_6F_Text_HelpMePlease::
	.string "Oje, ojemine!\n"
	.string "Bitte hilf mir!$"

SilphCo_6F_Text_WeGotEngaged::
	.string "Wir sind verlobt!$"

SilphCo_6F_Text_ThatManIsSuchACoward::
	.string "Schau ihn dir an, den Feigling!$"

SilphCo_6F_Text_NeedsMeToLookAfterHim::
	.string "Ich glaube, ich werde ihn aus\n"
	.string "Mitleid heiraten!$"

SilphCo_6F_Text_RocketsTryingToConquerWorld::
	.string "Das Team Rocket benutzt die\n"
	.string "Pokémon bei dem Versuch, die Welt\l"
	.string "zu erobern!$"

SilphCo_6F_Text_RocketsRanAwayBecauseOfYou::
	.string "Du hast das Team Rocket in die\n"
	.string "Flucht geschlagen!$"

SilphCo_6F_Text_TargetedSilphForOurMonProducts::
	.string "Sie müssen es wegen unserer\n"
	.string "Pokémon-Produkte auf die Silph\l"
	.string "CO. abgesehen haben!$"

SilphCo_6F_Text_ComeWorkForSilphWhenYoureOlder::
	.string "Wir würden uns sehr freuen, wenn\n"
	.string "du später einmal für die\l"
	.string "Silph Co. arbeiten würdest!$"

SilphCo_6F_Text_Grunt1Intro::
	.string "Ich bin einer der vier berüchtigten\n"
	.string "Rocket-brüder!$"

SilphCo_6F_Text_Grunt1Defeat::
	.string "Nein!\n"
	.string "Ich bin raus!$"

SilphCo_6F_Text_Grunt1PostBattle::
	.string "Egal!\n"
	.string "Meine Brüder werden mich rächen!$"

SilphCo_6F_Text_TaylorIntro::
	.string "Dieser verdammte Präsident!\p"
	.string "Warum will er ausgerechnet mich\n"
	.string "nach Tiksi schicken?$"

SilphCo_6F_Text_TaylorDefeat::
	.string "Mist!$"

SilphCo_6F_Text_TaylorPostBattle::
	.string "Tiksi?\n"
	.string "Das liegt tief im Niemandsland!$"

SilphCo_6F_Text_Grunt2Intro::
	.string "Du wagst es, dich dem Team\n"
	.string "Rocket zu widersetzen?$"

SilphCo_6F_Text_Grunt2Defeat::
	.string "Du elender Verräter!$"

SilphCo_6F_Text_Grunt2PostBattle::
	.string "Wenn du ehrlich und rechtschaffen\n"
	.string "bist, bekämpfst du das Böse!$"

SilphCo_6F_Text_FloorSign::
	.string "Silph Co. Hauptsitz\n"
	.string "5 Og$"


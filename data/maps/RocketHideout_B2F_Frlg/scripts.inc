RocketHideout_B2F_Frlg_MapScripts::
	.byte 0

RocketHideout_B2F_EventScript_Grunt::
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_13, RocketHideout_B2F_Text_GruntIntro, RocketHideout_B2F_Text_GruntDefeat
	msgbox RocketHideout_B2F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B2F_Text_GruntIntro::
	.string "Der Boss sagt, das Silph Scope\n"
	.string "macht Geister sichtbar!$"

RocketHideout_B2F_Text_GruntDefeat::
	.string "Stopp!\n"
	.string "Ich ergebe mich!$"

RocketHideout_B2F_Text_GruntPostBattle::
	.string "Das Team Rocket-hauptquartier hat\n"
	.string "vier Untergeschosse.\p"
	.string "Du findest den Boss niemals!!!$"


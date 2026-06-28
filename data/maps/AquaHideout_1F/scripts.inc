AquaHideout_1F_MapScripts::
	.byte 0

@ The below two entrance guards give hints about what to do to progress the story
AquaHideout_1F_EventScript_HideoutEntranceGrunt1::
	lock
	faceplayer
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint1
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint1
	msgbox AquaHideout_1F_Text_OurBossIsSnatchingSomething, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_MagmaHideoutHint1::
	msgbox AquaHideout_1F_Text_WhereMightMagmaHideoutBe, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_SlateportHint1::
	msgbox AquaHideout_1F_Text_BossWentToJackASubmarine, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_HideoutEntranceGrunt2::
	lock
	faceplayer
	goto_if_set FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT, AquaHideout_1F_EventScript_SlateportHint2
	goto_if_set FLAG_RECEIVED_RED_OR_BLUE_ORB, AquaHideout_1F_EventScript_MagmaHideoutHint2
	msgbox AquaHideout_1F_Text_BossIsOnRoute122, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_MagmaHideoutHint2::
	msgbox AquaHideout_1F_Text_TeamMagmaAtMtChimney, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_SlateportHint2::
	msgbox AquaHideout_1F_Text_BossIsInSlateportCity, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_EventScript_Grunt1::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, AquaHideout_1F_Text_Grunt1Intro, AquaHideout_1F_Text_Grunt1Defeat, AquaHideout_1F_EventScript_Grunt1Defeated
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

AquaHideout_1F_EventScript_Grunt1Defeated::
	msgbox AquaHideout_1F_Text_Grunt1PostBattle, MSGBOX_DEFAULT
	release
	end

AquaHideout_1F_Text_OurBossIsSnatchingSomething:
	.string "Was? Wie? Was hast du mit TEAM AQUA zu\n"
	.string "schaffen?\p"
	.string "Unser BOSS ist nicht hier! Er ist\n"
	.string "dabei,\n"
	.string "sich etwas sehr Wichtiges unter den\l"
	.string "Nagel zu reißen.\p"
	.string "… …\n"
	.string "Wo er hin ist?\p"
	.string "Uahahaha! Du glaubst doch nicht im\n"
	.string "Ernst, dass ich dir das verrate!?!$"

AquaHideout_1F_Text_WhereMightMagmaHideoutBe:
	.string "Was? Wie?!?\n"
	.string "Du bist einer von TEAM MAGMA?\p"
	.string "Ich habe gehört, dass TEAM MAGMA\n"
	.string "versucht, ein großartiges POKéMON in\l"
	.string "seinem VERSTECK aufzuwecken.\p"
	.string "Aber wo ist das VERSTECK wohl?$"

AquaHideout_1F_Text_BossWentToJackASubmarine:
	.string "Was? Wie? Was hast du mit TEAM AQUA zu\n"
	.string "schaffen?\p"
	.string "Unser BOSS ist nicht hier! Er ist\n"
	.string "dabei,\n"
	.string "sich ein U-Boot unter den Nagel zu\l"
	.string "reißen.\p"
	.string "… …\n"
	.string "Wo er hin ist?\p"
	.string "Uahahaha! Du glaubst doch nicht im\n"
	.string "Ernst, dass ich dir das verrate!?!$"

AquaHideout_1F_Text_BossIsOnRoute122:
	.string "Was? Wie? Was hast du mit TEAM AQUA zu\n"
	.string "schaffen?\p"
	.string "Unser BOSS ist nicht hier! Er ist auf\n"
	.string "dem Weg nach PYROBERG auf der\l"
	.string "ROUTE 122!\p"
	.string "… …\n"
	.string "Warum er dorthin ist?\p"
	.string "Uahahaha! Du glaubst doch nicht im\n"
	.string "Ernst, dass ich dir das verrate!?!$"

AquaHideout_1F_Text_TeamMagmaAtMtChimney:
	.string "Was? Wie?!?\n"
	.string "Bist du einer von den TEAM MAGMA\l"
	.string "Rüpeln?\p"
	.string "Ich habe gehört, dass TEAM MAGMA am\n"
	.string "SCHLOTBERG nach einem unglaublichen\l"
	.string "POKéMON sucht.\p"
	.string "Was ist das wohl für ein POKéMON?$"

AquaHideout_1F_Text_BossIsInSlateportCity:
	.string "Was? Wie? Was hast du mit TEAM AQUA zu\n"
	.string "schaffen?\p"
	.string "Unser BOSS ist nicht hier! Er ist auf\n"
	.string "dem Weg nach GRAPHITPORT CITY!\p"
	.string "… …\n"
	.string "Warum er dorthin ist?\p"
	.string "Uahahaha! Du glaubst doch nicht im\n"
	.string "Ernst, dass ich dir das verrate!?!$"

AquaHideout_1F_Text_Grunt1Intro:
	.string "Huhuuhuhuu!\n"
	.string "Verdächtige Person gesichtet!$"

AquaHideout_1F_Text_Grunt1Defeat:
	.string "Grrr… Ich habe verloren!$"

AquaHideout_1F_Text_Grunt1PostBattle:
	.string "Nun hat das TEAM verloren, aber ich\n"
	.string "habe meinen Job gemacht…$"


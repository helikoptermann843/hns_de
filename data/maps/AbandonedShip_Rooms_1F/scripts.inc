AbandonedShip_Rooms_1F_MapScripts::
	.byte 0

AbandonedShip_Rooms_1F_EventScript_Gentleman::
	msgbox AbandonedShip_Rooms_1F_Text_TakingALookAround, MSGBOX_NPC
	end

AbandonedShip_Rooms_1F_EventScript_Demetrius::
	trainerbattle_single TRAINER_DEMETRIUS, AbandonedShip_Rooms_1F_Text_DemetriusIntro, AbandonedShip_Rooms_1F_Text_DemetriusDefeat
	msgbox AbandonedShip_Rooms_1F_Text_DemetriusPostBattle, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms_1F_EventScript_Thalia::
	trainerbattle_single TRAINER_THALIA_1, AbandonedShip_Rooms_1F_Text_ThaliaIntro, AbandonedShip_Rooms_1F_Text_ThaliaDefeat, AbandonedShip_Rooms_1F_EventScript_RegisterThalia
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_Rooms_1F_EventScript_ThaliaRematch
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaPostBattle, MSGBOX_DEFAULT
	release
	end

AbandonedShip_Rooms_1F_EventScript_RegisterThalia::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_THALIA_1
	release
	end

AbandonedShip_Rooms_1F_EventScript_ThaliaRematch::
	trainerbattle_rematch TRAINER_THALIA_1, AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro, AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat
	msgbox AbandonedShip_Rooms_1F_Text_ThaliaPostRematch, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms_1F_Text_TakingALookAround:
	.string "Schiffe dieser Art sind sehr selten,\n"
	.string "daher schaue ich mich hier gut um.\p"
	.string "Hmhm… Da sind die anderen Kabinen…$"

AbandonedShip_Rooms_1F_Text_ThaliaIntro:
	.string "Was bringt dich hierher?\n"
	.string "Das ist bestimmt die schiere Neugier.$"

AbandonedShip_Rooms_1F_Text_ThaliaDefeat:
	.string "Nicht nur neugierig, sondern auch\n"
	.string "stark…$"

AbandonedShip_Rooms_1F_Text_ThaliaPostBattle:
	.string "Der Mann nebenan…\p"
	.string "Er sagt, er habe nur einen Ausflug\n"
	.string "hierher gemacht, aber Genaues\l"
	.string "weiß ich auch nicht…$"

AbandonedShip_Rooms_1F_Text_ThaliaRegister:
	.string "Du bist so ein starker TRAINER!\n"
	.string "Ich werde dich zur Erinnerung im\l"
	.string "POKéNAV eintragen.$"

AbandonedShip_Rooms_1F_Text_ThaliaRematchIntro:
	.string "Was bringt dich hierher?\n"
	.string "Das ist bestimmt die schiere Neugier.$"

AbandonedShip_Rooms_1F_Text_ThaliaRematchDefeat:
	.string "Bist du nicht ein bisschen zu stark?$"

AbandonedShip_Rooms_1F_Text_ThaliaPostRematch:
	.string "Ich bin sicher, der Mann hat was vor!\n"
	.string "Der benimmt sich ganz eigenartig!$"

AbandonedShip_Rooms_1F_Text_DemetriusIntro:
	.string "Waaaah! Ich wurde entdeckt! Häh…$"

AbandonedShip_Rooms_1F_Text_DemetriusDefeat:
	.string "Oh, du bist ja gar nicht meine Mama!$"

AbandonedShip_Rooms_1F_Text_DemetriusPostBattle:
	.string "Ich habe mich mit meiner Mama gezankt\n"
	.string "und verstecke mich jetzt.\l"
	.string "Verrat mich nicht!$"


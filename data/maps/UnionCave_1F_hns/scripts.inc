UnionCave_1F_hns_MapScripts::
	.byte 0


UnionCave_1F_Trigger_Monview::
	special SpawnCameraObject
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight1
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight1
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight1
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkRight1
	waitmovement 0
	message Route29_Text_PressAorB
	waitbuttonpress
	closemessage
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft1
	waitmovement 0
	applymovement2 OBJ_EVENT_ID_CAMERA, Common_Movement_WalkLeft1
	waitmovement 0
	special RemoveCameraObject
	applymovement2 OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft1
	waitmovement 0
	end


UnionCave_1F_EventScript_HikerRussell::
	trainerbattle_single TRAINER_RUSSELL_HNS, UnionCave_1F_Text_HikerRussellSeen, UnionCave_1F_Text_HikerRussellBeaten
	msgbox UnionCave_1F_Text_HikerRussellAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_1F_EventScript_PokemaniacLarry::
	trainerbattle_single TRAINER_LARRY_HNS, UnionCave_1F_Text_PokemaniacLarrySeen, UnionCave_1F_Text_PokemaniacLarryBeaten
	msgbox UnionCave_1F_Text_PokemaniacLarryAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_1F_EventScript_HikerDaniel::
	trainerbattle_single TRAINER_DANIEL_HNS, UnionCave_1F_Text_HikerDanielSeen, UnionCave_1F_Text_HikerDanielBeaten
	msgbox UnionCave_1F_Text_HikerDanielAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_1F_EventScript_FirebreatherBill::
	trainerbattle_single TRAINER_BILL_HNS, UnionCave_1F_Text_FirebreatherBillSeen, UnionCave_1F_Text_FirebreatherBillBeaten
	msgbox UnionCave_1F_Text_FirebreatherBillAfter, MSGBOX_AUTOCLOSE
	end

UnionCave_1F_EventScript_FirebreatherRay::
	trainerbattle_single TRAINER_RAY_HNS, UnionCave_1F_Text_FirebreatherRaySeen, UnionCave_1F_Text_FirebreatherRayBeaten
	msgbox UnionCave_1F_Text_FirebreatherRayAfter, MSGBOX_AUTOCLOSE
	end	

UnionCave_1F_EventScript_Item_Potion::
	finditem ITEM_POTION
	end

UnionCave_1F_EventScript_Item_GreatBall::
	finditem ITEM_GREAT_BALL
	end

UnionCave_1F_EventScript_Item_Xattack::
	finditem ITEM_X_ATTACK
	end

UnionCave_1F_EventScript_Item_Awakening::
	finditem ITEM_AWAKENING
	end

UnionCave_1F_Text_HikerRussellSeen:
	.string "Du gehst nach AZALEA, oder?\p"
	.string "Lass meine Pokémon prüfen, ob du\n"
	.string "gut genug bist, um zu kämpfen.$"

UnionCave_1F_Text_HikerRussellBeaten:
	.string "Oh, oh, oh!$"

UnionCave_1F_Text_HikerRussellAfter:
	.string "Alles klar!\p"
	.string "Ich gehe nicht, bis meine Pokémon\n"
	.string "stärker werden!$"

UnionCave_1F_Text_PokemaniacLarrySeen:
	.string "Ich streife weit umher auf der Suche\n"
	.string "nach Pokémon.\p"
	.string "Suchst du auch Pokémon?\n"
	.string "Dann bist du mein Sammlerrivale!$"

UnionCave_1F_Text_PokemaniacLarryBeaten:
	.string "Ugh. Meine armen Pokémon…$"

UnionCave_1F_Text_PokemaniacLarryAfter:
	.string "Jeden Freitag kann man Pokémon\n"
	.string "aus den Tiefen der Höhle\l"
	.string "brüllen hören.$"

UnionCave_1F_Text_HikerDanielSeen:
	.string "Whoa! Was für eine Überraschung!\p"
	.string "Ich habe nicht erwartet,\n"
	.string "jemanden hier zu sehen!$"

UnionCave_1F_Text_HikerDanielBeaten:
	.string "Whoa! Ich bin total besiegt!$"

UnionCave_1F_Text_HikerDanielAfter:
	.string "Ich wurde überredet, eine\n"
	.string "FLEGMONRUTE zu kaufen.\p"
	.string "Ich habe Mitleid mit dem\n"
	.string "armen Pokémon.$"

UnionCave_1F_Text_FirebreatherBillSeen:
	.string "Zubats Superschall verwirrt meine\n"
	.string "Pokémon.\p"
	.string "Das macht mich echt wütend!$"

UnionCave_1F_Text_FirebreatherBillBeaten:
	.string "Ich bin abgebrannt!$"

UnionCave_1F_Text_FirebreatherBillAfter:
	.string "Am Wochenende kann man seltsame\n"
	.string "Geräusche aus den Tiefen der\l"
	.string "Höhle hören.$"

UnionCave_1F_Text_FirebreatherRaySeen:
	.string "Wenn Licht da ist, ist eine Höhle\n"
	.string "nicht beängstigend.\p"
	.string "Wenn man stark ist, sind Pokémon\n"
	.string "nicht beängstigend.$"

UnionCave_1F_Text_FirebreatherRayBeaten:
	.string "Blitz!$"

UnionCave_1F_Text_FirebreatherRayAfter:
	.string "Die Kraft meiner Pokémon bringt\n"
	.string "diese Höhle zum Leuchten.$"

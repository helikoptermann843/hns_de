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
	.string "Du bist auf dem Weg nach Azalea City,\n"
	.string "richtig? Wollen wir mal sehen,\l"
	.string "ob du es bis dorthin schaffst!$"

UnionCave_1F_Text_HikerRussellBeaten:
	.string "Ojemine…$"

UnionCave_1F_Text_HikerRussellAfter:
	.string "Gut! Ich habe mich entschieden.\p"
	.string "Ich gehe erst, wenn meine Pokémon\n"
	.string "stärker sind!$"

UnionCave_1F_Text_PokemaniacLarrySeen:
	.string "Auf der Suche nach Pokémon habe\n"
	.string "ich das ganze Land durchwandert.\p"
	.string "Sammelst du auch Pokémon?\n"
	.string "Dann bist du mein Rivale!$"

UnionCave_1F_Text_PokemaniacLarryBeaten:
	.string "Uff. Mein armes Pokémon…$"

UnionCave_1F_Text_PokemaniacLarryAfter:
	.string "Jeden Freitag kannst du ein Pokémon\n"
	.string "hier aus dieser Höhle brüllen hören.$"

UnionCave_1F_Text_HikerDanielSeen:
	.string "Oha! Wer hätte gedacht, dass ich hier\n"
	.string "jemandem über den Weg laufen würde!$"

UnionCave_1F_Text_HikerDanielBeaten:
	.string "Oha! Und wer hätte gedacht, dass du\n"
	.string "so stark sein würdest!$"

UnionCave_1F_Text_HikerDanielAfter:
	.string "Man hat mich genötigt,\n"
	.string "eine FLEGMON-Rute zu kaufen.\l"
	.string "Mir tut das arme Pokémon leid.$"

UnionCave_1F_Text_FirebreatherBillSeen:
	.string "Diese ZUBAT verwirren ständig\n"
	.string "meine Pokémon mit ihrem Superschall!\l"
	.string "Das ist zum Aus-der-Haut-Fahren!$"

UnionCave_1F_Text_FirebreatherBillBeaten:
	.string "Aus-ge-brannt!$"

UnionCave_1F_Text_FirebreatherBillAfter:
	.string "Am Wochenende kann man seltsame\n"
	.string "Geräusche aus den Tiefen der\l"
	.string "Höhle hören.$"

UnionCave_1F_Text_FirebreatherRaySeen:
	.string "Wenn du Licht hast, brauchst du keine\n"
	.string "Angst vor Höhlen haben.\p"
	.string "Wenn du stark bist, brauchst du keine\n"
	.string "Angst vor meinem Pokémon-Team haben.$"

UnionCave_1F_Text_FirebreatherRayBeaten:
	.string "Blitz!$"

UnionCave_1F_Text_FirebreatherRayAfter:
	.string "Hier ist es nur so hell,\n"
	.string "weil mein Pokémon diese Höhle\l"
	.string "mit seinem Feuer erleuchtet.$"

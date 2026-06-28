Route27_House_hns_MapScripts::
	.byte 0

Route27_House_EventScript_Woman::
	lock
	faceplayer
	goto_if_unset FLAG_GOT_TM_SANDSTORM, Route27_House_EventScript_WomanBeforeGiven
	msgbox SandstormHouse_Text_TM37Description, MSGBOX_DEFAULT
	closemessage
	release
	end

Route27_House_EventScript_WomanBeforeGiven::
	msgbox SandstormHouse_Text_Woman1, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	goto_if_ge VAR_RESULT, FRIENDSHIP_150_TO_199, Route27_House_EventScript_WomanHighFriendship
	playfirstmoncry
	applymovement OBJ_EVENT_ID_FOLLOWER FollowerLookAway
	waitmovement OBJ_EVENT_ID_FOLLOWER
	applymovement OBJ_EVENT_ID_FOLLOWER Common_Movement_QuestionMark
	waitmovement 0
	msgbox SandstormHouse_Text_DisloyalMon, MSGBOX_DEFAULT
	closemessage
	release
	end

Route27_House_EventScript_WomanHighFriendship::
	playfirstmoncry
	applymovement OBJ_EVENT_ID_FOLLOWER FollowerDance
	waitmovement 0
	applymovement OBJ_EVENT_ID_FOLLOWER ContestHall_Movement_Heart
	waitmovement 0
	msgbox SandstormHouse_Text_LoyalMon, MSGBOX_DEFAULT
	giveitem ITEM_TM_SANDSTORM
	setflag FLAG_GOT_TM_SANDSTORM
	msgbox SandstormHouse_Text_TM37Description, MSGBOX_DEFAULT
	closemessage
	release
	end

Route27_Movement_FollowerJump:
	jump_in_place_down
	jump_in_place_down
	step_end

SandstormHouse_Text_Woman1:
	.string "Wohin möchtest du mit den Pokémon?\p"
	.string "Zur Pokémon LIGA?\p"
	.string "Sind deine Pokémon\n"
	.string "loyal genug, um zu gewinnen?\p"
	.string "Ich werde das überprüfen…$"

SandstormHouse_Text_LoyalMon:
	.string "Ah! Deine Pokémon vertrauen dir blind.\n"
	.string "\p"
	.string "Es ist schön, ei-\n"
	.string "nen guten Trainer zu treffen.\p"
	.string "Hier, ein Geschenk für deine Reise.$"

SandstormHouse_Text_TM37Description:
	.string "TM37 enthält SANDSTURM.\p"
	.string "Diese Attacke fügt\n"
	.string "beiden Kämpfern Schaden zu.\p"
	.string "Nur erfahrene\n"
	.string "Trainer sollten sie einsetzen.\p"
	.string "Setze sie ein,\n"
	.string "wenn du dich traust! Viel Glück!$"

SandstormHouse_Text_DisloyalMon:
	.string "Falls es dir nicht mehr Vertrauen\p"
	.string "schenkt, wird es schwer für dich.\p"
	.string "Vertrauen ist der\n"
	.string "Bund zwischen Pokémon und den\l"
	.string "Trainern.$"



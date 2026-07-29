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
	.string "Zur Pokémon Liga?\p"
	.string "Sind deine Pokémon\n"
	.string "loyal genug, um zu gewinnen?\p"
	.string "Ich werde das überprüfen…$"

SandstormHouse_Text_LoyalMon:
	.string "Oh, deine Pokémon vertrauen dir\n"
	.string "wirklich! Ich freue mich immer, wenn ich\l"
	.string "einem guten Trainer begegne. Hier, ein\l"
	.string "kleines Abschiedsgeschenk! Nimm nur!$"

SandstormHouse_Text_TM37Description:
	.string "TM37 enthält Sandsturm.\p"
	.string "Diese Attacke fügt\n"
	.string "beiden Kämpfern Schaden zu.\p"
	.string "Nur erfahrene Trainer\n"
	.string "sollten sie einsetzen.\p"
	.string "Setze sie ein,\n"
	.string "wenn du dich traust! Viel Glück!$"

SandstormHouse_Text_DisloyalMon:
	.string "Wenn du nicht für mehr Vertrauen unter\n"
	.string "euch sorgst, kannst du nicht gewinnen!\p"
	.string "Vertrauen ist, was einen Trainer mit\n"
	.string "seinen Pokémon verbindet!$"



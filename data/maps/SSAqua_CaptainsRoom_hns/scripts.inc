SSAqua_CaptainsRoom_hns_MapScripts::
	.byte 0

SSAqua_CaptainsRoom_EventScript_Captain::
	goto_if_eq VAR_TEMP_0, 1, SSAqua_CaptainsRoom_EventScrip_CaptainAfter
	msgbox SSAqua_CaptainsRoom_Text_CaptainExhausting, MSGBOX_NPC
	setvar VAR_TEMP_0, 1
SSAqua_CaptainsRoom_EventScrip_CaptainAfter::
	msgbox SSAqua_CaptainsRoom_Text_CaptainHowDoYouLike, MSGBOX_DEFAULT
	closemessage
	end

SSAqua_CaptainsRoom_EventScript_Granddaughter::
	lock
	applymovement LOCALID_SSAQUA_CAPTAINS_ROOM_GRANDDAUGHTER, SSAqua_CaptainsRoom_Movement_Jump
	waitmovement 0
	msgbox SSAqua_CaptainsRoom_Text_GranddaughterCaptainPlayWithMe, MSGBOX_DEFAULT
	turnobject LOCALID_SSAQUA_CAPTAINS_ROOM_CAPTAIN, DIR_WEST
	playse SE_PIN
	applymovement LOCALID_SSAQUA_CAPTAINS_ROOM_CAPTAIN, Common_Movement_QuestionMark
	waitmovement 0
	delay 60
	faceplayer
	msgbox SSAqua_CaptainsRoom_Text_GranddaughterHasToFindGrandpa, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	setflag FLAG_HIDE_SSAQUA_CAPTAINS_ROOM_GRANDDAUGHTER
	setvar VAR_SSAQUA_STATE, 4
	clearflag FLAG_HIDE_SSAQUA_ROOM_SSE_GRANDDAUGHTER
	warp MAP_SSAQUA_ROOM_SSE_HNS, 0
	waitstate
	release
	end

SSAqua_CaptainsRoom_Movement_Jump:
	jump_in_place_right
	jump_in_place_right
	jump_in_place_right
	step_end

SSAqua_CaptainsRoom_Text_GranddaughterCaptainPlayWithMe:
	.string "KAPITÄN, spielst du mit mir?\p"
	.string "Mir ist langwei-\n"
	.string "lig! Ich möchte spielen!$"

SSAqua_CaptainsRoom_Text_GranddaughterHasToFindGrandpa:
	.string "Hi! Willst du mit mir spielen?\p"
	.string "…Oh!\p"
	.string "Opa sorgt sich um mich?\p"
	.string "Ich muss los!\p"
	.string "Ich muss Opa finden!$"

SSAqua_CaptainsRoom_Text_CaptainExhausting:
	.string "Puh! Danke, dass du mitkamst.\p"
	.string "Das kleine Mädchen bei Laune\n"
	.string "zu halten, war anstrengend.$"

SSAqua_CaptainsRoom_Text_CaptainHowDoYouLike:
	.string "Hat dir die Fahrt\n"
	.string "mit der M.S. AQUA gefallen?\p"
	.string "Sie gleitet\n"
	.string "regelrecht über die Wellen.$"


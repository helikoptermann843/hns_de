VermilionCity_House3_Frlg_MapScripts::
	.byte 0

VermilionCity_House3_EventScript_Boy::
	msgbox VermilionCity_House3_Text_PidgeyFlyLetterToSaffron, MSGBOX_NPC
	end

VermilionCity_House3_EventScript_Lass::
	msgbox VermilionCity_House3_Text_SendMyPidgeyToUnionRoom, MSGBOX_NPC
	end

VermilionCity_House3_EventScript_Pidgey::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIDGEY, CRY_MODE_NORMAL
	msgbox VermilionCity_House3_Text_Pidgey
	waitmoncry
	release
	end

VermilionCity_House3_EventScript_Letter::
	msgbox VermilionCity_House3_Text_DearPippiLetter, MSGBOX_SIGN
	end

VermilionCity_House3_Text_PidgeyFlyLetterToSaffron::
	.string "Ich lasse TAUBSI einen Brief nach\n"
	.string "SAFFRONIA CITY im Norden bringen!$"

VermilionCity_House3_Text_Pidgey::
	.string "TAUBSI: TAUBSI!$"

VermilionCity_House3_Text_DearPippiLetter::
	.string "Liebe NIKKI! Ich hoffe, wir sehen\n"
	.string "uns bald wieder!\p"
	.string "Wie ich höre, stiftet das TEAM\n"
	.string "ROCKET in SAFFRONIA CITY Unruhe!\p"
	.string "In ORANIA CITY scheint es sicher\n"
	.string "zu sein.$"

VermilionCity_House3_Text_SendMyPidgeyToUnionRoom::
	.string "Ich möchte mit allen Menschen\n"
	.string "BRIEFE austauschen.\p"
	.string "Ich schicke mein TAUBSI in einen\n"
	.string "KONNEX-KLUB, um BRIEFE\l"
	.string "für mich auszutauschen.$"


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
	.string "Ich lasse Taubsi einen Brief nach\n"
	.string "Saffronia City im Norden bringen!$"

VermilionCity_House3_Text_Pidgey::
	.string "Taubsi: Taubsi!$"

VermilionCity_House3_Text_DearPippiLetter::
	.string "Liebe Nikki! Ich hoffe, wir sehen\n"
	.string "uns bald wieder!\p"
	.string "Wie ich höre, stiftet das Team\n"
	.string "Rocket in Saffronia City Unruhe!\p"
	.string "In Orania City scheint es sicher\n"
	.string "zu sein.$"

VermilionCity_House3_Text_SendMyPidgeyToUnionRoom::
	.string "Ich möchte mit allen Menschen\n"
	.string "Briefe austauschen.\p"
	.string "Ich schicke mein Taubsi in einen\n"
	.string "Konnex-Klub, um Briefe\l"
	.string "für mich auszutauschen.$"


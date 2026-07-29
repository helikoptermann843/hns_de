LakeOfRage_House2_hns_MapScripts::
	.byte 0

LakeOfRage_House2_EventScript_Fisher::
	lock
	faceplayer
	goto_if_ge VAR_MAHOGANY_TOWN_STATE, 14, LakeOfRage_House2_EventScript_FisherAfterRockets
	goto_if_eq VAR_LAKE_OF_RAGE_FISHERMAN, 0, LakeOfRage_House2_EventScript_FisherFirstMeeting
	msgbox LakeOfRage_House2_Text_MenInBlack, MSGBOX_DEFAULT
	closemessage
	release
	end

LakeOfRage_House2_EventScript_FisherFirstMeeting::
	msgbox LakeOfRage_House2_Text_LakeHistory, MSGBOX_DEFAULT
	msgbox LakeOfRage_House2_Text_MenInBlack, MSGBOX_DEFAULT
	setvar VAR_LAKE_OF_RAGE_FISHERMAN, 1
	closemessage
	release
	end

LakeOfRage_House2_EventScript_FisherAfterRockets::
	goto_if_eq VAR_LAKE_OF_RAGE_FISHERMAN, 2, LakeOfRage_House2_EventScript_FisherAnotherMagikarp
	msgbox LakeOfRage_House2_Text_WorldsLargest, MSGBOX_DEFAULT
	msgbox LakeOfRage_House2_Text_ForMe, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, LakeOfRage_House2_EventScript_FisherNo
	getpartysize
	goto_if_eq VAR_RESULT, 1, LakeOfRage_House2_EventScript_LastMon
	special ChoosePartyMon
	waitstate
	lock
	showmoneybox 0, 0
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LakeOfRage_House2_EventScript_FisherNoMoneyBox
	removegenericmon SPECIES_MAGIKARP
	goto_if_eq VAR_RESULT, FALSE, LakeOfRage_House2_EventScript_FisherNotMagikarp
	goto_if_eq VAR_RESULT, MON_SATISFACTORY, LakeOfRage_House2_EventScript_FisherSatisfied
	goto_if_eq VAR_RESULT, MON_UNSATISFACTORY, LakeOfRage_House2_EventScript_FisherSmallMagikarp

LakeOfRage_House2_EventScript_FisherNo::
	msgbox LakeOfRage_House2_Text_Refused, MSGBOX_DEFAULT
	closemessage
	release
	end

LakeOfRage_House2_EventScript_FisherNoMoneyBox::
	msgbox LakeOfRage_House2_Text_Refused, MSGBOX_DEFAULT
	hidemoneybox
	closemessage
	release
	end

LakeOfRage_House2_EventScript_FisherNotMagikarp::
	msgbox LakeOfRage_House2_Text_NotMagikarp, MSGBOX_DEFAULT
	hidemoneybox
	closemessage
	release
	end

LakeOfRage_House2_EventScript_FisherSmallMagikarp::
	setvar VAR_LAKE_OF_RAGE_FISHERMAN, 2
	msgbox LakeOfRage_House2_Text_TooShort, MSGBOX_DEFAULT
	addmoney 2000
	updatemoneybox
	playse SE_SHOP
	waitse
	hidemoneybox
	closemessage
	release
	end

LakeOfRage_House2_EventScript_FisherAnotherMagikarp::
	msgbox LakeOfRage_House2_Text_ForMe, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, LakeOfRage_House2_EventScript_FisherNo
	getpartysize
	goto_if_eq VAR_RESULT, 1, LakeOfRage_House2_EventScript_LastMon
	special ChoosePartyMon
	waitstate
	lock
	showmoneybox 0, 0
	copyvar VAR_0x800A, VAR_0x8004
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LakeOfRage_House2_EventScript_FisherNoMoneyBox
	removegenericmon SPECIES_MAGIKARP
	goto_if_eq VAR_RESULT, FALSE, LakeOfRage_House2_EventScript_FisherNotMagikarp
	goto_if_eq VAR_RESULT, MON_SATISFACTORY, LakeOfRage_House2_EventScript_FisherSatisfied
	goto_if_eq VAR_RESULT, MON_UNSATISFACTORY, LakeOfRage_House2_EventScript_FisherSmallMagikarp

LakeOfRage_House2_EventScript_LastMon::
	msgbox LakeOfRage_House2_Text_LastMon, MSGBOX_DEFAULT
	closemessage
	release
	end

LakeOfRage_House2_EventScript_FisherSatisfied::
	setvar VAR_LAKE_OF_RAGE_FISHERMAN, 2
	msgbox LakeOfRage_House2_Text_BigPayout, MSGBOX_DEFAULT
	addmoney 100000
	updatemoneybox
	playse SE_SHOP
	waitse
	hidemoneybox
	closemessage
	release
	end

LakeOfRage_House2_Text_LakeHistory:
	.string "Der See der Wut ist eigentlich\n"
	.string "ein Krater, den ein wütendes\l"
	.string "Garados verursacht hat.\p"
	.string "Der Krater füllte sich mit Regen-\n"
	.string "wasser, so entstand der See.\p"
	.string "So erzählt es der Ur-Ur-Großvater\n"
	.string "meines Großvaters.\p"
	.string "Früher konnte man dort lebhafte\n"
	.string "Karpador fangen, aber…\n"
	.string "Ich verstehe nicht, was passiert.$"

LakeOfRage_House2_Text_MenInBlack:
	.string "Der See ist seit der Ankunft der\n"
	.string "Männer in Schwarz nicht mehr normal.$"

LakeOfRage_House2_Text_LastMon:
	.string "Lass mich dein letztes Pokémon\n"
	.string "nicht nehmen!$"

LakeOfRage_House2_Text_WorldsLargest:
	.string "Der See der Wut ist wieder normal.\p"
	.string "Die Karpador sind zurück.\p"
	.string "Vielleicht erfülle ich mir meinen\n"
	.string "Traum, das größte Karpador der\l"
	.string "Welt zu besitzen.\p"
	.string "Tatsächlich… Ich zahle dir ¥2000\n"
	.string "für jedes Karpador und ¥100.000\l"
	.string "für ein Riesen-Karpador!$"

LakeOfRage_House2_Text_ForMe:
	.string "Also… Hast du einen Karpador\n"
	.string "für mich?$"

LakeOfRage_House2_Text_HaveMagikarp:
	.string "Ah, du hast ein Karpador! Dann wollen\n"
	.string "wir doch mal sehen, wie groß es ist!$"

LakeOfRage_House2_Text_BigPayout:
	.string "Wow! Der ist großartig!\p"
	.string "Hut ab vor dir!\p"
	.string "Hier ist eine kleine Belohnung\n"
	.string "für deine Mühe.$"

LakeOfRage_House2_Text_Bonus:
	.string "So! Aber vergiss nicht, dass es hier vor\n"
	.string "allem um deinen Rekord geht! Sieh das\l"
	.string "einfach als kleinen Bonus an.$"

LakeOfRage_House2_Text_TooShort:
	.string "Wow! Der ist großartig!\p"
	.string "…Aber ich habe schon größere\n"
	.string "gesehen.\p"
	.string "Ich schätze, er ist trotzdem\n"
	.string "etwas wert.$"

LakeOfRage_House2_Text_NotMagikarp:
	.string "Was? Das ist kein Karpador!$"

LakeOfRage_House2_Text_Refused:
	.string "Oh… du hast also keins, das es wert\n"
	.string "wäre, mir zu zeigen? Na ja, vielleicht\l"
	.string "beim nächsten Mal.$"

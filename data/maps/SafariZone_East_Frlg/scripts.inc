SafariZone_East_Frlg_MapScripts::
	.byte 0

SafariZone_East_EventScript_RestHouseSign::
	msgbox SafariZone_East_Text_RestHouse, MSGBOX_SIGN
	end

SafariZone_East_EventScript_TrainerTips::
	msgbox SafariZone_East_Text_TimeDeclinesOnlyWhileYouWalk, MSGBOX_SIGN
	end

SafariZone_East_EventScript_AreaSign::
	msgbox SafariZone_East_Text_AreaSign, MSGBOX_SIGN
	end

SafariZone_East_Text_RestHouse::
	.string "RASTHAUS$"

SafariZone_East_Text_TimeDeclinesOnlyWhileYouWalk::
	.string "TIPPS FÜR TRAINER\p"
	.string "Die verbleibende Zeit verstreicht\n"
	.string "nur, wenn du läufst!$"

SafariZone_East_Text_AreaSign::
	.string "AREAL 1\n"
	.string "WESTEN: ZENTRUM$"


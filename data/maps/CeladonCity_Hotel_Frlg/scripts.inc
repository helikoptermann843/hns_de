CeladonCity_Hotel_Frlg_MapScripts::
	.byte 0

CeladonCity_Hotel_EventScript_Receptionist::
	msgbox CeladonCity_Hotel_Text_ThisHotelIsForPeople, MSGBOX_NPC
	end

CeladonCity_Hotel_EventScript_Beauty::
	msgbox CeladonCity_Hotel_Text_OnVacationWithBrotherAndBoyfriend, MSGBOX_NPC
	end

CeladonCity_Hotel_EventScript_BeautyBoyfriend::
	msgbox CeladonCity_Hotel_Text_WhyDidSheBringBrother, MSGBOX_NPC
	end

CeladonCity_Hotel_EventScript_BeautyBrother::
	msgbox CeladonCity_Hotel_Text_SisBroughtMeOnVacation, MSGBOX_NPC
	end

CeladonCity_Hotel_Text_ThisHotelIsForPeople::
	.string "In diesem Hotel sind keine POKéMON\n"
	.string "erlaubt!\p"
	.string "Tut mir Leid.$"

CeladonCity_Hotel_Text_OnVacationWithBrotherAndBoyfriend::
	.string "Ich mache hier mit meinem Bruder\n"
	.string "und meinem Freund Urlaub.\p"
	.string "PRISMANIA CITY ist wunderschön!$"

CeladonCity_Hotel_Text_WhyDidSheBringBrother::
	.string "Warum nur musste sie ihren Bruder\n"
	.string "mitnehmen?$"

CeladonCity_Hotel_Text_SisBroughtMeOnVacation::
	.string "Dieser Urlaub war eine Idee meiner\n"
	.string "Schwester!$"


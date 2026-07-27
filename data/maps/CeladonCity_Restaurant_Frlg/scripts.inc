CeladonCity_Restaurant_Frlg_MapScripts::
	.byte 0

CeladonCity_Restaurant_EventScript_Chef::
	msgbox CeladonCity_Restaurant_Text_TakingBreakRightNow, MSGBOX_NPC
	end

CeladonCity_Restaurant_EventScript_Woman::
	msgbox CeladonCity_Restaurant_Text_OftenGoToDrugstore, MSGBOX_NPC
	end

CeladonCity_Restaurant_EventScript_CoinCaseMan::
	lock
	faceplayer
	goto_if_set FLAG_GOT_COIN_CASE, CeladonCity_Restaurant_EventScript_AlreadyGotCoinCase
	msgbox CeladonCity_Restaurant_Text_TakeThisImBusted
	checkitemspace ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_Restaurant_EventScript_NoRoomForCoinCase
	giveitem_msg CeladonCity_Restaurant_Text_ReceivedCoinCaseFromMan, ITEM_COIN_CASE
	setflag FLAG_GOT_COIN_CASE
	release
	end

CeladonCity_Restaurant_EventScript_NoRoomForCoinCase::
	msgbox CeladonCity_Restaurant_Text_MakeRoomForThis
	release
	end

CeladonCity_Restaurant_EventScript_AlreadyGotCoinCase::
	msgbox CeladonCity_Restaurant_Text_ThoughtIdWinItBack
	release
	end

CeladonCity_Restaurant_EventScript_WorkerM::
	msgbox CeladonCity_Restaurant_Text_PsstBasementUnderGameCorner, MSGBOX_NPC
	end

CeladonCity_Restaurant_EventScript_FatMan::
	msgbox CeladonCity_Restaurant_Text_ManLostItAllAtSlots, MSGBOX_NPC
	end

CeladonCity_Restaurant_Text_TakingBreakRightNow::
	.string "Hallo!\p"
	.string "Wir machen gerade eine Pause.$"

CeladonCity_Restaurant_Text_OftenGoToDrugstore::
	.string "Meine POKéMON sind ziemlich\n"
	.string "schwach, deshalb gehe ich oft zur\l"
	.string "DROGERIE.$"

CeladonCity_Restaurant_Text_PsstBasementUnderGameCorner::
	.string "Pst! Unter der SPIELHALLE\n"
	.string "befindet sich ein Keller!$"

CeladonCity_Restaurant_Text_ManLostItAllAtSlots::
	.string "Mampf...\p"
	.string "Der Mann dort drüben am Tisch hat\n"
	.string "Haus und Hof verzockt.$"

CeladonCity_Restaurant_Text_TakeThisImBusted::
	.string "Ja, lach mich ruhig aus!\p"
	.string "Ich bin pleite!\p"
	.string "Jetzt ist Schluss damit! Ich werde\n"
	.string "niemals wieder zocken!\p"
	.string "Hier, das kann ich jetzt nicht mehr\n"
	.string "gebrauchen!$"

CeladonCity_Restaurant_Text_ReceivedCoinCaseFromMan::
	.string "{PLAYER} received a COIN CASE\n"
	.string "from the man.$"

CeladonCity_Restaurant_Text_MakeRoomForThis::
	.string "Du solltest etwas Platz schaffen!$"

CeladonCity_Restaurant_Text_ThoughtIdWinItBack::
	.string "Ich dachte immer, ich könnte den\n"
	.string "Jackpot knacken!$"


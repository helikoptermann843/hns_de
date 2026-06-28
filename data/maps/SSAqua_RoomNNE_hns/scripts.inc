SSAqua_RoomNNE_hns_MapScripts::
	.byte 0

SSAqua_RoomNNE_EventScript_Sean::
	trainerbattle_single TRAINER_SEAN_HNS, SSAqua_RoomNNE_Text_CooltrainermSeanSeen, SSAqua_RoomNNE_Text_CooltrainermSeanBeaten
	msgbox SSAqua_RoomNNE_Text_CooltrainermSeanAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomNNE_EventScript_Carol::
	trainerbattle_single TRAINER_CAROL_HNS, SSAqua_RoomNNE_Text_CooltrainerfCarolSeen, SSAqua_RoomNNE_Text_CooltrainerfCarolBeaten
	msgbox SSAqua_RoomNNE_Text_CooltrainerfCarolAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomNNE_Text_CooltrainermSeanSeen:
	.string "Ich gehe nach KANTO,\n"
	.string "um meine Fähigkeiten zu testen.$"

SSAqua_RoomNNE_Text_CooltrainermSeanBeaten:
	.string "Ich wollte doch gewinnen!$"

SSAqua_RoomNNE_Text_CooltrainermSeanAfterBattle:
	.string "Trainer aus JOHTO können gegen\n"
	.string "KANTO ARENALEITER antreten.$"

SSAqua_RoomNNE_Text_CooltrainerfCarolSeen:
	.string "Ich trainiere, um CHAMP zu werden!$"

SSAqua_RoomNNE_Text_CooltrainerfCarolBeaten:
	.string "Worin unterscheiden wir uns?$"

SSAqua_RoomNNE_Text_CooltrainerfCarolAfterBattle:
	.string "Eines Tages werde ich dich besiegen!$"

SSAqua_RoomNE_hns_MapScripts::
	.byte 0

SSAqua_RoomNE_EventScript_Noland::
	trainerbattle_single TRAINER_NOLAND_HNS, SSAqua_RoomNE_Text_HikerNolandSeen, SSAqua_RoomNE_Text_HikerNolandBeaten
	msgbox SSAqua_RoomNE_Text_HikerNolandAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomNE_EventScript_Ethan::
	trainerbattle_single TRAINER_ETHAN_HNS, SSAqua_RoomNE_Text_PokemaniacEthanSeen, SSAqua_RoomNE_Text_PokemaniacEthanBeaten
	msgbox SSAqua_RoomNE_Text_PokemaniacEthanAfterBattle, MSGBOX_AUTOCLOSE
	end

SSAqua_RoomNE_Text_HikerNolandSeen:
	.string "Bist du allein?\n"
	.string "Dann lass uns kämpfen!$"

SSAqua_RoomNE_Text_HikerNolandBeaten:
	.string "Das ist zu viel für mich!$"

SSAqua_RoomNE_Text_HikerNolandAfterBattle:
	.string "Ich frage mich, ob es in KANTO\n"
	.string "Berge gibt, die sich lohnen!$"

SSAqua_RoomNE_Text_PokemaniacEthanSeen:
	.string "Kennst du Lilly?\n"
	.string "Sie ist eine coole DJ in KANTO.$"

SSAqua_RoomNE_Text_PokemaniacEthanBeaten:
	.string "Gyaaaah!$"

SSAqua_RoomNE_Text_PokemaniacEthanAfterBattle:
	.string "LILLY ist gut,\n"
	.string "aber MARGIT ist die Beste!\p"
	.string "Ich möchte gerne\n"
	.string "alle Radiosender von JOHTO anhören!$"

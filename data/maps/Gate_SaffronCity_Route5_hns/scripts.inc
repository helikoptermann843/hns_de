Gate_SaffronCity_Route5_hns_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SaffronCity_OnFrame
	.byte 0

Gate_SaffronCity_Route5_EventScript_Guard::
	msgbox Route5_Text_SaffronGateOfficer, MSGBOX_NPC
	end

Route5_Text_SaffronGateOfficer:
	.string "Du kommst aus JOHTO, nicht wahr?\p"
	.string "Wie gefällt dir\n"
	.string "KANTO? Schön hier, oder nicht?$"

BattleFrontier_Lounge4_hns_MapScripts::
	.byte 0

BattleFrontier_Lounge4_EventScript_Woman_hns::
	msgbox BattleFrontier_Lounge4_Text_WonderIfInterviewsAiring_hns, MSGBOX_NPC
	end

BattleFrontier_Lounge4_EventScript_Cook_hns::
	msgbox BattleFrontier_Lounge4_Text_IfIOpenedRestaurantHere_hns, MSGBOX_NPC
	end

BattleFrontier_Lounge4_EventScript_Man_hns::
	msgbox BattleFrontier_Lounge4_Text_NeedBreatherAfterBattles_hns, MSGBOX_NPC
	end

BattleFrontier_Lounge4_Text_WonderIfInterviewsAiring_hns:
	.string "Ich frage mich, ob sie heute\n"
	.string "Interviews\l"
	.string "mit starken TRAINERn ausstrahlen!$"

BattleFrontier_Lounge4_Text_IfIOpenedRestaurantHere_hns:
	.string "Wenn ich hier ein Restaurant eröffnen\n"
	.string "würde, würde meine Kasse klingeln!$"

BattleFrontier_Lounge4_Text_NeedBreatherAfterBattles_hns:
	.string "Huuuh…\p"
	.string "Nach solch anstrengenden Kämpfen\n"
	.string "brauche ich eine Verschnaufpause…\p"
	.string "Aber auch in Pausen denke ich über\n"
	.string "neue Strategien und Combos nach!$"

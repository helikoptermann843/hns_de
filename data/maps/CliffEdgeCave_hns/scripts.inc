CliffEdgeCave_hns_MapScripts::
	.byte 0

CliffEdgeCave_EventScript_BaldMan::
	lock
	faceplayer
	msgbox CliffEdgeCave_Text_Baldman, MSGBOX_DEFAULT
	closemessage
	release
	end

CliffEdgeCave_Text_Baldman:
	.string "Wenn du eine Gabelung in der Höhle\n"
	.string "siehst, ist meist ein Weg richtig,\l"
	.string "der andere führt ins Nirgendwo.\p"
	.string "Aber die Leute versuchen immer beides.$"

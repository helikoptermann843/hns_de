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
	.string "Wenn du eine Gabelung in der Höhle\l"
	.string "siehst, ist meist ein Weg\n"
	.string "richtig, der andere führt ins\p"
	.string "Nirgendwo.\p"
	.string "Aber die Leute versuchen immer beides.$"

Route116_TunnelersRestHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_TunnelersRestHouse_OnTransition
	.byte 0

Route116_TunnelersRestHouse_OnTransition:
	setflag FLAG_LANDMARK_TUNNELERS_REST_HOUSE
	end

Route116_TunnelersRestHouse_EventScript_Tunneler1::
	msgbox Route116_TunnelersRestHouse_Text_WeHadToStopBoring, MSGBOX_NPC
	end

Route116_TunnelersRestHouse_EventScript_Tunneler2::
	msgbox Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf, MSGBOX_NPC
	end

Route116_TunnelersRestHouse_EventScript_Tunneler3::
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, Route116_TunnelersRestHouse_EventScript_TunnelOpened
	msgbox Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel, MSGBOX_DEFAULT
	release
	end

Route116_TunnelersRestHouse_EventScript_TunnelOpened::
	msgbox Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough, MSGBOX_DEFAULT
	release
	end

Route116_TunnelersRestHouse_Text_WeHadToStopBoring:
	.string "Der METAFLURTUNNEL…\p"
	.string "Zunächst hatten wir ein großes Team,\n"
	.string "das mit schweren Maschinen durch den\l"
	.string "Felsen brechen sollte. Dann mussten\n"
	.string "wir\l"
	.string "die Arbeit stoppen.\p"
	.string "Es stellte sich heraus, dass sich\n"
	.string "unsere Arbeit negativ auf die wilden\l"
	.string "POKéMON in dieser Gegend auswirkte.\p"
	.string "Und daher haben wir nun nichts mehr zu\n"
	.string "tun, außer hier faul herumzuhängen.$"

Route116_TunnelersRestHouse_Text_ManDiggingHisWayToVerdanturf:
	.string "Da ist ein Mann, der sich ganz alleine\n"
	.string "seinen Weg nach WIESENFLUR gräbt. Er\l"
	.string "versucht verzweifelt durchzukommen.\p"
	.string "Er sagt, wenn er Schritt für Schritt\n"
	.string "ohne laute Maschinen gräbt, werden die\l"
	.string "POKéMON nicht gestört und ihr natür-\l"
	.string "licher Lebensraum bleibt erhalten.$"

Route116_TunnelersRestHouse_Text_GetToVerdanturfWithoutTunnel:
	.string "Um ohne diesen Tunnel nach WIESENFLUR\n"
	.string "zu kommen, muss man das Meer bei\p"
	.string "FAUSTAUHAVEN überqueren, nach\n"
	.string "GRAPHITPORT CITY segeln und durch\l"
	.string "MALVENFROH CITY reisen.$"

Route116_TunnelersRestHouse_Text_TunnelHasGoneThrough:
	.string "Hast du schon gehört!?! Der TUNNEL bei\n"
	.string "WIESENFLUR ist fertig!\p"
	.string "Wenn man nur fest an seine Träume\n"
	.string "glaubt, werden sie irgendwann wahr.$"


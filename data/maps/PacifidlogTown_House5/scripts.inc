PacifidlogTown_House5_MapScripts::
	.byte 0

PacifidlogTown_House5_EventScript_MirageIslandWatcher::
	lock
	faceplayer
	specialvar VAR_RESULT, IsMirageIslandPresent
	goto_if_eq VAR_RESULT, TRUE, PacifidlogTown_House5_EventScript_MirageIslandPresent
	msgbox PacifidlogTown_House5_Text_CantSeeMirageIslandToday, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House5_EventScript_MirageIslandPresent::
	msgbox PacifidlogTown_House5_Text_CanSeeMirageIslandToday, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House5_EventScript_Gentleman::
	msgbox PacifidlogTown_House5_Text_MirageIslandAppearDependingOnWeather, MSGBOX_NPC
	end

PacifidlogTown_House5_Text_CantSeeMirageIslandToday:
	.string "Ich kann WUNDEREILAND heute\n"
	.string "nicht sehen…$"

PacifidlogTown_House5_Text_CanSeeMirageIslandToday:
	.string "Oh! Oh! Heute kann ich WUNDEREILAND\n"
	.string "sehen!$"

PacifidlogTown_House5_Text_MirageIslandAppearDependingOnWeather:
	.string "WUNDEREILAND…\p"
	.string "Die Insel ist sichtbar oder nicht\n"
	.string "sichtbar. Das hängt vom Wetter ab, das\l"
	.string "Fata Morganen möglich macht oder\n"
	.string "nicht. \p"
	.string "Oder verschwindet die Insel\n"
	.string "tatsächlich manchmal?$"


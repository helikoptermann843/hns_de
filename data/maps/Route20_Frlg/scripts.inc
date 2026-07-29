Route20_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_OnTransition
	.byte 0

Route20_OnTransition::
	call_if_unset FLAG_STOPPED_SEAFOAM_B3F_CURRENT, Route20_EventScript_ResetSeafoamBouldersForB3F
	call_if_unset FLAG_STOPPED_SEAFOAM_B4F_CURRENT, Route20_EventScript_ResetSeafoamBouldersForB4F
	end

Route20_EventScript_ResetSeafoamBouldersForB3F::
	clearflag FLAG_HIDE_SEAFOAM_1F_BOULDER_1
	clearflag FLAG_HIDE_SEAFOAM_1F_BOULDER_2
	setflag FLAG_HIDE_SEAFOAM_B1F_BOULDER_1
	setflag FLAG_HIDE_SEAFOAM_B1F_BOULDER_2
	setflag FLAG_HIDE_SEAFOAM_B2F_BOULDER_1
	setflag FLAG_HIDE_SEAFOAM_B2F_BOULDER_2
	setflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_1
	setflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_2
	return

Route20_EventScript_ResetSeafoamBouldersForB4F::
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_3
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_4
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_5
	clearflag FLAG_HIDE_SEAFOAM_B3F_BOULDER_6
	setflag FLAG_HIDE_SEAFOAM_B4F_BOULDER_1
	setflag FLAG_HIDE_SEAFOAM_B4F_BOULDER_2
	return

Route20_EventScript_SeafoamIslandsSign::
	msgbox Route20_Text_SeafoamIslands, MSGBOX_SIGN
	end

Route20_Text_BarryIntro::
	.string "Das Wasser ist hier sehr flach.$"

Route20_Text_BarryDefeat::
	.string "Platsch!$"

Route20_Text_BarryPostBattle::
	.string "Ich wünschte, ich könnte auf einem\n"
	.string "Pokémon reiten.$"

Route20_Text_ShirleyIntro::
	.string "Die Seeschauminseln sind ein\n"
	.string "stiller Zufluchtsort!$"

Route20_Text_ShirleyDefeat::
	.string "Schluss damit!$"

Route20_Text_ShirleyPostBattle::
	.string "Unter dieser Insel befindet sich\n"
	.string "eine riesige Höhle!$"

Route20_Text_TiffanyIntro::
	.string "Ich lasse mich gerne mit den\n"
	.string "Fischen treiben!$"

Route20_Text_TiffanyDefeat::
	.string "Autsch!$"

Route20_Text_TiffanyPostBattle::
	.string "Möchtest du mir Gesellschaft\n"
	.string "leisten?$"

Route20_Text_IreneIntro::
	.string "Machst du auch gerade Urlaub?$"

Route20_Text_IreneDefeat::
	.string "Du kennst keine Gnade!$"

Route20_Text_IrenePostBattle::
	.string "Die Seeschauminseln waren einmal\n"
	.string "Eine große Insel!$"

Route20_Text_DeanIntro::
	.string "Schau dir meinen gestählten Körper\n"
	.string "ruhig an!$"

Route20_Text_DeanDefeat::
	.string "Waschlappen!$"

Route20_Text_DeanPostBattle::
	.string "Ich hätte meine Pokémon stählen\n"
	.string "sollen, nicht meinen Körper!$"

Route20_Text_DarrinIntro::
	.string "Warum reitest du auf dem Pokémon?\n"
	.string "Kannst du nicht schwimmen?$"

Route20_Text_DarrinDefeat::
	.string "Ich wurde torpediert!$"

Route20_Text_DarrinPostBattle::
	.string "Es dürfte Spaß machen, auf einem\n"
	.string "Pokémon zu reiten!$"

Route20_Text_RogerIntro::
	.string "Mein Vogel-Pokémon hat mich\n"
	.string "hierher getragen!$"

Route20_Text_RogerDefeat::
	.string "Oh nein!$"

Route20_Text_RogerPostBattle::
	.string "Kann ich mit meinen Vogel-Pokémon\n"
	.string "noch zurückfliegen?$"

Route20_Text_NoraIntro::
	.string "Mein Freund hat mir eine große\n"
	.string "Perle geschenkt!$"

Route20_Text_NoraDefeat::
	.string "Lass die Finger von meiner Perle!$"

Route20_Text_NoraPostBattle::
	.string "Ob meine Perle in einem Austos\n"
	.string "größer werden würde?$"

Route20_Text_MissyIntro::
	.string "Ich bin von der Zinnoberinsel\n"
	.string "herübergeschwommen!$"

Route20_Text_MissyDefeat::
	.string "Ich bin enttäuscht!$"

Route20_Text_MissyPostBattle::
	.string "Auf der Zinnoberinsel haben\n"
	.string "Pokémon eine verlassene Villa\l"
	.string "besiedelt!$"

Route20_Text_MelissaIntro::
	.string "Auf der Zinnoberinsel befindet\n"
	.string "sich ein Pokémon-Labor.$"

Route20_Text_MelissaDefeat::
	.string "Warte!$"

Route20_Text_MelissaPostBattle::
	.string "Die Zinnoberinsel ist ein\n"
	.string "vulkanisches Eiland!$"

Route20_Text_SeafoamIslands::
	.string "Seeschauminseln$"

Route20_Text_MistyTrainsHere::
	.string "Starke Trainer und Wasser-\n"
	.string "Pokémon sind hier weit verbreitet.\p"
	.string "Man sagt, dass Misty aus der\n"
	.string "Arena von Azuria City\l"
	.string "hier häufig trainiert.$"

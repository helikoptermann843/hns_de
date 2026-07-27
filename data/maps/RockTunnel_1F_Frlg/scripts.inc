RockTunnel_1F_Frlg_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RockTunnel_1F_OnTransition
	.byte 0

RockTunnel_1F_OnTransition::
	setworldmapflag FLAG_WORLD_MAP_ROCK_TUNNEL_1F
	end

RockTunnel_1F_EventScript_RouteSign::
	msgbox RockTunnel_1F_Text_RouteSign, MSGBOX_SIGN
	end

RockTunnel_1F_EventScript_Lenny::
	trainerbattle_single TRAINER_HIKER_LENNY, RockTunnel_1F_Text_LennyIntro, RockTunnel_1F_Text_LennyDefeat
	msgbox RockTunnel_1F_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_1F_EventScript_Oliver::
	trainerbattle_single TRAINER_HIKER_OLIVER, RockTunnel_1F_Text_OliverIntro, RockTunnel_1F_Text_OliverDefeat
	msgbox RockTunnel_1F_Text_OliverPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_1F_EventScript_Lucas::
	trainerbattle_single TRAINER_HIKER_LUCAS, RockTunnel_1F_Text_LucasIntro, RockTunnel_1F_Text_LucasDefeat
	msgbox RockTunnel_1F_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_1F_EventScript_Ashton::
	trainerbattle_single TRAINER_POKEMANIAC_ASHTON, RockTunnel_1F_Text_AshtonIntro, RockTunnel_1F_Text_AshtonDefeat
	msgbox RockTunnel_1F_Text_AshtonPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_1F_EventScript_Leah::
	trainerbattle_single TRAINER_PICNICKER_LEAH, RockTunnel_1F_Text_LeahIntro, RockTunnel_1F_Text_LeahDefeat
	msgbox RockTunnel_1F_Text_LeahPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_1F_EventScript_Ariana::
	trainerbattle_single TRAINER_PICNICKER_ARIANA, RockTunnel_1F_Text_ArianaIntro, RockTunnel_1F_Text_ArianaDefeat
	msgbox RockTunnel_1F_Text_ArianaPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_1F_EventScript_Dana::
	trainerbattle_single TRAINER_PICNICKER_DANA, RockTunnel_1F_Text_DanaIntro, RockTunnel_1F_Text_DanaDefeat
	msgbox RockTunnel_1F_Text_DanaPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_1F_Text_LennyIntro::
	.string "Dieser Tunnel ist verdammt lang!$"

RockTunnel_1F_Text_LennyDefeat::
	.string "Oha!\n"
	.string "Du hast gewonnen!$"

RockTunnel_1F_Text_LennyPostBattle::
	.string "Nimm dich vor ONIX in Acht! Es\n"
	.string "quetscht dich wie eine Zitrone aus!$"

RockTunnel_1F_Text_OliverIntro::
	.string "Könnte es sein, dass ich mich\n"
	.string "verlaufen habe?$"

RockTunnel_1F_Text_OliverDefeat::
	.string "Sachte!\n"
	.string "Wo bin ich?\l"
	.string "Wo geht es nach draußen?$"

RockTunnel_1F_Text_OliverPostBattle::
	.string "Diesen Umweg muss ich nur wegen\n"
	.string "des auf Route 12 schlafenden\l"
	.string "Pokémon machen.$"

RockTunnel_1F_Text_LucasIntro::
	.string "Ein Möchtegern wie du sollte etwas\n"
	.string "mehr Respekt zeigen!$"

RockTunnel_1F_Text_LucasDefeat::
	.string "Ich gebe auf!$"

RockTunnel_1F_Text_LucasPostBattle::
	.string "Du hast Talent!\n"
	.string "Du kannst kein Möchtegern sein!$"

RockTunnel_1F_Text_AshtonIntro::
	.string "Meine Pokémon wollen kämpfen!\n"
	.string "Los!$"

RockTunnel_1F_Text_AshtonDefeat::
	.string "Game Over!$"

RockTunnel_1F_Text_AshtonPostBattle::
	.string "Unterwegs werde ich mir ein Zubat\n"
	.string "fangen!$"

RockTunnel_1F_Text_LeahIntro::
	.string "Huch!\p"
	.string "Komm mir im Dunkeln bloß nicht zu\n"
	.string "nahe!$"

RockTunnel_1F_Text_LeahDefeat::
	.string "Es war zu dunkel!$"

RockTunnel_1F_Text_LeahPostBattle::
	.string "Ich habe hier im Tunnel ein\n"
	.string "Maschock gesehen!$"

RockTunnel_1F_Text_DanaIntro::
	.string "Ich bin wegen der Pokémon hierher\n"
	.string "gekommen!$"

RockTunnel_1F_Text_DanaDefeat::
	.string "Alle meine Pokémon wurden besiegt!$"

RockTunnel_1F_Text_DanaPostBattle::
	.string "Dabei sahst du so süß und harmlos\n"
	.string "aus!$"

RockTunnel_1F_Text_ArianaIntro::
	.string "Du besitzt Pokémon!\n"
	.string "Lass uns kämpfen!$"

RockTunnel_1F_Text_ArianaDefeat::
	.string "Du bist ein harter Brocken!$"

RockTunnel_1F_Text_ArianaPostBattle::
	.string "Puh!\n"
	.string "Ich bin ganz nass geschwitzt!$"

RockTunnel_1F_Text_RouteSign::
	.string "FELSTUNNEL\n"
	.string "AZURIA CITY - LAVANDIA$"


VerdanturfTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
	.byte 0

VerdanturfTown_OnTransition:
	setflag FLAG_VISITED_VERDANTURF_TOWN
	setvar VAR_CONTEST_HALL_STATE, 0
	end

VerdanturfTown_EventScript_Twin::
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_TwinTunnelOpen
	msgbox VerdanturfTown_Text_ManTryingToDigTunnel, MSGBOX_DEFAULT
	applymovement LOCALID_VERDANTURF_TWIN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

VerdanturfTown_EventScript_TwinTunnelOpen::
	msgbox VerdanturfTown_Text_ManDugTunnelForLove, MSGBOX_DEFAULT
	applymovement LOCALID_VERDANTURF_TWIN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

VerdanturfTown_EventScript_Man::
	msgbox VerdanturfTown_Text_AirCleanHere, MSGBOX_NPC
	end

VerdanturfTown_EventScript_Camper::
	msgbox VerdanturfTown_Text_MakeBattleTentDebut, MSGBOX_NPC
	end

VerdanturfTown_EventScript_Boy::
	lock
	faceplayer
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_EventScript_BoyTunnelOpen
	msgbox VerdanturfTown_Text_GuyTryingToBustThroughCave, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_BoyTunnelOpen::
	msgbox VerdanturfTown_Text_EasyToGetToRustboroNow, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_EventScript_TownSign::
	msgbox VerdanturfTown_Text_TownSign, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_WandasHouseSign::
	msgbox VerdanturfTown_Text_WandasHouse, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_BattleTentSign::
	msgbox VerdanturfTown_Text_BattleTentSign, MSGBOX_SIGN
	end

VerdanturfTown_EventScript_RusturfTunnelSign::
	msgbox VerdanturfTown_Text_RusturfTunnelSign, MSGBOX_SIGN
	end

VerdanturfTown_Text_ManTryingToDigTunnel:
	.string "Mein Papa hat mir das erzählt.\p"
	.string "Er sagt, der Tunnel sei voller scheuer\n"
	.string "POKéMON.\p"
	.string "Sie haben Angst vor lauten Geräuschen\n"
	.string "und machen einen Aufruhr.\p"
	.string "Daher musste das Tunnelprojekt\n"
	.string "gestoppt werden.\p"
	.string "Aber es gibt da einen Mann. Der ver-\n"
	.string "sucht, den Tunnel alleine zu graben.$"

VerdanturfTown_Text_ManDugTunnelForLove:
	.string "Da war ein Mann, der hat den Tunnel\n"
	.string "ganz alleine für die Frau seines\l"
	.string "Herzens gegraben.\p"
	.string "Ich habe das nie so ganz verstanden.\n"
	.string "Aber, hey, ich finde es trotzdem\l"
	.string "klasse.$"

VerdanturfTown_Text_AirCleanHere:
	.string "Der Wind steht immer so günstig, dass\n"
	.string "die Asche vom Vulkan nie hierher\l"
	.string "geweht wird.\p"
	.string "Die Luft ist sauber und klar.\n"
	.string "Hier zu leben, hilft auch den\n"
	.string "schwachen\l"
	.string "und kränklichen Menschen.$"

VerdanturfTown_Text_MakeBattleTentDebut:
	.string "Meine POKéMON und ich haben gerade\n"
	.string "eine Gewinnserie.\p"
	.string "Daher werde ich nun meinen Auftritt\n"
	.string "im KAMPFCAMP haben.$"

VerdanturfTown_Text_GuyTryingToBustThroughCave:
	.string "Siehst du die Höhle neben dem PKMN-\n"
	.string "SUPERMARKT?\p"
	.string "Da ist ein Typ drin, der die\n"
	.string "Felsbrocken\n"
	.string "sprengen will, damit er auf die andere\l"
	.string "Seite gehen kann.\p"
	.string "Wäre das toll, wenn ich auch dort\n"
	.string "durch- gehen könnte… Ein Besuch in\l"
	.string "METAROST CITY wäre dann ganz einfach.$"

VerdanturfTown_Text_EasyToGetToRustboroNow:
	.string "Die Höhle neben dem PKMN-SUPERMARKT\n"
	.string "ist nun ein Tunnel zur anderen Seite.\n"
	.string "\p"
	.string "Das ist toll! Jetzt kommt man ganz\n"
	.string "einfach nach METAROST CITY, um\l"
	.string "DEVON-WAREN zu kaufen.$"

VerdanturfTown_Text_TownSign:
	.string "WIESENFLUR\p"
	.string "“Das vom Wind gestreichelte Hoch-\n"
	.string "land mit dem süßen Duft des Grases.”$"

VerdanturfTown_Text_WandasHouse:
	.string "HEIKES HAUS$"

VerdanturfTown_Text_BattleTentSign:
	.string "KAMPFCAMP WIESENFLUR\n"
	.string "“Wo Kämpfe Eine Augenweide Sind”$"

VerdanturfTown_Text_RusturfTunnelSign:
	.string "METAFLURTUNNEL\n"
	.string "“Verbindet METAROST CITY und\p"
	.string "WIESENFLUR.\n"
	.string "Das Tunnelprojekt wurde abgebrochen.”$"


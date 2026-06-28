SlateportCity_SternsShipyard_1F_MapScripts::
	.byte 0

SlateportCity_SternsShipyard_1F_EventScript_Dock::
	lockall
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_SternsShipyard_1F_EventScript_FerryReady
	goto_if_set FLAG_BADGE07_GET, SlateportCity_SternsShipyard_1F_EventScript_BrineyJoined
	goto_if_set FLAG_DELIVERED_DEVON_GOODS, SlateportCity_SternsShipyard_1F_EventScript_NeedVeteran
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_SternsShipyard_1F_EventScript_GoFindStern
	msgbox SlateportCity_SternsShipyard_1F_Text_CantMakeHeadsOrTails, MSGBOX_DEFAULT
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_1F_Text_MeetDockDeliverToStern, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DOCK, Common_Movement_FaceOriginalDirection
	waitmovement 0
	setflag FLAG_DOCK_REJECTED_DEVON_GOODS
	setflag FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA
	releaseall
	end

SlateportCity_SternsShipyard_1F_EventScript_FerryReady::
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_1F_Text_FerryIsReady, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_SternsShipyard_1F_EventScript_BrineyJoined::
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_1F_Text_BrineyJoinedUs, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_SternsShipyard_1F_EventScript_GoFindStern::
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_1F_Text_CouldYouFindStern, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_DOCK, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

SlateportCity_SternsShipyard_1F_EventScript_NeedVeteran::
	applymovement LOCALID_DOCK, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SlateportCity_SternsShipyard_1F_Text_CouldUseAdviceFromVeteran, MSGBOX_DEFAULT
	releaseall
	end

SlateportCity_SternsShipyard_1F_EventScript_Scientist1::
	msgbox SlateportCity_SternsShipyard_1F_Text_SeaIsLikeLivingThing, MSGBOX_NPC
	end

SlateportCity_SternsShipyard_1F_EventScript_Scientist2::
	msgbox SlateportCity_SternsShipyard_1F_Text_GetSeasickEasily, MSGBOX_NPC
	end

SlateportCity_SternsShipyard_1F_EventScript_Briney::
	msgbox SlateportCity_SternsShipyard_1F_Text_DecidedToHelpDock, MSGBOX_NPC
	end

SlateportCity_SternsShipyard_1F_Text_CantMakeHeadsOrTails:
	.string "Ähmm… Wenn das hierhin gehört und das\n"
	.string "dahin…\p"
	.string "Wo gehört dieses dann hin?\n"
	.string "Und was ist mit diesem Dingsbums?\p"
	.string "Aaargh! Ich werde daraus einfach nicht\n"
	.string "schlau!$"

SlateportCity_SternsShipyard_1F_Text_MeetDockDeliverToStern:
	.string "Hm? Hallo, ich bin BOOTMAR.\p"
	.string "KAPT. BRIGG hat mich damit\n"
	.string "beauftragt, eine Fähre zu\n"
	.string "konstruieren. \p"
	.string "Oh! Das da…\n"
	.string "Sind das DEVON-WAREN?\p"
	.string "Aber, ähm… Das ist ein ungünstiger\n"
	.string "Zeitpunkt…\p"
	.string "KAPT. BRIGG ist irgendwohin ge-\n"
	.string "gangen. Er sagte, er müsse was\l"
	.string "erledigen.\p"
	.string "Kann ich dich bitten, KAPT. BRIGG zu\n"
	.string "suchen und ihm das Paket zu bringen?$"

SlateportCity_SternsShipyard_1F_Text_CouldYouFindStern:
	.string "BOOTMAR: Wo könnte KAPT. BRIGG wohl\n"
	.string "hingegangen sein?\p"
	.string "Kannst du bitte KAPT. BRIGG suchen und\n"
	.string "ihm die Waren übergeben?$"

SlateportCity_SternsShipyard_1F_Text_CouldUseAdviceFromVeteran:
	.string "BOOTMAR: Der Schiffsbau ist eine\n"
	.string "Kunst. \p"
	.string "Manche Dinge lassen sich auch durch\n"
	.string "Berechnungen nicht vorhersehen.\p"
	.string "Jemand, der das Meer kennt wie seine\n"
	.string "Westentasche, müsste mir helfen…$"

SlateportCity_SternsShipyard_1F_Text_BrineyJoinedUs:
	.string "BOOTMAR: Hallo! MR. BRACK hat sich\n"
	.string "bereit erklärt, uns zu helfen.\p"
	.string "Dank dieses erfahrenen Seemannes\n"
	.string "kommen wir zügig voran.$"

SlateportCity_SternsShipyard_1F_Text_FerryIsReady:
	.string "BOOTMAR: Die Fähre ist bald fertig!\p"
	.string "Die neue MS TIDE ist ein wahres\n"
	.string "Technikwunder!\p"
	.string "Aber ich denke doch, dass wir noch\n"
	.string "einiges besser machen können.\p"
	.string "Weißt du, die technische Entwicklung\n"
	.string "wird niemals abgeschlossen sein.$"

SlateportCity_SternsShipyard_1F_Text_DecidedToHelpDock:
	.string "MR. BRACK: Ah, {PLAYER}{KUN}!\n"
	.string "Es ist schon lange her!\p"
	.string "Aye, seit ich dich kennen gelernt\n"
	.string "habe,\n"
	.string "bin ich wieder voller Tatendrang.\p"
	.string "Also habe ich mich entschlossen,\n"
	.string "BOOTMAR beim Bau der Fähre zu helfen.\n"
	.string "\p"
	.string "Aye, so wie es aussieht, wird die\n"
	.string "Fähre\n"
	.string "viele Passagiere befördern können.\p"
	.string "Aber, weißt du, BOOTMAR ist wirklich\n"
	.string "eine besondere Persönlichkeit.\p"
	.string "Mit seinem technischen Wissen und\n"
	.string "meiner Erfahrung auf See werden wir\l"
	.string "ein ganz besonderes Schiff bauen, aye.$"

SlateportCity_SternsShipyard_1F_Text_SeaIsLikeLivingThing:
	.string "Die Jahreszeit, das Wetter, der Mond,\n"
	.string "der vom Himmel herabstrahlt…\p"
	.string "Das sind die Bedingungen, die die See\n"
	.string "so wechselhaft machen.\p"
	.string "Ganz genau!\n"
	.string "Die See ist wie ein lebendiges Wesen!$"

SlateportCity_SternsShipyard_1F_Text_GetSeasickEasily:
	.string "Ich werde sehr schnell seekrank.\n"
	.string "Deshalb helfe ich lieber hier aus.$"


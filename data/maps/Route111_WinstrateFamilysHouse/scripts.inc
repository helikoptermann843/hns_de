Route111_WinstrateFamilysHouse_MapScripts::
	.byte 0

Route111_WinstrateFamilysHouse_EventScript_Victor::
	lock
	faceplayer
	setvar VAR_0x8008, LOCALID_WINSTRATE_HOUSE_VICTOR
	msgbox Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou, MSGBOX_DEFAULT
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_Victoria::
	lock
	faceplayer
	setvar VAR_0x8008, LOCALID_WINSTRATE_HOUSE_VICTORIA
	goto_if_set FLAG_RECEIVED_MACHO_BRACE, Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace
	msgbox Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace, MSGBOX_DEFAULT
	giveitem ITEM_MACHO_BRACE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_MACHO_BRACE
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_ReceivedMachoBrace::
	msgbox Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles, MSGBOX_DEFAULT
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_Vivi::
	lock
	faceplayer
	setvar VAR_0x8008, LOCALID_WINSTRATE_HOUSE_VIVI
	msgbox Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers, MSGBOX_DEFAULT
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_Vicky::
	lock
	faceplayer
	setvar VAR_0x8008, LOCALID_WINSTRATE_HOUSE_VICKY
	goto_if_set FLAG_TEMP_4, Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrong, MSGBOX_DEFAULT
	setflag FLAG_TEMP_4
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_AlreadySpokenTo::
	msgbox Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort, MSGBOX_DEFAULT
	goto Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection
	end

Route111_WinstrateFamilysHouse_EventScript_FaceOriginalDirection::
	closemessage
	applymovement VAR_0x8008, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

Route111_WinstrateFamilysHouse_Text_MySonIsStrongerThanYou:
	.string "Ich habe noch nie einen TRAINER ge-\n"
	.string "sehen, der seine POKéMON so meister-\l"
	.string "haft einsetzt wie du.\p"
	.string "Aber, ich muss dir auch sagen… mein\n"
	.string "Sohn ist stärker als du.\p"
	.string "Er hat sogar die POKéMON LIGA heraus-\n"
	.string "gefordert. Das solltest du wissen.$"

Route111_WinstrateFamilysHouse_Text_LikeYouToHaveMachoBrace:
	.string "Wir benutzen dieses MACHOBAND, um die\n"
	.string "POKéMON im Training noch mehr\l"
	.string "zu stärken.\p"
	.string "Da du unsere gesamte Familie besiegt\n"
	.string "hast, brauchst du es vielleicht gar\l"
	.string "nicht. Aber wir möchten dir dieses\l"
	.string "MACHOBAND trotzdem gerne schenken.$"

Route111_WinstrateFamilysHouse_Text_PassionateAboutBattles:
	.string "Wenn es um POKéMON-Kämpfe geht, ist\n"
	.string "die ganze Familie sehr\l"
	.string "leidenschaftlich.$"

Route111_WinstrateFamilysHouse_Text_StrongerFamilyMembers:
	.string "Mami ist stärker als Papi.\p"
	.string "Ich bin stärker als Mami.\p"
	.string "Und Omi ist stärker als ich!\p"
	.string "Und mein großer Bruder ist noch\n"
	.string "stärker als Omi!$"

Route111_WinstrateFamilysHouse_Text_GrandsonStrong:
	.string "Es steht außer Frage, dass du stark\n"
	.string "bist.\p"
	.string "Aber wenn du gegen meinen Enkel an-\n"
	.string "treten willst, bringt dir das nur\n"
	.string "Tränen\l"
	.string "der Frustration ein.\p"
	.string "Er ist viel stärker als jeder TRAINER,\n"
	.string "den unsere Familie kennt.\p"
	.string "Er müsste jetzt gerade eigentlich\n"
	.string "dabei sein, die POKéMON LIGA\l"
	.string "herauszufordern.\p"
	.string "Wie ich meinen Enkel kenne, ist er\n"
	.string "mittlerweile bestimmt schon der CHAMP!$"

Route111_WinstrateFamilysHouse_Text_GrandsonStrongShort:
	.string "Mein Enkel müsste jetzt gerade dabei\n"
	.string "sein, die POKéMON LIGA\l"
	.string "herauszufordern.\p"
	.string "Wie ich meinen Enkel kenne, ist er\n"
	.string "mittlerweile bestimmt schon der CHAMP!$"


VerdanturfTown_WandasHouse_MapScripts::
	.byte 0

VerdanturfTown_WandasHouse_EventScript_Wally::
	lock
	faceplayer
	goto_if_set FLAG_WALLY_SPEECH, VerdanturfTown_WandasHouse_EventScript_WallyShortSpeech
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeech, MSGBOX_DEFAULT
	setflag FLAG_WALLY_SPEECH
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallyShortSpeech::
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeechShort, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysUncle::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff
	msgbox VerdanturfTown_WandasHouse_Text_WallysNextDoor, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff::
	msgbox VerdanturfTown_WandasHouse_Text_WallySlippedOff, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande::
	msgbox VerdanturfTown_WandasHouse_Text_WallyGoneThatFar, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend::
	msgbox VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay, MSGBOX_NPC
	end

VerdanturfTown_WandasHouse_EventScript_Wanda::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WandaDontWorry
	goto_if_set FLAG_DEFEATED_WALLY_MAUVILLE, VerdanturfTown_WandasHouse_EventScript_MeetWanda
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_MeetWanda::
	msgbox VerdanturfTown_WandasHouse_Text_MeetWanda, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_WandaDontWorry::
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysAunt::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen::
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened::
	msgbox VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande::
	msgbox VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_Text_StrongerSpeech:
	.string "Heiko: Ich habe gegen dich verloren,\n"
	.string "{PLAYER}. Aber das betrübt mich nicht.\n"
	.string "\p"
	.string "Ich habe ein neues Ziel in meinem\n"
	.string "Leben.\n"
	.string "Zusammen mit meinem Trasla mache\p"
	.string "ich mich auf, die Arenen herauszu-\n"
	.string "fordern und ein großer Trainer zu\l"
	.string "werden.\p"
	.string "Behalte mich ruhig im Auge, {PLAYER}.\n"
	.string "Bald bin ich stärker als du!\p"
	.string "Und dann werde ich dich zu einem neuen\n"
	.string "Kampf herausfordern.$"

VerdanturfTown_WandasHouse_Text_StrongerSpeechShort:
	.string "Heiko: Behalte mich ruhig im Auge,\n"
	.string "{PLAYER}. Bald bin ich stärker als du!\n"
	.string "\p"
	.string "Und dann werde ich dich zu einem neuen\n"
	.string "Kampf herausfordern.$"

VerdanturfTown_WandasHouse_Text_WallysNextDoor:
	.string "Onkel: Oh! {PLAYER}{KUN}!\n"
	.string "Du findest Heiko nebenan.\p"
	.string "Aber es gibt etwas, das ich dir sagen\n"
	.string "muss.\p"
	.string "Diese natürliche Umgebung hat Wunder\n"
	.string "gewirkt bei Heikos Gesundheit.\p"
	.string "Und nicht nur die natürliche Umgebung!\n"
	.string "Ich denke, auch die Freundschaft zu\l"
	.string "den Pokémon hat ihm geholfen…$"

VerdanturfTown_WandasHouse_Text_WallySlippedOff:
	.string "Heiko ist weggegangen…\n"
	.string "Er ist nun auf seinem eigenen Weg…$"

VerdanturfTown_WandasHouse_Text_WallyGoneThatFar:
	.string "Onkel: Stimmt das?\n"
	.string "Heiko ist ganz alleine in die Welt\l"
	.string "hinausgezogen…\p"
	.string "Ich sollte ihn unterstützen - er ist\n"
	.string "der Sohn meines kleinen Bruders…$"

VerdanturfTown_WandasHouse_Text_MeetWanda:
	.string "Heike: Wer bist du?\n"
	.string "Oh, ja, ich weiß schon…\p"
	.string "Du bist {PLAYER}. Heiko hat mir schon\n"
	.string "viel von dir erzählt.\p"
	.string "Ich bin Heikos Cousine.\n"
	.string "Nett, dich kennen zu lernen!\p"
	.string "Ich finde, seit Heiko hier lebt, ist\n"
	.string "er\l"
	.string "viel gesünder und lebendiger geworden.$"

VerdanturfTown_WandasHouse_Text_DontWorryAboutWally:
	.string "Heike: Mach dir keine Sorgen um Heiko.\n"
	.string "Ihm geht es mit Sicherheit gut.\p"
	.string "Ich kenne doch meinen kleinen Vetter.\n"
	.string "Außerdem hat er sein Pokémon dabei.$"

VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay:
	.string "Dank dir kann ich meine Freundin jetzt\n"
	.string "jeden Tag sehen. Ob ich glücklich bin?\l"
	.string "Darauf kannst du wetten!$"

VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven:
	.string "Der Freund meiner Tochter besitzt viel\n"
	.string "Schwung und Energie.\p"
	.string "Er gräbt ununterbrochen einen Tunnel,\n"
	.string "damit er meine Tochter sehen kann.\p"
	.string "Meine Tochter ist etwas besorgt des-\n"
	.string "wegen und schaut jeden Tag nach ihm.$"

VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging:
	.string "Es ist unglaublich! Der Freund meiner\n"
	.string "Tochter hat den Tunnel\p"
	.string "von Hand gegraben! Einfach sagenhaft!$"

VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally:
	.string "Sollte Heiko irgendetwas passieren,\n"
	.string "könnte ich seinen Eltern in Blütenburg\l"
	.string "City nicht mehr in die Augen schauen…$"

VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande:
	.string "Heiko war in Prachtpolis City?\p"
	.string "Seine Eltern in Blütenburg City werden\n"
	.string "erstaunt sein, das zu hören.$"


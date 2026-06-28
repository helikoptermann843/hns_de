LilycoveCity_CoveLilyMotel_2F_MapScripts::
	.byte 0

LilycoveCity_CoveLilyMotel_2F_EventScript_GameDesigner::
	lock
	faceplayer
	call_if_unset FLAG_TEMP_2, LilycoveCity_CoveLilyMotel_2F_EventScript_ShowMeCompletedDex
	call_if_set FLAG_TEMP_2, LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma
	specialvar VAR_RESULT, HasAllRegionalMons
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_CoveLilyMotel_2F_EventScript_AllHoennMonsFanfare
	release
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_ShowMeCompletedDex::
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex, MSGBOX_DEFAULT
	return

LilycoveCity_CoveLilyMotel_2F_EventScript_AllHoennMonsFanfare::
	setflag FLAG_TEMP_2
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	goto LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_ShowDiploma::
	message LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	special Special_ShowDiploma
	waitstate
	release
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_Programmer::
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ImTheProgrammer, MSGBOX_NPC
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_GraphicArtist::
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ImTheGraphicArtist, MSGBOX_NPC
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_FatMan::
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_GirlsAreCute, MSGBOX_NPC
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_Woman::
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_SeaBreezeTicklesHeart, MSGBOX_NPC
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_GameBoyKid::
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_NeverLeaveWithoutGameBoy, MSGBOX_NPC
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_Scott::
	lock
	faceplayer
	goto_if_set FLAG_MET_SCOTT_IN_LILYCOVE, LilycoveCity_CoveLilyMotel_2F_EventScript_MetScott
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_SnoozingPreferBattles, MSGBOX_DEFAULT
	addvar VAR_SCOTT_STATE, 1
	setflag FLAG_MET_SCOTT_IN_LILYCOVE
	release
	end

LilycoveCity_CoveLilyMotel_2F_EventScript_MetScott::
	msgbox LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy, MSGBOX_DEFAULT
	release
	end

LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex:
	.string "Ich bin der GAME DESIGNER.\p"
	.string "Oh, wirklich?\n"
	.string "Du arbeitest an einem POKéDEX?\p"
	.string "Es ist schwer, ihn zu\n"
	.string "vervollständigen,\n"
	.string "aber du darfst nicht aufgeben.\p"
	.string "Sobald du ihn vervollständigt hast,\n"
	.string "komm mich wieder besuchen.$"

LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis:
	.string "Wow! Das ist beeindruckend!\n"
	.string "Wirklich äußerst beeindruckend!\p"
	.string "Dein POKéDEX ist absolut vollständig!\n"
	.string "Du musst die POKéMON wirklich lieben!\n"
	.string "\p"
	.string "Ich bin echt beeindruckt!\p"
	.string "Ich möchte dir als Zeichen meiner\n"
	.string "Aner- kennung gerne etwas schenken!$"

LilycoveCity_CoveLilyMotel_2F_Text_ImTheProgrammer:
	.string "Ich? Sprichst du mit mir?\n"
	.string "Ich bin der PROGRAMMIERER.\p"
	.string "Ich frage mich, wie die EINARMIGEN\n"
	.string "BANDITen hier wohl so sind.$"

LilycoveCity_CoveLilyMotel_2F_Text_ImTheGraphicArtist:
	.string "Ich bin der GRAPHIC ARTIST! Sind die\n"
	.string "POKéMON in der Region von HOENN\l"
	.string "nicht interessant?$"

LilycoveCity_CoveLilyMotel_2F_Text_GirlsAreCute:
	.string "Die MÄDCHEN mit den SCHWIMMREIFEN\n"
	.string "sind total niedlich, meinst du nicht?\l"
	.string "Ein Kampf gegen so niedliche Mädchen…\n"
	.string "\p"
	.string "Huuh, das ist vielleicht ein Spaß!\p"
	.string "Und die ZWILLINGE erst! Sind die\n"
	.string "süß!?!\n"
	.string "Ein 2-gegen-2-Kampf mit ZWILLINGEN…\p"
	.string "Huuh, einfach unglaublicher Spaß!$"

LilycoveCity_CoveLilyMotel_2F_Text_SeaBreezeTicklesHeart:
	.string "Die frische Seebrise berührt mein\n"
	.string "Herz. Es ist einfach wundervoll hier.$"

LilycoveCity_CoveLilyMotel_2F_Text_NeverLeaveWithoutGameBoy:
	.string "Du kannst nie vorhersagen, wann und wo\n"
	.string "die Leute dich herausfordern.\p"
	.string "Daher gehe ich niemals ohne meinen\n"
	.string "GAME BOY ADVANCE aus dem Haus.$"

LilycoveCity_CoveLilyMotel_2F_Text_SnoozingPreferBattles:
	.string "SCOTT: … … … …\n"
	.string "…\l"
	.string "… … … … …\l"
	.string "Zzzzz…\p"
	.string "… … … … …\n"
	.string "Wie?!?\l"
	.string "Oh, tut mir Leid!\l"
	.string "Ich habe ein bisschen gedöst!\p"
	.string "Ich wollte mir mal einen POKéMON\n"
	.string "WETTBEWERB anschauen.\p"
	.string "Das scheint ganz interessant zu sein,\n"
	.string "aber…\p"
	.string "Vielleicht bin ich ja Purist - aber\n"
	.string "ich\n"
	.string "bevorzuge Kämpfe und starke TRAINER.\p"
	.string "Aber das liegt wohl an mir.\p"
	.string "Ich hoffe du genießt die ARENen,\n"
	.string "WETTBEWERBe, KAMPFCAMPs und all\l"
	.string "die wunderbaren Dinge, {PLAYER}{KUN}!$"

LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy:
	.string "SCOTT: Ich denke schon, dass es auf\n"
	.string "Strategie ankommt, um einen WETTBEWERB\l"
	.string "zu gewinnen.\p"
	.string "Sich eine Strategie auszudenken ist\n"
	.string "nur ein Weg, ein guter TRAINER zu\l"
	.string "werden…$"


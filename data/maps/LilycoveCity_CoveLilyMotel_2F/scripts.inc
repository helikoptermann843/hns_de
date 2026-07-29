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
	.string "Ich bin der Game Designer.\p"
	.string "Oh, wirklich?\n"
	.string "Du arbeitest an einem Pokédex?\p"
	.string "Es ist schwer, ihn zu\n"
	.string "vervollständigen,\n"
	.string "aber du darfst nicht aufgeben.\p"
	.string "Sobald du ihn vervollständigt hast,\n"
	.string "komm mich wieder besuchen.$"

LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis:
	.string "Wow! Das ist beeindruckend!\n"
	.string "Wirklich äußerst beeindruckend!\p"
	.string "Dein Pokédex ist absolut vollständig!\n"
	.string "Du musst die Pokémon wirklich lieben!\n"
	.string "\p"
	.string "Ich bin echt beeindruckt!\p"
	.string "Ich möchte dir als Zeichen meiner\n"
	.string "Aner- kennung gerne etwas schenken!$"

LilycoveCity_CoveLilyMotel_2F_Text_ImTheProgrammer:
	.string "Ich? Sprichst du mit mir?\n"
	.string "Ich bin der Programmierer.\p"
	.string "Ich frage mich, wie die Einarmigen\n"
	.string "Banditen hier wohl so sind.$"

LilycoveCity_CoveLilyMotel_2F_Text_ImTheGraphicArtist:
	.string "Ich bin der Graphic Artist! Sind die\n"
	.string "Pokémon in der Region von Hoenn\l"
	.string "nicht interessant?$"

LilycoveCity_CoveLilyMotel_2F_Text_GirlsAreCute:
	.string "Die Mädchen mit den Schwimmreifen\n"
	.string "sind total niedlich, meinst du nicht?\l"
	.string "Ein Kampf gegen so niedliche Mädchen…\n"
	.string "\p"
	.string "Huuh, das ist vielleicht ein Spaß!\p"
	.string "Und die Zwillinge erst! Sind die\n"
	.string "süß!?!\n"
	.string "Ein 2-gegen-2-Kampf mit Zwillingen…\p"
	.string "Huuh, einfach unglaublicher Spaß!$"

LilycoveCity_CoveLilyMotel_2F_Text_SeaBreezeTicklesHeart:
	.string "Die frische Seebrise berührt mein\n"
	.string "Herz. Es ist einfach wundervoll hier.$"

LilycoveCity_CoveLilyMotel_2F_Text_NeverLeaveWithoutGameBoy:
	.string "Du kannst nie vorhersagen, wann und wo\n"
	.string "die Leute dich herausfordern.\p"
	.string "Daher gehe ich niemals ohne meinen\n"
	.string "Game Boy Advance aus dem Haus.$"

LilycoveCity_CoveLilyMotel_2F_Text_SnoozingPreferBattles:
	.string "Scott: … … … …\n"
	.string "…\l"
	.string "… … … … …\l"
	.string "Zzzzz…\p"
	.string "… … … … …\n"
	.string "Wie?!?\l"
	.string "Oh, tut mir Leid!\l"
	.string "Ich habe ein bisschen gedöst!\p"
	.string "Ich wollte mir mal einen Pokémon\n"
	.string "Wettbewerb anschauen.\p"
	.string "Das scheint ganz interessant zu sein,\n"
	.string "aber…\p"
	.string "Vielleicht bin ich ja Purist - aber\n"
	.string "ich\n"
	.string "bevorzuge Kämpfe und starke Trainer.\p"
	.string "Aber das liegt wohl an mir.\p"
	.string "Ich hoffe du genießt die Arenen,\n"
	.string "Wettbewerbe, Kampfcamps und all\l"
	.string "die wunderbaren Dinge, {PLAYER}{KUN}!$"

LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy:
	.string "Scott: Ich denke schon, dass es auf\n"
	.string "Strategie ankommt, um einen Wettbewerb\l"
	.string "zu gewinnen.\p"
	.string "Sich eine Strategie auszudenken ist\n"
	.string "nur ein Weg, ein guter Trainer zu\l"
	.string "werden…$"


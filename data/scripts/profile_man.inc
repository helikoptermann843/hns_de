ProfileMan_EventScript_Man::
	lock
	faceplayer
	goto_if_set FLAG_SYS_CHAT_USED, ProfileMan_EventScript_GivenProfileBefore
	msgbox ProfileMan_Text_CollectTrainerProfiles, MSGBOX_DEFAULT
	goto ProfileMan_EventScript_AskToSeeProfile
	end

ProfileMan_EventScript_AskToSeeProfile::
	msgbox ProfileMan_Text_MayISeeYourProfile, MSGBOX_DEFAULT
	multichoice 17, 6, MULTI_YESNOINFO_2, FALSE
	switch VAR_RESULT
	case 0, ProfileMan_EventScript_CreateProfile
	case 1, ProfileMan_EventScript_DeclineShowProfile
	case 2, ProfileMan_EventScript_Info
	case MULTI_B_PRESSED, ProfileMan_EventScript_DeclineShowProfile
	end

ProfileMan_EventScript_Info::
	msgbox ProfileMan_Text_EasyChatExplanation, MSGBOX_DEFAULT
	goto ProfileMan_EventScript_AskToSeeProfile
	end

ProfileMan_EventScript_CreateProfile::
	msgbox ProfileMan_Text_LetsSeeItThen, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, EASY_CHAT_TYPE_PROFILE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_RESULT, 0, ProfileMan_EventScript_CancelShowProfile
	goto_if_eq VAR_RESULT, 1, ProfileMan_EventScript_ShowProfile
	end

ProfileMan_EventScript_CancelShowProfile::
	msgbox ProfileMan_Text_NotIntoItRightNow, MSGBOX_DEFAULT
	release
	end

ProfileMan_EventScript_ShowProfile::
	setvar VAR_0x8004, 0
	special ShowEasyChatProfile
	waitmessage
	delay 80
	msgbox ProfileMan_Text_FantasticProfile, MSGBOX_DEFAULT
	release
	end

ProfileMan_EventScript_DeclineShowProfile::
	msgbox ProfileMan_Text_ImagineYouWouldHaveWonderfulProfile, MSGBOX_DEFAULT
	release
	end

ProfileMan_EventScript_GivenProfileBefore::
	msgbox ProfileMan_Text_YouHaveWonderfulSmile, MSGBOX_DEFAULT
	goto ProfileMan_EventScript_AskToSeeNewProfile
	end

ProfileMan_EventScript_AskToSeeNewProfile::
	msgbox ProfileMan_Text_MayISeeYourNewProfile, MSGBOX_DEFAULT
	multichoice 17, 6, MULTI_YESNOINFO_2, FALSE
	switch VAR_RESULT
	case 0, ProfileMan_EventScript_CreateNewProfile
	case 1, ProfileMan_EventScript_DeclineNewProfile
	case 2, ProfileMan_EventScript_InfoNewProfile
	case MULTI_B_PRESSED, ProfileMan_EventScript_DeclineNewProfile
	end

ProfileMan_EventScript_InfoNewProfile::
	msgbox ProfileMan_Text_EasyChatExplanation, MSGBOX_DEFAULT
	goto ProfileMan_EventScript_AskToSeeNewProfile
	end

ProfileMan_EventScript_CreateNewProfile::
	msgbox ProfileMan_Text_EvenBetterThanLastProfile, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, EASY_CHAT_TYPE_PROFILE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_RESULT, 0, ProfileMan_EventScript_CancelShowProfile
	goto_if_eq VAR_RESULT, 1, ProfileMan_EventScript_ShowProfile
	end

ProfileMan_EventScript_DeclineNewProfile::
	msgbox ProfileMan_Text_LikeProfileWayItIs, MSGBOX_DEFAULT
	release
	end

@ Unused
ProfileMan_EventScript_Ret::
	return

ProfileMan_Text_CollectTrainerProfiles:
	.string "Hallo, du! Trainer!\n"
	.string "Du hast ein wundervolles Lächeln.\p"
	.string "Ich habe ein Hobby: Ich sammle die\n"
	.string "Profile von Pokémon-Trainern.$"

ProfileMan_Text_MayISeeYourProfile:
	.string "Nun, wie sieht es aus?\n"
	.string "Darf ich dein Profil sehen?$"

ProfileMan_Text_EasyChatExplanation:
	.string "Du erstellst dir dein eigenes Profil,\n"
	.string "indem du 4 Worte oder Phrasen\l"
	.string "zusammenstellst.\p"
	.string "Ich gebe dir ein Beispiel für ein Profil\n"
	.string "mit vier Begriffen.\p"
	.string "Du kannst diese vier Begriffe mit\n"
	.string "anderen Begriffen tauschen, ganz\l"
	.string "so, wie du dein Profil haben möchtest.\p"
	.string "Dir stehen sehr viele Begriffe\n"
	.string "zur Verfügung.\p"
	.string "Sie sind nach Gruppen sortiert wie\n"
	.string "Pokémon, Lifestyle und Hobbies. So\l"
	.string "hast du einen besseren Überblick.\p"
	.string "Wähle zunächst eine Gruppe aus, um\n"
	.string "eine Liste entsprechender Begriffe\p"
	.string "zu öffnen. Dann triffst du deine Wahl.\p"
	.string "Suche dir beliebige Begriffe aus den\n"
	.string "Gruppen aus, um dein ganz persönliches\l"
	.string "Profil zu erstellen.$"

ProfileMan_Text_LetsSeeItThen:
	.string "Ja! Danke schön!\n"
	.string "Zeigst du mir jetzt dein Profil?$"

ProfileMan_Text_ImagineYouWouldHaveWonderfulProfile:
	.string "Oh, nein, ehrlich?\p"
	.string "Ich dachte, jemand wie du hätte ein\n"
	.string "wundervolles Profil…$"

ProfileMan_Text_NotIntoItRightNow:
	.string "Oh! Du bist noch nicht so weit?\p"
	.string "Nun, dann zeig es mir doch später!$"

ProfileMan_Text_YouHaveWonderfulSmile:
	.string "Hallo, da drüben! Trainer!\p"
	.string "Du hast ein wundervolles Lächeln.$"

ProfileMan_Text_MayISeeYourNewProfile:
	.string "Darf ich dein neues Profil sehen?$"

ProfileMan_Text_EvenBetterThanLastProfile:
	.string "Ja? Danke schön!\p"
	.string "Ich hoffe, das Profil ist besser als das\n"
	.string "vorhergehende.$"

ProfileMan_Text_LikeProfileWayItIs:
	.string "Oh, du magst dein Profil, wie es ist?\p"
	.string "Ich mache dir keine Vorwürfe - so, wie\n"
	.string "es jetzt ist, ist das Profil wunderbar.$"

ProfileMan_Text_FantasticProfile:
	.string "Fa-fantastisch!\p"
	.string "Dein Profil… Einfach wunderbar!\n"
	.string "Es sagt wirklich alles über dich aus.\p"
	.string "Jeder, der dieses Profil sieht, wird\n"
	.string "von dir entzückt sein!\p"
	.string "Danke schön.$"

@ Unused
ProfileMan_Text_YouKnowSecretSaying:
	.string "Oh?\n"
	.string "Du kennst den Geheimspruch!\p"
	.string "Das heißt, du bist jetzt Mitglied im\n"
	.string "Klub für geheimnisvolle Ereignisse!$"

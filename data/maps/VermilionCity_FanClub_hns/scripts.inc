VermilionCity_FanClub_hns_MapScripts::
	.byte 0

VermilionCity_FanClub_EventScript_Chairman::
	lock
	faceplayer
	goto_if_eq VAR_FAN_CLUB_GUY, 1, VermilionCity_FanClub_EventScript_ChairmanAfter
	msgbox PokemonFanClub_Text_Chairman_Intro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, FALSE, VermilionCity_FanClub_EventScript_ChairmanRefused
	msgbox PokemonFanClub_Text_Chairman_Rapidash, MSGBOX_DEFAULT
	msgbox PokemonFanClub_Text_Chairman_Gift, MSGBOX_DEFAULT
	giveitem ITEM_RARE_CANDY
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setvar VAR_FAN_CLUB_GUY, 1
	msgbox PokemonFanClub_Text_Chairman_Candy, MSGBOX_DEFAULT
	closemessage
	release
	end

VermilionCity_FanClub_EventScript_ChairmanRefused::
	msgbox PokemonFanClub_Text_Chairman_Disappointed, MSGBOX_DEFAULT
	closemessage
	release
	end

VermilionCity_FanClub_EventScript_ChairmanAfter::
	msgbox PokemonFanClub_Text_Chairman_MoreTales, MSGBOX_DEFAULT
	closemessage
	release
	end

VermilionCity_FanClub_EventScript_Woman1::
	msgbox PokemonFanClub_Text_Receptionist, MSGBOX_NPC
	end

VermilionCity_FanClub_EventScript_Woman2::
	msgbox PokemonFanClub_Text_Teacher, MSGBOX_NPC
	end

VermilionCity_FanClub_EventScript_ClefairyGuy::
	lock
	faceplayer
	msgbox PokemonFanClub_Text_ClefairyGuy_Adorable, MSGBOX_DEFAULT
	goto_if_eq VAR_FAN_CLUB_CLEFAIRY, 1, VermilionCity_FanClub_EventScript_ClefairyGiveDoll
	goto_if_ge VAR_FAN_CLUB_CLEFAIRY, 2, VermilionCity_FanClub_EventScript_ClefairyAfter
	msgbox PokemonFanClub_Text_ClefairyGuy_MakingDo, MSGBOX_DEFAULT
	closemessage
	release
	end

VermilionCity_FanClub_EventScript_ClefairyGiveDoll::
	msgbox PokemonFanClub_Text_ClefairyGuy_ReturnDoll, MSGBOX_DEFAULT
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_HIDE_FAN_CLUB_CLEFAIRY_DOLL
	removeobject LOCALID_FAN_CLUB_CLEFAIRY_DOLL
	fadescreenswapbuffers FADE_FROM_BLACK
	giveitem ITEM_LOST_ITEM
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setvar VAR_FAN_CLUB_CLEFAIRY, 2
	msgbox PokemonFanClub_Text_ClefairyGuy_GoingToGetOne, MSGBOX_DEFAULT
	closemessage
	release
	end

VermilionCity_FanClub_EventScript_ClefairyAfter::
	msgbox PokemonFanClub_Text_ClefairyGuy_GoingToGetOne, MSGBOX_DEFAULT
	closemessage
	release
	end

VermilionCity_FanClub_EventScript_Bayleef::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BAYLEEF, CRY_MODE_NORMAL
	msgbox PokemonFanClub_Text_Bayleef, MSGBOX_DEFAULT
	waitmoncry
	release
	end


PokemonFanClub_Text_Chairman_Intro:
	.string "Ich bin der Präsident vom\n"
	.string "POKéMON FANCLUB.\p"
	.string "Ich habe über 150 POKéMON.\n"
	.string "aufgezogen.\p"
	.string "Ich liebe POKéMON über alles.\p"
	.string "Bist du gekommen um von mir\n"
	.string "mehr über POKéMON zu hören?$"

PokemonFanClub_Text_Chairman_Rapidash:
	.string "Gut! Dann hör zu!\p"
	.string "Also… mein liebling Galoppa…\p"
	.string "Ist… süß… lieblich… schlau…\n"
	.string "unfassbar…\l"
	.string "und… toll… oh… glaubst du\l"
	.string "auch?…\l"
	.string "Zu viel… wild… schön…\l"
	.string "niedlich…\l"
	.string "liebe es!\p"
	.string "Umarme… wenn… schläft… warm\n"
	.string "und kuschlig…\l"
	.string "Oh, und… Spektakulär…\l"
	.string "einfach… so göttlich…\p"
	.string "Oops! Schau auf die Uhr!\n"
	.string "Ich rede zu viel!$"

PokemonFanClub_Text_Chairman_Gift:
	.string "Danke das du zugehört hast.\n"
	.string "Ich möchte dir etwas geben!$"

PokemonFanClub_Text_Chairman_Candy:
	.string "Das SONDERBONBON\n"
	.string "macht Pokémon stärker.\p"
	.string "Meine Pokémon sollen lieber\p"
	.string "durch ihre Kämpfe\n"
	.string "stärker werden. Du kannst es haben.$"

PokemonFanClub_Text_Chairman_MoreTales:
	.string "Hallo!\p"
	.string "Besuchst du mich\n"
	.string "wieder wegen meiner Pokémon?\p"
	.string "Nein? Oh… Ich\n"
	.string "hätte noch so viele Geschichten…$"

PokemonFanClub_Text_Chairman_Disappointed:
	.string "Schade…\p"
	.string "Komm wieder, wenn du mehr\p"
	.string "Geschichten hören möchtest.$"

PokemonFanClub_Text_Receptionist:
	.string "Unser VORSITZENDER\n"
	.string "ist sehr redselig in Bezug auf - MON…$"

@=Clefairy=Guy=========================================================================================================
PokemonFanClub_Text_ClefairyGuy_Adorable:
	.string "Das ist ein PIEPI! Was?\p"
	.string "Ach so! Das ist eine PUPPE von PIEPI.$"

PokemonFanClub_Text_ClefairyGuy_MakingDo:
	.string "Ich mag PIEPI, aber ich könnte\p"
	.string "nie eines fangen. Die PUPPE,\p"
	.string "die ich fand, muss mir genügen.$"

PokemonFanClub_Text_ClefairyGuy_ReturnDoll:
	.string "Das ist ein PIEPI! Was?\p"
	.string "Ach so! Das ist eine PUPPE von PIEPI.$"

PokemonFanClub_Text_ClefairyGuy_GoingToGetOne:
	.string "Du wirst schon sehen. Ich freunde\p"
	.string "mich noch mit einem echten PIEPI an.$"

@============================================================================================================================

PokemonFanClub_Text_Teacher:
	.string "Schau dir mein süßes LORBLATT an!\p"
	.string "Das Blatt auf\n"
	.string "seinem Kopf ist so goldig!$"

PokemonFanClub_Text_ClefairyDoll:
	.string "Das ist ein PIEPI! Was?\p"
	.string "Ach so! Das ist eine PUPPE von PIEPI.$"

PokemonFanClub_Text_Bayleef:
	.string "LORBLATT: Bla, blatt!$"

PokemonFanClub_Text_Listen:
	.string "Anderen Trainern hören wir höflich zu.$"

PokemonFanClub_Text_Bragging:
	.string "Wenn jemand prahlt, wird\p"
	.string "sofort zurückgeprahlt!$"

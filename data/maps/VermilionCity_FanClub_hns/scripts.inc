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
	.string "Ich bin der Vorsitzende des\n"
	.string "Pokémon Fan Clubs!\p"
	.string "Ich habe schon mehr als 150\n"
	.string "Pokémon trainiert!\p"
	.string "Ach, ich könnte einfach stundenlang\n"
	.string "über Pokémon reden…\p"
	.string "Möchtest du eine meiner\n"
	.string "tollen Pokémon-Geschichten hören?$"

PokemonFanClub_Text_Chairman_Rapidash:
	.string "Gut! Dann hör zu!\p"
	.string "Also… mein Liebling Galoppa…\p"
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
	.string "Danke, dass du zugehört hast.\n"
	.string "Ich möchte dir etwas geben!$"

PokemonFanClub_Text_Chairman_Candy:
	.string "Dieses Sonderbonbon macht\n"
	.string "schlaffe Pokémon fit!\p"
	.string "Aber meine Pokémon sollen lieber\n"
	.string "durch Kämpfe stark werden.\p"
	.string "Du kannst es also haben!$"

PokemonFanClub_Text_Chairman_MoreTales:
	.string "Oh, hallo {PLAYER}!\p"
	.string "Bist du hier, um ein paar neue\n"
	.string "wunderbare Geschichten über mich\l"
	.string "und meine Pokémon zu hören?\p"
	.string "Nein? Echt nicht? Hm, zu schade…\n"
	.string "Du bist so ein Langweiler…\n$"

PokemonFanClub_Text_Chairman_Disappointed:
	.string "Du bist echt ein Langweiler…\p"
	.string "Komm wieder, wenn du das Bedürfnis\n"
	.string "verspürst, doch eine meiner\l"
	.string "wunderbaren Geschichten zu hören!$"

PokemonFanClub_Text_Receptionist:
	.string "Unser Vorsitzender ist wirklich sehr\n"
	.string "redselig, wenn es um Pokémon geht.$"

@=Clefairy=Guy=========================================================================================================
PokemonFanClub_Text_ClefairyGuy_Adorable:
	.string "Das ist ein Piepi! Was?\p"
	.string "Ach so! Das ist eine Puppe von Piepi.$"

PokemonFanClub_Text_ClefairyGuy_MakingDo:
	.string "Ich mag Piepi, aber ich werde es nie\n"
	.string "schaffen, eins zu fangen. Tja, ich\l"
	.string "werde mich wohl mit dieser Poképuppe\l"
	.string "begnügen müssen, die ich gefunden habe.$"

PokemonFanClub_Text_ClefairyGuy_ReturnDoll:
	.string "Das ist ein Piepi! Was?\p"
	.string "Ach so! Das ist eine Puppe von Piepi.$"

PokemonFanClub_Text_ClefairyGuy_GoingToGetOne:
	.string "Irgendwann finde ich ein echtes Piepi\n"
	.string "als Freund! Du wirst schon sehen!$"

@============================================================================================================================

PokemonFanClub_Text_Teacher:
	.string "Sieh nur, sieh nur! Mein Lorblatt!\p"
	.string "Das Blatt auf seinem Köpfchen ist\n"
	.string "ja so süß und schick!$"

PokemonFanClub_Text_ClefairyDoll:
	.string "Das ist ein Piepi!\n"
	.string "… … … ?\p"
	.string "Ach so, es ist nur eine Puppe…$"

PokemonFanClub_Text_Bayleef:
	.string "Lorblatt: Looorblatt!$"

PokemonFanClub_Text_Listen:
	.string "Wenn dir jemand eine “wunderbare”\n"
	.string "Geschichte erzählen will, dann höre\l"
	.string "ihm einfach geduldig zu.$"

PokemonFanClub_Text_Bragging:
	.string "Wenn jemand so schwärmt, wird einfach\n"
	.string "doppelt so viel zurückgeschwärmt!$"

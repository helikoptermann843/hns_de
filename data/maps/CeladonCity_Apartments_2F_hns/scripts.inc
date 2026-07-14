CeladonCity_Apartments_2F_hns_MapScripts::
	.byte 0

CeladonCity_Apartments_2F_EventScript_Computer::
	lock
	playse SE_PC_ON
	msgbox CeladonMansion2F_Text_Computer
	playse SE_PC_OFF
	waitse
	release
	end

CeladonCity_Apartments_2F_EventScript_Sign::
	msgbox CeladonMansion2F_Text_DevOfficeSign, MSGBOX_SIGN
	end

CeladonMansion2F_Text_Computer:
	.string "{PLAYER} hat den PC eingeschaltet.\p"
	.string "…\p"
	.string "Jemand war gerade dabei, eine E-Mail\n"
	.string "zu schreiben.\p"
	.string "…Ich hoffe, du besuchst KANTO.\p"
	.string "Du wirst überrascht sein, wie sehr\n"
	.string "sich hier alles verändert hat.\p"
	.string "Du wirst auch viele Pokémon sehen,\n"
	.string "die nicht aus JOHTO stammen.\p"
	.string "An den PRODUZENTEN\p"
	.string "…$"

CeladonMansion2F_Text_DevOfficeSign:
	.string "HEART & SOUL DEVELOPMENT OFFICE$"

CeladonMansion2F_EventScript_LilDill::
	msgbox CeladonMansion2F_Text_LilDill, MSGBOX_NPC
	end

CeladonMansion2F_EventScript_InfiniteBacon::
	msgbox CeladonMansion2F_Text_InfiniteBacon, MSGBOX_NPC
	end

CeladonMansion2F_EventScript_TixoRebel::
	msgbox CeladonMansion2F_Text_TixoRebel, MSGBOX_NPC
	end

CeladonMansion2F_EventScript_Phant::
	msgbox CeladonMansion2F_Text_Phant, MSGBOX_NPC
	end

CeladonMansion2F_EventScript_Exclsior::
	msgbox CeladonMansion2F_Text_Exclsior, MSGBOX_NPC
	end

CeladonMansion2F_EventScript_DaniRainbow::
    msgbox CeladonMansion2F_Text_DaniRaibow, MSGBOX_NPC
    end

CeladonMansion2F_Text_LilDill:
	.string "Hallo zusammen, Patch 15--\p"
	.string "Entschuldigung, ich meine...\p"
	.string "Hallo, ich bin der SPIEL-DIREKTOR!\p"
	.string "Ich habe die Karten, Tilesets, Skripte\n"
	.string "und vieles mehr erstellt.\p"
	.string "Aber ohne die anderen Entwickler und\n"
	.string "Playtester hätte ich es nicht\l"
	.string "geschafft.\p"
	.string "Danke fürs Spielen! Ich hoffe, du hast\n"
	.string "Pokémon Heart & Soul genossen.$"

CeladonMansion2F_Text_InfiniteBacon:
	.string "Wir arbeiten daran, dieses Spiel in\n"
	.string "der PokéEmerald-Erweiterung\l"
	.string "wiederaufzubauen!$"

CeladonMansion2F_Text_TixoRebel:
	.string "Hast du schon von DEM EIERBUG gehört?\n"
	.string "Es war ein Käfer aus dem Playtest,\l"
	.string "der Pokémon zufällig in EIER\n"
	.string "verwandelte!\l"
	.string "Ich habe die Lösung dafür entwickelt!$"

CeladonMansion2F_Text_Phant:
	.string "Ich liebe DEMAKES!\p"
	.string "Hast du SWORD AND SHIELD ULTIMATE PLUS\n"
	.string "gespielt? Ich habe es übersetzt!\l"
	.string "Für mein nächstes DEMAKE werde ich\n"
	.string "ALOLA machen!$"

CeladonMansion2F_Text_Exclsior:
	.string "Ich habe die einzigartigen Surf-\n"
	.string "Sprites\n"
	.string "für jedes Pokémon implementiert!\p"
	.string "Da das Projekt OPEN SOURCE ist,\n"
	.string "kannst auch du eigene Features\l"
	.string "hinzufügen!$"

CeladonMansion2F_Text_DaniRaibow:
	.string "Hi!\p"
	.string "Ich bin ziemlich gut darin, Probleme\n"
	.string "zu finden\n"
	.string "und kleine zu beheben.\p"
	.string "Willst du einen Witz hören?\p"
	.string "Siegfried versuchte, Dragoran die\n"
	.string "Attacke Drachenpuls beizubringen.\p"
	.string "Aber Dragoran bewegte sich zu schnell\n"
	.string "durch Turbotempo; er konnte es\l"
	.string "nicht fangen!$"

MossdeepCity_House1_MapScripts::
	.byte 0

MossdeepCity_House1_EventScript_BlackBelt::
	lock
	faceplayer
	bufferleadmonspeciesname STR_VAR_1
	msgbox MossdeepCity_House1_Text_HmmYourPokemon, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetPokeblockNameByMonNature
	goto_if_eq VAR_RESULT, 0, MossdeepCity_House1_EventScript_NeutralNature
	msgbox MossdeepCity_House1_Text_ItLikesXPokeblocks, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House1_EventScript_NeutralNature::
	msgbox MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks, MSGBOX_DEFAULT
	release
	end

MossdeepCity_House1_EventScript_Woman::
	msgbox MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes, MSGBOX_NPC
	end

MossdeepCity_House1_Text_HmmYourPokemon:
	.string "Hmm! Dein {STR_VAR_1}…$"

MossdeepCity_House1_Text_ItLikesXPokeblocks:
	.string "Es mag {STR_VAR_1},\n"
	.string "nicht wahr?\p"
	.string "Nein, ich bin mir sicher. Es mag mit\n"
	.string "Sicherheit {STR_VAR_1}!$"

MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks:
	.string "Es scheint {POKEBLOCK}\n"
	.string "weder zu lieben noch abzulehnen.$"

MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes:
	.string "Mein Mann weiß auf den ersten Blick,\n"
	.string "welche Art von {POKEBLOCK}\l"
	.string "ein POKéMON mag und welche nicht.$"


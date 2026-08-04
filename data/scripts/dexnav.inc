EventScript_StartDexNavBattle::
	lock
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER Common_Movement_ExclamationMark
	waitmovement 0
	waitse
	dowildbattle
	release
	end

EventScript_NotFoundNearby::
	msgbox sText_NotFoundNearby, MSGBOX_SIGN
	end

EventScript_MovedTooFast::
	msgbox sText_TryMovingSlower, MSGBOX_SIGN
	end

EventScript_PokemonGotAway::
	msgbox sText_PokemonGotAway, MSGBOX_SIGN
	end

EventScript_LostSignal::
	msgbox sText_LostSignal, MSGBOX_SIGN
	end

EventScript_TooDark::
	msgbox sText_TooDark, MSGBOX_SIGN
	end

sText_NotFoundNearby:
	.string "Es war in der Nähe nicht zu finden.\n"
	.string "Versuch es in einem anderen Gebiet!$"

sText_TryMovingSlower:
	.string "Das Pokémon ist entkommen! Versuche,\n"
	.string "dich langsamer zu bewegen.$"

sText_PokemonGotAway:
	.string "Das Pokémon ist entkommen…$"

sText_LostSignal:
	.string "Keine Reaktion. Das Signal ist verloren!$"

sText_TooDark:
	.string "Es ist zu dunkel, um nach einem\n"
	.string "Pokémon zu suchen!$"

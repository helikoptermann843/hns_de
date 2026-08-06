gText_PkmnTransferredSomeonesPC::
	.string "{STR_VAR_2} wurde auf Jemandes PC\n"
	.string "übertragen.\p"
	.string "Es wurde in Box\n"
	.string "“{STR_VAR_1}” abgelegt.$"

gText_PkmnTransferredLanettesPC::
#if IS_FRLG || IS_HNS
	.string "{STR_VAR_2} wurde auf Bills PC\n"
#else
	.string "{STR_VAR_2} wurde auf Lanettes PC\n"
#endif
	.string "übertragen.\p"
	.string "Es wurde in Box\n"
	.string "“{STR_VAR_1}” abgelegt.$"

gText_PkmnTransferredSomeonesPCBoxFull::
	.string "Box “{STR_VAR_3}” in\n"
	.string "Jemandes PC ist voll.\p"
	.string "{STR_VAR_2} wurde in Box\n"
	.string "“{STR_VAR_1}” übertragen.$"

gText_PkmnTransferredLanettesPCBoxFull::
	.string "Box “{STR_VAR_3}” in\n"
#if IS_FRLG || IS_HNS
	.string "Bills PC ist voll.\p"
#else
	.string "Lanettes PC ist voll.\p"
#endif
	.string "{STR_VAR_2} wurde in Box\n"
	.string "“{STR_VAR_1}” übertragen.$"

gText_PkmnSentToPCAfterCatch::
	.string "{STR_VAR_2} wurde auf\n"
	.string "{B_PC_CREATOR_NAME} PC übertragen.\p"
	.string "Es wurde in Box\n"
	.string "“{STR_VAR_1}” abgelegt.$"

gText_PlayerObtainedTheMon::
	.string "{PLAYER} erhält\n"
	.string "das {STR_VAR_1}!$"

gText_NoMoreRoomForPokemon::
	.string "Es ist kein Platz mehr für Pokémon\n"
	.string "vorhanden!\p"
	.string "Die Pokémon Boxen sind voll und\n"
	.string "es kann kein Pokémon mehr\l"
	.string "abgelegt werden!$"

gText_NicknameThisPokemon::
	.string "Möchtest du {STR_VAR_1} einen\n"
	.string "Spitznamen geben?$"

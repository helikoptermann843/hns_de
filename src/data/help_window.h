// Add entries here
// These entries are example entries which you can replace, but they exist to get you started.
// Remember to modify include/constants/help_window.h to include identifiers so they can be used in event scripts.
const struct HelpWindow gHelpWindowInfo[] =
{
    [HELP_DEMO_WINDOW] =
    {
        .header = COMPOUND_STRING("Information: Hilfe-Fenster"),
        .desc = COMPOUND_STRING("Dies ist ein Hilfe-Fenster. Du\n"
                                "kannst viel Text anzeigen,\n"
                                "den Spieler nicht lesen!\n\nSuper!"
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_NORMAL,
        .headerColor = {0, 4, 5},
    },
    [HELP_TRADE_WINDOW] =
    {
        .header = COMPOUND_STRING("WARNUNG: KOMPATIBILITÄT"),
        .desc = COMPOUND_STRING("Einen Link mit einem Spiel\n"
                                "herzustellen, welches nicht\n"
								"Heart & Soul ist, kann\n"
                                "permanenten Schaden deines Spielstandes.\n"
                                "Linke nur mit einer anderen Kopie von\n"
                                "Heart & Soul, welche dieselbe\n"
                                "Versionsnummer hat."
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_NORMAL,
        .headerColor = {0, 4, 5},
    },
    [HELP_TELEPORTER_WINDOW] =
    {
        .header = COMPOUND_STRING("OPTIONALER BONUS-INHALT: MASCHINE"),
        .desc = COMPOUND_STRING("Diese Maschine ändert POKéMON\n"
                                "permanent in ihre GALAR-Formen.\n"
                                "GALAR-Formen werden\n"
                                "für Kompletierung des\n"
                                "NATIONALEN POKéDEX nicht benötigt.\n"
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_NORMAL,
        .headerColor = {0, 8, 3},
    },
    [HELP_SINJOH_WINDOW] =
    {
        .header = COMPOUND_STRING("OPTIONALER BONUS-INHALT: SINJOH"),
        .desc = COMPOUND_STRING("Dieser NPC gibt Zugang zu\n"
                                "bonus Inhalt: SINJOH.\n"
                                "Für Story nicht benötigt\n"
                                "für Kompletierung des\n"
                                "NATIONALEN POKéDEX nicht benötigt.\n"
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_NORMAL,
        .headerColor = {0, 8, 3},
    },
    [HELP_ALOLA_WINDOW] =
    {
        .header = COMPOUND_STRING("OPTIONALER BONUS-INHALT: INSELN"),
        .desc = COMPOUND_STRING("Dieser NPC gibt Zugang zu\n"
                                "bonus Inhalt: ALOLA INSELN.\n"
                                "Für Story nicht benötigt\n"
                                "für Kompletierung des\n"
                                "NATIONALEN POKéDEX nicht benötigt.\n"
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_NORMAL,
        .headerColor = {0, 8, 3},
    },
    [HELP_DAYCARE1_WINDOW] =
    {
        .header = COMPOUND_STRING("BABY POKéMON ABILITIES"),
        .desc = COMPOUND_STRING("PICHU's ability is STATIC.\n"
                                "CLEFFA's ability is CUTE CHARM.\n"
                                "IGGLYBUFF's ability is CUTE CHARM.\n"
                                "TYROGUE's ability is GUTS.\n"
                                "SMOOCHUM's ability is OBLIVIOUS.\n"
                                "ELEKID's ability is STATIC.\n"
                                "MAGBY's ability is FLAME BODY."
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_SMALL,
        .headerColor = {0, 8, 3},
    },
    [HELP_DAYCARE2_WINDOW] =
    {
        .header = COMPOUND_STRING("BABY POKéMON TYPES"),
        .desc = COMPOUND_STRING("PICHU is ELECTRIC type.\n"
                                "CLEFFA is NORMAL type.\n"
                                "IGGLYBUFF is NORMAL type.\n"
                                "TYROGUE is FIGHTING type.\n"
                                "SMOOCHUM is ICE type.\n"
                                "ELEKID is ELECTRIC type.\n"
                                "MAGBY is FIRE type."
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_SMALL,
        .headerColor = {0, 8, 3},
    },
    [HELP_DAYCARE3_WINDOW] =
    {
        .header = COMPOUND_STRING("BABY POKéMON CRIES"),
        .desc = COMPOUND_STRING("PICHU says WAAAH.\n"
                                "CLEFFA says EEK.\n"
                                "IGGLYBUFF says LALALA.\n"
                                "TYROGUE says HIYAH.\n"
                                "SMOOCHUM says EHEHE.\n"
                                "ELEKID says OI, OI, OI.\n"
                                "MAGBY says TCH."
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_SMALL,
        .headerColor = {0, 8, 3},
    },
    [HELP_DAYCARE4_WINDOW] =
    {
        .header = COMPOUND_STRING("BABY POKéMON ACTIONS"),
        .desc = COMPOUND_STRING("PICHU likes to PLAY all day.\n"
                                "CLEFFA LOOKS at the moon.\n"
                                "IGGLYBUFF puts them to SLEEP.\n"
                                "TYROGUE TRAINS constantly.\n"
                                "SMOOCHUM likes to SHOW off.\n"
                                "ELEKID STORES up charge.\n"
                                "MAGBY often ANGERS."
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_SMALL,
        .headerColor = {0, 8, 3},
    },
    // Add more entries
};

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
        .desc = COMPOUND_STRING("Pichu's Fähigkeit ist Statik.\n"
                                "Pii's Fähigkeit ist Charmebolzen.\n"
                                "Fluffeluff's Fähigkeit ist Charmebolzen.\n"
                                "Rabauz Fähigkeit ist Adrenalin.\n"
                                "Kussila's Fähigkeit ist Dösigkeit.\n"
                                "Elekid's Fähigkeit ist Statik.\n"
                                "Magby's Fähigkeit ist Flammenkörper."
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_SMALL,
        .headerColor = {0, 8, 3},
    },
    [HELP_DAYCARE2_WINDOW] =
    {
        .header = COMPOUND_STRING("BABY POKéMON TYPES"),
        .desc = COMPOUND_STRING("Pichu ist Typ Elektro.\n"
                                "Pii ist Typ Normal.\n"
                                "Fluffeluff ist Typ Normal.\n"
                                "Rabauz ist Typ Kampf.\n"
                                "Kussilla ist Typ Eis.\n"
                                "Elekid ist Typ Elektro.\n"
                                "Magby ist Typ Feuer."
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_SMALL,
        .headerColor = {0, 8, 3},
    },
    [HELP_DAYCARE3_WINDOW] =
    {
        .header = COMPOUND_STRING("BABY POKéMON CRIES"),
        .desc = COMPOUND_STRING("Pichu sagt WAAAH.\n"
                                "Pii sagt EEK.\n"
                                "Fluffeluff sagt LALALA.\n"
                                "Rabauz sagt HIYAH.\n"
                                "Kussilla sagt EHEHE.\n"
                                "Elekid sagt OI, OI, OI.\n"
                                "Magby sagt TCH."
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_SMALL,
        .headerColor = {0, 8, 3},
    },
    [HELP_DAYCARE4_WINDOW] =
    {
        .header = COMPOUND_STRING("BABY POKéMON ACTIONS"),
        .desc = COMPOUND_STRING("Pichu spielt gerne.\n"
                                "Pii schaut den Mond an.\n"
                                "Fluffeluff schläfert sie ein.\n"
                                "Rabauz trainiert ständig.\n"
                                "Kussilla geniest Aufmerksamkeit.\n"
                                "Elekid lädt sich auf.\n"
                                "Magby ist ein Hitzkopf."
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_SMALL,
        .headerColor = {0, 8, 3},
    },
    // Add more entries
};

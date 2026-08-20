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
    [HELP_GAMESTART_WINDOW] =
    {
        .header = COMPOUND_STRING("Information: Weitere Optionen"),
        .desc = COMPOUND_STRING("Die Uhr kannst du in jedem Pokémon-Center\n"
                                "jederzeit ohne Nachteil umstellen.\n"
                                "Sieh dir auch die Basis-Items in deinem\n"
                                "Beutel und das Optionen-Menü an. Dort\n"
                                "warten noch mehr Anpassungsmöglichkeiten.\n"
                                "Viel Spaß!"
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_NORMAL,
        .headerColor = {0, 8, 3},
    },
    [HELP_TRADE_WINDOW] =
    {
        .header = COMPOUND_STRING("Warnung: Kompatibilität"),
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
        .header = COMPOUND_STRING("Optionaler Bonus-Inhalt: Maschine"),
        .desc = COMPOUND_STRING("Diese Maschine verwandelt Pokémon\n"
                                "dauerhaft in ihre Galar-Formen.\n"
                                "Galar-Formen werden für die\n"
                                "Vervollständigung des Nationalen\n"
                                "Pokédex nicht benötigt.\n"
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_NORMAL,
        .headerColor = {0, 8, 3},
    },
    [HELP_SINJOH_WINDOW] =
    {
        .header = COMPOUND_STRING("Optionaler Bonus-Inhalt: Sinjoh"),
        .desc = COMPOUND_STRING("Dieser NPC gewährt Zugang zum\nBonus-Inhalt: Sinjoh.\nFür die Story und die Vervoll-\nständigung des Nationalen Pokédex\nnicht erforderlich.\n"),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_NORMAL,
        .headerColor = {0, 8, 3},
    },
    [HELP_ALOLA_WINDOW] =
    {
        .header = COMPOUND_STRING("Optionaler Bonus-Inhalt: Inseln"),
        .desc = COMPOUND_STRING("Dieser NPC gewährt Zugang zum\nBonus-Inhalt: Alola-Inseln.\nFür die Story und die Vervoll-\nständigung des Nationalen Pokédex\nnicht erforderlich.\n"),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_NORMAL,
        .headerColor = {0, 8, 3},
    },
    [HELP_DAYCARE1_WINDOW] =
    {
        .header = COMPOUND_STRING("Baby-Pokémon: Fähigkeiten"),
        .desc = COMPOUND_STRING("Pichus Fähigkeit ist Statik.\n"
                                "Piis Fähigkeit ist Charmebolzen.\n"
                                "Fluffeluffs Fähigkeit ist Charmebolzen.\n"
                                "Rabauz' Fähigkeit ist Adrenalin.\n"
                                "Kussillas Fähigkeit ist Dösigkeit.\n"
                                "Elekids Fähigkeit ist Statik.\n"
                                "Magbys Fähigkeit ist Flammenkörper."
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_SMALL,
        .headerColor = {0, 8, 3},
    },
    [HELP_DAYCARE2_WINDOW] =
    {
        .header = COMPOUND_STRING("Baby-Pokémon: Typen"),
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
        .header = COMPOUND_STRING("Baby-Pokémon: Rufe"),
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
        .header = COMPOUND_STRING("Baby-Pokémon: Verhalten"),
        .desc = COMPOUND_STRING("Pichu spielt gerne.\n"
                                "Pii schaut den Mond an.\n"
                                "Fluffeluff singt alle in den Schlaf.\n"
                                "Rabauz trainiert ständig.\n"
                                "Kussilla genießt Aufmerksamkeit.\n"
                                "Elekid lädt sich auf.\n"
                                "Magby ist ein Hitzkopf."
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_SMALL,
        .headerColor = {0, 8, 3},
    },
    // Add more entries
};

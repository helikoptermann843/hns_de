const struct AbilityInfo gAbilitiesInfo[ABILITIES_COUNT] =
{
    [ABILITY_NONE] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("Keine Spezial-Fähigkeit."),
        .aiRating = 0,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STENCH] =
    {
        .name = _("Duftnote"),
        .description = COMPOUND_STRING("Wehrt wilde Pokémon ab."),
        .aiRating = 1,
    },

    [ABILITY_DRIZZLE] =
    {
        .name = _("Niesel"),
        .description = COMPOUND_STRING("Ruft im Kampf Regen herbei."),
        .aiRating = 9,
    },

    [ABILITY_SPEED_BOOST] =
    {
        .name = _("Temposchub"),
        .description = COMPOUND_STRING("Erhöht Init. nach und nach."),
        .aiRating = 9,
    },

    [ABILITY_BATTLE_ARMOR] =
    {
        .name = _("Kampfpanzer"),
        .description = COMPOUND_STRING("Wehrt Volltreffer ab."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_STURDY] =
    {
        .name = _("Robustheit"),
        .description = COMPOUND_STRING("Keine 1-Treffer-K.O.-Att."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DAMP] =
    {
        .name = _("Feuchtigkeit"),
        .description = COMPOUND_STRING("Gegen Selbstzerstörung."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_LIMBER] =
    {
        .name = _("Flexibilität"),
        .description = COMPOUND_STRING("Verhindert Paralyse."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SAND_VEIL] =
    {
        .name = _("Sandschleier"),
        .description = COMPOUND_STRING("Erh. Fluchtw. i. Sandsturm."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_STATIC] =
    {
        .name = _("Statik"),
        .description = COMPOUND_STRING("Paralysiert bei Berührung."),
        .aiRating = 4,
    },

    [ABILITY_VOLT_ABSORB] =
    {
        .name = _("Voltabsorber"),
        .description = COMPOUND_STRING("Wandelt Elektriz. in KP um."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_WATER_ABSORB] =
    {
        .name = _("H2O-Absorber"),
        .description = COMPOUND_STRING("Wandelt Wasser in KP um."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_OBLIVIOUS] =
    {
        .name = _("Dösigkeit"),
        .description = COMPOUND_STRING("Verhindert Anziehung."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_CLOUD_NINE] =
    {
        .name = _("Wolke Sieben"),
        .description = COMPOUND_STRING("Keine Wetter-Effekte."),
        .aiRating = 5,
    },

    [ABILITY_COMPOUND_EYES] =
    {
        .name = _("Facettenauge"),
        .description = COMPOUND_STRING("Steigert Genauigkeit."),
        .aiRating = 7,
    },

    [ABILITY_INSOMNIA] =
    {
        .name = _("Insomnia"),
        .description = COMPOUND_STRING("Verhindert Einschlafen."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_COLOR_CHANGE] =
    {
        .name = _("Farbwechsel"),
        .description = COMPOUND_STRING("Ändert Att.-Typ d. Gegners."),
        .aiRating = 2,
    },

    [ABILITY_IMMUNITY] =
    {
        .name = _("Immunität"),
        .description = COMPOUND_STRING("Verhindert Vergiftungen."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_FLASH_FIRE] =
    {
        .name = _("Feuerfänger"),
        .description = COMPOUND_STRING("Steigt, wenn v. Feuer getr."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SHIELD_DUST] =
    {
        .name = _("Puderabwehr"),
        .description = COMPOUND_STRING("Gegen Zusatz-Effekte."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_OWN_TEMPO] =
    {
        .name = _("Tempomacher"),
        .description = COMPOUND_STRING("Verhindert Verwirrung."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SUCTION_CUPS] =
    {
        .name = _("Saugnapf"),
        .description = COMPOUND_STRING("Verankert den Körper."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_INTIMIDATE] =
    {
        .name = _("Bedroher"),
        .description = COMPOUND_STRING("Senkt Angr. des Gegners."),
        .aiRating = 7,
    },

    [ABILITY_SHADOW_TAG] =
    {
        .name = _("Wegsperre"),
        .description = COMPOUND_STRING("Hindert Gegner an Flucht."),
        .aiRating = 10,
    },

    [ABILITY_ROUGH_SKIN] =
    {
        .name = _("Rauhaut"),
        .description = COMPOUND_STRING("Verletzt bei Berührung."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_GUARD] =
    {
        .name = _("Wunderwache"),
        .description = COMPOUND_STRING("Nur sehr eff. Treff. schad."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_LEVITATE] =
    {
        .name = _("Schwebe"),
        .description = COMPOUND_STRING("Kein Treffer b. Boden-Att."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EFFECT_SPORE] =
    {
        .name = _("Sporenwirt"),
        .description = COMPOUND_STRING("Gibt bei Kontakt Sporen ab."),
        .aiRating = 4,
    },

    [ABILITY_SYNCHRONIZE] =
    {
        .name = _("Synchro"),
        .description = COMPOUND_STRING("Gibt Stat.-Probleme weiter."),
        .aiRating = 4,
    },

    [ABILITY_CLEAR_BODY] =
    {
        .name = _("Neutraltorso"),
        .description = COMPOUND_STRING("Verhindert Fähigk.-Reduk."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_NATURAL_CURE] =
    {
        .name = _("Innere Kraft"),
        .description = COMPOUND_STRING("Heilt bei Austausch."),
        .aiRating = 7,
    },

    [ABILITY_LIGHTNING_ROD] =
    {
        .name = _("Blitzfänger"),
        .description = COMPOUND_STRING("Zieht Elektro-Attacken an."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_SERENE_GRACE] =
    {
        .name = _("Edelmut"),
        .description = COMPOUND_STRING("Verstärkt Zusatz-Effekte."),
        .aiRating = 8,
    },

    [ABILITY_SWIFT_SWIM] =
    {
        .name = _("Wassertempo"),
        .description = COMPOUND_STRING("Steigert Init. bei Regen."),
        .aiRating = 6,
    },

    [ABILITY_CHLOROPHYLL] =
    {
        .name = _("Chlorophyll"),
        .description = COMPOUND_STRING("Init. + bei Sonnenschein."),
        .aiRating = 6,
    },

    [ABILITY_ILLUMINATE] =
    {
        .name = _("Erleuchtung"),
        .description = COMPOUND_STRING("Mehr Pkmn-Begegnungen."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_TRACE] =
    {
        .name = _("Fährte"),
        .description = COMPOUND_STRING("Kopiert Spezial-Attacke."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE, //B_UPDATED_ABILITY_DATA >= GEN_4
    },

    [ABILITY_HUGE_POWER] =
    {
        .name = _("Kraftkoloss"),
        .description = COMPOUND_STRING("Steigert Angr."),
        .aiRating = 10,
    },

    [ABILITY_POISON_POINT] =
    {
        .name = _("Giftdorn"),
        .description = COMPOUND_STRING("Vergiftet bei Berührung."),
        .aiRating = 4,
    },

    [ABILITY_INNER_FOCUS] =
    {
        .name = _("Konzentrator"),
        .description = COMPOUND_STRING("Verhindert Zurückschreck."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MAGMA_ARMOR] =
    {
        .name = _("Magmapanzer"),
        .description = COMPOUND_STRING("Verhindert Einfrieren."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_WATER_VEIL] =
    {
        .name = _("Aquahülle"),
        .description = COMPOUND_STRING("Verhindert Verbrennungen."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_MAGNET_PULL] =
    {
        .name = _("Magnetfalle"),
        .description = COMPOUND_STRING("Fängt Stahl-Pokémon."),
        .aiRating = 9,
    },

    [ABILITY_SOUNDPROOF] =
    {
        .name = _("Lärmschutz"),
        .description = COMPOUND_STRING("Immun gg. Lärm-Attacken."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_RAIN_DISH] =
    {
        .name = _("Regengenuss"),
        .description = COMPOUND_STRING("KP-Anstieg bei Regen."),
        .aiRating = 3,
    },

    [ABILITY_SAND_STREAM] =
    {
        .name = _("Sandsturm"),
        .description = COMPOUND_STRING("Erzeugt einen Sandsturm."),
        .aiRating = 9,
    },

    [ABILITY_PRESSURE] =
    {
        .name = _("Erzwinger"),
        .description = COMPOUND_STRING("Steigert AP des Gegners."),
        .aiRating = 5,
    },

    [ABILITY_THICK_FAT] =
    {
        .name = _("Speckschicht"),
        .description = COMPOUND_STRING("Schutz vor Hitze und Kälte."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EARLY_BIRD] =
    {
        .name = _("Frühwecker"),
        .description = COMPOUND_STRING("Schnelles Aufwachen."),
        .aiRating = 4,
    },

    [ABILITY_FLAME_BODY] =
    {
        .name = _("Flammkörper"),
        .description = COMPOUND_STRING("Verbrennt bei Berührung."),
        .aiRating = 4,
    },

    [ABILITY_RUN_AWAY] =
    {
        .name = _("Angsthase"),
        .description = COMPOUND_STRING("Erleichtert das Entkommen."),
        .aiRating = 0,
    },

    [ABILITY_KEEN_EYE] =
    {
        .name = _("Adlerauge"),
        .description = COMPOUND_STRING("Verhindert Verl. d. Genauig."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_HYPER_CUTTER] =
    {
        .name = _("Scherenmacht"),
        .description = COMPOUND_STRING("Verhindert Angr.-Reduz."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_PICKUP] =
    {
        .name = _("Mitnahme"),
        .description = COMPOUND_STRING("Kann Objekte aufnehmen."),
        .aiRating = 1,
    },

    [ABILITY_TRUANT] =
    {
        .name = _("Schnarchnase"),
        .description = COMPOUND_STRING("Greift in jedem 2. Zug an."),
        .aiRating = -2,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_HUSTLE] =
    {
        .name = _("Übereifer"),
        .description = COMPOUND_STRING("Tauscht Genauigk. u. Kraft."),
        .aiRating = 7,
    },

    [ABILITY_CUTE_CHARM] =
    {
        .name = _("Charmebolzen"),
        .description = COMPOUND_STRING("Wirkt bei Kontakt betörend."),
        .aiRating = 2,
    },

    [ABILITY_PLUS] =
    {
        .name = _("Plus"),
        .description = COMPOUND_STRING("Bildet ein Team mit Minun."),
        .aiRating = 0,
    },

    [ABILITY_MINUS] =
    {
        .name = _("Minus"),
        .description = COMPOUND_STRING("Bildet ein Team mit Plusle."),
        .aiRating = 0,
    },

    [ABILITY_FORECAST] =
    {
        .name = _("Prognose"),
        .description = COMPOUND_STRING("Ist vom Wetter abhängig."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = B_UPDATED_ABILITY_DATA >= GEN_4,
        .failsOnImposter = B_UPDATED_ABILITY_DATA >= GEN_5,
    },

    [ABILITY_STICKY_HOLD] =
    {
        .name = _("Wertehalter"),
        .description = COMPOUND_STRING("Verhindert Item-Diebstahl."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SHED_SKIN] =
    {
        .name = _("Expidermis"),
        .description = COMPOUND_STRING("Heilt durch Häutung."),
        .aiRating = 7,
    },

    [ABILITY_GUTS] =
    {
        .name = _("Adrenalin"),
        .description = COMPOUND_STRING("Steigert Angr. bei Leiden."),
        .aiRating = 6,
    },

    [ABILITY_MARVEL_SCALE] =
    {
        .name = _("Notschutz"),
        .description = COMPOUND_STRING("Steigert Vert. bei Leiden."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_LIQUID_OOZE] =
    {
        .name = _("Kloakensoße"),
        .description = COMPOUND_STRING("Saug-Attacken schädigen."),
        .aiRating = 3,
    },

    [ABILITY_OVERGROW] =
    {
        .name = _("Notdünger"),
        .description = COMPOUND_STRING("Erhöht Pfl.-Att. i. d. Not."),
        .aiRating = 5,
    },

    [ABILITY_BLAZE] =
    {
        .name = _("Großbrand"),
        .description = COMPOUND_STRING("Erhöht Feuer-Att. in Not."),
        .aiRating = 5,
    },

    [ABILITY_TORRENT] =
    {
        .name = _("Sturzbach"),
        .description = COMPOUND_STRING("Erhöht Wasser-Att. in Not."),
        .aiRating = 5,
    },

    [ABILITY_SWARM] =
    {
        .name = _("Hexaplaga"),
        .description = COMPOUND_STRING("Erhöht Käfer-Att. in Not."),
        .aiRating = 5,
    },

    [ABILITY_ROCK_HEAD] =
    {
        .name = _("Steinhaupt"),
        .description = COMPOUND_STRING("Verh. Rückstoß-Schaden."),
        .aiRating = 5,
    },

    [ABILITY_DROUGHT] =
    {
        .name = _("Dürre"),
        .description = COMPOUND_STRING("Erzeugt Sonne im Kampf."),
        .aiRating = 9,
    },

    [ABILITY_ARENA_TRAP] =
    {
        .name = _("Ausweglos"),
        .description = COMPOUND_STRING("Verhindert Flucht."),
        .aiRating = 9,
    },

    [ABILITY_VITAL_SPIRIT] =
    {
        .name = _("Munterkeit"),
        .description = COMPOUND_STRING("Verhindert Einschlafen."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_WHITE_SMOKE] =
    {
        .name = _("Pulverrauch"),
        .description = COMPOUND_STRING("Verhindert Fähigk.-Reduz."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_PURE_POWER] =
    {
        .name = _("Mentalkraft"),
        .description = COMPOUND_STRING("Steigert Angr."),
        .aiRating = 10,
    },

    [ABILITY_SHELL_ARMOR] =
    {
        .name = _("Panzerhaut"),
        .description = COMPOUND_STRING("Wehrt Volltreffer ab."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_AIR_LOCK] =
    {
        .name = _("Klimaschutz"),
        .description = COMPOUND_STRING("Kehrt Wetter-Effekte um."),
        .aiRating = 5,
    },

    [ABILITY_TANGLED_FEET] =
    {
        .name = _("Fußangel"),
        .description = COMPOUND_STRING("Fluchtw. hoch b. Verwirrung."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MOTOR_DRIVE] =
    {
        .name = _("Starthilfe"),
        .description = COMPOUND_STRING("Elektro-Att. erhöht Init."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_RIVALRY] =
    {
        .name = _("Rivalität"),
        .description = COMPOUND_STRING("Mehr Angr. b. gl. Geschlecht."),
        .aiRating = 1,
    },

    [ABILITY_STEADFAST] =
    {
        .name = _("Felsenfest"),
        .description = COMPOUND_STRING("Zurückschrecken hebt Init."),
        .aiRating = 2,
    },

    [ABILITY_SNOW_CLOAK] =
    {
        .name = _("Schneemantel"),
        .description = COMPOUND_STRING("Erh. Fluchtw. bei Hagel."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_GLUTTONY] =
    {
        .name = _("Völlerei"),
        .description = COMPOUND_STRING("Verwendet Beere früher."),
        .aiRating = 3,
    },

    [ABILITY_ANGER_POINT] =
    {
        .name = _("Kurzschluss"),
        .description = COMPOUND_STRING("Volltreffer maximiert Angr."),
        .aiRating = 4,
    },

    [ABILITY_UNBURDEN] =
    {
        .name = _("Entlastung"),
        .description = COMPOUND_STRING("Init. hoch bei Itemverlust."),
        .aiRating = 7,
    },

    [ABILITY_HEATPROOF] =
    {
        .name = _("Hitzeschutz"),
        .description = COMPOUND_STRING("Senkt Kraft von Feuer-Att."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SIMPLE] =
    {
        .name = _("Wankelmut"),
        .description = COMPOUND_STRING("Anfällig f. Statusänderung."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_DRY_SKIN] =
    {
        .name = _("Trockenheit"),
        .description = COMPOUND_STRING("Hitze senkt KP, Wasser hebt"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DOWNLOAD] =
    {
        .name = _("Download"),
        .description = COMPOUND_STRING("Kraft je nach gegn. Werten."),
        .aiRating = 7,
    },

    [ABILITY_IRON_FIST] =
    {
        .name = _("Eisenfaust"),
        .description = COMPOUND_STRING("Steigert Box-Attacken."),
        .aiRating = 6,
    },

    [ABILITY_POISON_HEAL] =
    {
        .name = _("Aufheber"),
        .description = COMPOUND_STRING("Steigert KP bei Vergiftung."),
        .aiRating = 8,
    },

    [ABILITY_ADAPTABILITY] =
    {
        .name = _("Anpassung"),
        .description = COMPOUND_STRING("Steigert Att. gleichen Typs"),
        .aiRating = 8,
    },

    [ABILITY_SKILL_LINK] =
    {
        .name = _("Wertelink"),
        .description = COMPOUND_STRING("Mehr Treffer b. Serien-Att."),
        .aiRating = 7,
    },

    [ABILITY_HYDRATION] =
    {
        .name = _("Hydration"),
        .description = COMPOUND_STRING("Heilt Statusprobl. b. Regen"),
        .aiRating = 4,
    },

    [ABILITY_SOLAR_POWER] =
    {
        .name = _("Solarkraft"),
        .description = COMPOUND_STRING("Sonne: Sp.-Ang. hoch, KP ab"),
        .aiRating = 3,
    },

    [ABILITY_QUICK_FEET] =
    {
        .name = _("Rasanz"),
        .description = COMPOUND_STRING("Init. hoch b. Statusprobl."),
        .aiRating = 5,
    },

    [ABILITY_NORMALIZE] =
    {
        .name = _("Regulierung"),
        .description = COMPOUND_STRING("Alle Att. werden Normal."),
        .aiRating = -1,
    },

    [ABILITY_SNIPER] =
    {
        .name = _("Superschütze"),
        .description = COMPOUND_STRING("Steigert Att. n. Volltreff."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_GUARD] =
    {
        .name = _("Magieschild"),
        .description = COMPOUND_STRING("Nur direkte Att. schaden."),
        .aiRating = 9,
    },

    [ABILITY_NO_GUARD] =
    {
        .name = _("Schildlos"),
        .description = COMPOUND_STRING("Alle Angriffe treffen."),
        .aiRating = 8,
    },

    [ABILITY_STALL] =
    {
        .name = _("Zeitspiel"),
        .description = COMPOUND_STRING("Handelt nach agileren Gegn."),
        .aiRating = -1,
    },

    [ABILITY_TECHNICIAN] =
    {
        .name = _("Techniker"),
        .description = COMPOUND_STRING("Steigert schwache Att."),
        .aiRating = 8,
    },

    [ABILITY_LEAF_GUARD] =
    {
        .name = _("Floraschild"),
        .description = COMPOUND_STRING("Kein Statusprobl. b. Sonne"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_KLUTZ] =
    {
        .name = _("Tollpatsch"),
        .description = COMPOUND_STRING("Kann keine Items nutzen."),
        .aiRating = -1,
    },

    [ABILITY_MOLD_BREAKER] =
    {
        .name = _("Überbrückung"),
        .description = COMPOUND_STRING("Att. trotz gegn. Fähigkeit."),
        .aiRating = 7,
    },

    [ABILITY_SUPER_LUCK] =
    {
        .name = _("Glückspilz"),
        .description = COMPOUND_STRING("Erhöht Volltreffer-Chance."),
        .aiRating = 3,
    },

    [ABILITY_AFTERMATH] =
    {
        .name = _("Finalschlag"),
        .description = COMPOUND_STRING("Schadet Gegner bei K.O."),
        .aiRating = 5,
    },

    [ABILITY_ANTICIPATION] =
    {
        .name = _("Vorahnung"),
        .description = COMPOUND_STRING("Ahnt gefährl. Att. voraus."),
        .aiRating = 2,
    },

    [ABILITY_FOREWARN] =
    {
        .name = _("Vorwarnung"),
        .description = COMPOUND_STRING("Zeigt stärkste gegn. Att."),
        .aiRating = 2,
    },

    [ABILITY_UNAWARE] =
    {
        .name = _("Unkenntnis"),
        .description = COMPOUND_STRING("Ignoriert gegn. Werte-Änd."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_TINTED_LENS] =
    {
        .name = _("Aufwertung"),
        .description = COMPOUND_STRING("Steigert schwache Att.-Typ"),
        .aiRating = 7,
    },

    [ABILITY_FILTER] =
    {
        .name = _("Filter"),
        .description = COMPOUND_STRING("Senkt sehr effektive Att."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SLOW_START] =
    {
        .name = _("Saumselig"),
        .description = COMPOUND_STRING("Halbiert Angr. und Init."),
        .aiRating = -2,
    },

    [ABILITY_SCRAPPY] =
    {
        .name = _("Rauflust"),
        .description = COMPOUND_STRING("Trifft auch Geist-Gegner."),
        .aiRating = 6,
    },

    [ABILITY_STORM_DRAIN] =
    {
        .name = _("Sturmsog"),
        .description = COMPOUND_STRING("Zieht Wasser-Att. an."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_ICE_BODY] =
    {
        .name = _("Eishaut"),
        .description = COMPOUND_STRING("Regeneriert KP bei Hagel."),
        .aiRating = 3,
    },

    [ABILITY_SOLID_ROCK] =
    {
        .name = _("Felskern"),
        .description = COMPOUND_STRING("Senkt sehr effektive Att."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SNOW_WARNING] =
    {
        .name = _("Hagelalarm"),
    #if B_SNOW_WARNING >= GEN_9
        .description = COMPOUND_STRING("Beschwört Schnee im Kampf"),
    #else
        .description = COMPOUND_STRING("Beschwört Hagel im Kampf"),
    #endif
        .aiRating = 8,
    },

    [ABILITY_HONEY_GATHER] =
    {
        .name = _("Honigmaul"),
        .description = COMPOUND_STRING("Kann Honig sammeln."),
        .aiRating = 0,
    },

    [ABILITY_FRISK] =
    {
        .name = _("Schnüffler"),
        .description = COMPOUND_STRING("Zeigt gegnerische Items."),
        .aiRating = 3,
    },

    [ABILITY_RECKLESS] =
    {
        .name = _("Achtlos"),
        .description = COMPOUND_STRING("Steigert Rückstoß-Att."),
        .aiRating = 6,
    },

    [ABILITY_MULTITYPE] =
    {
        .name = _("Variabilität"),
        .description = COMPOUND_STRING("Typ je nach Tafel."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = B_UPDATED_ABILITY_DATA >= GEN_5,
    },

    [ABILITY_FLOWER_GIFT] =
    {
        .name = _("Pflanzengabe"),
        .description = COMPOUND_STRING("Stärkt Team bei Sonne."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeTraced = B_UPDATED_ABILITY_DATA >= GEN_5,
        .breakable = TRUE,
    },

    [ABILITY_BAD_DREAMS] =
    {
        .name = _("Alptraum"),
        .description = COMPOUND_STRING("Senkt KP schlafender Gegn."),
        .aiRating = 4,
    },

    [ABILITY_PICKPOCKET] =
    {
        .name = _("Langfinger"),
        .description = COMPOUND_STRING("Stiehlt Item bei Berührung."),
        .aiRating = 3,
    },

    [ABILITY_SHEER_FORCE] =
    {
        .name = _("Rohe Gewalt"),
        .description = COMPOUND_STRING("Mehr Kraft, kein Zusatzeff."),
        .aiRating = 8,
    },

    [ABILITY_CONTRARY] =
    {
        .name = _("Umkehrung"),
        .description = COMPOUND_STRING("Kehrt Statusänderung um."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_UNNERVE] =
    {
        .name = _("Anspannung"),
        .description = COMPOUND_STRING("Gegner isst keine Beeren."),
        .aiRating = 3,
    },

    [ABILITY_DEFIANT] =
    {
        .name = _("Siegeswille"),
        .description = COMPOUND_STRING("Senkung hebt Angr. stark."),
        .aiRating = 5,
    },

    [ABILITY_DEFEATIST] =
    {
        .name = _("Schwächling"),
        .description = COMPOUND_STRING("Schwächer bei halben KP."),
        .aiRating = -1,
    },

    [ABILITY_CURSED_BODY] =
    {
        .name = _("Tastfluch"),
        .description = COMPOUND_STRING("Blockt Att. evtl. b. Treffer"),
        .aiRating = 4,
    },

    [ABILITY_HEALER] =
    {
        .name = _("Heilherz"),
        .description = COMPOUND_STRING("Heilt evtl. Statusprobleme."),
        .aiRating = 0,
    },

    [ABILITY_FRIEND_GUARD] =
    {
        .name = _("Freundeshut"),
        .description = COMPOUND_STRING("Senkt Schaden an Partnern."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_WEAK_ARMOR] =
    {
        .name = _("Bruchrüstung"),
        .description = COMPOUND_STRING("Treffer: Vert. ab, Init. auf"),
        .aiRating = 2,
    },

    [ABILITY_HEAVY_METAL] =
    {
        .name = _("Schwermetall"),
        .description = COMPOUND_STRING("Verdoppelt das Gewicht."),
        .aiRating = -1,
        .breakable = TRUE,
    },

    [ABILITY_LIGHT_METAL] =
    {
        .name = _("Leichtmetall"),
        .description = COMPOUND_STRING("Halbiert das Gewicht."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MULTISCALE] =
    {
        .name = _("Multischuppe"),
        .description = COMPOUND_STRING("Weniger Schaden b. voll KP"),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_TOXIC_BOOST] =
    {
        .name = _("Giftwahn"),
        .description = COMPOUND_STRING("Vergiftet: mehr Angr."),
        .aiRating = 6,
    },

    [ABILITY_FLARE_BOOST] =
    {
        .name = _("Hitzewahn"),
        .description = COMPOUND_STRING("Verbrannt: mehr Sp.-Kraft."),
        .aiRating = 5,
    },

    [ABILITY_HARVEST] =
    {
        .name = _("Reiche Ernte"),
        .description = COMPOUND_STRING("Beere mehrfach verwendbar."),
        .aiRating = 5,
    },

    [ABILITY_TELEPATHY] =
    {
        .name = _("Telepathie"),
        .description = COMPOUND_STRING("Pariert Att. der Partner."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_MOODY] =
    {
        .name = _("Gefühlswippe"),
        .description = COMPOUND_STRING("Hebt u. senkt je einen Wert"),
        .aiRating = 10,
    },

    [ABILITY_OVERCOAT] =
    {
        .name = _("Wetterfest"),
        .description = COMPOUND_STRING("Schutz vor Wetter, Pulver."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_POISON_TOUCH] =
    {
        .name = _("Giftgriff"),
        .description = COMPOUND_STRING("Vergiftet evtl. b. Kontakt."),
        .aiRating = 4,
    },

    [ABILITY_REGENERATOR] =
    {
        .name = _("Belebekraft"),
        .description = COMPOUND_STRING("Heilt KP beim Auswechseln."),
        .aiRating = 8,
    },

    [ABILITY_BIG_PECKS] =
    {
        .name = _("Brustbieter"),
        .description = COMPOUND_STRING("Vert. kann nicht sinken."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_SAND_RUSH] =
    {
        .name = _("Sandscharrer"),
        .description = COMPOUND_STRING("Erhöht Init. im Sandsturm."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_SKIN] =
    {
        .name = _("Wunderhaut"),
        .description = COMPOUND_STRING("Wehrt Status-Att. oft ab."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANALYTIC] =
    {
        .name = _("Analyse"),
        .description = COMPOUND_STRING("Mehr Kraft als Letzter."),
        .aiRating = 5,
    },

    [ABILITY_ILLUSION] =
    {
        .name = _("Trugbild"),
        .description = COMPOUND_STRING("Tarnt sich als letztes Pkmn"),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_IMPOSTER] =
    {
        .name = _("Doppelgänger"),
        .description = COMPOUND_STRING("Kämpft als Kopie des Gegn."),
        .aiRating = 9,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_INFILTRATOR] =
    {
        .name = _("Schwebedurch"),
        .description = COMPOUND_STRING("Greift durch Schilde an."),
        .aiRating = 6,
    },

    [ABILITY_MUMMY] =
    {
        .name = _("Mumie"),
        .description = COMPOUND_STRING("Überträgt sich b. Kontakt."),
        .aiRating = 5,
    },

    [ABILITY_MOXIE] =
    {
        .name = _("Hochmut"),
        .description = COMPOUND_STRING("K.O. erhöht eigenen Angr."),
        .aiRating = 7,
    },

    [ABILITY_JUSTIFIED] =
    {
        .name = _("Redlichkeit"),
        .description = COMPOUND_STRING("Unlicht-Att. erhöht Angr."),
        .aiRating = 4,
    },

    [ABILITY_RATTLED] =
    {
        .name = _("Hasenfuß"),
        .description = COMPOUND_STRING("Angst erhöht die Init."),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_BOUNCE] =
    {
        .name = _("Magiespiegel"),
        .description = COMPOUND_STRING("Lenkt Status-Att. zurück."),
        .aiRating = 9,
        .breakable = TRUE,
    },

    [ABILITY_SAP_SIPPER] =
    {
        .name = _("Vegetarier"),
        .description = COMPOUND_STRING("Pflanzen-Att. erhöht Angr."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_PRANKSTER] =
    {
        .name = _("Strolch"),
        .description = COMPOUND_STRING("Status-Att. zuerst."),
        .aiRating = 8,
    },

    [ABILITY_SAND_FORCE] =
    {
        .name = _("Sandgewalt"),
        .description = COMPOUND_STRING("Sandsturm stärkt 3 Typen."),
        .aiRating = 4,
    },

    [ABILITY_IRON_BARBS] =
    {
        .name = _("Eisenstachel"),
        .description = COMPOUND_STRING("Schadet b. Berührung."),
        .aiRating = 6,
    },

    [ABILITY_ZEN_MODE] =
    {
        .name = _("Trance-Modus"),
        .description = COMPOUND_STRING("Wechselt Form b. halben KP."),
        .aiRating = -1,
        .cantBeCopied = TRUE,
        .cantBeSwapped = B_UPDATED_ABILITY_DATA >= GEN_7,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = B_UPDATED_ABILITY_DATA >= GEN_7,
        .cantBeOverwritten = B_UPDATED_ABILITY_DATA >= GEN_7,
        .failsOnImposter = TRUE,
    },

    [ABILITY_VICTORY_STAR] =
    {
        .name = _("Triumphstern"),
        .description = COMPOUND_STRING("Erhöht Genauigkeit im Team."),
        .aiRating = 6,
    },

    [ABILITY_TURBOBLAZE] =
    {
        .name = _("Turbobrand"),
        .description = COMPOUND_STRING("Att. trotz gegn. Fähigkeit."),
        .aiRating = 7,
    },

    [ABILITY_TERAVOLT] =
    {
        .name = _("Teravolt"),
        .description = COMPOUND_STRING("Att. trotz gegn. Fähigkeit."),
        .aiRating = 7,
    },

    [ABILITY_AROMA_VEIL] =
    {
        .name = _("Dufthülle"),
        .description = COMPOUND_STRING("Schützt Team vor Sperren."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_FLOWER_VEIL] =
    {
        .name = _("Blütenhülle"),
        .description = COMPOUND_STRING("Schützt Pflanzen-Partner."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_CHEEK_POUCH] =
    {
        .name = _("Backentaschen"),
        .description = COMPOUND_STRING("Beere essen heilt extra KP."),
        .aiRating = 4,
    },

    [ABILITY_PROTEAN] =
    {
        .name = _("Wandlungskunst"),
        .description = COMPOUND_STRING("Nimmt den Typ der Att. an."),
        .aiRating = 8,
    },

    [ABILITY_FUR_COAT] =
    {
        .name = _("Fellkleid"),
        .description = COMPOUND_STRING("Halbiert phys. Schaden."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MAGICIAN] =
    {
        .name = _("Zauberer"),
        .description = COMPOUND_STRING("Stiehlt Item beim Treffer."),
        .aiRating = 3,
    },

    [ABILITY_BULLETPROOF] =
    {
        .name = _("Kugelsicher"),
        .description = COMPOUND_STRING("Schützt vor Kugel-Att."),
        .breakable = TRUE,
        .aiRating = 7,
    },

    [ABILITY_COMPETITIVE] =
    {
        .name = _("Unbeugsamkeit"),
        .description = COMPOUND_STRING("Senkung hebt Sp.Ang. stark."),
        .aiRating = 5,
    },

    [ABILITY_STRONG_JAW] =
    {
        .name = _("Titankiefer"),
        .description = COMPOUND_STRING("Stärkt Biss-Attacken."),
        .aiRating = 6,
    },

    [ABILITY_REFRIGERATE] =
    {
        .name = _("Frostschicht"),
        .description = COMPOUND_STRING("Normal-Att. werden Eis."),
        .aiRating = 8,
    },

    [ABILITY_SWEET_VEIL] =
    {
        .name = _("Zuckerhülle"),
        .description = COMPOUND_STRING("Team kann nicht schlafen."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_STANCE_CHANGE] =
    {
        .name = _("Taktikwechsel"),
        .description = COMPOUND_STRING("Wechselt Form je nach Att."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_GALE_WINGS] =
    {
        .name = _("Orkanschwingen"),
        .description = COMPOUND_STRING("Flug-Att. zuerst b. voll KP"),
        .aiRating = 6,
    },

    [ABILITY_MEGA_LAUNCHER] =
    {
        .name = _("Megawumme"),
        .description = COMPOUND_STRING("Stärkt Puls- und Aura-Att."),
        .aiRating = 7,
    },

    [ABILITY_GRASS_PELT] =
    {
        .name = _("Pflanzenpelz"),
        .description = COMPOUND_STRING("Erhöht Vert. auf Grasfeld."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SYMBIOSIS] =
    {
        .name = _("Nutznießer"),
        .description = COMPOUND_STRING("Gibt Item an Partner ab."),
        .aiRating = 0,
    },

    [ABILITY_TOUGH_CLAWS] =
    {
        .name = _("Krallenwucht"),
        .description = COMPOUND_STRING("Stärkt direkte Attacken."),
        .aiRating = 7,
    },

    [ABILITY_PIXILATE] =
    {
        .name = _("Feenschicht"),
        .description = COMPOUND_STRING("Normal-Att. werden Fee."),
        .aiRating = 8,
    },

    [ABILITY_GOOEY] =
    {
        .name = _("Viskosität"),
        .description = COMPOUND_STRING("Senkt Init. b. Berührung."),
        .aiRating = 5,
    },

    [ABILITY_AERILATE] =
    {
        .name = _("Zenithaut"),
        .description = COMPOUND_STRING("Normal-Att. werden Flug."),
        .aiRating = 8,
    },

    [ABILITY_PARENTAL_BOND] =
    {
        .name = _("Familienbande"),
        .description = COMPOUND_STRING("Greift zweimal an."),
        .aiRating = 10,
    },

    [ABILITY_DARK_AURA] =
    {
        .name = _("Dunkelaura"),
        .description = COMPOUND_STRING("Stärkt alle Unlicht-Att."),
        .aiRating = 6,
        .breakable = B_UPDATED_ABILITY_DATA < GEN_8,
    },

    [ABILITY_FAIRY_AURA] =
    {
        .name = _("Feenaura"),
        .description = COMPOUND_STRING("Stärkt alle Feen-Attacken."),
        .aiRating = 6,
        .breakable = B_UPDATED_ABILITY_DATA < GEN_8,
    },

    [ABILITY_AURA_BREAK] =
    {
        .name = _("Aura-Umkehr"),
        .description = COMPOUND_STRING("Kehrt Auren-Wirkung um."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_PRIMORDIAL_SEA] =
    {
        .name = _("Urmeer"),
        .description = COMPOUND_STRING("Regen: Feuer-Att. nutzlos"),
        .aiRating = 10,
    },

    [ABILITY_DESOLATE_LAND] =
    {
        .name = _("Endland"),
        .description = COMPOUND_STRING("Sonne: Wasser-Att. nutzlos"),
        .aiRating = 10,
    },

    [ABILITY_DELTA_STREAM] =
    {
        .name = _("Delta-Wind"),
        .description = COMPOUND_STRING("Winde nehmen Flug-Nachteil"),
        .aiRating = 10,
    },

    [ABILITY_STAMINA] =
    {
        .name = _("Zähigkeit"),
        .description = COMPOUND_STRING("Treffer erhöht die Vert."),
        .aiRating = 6,
    },

    [ABILITY_WIMP_OUT] =
    {
        .name = _("Reißaus"),
        .description = COMPOUND_STRING("Flieht bei halben KP."),
        .aiRating = 3,
    },

    [ABILITY_EMERGENCY_EXIT] =
    {
        .name = _("Rückzug"),
        .description = COMPOUND_STRING("Wechselt bei halben KP."),
        .aiRating = 3,
    },

    [ABILITY_WATER_COMPACTION] =
    {
        .name = _("Verklumpen"),
        .description = COMPOUND_STRING("Wasser-Att. hebt Vert. sehr"),
        .aiRating = 4,
    },

    [ABILITY_MERCILESS] =
    {
        .name = _("Quälerei"),
        .description = COMPOUND_STRING("Volltreffer geg. Vergiftete"),
        .aiRating = 4,
    },

    [ABILITY_SHIELDS_DOWN] =
    {
        .name = _("Limitschild"),
        .description = COMPOUND_STRING("Panzer bricht b. halben KP."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_STAKEOUT] =
    {
        .name = _("Beschattung"),
        .description = COMPOUND_STRING("Doppelt gegen neue Gegner."),
        .aiRating = 6,
    },

    [ABILITY_WATER_BUBBLE] =
    {
        .name = _("Wasserblase"),
        .description = COMPOUND_STRING("Schutz vor Feuer u. Brand."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_STEELWORKER] =
    {
        .name = _("Stahlprofi"),
        .description = COMPOUND_STRING("Stärkt Stahl-Attacken."),
        .aiRating = 6,
    },

    [ABILITY_BERSERK] =
    {
        .name = _("Wutausbruch"),
        .description = COMPOUND_STRING("Halbe KP erhöhen Sp.Ang."),
        .aiRating = 5,
    },

    [ABILITY_SLUSH_RUSH] =
    {
        .name = _("Schneescharrer"),
        .description = COMPOUND_STRING("Erhöht Init. bei Hagel."),
        .aiRating = 5,
    },

    [ABILITY_LONG_REACH] =
    {
        .name = _("Langstrecke"),
        .description = COMPOUND_STRING("Greift nie direkt an."),
        .aiRating = 3,
    },

    [ABILITY_LIQUID_VOICE] =
    {
        .name = _("Plätscherstimme"),
        .description = COMPOUND_STRING("Schall-Att. werden Wasser."),
        .aiRating = 5,
    },

    [ABILITY_TRIAGE] =
    {
        .name = _("Heilwandel"),
        .description = COMPOUND_STRING("Heil-Att. treffen zuerst."),
        .aiRating = 7,
    },

    [ABILITY_GALVANIZE] =
    {
        .name = _("Elektrohaut"),
        .description = COMPOUND_STRING("Normal-Att. werden Elektro."),
        .aiRating = 8,
    },

    [ABILITY_SURGE_SURFER] =
    {
        .name = _("Surf-Schweif"),
        .description = COMPOUND_STRING("Elektrofeld: doppelte Init."),
        .aiRating = 4,
    },

    [ABILITY_SCHOOLING] =
    {
        .name = _("Fischschwarm"),
        .description = COMPOUND_STRING("Bildet b. viel KP e. Schwarm"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_DISGUISE] =
    {
        .name = _("Kostümspuk"),
        .description = COMPOUND_STRING("Wehrt einen Angriff ab."),
        .aiRating = 8,
        .breakable = TRUE,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_BATTLE_BOND] =
    {
        .name = _("Freundschaftsakt"),
        .description = COMPOUND_STRING("K.O. bringt die Ash-Form."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_POWER_CONSTRUCT] =
    {
        .name = _("Scharwandel"),
        .description = COMPOUND_STRING("Zellen helfen b. halben KP."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_CORROSION] =
    {
        .name = _("Korrosion"),
        .description = COMPOUND_STRING("Vergiftet auch Stahl, Gift."),
        .aiRating = 5,
    },

    [ABILITY_COMATOSE] =
    {
        .name = _("Dauerschlaf"),
        .description = COMPOUND_STRING("Ist immer im Halbschlaf."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_QUEENLY_MAJESTY] =
    {
        .name = _("Majestät"),
        .description = COMPOUND_STRING("Schützt vor Erstschlag."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_INNARDS_OUT] =
    {
        .name = _("Magenkrempler"),
        .description = COMPOUND_STRING("Schadet Gegner bei K.O."),
        .aiRating = 5,
    },

    [ABILITY_DANCER] =
    {
        .name = _("Tänzer"),
        .description = COMPOUND_STRING("Macht Tanz-Attacken mit."),
        .aiRating = 5,
    },

    [ABILITY_BATTERY] =
    {
        .name = _("Batterie"),
        .description = COMPOUND_STRING("Stärkt Sp.-Att. der Partner"),
        .aiRating = 0,
    },

    [ABILITY_FLUFFY] =
    {
        .name = _("Flauschigkeit"),
        .description = COMPOUND_STRING("Halb Kontakt, extra Feuer"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_DAZZLING] =
    {
        .name = _("Buntkörper"),
        .description = COMPOUND_STRING("Schützt vor Erstschlag."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SOUL_HEART] =
    {
        .name = _("Seelenherz"),
        .description = COMPOUND_STRING("Jedes K.O. erhöht Sp.Ang."),
        .aiRating = 7,
    },

    [ABILITY_TANGLING_HAIR] =
    {
        .name = _("Lockenkopf"),
        .description = COMPOUND_STRING("Senkt Init. b. Berührung."),
        .aiRating = 5,
    },

    [ABILITY_RECEIVER] =
    {
        .name = _("Receiver"),
        .description = COMPOUND_STRING("Erhält Fähigkeit b. K.O."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POWER_OF_ALCHEMY] =
    {
        .name = _("Chemiekraft"),
        .description = COMPOUND_STRING("Erhält Fähigkeit b. K.O."),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_BEAST_BOOST] =
    {
        .name = _("Bestien-Boost"),
        .description = COMPOUND_STRING("K.O. erhöht besten Wert."),
        .aiRating = 7,
    },

    [ABILITY_RKS_SYSTEM] =
    {
        .name = _("Alpha-System"),
        .description = COMPOUND_STRING("Typ je nach getrag. Disc."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_ELECTRIC_SURGE] =
    {
        .name = _("Elektro-Erzeuger"),
        .description = COMPOUND_STRING("Erzeugt ein Elektrofeld."),
        .aiRating = 8,
    },

    [ABILITY_PSYCHIC_SURGE] =
    {
        .name = _("Psycho-Erzeuger"),
        .description = COMPOUND_STRING("Erzeugt ein Psychofeld."),
        .aiRating = 8,
    },

    [ABILITY_MISTY_SURGE] =
    {
        .name = _("Nebel-Erzeuger"),
        .description = COMPOUND_STRING("Erzeugt ein Nebelfeld."),
        .aiRating = 8,
    },

    [ABILITY_GRASSY_SURGE] =
    {
        .name = _("Gras-Erzeuger"),
        .description = COMPOUND_STRING("Erzeugt ein Grasfeld."),
        .aiRating = 8,
    },

    [ABILITY_FULL_METAL_BODY] =
    {
        .name = _("Metallprotektor"),
        .description = COMPOUND_STRING("Werte können nicht sinken."),
        .aiRating = 4,
    },

    [ABILITY_SHADOW_SHIELD] =
    {
        .name = _("Phantomschutz"),
        .description = COMPOUND_STRING("Weniger Schaden b. voll KP"),
        .aiRating = 8,
    },

    [ABILITY_PRISM_ARMOR] =
    {
        .name = _("Prismarüstung"),
        .description = COMPOUND_STRING("Schwächt sehr eff. Att."),
        .aiRating = 6,
    },

    [ABILITY_NEUROFORCE] =
    {
        .name = _("Zerebralmacht"),
        .description = COMPOUND_STRING("Stärkt sehr effektive Att."),
        .aiRating = 6,
    },

    [ABILITY_INTREPID_SWORD] =
    {
        .name = _("Kühnes Schwert"),
        .description = COMPOUND_STRING("Erhöht Angr. b. Antritt."),
        .aiRating = 3,
    },

    [ABILITY_DAUNTLESS_SHIELD] =
    {
        .name = _("Wackerer Schild"),
        .description = COMPOUND_STRING("Erhöht Vert. b. Antritt."),
        .aiRating = 3,
    },

    [ABILITY_LIBERO] =
    {
        .name = _("Libero"),
        .description = COMPOUND_STRING("Nimmt den Typ der Att. an."),
    },

    [ABILITY_BALL_FETCH] =
    {
        .name = _("Apport"),
        .description = COMPOUND_STRING("Holt den ersten Ball zurück"),
        .aiRating = 0,
    },

    [ABILITY_COTTON_DOWN] =
    {
        .name = _("Wollflaum"),
        .description = COMPOUND_STRING("Treffer senkt Init. aller."),
        .aiRating = 3,
    },

    [ABILITY_PROPELLER_TAIL] =
    {
        .name = _("Schraubflosse"),
        .description = COMPOUND_STRING("Ignoriert Att.-Umleitung."),
        .aiRating = 2,
    },

    [ABILITY_MIRROR_ARMOR] =
    {
        .name = _("Spiegelrüstung"),
        .description = COMPOUND_STRING("Lenkt Wertesenkung zurück"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_GULP_MISSILE] =
    {
        .name = _("Würggeschoss"),
        .description = COMPOUND_STRING("Speit b. Treffer Beute aus."),
        .aiRating = 3,
        .cantBeSwapped = B_UPDATED_ABILITY_DATA < GEN_9,
        .cantBeCopied = B_UPDATED_ABILITY_DATA < GEN_9,
        .cantBeTraced = B_UPDATED_ABILITY_DATA < GEN_9,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_STALWART] =
    {
        .name = _("Stahlrückgrat"),
        .description = COMPOUND_STRING("Ignoriert Att.-Umleitung."),
        .aiRating = 2,
    },

    [ABILITY_STEAM_ENGINE] =
    {
        .name = _("Dampfantrieb"),
        .description = COMPOUND_STRING("Feuer, Wasser: Init. stark."),
        .aiRating = 3,
    },

    [ABILITY_PUNK_ROCK] =
    {
        .name = _("Punk Rock"),
        .description = COMPOUND_STRING("Stärkt Schall, halbiert sie."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SAND_SPIT] =
    {
        .name = _("Sandspeier"),
        .description = COMPOUND_STRING("Treffer erzeugt Sandsturm."),
        .aiRating = 5,
    },

    [ABILITY_ICE_SCALES] =
    {
        .name = _("Eisflügelstaub"),
        .description = COMPOUND_STRING("Halbiert Spezial-Schaden."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_RIPEN] =
    {
        .name = _("Heranreifen"),
        .description = COMPOUND_STRING("Verdoppelt Beeren-Wirkung."),
        .aiRating = 4,
    },

    [ABILITY_ICE_FACE] =
    {
        .name = _("Tiefkühlkopf"),
        .description = COMPOUND_STRING("Blockt einen phys. Angriff."),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .breakable = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_POWER_SPOT] =
    {
        .name = _("Kraftquelle"),
        .description = COMPOUND_STRING("Stärkt Att. der Nachbarn."),
        .aiRating = 2,
    },

    [ABILITY_MIMICRY] =
    {
        .name = _("Mimese"),
        .description = COMPOUND_STRING("Typ richtet sich nach Feld."),
        .aiRating = 2,
    },

    [ABILITY_SCREEN_CLEANER] =
    {
        .name = _("Hemmungslos"),
        .description = COMPOUND_STRING("Hebt Schilde b. Antritt auf."),
        .aiRating = 3,
    },

    [ABILITY_STEELY_SPIRIT] =
    {
        .name = _("Stählerner Wille"),
        .description = COMPOUND_STRING("Stärkt Stahl-Att. im Team."),
        .aiRating = 2,
    },

    [ABILITY_PERISH_BODY] =
    {
        .name = _("Unheilskörper"),
        .description = COMPOUND_STRING("Kontakt: beide n. 3 Rd. K.O."),
        .aiRating = -1,
    },

    [ABILITY_WANDERING_SPIRIT] =
    {
        .name = _("Rastlose Seele"),
        .description = COMPOUND_STRING("Tauscht Fähigk. b. Kontakt."),
        .aiRating = 2,
    },

    [ABILITY_GORILLA_TACTICS] =
    {
        .name = _("Affenfokus"),
        .description = COMPOUND_STRING("Mehr Angr., nur eine Att."),
        .aiRating = 4,
    },

    [ABILITY_NEUTRALIZING_GAS] =
    {
        .name = _("Reaktionsgas"),
        .description = COMPOUND_STRING("Hebt alle Fähigkeiten auf."),
        .aiRating = 5,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_PASTEL_VEIL] =
    {
        .name = _("Pastellhülle"),
        .description = COMPOUND_STRING("Schützt Team vor Gift."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_HUNGER_SWITCH] =
    {
        .name = _("Heißhunger"),
        .description = COMPOUND_STRING("Wechselt jede Runde Form."),
        .aiRating = 2,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUICK_DRAW] =
    {
        .name = _("Schnellschuss"),
        .description = COMPOUND_STRING("Handelt gelegentl. zuerst."),
        .aiRating = 4,
    },

    [ABILITY_UNSEEN_FIST] =
    {
        .name = _("Verborgene Faust"),
        .description = COMPOUND_STRING("Kontakt-Att. trotz Schutz."),
        .aiRating = 6,
    },

    [ABILITY_CURIOUS_MEDICINE] =
    {
        .name = _("Kuriose Arznei"),
        .description = COMPOUND_STRING("Hebt Werteänderungen auf."),
        .aiRating = 3,
    },

    [ABILITY_TRANSISTOR] =
    {
        .name = _("Transistor"),
        .description = COMPOUND_STRING("Stärkt Elektro-Attacken."),
        .aiRating = 6,
    },

    [ABILITY_DRAGONS_MAW] =
    {
        .name = _("Drachenkiefer"),
        .description = COMPOUND_STRING("Stärkt Drachen-Attacken."),
        .aiRating = 6,
    },

    [ABILITY_CHILLING_NEIGH] =
    {
        .name = _("Helles Wiehern"),
        .description = COMPOUND_STRING("K.O. erhöht den Angriff."),
        .aiRating = 7,
    },

    [ABILITY_GRIM_NEIGH] =
    {
        .name = _("Dunkles Wiehern"),
        .description = COMPOUND_STRING("K.O. erhöht den Sp.Ang."),
        .aiRating = 7,
    },

    [ABILITY_AS_ONE_ICE_RIDER] =
    {
        .name = _("Reitgespann"),
        .description = COMPOUND_STRING("Bedroher u. Helles Wiehern"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_AS_ONE_SHADOW_RIDER] =
    {
        .name = _("Reitgespann"),
        .description = COMPOUND_STRING("Bedroher u. Dunkles Wiehern"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_LINGERING_AROMA] =
    {
        .name = _("Duftschwade"),
        .description = COMPOUND_STRING("Überträgt sich b. Kontakt."),
        .aiRating = 5,
    },

    [ABILITY_SEED_SOWER] =
    {
        .name = _("Streusaat"),
        .description = COMPOUND_STRING("Treffer erzeugt Grasfeld."),
        .aiRating = 5,
    },

    [ABILITY_THERMAL_EXCHANGE] =
    {
        .name = _("Thermowandel"),
        .description = COMPOUND_STRING("Feuer-Att. erhöht den Angr."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANGER_SHELL] =
    {
        .name = _("Wutpanzer"),
        .description = COMPOUND_STRING("Halbe KP: Wut ändert Werte."),
        .aiRating = 3,
    },

    [ABILITY_PURIFYING_SALT] =
    {
        .name = _("Läutersalz"),
        .description = COMPOUND_STRING("Schutz vor Statusproblem."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_WELL_BAKED_BODY] =
    {
        .name = _("Knusperkruste"),
        .description = COMPOUND_STRING("Feuer-Att. hebt Vert. sehr."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_WIND_RIDER] =
    {
        .name = _("Windreiter"),
        .description = COMPOUND_STRING("Wind-Att. erhöht Angriff."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_GUARD_DOG] =
    {
        .name = _("Wachhund"),
        .description = COMPOUND_STRING("Bedrohung erhöht Angriff."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ROCKY_PAYLOAD] =
    {
        .name = _("Steinträger"),
        .description = COMPOUND_STRING("Stärkt Gesteins-Attacken."),
        .aiRating = 6,
    },

    [ABILITY_WIND_POWER] =
    {
        .name = _("Windkraft"),
        .description = COMPOUND_STRING("Wind-Att. lädt das Pkmn auf"),
        .aiRating = 4,
    },

    [ABILITY_ZERO_TO_HERO] =
    {
        .name = _("Superwechsel"),
        .description = COMPOUND_STRING("Heldenform b. Auswechseln."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_COMMANDER] =
    {
        .name = _("Kommandant"),
        .description = COMPOUND_STRING("Springt Heerashai ins Maul."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_ELECTROMORPHOSIS] =
    {
        .name = _("Dynamo"),
        .description = COMPOUND_STRING("Treffer lädt das Pkmn auf."),
        .aiRating = 5,
    },

    [ABILITY_PROTOSYNTHESIS] =
    {
        .name = _("Paläosynthese"),
        .description = COMPOUND_STRING("Sonne stärkt besten Wert."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUARK_DRIVE] =
    {
        .name = _("Quantenantrieb"),
        .description = COMPOUND_STRING("E-Feld stärkt besten Wert."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_GOOD_AS_GOLD] =
    {
        .name = _("Goldkörper"),
        .description = COMPOUND_STRING("Schutz vor Status-Att."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_VESSEL_OF_RUIN] =
    {
        .name = _("Unheilsgefäß"),
        .description = COMPOUND_STRING("Senkt gegn. Sp.Ang."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SWORD_OF_RUIN] =
    {
        .name = _("Unheilsschwert"),
        .description = COMPOUND_STRING("Senkt gegnerische Vert."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_TABLETS_OF_RUIN] =
    {
        .name = _("Unheilstafeln"),
        .description = COMPOUND_STRING("Senkt gegner. Angriff."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_BEADS_OF_RUIN] =
    {
        .name = _("Unheilsjuwelen"),
        .description = COMPOUND_STRING("Senkt gegn. Sp.Vert."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ORICHALCUM_PULSE] =
    {
        .name = _("Orichalkum-Puls"),
        .description = COMPOUND_STRING("Erzeugt Sonne, stärkt Angr."),
        .aiRating = 8,
        .cantBeSwapped = TRUE,
        .cantBeCopied = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_HADRON_ENGINE] =
    {
        .name = _("Hadronen-Motor"),
        .description = COMPOUND_STRING("Erzeugt Feld, hebt Sp.Ang."),
        .aiRating = 8,
        .cantBeSwapped = TRUE,
        .cantBeCopied = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_OPPORTUNIST] =
    {
        .name = _("Profiteur"),
        .description = COMPOUND_STRING("Kopiert gegn. Steigerung."),
        .aiRating = 5,
    },

    [ABILITY_CUD_CHEW] =
    {
        .name = _("Wiederkäuer"),
        .description = COMPOUND_STRING("Isst die Beere ein 2. Mal."),
        .aiRating = 4,
    },

    [ABILITY_SHARPNESS] =
    {
        .name = _("Scharfkantig"),
        .description = COMPOUND_STRING("Stärkt Schnitt-Attacken."),
        .aiRating = 7,
    },

    [ABILITY_SUPREME_OVERLORD] =
    {
        .name = _("Feldherr"),
        .description = COMPOUND_STRING("Je mehr K.O., desto stärker."),
        .aiRating = 6,
    },

    [ABILITY_COSTAR] =
    {
        .name = _("Synchronauftritt"),
        .description = COMPOUND_STRING("Kopiert Werte des Partners."),
        .aiRating = 5,
    },

    [ABILITY_TOXIC_DEBRIS] =
    {
        .name = _("Giftbelag"),
        .description = COMPOUND_STRING("Treffer legt Giftspitzen."),
        .aiRating = 4,
    },

    [ABILITY_ARMOR_TAIL] =
    {
        .name = _("Schweifrüstung"),
        .description = COMPOUND_STRING("Schützt vor Erstschlag."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_EARTH_EATER] =
    {
        .name = _("Bodenschmaus"),
        .description = COMPOUND_STRING("Boden-Att. heilt das Pkmn."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MYCELIUM_MIGHT] =
    {
        .name = _("Myzelienkraft"),
        .description = COMPOUND_STRING("Status-Att. spät u. sicher."),
        .aiRating = 2,
    },

    [ABILITY_HOSPITALITY] =
    {
        .name = _("Gastlichkeit"),
        .description = COMPOUND_STRING("Heilt den Partner b. Antritt"),
        .aiRating = 5,
    },

    [ABILITY_MINDS_EYE] =
    {
        .name = _("Geistiges Auge"),
        .description = COMPOUND_STRING("Genauigkeit sinkt nicht."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_TEAL_MASK] =
    {
        .name = _("Erinnerungskraft"),
        .description = COMPOUND_STRING("Maske erhöht die Init."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK] =
    {
        .name = _("Erinnerungskraft"),
        .description = COMPOUND_STRING("Maske erhöht den Angriff."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_WELLSPRING_MASK] =
    {
        .name = _("Erinnerungskraft"),
        .description = COMPOUND_STRING("Maske erhöht die Sp.Vert."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK] =
    {
        .name = _("Erinnerungskraft"),
        .description = COMPOUND_STRING("Maske erhöht die Vert."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TOXIC_CHAIN] =
    {
        .name = _("Giftkette"),
        .description = COMPOUND_STRING("Attacken vergiften evtl."),
        .aiRating = 8,
    },

    [ABILITY_SUPERSWEET_SYRUP] =
    {
        .name = _("Süßer Nektar"),
        .description = COMPOUND_STRING("Senkt Fluchtwert b. Antritt"),
        .aiRating = 5,
    },

    [ABILITY_TERA_SHIFT] =
    {
        .name = _("Tera-Wandel"),
        .description = COMPOUND_STRING("Terakristallisiert b. Start."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TERA_SHELL] =
    {
        .name = _("Tera-Panzer"),
        .description = COMPOUND_STRING("Alles wenig eff. b. voll KP"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_TERAFORM_ZERO] =
    {
        .name = _("Teraforming Null"),
        .description = COMPOUND_STRING("Hebt Wetter und Feld auf."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POISON_PUPPETEER] =
    {
        .name = _("Giftpuppenspiel"),
        .description = COMPOUND_STRING("Vergiftete werden verwirrt."),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },
};

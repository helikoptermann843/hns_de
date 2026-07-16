const struct AbilityInfo gAbilitiesInfo[ABILITIES_COUNT] =
{
    [ABILITY_NONE] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("Keine Fähigkeit"),
        .aiRating = 0,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STENCH] =
    {
        .name = _("Duftnote"),
        .description = COMPOUND_STRING("Chance auf zurückschrecken"),
        .aiRating = 1,
    },

    [ABILITY_DRIZZLE] =
    {
        .name = _("Niesel"),
        .description = COMPOUND_STRING("Ruft Regen im Kampf hervor"),
        .aiRating = 9,
    },

    [ABILITY_SPEED_BOOST] =
    {
        .name = _("Temposchub"),
        .description = COMPOUND_STRING("Erhöht allmählich Init."),
        .aiRating = 9,
    },

    [ABILITY_BATTLE_ARMOR] =
    {
        .name = _("Kampfpanzer"),
        .description = COMPOUND_STRING("Blockt kritische Treffer"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_STURDY] =
    {
        .name = _("Robustheit"),
        .description = COMPOUND_STRING("Negiert 1-Treffer-KO-Atk."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DAMP] =
    {
        .name = _("Feuchtigkeit"),
        .description = COMPOUND_STRING("Verhindert Selbstzerstörung"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_LIMBER] =
    {
        .name = _("Flexibilität"),
        .description = COMPOUND_STRING("Schützt v. Paralyse"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SAND_VEIL] =
    {
        .name = _("Sandschleier"),
        .description = COMPOUND_STRING("Flucht b. Sandsturm erhöht"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_STATIC] =
    {
        .name = _("Statik"),
        .description = COMPOUND_STRING("Lähmt b. Kontakt"),
        .aiRating = 4,
    },

    [ABILITY_VOLT_ABSORB] =
    {
        .name = _("Voltabsorber"),
        .description = COMPOUND_STRING("Wandelt Strom in KP um"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_WATER_ABSORB] =
    {
        .name = _("H2O-Absorber"),
        .description = COMPOUND_STRING("Verwandelt Wasser in KP"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_OBLIVIOUS] =
    {
        .name = _("Dösigkeit"),
        .description = COMPOUND_STRING("Verhindert Verliebtsein"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_CLOUD_NINE] =
    {
        .name = _("Wolke Sieben"),
        .description = COMPOUND_STRING("Negiert Wetter-Effekte"),
        .aiRating = 5,
    },

    [ABILITY_COMPOUND_EYES] =
    {
        .name = _("Facettenauge"),
        .description = COMPOUND_STRING("Erhöht die Genauigkeit"),
        .aiRating = 7,
    },

    [ABILITY_INSOMNIA] =
    {
        .name = _("Insomnia"),
        .description = COMPOUND_STRING("Verhindert Schlaf"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_COLOR_CHANGE] =
    {
        .name = _("Farbwechsel"),
        .description = COMPOUND_STRING("Wird Typ v. F-Gegn.-Atk."),
        .aiRating = 2,
    },

    [ABILITY_IMMUNITY] =
    {
        .name = _("Immunität"),
        .description = COMPOUND_STRING("Verhindert Vergiftung"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_FLASH_FIRE] =
    {
        .name = _("Feuerfänger"),
        .description = COMPOUND_STRING("Stärkt sich b. Feuertreffer"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SHIELD_DUST] =
    {
        .name = _("Puderabwehr"),
        .description = COMPOUND_STRING("Verhindert Zusatzeffekte"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_OWN_TEMPO] =
    {
        .name = _("Gleichmut"),
        .description = COMPOUND_STRING("Verhindert Verwirrung"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SUCTION_CUPS] =
    {
        .name = _("Saugnapf"),
        .description = COMPOUND_STRING("Verankert Körper fest"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_INTIMIDATE] =
    {
        .name = _("Bedroher"),
        .description = COMPOUND_STRING("Senkt Atk. d. Gegners"),
        .aiRating = 7,
    },

    [ABILITY_SHADOW_TAG] =
    {
        .name = _("Wegsperre"),
        .description = COMPOUND_STRING("Verhindert Flucht d. Ggnrs"),
        .aiRating = 10,
    },

    [ABILITY_ROUGH_SKIN] =
    {
        .name = _("Rauhaut"),
        .description = COMPOUND_STRING("Berührt werden tut weh"),
        .aiRating = 6,
    },

    [ABILITY_WONDER_GUARD] =
    {
        .name = _("Wunderwache"),
        .description = COMPOUND_STRING("Nur effektive Treffer"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_LEVITATE] =
    {
        .name = _("Schwebe"),
        .description = COMPOUND_STRING("Immun gegen Boden."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EFFECT_SPORE] =
    {
        .name = _("Sporenwirt"),
        .description = COMPOUND_STRING("Sporen bei Kontakt."),
        .aiRating = 4,
    },

    [ABILITY_SYNCHRONIZE] =
    {
        .name = _("Synchro"),
        .description = COMPOUND_STRING("Gibt Statusprobleme weiter"),
        .aiRating = 4,
    },

    [ABILITY_CLEAR_BODY] =
    {
        .name = _("Neutraltorso"),
        .description = COMPOUND_STRING("Verhindert Atk.-Senkung"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_NATURAL_CURE] =
    {
        .name = _("Innere Kraft"),
        .description = COMPOUND_STRING("Heilt b. Auswechseln"),
        .aiRating = 7,
    },

    [ABILITY_LIGHTNING_ROD] =
    {
        .name = _("Blitzfänger"),
        .description = COMPOUND_STRING("Zieht Elektro-Atk. an"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_SERENE_GRACE] =
    {
        .name = _("Edelmut"),
        .description = COMPOUND_STRING("Fördert Zusatzeffekte"),
        .aiRating = 8,
    },

    [ABILITY_SWIFT_SWIM] =
    {
        .name = _("Wassertempo"),
        .description = COMPOUND_STRING("Erhöht Init. b. Regen"),
        .aiRating = 6,
    },

    [ABILITY_CHLOROPHYLL] =
    {
        .name = _("Chlorophyll"),
        .description = COMPOUND_STRING("Erhöht Init. b. Sonne"),
        .aiRating = 6,
    },

    [ABILITY_ILLUMINATE] =
    {
        .name = _("Erleuchtung"),
        .description = COMPOUND_STRING("Begegnungsrate steigt"),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_TRACE] =
    {
        .name = _("Erfassen"),
        .description = COMPOUND_STRING("Kopiert Fähigkeit"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE, //B_UPDATED_ABILITY_DATA >= GEN_4
    },

    [ABILITY_HUGE_POWER] =
    {
        .name = _("Kraftkoloss"),
        .description = COMPOUND_STRING("Erhöht Atk."),
        .aiRating = 10,
    },

    [ABILITY_POISON_POINT] =
    {
        .name = _("Giftdorn"),
        .description = COMPOUND_STRING("Vergiftet Foes b. Kontakt"),
        .aiRating = 4,
    },

    [ABILITY_INNER_FOCUS] =
    {
        .name = _("Konzentrator"),
        .description = COMPOUND_STRING("Verhindert Flinchen"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MAGMA_ARMOR] =
    {
        .name = _("Magmapanzer"),
        .description = COMPOUND_STRING("Verhindert das Frieren"),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_WATER_VEIL] =
    {
        .name = _("Aquahülle"),
        .description = COMPOUND_STRING("Verhindert Verbrennung"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_MAGNET_PULL] =
    {
        .name = _("Magnetfalle"),
        .description = COMPOUND_STRING("Fängt Stahl-Pokémon ein"),
        .aiRating = 9,
    },

    [ABILITY_SOUNDPROOF] =
    {
        .name = _("Lärmschutz"),
        .description = COMPOUND_STRING("Hört keine Schall-Atk."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_RAIN_DISH] =
    {
        .name = _("Regengenuss"),
        .description = COMPOUND_STRING("Wenig KP-Reg. im Regen"),
        .aiRating = 3,
    },

    [ABILITY_SAND_STREAM] =
    {
        .name = _("Sandsturm"),
        .description = COMPOUND_STRING("Beschwört Sandsturm"),
        .aiRating = 9,
    },

    [ABILITY_PRESSURE] =
    {
        .name = _("Erzwinger"),
        .description = COMPOUND_STRING("Erhöht PP-Verbr. d. Gegners"),
        .aiRating = 5,
    },

    [ABILITY_THICK_FAT] =
    {
        .name = _("Speckschicht"),
        .description = COMPOUND_STRING("Schutz v. Hitze u. Kälte"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EARLY_BIRD] =
    {
        .name = _("Frühwecker"),
        .description = COMPOUND_STRING("Wacht schnell aus Schlaf"),
        .aiRating = 4,
    },

    [ABILITY_FLAME_BODY] =
    {
        .name = _("Flammkörper"),
        .description = COMPOUND_STRING("Verbrannt b. Kontakt"),
        .aiRating = 4,
    },

    [ABILITY_RUN_AWAY] =
    {
        .name = _("Angsthase"),
        .description = COMPOUND_STRING("Erleichtert das Fliehen"),
        .aiRating = 0,
    },

    [ABILITY_KEEN_EYE] =
    {
        .name = _("Adlerauge"),
        .description = COMPOUND_STRING("Verhindert Atk.-Verlust"),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_HYPER_CUTTER] =
    {
        .name = _("Scherenmacht"),
        .description = COMPOUND_STRING("Verhindert Atk.-Senkung"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_PICKUP] =
    {
        .name = _("Mitnahme"),
        .description = COMPOUND_STRING("Kann Items aufnehmen"),
        .aiRating = 1,
    },

    [ABILITY_TRUANT] =
    {
        .name = _("Schnarchnase"),
        .description = COMPOUND_STRING("Greift nur alle 2 Runden an"),
        .aiRating = -2,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_HUSTLE] =
    {
        .name = _("Übereifer"),
        .description = COMPOUND_STRING("Tauscht Genauigk. g. Stärke"),
        .aiRating = 7,
    },

    [ABILITY_CUTE_CHARM] =
    {
        .name = _("Charmebolzen"),
        .description = COMPOUND_STRING("Verliebt b. Kontakt"),
        .aiRating = 2,
    },

    [ABILITY_PLUS] =
    {
        .name = _("Plus"),
        .description = COMPOUND_STRING("Stärkt sich mit Minus"),
        .aiRating = 0,
    },

    [ABILITY_MINUS] =
    {
        .name = _("Minus"),
        .description = COMPOUND_STRING("Stärkt sich m. Plus"),
        .aiRating = 0,
    },

    [ABILITY_FORECAST] =
    {
        .name = _("Prognose"),
        .description = COMPOUND_STRING("Wechselt m. d. Wetter"),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = B_UPDATED_ABILITY_DATA >= GEN_4,
        .failsOnImposter = B_UPDATED_ABILITY_DATA >= GEN_5,
    },

    [ABILITY_STICKY_HOLD] =
    {
        .name = _("Klebekörper"),
        .description = COMPOUND_STRING("Schutz v. Item-Diebstahl"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SHED_SKIN] =
    {
        .name = _("Expidermis"),
        .description = COMPOUND_STRING("Heilt d. Körper d. Häutung"),
        .aiRating = 7,
    },

    [ABILITY_GUTS] =
    {
        .name = _("Adrenalin"),
        .description = COMPOUND_STRING("Erhöht Atk. b. Status"),
        .aiRating = 6,
    },

    [ABILITY_MARVEL_SCALE] =
    {
        .name = _("Notschutz"),
        .description = COMPOUND_STRING("Wird verwundet, steigt Ver."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_LIQUID_OOZE] =
    {
        .name = _("Kloakensoße"),
        .description = COMPOUND_STRING("Saugen bringt Verletzung"),
        .aiRating = 3,
    },

    [ABILITY_OVERGROW] =
    {
        .name = _("Notdünger"),
        .description = COMPOUND_STRING("Hebt Gras-Atk. in Not b."),
        .aiRating = 5,
    },

    [ABILITY_BLAZE] =
    {
        .name = _("Großbrand"),
        .description = COMPOUND_STRING("Feuer-Atk. b. Not stark"),
        .aiRating = 5,
    },

    [ABILITY_TORRENT] =
    {
        .name = _("Sturzbach"),
        .description = COMPOUND_STRING("Stärkt Was.-Atk. i. Not"),
        .aiRating = 5,
    },

    [ABILITY_SWARM] =
    {
        .name = _("Hexaplaga"),
        .description = COMPOUND_STRING("E"),
        .aiRating = 5,
    },

    [ABILITY_ROCK_HEAD] =
    {
        .name = _("Steinhaupt"),
        .description = COMPOUND_STRING("Verhindert Rückstoß-Schaden"),
        .aiRating = 5,
    },

    [ABILITY_DROUGHT] =
    {
        .name = _("Dürre"),
        .description = COMPOUND_STRING("Beschwört Sonne im Kampf"),
        .aiRating = 9,
    },

    [ABILITY_ARENA_TRAP] =
    {
        .name = _("Ausweglos"),
        .description = COMPOUND_STRING("Verhindert Flucht"),
        .aiRating = 9,
    },

    [ABILITY_VITAL_SPIRIT] =
    {
        .name = _("Munterkeit"),
        .description = COMPOUND_STRING("Verhindert Schlaf"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_WHITE_SMOKE] =
    {
        .name = _("Pulverrauch"),
        .description = COMPOUND_STRING("Verhindert Atk.-Senkung"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_PURE_POWER] =
    {
        .name = _("Mentalkraft"),
        .description = COMPOUND_STRING("Erhöht Atk."),
        .aiRating = 10,
    },

    [ABILITY_SHELL_ARMOR] =
    {
        .name = _("Panzerhaut"),
        .description = COMPOUND_STRING("Blockt kritische Treffer"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_AIR_LOCK] =
    {
        .name = _("Klimaschutz"),
        .description = COMPOUND_STRING("Negiert Wetter-Effekte"),
        .aiRating = 5,
    },

    [ABILITY_TANGLED_FEET] =
    {
        .name = _("Taumelschritt"),
        .description = COMPOUND_STRING("Flucht b. Verwirrung erhöht"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MOTOR_DRIVE] =
    {
        .name = _("Starthilfe"),
        .description = COMPOUND_STRING("Strom erhöht Init."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_RIVALRY] =
    {
        .name = _("Rivalität"),
        .description = COMPOUND_STRING("Stärkt b. Rw."),
        .aiRating = 1,
    },

    [ABILITY_STEADFAST] =
    {
        .name = _("Felsenfest"),
        .description = COMPOUND_STRING("Fluchten erhöht Init."),
        .aiRating = 2,
    },

    [ABILITY_SNOW_CLOAK] =
    {
        .name = _("Schneemantel"),
        .description = COMPOUND_STRING("Flucht b. Hagel/Schnee +"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_GLUTTONY] =
    {
        .name = _("Völlerei"),
        .description = COMPOUND_STRING("Isst Beeren früh"),
        .aiRating = 3,
    },

    [ABILITY_ANGER_POINT] =
    {
        .name = _("Kurzschluss"),
        .description = COMPOUND_STRING("Krit-Treffer erhöhn Atk."),
        .aiRating = 4,
    },

    [ABILITY_UNBURDEN] =
    {
        .name = _("Entlastung"),
        .description = COMPOUND_STRING("Item hält: Init. steigt"),
        .aiRating = 7,
    },

    [ABILITY_HEATPROOF] =
    {
        .name = _("Hitzeschutz"),
        .description = COMPOUND_STRING("Schutz v. Hitze u. Brand"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SIMPLE] =
    {
        .name = _("Wankelmut"),
        .description = COMPOUND_STRING("Anfällig f. wilde St-Änd."),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_DRY_SKIN] =
    {
        .name = _("Trockenheit"),
        .description = COMPOUND_STRING("Bevorzugt Feuchte v. Hitze"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DOWNLOAD] =
    {
        .name = _("Download"),
        .description = COMPOUND_STRING("Stärkt Atk.-Kraft günstig"),
        .aiRating = 7,
    },

    [ABILITY_IRON_FIST] =
    {
        .name = _("Eisenfaust"),
        .description = COMPOUND_STRING("Stärkt Schlag-Atk."),
        .aiRating = 6,
    },

    [ABILITY_POISON_HEAL] =
    {
        .name = _("Giftheilung"),
        .description = COMPOUND_STRING("Heilt KP b. Vergiftung"),
        .aiRating = 8,
    },

    [ABILITY_ADAPTABILITY] =
    {
        .name = _("Anpassung"),
        .description = COMPOUND_STRING("Stärkt eigene Typ-Atk."),
        .aiRating = 8,
    },

    [ABILITY_SKILL_LINK] =
    {
        .name = _("Wertelink"),
        .description = COMPOUND_STRING("Multi-Atk treffen 5-mal"),
        .aiRating = 7,
    },

    [ABILITY_HYDRATION] =
    {
        .name = _("Hydration"),
        .description = COMPOUND_STRING("Heilt Status b. Regen"),
        .aiRating = 4,
    },

    [ABILITY_SOLAR_POWER] =
    {
        .name = _("Solarkraft"),
        .description = COMPOUND_STRING("Stärkt sich in Sonne"),
        .aiRating = 3,
    },

    [ABILITY_QUICK_FEET] =
    {
        .name = _("Rasanz"),
        .description = COMPOUND_STRING("Init. steigt b. Status"),
        .aiRating = 5,
    },

    [ABILITY_NORMALIZE] =
    {
        .name = _("Regulierung"),
        .description = COMPOUND_STRING("Atk. werden zu Normal-Typ"),
        .aiRating = -1,
    },

    [ABILITY_SNIPER] =
    {
        .name = _("Superschütze"),
        .description = COMPOUND_STRING("Erhoeht Volltreffer-Chance"),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_GUARD] =
    {
        .name = _("Magieschild"),
        .description = COMPOUND_STRING("Nur v. Atk. geschädigt"),
        .aiRating = 9,
    },

    [ABILITY_NO_GUARD] =
    {
        .name = _("Schildlos"),
        .description = COMPOUND_STRING("Alle Atk. treffen sicher"),
        .aiRating = 8,
    },

    [ABILITY_STALL] =
    {
        .name = _("Zeitspiel"),
        .description = COMPOUND_STRING("Greift immer zuletzt an"),
        .aiRating = -1,
    },

    [ABILITY_TECHNICIAN] =
    {
        .name = _("Techniker"),
        .description = COMPOUND_STRING("Verstärkt schwache Atk."),
        .aiRating = 8,
    },

    [ABILITY_LEAF_GUARD] =
    {
        .name = _("Floraschild"),
        .description = COMPOUND_STRING("Blockt Status b. Sonne"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_KLUTZ] =
    {
        .name = _("Tollpatsch"),
        .description = COMPOUND_STRING("Kann Item nicht halten"),
        .aiRating = -1,
    },

    [ABILITY_MOLD_BREAKER] =
    {
        .name = _("Überbrückung"),
        .description = COMPOUND_STRING("Atk. treffen durch Fähigk."),
        .aiRating = 7,
    },

    [ABILITY_SUPER_LUCK] =
    {
        .name = _("Glückspilz"),
        .description = COMPOUND_STRING("Krit. Treffer häufiger"),
        .aiRating = 3,
    },

    [ABILITY_AFTERMATH] =
    {
        .name = _("Finalschlag"),
        .description = COMPOUND_STRING("Faint schadet d. Gegner"),
        .aiRating = 5,
    },

    [ABILITY_ANTICIPATION] =
    {
        .name = _("Vorahnung"),
        .description = COMPOUND_STRING("Spürt gefährliche Atk."),
        .aiRating = 2,
    },

    [ABILITY_FOREWARN] =
    {
        .name = _("Vorwarnung"),
        .description = COMPOUND_STRING("Bestimmt gegnerische Atk."),
        .aiRating = 2,
    },

    [ABILITY_UNAWARE] =
    {
        .name = _("Unkenntnis"),
        .description = COMPOUND_STRING("Ignoriert Stat-Änderungen"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_TINTED_LENS] =
    {
        .name = _("Aufwertung"),
        .description = COMPOUND_STRING("Trifft nicht effektiv Atk."),
        .aiRating = 7,
    },

    [ABILITY_FILTER] =
    {
        .name = _("Filter"),
        .description = COMPOUND_STRING("Schwächt sehr eff. Atk."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SLOW_START] =
    {
        .name = _("Saumselig"),
        .description = COMPOUND_STRING("Braucht Zeit zum Starten"),
        .aiRating = -2,
    },

    [ABILITY_SCRAPPY] =
    {
        .name = _("Rauflust"),
        .description = COMPOUND_STRING("Trifft Geist-Pokémon"),
        .aiRating = 6,
    },

    [ABILITY_STORM_DRAIN] =
    {
        .name = _("Sturmsog"),
        .description = COMPOUND_STRING("Zieht Wasser-Atk. an"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_ICE_BODY] =
    {
        .name = _("Eishaut"),
        .description = COMPOUND_STRING("KP-Rec. b. Hagel od. Schnee"),
        .aiRating = 3,
    },

    [ABILITY_SOLID_ROCK] =
    {
        .name = _("Felskern"),
        .description = COMPOUND_STRING("Schwächt sehr eff. Atk."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SNOW_WARNING] =
    {
        .name = _("Schneeschauer"),
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
        .description = COMPOUND_STRING("Kann Honig sammeln"),
        .aiRating = 0,
    },

    [ABILITY_FRISK] =
    {
        .name = _("Schnüffler"),
        .description = COMPOUND_STRING("Prüft Item v. Gegner"),
        .aiRating = 3,
    },

    [ABILITY_RECKLESS] =
    {
        .name = _("Achtlos"),
        .description = COMPOUND_STRING("Stärkt Atk. m. Rückstoß"),
        .aiRating = 6,
    },

    [ABILITY_MULTITYPE] =
    {
        .name = _("Variabilität"),
        .description = COMPOUND_STRING("Typ wechselt z. Platte"),
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
        .description = COMPOUND_STRING("Verb. stärken Sonne"),
        .aiRating = 4,
        .cantBeCopied = TRUE,
        .cantBeTraced = B_UPDATED_ABILITY_DATA >= GEN_5,
        .breakable = TRUE,
    },

    [ABILITY_BAD_DREAMS] =
    {
        .name = _("Alptraum"),
        .description = COMPOUND_STRING("Schadet schlafenden Poki"),
        .aiRating = 4,
    },

    [ABILITY_PICKPOCKET] =
    {
        .name = _("Langfinger"),
        .description = COMPOUND_STRING("Stiehlt Item d. Gegners"),
        .aiRating = 3,
    },

    [ABILITY_SHEER_FORCE] =
    {
        .name = _("Rohe Gewalt"),
        .description = COMPOUND_STRING("Tauscht Effekte g. Stärke"),
        .aiRating = 8,
    },

    [ABILITY_CONTRARY] =
    {
        .name = _("Umkehrung"),
        .description = COMPOUND_STRING("Dreht Stat.-Änd. um"),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_UNNERVE] =
    {
        .name = _("Anspannung"),
        .description = COMPOUND_STRING("Gegner essen keine Beeren"),
        .aiRating = 3,
    },

    [ABILITY_DEFIANT] =
    {
        .name = _("Siegeswille"),
        .description = COMPOUND_STRING("Senkte Stats hebt Atk."),
        .aiRating = 5,
    },

    [ABILITY_DEFEATIST] =
    {
        .name = _("Schwächling"),
        .description = COMPOUND_STRING("Gibt b. halber KP auf"),
        .aiRating = -1,
    },

    [ABILITY_CURSED_BODY] =
    {
        .name = _("Tastfluch"),
        .description = COMPOUND_STRING("Deaktiviert Atk. b. Kontakt"),
        .aiRating = 4,
    },

    [ABILITY_HEALER] =
    {
        .name = _("Heilherz"),
        .description = COMPOUND_STRING("Heilt Partner-Pokémon"),
        .aiRating = 0,
    },

    [ABILITY_FRIEND_GUARD] =
    {
        .name = _("Freundeshut"),
        .description = COMPOUND_STRING("Senkt Schaden an Partner"),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_WEAK_ARMOR] =
    {
        .name = _("Bruchrüstung"),
        .description = COMPOUND_STRING("St. ändern b. Treffer"),
        .aiRating = 2,
    },

    [ABILITY_HEAVY_METAL] =
    {
        .name = _("Schwermetall"),
        .description = COMPOUND_STRING("Verdoppelt das Gewicht"),
        .aiRating = -1,
        .breakable = TRUE,
    },

    [ABILITY_LIGHT_METAL] =
    {
        .name = _("Leichtmetall"),
        .description = COMPOUND_STRING("Halbiert Gewicht"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MULTISCALE] =
    {
        .name = _("Multischuppe"),
        .description = COMPOUND_STRING("Halbiert Schaden b. voll KP"),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_TOXIC_BOOST] =
    {
        .name = _("Giftwahn"),
        .description = COMPOUND_STRING("Atk. steigt b. Vergiftung"),
        .aiRating = 6,
    },

    [ABILITY_FLARE_BOOST] =
    {
        .name = _("Hitzewahn"),
        .description = COMPOUND_STRING("Erhöht Sp.-Atk. b. Brand"),
        .aiRating = 5,
    },

    [ABILITY_HARVEST] =
    {
        .name = _("Reiche Ernte"),
        .description = COMPOUND_STRING("Beere wiederverwenden mögl."),
        .aiRating = 5,
    },

    [ABILITY_TELEPATHY] =
    {
        .name = _("Telepathie"),
        .description = COMPOUND_STRING("Kein Schaden v. Verbündeten"),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_MOODY] =
    {
        .name = _("Gefühlswippe"),
        .description = COMPOUND_STRING("St. ändern sich allmählich"),
        .aiRating = 10,
    },

    [ABILITY_OVERCOAT] =
    {
        .name = _("Partikelschutz"),
        .description = COMPOUND_STRING("Blockt Wetter u. Pulver"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_POISON_TOUCH] =
    {
        .name = _("Giftgriff"),
        .description = COMPOUND_STRING("Vergiftet Foes b. Kontakt"),
        .aiRating = 4,
    },

    [ABILITY_REGENERATOR] =
    {
        .name = _("Belebekraft"),
        .description = COMPOUND_STRING("Heilt b. Auswechseln"),
        .aiRating = 8,
    },

    [ABILITY_BIG_PECKS] =
    {
        .name = _("Brustbieter"),
        .description = COMPOUND_STRING("Verhindert Ver.-Verlust"),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_SAND_RUSH] =
    {
        .name = _("Sandscharrer"),
        .description = COMPOUND_STRING("Init. steigt b. Sandsturm"),
        .aiRating = 6,
    },

    [ABILITY_WONDER_SKIN] =
    {
        .name = _("Wunderhaut"),
        .description = COMPOUND_STRING("Kann Statusprobleme meiden"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANALYTIC] =
    {
        .name = _("Analyse"),
        .description = COMPOUND_STRING("Am Zugende mehr Atk.-Stk."),
        .aiRating = 5,
    },

    [ABILITY_ILLUSION] =
    {
        .name = _("Trugbild"),
        .description = COMPOUND_STRING("Wirkt als Partner"),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_IMPOSTER] =
    {
        .name = _("Doppelgänger"),
        .description = COMPOUND_STRING("Verwandelt sich in Gegner"),
        .aiRating = 9,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_INFILTRATOR] =
    {
        .name = _("Schwebedurch"),
        .description = COMPOUND_STRING("Dringt durch Barrieren"),
        .aiRating = 6,
    },

    [ABILITY_MUMMY] =
    {
        .name = _("Mumie"),
        .description = COMPOUND_STRING("Breitet sich b. Kontakt aus"),
        .aiRating = 5,
    },

    [ABILITY_MOXIE] =
    {
        .name = _("Hochmut"),
        .description = COMPOUND_STRING("KP-Verlust erhöht Atk."),
        .aiRating = 7,
    },

    [ABILITY_JUSTIFIED] =
    {
        .name = _("Redlichkeit"),
        .description = COMPOUND_STRING("Finster-Atk. hebt Atk."),
        .aiRating = 4,
    },

    [ABILITY_RATTLED] =
    {
        .name = _("Hasenfuß"),
        .description = COMPOUND_STRING("Erhöht Init. b. Schrecken"),
        .aiRating = 3,
    },

    [ABILITY_MAGIC_BOUNCE] =
    {
        .name = _("Magiespiegel"),
        .description = COMPOUND_STRING("Wirft Status-Atk. zurück"),
        .aiRating = 9,
        .breakable = TRUE,
    },

    [ABILITY_SAP_SIPPER] =
    {
        .name = _("Vegetarier"),
        .description = COMPOUND_STRING("Gras erhöht Atk."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_PRANKSTER] =
    {
        .name = _("Strolch"),
        .description = COMPOUND_STRING("Status-Atk. gehen zuerst"),
        .aiRating = 8,
    },

    [ABILITY_SAND_FORCE] =
    {
        .name = _("Sandgewalt"),
        .description = COMPOUND_STRING("Stärkt sich in Sandsturm"),
        .aiRating = 4,
    },

    [ABILITY_IRON_BARBS] =
    {
        .name = _("Eisenstachel"),
        .description = COMPOUND_STRING("Berührt werden tut weh"),
        .aiRating = 6,
    },

    [ABILITY_ZEN_MODE] =
    {
        .name = _("Trance-Modus"),
        .description = COMPOUND_STRING("Wandelt b. Halb-HP um"),
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
        .description = COMPOUND_STRING("Erhöht Genauigkeit d. Party"),
        .aiRating = 6,
    },

    [ABILITY_TURBOBLAZE] =
    {
        .name = _("Turbobrand"),
        .description = COMPOUND_STRING("Atk. treffen durch Fähigk."),
        .aiRating = 7,
    },

    [ABILITY_TERAVOLT] =
    {
        .name = _("Teravolt"),
        .description = COMPOUND_STRING("Atk. treffen durch Fähigk."),
        .aiRating = 7,
    },

    [ABILITY_AROMA_VEIL] =
    {
        .name = _("DuftHülle"),
        .description = COMPOUND_STRING("Verhindert Atk.-Limitierung"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_FLOWER_VEIL] =
    {
        .name = _("Blütenhülle"),
        .description = COMPOUND_STRING("Schützt Pflanzen-Pokémon"),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_CHEEK_POUCH] =
    {
        .name = _("Backentaschen"),
        .description = COMPOUND_STRING("Beeren essen heilt KP"),
        .aiRating = 4,
    },

    [ABILITY_PROTEAN] =
    {
        .name = _("Wandlungskunst"),
        .description = COMPOUND_STRING("Typ wird zur einges. Atk."),
        .aiRating = 8,
    },

    [ABILITY_FUR_COAT] =
    {
        .name = _("Fellkleid"),
        .description = COMPOUND_STRING("Erhöht die Ver."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MAGICIAN] =
    {
        .name = _("Zauberer"),
        .description = COMPOUND_STRING("Stiehlt Item d. Gegners"),
        .aiRating = 3,
    },

    [ABILITY_BULLETPROOF] =
    {
        .name = _("Kugelsicher"),
        .description = COMPOUND_STRING("W. einig. Projektile ausw."),
        .breakable = TRUE,
        .aiRating = 7,
    },

    [ABILITY_COMPETITIVE] =
    {
        .name = _("Unbeugsamkeit"),
        .description = COMPOUND_STRING("Senkte Stats heben Sp.-Atk."),
        .aiRating = 5,
    },

    [ABILITY_STRONG_JAW] =
    {
        .name = _("Titankiefer"),
        .description = COMPOUND_STRING("Stärkt Beiß-Atk."),
        .aiRating = 6,
    },

    [ABILITY_REFRIGERATE] =
    {
        .name = _("Frostschicht"),
        .description = COMPOUND_STRING("Normale Atk. werden Eis"),
        .aiRating = 8,
    },

    [ABILITY_SWEET_VEIL] =
    {
        .name = _("Zuckerhülle"),
        .description = COMPOUND_STRING("Schützt Team v. Schlaf"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_STANCE_CHANGE] =
    {
        .name = _("Taktikwechsel"),
        .description = COMPOUND_STRING("Wandelt sich im Kampf um"),
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
        .description = COMPOUND_STRING("Flug-Atk. gehen zuerst"),
        .aiRating = 6,
    },

    [ABILITY_MEGA_LAUNCHER] =
    {
        .name = _("Megawumme"),
        .description = COMPOUND_STRING("Verstärkt Puls-Atk."),
        .aiRating = 7,
    },

    [ABILITY_GRASS_PELT] =
    {
        .name = _("Pflanzenpelz"),
        .description = COMPOUND_STRING("Ver. b. Gras erhöht"),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SYMBIOSIS] =
    {
        .name = _("Symbiose"),
        .description = COMPOUND_STRING("Gibt Item an Partner ab"),
        .aiRating = 0,
    },

    [ABILITY_TOUGH_CLAWS] =
    {
        .name = _("Krallenwucht"),
        .description = COMPOUND_STRING("Stärkt Kontakt-Atk."),
        .aiRating = 7,
    },

    [ABILITY_PIXILATE] =
    {
        .name = _("Feenschicht"),
        .description = COMPOUND_STRING("Normale Atk. werden Fee"),
        .aiRating = 8,
    },

    [ABILITY_GOOEY] =
    {
        .name = _("Viskosität"),
        .description = COMPOUND_STRING("Senkt Init. b. Kontakt"),
        .aiRating = 5,
    },

    [ABILITY_AERILATE] =
    {
        .name = _("Zenithaut"),
        .description = COMPOUND_STRING("Normale Atk. werden Flug"),
        .aiRating = 8,
    },

    [ABILITY_PARENTAL_BOND] =
    {
        .name = _("Familienbande"),
        .description = COMPOUND_STRING("Atk. treffen zweimal"),
        .aiRating = 10,
    },

    [ABILITY_DARK_AURA] =
    {
        .name = _("Dunkelaura"),
        .description = COMPOUND_STRING("Stärkt Unlicht-Atk."),
        .aiRating = 6,
        .breakable = B_UPDATED_ABILITY_DATA < GEN_8,
    },

    [ABILITY_FAIRY_AURA] =
    {
        .name = _("Feenaura"),
        .description = COMPOUND_STRING("Stärkt Feen-Atk."),
        .aiRating = 6,
        .breakable = B_UPDATED_ABILITY_DATA < GEN_8,
    },

    [ABILITY_AURA_BREAK] =
    {
        .name = _("Aura-Umkehr"),
        .description = COMPOUND_STRING("Kehrt Aura-Fähigk. um"),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_PRIMORDIAL_SEA] =
    {
        .name = _("Urmeer"),
        .description = COMPOUND_STRING("Ruft starken Regen hervor"),
        .aiRating = 10,
    },

    [ABILITY_DESOLATE_LAND] =
    {
        .name = _("Endland"),
        .description = COMPOUND_STRING("Beschwört Sonnenlicht."),
        .aiRating = 10,
    },

    [ABILITY_DELTA_STREAM] =
    {
        .name = _("Delta-Wind"),
        .description = COMPOUND_STRING("Ruft starke Winde hervor"),
        .aiRating = 10,
    },

    [ABILITY_STAMINA] =
    {
        .name = _("Zähigkeit"),
        .description = COMPOUND_STRING("Ver. steigt b. Treffer"),
        .aiRating = 6,
    },

    [ABILITY_WIMP_OUT] =
    {
        .name = _("Reißaus"),
        .description = COMPOUND_STRING("Flieht b. halber KP"),
        .aiRating = 3,
    },

    [ABILITY_EMERGENCY_EXIT] =
    {
        .name = _("Rückzug"),
        .description = COMPOUND_STRING("Flieht b. halber KP"),
        .aiRating = 3,
    },

    [ABILITY_WATER_COMPACTION] =
    {
        .name = _("Verklumpen"),
        .description = COMPOUND_STRING("Wasser boostet Ver."),
        .aiRating = 4,
    },

    [ABILITY_MERCILESS] =
    {
        .name = _("Quälerei"),
        .description = COMPOUND_STRING("Krit. vergiftet Gegner"),
        .aiRating = 4,
    },

    [ABILITY_SHIELDS_DOWN] =
    {
        .name = _("Limitschild"),
        .description = COMPOUND_STRING("Panzer bricht b. halber KP"),
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
        .description = COMPOUND_STRING("Stärker wenn Gegner einw."),
        .aiRating = 6,
    },

    [ABILITY_WATER_BUBBLE] =
    {
        .name = _("Wasserblase"),
        .description = COMPOUND_STRING("Schützt v. Feuer u. Brand"),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_STEELWORKER] =
    {
        .name = _("Stahlprofi"),
        .description = COMPOUND_STRING("Stählt Stahl-Atk. auf"),
        .aiRating = 6,
    },

    [ABILITY_BERSERK] =
    {
        .name = _("Wutausbruch"),
        .description = COMPOUND_STRING("St. Atk. b. wenig KP"),
        .aiRating = 5,
    },

    [ABILITY_SLUSH_RUSH] =
    {
        .name = _("Schneescharrer"),
        .description = COMPOUND_STRING("Erhöht Init. in Schnee."),
        .aiRating = 5,
    },

    [ABILITY_LONG_REACH] =
    {
        .name = _("Langstrecke"),
        .description = COMPOUND_STRING("Greift niemals direkt an"),
        .aiRating = 3,
    },

    [ABILITY_LIQUID_VOICE] =
    {
        .name = _("Plätscherstimme"),
        .description = COMPOUND_STRING("Macht Schall-Atk. zu Wasser"),
        .aiRating = 5,
    },

    [ABILITY_TRIAGE] =
    {
        .name = _("Heilwandel"),
        .description = COMPOUND_STRING("Heil-Atk. gehen zuerst"),
        .aiRating = 7,
    },

    [ABILITY_GALVANIZE] =
    {
        .name = _("Elektrohaut"),
        .description = COMPOUND_STRING("Normale Atk. werden Elektro"),
        .aiRating = 8,
    },

    [ABILITY_SURGE_SURFER] =
    {
        .name = _("Surf-Schweif"),
        .description = COMPOUND_STRING("Schneller b. Strom"),
        .aiRating = 4,
    },

    [ABILITY_SCHOOLING] =
    {
        .name = _("Fischschwarm"),
        .description = COMPOUND_STRING("Bildet b. Stärke e. Schule"),
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
        .description = COMPOUND_STRING("Ablenkung schützt es 1x"),
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
        .description = COMPOUND_STRING("Wandelt b. KP=0 um"),
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
        .description = COMPOUND_STRING("Zellen helfen b. Schwäche"),
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
        .description = COMPOUND_STRING("Vergiftet jeden Typ"),
        .aiRating = 5,
    },

    [ABILITY_COMATOSE] =
    {
        .name = _("Dauerschlaf"),
        .description = COMPOUND_STRING("Schläft stets."),
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
        .description = COMPOUND_STRING("Schützt v. Prio.-Atk."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_INNARDS_OUT] =
    {
        .name = _("Magenkrempler"),
        .description = COMPOUND_STRING("Schadet Gegner b. Besiegung"),
        .aiRating = 5,
    },

    [ABILITY_DANCER] =
    {
        .name = _("Tänzer"),
        .description = COMPOUND_STRING("Tanzt mit anderen mit"),
        .aiRating = 5,
    },

    [ABILITY_BATTERY] =
    {
        .name = _("Batterie"),
        .description = COMPOUND_STRING("Stärkt Sp.-Atk. v. Verb."),
        .aiRating = 0,
    },

    [ABILITY_FLUFFY] =
    {
        .name = _("Flauschigkeit"),
        .description = COMPOUND_STRING("Härter, aber brennbar"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_DAZZLING] =
    {
        .name = _("Buntkörper"),
        .description = COMPOUND_STRING("Schützt v. Prio.-Atk."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SOUL_HEART] =
    {
        .name = _("Seelenherz"),
        .description = COMPOUND_STRING("KOs erhöhen Sp.-Atk."),
        .aiRating = 7,
    },

    [ABILITY_TANGLING_HAIR] =
    {
        .name = _("Lockenkopf"),
        .description = COMPOUND_STRING("Senkt Init. b. Kontakt"),
        .aiRating = 5,
    },

    [ABILITY_RECEIVER] =
    {
        .name = _("Receiver"),
        .description = COMPOUND_STRING("Kopiert Atk. v. Verbündeten"),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POWER_OF_ALCHEMY] =
    {
        .name = _("Chemiekraft"),
        .description = COMPOUND_STRING("Kopiert Atk. v. Verbündeten"),
        .aiRating = 0,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_BEAST_BOOST] =
    {
        .name = _("Bestien-Boost"),
        .description = COMPOUND_STRING("KOs stärken beste Stat."),
        .aiRating = 7,
    },

    [ABILITY_RKS_SYSTEM] =
    {
        .name = _("Alpha-System"),
        .description = COMPOUND_STRING("Erinnerungen ändern Typ"),
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
        .description = COMPOUND_STRING("Feld wird zu Elektro"),
        .aiRating = 8,
    },

    [ABILITY_PSYCHIC_SURGE] =
    {
        .name = _("Psycho-Erzeuger"),
        .description = COMPOUND_STRING("Feld wird seltsam"),
        .aiRating = 8,
    },

    [ABILITY_MISTY_SURGE] =
    {
        .name = _("Nebel-Erzeuger"),
        .description = COMPOUND_STRING("Feld wird neblig"),
        .aiRating = 8,
    },

    [ABILITY_GRASSY_SURGE] =
    {
        .name = _("Gras-Erzeuger"),
        .description = COMPOUND_STRING("Feld wird zu Grasfeld"),
        .aiRating = 8,
    },

    [ABILITY_FULL_METAL_BODY] =
    {
        .name = _("Metallprotektor"),
        .description = COMPOUND_STRING("Schützt v. Stat-Senkung"),
        .aiRating = 4,
    },

    [ABILITY_SHADOW_SHIELD] =
    {
        .name = _("Phantomschutz"),
        .description = COMPOUND_STRING("Halbiert Schaden b. voll KP"),
        .aiRating = 8,
    },

    [ABILITY_PRISM_ARMOR] =
    {
        .name = _("Prismarüstung"),
        .description = COMPOUND_STRING("Schwächt sehr eff. Atk."),
        .aiRating = 6,
    },

    [ABILITY_NEUROFORCE] =
    {
        .name = _("Zerebralmacht"),
        .description = COMPOUND_STRING("Traf schwach b. Gegner: 2x"),
        .aiRating = 6,
    },

    [ABILITY_INTREPID_SWORD] =
    {
        .name = _("Kühnes Schwert"),
        .description = COMPOUND_STRING("Erhöht Atk. b. Eintritt"),
        .aiRating = 3,
    },

    [ABILITY_DAUNTLESS_SHIELD] =
    {
        .name = _("Wackerer Schild"),
        .description = COMPOUND_STRING("Erhöht Ver. b. Eintritt"),
        .aiRating = 3,
    },

    [ABILITY_LIBERO] =
    {
        .name = _("Libero"),
        .description = COMPOUND_STRING("Typ wird z. Atk. geändert"),
    },

    [ABILITY_BALL_FETCH] =
    {
        .name = _("Apport"),
        .description = COMPOUND_STRING("Holt Pokéball zurück"),
        .aiRating = 0,
    },

    [ABILITY_COTTON_DOWN] =
    {
        .name = _("Wollflaum"),
        .description = COMPOUND_STRING("Senkt Init. wenn getroffen"),
        .aiRating = 3,
    },

    [ABILITY_PROPELLER_TAIL] =
    {
        .name = _("Schraubflosse"),
        .description = COMPOUND_STRING("Ignoriert Umleitung v. Foes"),
        .aiRating = 2,
    },

    [ABILITY_MIRROR_ARMOR] =
    {
        .name = _("Spiegelrüstung"),
        .description = COMPOUND_STRING("Wirkt Reflekt v. Stat-Senk."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_GULP_MISSILE] =
    {
        .name = _("Würggeschoss"),
        .description = COMPOUND_STRING("Trifft's, spuckt Meerbeute"),
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
        .description = COMPOUND_STRING("Ignoriert Umleitung v. Foes"),
        .aiRating = 2,
    },

    [ABILITY_STEAM_ENGINE] =
    {
        .name = _("Dampfantrieb"),
        .description = COMPOUND_STRING("Feuer/Wasser b. Init."),
        .aiRating = 3,
    },

    [ABILITY_PUNK_ROCK] =
    {
        .name = _("Punk Rock"),
        .description = COMPOUND_STRING("T. Geräusche abw. u. res."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_SAND_SPIT] =
    {
        .name = _("Sandspeier"),
        .description = COMPOUND_STRING("Sandsturm b. Treffer"),
        .aiRating = 5,
    },

    [ABILITY_ICE_SCALES] =
    {
        .name = _("Eisflügelstaub"),
        .description = COMPOUND_STRING("Halbiert Spez.-Schaden"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_RIPEN] =
    {
        .name = _("Heranreifen"),
        .description = COMPOUND_STRING("Verdoppelt Beeren-Wirkung"),
        .aiRating = 4,
    },

    [ABILITY_ICE_FACE] =
    {
        .name = _("Tiefkühlkopf"),
        .description = COMPOUND_STRING("Hagel/Schnee freier Treffer"),
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
        .description = COMPOUND_STRING("Verstärkt Alli-Atk."),
        .aiRating = 2,
    },

    [ABILITY_MIMICRY] =
    {
        .name = _("Mimese"),
        .description = COMPOUND_STRING("Typwechsel b. Terrain"),
        .aiRating = 2,
    },

    [ABILITY_SCREEN_CLEANER] =
    {
        .name = _("Hemmungslos"),
        .description = COMPOUND_STRING("Entfernt Lichtschilde"),
        .aiRating = 3,
    },

    [ABILITY_STEELY_SPIRIT] =
    {
        .name = _("Stählerner Wille"),
        .description = COMPOUND_STRING("Stärkt Stahl-Atk. v. Team"),
        .aiRating = 2,
    },

    [ABILITY_PERISH_BODY] =
    {
        .name = _("Unheilskörper"),
        .description = COMPOUND_STRING("Gegner fällt n. 3 Runden"),
        .aiRating = -1,
    },

    [ABILITY_WANDERING_SPIRIT] =
    {
        .name = _("Rastlose Seele"),
        .description = COMPOUND_STRING("Tauscht Fähigk. b. Kontakt"),
        .aiRating = 2,
    },

    [ABILITY_GORILLA_TACTICS] =
    {
        .name = _("Affenfokus"),
        .description = COMPOUND_STRING("Erhöht Atk. und sperrt Atk."),
        .aiRating = 4,
    },

    [ABILITY_NEUTRALIZING_GAS] =
    {
        .name = _("Reaktionsgas"),
        .description = COMPOUND_STRING("Alle Fähigkeiten aufgeh."),
        .aiRating = 5,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_PASTEL_VEIL] =
    {
        .name = _("Pastellhülle"),
        .description = COMPOUND_STRING("Schützt Team v. Gift"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_HUNGER_SWITCH] =
    {
        .name = _("Heißhunger"),
        .description = COMPOUND_STRING("Wechselt jede Runde Form"),
        .aiRating = 2,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUICK_DRAW] =
    {
        .name = _("Schnellschuss"),
        .description = COMPOUND_STRING("Greift ab und zu zuerst an"),
        .aiRating = 4,
    },

    [ABILITY_UNSEEN_FIST] =
    {
        .name = _("Verborgene Faust"),
        .description = COMPOUND_STRING("Kontakt umgeht Schutz"),
        .aiRating = 6,
    },

    [ABILITY_CURIOUS_MEDICINE] =
    {
        .name = _("Kuriose Arznei"),
        .description = COMPOUND_STRING("Entfernt St.-Änd. v. Verb."),
        .aiRating = 3,
    },

    [ABILITY_TRANSISTOR] =
    {
        .name = _("Transistor"),
        .description = COMPOUND_STRING("Erhöht Elektro-Atk."),
        .aiRating = 6,
    },

    [ABILITY_DRAGONS_MAW] =
    {
        .name = _("Drachenkiefer"),
        .description = COMPOUND_STRING("Verstärkt Drachen-Atk."),
        .aiRating = 6,
    },

    [ABILITY_CHILLING_NEIGH] =
    {
        .name = _("Helles Wiehern"),
        .description = COMPOUND_STRING("KOs stärken Atk."),
        .aiRating = 7,
    },

    [ABILITY_GRIM_NEIGH] =
    {
        .name = _("Dunkles Wiehern"),
        .description = COMPOUND_STRING("KOs stärken Sp.-Atk"),
        .aiRating = 7,
    },

    [ABILITY_AS_ONE_ICE_RIDER] =
    {
        .name = _("Reitgespann"),
        .description = COMPOUND_STRING("Schüchtern + Kaltes Wiehern"),
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
        .description = COMPOUND_STRING("Angst m. u. Dämonenwiehern"),
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
        .description = COMPOUND_STRING("Breitet sich b. Kontakt aus"),
        .aiRating = 5,
    },

    [ABILITY_SEED_SOWER] =
    {
        .name = _("Streusaat"),
        .description = COMPOUND_STRING("Wirkt Terrain b. Treffer"),
        .aiRating = 5,
    },

    [ABILITY_THERMAL_EXCHANGE] =
    {
        .name = _("Thermowandel"),
        .description = COMPOUND_STRING("Feuer trifft Atk."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_ANGER_SHELL] =
    {
        .name = _("Wutpanzer"),
        .description = COMPOUND_STRING("Wird b. halber KP wütend"),
        .aiRating = 3,
    },

    [ABILITY_PURIFYING_SALT] =
    {
        .name = _("Läutersalz"),
        .description = COMPOUND_STRING("Schützt durch reine Salze"),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_WELL_BAKED_BODY] =
    {
        .name = _("WELL-BAKED BODY"),
        .description = COMPOUND_STRING("Durch Feuer gestärkt"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_WIND_RIDER] =
    {
        .name = _("WIND RIDER"),
        .description = COMPOUND_STRING("Erhöht Atk. b. Windtreffer"),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_GUARD_DOG] =
    {
        .name = _("GUARD DOG"),
        .description = COMPOUND_STRING("Nicht einschüchterbar"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ROCKY_PAYLOAD] =
    {
        .name = _("ROCKY PAYLOAD"),
        .description = COMPOUND_STRING("Verstärkt Gesteins-Atk."),
        .aiRating = 6,
    },

    [ABILITY_WIND_POWER] =
    {
        .name = _("WIND POWER"),
        .description = COMPOUND_STRING("Wird v. Wind aufgeladen"),
        .aiRating = 4,
    },

    [ABILITY_ZERO_TO_HERO] =
    {
        .name = _("ZERO TO HERO"),
        .description = COMPOUND_STRING("Formwechsel b. Auswechseln"),
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
        .name = _("COMMANDER"),
        .description = COMPOUND_STRING("Befehle v. Dondozo"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .cantBeSuppressed = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_ELECTROMORPHOSIS] =
    {
        .name = _("ELECTROMORPHOSIS"),
        .description = COMPOUND_STRING("Wird b. Treffer aufgeladen"),
        .aiRating = 5,
    },

    [ABILITY_PROTOSYNTHESIS] =
    {
        .name = _("PROTOSYNTHESIS"),
        .description = COMPOUND_STRING("Sonne stärkt beste Stat."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_QUARK_DRIVE] =
    {
        .name = _("QUARK DRIVE"),
        .description = COMPOUND_STRING("El. Feld stärkt best. St."),
        .aiRating = 7,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_GOOD_AS_GOLD] =
    {
        .name = _("GOOD AS GOLD"),
        .description = COMPOUND_STRING("Weicht Status-Atk. aus"),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_VESSEL_OF_RUIN] =
    {
        .name = _("VESSEL OF RUIN"),
        .description = COMPOUND_STRING("Senkt F-Proz.-Schaden"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_SWORD_OF_RUIN] =
    {
        .name = _("SWORD OF RUIN"),
        .description = COMPOUND_STRING("Senkt gegner Ver."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_TABLETS_OF_RUIN] =
    {
        .name = _("TABLETS OF RUIN"),
        .description = COMPOUND_STRING("Senkt Schaden d. Gegners"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_BEADS_OF_RUIN] =
    {
        .name = _("BEADS OF RUIN"),
        .description = COMPOUND_STRING("Senkt F-Werk. v. Gegnern"),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_ORICHALCUM_PULSE] =
    {
        .name = _("ORICHALCUM PULSE"),
        .description = COMPOUND_STRING("Beschwört Sonne im Kampf"),
        .aiRating = 8,
        .cantBeSwapped = TRUE,
        .cantBeCopied = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_HADRON_ENGINE] =
    {
        .name = _("HADRON ENGINE"),
        .description = COMPOUND_STRING("Feld wird zu Elektro"),
        .aiRating = 8,
        .cantBeSwapped = TRUE,
        .cantBeCopied = TRUE,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_OPPORTUNIST] =
    {
        .name = _("OPPORTUNIST"),
        .description = COMPOUND_STRING("Kopiert Stat-Änd. d. Gegn."),
        .aiRating = 5,
    },

    [ABILITY_CUD_CHEW] =
    {
        .name = _("CUD CHEW"),
        .description = COMPOUND_STRING("Isst Beere nochmal"),
        .aiRating = 4,
    },

    [ABILITY_SHARPNESS] =
    {
        .name = _("SHARPNESS"),
        .description = COMPOUND_STRING("Verstärkt Schnitt-Atk."),
        .aiRating = 7,
    },

    [ABILITY_SUPREME_OVERLORD] =
    {
        .name = _("SUPREME OVERLORD"),
        .description = COMPOUND_STRING("Erbt Stärke v. Gefallenen"),
        .aiRating = 6,
    },

    [ABILITY_COSTAR] =
    {
        .name = _("COSTAR"),
        .description = COMPOUND_STRING("Kopiert Stat-Änd. v. Verb."),
        .aiRating = 5,
    },

    [ABILITY_TOXIC_DEBRIS] =
    {
        .name = _("TOXIC DEBRIS"),
        .description = COMPOUND_STRING("Wirft Giftspikes b. Treffer"),
        .aiRating = 4,
    },

    [ABILITY_ARMOR_TAIL] =
    {
        .name = _("ARMOR TAIL"),
        .description = COMPOUND_STRING("Schützt v. Prio.-Atk."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_EARTH_EATER] =
    {
        .name = _("EARTH EATER"),
        .description = COMPOUND_STRING("Frisst Boden, heilt KP"),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_MYCELIUM_MIGHT] =
    {
        .name = _("MYCELIUM MIGHT"),
        .description = COMPOUND_STRING("Status-Atk trf. garantiert."),
        .aiRating = 2,
    },

    [ABILITY_HOSPITALITY] =
    {
        .name = _("HOSPITALITY"),
        .description = COMPOUND_STRING("Stellt Partner HP her."),
        .aiRating = 5,
    },

    [ABILITY_MINDS_EYE] =
    {
        .name = _("MIND'S EYE"),
        .description = COMPOUND_STRING("Scharfblick u. Trotzkopf"),
        .aiRating = 8,
        .breakable = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_TEAL_MASK] =
    {
        .name = _("EMBODY ASPECT"),
        .description = COMPOUND_STRING("Erhöht die Init."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK] =
    {
        .name = _("EMBODY ASPECT"),
        .description = COMPOUND_STRING("Erhöht Atk."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_WELLSPRING_MASK] =
    {
        .name = _("EMBODY ASPECT"),
        .description = COMPOUND_STRING("Erhöht Sp.-Ver."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK] =
    {
        .name = _("EMBODY ASPECT"),
        .description = COMPOUND_STRING("Erhöht die Ver."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .failsOnImposter = TRUE,
    },

    [ABILITY_TOXIC_CHAIN] =
    {
        .name = _("TOXIC CHAIN"),
        .description = COMPOUND_STRING("Atk. kann vergiften"),
        .aiRating = 8,
    },

    [ABILITY_SUPERSWEET_SYRUP] =
    {
        .name = _("SUPERSWEET SYRUP"),
        .description = COMPOUND_STRING("Senkt Flucht v. Gegner"),
        .aiRating = 5,
    },

    [ABILITY_TERA_SHIFT] =
    {
        .name = _("TERA SHIFT"),
        .description = COMPOUND_STRING("Terastalisiert b. Eintritt"),
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
        .name = _("TERA SHELL"),
        .description = COMPOUND_STRING("Resistiert alles b. voll KP"),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_TERAFORM_ZERO] =
    {
        .name = _("TERAFORM ZERO"),
        .description = COMPOUND_STRING("Null. Wetter u. Terrain."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_POISON_PUPPETEER] =
    {
        .name = _("POISON PUPPETEER"),
        .description = COMPOUND_STRING("Verwirrt gp. Gegner b. Gift"),
        .aiRating = 8,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },
};

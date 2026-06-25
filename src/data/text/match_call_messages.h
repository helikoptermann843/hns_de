#if IS_HNS
// HnS rematch trainer check page text — currently unused (check page disabled).
// Rematch slot → HnS trainer mapping kept here for reference if re-enabled.
// REMATCH_ROSE         = Joey (Youngster, Route 30)
// REMATCH_ANDRES       = Wade (Bug Catcher, Route 31)
// REMATCH_DUSTY        = Ralph (Fisherman, Route 32)
// REMATCH_LOLA         = Liz (Picnicker, Route 32)
// REMATCH_RICKY        = Anthony (Hiker, Route 33)
// REMATCH_LILA_AND_ROY = Todd (Camper, Route 34)
// REMATCH_CRISTIN      = Gina (Picnicker, Route 34)
// REMATCH_BROOKE       = Irwin (Juggler, Route 35)
// REMATCH_WILTON       = Arnie (Bug Catcher, Route 35)
// REMATCH_VALERIE      = Alan (School Kid, Route 36)
// REMATCH_CINDY        = Dana (Lass, Route 38)
// REMATCH_THALIA       = Chad (School Kid, Route 38)
// REMATCH_JESSICA      = Derek (Pokefan, Route 39)
// REMATCH_WINSTON      = Tully (Fisherman, Route 42)
// REMATCH_STEVE        = Brent (Pokemaniac, Route 43)
// REMATCH_TONY         = Tiffany (Picnicker, Route 43)
// REMATCH_NOB          = Vance (Bird Keeper, Route 44)
// REMATCH_KOJI         = Wilton (Fisherman, Route 44)
// REMATCH_FERNANDO     = Kenji (Black Belt, Route 45)
// REMATCH_DALTON       = Parry (Hiker, Route 45)
// REMATCH_BERNIE       = Erin (Picnicker, Route 46)
// REMATCH_ETHAN        = Jack (School Kid, National Park)
// REMATCH_JOHN_AND_JAY = Beverly (Parasol Lady, National Park)
// REMATCH_JEFFREY      = Huey (Sailor, Lighthouse)
// REMATCH_CAMERON      = Gaven (Cooltrainer, Route 26)
// REMATCH_JACKI        = Beth (Cooltrainer, Route 26)
// REMATCH_WALTER       = Jose (Bird Keeper, Route 27)
// REMATCH_KAREN        = Reena (Cooltrainer, Route 27)
// Crystal phone text reference: pokecrystal/data/phone/text/<name>_caller.asm
#else
const u8 gText_MatchCallAromaLady_Rose_Strategy[] = _("Emotionen beruhigen.");
const u8 gText_MatchCallAromaLady_Rose_Pokemon[] = _("Duftende PFLANZEN-PKMN.");
const u8 gText_MatchCallAromaLady_Rose_Intro1[] = _("Beruhigende Aromen reini-");
const u8 gText_MatchCallAromaLady_Rose_Intro2[] = _("gen Körper und Geist.");

const u8 gText_MatchCallRuinManiac_Andres_Strategy[] = _("Darin bin ich nicht gut!");
const u8 gText_MatchCallRuinManiac_Andres_Pokemon[] = _("Ruinenerforschungsteam");
const u8 gText_MatchCallRuinManiac_Andres_Intro1[] = _("Ich such unter Wasser");
const u8 gText_MatchCallRuinManiac_Andres_Intro2[] = _("nach Ruinen und Relikten.");

const u8 gText_MatchCallRuinManiac_Dusty_Strategy[] = _("Durch Stärke überzeugen!");
const u8 gText_MatchCallRuinManiac_Dusty_Pokemon[] = _("Felsige GESTEIN-PKMN.");
const u8 gText_MatchCallRuinManiac_Dusty_Intro1[] = _("Während des Studiums der");
const u8 gText_MatchCallRuinManiac_Dusty_Intro2[] = _("Antike sehe ich die Welt.");

const u8 gText_MatchCallTuber_Lola_Strategy[] = _("Ich strenge mich stets an!");
const u8 gText_MatchCallTuber_Lola_Pokemon[] = _("PKMN, die gut schwimmen.");
const u8 gText_MatchCallTuber_Lola_Intro1[] = _("Ich würde gerne ohne den");
const u8 gText_MatchCallTuber_Lola_Intro2[] = _("Reifen schwimmen können.");

const u8 gText_MatchCallTuber_Ricky_Strategy[] = _("Ich versuche einfach alles.");
const u8 gText_MatchCallTuber_Ricky_Pokemon[] = _("WASSER-PKMN sind Kumpel.");
const u8 gText_MatchCallTuber_Ricky_Intro1[] = _("Ich kann schwimmen! Ich");
const u8 gText_MatchCallTuber_Ricky_Intro2[] = _("mag halt den Schwimmreifen!");

const u8 gText_MatchCallSisAndBro_LilaAndRoy_Strategy[] = _("Wir teilen die Arbeit auf.");
const u8 gText_MatchCallSisAndBro_LilaAndRoy_Pokemon[] = _("Wir lieben nette PKMN.");
const u8 gText_MatchCallSisAndBro_LilaAndRoy_Intro1[] = _("Wir teilen die Liebe zu den");
const u8 gText_MatchCallSisAndBro_LilaAndRoy_Intro2[] = _("PKMN. Wir sind Geschwister!");

const u8 gText_MatchCallCooltrainer_Cristin_Strategy[] = _("Mächtige Finalattacken!");
const u8 gText_MatchCallCooltrainer_Cristin_Pokemon[] = _("Verschiedene Arten.");
const u8 gText_MatchCallCooltrainer_Cristin_Intro1[] = _("Ich werde der ultimative");
const u8 gText_MatchCallCooltrainer_Cristin_Intro2[] = _("TRAINER sein.");

const u8 gText_MatchCallCooltrainer_Brooke_Strategy[] = _("Schwächen erkennen.");
const u8 gText_MatchCallCooltrainer_Brooke_Pokemon[] = _("Gleichgewicht ist wichtig.");
const u8 gText_MatchCallCooltrainer_Brooke_Intro1[] = _("Mein Ziel ist es, der");
const u8 gText_MatchCallCooltrainer_Brooke_Intro2[] = _("PKMN-CHAMP zu werden.");

const u8 gText_MatchCallCooltrainer_Wilton_Strategy[] = _("Den Gegner umwerfen.");
const u8 gText_MatchCallCooltrainer_Wilton_Pokemon[] = _("Der PKMN-Typ ist unwichtig.");
const u8 gText_MatchCallCooltrainer_Wilton_Intro1[] = _("Ich bin der beste Schüler");
const u8 gText_MatchCallCooltrainer_Wilton_Intro2[] = _("der PKMN TRAINERSCHULE.");

const u8 gText_MatchCallHexManiac_Valerie_Strategy[] = _("Langsames Niederringen.");
const u8 gText_MatchCallHexManiac_Valerie_Pokemon[] = _("Nachts Furcht einflößend.");
const u8 gText_MatchCallHexManiac_Valerie_Intro1[] = _("Ich sehe Dinge, die den");
const u8 gText_MatchCallHexManiac_Valerie_Intro2[] = _("anderen verborgen sind...");

const u8 gText_MatchCallLady_Cindy_Strategy[] = _("Alles, was zum Sieg führt.");
const u8 gText_MatchCallLady_Cindy_Pokemon[] = _("Hinreißende Wesen!");
const u8 gText_MatchCallLady_Cindy_Intro1[] = _("Ich habe zu Hause einen");
const u8 gText_MatchCallLady_Cindy_Intro2[] = _("Pool für meine PKMN.");

const u8 gText_MatchCallBeauty_Thalia_Strategy[] = _("Du bist in meinem Bann!");
const u8 gText_MatchCallBeauty_Thalia_Pokemon[] = _("Reifer WASSER-Typ.");
const u8 gText_MatchCallBeauty_Thalia_Intro1[] = _("Mein Traum ist eine");
const u8 gText_MatchCallBeauty_Thalia_Intro2[] = _("Kreuzfahrt über die Meere.");

const u8 gText_MatchCallBeauty_Jessica_Strategy[] = _("Ich bringe dich vom Weg ab.");
const u8 gText_MatchCallBeauty_Jessica_Pokemon[] = _("Niedlich, natürlich!");
const u8 gText_MatchCallBeauty_Jessica_Intro1[] = _("Ich liebe die SAFARI-ZONE,");
const u8 gText_MatchCallBeauty_Jessica_Intro2[] = _("dort werde ich bleiben.");

const u8 gText_MatchCallRichBoy_Winston_Strategy[] = _("Wer braucht Strategie?!?");
const u8 gText_MatchCallRichBoy_Winston_Pokemon[] = _("Alle, die teuer sind.");
const u8 gText_MatchCallRichBoy_Winston_Intro1[] = _("Ich bin reich. Und daher");
const u8 gText_MatchCallRichBoy_Winston_Intro2[] = _("besitze ich ein PKMN-Bett.");

const u8 gText_MatchCallPokeManiac_Steve_Strategy[] = _("Durch Stärke gewinnen!");
const u8 gText_MatchCallPokeManiac_Steve_Pokemon[] = _("Habe sie nachts gefangen...");
const u8 gText_MatchCallPokeManiac_Steve_Intro1[] = _("Große, kräftige und zähe");
const u8 gText_MatchCallPokeManiac_Steve_Intro2[] = _("POKéMON sind die besten...");

const u8 gText_MatchCallSwimmer_Tony_Strategy[] = _("Volle Pulle zuschlagen!");
const u8 gText_MatchCallSwimmer_Tony_Pokemon[] = _("Funky WASSER-PKMN!");
const u8 gText_MatchCallSwimmer_Tony_Intro1[] = _("Wenn ich nicht schwimme,");
const u8 gText_MatchCallSwimmer_Tony_Intro2[] = _("stemme ich Gewichte!");

const u8 gText_MatchCallBlackBelt_Nob_Strategy[] = _("Immer gewinnen!");
const u8 gText_MatchCallBlackBelt_Nob_Pokemon[] = _("KAMPF-PKMN!");
const u8 gText_MatchCallBlackBelt_Nob_Intro1[] = _("Ohne zu prahlen: Ich kann");
const u8 gText_MatchCallBlackBelt_Nob_Intro2[] = _("10 Ziegel zerschmettern!");

const u8 gText_MatchCallBlackBelt_Koji_Strategy[] = _("Erlebe Karate!");
const u8 gText_MatchCallBlackBelt_Koji_Pokemon[] = _("Meine Sparringspartner.");
const u8 gText_MatchCallBlackBelt_Koji_Intro1[] = _("Lass es uns mit unseren");
const u8 gText_MatchCallBlackBelt_Koji_Intro2[] = _("Fäusten ausdiskutieren.");

const u8 gText_MatchCallGuitarist_Fernando_Strategy[] = _("E-Gitarrenmusik ist toll!");
const u8 gText_MatchCallGuitarist_Fernando_Pokemon[] = _("Elektro-Soundkombo!");
const u8 gText_MatchCallGuitarist_Fernando_Intro1[] = _("Meine Songs schockieren");
const u8 gText_MatchCallGuitarist_Fernando_Intro2[] = _("und betäuben dich.");

const u8 gText_MatchCallGuitarist_Dalton_Strategy[] = _("Ich elektrisiere dich!");
const u8 gText_MatchCallGuitarist_Dalton_Pokemon[] = _("Es sind ELEKTRO-PKMN.");
const u8 gText_MatchCallGuitarist_Dalton_Intro1[] = _("Ich bringe die Menschen mit");
const u8 gText_MatchCallGuitarist_Dalton_Intro2[] = _("meinen Liedern zum Weinen.");

const u8 gText_MatchCallKindler_Bernie_Strategy[] = _("Alles niederbrennen!");
const u8 gText_MatchCallKindler_Bernie_Pokemon[] = _("Feuergefährliche POKéMON!");
const u8 gText_MatchCallKindler_Bernie_Intro1[] = _("Neben einem Lagerfeuer");
const u8 gText_MatchCallKindler_Bernie_Intro2[] = _("sollte stets Wasser stehen!");

const u8 gText_MatchCallCamper_Ethan_Strategy[] = _("Man muss hartnäckig sein.");
const u8 gText_MatchCallCamper_Ethan_Pokemon[] = _("Jede Art von POKéMON.");
const u8 gText_MatchCallCamper_Ethan_Intro1[] = _("PKMN, aus der Wildnis,");
const u8 gText_MatchCallCamper_Ethan_Intro2[] = _("werden stark!");

const u8 gText_MatchCallOldCouple_JohnAndJay_Strategy[] = _("Unsere Liebe schlägt alles.");
const u8 gText_MatchCallOldCouple_JohnAndJay_Pokemon[] = _("Wir haben sie seit Jahren.");
const u8 gText_MatchCallOldCouple_JohnAndJay_Intro1[] = _("In 50 Jahren Ehe waren");
const u8 gText_MatchCallOldCouple_JohnAndJay_Intro2[] = _("wir den PKMN immer treu.");

const u8 gText_MatchCallBugManiac_Jeffrey_Strategy[] = _("Wellenförmiger Angriff!");
const u8 gText_MatchCallBugManiac_Jeffrey_Pokemon[] = _("KÄFER-PKMN sind cool!");
const u8 gText_MatchCallBugManiac_Jeffrey_Intro1[] = _("Ich gehe jeden Tag in den");
const u8 gText_MatchCallBugManiac_Jeffrey_Intro2[] = _("Wald, KÄFER-PKMN fangen.");

const u8 gText_MatchCallPsychic_Cameron_Strategy[] = _("Schwächen und verwirren!");
const u8 gText_MatchCallPsychic_Cameron_Pokemon[] = _("Solche mit irren Kräften.");
const u8 gText_MatchCallPsychic_Cameron_Intro1[] = _("Ich kann deine Gedanken");
const u8 gText_MatchCallPsychic_Cameron_Intro2[] = _("klar und deutlich lesen.");

const u8 gText_MatchCallPsychic_Jacki_Strategy[] = _("Mit vollem Einsatz kämpfen.");
const u8 gText_MatchCallPsychic_Jacki_Pokemon[] = _("Geheimnisvolle POKéMON.");
const u8 gText_MatchCallPsychic_Jacki_Intro1[] = _("Wenn ich spreche,");
const u8 gText_MatchCallPsychic_Jacki_Intro2[] = _("setze ich Telepathie ein.");

const u8 gText_MatchCallGentleman_Walter_Strategy[] = _("Ruhig, gesammelt vorgehen.");
const u8 gText_MatchCallGentleman_Walter_Pokemon[] = _("Ganz verschiedene PKMN.");
const u8 gText_MatchCallGentleman_Walter_Intro1[] = _("Wir genießen die tägliche");
const u8 gText_MatchCallGentleman_Walter_Intro2[] = _("Tasse Tee.");

const u8 gText_MatchCallSchoolKid_Karen_Strategy[] = _("Ich kämpfe mit Köpfchen.");
const u8 gText_MatchCallSchoolKid_Karen_Pokemon[] = _("Ich liebe jedes PKMN.");
const u8 gText_MatchCallSchoolKid_Karen_Intro1[] = _("Schreibe ich gute Noten,");
const u8 gText_MatchCallSchoolKid_Karen_Intro2[] = _("gibt Papi mir Geld.");

const u8 gText_MatchCallSchoolKid_Jerry_Strategy[] = _("Mein Wissen ist Macht!");
const u8 gText_MatchCallSchoolKid_Jerry_Pokemon[] = _("Jedes clevere PKMN.");
const u8 gText_MatchCallSchoolKid_Jerry_Intro1[] = _("Ich will später ein großer");
const u8 gText_MatchCallSchoolKid_Jerry_Intro2[] = _("PKMN-Forscher werden.");

const u8 gText_MatchCallSrAndJr_AnnaAndMeg_Strategy[] = _("Wir sprechen uns ab.");
const u8 gText_MatchCallSrAndJr_AnnaAndMeg_Pokemon[] = _("PKMN, die wir beide mögen.");
const u8 gText_MatchCallSrAndJr_AnnaAndMeg_Intro1[] = _("Wir sind Senior und Junior");
const u8 gText_MatchCallSrAndJr_AnnaAndMeg_Intro2[] = _("im Studium der PKMN.");

const u8 gText_MatchCallPokefan_Isabel_Strategy[] = _("Los geht’s, meine Lieben!");
const u8 gText_MatchCallPokefan_Isabel_Pokemon[] = _("Ich mag sie alle!");
const u8 gText_MatchCallPokefan_Isabel_Intro1[] = _("Auch beim Einkaufen lasse");
const u8 gText_MatchCallPokefan_Isabel_Intro2[] = _("ich keinen Kampf aus!");

const u8 gText_MatchCallPokefan_Miguel_Strategy[] = _("Ich kämpfe mit dem Herzen.");
const u8 gText_MatchCallPokefan_Miguel_Pokemon[] = _("PKMN, die Liebe erfahren!");
const u8 gText_MatchCallPokefan_Miguel_Intro1[] = _("PKMN und Menschen müssen");
const u8 gText_MatchCallPokefan_Miguel_Intro2[] = _("Vertrauen aufbauen!");

const u8 gText_MatchCallExpert_Timothy_Strategy[] = _("Ich durchschaue Gegner!");
const u8 gText_MatchCallExpert_Timothy_Pokemon[] = _("Die Basis des Kampfes.");
const u8 gText_MatchCallExpert_Timothy_Intro1[] = _("Ich bin noch nicht bereit,");
const u8 gText_MatchCallExpert_Timothy_Intro2[] = _("Jüngeren Platz zu machen.");

const u8 gText_MatchCallExpert_Shelby_Strategy[] = _("Angriff als Verteidigung!");
const u8 gText_MatchCallExpert_Shelby_Pokemon[] = _("KAMPF-PKMN!");
const u8 gText_MatchCallExpert_Shelby_Intro1[] = _("Ich bin alt und habe daher");
const u8 gText_MatchCallExpert_Shelby_Intro2[] = _("meinen eigenen Stil.");

const u8 gText_MatchCallYoungster_Calvin_Strategy[] = _("Ich tue, was ich kann.");
const u8 gText_MatchCallYoungster_Calvin_Pokemon[] = _("Verschiedene Arten.");
const u8 gText_MatchCallYoungster_Calvin_Intro1[] = _("Ich will irgendwann einen");
const u8 gText_MatchCallYoungster_Calvin_Intro2[] = _("ARENALEITER besiegen!");

const u8 gText_MatchCallFisherman_Elliot_Strategy[] = _("Geduld und Spucke.");
const u8 gText_MatchCallFisherman_Elliot_Pokemon[] = _("WASSER-PKMN!");
const u8 gText_MatchCallFisherman_Elliot_Intro1[] = _("Niemand vor mir hat je");
const u8 gText_MatchCallFisherman_Elliot_Intro2[] = _("etwas Größeres gefangen!");

const u8 gText_MatchCallTriathlete_Isaiah_Strategy[] = _("Die Umgebung erforschen.");
const u8 gText_MatchCallTriathlete_Isaiah_Pokemon[] = _("WASSER-PKMN!");
const u8 gText_MatchCallTriathlete_Isaiah_Intro1[] = _("Ich lasse mich nicht von");
const u8 gText_MatchCallTriathlete_Isaiah_Intro2[] = _("Strandhäschen besiegen.");

const u8 gText_MatchCallTriathlete_Maria_Strategy[] = _("Geschwindigkeit ist alles!");
const u8 gText_MatchCallTriathlete_Maria_Pokemon[] = _("Ich liebe schnelle PKMN.");
const u8 gText_MatchCallTriathlete_Maria_Intro1[] = _("Beim Marathon forderst du");
const u8 gText_MatchCallTriathlete_Maria_Intro2[] = _("dich selbst heraus.");

const u8 gText_MatchCallTriathlete_Abigail_Strategy[] = _("Verteidigung ist die Basis.");
const u8 gText_MatchCallTriathlete_Abigail_Pokemon[] = _("Kraftvolle PKMN!");
const u8 gText_MatchCallTriathlete_Abigail_Intro1[] = _("Dies war als Diät gedacht,");
const u8 gText_MatchCallTriathlete_Abigail_Intro2[] = _("jetzt ist es mein Hobby.");

const u8 gText_MatchCallTriathlete_Dylan_Strategy[] = _("Schneller als andere sein.");
const u8 gText_MatchCallTriathlete_Dylan_Pokemon[] = _("Ein rasend schnelles PKMN!");
const u8 gText_MatchCallTriathlete_Dylan_Intro1[] = _("Rennt man rasend schnell,");
const u8 gText_MatchCallTriathlete_Dylan_Intro2[] = _("wird man eins mit dem Wind.");

const u8 gText_MatchCallTriathlete_Katelyn_Strategy[] = _("Stets Offensive zeigen!");
const u8 gText_MatchCallTriathlete_Katelyn_Pokemon[] = _("Nur WASSER-PKMN...");
const u8 gText_MatchCallTriathlete_Katelyn_Intro1[] = _("Ich muss jeden Tag");
const u8 gText_MatchCallTriathlete_Katelyn_Intro2[] = _("10 Kilometer schwimmen.");

const u8 gText_MatchCallTriathlete_Benjamin_Strategy[] = _("Weiter, immer weiter!");
const u8 gText_MatchCallTriathlete_Benjamin_Pokemon[] = _("Die Stärke von STAHL...");
const u8 gText_MatchCallTriathlete_Benjamin_Intro1[] = _("Wenn du schwitzt, musst du");
const u8 gText_MatchCallTriathlete_Benjamin_Intro2[] = _("regelmäßig etwas trinken!");

const u8 gText_MatchCallTriathlete_Pablo_Strategy[] = _("Erlebe WASSERkraft!");
const u8 gText_MatchCallTriathlete_Pablo_Pokemon[] = _("Starke WASSER-PKMN.");
const u8 gText_MatchCallTriathlete_Pablo_Intro1[] = _("PKMN zu trainieren ist gut,");
const u8 gText_MatchCallTriathlete_Pablo_Intro2[] = _("sich selbst aber auch.");

const u8 gText_MatchCallDragonTamer_Nicolas_Strategy[] = _("Die Stärke der PKMN nutzen.");
const u8 gText_MatchCallDragonTamer_Nicolas_Pokemon[] = _("Sieh die Macht der DRACHEN!");
const u8 gText_MatchCallDragonTamer_Nicolas_Intro1[] = _("Eines Tages werde ich zur");
const u8 gText_MatchCallDragonTamer_Nicolas_Intro2[] = _("Legende!!!");

const u8 gText_MatchCallBirdKeeper_Robert_Strategy[] = _("Ich zeige dir die Technik!");
const u8 gText_MatchCallBirdKeeper_Robert_Pokemon[] = _("Elegant kreisende VÖGEL.");
const u8 gText_MatchCallBirdKeeper_Robert_Intro1[] = _("Meine VOGEL-PKMN bringen");
const u8 gText_MatchCallBirdKeeper_Robert_Intro2[] = _("dem Mädchen meine Liebe!");

const u8 gText_MatchCallNinjaBoy_Lao_Strategy[] = _("Du wirst Gift schmecken!");
const u8 gText_MatchCallNinjaBoy_Lao_Pokemon[] = _("Giftige PKMN.");
const u8 gText_MatchCallNinjaBoy_Lao_Intro1[] = _("Ich trainiere hart, um ein");
const u8 gText_MatchCallNinjaBoy_Lao_Intro2[] = _("Ninja zu werden.");

const u8 gText_MatchCallBattleGirl_Cyndy_Strategy[] = _("Der Erstschlag siegt!");
const u8 gText_MatchCallBattleGirl_Cyndy_Pokemon[] = _("Schnelle KAMPF-PKMN.");
const u8 gText_MatchCallBattleGirl_Cyndy_Intro1[] = _("Wenn mein PKMN verliert,");
const u8 gText_MatchCallBattleGirl_Cyndy_Intro2[] = _("kämpfe ich doch weiter.");

const u8 gText_MatchCallParasolLady_Madeline_Strategy[] = _("Los, los, meine PKMN!");
const u8 gText_MatchCallParasolLady_Madeline_Pokemon[] = _("Ich mag alle PKMN.");
const u8 gText_MatchCallParasolLady_Madeline_Intro1[] = _("UV-Strahlen sind die Feinde");
const u8 gText_MatchCallParasolLady_Madeline_Intro2[] = _("der Haut. Creme dich ein!");

const u8 gText_MatchCallSwimmer_Jenny_Strategy[] = _("Keine Gnade!");
const u8 gText_MatchCallSwimmer_Jenny_Pokemon[] = _("Niedliche WASSER-PKMN.");
const u8 gText_MatchCallSwimmer_Jenny_Intro1[] = _("Ich habe zu viele Fans, ich");
const u8 gText_MatchCallSwimmer_Jenny_Intro2[] = _("war nämlich im Fernsehen.");

const u8 gText_MatchCallPicnicker_Diana_Strategy[] = _("Ich probiere dies und das.");
const u8 gText_MatchCallPicnicker_Diana_Pokemon[] = _("Ich liebe alle PKMN.");
const u8 gText_MatchCallPicnicker_Diana_Intro1[] = _("Was liegt hinter diesem");
const u8 gText_MatchCallPicnicker_Diana_Intro2[] = _("hohen Berg dort?");

const u8 gText_MatchCallTwins_AmyAndLiv_Strategy[] = _("Wir kämpfen zusammen!");
const u8 gText_MatchCallTwins_AmyAndLiv_Pokemon[] = _("Wir trainieren zusammen!");
const u8 gText_MatchCallTwins_AmyAndLiv_Intro1[] = _("Wir lieben die gleichen PKMN");
const u8 gText_MatchCallTwins_AmyAndLiv_Intro2[] = _("und verschiedene Desserts.");

const u8 gText_MatchCallSailor_Ernest_Strategy[] = _("Ich setze Stärke ein.");
const u8 gText_MatchCallSailor_Ernest_Pokemon[] = _("WASSER- und KAMPF-PKMN.");
const u8 gText_MatchCallSailor_Ernest_Intro1[] = _("Matrosen sind raue Typen!");
const u8 gText_MatchCallSailor_Ernest_Intro2[] = _("Irgendwelche Einwände?");

const u8 gText_MatchCallSailor_Cory_Strategy[] = _("Jederzeit kampfbereit!");
const u8 gText_MatchCallSailor_Cory_Pokemon[] = _("Ich liebe WASSER-PKMN!");
const u8 gText_MatchCallSailor_Cory_Intro1[] = _("Um laut zu schreien,");
const u8 gText_MatchCallSailor_Cory_Intro2[] = _("musst du tief einatmen.");

const u8 gText_MatchCallCollector_Edwin_Strategy[] = _("PKMN vor Schaden bewahren.");
const u8 gText_MatchCallCollector_Edwin_Pokemon[] = _("Ich liebe seltene PKMN.");
const u8 gText_MatchCallCollector_Edwin_Intro1[] = _("Ich möchte seltene PKMN");
const u8 gText_MatchCallCollector_Edwin_Intro2[] = _("aus aller Welt sammeln.");

const u8 gText_MatchCallPkmnBreeder_Lydia_Strategy[] = _("Meine Stärke...");
const u8 gText_MatchCallPkmnBreeder_Lydia_Pokemon[] = _("PKMN sind meine Kinder.");
const u8 gText_MatchCallPkmnBreeder_Lydia_Intro1[] = _("Man benötigt Wissen und");
const u8 gText_MatchCallPkmnBreeder_Lydia_Intro2[] = _("Liebe im Umgang mit PKMN.");

const u8 gText_MatchCallPkmnBreeder_Isaac_Strategy[] = _("Angriff aus vollen Rohren!");
const u8 gText_MatchCallPkmnBreeder_Isaac_Pokemon[] = _("Jedes PKMN kommt in Frage.");
const u8 gText_MatchCallPkmnBreeder_Isaac_Intro1[] = _("Ich gebe ihnen {POKEBLOCK}, um");
const u8 gText_MatchCallPkmnBreeder_Isaac_Intro2[] = _("in WETTBEWERBen zu siegen.");

const u8 gText_MatchCallPkmnBreeder_Gabrielle_Strategy[] = _("Ich trainiere PKMN toll!");
const u8 gText_MatchCallPkmnBreeder_Gabrielle_Pokemon[] = _("Trainierbare PKMN.");
const u8 gText_MatchCallPkmnBreeder_Gabrielle_Intro1[] = _("Behandle jedes PKMN");
const u8 gText_MatchCallPkmnBreeder_Gabrielle_Intro2[] = _("mit Respekt.");

const u8 gText_MatchCallPkmnRanger_Catherine_Strategy[] = _("Ich glaube an meine PKMN.");
const u8 gText_MatchCallPkmnRanger_Catherine_Pokemon[] = _("Ich liebe starke PKMN.");
const u8 gText_MatchCallPkmnRanger_Catherine_Intro1[] = _("Ich bilde meine PKMN zu");
const u8 gText_MatchCallPkmnRanger_Catherine_Intro2[] = _("einem Rettungsteam aus.");

const u8 gText_MatchCallPkmnRanger_Jackson_Strategy[] = _("Wellenförmiger Angriff!");
const u8 gText_MatchCallPkmnRanger_Jackson_Pokemon[] = _("Verschiedene Arten.");
const u8 gText_MatchCallPkmnRanger_Jackson_Intro1[] = _("Umweltverschmutzern darf");
const u8 gText_MatchCallPkmnRanger_Jackson_Intro2[] = _("man niemals vergeben!");

const u8 gText_MatchCallLass_Haley_Strategy[] = _("Ich zeige meinen Mut.");
const u8 gText_MatchCallLass_Haley_Pokemon[] = _("Ich liebe niedliche PKMN!");
const u8 gText_MatchCallLass_Haley_Intro1[] = _("Nach einem Kampf gehe ich");
const u8 gText_MatchCallLass_Haley_Intro2[] = _("mit meinen PKMN schwimmen.");

const u8 gText_MatchCallBugCatcher_James_Strategy[] = _("Blitzschnelle Attacken.");
const u8 gText_MatchCallBugCatcher_James_Pokemon[] = _("KÄFER-PKMN sind das Beste!");
const u8 gText_MatchCallBugCatcher_James_Intro1[] = _("Um KÄFER-PKMN zu fangen,");
const u8 gText_MatchCallBugCatcher_James_Intro2[] = _("musst du früh aufstehen.");

const u8 gText_MatchCallHiker_Trent_Strategy[] = _("Ich kämpfe mit Stärke.");
const u8 gText_MatchCallHiker_Trent_Pokemon[] = _("PKMN mit hartem Körper.");
const u8 gText_MatchCallHiker_Trent_Intro1[] = _("Ich habe diese Wanderung");
const u8 gText_MatchCallHiker_Trent_Intro2[] = _("einen Monat vorbereitet.");

const u8 gText_MatchCallHiker_Sawyer_Strategy[] = _("Ich mag es heiß!");
const u8 gText_MatchCallHiker_Sawyer_Pokemon[] = _("Heiße POKéMON!");
const u8 gText_MatchCallHiker_Sawyer_Intro1[] = _("Ich liebe das Wandern,");
const u8 gText_MatchCallHiker_Sawyer_Intro2[] = _("wie ich PKMN liebe.");

const u8 gText_MatchCallYoungCouple_LoisAndHal_Strategy[] = _("Liebevolle Strategie!");
const u8 gText_MatchCallYoungCouple_LoisAndHal_Pokemon[] = _("Liebevolle PKMN!");
const u8 gText_MatchCallYoungCouple_LoisAndHal_Intro1[] = _("Wir sind liebevoll!");
const u8 gText_MatchCallYoungCouple_LoisAndHal_Intro2[] = _("Immer liebevoll!");

const u8 gText_MatchCallPkmnTrainer_Wally_Strategy[] = _("Wir lassen alles raus.");
const u8 gText_MatchCallPkmnTrainer_Wally_Pokemon[] = _("Das 1. PKMN, das ich fing.");
const u8 gText_MatchCallPkmnTrainer_Wally_Intro1[] = _("Die PKMN und ich sind");
const u8 gText_MatchCallPkmnTrainer_Wally_Intro2[] = _("zusammengewachsen.");

const u8 gText_MatchCallRockinWhiz_Roxanne_Strategy[] = _("Steinharte Attacken.");
const u8 gText_MatchCallRockinWhiz_Roxanne_Pokemon[] = _("Ich liebe steinharte PKMN!");
const u8 gText_MatchCallRockinWhiz_Roxanne_Intro1[] = _("Als LEITERIN einer ARENA");
const u8 gText_MatchCallRockinWhiz_Roxanne_Intro2[] = _("habe ich Verantwortung.");

const u8 gText_MatchCallTheBigHit_Brawly_Strategy[] = _("Direkte physische Attacke.");
const u8 gText_MatchCallTheBigHit_Brawly_Pokemon[] = _("Ich baue auf KAMPF-PKMN.");
const u8 gText_MatchCallTheBigHit_Brawly_Intro1[] = _("Die Welt erwartet mich als");
const u8 gText_MatchCallTheBigHit_Brawly_Intro2[] = _("neuen, starken Kämpfer.");

const u8 gText_MatchCallSwellShock_Wattson_Strategy[] = _("Elektrisieren... Britzel...");
const u8 gText_MatchCallSwellShock_Wattson_Pokemon[] = _("Elektrizität ist alles.");
const u8 gText_MatchCallSwellShock_Wattson_Intro1[] = _("Man muss sich jedem Kampf");
const u8 gText_MatchCallSwellShock_Wattson_Intro2[] = _("stellen! Auch ich muss das!");

const u8 gText_MatchCallPassionBurn_Flannery_Strategy[] = _("Aggressiv kämpfen.");
const u8 gText_MatchCallPassionBurn_Flannery_Pokemon[] = _("Brennen vor Leidenschaft!");
const u8 gText_MatchCallPassionBurn_Flannery_Intro1[] = _("Spül die tägliche Müdigkeit");
const u8 gText_MatchCallPassionBurn_Flannery_Intro2[] = _("in den Heißen Quellen ab.");

const u8 gText_MatchCallReliableOne_Dad_Strategy[] = _("Mein Stil ist flexibel.");
const u8 gText_MatchCallReliableOne_Dad_Pokemon[] = _("Gleichmäßig gewachsen.");
const u8 gText_MatchCallReliableOne_Dad_Intro1[] = _("Ich laufe jeden Tag 30 Min.");
const u8 gText_MatchCallReliableOne_Dad_Intro2[] = _("von zu Hause aus hierher.");

const u8 gText_MatchCallSkyTamer_Winona_Strategy[] = _("Ich nutze die Initiative.");
const u8 gText_MatchCallSkyTamer_Winona_Pokemon[] = _("Anmutige Himmelstänzer.");
const u8 gText_MatchCallSkyTamer_Winona_Intro1[] = _("Es wäre toll, im Einklang");
const u8 gText_MatchCallSkyTamer_Winona_Intro2[] = _("mit der Natur zu leben.");

const u8 gText_MatchCallMysticDuo_TateAndLiza_Strategy[] = _("Wir kämpfen zusammen.");
const u8 gText_MatchCallMysticDuo_TateAndLiza_Pokemon[] = _("Immer freundliche PKMN.");
const u8 gText_MatchCallMysticDuo_TateAndLiza_Intro1[] = _("Papa kann uns beide");
const u8 gText_MatchCallMysticDuo_TateAndLiza_Intro2[] = _("kaum auseinander halten.");

const u8 gText_MatchCallDandyCharm_Juan_Strategy[] = _("Ich setze auf Wasserkraft.");
const u8 gText_MatchCallDandyCharm_Juan_Pokemon[] = _("Elegante POKéMON!");
const u8 gText_MatchCallDandyCharm_Juan_Intro1[] = _("Die Schmeichelei schöner");
const u8 gText_MatchCallDandyCharm_Juan_Intro2[] = _("Damen spornt mich an!");

const u8 gText_MatchCallEliteFour_Sidney_Strategy[] = _("Offensive vor Defensive.");
const u8 gText_MatchCallEliteFour_Sidney_Pokemon[] = _("Das Schöne des UNLICHTS.");
const u8 gText_MatchCallEliteFour_Sidney_Intro1[] = _("Nein, ich bin kein Freak!");
const u8 gText_MatchCallEliteFour_Sidney_Intro2[] = _("Ich bin einer der TOP VIER!");

const u8 gText_MatchCallEliteFour_Phoebe_Strategy[] = _("Verwirrend verwirren.");
const u8 gText_MatchCallEliteFour_Phoebe_Pokemon[] = _("Keine besondere Vorliebe.");
const u8 gText_MatchCallEliteFour_Phoebe_Intro1[] = _("Wie es wohl meiner Oma am");
const u8 gText_MatchCallEliteFour_Phoebe_Intro2[] = _("PYROBERG geht?");

const u8 gText_MatchCallEliteFour_Glacia_Strategy[] = _("Ich setze Items ein.");
const u8 gText_MatchCallEliteFour_Glacia_Pokemon[] = _("Flammendes Inferno in Eis.");
const u8 gText_MatchCallEliteFour_Glacia_Intro1[] = _("Der EIS-Typ entwickelt");
const u8 gText_MatchCallEliteFour_Glacia_Intro2[] = _("sich gut an warmen Orten.");

const u8 gText_MatchCallEliteFour_Drake_Strategy[] = _("Starke Fähigkeiten nutzen.");
const u8 gText_MatchCallEliteFour_Drake_Pokemon[] = _("Die rohe Kraft der DRACHEN.");
const u8 gText_MatchCallEliteFour_Drake_Intro1[] = _("Ich widme mich den PKMN,");
const u8 gText_MatchCallEliteFour_Drake_Intro2[] = _("die mich gerettet haben.");

const u8 gText_MatchCallChampion_Wallace_Strategy[] = _("Würde und Respekt.");
const u8 gText_MatchCallChampion_Wallace_Pokemon[] = _("Ich liebe anmutige PKMN.");
const u8 gText_MatchCallChampion_Wallace_Intro1[] = _("Ich stehe für Schönheit als");
const u8 gText_MatchCallChampion_Wallace_Intro2[] = _("auch für Intelligenz!");
#endif
#if IS_HNS
// Check page disabled for HnS trainers — table left empty.
// To re-enable: add MCFLAVOR entries here and set HasCheckPage_Trainer to TRUE.
const u8 *const gMatchCallFlavorTexts[REMATCH_TABLE_ENTRIES][CHECK_PAGE_ENTRY_COUNT] = {0};
#else
const u8 *const gMatchCallFlavorTexts[REMATCH_TABLE_ENTRIES][CHECK_PAGE_ENTRY_COUNT] =
{
    [REMATCH_ROSE] = MCFLAVOR(AromaLady_Rose),
    [REMATCH_ANDRES] = MCFLAVOR(RuinManiac_Andres),
    [REMATCH_DUSTY] = MCFLAVOR(RuinManiac_Dusty),
    [REMATCH_LOLA] = MCFLAVOR(Tuber_Lola),
    [REMATCH_RICKY] = MCFLAVOR(Tuber_Ricky),
    [REMATCH_LILA_AND_ROY] = MCFLAVOR(SisAndBro_LilaAndRoy),
    [REMATCH_CRISTIN] = MCFLAVOR(Cooltrainer_Cristin),
    [REMATCH_BROOKE] = MCFLAVOR(Cooltrainer_Brooke),
    [REMATCH_WILTON] = MCFLAVOR(Cooltrainer_Wilton),
    [REMATCH_VALERIE] = MCFLAVOR(HexManiac_Valerie),
    [REMATCH_CINDY] = MCFLAVOR(Lady_Cindy),
    [REMATCH_THALIA] = MCFLAVOR(Beauty_Thalia),
    [REMATCH_JESSICA] = MCFLAVOR(Beauty_Jessica),
    [REMATCH_WINSTON] = MCFLAVOR(RichBoy_Winston),
    [REMATCH_STEVE] = MCFLAVOR(PokeManiac_Steve),
    [REMATCH_TONY] = MCFLAVOR(Swimmer_Tony),
    [REMATCH_NOB] = MCFLAVOR(BlackBelt_Nob),
    [REMATCH_KOJI] = MCFLAVOR(BlackBelt_Koji),
    [REMATCH_FERNANDO] = MCFLAVOR(Guitarist_Fernando),
    [REMATCH_DALTON] = MCFLAVOR(Guitarist_Dalton),
    [REMATCH_BERNIE] = MCFLAVOR(Kindler_Bernie),
    [REMATCH_ETHAN] = MCFLAVOR(Camper_Ethan),
    [REMATCH_JOHN_AND_JAY] = MCFLAVOR(OldCouple_JohnAndJay),
    [REMATCH_JEFFREY] = MCFLAVOR(BugManiac_Jeffrey),
    [REMATCH_CAMERON] = MCFLAVOR(Psychic_Cameron),
    [REMATCH_JACKI] = MCFLAVOR(Psychic_Jacki),
    [REMATCH_WALTER] = MCFLAVOR(Gentleman_Walter),
    [REMATCH_KAREN] = MCFLAVOR(SchoolKid_Karen),
    [REMATCH_JERRY] = MCFLAVOR(SchoolKid_Jerry),
    [REMATCH_ANNA_AND_MEG] = MCFLAVOR(SrAndJr_AnnaAndMeg),
    [REMATCH_ISABEL] = MCFLAVOR(Pokefan_Isabel),
    [REMATCH_MIGUEL] = MCFLAVOR(Pokefan_Miguel),
    [REMATCH_TIMOTHY] = MCFLAVOR(Expert_Timothy),
    [REMATCH_SHELBY] = MCFLAVOR(Expert_Shelby),
    [REMATCH_CALVIN] = MCFLAVOR(Youngster_Calvin),
    [REMATCH_ELLIOT] = MCFLAVOR(Fisherman_Elliot),
    [REMATCH_ISAIAH] = MCFLAVOR(Triathlete_Isaiah),
    [REMATCH_MARIA] = MCFLAVOR(Triathlete_Maria),
    [REMATCH_ABIGAIL] = MCFLAVOR(Triathlete_Abigail),
    [REMATCH_DYLAN] = MCFLAVOR(Triathlete_Dylan),
    [REMATCH_KATELYN] = MCFLAVOR(Triathlete_Katelyn),
    [REMATCH_BENJAMIN] = MCFLAVOR(Triathlete_Benjamin),
    [REMATCH_PABLO] = MCFLAVOR(Triathlete_Pablo),
    [REMATCH_NICOLAS] = MCFLAVOR(DragonTamer_Nicolas),
    [REMATCH_ROBERT] = MCFLAVOR(BirdKeeper_Robert),
    [REMATCH_LAO] = MCFLAVOR(NinjaBoy_Lao),
    [REMATCH_CYNDY] = MCFLAVOR(BattleGirl_Cyndy),
    [REMATCH_MADELINE] = MCFLAVOR(ParasolLady_Madeline),
    [REMATCH_JENNY] = MCFLAVOR(Swimmer_Jenny),
    [REMATCH_DIANA] = MCFLAVOR(Picnicker_Diana),
    [REMATCH_AMY_AND_LIV] = MCFLAVOR(Twins_AmyAndLiv),
    [REMATCH_ERNEST] = MCFLAVOR(Sailor_Ernest),
    [REMATCH_CORY] = MCFLAVOR(Sailor_Cory),
    [REMATCH_EDWIN] = MCFLAVOR(Collector_Edwin),
    [REMATCH_LYDIA] = MCFLAVOR(PkmnBreeder_Lydia),
    [REMATCH_ISAAC] = MCFLAVOR(PkmnBreeder_Isaac),
    [REMATCH_GABRIELLE] = MCFLAVOR(PkmnBreeder_Gabrielle),
    [REMATCH_CATHERINE] = MCFLAVOR(PkmnRanger_Catherine),
    [REMATCH_JACKSON] = MCFLAVOR(PkmnRanger_Jackson),
    [REMATCH_HALEY] = MCFLAVOR(Lass_Haley),
    [REMATCH_JAMES] = MCFLAVOR(BugCatcher_James),
    [REMATCH_TRENT] = MCFLAVOR(Hiker_Trent),
    [REMATCH_SAWYER] = MCFLAVOR(Hiker_Sawyer),
    [REMATCH_KIRA_AND_DAN] = MCFLAVOR(YoungCouple_LoisAndHal),
    [REMATCH_WALLY_VR] = MCFLAVOR(PkmnTrainer_Wally),
    [REMATCH_ROXANNE] = MCFLAVOR(RockinWhiz_Roxanne),
    [REMATCH_BRAWLY] = MCFLAVOR(TheBigHit_Brawly),
    [REMATCH_WATTSON] = MCFLAVOR(SwellShock_Wattson),
    [REMATCH_FLANNERY] = MCFLAVOR(PassionBurn_Flannery),
    [REMATCH_NORMAN] = MCFLAVOR(ReliableOne_Dad),
    [REMATCH_WINONA] = MCFLAVOR(SkyTamer_Winona),
    [REMATCH_TATE_AND_LIZA] = MCFLAVOR(MysticDuo_TateAndLiza),
    [REMATCH_JUAN] = MCFLAVOR(DandyCharm_Juan),
    [REMATCH_SIDNEY] = MCFLAVOR(EliteFour_Sidney),
    [REMATCH_PHOEBE] = MCFLAVOR(EliteFour_Phoebe),
    [REMATCH_GLACIA] = MCFLAVOR(EliteFour_Glacia),
    [REMATCH_DRAKE] = MCFLAVOR(EliteFour_Drake),
    [REMATCH_WALLACE] = MCFLAVOR(Champion_Wallace),
};
#endif

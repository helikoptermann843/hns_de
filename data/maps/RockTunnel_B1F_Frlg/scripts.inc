RockTunnel_B1F_Frlg_MapScripts::
	.byte 0

RockTunnel_B1F_EventScript_Sofia::
	trainerbattle_single TRAINER_PICNICKER_SOFIA, RockTunnel_B1F_Text_SofiaIntro, RockTunnel_B1F_Text_SofiaDefeat
	msgbox RockTunnel_B1F_Text_SofiaPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_EventScript_Martha::
	trainerbattle_single TRAINER_PICNICKER_MARTHA, RockTunnel_B1F_Text_MarthaIntro, RockTunnel_B1F_Text_MarthaDefeat
	msgbox RockTunnel_B1F_Text_MarthaPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_EventScript_Dudley::
	trainerbattle_single TRAINER_HIKER_DUDLEY, RockTunnel_B1F_Text_DudleyIntro, RockTunnel_B1F_Text_DudleyDefeat
	msgbox RockTunnel_B1F_Text_DudleyPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_EventScript_Allen::
	trainerbattle_single TRAINER_HIKER_ALLEN, RockTunnel_B1F_Text_AllenIntro, RockTunnel_B1F_Text_AllenDefeat
	msgbox RockTunnel_B1F_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_EventScript_Eric::
	trainerbattle_single TRAINER_HIKER_ERIC, RockTunnel_B1F_Text_EricIntro, RockTunnel_B1F_Text_EricDefeat
	msgbox RockTunnel_B1F_Text_EricPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_EventScript_Cooper::
	trainerbattle_single TRAINER_POKEMANIAC_COOPER, RockTunnel_B1F_Text_CooperIntro, RockTunnel_B1F_Text_CooperDefeat
	msgbox RockTunnel_B1F_Text_CooperPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_EventScript_Steve::
	trainerbattle_single TRAINER_POKEMANIAC_STEVE, RockTunnel_B1F_Text_SteveIntro, RockTunnel_B1F_Text_SteveDefeat
	msgbox RockTunnel_B1F_Text_StevePostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_EventScript_Winston::
	trainerbattle_single TRAINER_POKEMANIAC_WINSTON, RockTunnel_B1F_Text_WinstonIntro, RockTunnel_B1F_Text_WinstonDefeat
	msgbox RockTunnel_B1F_Text_WinstonPostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_B1F_Text_SofiaIntro::
	.string "Weißt du wie man es vermeidet,\n"
	.string "sich im Gebirge zu verlaufen?\p"
	.string "Wanderer knicken Zweige, um ihren\n"
	.string "Weg zu markieren.$"

RockTunnel_B1F_Text_SofiaDefeat::
	.string "Ich habe mein Bestes gegeben!$"

RockTunnel_B1F_Text_SofiaPostBattle::
	.string "Ich will nach Hause!$"

RockTunnel_B1F_Text_DudleyIntro::
	.string "Haha!\n"
	.string "Kannst du mich besiegen?$"

RockTunnel_B1F_Text_DudleyDefeat::
	.string "Hups!\n"
	.string "Das war zu viel des Guten!$"

RockTunnel_B1F_Text_DudleyPostBattle::
	.string "Ich trainiere lieber meine Muskeln\n"
	.string "als mein Gehirn!!!$"

RockTunnel_B1F_Text_CooperIntro::
	.string "Du besitzt einen Pokédex? Cool!\n"
	.string "Ich möchte auch einen haben!$"

RockTunnel_B1F_Text_CooperDefeat::
	.string "Ach, ich bin ja so neidisch!!!$"

RockTunnel_B1F_Text_CooperPostBattle::
	.string "Gibst du mir den Pokédex, wenn er\n"
	.string "fertig ist?$"

RockTunnel_B1F_Text_SteveIntro::
	.string "Möchtest du etwas über Spaßvögel\n"
	.string "erfahren?$"

RockTunnel_B1F_Text_SteveDefeat::
	.string "So weit, so gut.$"

RockTunnel_B1F_Text_StevePostBattle::
	.string "Spaßvögel verkleiden sich gerne als\n"
	.string "Pokémon.\p"
	.string "Als Piepi gehe ich am liebsten!$"

RockTunnel_B1F_Text_AllenIntro::
	.string "Mein Pokémon wird dich das\n"
	.string "Fürchten lehren!$"

RockTunnel_B1F_Text_AllenDefeat::
	.string "Ich gebe auf!\n"
	.string "Du bist besser!$"

RockTunnel_B1F_Text_AllenPostBattle::
	.string "In den Bergen findet man viele\n"
	.string "Stein-Pokémon.$"

RockTunnel_B1F_Text_MarthaIntro::
	.string "Ich komme nicht oft hierher.\n"
	.string "Aber ich will kämpfen!$"

RockTunnel_B1F_Text_MarthaDefeat::
	.string "Oh!\n"
	.string "Ich habe verloren!$"

RockTunnel_B1F_Text_MarthaPostBattle::
	.string "Ich mag nur kleine Pokémon, die\n"
	.string "großen jagen mir Angst ein!$"

RockTunnel_B1F_Text_EricIntro::
	.string "Zeig mir, was du drauf hast!$"

RockTunnel_B1F_Text_EricDefeat::
	.string "Du bist gut!$"

RockTunnel_B1F_Text_EricPostBattle::
	.string "Ich werde mit meinen Pokémon\n"
	.string "trainieren!$"

RockTunnel_B1F_Text_WinstonIntro::
	.string "Zuhause zeichne ich gerne Pokémon.$"

RockTunnel_B1F_Text_WinstonDefeat::
	.string "Ich bin erschöpft!$"

RockTunnel_B1F_Text_WinstonPostBattle::
	.string "Ich liebe die Kunst, nicht den\n"
	.string "Kampf!$"


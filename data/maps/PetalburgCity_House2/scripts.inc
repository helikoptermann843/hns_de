PetalburgCity_House2_MapScripts::
	.byte 0

PetalburgCity_House2_EventScript_Woman::
	msgbox PetalburgCity_House2_Text_NormanBecameGymLeader, MSGBOX_NPC
	end

PetalburgCity_House2_EventScript_SchoolKid::
	msgbox PetalburgCity_House2_Text_BattledNormanOnce, MSGBOX_NPC
	end

PetalburgCity_House2_Text_NormanBecameGymLeader:
	.string "NORMAN ist unser neuer ARENALEITER.\p"
	.string "Ich glaube, er und seine Familie\n"
	.string "kommen von weit her.$"

PetalburgCity_House2_Text_BattledNormanOnce:
	.string "Ich bin erst einmal gegen NORMAN\n"
	.string "angetreten. Wow, war der stark!\p"
	.string "Wie soll ich es sagen?\p"
	.string "Ich habe den Eindruck, er lebt für\n"
	.string "seine POKéMON.$"


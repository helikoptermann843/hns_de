MtSilver_3F_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtSilver_3F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, MtSilver_3F_OnResume
	.byte 0

MtSilver_3F_OnResume::
	callnative SetTimeBasedEncounters
	setescapewarp MAP_MT_SILVER_OUTSIDE_HNS, 17, 8
	end

MtSilver_3F_OnTransition: 
	callnative SetTimeBasedEncounters
	setescapewarp MAP_MT_SILVER_OUTSIDE_HNS, 17, 8
	end

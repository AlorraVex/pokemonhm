# 1 "data/maps/Route114/scripts.pory"

# 2 "data/maps/Route114/scripts.pory"
Route114_MapScripts::
# 3 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_OnTransition
# 4 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_OnLoad
# 5 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route114_OnFrame
# 6 "data/maps/Route114/scripts.pory"
	.byte 0
# 7 "data/maps/Route114/scripts.pory"

# 8 "data/maps/Route114/scripts.pory"
Route114_OnTransition:
# 9 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_HideMapNamePopup
# 10 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_StartGroudonWeather
# 11 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_StartGroudonWeather
# 12 "data/maps/Route114/scripts.pory"
	end
# 13 "data/maps/Route114/scripts.pory"

# 14 "data/maps/Route114/scripts.pory"
Route114_OnLoad:
# 15 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH, AbnormalWeather_EventScript_PlaceTilesRoute114North
# 16 "data/maps/Route114/scripts.pory"
	call_if_eq VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH, AbnormalWeather_EventScript_PlaceTilesRoute114South
# 17 "data/maps/Route114/scripts.pory"
	end
# 18 "data/maps/Route114/scripts.pory"

# 19 "data/maps/Route114/scripts.pory"
Route114_OnFrame:
# 20 "data/maps/Route114/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 21 "data/maps/Route114/scripts.pory"
	.2byte 0
# 22 "data/maps/Route114/scripts.pory"

# 23 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man::
# 24 "data/maps/Route114/scripts.pory"
	lock
# 25 "data/maps/Route114/scripts.pory"
	faceplayer
# 26 "data/maps/Route114/scripts.pory"
	dotimebasedevents
# 27 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_ReceivedBerry
# 28 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
# 29 "data/maps/Route114/scripts.pory"
	giverandomberry BERRY_ID_RAZZ, BERRY_ID_PINAP
# 30 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 31 "data/maps/Route114/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 32 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
# 33 "data/maps/Route114/scripts.pory"
	release
# 34 "data/maps/Route114/scripts.pory"
	end
# 35 "data/maps/Route114/scripts.pory"

# 36 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedBerry::
# 37 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
# 38 "data/maps/Route114/scripts.pory"
	release
# 39 "data/maps/Route114/scripts.pory"
	end
# 40 "data/maps/Route114/scripts.pory"

# 41 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman::
# 42 "data/maps/Route114/scripts.pory"
	lock
# 43 "data/maps/Route114/scripts.pory"
	faceplayer
# 44 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROAR, Route114_EventScript_ReceivedRoar
# 45 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
# 46 "data/maps/Route114/scripts.pory"
	giveitem ITEM_TM_ROAR
# 47 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 48 "data/maps/Route114/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROAR
# 49 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 50 "data/maps/Route114/scripts.pory"
	release
# 51 "data/maps/Route114/scripts.pory"
	end
# 52 "data/maps/Route114/scripts.pory"

# 53 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedRoar::
# 54 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 55 "data/maps/Route114/scripts.pory"
	release
# 56 "data/maps/Route114/scripts.pory"
	end
# 57 "data/maps/Route114/scripts.pory"

# 58 "data/maps/Route114/scripts.pory"
Route114_EventScript_Poochyena::
# 59 "data/maps/Route114/scripts.pory"
	lock
# 60 "data/maps/Route114/scripts.pory"
	faceplayer
# 61 "data/maps/Route114/scripts.pory"
	waitse
# 62 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 63 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
# 64 "data/maps/Route114/scripts.pory"
	waitmoncry
# 65 "data/maps/Route114/scripts.pory"
	release
# 66 "data/maps/Route114/scripts.pory"
	end
# 67 "data/maps/Route114/scripts.pory"

# 68 "data/maps/Route114/scripts.pory"
Route114_EventScript_MeteorFallsSign::
# 69 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
# 70 "data/maps/Route114/scripts.pory"
	end
# 71 "data/maps/Route114/scripts.pory"

# 72 "data/maps/Route114/scripts.pory"
Route114_EventScript_FossilManiacsHouseSign::
# 73 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
# 74 "data/maps/Route114/scripts.pory"
	end
# 75 "data/maps/Route114/scripts.pory"

# 76 "data/maps/Route114/scripts.pory"
Route114_EventScript_LanettesHouseSign::
# 77 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
# 78 "data/maps/Route114/scripts.pory"
	end
# 79 "data/maps/Route114/scripts.pory"

# 80 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lenny::
# 81 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LENNY, Route114_Text_LennyIntro, Route114_Text_LennyDefeat
# 82 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route114/scripts.pory"
	end
# 84 "data/maps/Route114/scripts.pory"

# 85 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lucas::
# 86 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LUCAS_1, Route114_Text_LucasIntro, Route114_Text_LucasDefeat
# 87 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
# 88 "data/maps/Route114/scripts.pory"
	end
# 89 "data/maps/Route114/scripts.pory"

# 90 "data/maps/Route114/scripts.pory"
Route114_EventScript_Shane::
# 91 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_SHANE, Route114_Text_ShaneIntro, Route114_Text_ShaneDefeat
# 92 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ShanePostBattle, MSGBOX_AUTOCLOSE
# 93 "data/maps/Route114/scripts.pory"
	end
# 94 "data/maps/Route114/scripts.pory"

# 95 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nancy::
# 96 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NANCY, Route114_Text_NancyIntro, Route114_Text_NancyDefeat
# 97 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
# 98 "data/maps/Route114/scripts.pory"
	end
# 99 "data/maps/Route114/scripts.pory"

# 100 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve::
# 101 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_STEVE_1, Route114_Text_SteveIntro, Route114_Text_SteveDefeat, Route114_EventScript_RegisterSteve
# 102 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 103 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchSteve
# 104 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
# 105 "data/maps/Route114/scripts.pory"
	release
# 106 "data/maps/Route114/scripts.pory"
	end
# 107 "data/maps/Route114/scripts.pory"

# 108 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterSteve::
# 109 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 110 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 111 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
# 112 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_STEVE_1
# 113 "data/maps/Route114/scripts.pory"
	release
# 114 "data/maps/Route114/scripts.pory"
	end
# 115 "data/maps/Route114/scripts.pory"

# 116 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchSteve::
# 117 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
# 118 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
# 119 "data/maps/Route114/scripts.pory"
	end
# 120 "data/maps/Route114/scripts.pory"

# 121 "data/maps/Route114/scripts.pory"
Route114_EventScript_Bernie::
# 122 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_BERNIE_1, Route114_Text_BernieIntro, Route114_Text_BernieDefeat, Route114_EventScript_RegisterBernie
# 123 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 124 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchBernie
# 125 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostBattle, MSGBOX_DEFAULT
# 126 "data/maps/Route114/scripts.pory"
	release
# 127 "data/maps/Route114/scripts.pory"
	end
# 128 "data/maps/Route114/scripts.pory"

# 129 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterBernie::
# 130 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 131 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
# 133 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_BERNIE_1
# 134 "data/maps/Route114/scripts.pory"
	release
# 135 "data/maps/Route114/scripts.pory"
	end
# 136 "data/maps/Route114/scripts.pory"

# 137 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchBernie::
# 138 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_BERNIE_1, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
# 139 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
# 140 "data/maps/Route114/scripts.pory"
	end
# 141 "data/maps/Route114/scripts.pory"

# 142 "data/maps/Route114/scripts.pory"
Route114_EventScript_Claude::
# 143 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route114_Text_ClaudeIntro, Route114_Text_ClaudeDefeat
# 144 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 145 "data/maps/Route114/scripts.pory"
	end
# 146 "data/maps/Route114/scripts.pory"

# 147 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nolan::
# 148 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
# 149 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
# 150 "data/maps/Route114/scripts.pory"
	end
# 151 "data/maps/Route114/scripts.pory"

# 152 "data/maps/Route114/scripts.pory"
Route114_EventScript_Tyra::
# 153 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_TyraIntro, Route114_Text_TyraDefeat, Route114_Text_TyraNotEnoughMons
# 154 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 155 "data/maps/Route114/scripts.pory"
	end
# 156 "data/maps/Route114/scripts.pory"

# 157 "data/maps/Route114/scripts.pory"
Route114_EventScript_Ivy::
# 158 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_IvyIntro, Route114_Text_IvyDefeat, Route114_Text_IvyNotEnoughMons
# 159 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 160 "data/maps/Route114/scripts.pory"
	end
# 161 "data/maps/Route114/scripts.pory"

# 162 "data/maps/Route114/scripts.pory"
Route114_EventScript_Angelina::
# 163 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_ANGELINA, Route114_Text_AngelinaIntro, Route114_Text_AngelinaDefeat
# 164 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AngelinaPostBattle, MSGBOX_AUTOCLOSE
# 165 "data/maps/Route114/scripts.pory"
	end
# 166 "data/maps/Route114/scripts.pory"

# 167 "data/maps/Route114/scripts.pory"
Route114_EventScript_Charlotte::
# 168 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CHARLOTTE, Route114_Text_CharlotteIntro, Route114_Text_CharlotteDefeat
# 169 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 170 "data/maps/Route114/scripts.pory"
	end
# 171 "data/maps/Route114/scripts.pory"

# 172 "data/maps/Route114/scripts.pory"
Route114_EventScript_Kai::
# 173 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_KAI, Route114_Text_KaiIntro, Route114_Text_KaiDefeat
# 174 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 175 "data/maps/Route114/scripts.pory"
	end
# 176 "data/maps/Route114/scripts.pory"

# 177 "data/maps/Route114/scripts.pory"
Route114_Text_AllMyMonDoesIsRoarTakeThis:
# 178 "data/maps/Route114/scripts.pory"
	.string "All my POKéMON does is ROAR…\n"
# 179 "data/maps/Route114/scripts.pory"
	.string "No one dares to come near me…\p"
# 180 "data/maps/Route114/scripts.pory"
	.string "Sigh… If you would, please take\n"
# 181 "data/maps/Route114/scripts.pory"
	.string "this TM away…$"
# 182 "data/maps/Route114/scripts.pory"

# 183 "data/maps/Route114/scripts.pory"
Route114_Text_ExplainRoar:
# 184 "data/maps/Route114/scripts.pory"
	.string "TM05 contains ROAR.\n"
# 185 "data/maps/Route114/scripts.pory"
	.string "A ROAR sends POKéMON scurrying.$"
# 186 "data/maps/Route114/scripts.pory"

# 187 "data/maps/Route114/scripts.pory"
Route114_Text_Poochyena:
# 188 "data/maps/Route114/scripts.pory"
	.string "Bow! Bowwow!$"
# 189 "data/maps/Route114/scripts.pory"

# 190 "data/maps/Route114/scripts.pory"
Route114_Text_MeteorFallsSign:
# 191 "data/maps/Route114/scripts.pory"
	.string "METEOR FALLS\n"
# 192 "data/maps/Route114/scripts.pory"
	.string "RUSTBORO CITY THROUGH HERE$"
# 193 "data/maps/Route114/scripts.pory"

# 194 "data/maps/Route114/scripts.pory"
Route114_Text_FossilManiacsHouseSign:
# 195 "data/maps/Route114/scripts.pory"
	.string "FOSSIL MANIAC'S HOUSE\n"
# 196 "data/maps/Route114/scripts.pory"
	.string "“Fossils gratefully accepted!”$"
# 197 "data/maps/Route114/scripts.pory"

# 198 "data/maps/Route114/scripts.pory"
Route114_Text_LanettesHouse:
# 199 "data/maps/Route114/scripts.pory"
	.string "LANETTE'S HOUSE$"

Route114_EventScript_FirstFreezeDry::
# 204 "data/maps/Route114/scripts.pory"
	lock
# 205 "data/maps/Route114/scripts.pory"
	goto_if_unset FLAG_FREEZE_DRY_DISCOVERED, Route114_EventScript_FirstFreezeDry_2
# 255 "data/maps/Route114/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Route114_EventScript_FirstFreezeDry_8
# 279 "data/maps/Route114/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Route114_EventScript_FirstFreezeDry_22
# 304 "data/maps/Route114/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Route114_EventScript_FirstFreezeDry_29
Route114_EventScript_FirstFreezeDry_1:
# 315 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_EventScript_FirstFreezeDry_2:
# 206 "data/maps/Route114/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_EEVEE
# 207 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonSpecies
# 208 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_FirstFreezeDry_5
# 247 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_10
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_5:
# 209 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_0
# 211 "data/maps/Route114/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Route114_EventScript_FirstFreezeDry_Text_1, Route114_EventScript_FirstFreezeDry_Text_2, Route114_EventScript_FirstFreezeDry_Text_3, Route114_EventScript_FirstFreezeDry_Text_4
# 212 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route114_EventScript_FirstFreezeDry_11
# 216 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route114_EventScript_FirstFreezeDry_12
# 220 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route114_EventScript_FirstFreezeDry_13
# 224 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route114_EventScript_FirstFreezeDry_14
# 243 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_9
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_8:
# 256 "data/maps/Route114/scripts.pory"
	checkspecies SPECIES_EEVEE
# 257 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_FirstFreezeDry_20
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_11:
# 213 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_5
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_12:
# 217 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_6
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_13:
# 221 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_7
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_14:
# 225 "data/maps/Route114/scripts.pory"
	delay 16
# 226 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
# 227 "data/maps/Route114/scripts.pory"
	waitmoncry
# 228 "data/maps/Route114/scripts.pory"
	delay 8
# 229 "data/maps/Route114/scripts.pory"
	playse SE_M_BLIZZARD2
# 230 "data/maps/Route114/scripts.pory"
	delay 16
# 231 "data/maps/Route114/scripts.pory"
	setmetatile 12, 13, 0x135, 0
# 232 "data/maps/Route114/scripts.pory"
	setmetatile 11, 13, 0x135, 0
# 233 "data/maps/Route114/scripts.pory"
	setmetatile 10, 13, 0x135, 0
# 234 "data/maps/Route114/scripts.pory"
	setmetatile 9, 13, 0x135, 0
# 235 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 236 "data/maps/Route114/scripts.pory"
	delay 16
# 237 "data/maps/Route114/scripts.pory"
	setvar VAR_TEMP_1, 1
# 238 "data/maps/Route114/scripts.pory"
	setflag FLAG_FREEZE_DRY_DISCOVERED
# 239 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_8
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_20:
# 258 "data/maps/Route114/scripts.pory"
	msgbox MakeBridgeEevee, MSGBOX_YESNO
# 259 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route114_EventScript_FirstFreezeDry_25
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_22:
# 280 "data/maps/Route114/scripts.pory"
	checkspecies SPECIES_GLACEON
# 281 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_FirstFreezeDry_27
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_25:
# 260 "data/maps/Route114/scripts.pory"
	delay 16
# 261 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
# 262 "data/maps/Route114/scripts.pory"
	waitmoncry
# 263 "data/maps/Route114/scripts.pory"
	delay 8
# 264 "data/maps/Route114/scripts.pory"
	playse SE_M_BLIZZARD2
# 265 "data/maps/Route114/scripts.pory"
	delay 16
# 266 "data/maps/Route114/scripts.pory"
	setmetatile 12, 13, 0x135, 0
# 267 "data/maps/Route114/scripts.pory"
	setmetatile 11, 13, 0x135, 0
# 268 "data/maps/Route114/scripts.pory"
	setmetatile 10, 13, 0x135, 0
# 269 "data/maps/Route114/scripts.pory"
	setmetatile 9, 13, 0x135, 0
# 270 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 271 "data/maps/Route114/scripts.pory"
	delay 16
# 272 "data/maps/Route114/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_27:
# 282 "data/maps/Route114/scripts.pory"
	bufferleadmonspeciesname 0
# 283 "data/maps/Route114/scripts.pory"
	msgbox MakeBridgeGlaceon, MSGBOX_YESNO
# 284 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route114_EventScript_FirstFreezeDry_31
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_29:
# 305 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_10
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_31:
# 285 "data/maps/Route114/scripts.pory"
	delay 16
# 286 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_GLACEON, CRY_MODE_NORMAL
# 287 "data/maps/Route114/scripts.pory"
	waitmoncry
# 288 "data/maps/Route114/scripts.pory"
	delay 8
# 289 "data/maps/Route114/scripts.pory"
	playse SE_M_BLIZZARD2
# 290 "data/maps/Route114/scripts.pory"
	delay 16
# 291 "data/maps/Route114/scripts.pory"
	setmetatile 12, 13, 0x135, 0
# 292 "data/maps/Route114/scripts.pory"
	setmetatile 11, 13, 0x135, 0
# 293 "data/maps/Route114/scripts.pory"
	setmetatile 10, 13, 0x135, 0
# 294 "data/maps/Route114/scripts.pory"
	setmetatile 9, 13, 0x135, 0
# 295 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 296 "data/maps/Route114/scripts.pory"
	delay 16
# 297 "data/maps/Route114/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto Route114_EventScript_FirstFreezeDry_1


Route114_EventScript_FreezeDry1::
# 321 "data/maps/Route114/scripts.pory"
	lock
# 322 "data/maps/Route114/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Route114_EventScript_FreezeDry1_2
# 346 "data/maps/Route114/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Route114_EventScript_FreezeDry1_7
# 371 "data/maps/Route114/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Route114_EventScript_FreezeDry1_14
Route114_EventScript_FreezeDry1_1:
# 380 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_EventScript_FreezeDry1_2:
# 323 "data/maps/Route114/scripts.pory"
	checkspecies SPECIES_EEVEE
# 324 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_FreezeDry1_5
	goto Route114_EventScript_FreezeDry1_1

Route114_EventScript_FreezeDry1_5:
# 325 "data/maps/Route114/scripts.pory"
	msgbox MakeBridgeEevee, MSGBOX_YESNO
# 326 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route114_EventScript_FreezeDry1_10
	goto Route114_EventScript_FreezeDry1_1

Route114_EventScript_FreezeDry1_7:
# 347 "data/maps/Route114/scripts.pory"
	checkspecies SPECIES_GLACEON
# 348 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_FreezeDry1_12
	goto Route114_EventScript_FreezeDry1_1

Route114_EventScript_FreezeDry1_10:
# 327 "data/maps/Route114/scripts.pory"
	delay 16
# 328 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
# 329 "data/maps/Route114/scripts.pory"
	waitmoncry
# 330 "data/maps/Route114/scripts.pory"
	delay 8
# 331 "data/maps/Route114/scripts.pory"
	playse SE_M_BLIZZARD2
# 332 "data/maps/Route114/scripts.pory"
	delay 16
# 333 "data/maps/Route114/scripts.pory"
	setmetatile 12, 13, 0x135, 0
# 334 "data/maps/Route114/scripts.pory"
	setmetatile 11, 13, 0x135, 0
# 335 "data/maps/Route114/scripts.pory"
	setmetatile 10, 13, 0x135, 0
# 336 "data/maps/Route114/scripts.pory"
	setmetatile 9, 13, 0x135, 0
# 337 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 338 "data/maps/Route114/scripts.pory"
	delay 16
# 339 "data/maps/Route114/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto Route114_EventScript_FreezeDry1_1

Route114_EventScript_FreezeDry1_12:
# 349 "data/maps/Route114/scripts.pory"
	bufferleadmonspeciesname 0
# 350 "data/maps/Route114/scripts.pory"
	msgbox MakeBridgeGlaceon, MSGBOX_YESNO
# 351 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route114_EventScript_FreezeDry1_16
	goto Route114_EventScript_FreezeDry1_1

Route114_EventScript_FreezeDry1_14:
# 372 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_10
	goto Route114_EventScript_FreezeDry1_1

Route114_EventScript_FreezeDry1_16:
# 352 "data/maps/Route114/scripts.pory"
	delay 16
# 353 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_GLACEON, CRY_MODE_NORMAL
# 354 "data/maps/Route114/scripts.pory"
	waitmoncry
# 355 "data/maps/Route114/scripts.pory"
	delay 8
# 356 "data/maps/Route114/scripts.pory"
	playse SE_M_BLIZZARD2
# 357 "data/maps/Route114/scripts.pory"
	delay 16
# 358 "data/maps/Route114/scripts.pory"
	setmetatile 12, 13, 0x135, 0
# 359 "data/maps/Route114/scripts.pory"
	setmetatile 11, 13, 0x135, 0
# 360 "data/maps/Route114/scripts.pory"
	setmetatile 10, 13, 0x135, 0
# 361 "data/maps/Route114/scripts.pory"
	setmetatile 9, 13, 0x135, 0
# 362 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 363 "data/maps/Route114/scripts.pory"
	delay 16
# 364 "data/maps/Route114/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto Route114_EventScript_FreezeDry1_1


Route114_EventScript_FreezeDry2::
# 386 "data/maps/Route114/scripts.pory"
	lock
# 387 "data/maps/Route114/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq Route114_EventScript_FreezeDry2_2
# 410 "data/maps/Route114/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq Route114_EventScript_FreezeDry2_7
# 434 "data/maps/Route114/scripts.pory"
	compare VAR_TEMP_2, 0
	goto_if_eq Route114_EventScript_FreezeDry2_14
Route114_EventScript_FreezeDry2_1:
# 443 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_EventScript_FreezeDry2_2:
# 388 "data/maps/Route114/scripts.pory"
	checkspecies SPECIES_EEVEE
# 389 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_FreezeDry2_5
	goto Route114_EventScript_FreezeDry2_1

Route114_EventScript_FreezeDry2_5:
# 390 "data/maps/Route114/scripts.pory"
	msgbox MakeBridgeEevee, MSGBOX_YESNO
# 391 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route114_EventScript_FreezeDry2_10
	goto Route114_EventScript_FreezeDry2_1

Route114_EventScript_FreezeDry2_7:
# 411 "data/maps/Route114/scripts.pory"
	checkspecies SPECIES_GLACEON
# 412 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_FreezeDry2_12
	goto Route114_EventScript_FreezeDry2_1

Route114_EventScript_FreezeDry2_10:
# 392 "data/maps/Route114/scripts.pory"
	delay 16
# 393 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
# 394 "data/maps/Route114/scripts.pory"
	waitmoncry
# 395 "data/maps/Route114/scripts.pory"
	delay 8
# 396 "data/maps/Route114/scripts.pory"
	playse SE_M_BLIZZARD2
# 397 "data/maps/Route114/scripts.pory"
	delay 16
# 398 "data/maps/Route114/scripts.pory"
	setmetatile 3, 16, 0x135, 0
# 399 "data/maps/Route114/scripts.pory"
	setmetatile 3, 17, 0x135, 0
# 400 "data/maps/Route114/scripts.pory"
	setmetatile 3, 18, 0x135, 0
# 401 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 402 "data/maps/Route114/scripts.pory"
	delay 16
# 403 "data/maps/Route114/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto Route114_EventScript_FreezeDry2_1

Route114_EventScript_FreezeDry2_12:
# 413 "data/maps/Route114/scripts.pory"
	bufferleadmonspeciesname 0
# 414 "data/maps/Route114/scripts.pory"
	msgbox MakeBridgeGlaceon, MSGBOX_YESNO
# 415 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route114_EventScript_FreezeDry2_16
	goto Route114_EventScript_FreezeDry2_1

Route114_EventScript_FreezeDry2_14:
# 435 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_10
	goto Route114_EventScript_FreezeDry2_1

Route114_EventScript_FreezeDry2_16:
# 416 "data/maps/Route114/scripts.pory"
	delay 16
# 417 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_GLACEON, CRY_MODE_NORMAL
# 418 "data/maps/Route114/scripts.pory"
	waitmoncry
# 419 "data/maps/Route114/scripts.pory"
	delay 8
# 420 "data/maps/Route114/scripts.pory"
	playse SE_M_BLIZZARD2
# 421 "data/maps/Route114/scripts.pory"
	delay 16
# 422 "data/maps/Route114/scripts.pory"
	setmetatile 3, 16, 0x135, 0
# 423 "data/maps/Route114/scripts.pory"
	setmetatile 3, 17, 0x135, 0
# 424 "data/maps/Route114/scripts.pory"
	setmetatile 3, 18, 0x135, 0
# 425 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 426 "data/maps/Route114/scripts.pory"
	delay 16
# 427 "data/maps/Route114/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto Route114_EventScript_FreezeDry2_1


Route114_EventScript_FreezeDry3::
# 449 "data/maps/Route114/scripts.pory"
	lock
# 450 "data/maps/Route114/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq Route114_EventScript_FreezeDry3_2
# 472 "data/maps/Route114/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq Route114_EventScript_FreezeDry3_7
# 495 "data/maps/Route114/scripts.pory"
	compare VAR_TEMP_3, 0
	goto_if_eq Route114_EventScript_FreezeDry3_14
Route114_EventScript_FreezeDry3_1:
# 504 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_EventScript_FreezeDry3_2:
# 451 "data/maps/Route114/scripts.pory"
	checkspecies SPECIES_EEVEE
# 452 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_FreezeDry3_5
	goto Route114_EventScript_FreezeDry3_1

Route114_EventScript_FreezeDry3_5:
# 453 "data/maps/Route114/scripts.pory"
	msgbox MakeBridgeEevee, MSGBOX_YESNO
# 454 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route114_EventScript_FreezeDry3_10
	goto Route114_EventScript_FreezeDry3_1

Route114_EventScript_FreezeDry3_7:
# 473 "data/maps/Route114/scripts.pory"
	checkspecies SPECIES_GLACEON
# 474 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_FreezeDry3_12
	goto Route114_EventScript_FreezeDry3_1

Route114_EventScript_FreezeDry3_10:
# 455 "data/maps/Route114/scripts.pory"
	delay 16
# 456 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
# 457 "data/maps/Route114/scripts.pory"
	delay 8
# 458 "data/maps/Route114/scripts.pory"
	waitmoncry
# 459 "data/maps/Route114/scripts.pory"
	playse SE_M_BLIZZARD2
# 460 "data/maps/Route114/scripts.pory"
	delay 16
# 461 "data/maps/Route114/scripts.pory"
	setmetatile 8, 27, 0x135, 0
# 462 "data/maps/Route114/scripts.pory"
	setmetatile 9, 27, 0x135, 0
# 463 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 464 "data/maps/Route114/scripts.pory"
	delay 16
# 465 "data/maps/Route114/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto Route114_EventScript_FreezeDry3_1

Route114_EventScript_FreezeDry3_12:
# 475 "data/maps/Route114/scripts.pory"
	bufferleadmonspeciesname 0
# 476 "data/maps/Route114/scripts.pory"
	msgbox MakeBridgeGlaceon, MSGBOX_YESNO
# 477 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route114_EventScript_FreezeDry3_16
	goto Route114_EventScript_FreezeDry3_1

Route114_EventScript_FreezeDry3_14:
# 496 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_10
	goto Route114_EventScript_FreezeDry3_1

Route114_EventScript_FreezeDry3_16:
# 478 "data/maps/Route114/scripts.pory"
	delay 16
# 479 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_GLACEON, CRY_MODE_NORMAL
# 480 "data/maps/Route114/scripts.pory"
	waitmoncry
# 481 "data/maps/Route114/scripts.pory"
	delay 8
# 482 "data/maps/Route114/scripts.pory"
	playse SE_M_BLIZZARD2
# 483 "data/maps/Route114/scripts.pory"
	delay 16
# 484 "data/maps/Route114/scripts.pory"
	setmetatile 8, 27, 0x135, 0
# 485 "data/maps/Route114/scripts.pory"
	setmetatile 9, 27, 0x135, 0
# 486 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 487 "data/maps/Route114/scripts.pory"
	delay 16
# 488 "data/maps/Route114/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto Route114_EventScript_FreezeDry3_1


Route114_Trigger_Bridge1CollisionOnSurf::
# 513 "data/maps/Route114/scripts.pory"
	lockall
# 514 "data/maps/Route114/scripts.pory"
	setmetatile 12, 13, 0x135, 1
# 515 "data/maps/Route114/scripts.pory"
	setmetatile 11, 13, 0x135, 1
# 516 "data/maps/Route114/scripts.pory"
	setmetatile 10, 13, 0x135, 1
# 517 "data/maps/Route114/scripts.pory"
	setmetatile 9, 13, 0x135, 1
# 518 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 519 "data/maps/Route114/scripts.pory"
	releaseall
	end


Route114_Trigger_Bridge1CollisionOffSurf::
# 526 "data/maps/Route114/scripts.pory"
	lockall
# 527 "data/maps/Route114/scripts.pory"
	setmetatile 12, 13, 0x192, 0
# 528 "data/maps/Route114/scripts.pory"
	setmetatile 11, 13, 0x170, 0
# 529 "data/maps/Route114/scripts.pory"
	setmetatile 10, 13, 0x170, 0
# 530 "data/maps/Route114/scripts.pory"
	setmetatile 9, 13, 0x190, 0
# 531 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 532 "data/maps/Route114/scripts.pory"
	releaseall
	end


Route114_Trigger_Bridge1CollisionOffLand::
# 539 "data/maps/Route114/scripts.pory"
	lockall
# 540 "data/maps/Route114/scripts.pory"
	setmetatile 12, 13, 0x135, 0
# 541 "data/maps/Route114/scripts.pory"
	setmetatile 11, 13, 0x135, 0
# 542 "data/maps/Route114/scripts.pory"
	setmetatile 10, 13, 0x135, 0
# 543 "data/maps/Route114/scripts.pory"
	setmetatile 9, 13, 0x135, 0
# 544 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 545 "data/maps/Route114/scripts.pory"
	releaseall
	end


Route114_Trigger_Bridge1CollisionOnLand::
# 552 "data/maps/Route114/scripts.pory"
	lockall
# 553 "data/maps/Route114/scripts.pory"
	setmetatile 12, 13, 0x192, 1
# 554 "data/maps/Route114/scripts.pory"
	setmetatile 11, 13, 0x170, 1
# 555 "data/maps/Route114/scripts.pory"
	setmetatile 10, 13, 0x170, 1
# 556 "data/maps/Route114/scripts.pory"
	setmetatile 9, 13, 0x190, 1
# 557 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 558 "data/maps/Route114/scripts.pory"
	releaseall
	end


Route114_Trigger_Bridge2CollisionOnSurf::
# 567 "data/maps/Route114/scripts.pory"
	lockall
# 568 "data/maps/Route114/scripts.pory"
	setmetatile 3, 16, 0x135, 1
# 569 "data/maps/Route114/scripts.pory"
	setmetatile 3, 17, 0x135, 1
# 570 "data/maps/Route114/scripts.pory"
	setmetatile 3, 18, 0x135, 1
# 571 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 572 "data/maps/Route114/scripts.pory"
	releaseall
	end


Route114_Trigger_Bridge2CollisionOffSurf::
# 579 "data/maps/Route114/scripts.pory"
	lockall
# 580 "data/maps/Route114/scripts.pory"
	setmetatile 3, 16, 0x189, 0
# 581 "data/maps/Route114/scripts.pory"
	setmetatile 3, 17, 0x170, 0
# 582 "data/maps/Route114/scripts.pory"
	setmetatile 3, 18, 0x170, 0
# 583 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 584 "data/maps/Route114/scripts.pory"
	releaseall
	end


Route114_Trigger_Bridge2CollisionOffLand::
# 591 "data/maps/Route114/scripts.pory"
	lockall
# 592 "data/maps/Route114/scripts.pory"
	setmetatile 3, 16, 0x135, 0
# 593 "data/maps/Route114/scripts.pory"
	setmetatile 3, 17, 0x135, 0
# 594 "data/maps/Route114/scripts.pory"
	setmetatile 3, 18, 0x135, 0
# 595 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 596 "data/maps/Route114/scripts.pory"
	releaseall
	end


Route114_Trigger_Bridge2CollisionOnLand::
# 603 "data/maps/Route114/scripts.pory"
	lockall
# 604 "data/maps/Route114/scripts.pory"
	setmetatile 3, 16, 0x189, 1
# 605 "data/maps/Route114/scripts.pory"
	setmetatile 3, 17, 0x170, 1
# 606 "data/maps/Route114/scripts.pory"
	setmetatile 3, 18, 0x170, 1
# 607 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 608 "data/maps/Route114/scripts.pory"
	releaseall
	end


Route114_Trigger_Bridge3CollisionOnSurf::
# 617 "data/maps/Route114/scripts.pory"
	lockall
# 618 "data/maps/Route114/scripts.pory"
	setmetatile 8, 27, 0x135, 1
# 619 "data/maps/Route114/scripts.pory"
	setmetatile 9, 27, 0x135, 1
# 620 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 621 "data/maps/Route114/scripts.pory"
	releaseall
	end


Route114_Trigger_Bridge3CollisionOffSurf::
# 628 "data/maps/Route114/scripts.pory"
	lockall
# 629 "data/maps/Route114/scripts.pory"
	setmetatile 8, 27, 0x190, 0
# 630 "data/maps/Route114/scripts.pory"
	setmetatile 9, 27, 0x192, 0
# 631 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 632 "data/maps/Route114/scripts.pory"
	releaseall
	end


Route114_Trigger_Bridge3CollisionOffLand::
# 639 "data/maps/Route114/scripts.pory"
	lockall
# 640 "data/maps/Route114/scripts.pory"
	setmetatile 8, 27, 0x135, 0
# 641 "data/maps/Route114/scripts.pory"
	setmetatile 9, 27, 0x135, 0
# 642 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 643 "data/maps/Route114/scripts.pory"
	releaseall
	end


Route114_Trigger_Bridge3CollisionOnLand::
# 650 "data/maps/Route114/scripts.pory"
	lockall
# 651 "data/maps/Route114/scripts.pory"
	setmetatile 8, 27, 0x190, 1
# 652 "data/maps/Route114/scripts.pory"
	setmetatile 9, 27, 0x192, 1
# 653 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 654 "data/maps/Route114/scripts.pory"
	releaseall
	end


Route114_EventScript_FirstFreezeDry_Text_0:
# 209 "data/maps/Route114/scripts.pory"
	.string "The water here is icy.\n"
	.string "Have Eevee use a move?$"

Route114_EventScript_FirstFreezeDry_Text_1:
# 211 "data/maps/Route114/scripts.pory"
	.string "Mirror Move$"

Route114_EventScript_FirstFreezeDry_Text_2:
# 211 "data/maps/Route114/scripts.pory"
	.string "Helping Hand$"

Route114_EventScript_FirstFreezeDry_Text_3:
# 211 "data/maps/Route114/scripts.pory"
	.string "Bite$"

Route114_EventScript_FirstFreezeDry_Text_4:
# 211 "data/maps/Route114/scripts.pory"
	.string "Freeze Dry$"

Route114_EventScript_FirstFreezeDry_Text_5:
# 213 "data/maps/Route114/scripts.pory"
	.string "Eevee used the water's reflection to do\n"
	.string "its hair.$"

Route114_EventScript_FirstFreezeDry_Text_6:
# 217 "data/maps/Route114/scripts.pory"
	.string "Eevee used the Help action. You\n"
	.string "gain advantage on your next d20 test!\l$"

Route114_EventScript_FirstFreezeDry_Text_7:
# 221 "data/maps/Route114/scripts.pory"
	.string "Eevee bites the water.\n"
	.string "The water does not respond.$"

Route114_EventScript_FirstFreezeDry_Text_8:
# 239 "data/maps/Route114/scripts.pory"
	.string "Eevee made a bridge with Freeze Dry!$"

Route114_EventScript_FirstFreezeDry_Text_9:
# 243 "data/maps/Route114/scripts.pory"
	.string "It didn't seem to have any effect.$"

Route114_EventScript_FirstFreezeDry_Text_10:
# 247 "data/maps/Route114/scripts.pory"
	.string "The water here is icy.\n"
	.string "A pokemon may be able to freeze it.$"

MakeBridgeEevee::
# 659 "data/maps/Route114/scripts.pory"
	.string "The water here is icy.\n"
	.string "Have Eevee use Freeze Dry?$"

MakeBridgeGlaceon::
# 664 "data/maps/Route114/scripts.pory"
	.string "The water here is icy.\n"
	.string "Have Glaceon use Glaciate?$"

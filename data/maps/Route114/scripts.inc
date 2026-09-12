# 1 "data/maps/Route114/scripts.pory"

# 2 "data/maps/Route114/scripts.pory"

# 3 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man::
# 4 "data/maps/Route114/scripts.pory"
	lock
# 5 "data/maps/Route114/scripts.pory"
	faceplayer
# 6 "data/maps/Route114/scripts.pory"
	dotimebasedevents
# 7 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_ReceivedBerry
# 8 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
# 9 "data/maps/Route114/scripts.pory"
	giverandomberry BERRY_ID_RAZZ, BERRY_ID_PINAP
# 10 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 11 "data/maps/Route114/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 12 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
# 13 "data/maps/Route114/scripts.pory"
	release
# 14 "data/maps/Route114/scripts.pory"
	end
# 15 "data/maps/Route114/scripts.pory"

# 16 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedBerry::
# 17 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
# 18 "data/maps/Route114/scripts.pory"
	release
# 19 "data/maps/Route114/scripts.pory"
	end
# 20 "data/maps/Route114/scripts.pory"

# 21 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman::
# 22 "data/maps/Route114/scripts.pory"
	lock
# 23 "data/maps/Route114/scripts.pory"
	faceplayer
# 24 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_ROAR, Route114_EventScript_ReceivedRoar
# 25 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
# 26 "data/maps/Route114/scripts.pory"
	giveitem ITEM_TM_ROAR
# 27 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 28 "data/maps/Route114/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROAR
# 29 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 30 "data/maps/Route114/scripts.pory"
	release
# 31 "data/maps/Route114/scripts.pory"
	end
# 32 "data/maps/Route114/scripts.pory"

# 33 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedRoar::
# 34 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 35 "data/maps/Route114/scripts.pory"
	release
# 36 "data/maps/Route114/scripts.pory"
	end
# 37 "data/maps/Route114/scripts.pory"

# 38 "data/maps/Route114/scripts.pory"
Route114_EventScript_Poochyena::
# 39 "data/maps/Route114/scripts.pory"
	lock
# 40 "data/maps/Route114/scripts.pory"
	faceplayer
# 41 "data/maps/Route114/scripts.pory"
	waitse
# 42 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_POOCHYENA, CRY_MODE_ENCOUNTER
# 43 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
# 44 "data/maps/Route114/scripts.pory"
	waitmoncry
# 45 "data/maps/Route114/scripts.pory"
	release
# 46 "data/maps/Route114/scripts.pory"
	end
# 47 "data/maps/Route114/scripts.pory"

# 48 "data/maps/Route114/scripts.pory"
Route114_EventScript_MeteorFallsSign::
# 49 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
# 50 "data/maps/Route114/scripts.pory"
	end
# 51 "data/maps/Route114/scripts.pory"

# 52 "data/maps/Route114/scripts.pory"
Route114_EventScript_FossilManiacsHouseSign::
# 53 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
# 54 "data/maps/Route114/scripts.pory"
	end
# 55 "data/maps/Route114/scripts.pory"

# 56 "data/maps/Route114/scripts.pory"
Route114_EventScript_LanettesHouseSign::
# 57 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
# 58 "data/maps/Route114/scripts.pory"
	end
# 59 "data/maps/Route114/scripts.pory"

# 60 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lenny::
# 61 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LENNY, Route114_Text_LennyIntro, Route114_Text_LennyDefeat
# 62 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
# 63 "data/maps/Route114/scripts.pory"
	end
# 64 "data/maps/Route114/scripts.pory"

# 65 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lucas::
# 66 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LUCAS_1, Route114_Text_LucasIntro, Route114_Text_LucasDefeat
# 67 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/Route114/scripts.pory"
	end
# 69 "data/maps/Route114/scripts.pory"

# 70 "data/maps/Route114/scripts.pory"
Route114_EventScript_Shane::
# 71 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_SHANE, Route114_Text_ShaneIntro, Route114_Text_ShaneDefeat
# 72 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ShanePostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/Route114/scripts.pory"
	end
# 74 "data/maps/Route114/scripts.pory"

# 75 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nancy::
# 76 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NANCY, Route114_Text_NancyIntro, Route114_Text_NancyDefeat
# 77 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
# 78 "data/maps/Route114/scripts.pory"
	end
# 79 "data/maps/Route114/scripts.pory"

# 80 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve::
# 81 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_STEVE_1, Route114_Text_SteveIntro, Route114_Text_SteveDefeat, Route114_EventScript_RegisterSteve
# 82 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 83 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchSteve
# 84 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
# 85 "data/maps/Route114/scripts.pory"
	release
# 86 "data/maps/Route114/scripts.pory"
	end
# 87 "data/maps/Route114/scripts.pory"

# 88 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterSteve::
# 89 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 90 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 91 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
# 92 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_STEVE_1
# 93 "data/maps/Route114/scripts.pory"
	release
# 94 "data/maps/Route114/scripts.pory"
	end
# 95 "data/maps/Route114/scripts.pory"

# 96 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchSteve::
# 97 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
# 98 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
# 99 "data/maps/Route114/scripts.pory"
	end
# 100 "data/maps/Route114/scripts.pory"

# 101 "data/maps/Route114/scripts.pory"
Route114_EventScript_Bernie::
# 102 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_BERNIE_1, Route114_Text_BernieIntro, Route114_Text_BernieDefeat, Route114_EventScript_RegisterBernie
# 103 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 104 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route114_EventScript_RematchBernie
# 105 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostBattle, MSGBOX_DEFAULT
# 106 "data/maps/Route114/scripts.pory"
	release
# 107 "data/maps/Route114/scripts.pory"
	end
# 108 "data/maps/Route114/scripts.pory"

# 109 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterBernie::
# 110 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 111 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 112 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
# 113 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_BERNIE_1
# 114 "data/maps/Route114/scripts.pory"
	release
# 115 "data/maps/Route114/scripts.pory"
	end
# 116 "data/maps/Route114/scripts.pory"

# 117 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchBernie::
# 118 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_BERNIE_1, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
# 119 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
# 120 "data/maps/Route114/scripts.pory"
	end
# 121 "data/maps/Route114/scripts.pory"

# 122 "data/maps/Route114/scripts.pory"
Route114_EventScript_Claude::
# 123 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route114_Text_ClaudeIntro, Route114_Text_ClaudeDefeat
# 124 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/Route114/scripts.pory"
	end
# 126 "data/maps/Route114/scripts.pory"

# 127 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nolan::
# 128 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
# 129 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
# 130 "data/maps/Route114/scripts.pory"
	end
# 131 "data/maps/Route114/scripts.pory"

# 132 "data/maps/Route114/scripts.pory"
Route114_EventScript_Tyra::
# 133 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_TyraIntro, Route114_Text_TyraDefeat, Route114_Text_TyraNotEnoughMons
# 134 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 135 "data/maps/Route114/scripts.pory"
	end
# 136 "data/maps/Route114/scripts.pory"

# 137 "data/maps/Route114/scripts.pory"
Route114_EventScript_Ivy::
# 138 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_IvyIntro, Route114_Text_IvyDefeat, Route114_Text_IvyNotEnoughMons
# 139 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 140 "data/maps/Route114/scripts.pory"
	end
# 141 "data/maps/Route114/scripts.pory"

# 142 "data/maps/Route114/scripts.pory"
Route114_EventScript_Angelina::
# 143 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_ANGELINA, Route114_Text_AngelinaIntro, Route114_Text_AngelinaDefeat
# 144 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AngelinaPostBattle, MSGBOX_AUTOCLOSE
# 145 "data/maps/Route114/scripts.pory"
	end
# 146 "data/maps/Route114/scripts.pory"

# 147 "data/maps/Route114/scripts.pory"
Route114_EventScript_Charlotte::
# 148 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CHARLOTTE, Route114_Text_CharlotteIntro, Route114_Text_CharlotteDefeat
# 149 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 150 "data/maps/Route114/scripts.pory"
	end
# 151 "data/maps/Route114/scripts.pory"

# 152 "data/maps/Route114/scripts.pory"
Route114_EventScript_Kai::
# 153 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_KAI, Route114_Text_KaiIntro, Route114_Text_KaiDefeat
# 154 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 155 "data/maps/Route114/scripts.pory"
	end
# 156 "data/maps/Route114/scripts.pory"

# 157 "data/maps/Route114/scripts.pory"
Route114_Text_AllMyMonDoesIsRoarTakeThis:
# 158 "data/maps/Route114/scripts.pory"
	.string "All my POKéMON does is ROAR…\n"
# 159 "data/maps/Route114/scripts.pory"
	.string "No one dares to come near me…\p"
# 160 "data/maps/Route114/scripts.pory"
	.string "Sigh… If you would, please take\n"
# 161 "data/maps/Route114/scripts.pory"
	.string "this TM away…$"
# 162 "data/maps/Route114/scripts.pory"

# 163 "data/maps/Route114/scripts.pory"
Route114_Text_ExplainRoar:
# 164 "data/maps/Route114/scripts.pory"
	.string "TM05 contains ROAR.\n"
# 165 "data/maps/Route114/scripts.pory"
	.string "A ROAR sends POKéMON scurrying.$"
# 166 "data/maps/Route114/scripts.pory"

# 167 "data/maps/Route114/scripts.pory"
Route114_Text_Poochyena:
# 168 "data/maps/Route114/scripts.pory"
	.string "Bow! Bowwow!$"
# 169 "data/maps/Route114/scripts.pory"

# 170 "data/maps/Route114/scripts.pory"
Route114_Text_MeteorFallsSign:
# 171 "data/maps/Route114/scripts.pory"
	.string "METEOR FALLS\n"
# 172 "data/maps/Route114/scripts.pory"
	.string "RUSTBORO CITY THROUGH HERE$"
# 173 "data/maps/Route114/scripts.pory"

# 174 "data/maps/Route114/scripts.pory"
Route114_Text_FossilManiacsHouseSign:
# 175 "data/maps/Route114/scripts.pory"
	.string "FOSSIL MANIAC'S HOUSE\n"
# 176 "data/maps/Route114/scripts.pory"
	.string "“Fossils gratefully accepted!”$"
# 177 "data/maps/Route114/scripts.pory"

# 178 "data/maps/Route114/scripts.pory"
Route114_Text_LanettesHouse:
# 179 "data/maps/Route114/scripts.pory"
	.string "LANETTE'S HOUSE$"

Route114_MapScripts::
# 184 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_OnTransition
# 185 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route114_OnResume
	.byte 0


Route114_OnTransition::
# 193 "data/maps/Route114/scripts.pory"
	goto_if_set 0x29, Route114_OnTransition_2
Route114_OnTransition_1:
# 198 "data/maps/Route114/scripts.pory"
	goto_if_set 0x2B, Route114_OnTransition_6
Route114_OnTransition_4:
# 202 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route114_OnTransition_9
	return

Route114_OnTransition_2:
# 194 "data/maps/Route114/scripts.pory"
	setmetatile 30, 39, 0x001, 0
# 195 "data/maps/Route114/scripts.pory"
	setmetatile 30, 38, 0x133, 1
	goto Route114_OnTransition_1

Route114_OnTransition_5:
# 199 "data/maps/Route114/scripts.pory"
	setobjectxyperm LOCALID_NOIBAT, 20, 62
	goto Route114_OnTransition_4

Route114_OnTransition_6:
# 198 "data/maps/Route114/scripts.pory"
	goto_if_unset 0x2A, Route114_OnTransition_5
	goto Route114_OnTransition_4

Route114_OnTransition_9:
# 203 "data/maps/Route114/scripts.pory"
	setobjectxyperm LOCALID_DRAGONSTATUE1, 5, 48
	return


Route114_OnResume::
# 209 "data/maps/Route114/scripts.pory"
	goto_if_set 0x29, Route114_OnResume_2
Route114_OnResume_1:
# 214 "data/maps/Route114/scripts.pory"
	goto_if_set 0x2B, Route114_OnResume_6
Route114_OnResume_4:
# 218 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route114_OnResume_9
	return

Route114_OnResume_2:
# 210 "data/maps/Route114/scripts.pory"
	setmetatile 30, 39, 0x001, 0
# 211 "data/maps/Route114/scripts.pory"
	setmetatile 30, 38, 0x133, 1
	goto Route114_OnResume_1

Route114_OnResume_5:
# 215 "data/maps/Route114/scripts.pory"
	setobjectxyperm LOCALID_NOIBAT, 20, 62
	goto Route114_OnResume_4

Route114_OnResume_6:
# 214 "data/maps/Route114/scripts.pory"
	goto_if_unset 0x2A, Route114_OnResume_5
	goto Route114_OnResume_4

Route114_OnResume_9:
# 219 "data/maps/Route114/scripts.pory"
	setobjectxyperm LOCALID_DRAGONSTATUE1, 5, 48
	return


EventScript_CreateIceBridge::
# 225 "data/maps/Route114/scripts.pory"
	lockall
# 226 "data/maps/Route114/scripts.pory"
	checkspecies SPECIES_EEVEE
# 227 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_CreateIceBridge_2
# 242 "data/maps/Route114/scripts.pory"
	checkspecies SPECIES_GLACEON
# 243 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_CreateIceBridge_7
EventScript_CreateIceBridge_1:
# 259 "data/maps/Route114/scripts.pory"
	releaseall
	end

EventScript_CreateIceBridge_2:
# 228 "data/maps/Route114/scripts.pory"
	msgbox MakeBridgeEevee, MSGBOX_YESNO
# 229 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_CreateIceBridge_5
	goto EventScript_CreateIceBridge_1

EventScript_CreateIceBridge_5:
# 230 "data/maps/Route114/scripts.pory"
	delay 16
# 231 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
# 232 "data/maps/Route114/scripts.pory"
	waitmoncry
# 233 "data/maps/Route114/scripts.pory"
	delay 8
# 234 "data/maps/Route114/scripts.pory"
	playse SE_M_BLIZZARD2
# 235 "data/maps/Route114/scripts.pory"
	delay 16
# 236 "data/maps/Route114/scripts.pory"
	callnative CreateIceBridge
# 237 "data/maps/Route114/scripts.pory"
	delay 16
	goto EventScript_CreateIceBridge_1

EventScript_CreateIceBridge_7:
# 244 "data/maps/Route114/scripts.pory"
	msgbox MakeBridgeGlaceon, MSGBOX_YESNO
# 245 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_CreateIceBridge_9
	goto EventScript_CreateIceBridge_1

EventScript_CreateIceBridge_9:
# 246 "data/maps/Route114/scripts.pory"
	delay 16
# 247 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_GLACEON, CRY_MODE_NORMAL
# 248 "data/maps/Route114/scripts.pory"
	waitmoncry
# 249 "data/maps/Route114/scripts.pory"
	delay 8
# 250 "data/maps/Route114/scripts.pory"
	playse SE_M_BLIZZARD2
# 251 "data/maps/Route114/scripts.pory"
	delay 16
# 252 "data/maps/Route114/scripts.pory"
	callnative CreateIceBridge
# 253 "data/maps/Route114/scripts.pory"
	delay 16
	goto EventScript_CreateIceBridge_1


EventScript_WaterIsIcy::
# 265 "data/maps/Route114/scripts.pory"
	lock
# 266 "data/maps/Route114/scripts.pory"
	msgbox EventScript_WaterIsIcy_Text_0
# 267 "data/maps/Route114/scripts.pory"
	release
	end


Route114_EventScript_FirstFreezeDry::
# 272 "data/maps/Route114/scripts.pory"
	lock
# 273 "data/maps/Route114/scripts.pory"
	goto_if_unset FLAG_FREEZE_DRY_DISCOVERED, Route114_EventScript_FirstFreezeDry_2
Route114_EventScript_FirstFreezeDry_1:
# 321 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_EventScript_FirstFreezeDry_2:
# 274 "data/maps/Route114/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_EEVEE
# 275 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonSpecies
# 276 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_FirstFreezeDry_4
# 315 "data/maps/Route114/scripts.pory"
	msgbox EventScript_WaterIsIcy_Text_0
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_4:
# 277 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_0
# 279 "data/maps/Route114/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Route114_EventScript_FirstFreezeDry_Text_1, Route114_EventScript_FirstFreezeDry_Text_2, Route114_EventScript_FirstFreezeDry_Text_3, Route114_EventScript_FirstFreezeDry_Text_4
# 280 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route114_EventScript_FirstFreezeDry_7
# 284 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route114_EventScript_FirstFreezeDry_8
# 288 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route114_EventScript_FirstFreezeDry_9
# 292 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route114_EventScript_FirstFreezeDry_10
# 311 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_9
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_7:
# 281 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_5
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_8:
# 285 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_6
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_9:
# 289 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_7
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_10:
# 293 "data/maps/Route114/scripts.pory"
	delay 16
# 294 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
# 295 "data/maps/Route114/scripts.pory"
	waitmoncry
# 296 "data/maps/Route114/scripts.pory"
	delay 8
# 297 "data/maps/Route114/scripts.pory"
	playse SE_M_BLIZZARD2
# 298 "data/maps/Route114/scripts.pory"
	delay 16
# 299 "data/maps/Route114/scripts.pory"
	setmetatile 12, 13, 0x135, 0
# 300 "data/maps/Route114/scripts.pory"
	setmetatile 11, 13, 0x135, 0
# 301 "data/maps/Route114/scripts.pory"
	setmetatile 10, 13, 0x135, 0
# 302 "data/maps/Route114/scripts.pory"
	setmetatile 9, 13, 0x135, 0
# 303 "data/maps/Route114/scripts.pory"
	setflag FLAG_FREEZE_DRY_DISCOVERED
# 304 "data/maps/Route114/scripts.pory"
	removeobject 6
# 305 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 306 "data/maps/Route114/scripts.pory"
	delay 16
# 307 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_8
	goto Route114_EventScript_FirstFreezeDry_1


Route114_Trigger_Bridge1Surf::
# 330 "data/maps/Route114/scripts.pory"
	lockall
# 331 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_X, 11
# 332 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_Y, 13
# 333 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, IsBridgeBuilt
# 334 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_Trigger_Bridge1Surf_2
# 341 "data/maps/Route114/scripts.pory"
	setmetatile 12, 13, 0x1B6, 0
# 342 "data/maps/Route114/scripts.pory"
	setmetatile 11, 13, 0x000, 0
# 343 "data/maps/Route114/scripts.pory"
	setmetatile 10, 13, 0x000, 0
# 344 "data/maps/Route114/scripts.pory"
	setmetatile 9, 13, 0x1A2, 0
Route114_Trigger_Bridge1Surf_1:
# 347 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 348 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_Trigger_Bridge1Surf_2:
# 335 "data/maps/Route114/scripts.pory"
	setmetatile 12, 13, 0x135, 1
# 336 "data/maps/Route114/scripts.pory"
	setmetatile 11, 13, 0x135, 1
# 337 "data/maps/Route114/scripts.pory"
	setmetatile 10, 13, 0x135, 1
# 338 "data/maps/Route114/scripts.pory"
	setmetatile 9, 13, 0x135, 1
	goto Route114_Trigger_Bridge1Surf_1


Route114_Trigger_Bridge1Land::
# 355 "data/maps/Route114/scripts.pory"
	lockall
# 356 "data/maps/Route114/scripts.pory"
	releaseall
	end


Route114_Trigger_Bridge2Surf::
# 365 "data/maps/Route114/scripts.pory"
	lockall
# 366 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_X, 3
# 367 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_Y, 17
# 368 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, IsBridgeBuilt
# 369 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_Trigger_Bridge2Surf_2
# 375 "data/maps/Route114/scripts.pory"
	setmetatile 12, 16, 0x1E3, 0
# 376 "data/maps/Route114/scripts.pory"
	setmetatile 11, 17, 0x000, 0
# 377 "data/maps/Route114/scripts.pory"
	setmetatile 10, 18, 0x000, 0
Route114_Trigger_Bridge2Surf_1:
# 380 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 381 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_Trigger_Bridge2Surf_2:
# 370 "data/maps/Route114/scripts.pory"
	setmetatile 3, 16, 0x135, 1
# 371 "data/maps/Route114/scripts.pory"
	setmetatile 3, 17, 0x135, 1
# 372 "data/maps/Route114/scripts.pory"
	setmetatile 3, 18, 0x135, 1
	goto Route114_Trigger_Bridge2Surf_1


Route114_Trigger_Bridge2Land::
# 388 "data/maps/Route114/scripts.pory"
	lockall
# 389 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_X, 3
# 390 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_Y, 17
# 391 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, IsBridgeBuilt
# 392 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_Trigger_Bridge2Land_2
# 398 "data/maps/Route114/scripts.pory"
	setmetatile 3, 16, 0x1E3, 1
# 399 "data/maps/Route114/scripts.pory"
	setmetatile 3, 17, 0x000, 1
# 400 "data/maps/Route114/scripts.pory"
	setmetatile 3, 18, 0x000, 1
Route114_Trigger_Bridge2Land_1:
# 403 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 404 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_Trigger_Bridge2Land_2:
# 393 "data/maps/Route114/scripts.pory"
	setmetatile 3, 16, 0x135, 0
# 394 "data/maps/Route114/scripts.pory"
	setmetatile 3, 17, 0x135, 0
# 395 "data/maps/Route114/scripts.pory"
	setmetatile 3, 18, 0x135, 0
	goto Route114_Trigger_Bridge2Land_1


Route114_Trigger_Bridge3Surf::
# 413 "data/maps/Route114/scripts.pory"
	lockall
# 414 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_X, 8
# 415 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_Y, 27
# 416 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, IsBridgeBuilt
# 417 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_Trigger_Bridge3Surf_2
# 422 "data/maps/Route114/scripts.pory"
	setmetatile 8, 27, 0x1A2, 0
# 423 "data/maps/Route114/scripts.pory"
	setmetatile 9, 27, 0x1B6, 0
Route114_Trigger_Bridge3Surf_1:
# 426 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 427 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_Trigger_Bridge3Surf_2:
# 418 "data/maps/Route114/scripts.pory"
	setmetatile 8, 27, 0x135, 1
# 419 "data/maps/Route114/scripts.pory"
	setmetatile 9, 27, 0x135, 1
	goto Route114_Trigger_Bridge3Surf_1


Route114_Trigger_Bridge3Land::
# 434 "data/maps/Route114/scripts.pory"
	lockall
# 435 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_X, 8
# 436 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_Y, 27
# 437 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, IsBridgeBuilt
# 438 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_Trigger_Bridge3Land_2
# 443 "data/maps/Route114/scripts.pory"
	setmetatile 8, 27, 0x1A2, 1
# 444 "data/maps/Route114/scripts.pory"
	setmetatile 9, 27, 0x1B6, 1
Route114_Trigger_Bridge3Land_1:
# 447 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 448 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_Trigger_Bridge3Land_2:
# 439 "data/maps/Route114/scripts.pory"
	setmetatile 8, 27, 0x135, 0
# 440 "data/maps/Route114/scripts.pory"
	setmetatile 9, 27, 0x135, 0
	goto Route114_Trigger_Bridge3Land_1


Route114_EventScript_SecretDoor::
# 454 "data/maps/Route114/scripts.pory"
	lockall
# 455 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_BERRY_KEY, Route114_EventScript_SecretDoor_2
# 471 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_SecretDoor_Text_0
# 472 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_EventScript_SecretDoor_1:
# 475 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_EventScript_SecretDoor_2:
# 456 "data/maps/Route114/scripts.pory"
	msgbox OpenDoor, MSGBOX_YESNO
# 457 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route114_EventScript_SecretDoor_5
# 467 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_EventScript_SecretDoor_5:
# 458 "data/maps/Route114/scripts.pory"
	playse SE_DOOR
# 459 "data/maps/Route114/scripts.pory"
	waitse
# 460 "data/maps/Route114/scripts.pory"
	setmetatile 30, 39, 0x001, 0
# 461 "data/maps/Route114/scripts.pory"
	setmetatile 30, 38, 0x133, 1
# 462 "data/maps/Route114/scripts.pory"
	removeobject 7
# 463 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 464 "data/maps/Route114/scripts.pory"
	setflag 0x29
	goto Route114_EventScript_SecretDoor_1


Route114_EventScript_BerryPedestal::
# 480 "data/maps/Route114/scripts.pory"
	lockall
# 481 "data/maps/Route114/scripts.pory"
	goto_if_unset 0x2B, Route114_EventScript_BerryPedestal_2
# 500 "data/maps/Route114/scripts.pory"
	goto_if_unset 0x2A, Route114_EventScript_BerryPedestal_3
# 503 "data/maps/Route114/scripts.pory"
	goto_if_set 0x2A, Route114_EventScript_BerryPedestal_4
Route114_EventScript_BerryPedestal_1:
# 506 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_EventScript_BerryPedestal_2:
# 482 "data/maps/Route114/scripts.pory"
	checkitem ITEM_PERSIM_BERRY, 1
# 483 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_BerryPedestal_8
# 494 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_BerryPedestal_Text_0
	goto Route114_EventScript_BerryPedestal_1

Route114_EventScript_BerryPedestal_3:
# 501 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_NoibatJoin
	goto Route114_EventScript_BerryPedestal_1

Route114_EventScript_BerryPedestal_4:
# 504 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_BerryPedestal_Text_1
	goto Route114_EventScript_BerryPedestal_1

Route114_EventScript_BerryPedestal_8:
# 484 "data/maps/Route114/scripts.pory"
	msgbox PlaceItem, MSGBOX_YESNO
# 485 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route114_EventScript_BerryPedestal_11
	goto Route114_EventScript_BerryPedestal_1

Route114_EventScript_BerryPedestal_11:
# 486 "data/maps/Route114/scripts.pory"
	chooseitem
# 487 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_ITEM_ID, ITEM_PERSIM_BERRY, Route114_EventScript_NoibatBerry
# 488 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WrongItem
	goto Route114_EventScript_BerryPedestal_1


Route114_EventScript_NoibatBerry::
# 511 "data/maps/Route114/scripts.pory"
	removeitem ITEM_PERSIM_BERRY
# 512 "data/maps/Route114/scripts.pory"
	delay 30
# 513 "data/maps/Route114/scripts.pory"
	applymovement LOCALID_NOIBAT, NoibatMove
# 514 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_NOIBAT, CRY_MODE_NORMAL
# 515 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 516 "data/maps/Route114/scripts.pory"
	setobjectxyperm LOCALID_NOIBAT, 20, 62
# 517 "data/maps/Route114/scripts.pory"
	delay 60
# 518 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_NoibatBerry_Text_0
# 520 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_NOIBAT, CRY_MODE_NORMAL
# 521 "data/maps/Route114/scripts.pory"
	delay 16
# 522 "data/maps/Route114/scripts.pory"
	setflag 0x2B
# 523 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_NoibatJoin
	return


Route114_EventScript_NoibatJoin::
# 527 "data/maps/Route114/scripts.pory"
	lockall
# 528 "data/maps/Route114/scripts.pory"
	applymovement LOCALID_NOIBAT, NoibatFacePlayer
# 529 "data/maps/Route114/scripts.pory"
	checkitem ITEM_POKE_BALL, 1
# 530 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_NoibatJoin_2
# 546 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_NoibatJoin_Text_1
Route114_EventScript_NoibatJoin_1:
# 550 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_EventScript_NoibatJoin_2:
# 531 "data/maps/Route114/scripts.pory"
	msgbox NoibatJoin, MSGBOX_YESNO
# 532 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route114_EventScript_NoibatJoin_5
	goto Route114_EventScript_NoibatJoin_1

Route114_EventScript_NoibatJoin_5:
# 533 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_NOIBAT, CRY_MODE_NORMAL
# 534 "data/maps/Route114/scripts.pory"
	delay 16
# 535 "data/maps/Route114/scripts.pory"
	removeobject 5
# 536 "data/maps/Route114/scripts.pory"
	delay 16
# 537 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 538 "data/maps/Route114/scripts.pory"
	setflag 0x2A
# 539 "data/maps/Route114/scripts.pory"
	givemon SPECIES_NOIBAT, 5, ITEM_NONE, move1 = MOVE_ABSORB, move2 = MOVE_DRAGON_BREATH, move3 = MOVE_ROOST, move4 = MOVE_LEECH_LIFE
# 540 "data/maps/Route114/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 541 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_NoibatJoin_Text_0
# 542 "data/maps/Route114/scripts.pory"
	call NicknameNoibat
	goto Route114_EventScript_NoibatJoin_1


Route114_EventScript_WrongItem::
# 555 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_WrongItem_Text_0
# 556 "data/maps/Route114/scripts.pory"
	releaseall
	end


NicknameNoibat::
# 561 "data/maps/Route114/scripts.pory"
	msgbox NicknameNoibat_Text_0, MSGBOX_YESNO
# 562 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameNoibat_1
# 567 "data/maps/Route114/scripts.pory"
	releaseall
	end

NicknameNoibat_1:
# 563 "data/maps/Route114/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 564 "data/maps/Route114/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


Route114_EventScript_DragonStatue1::
# 573 "data/maps/Route114/scripts.pory"
	lockall
# 574 "data/maps/Route114/scripts.pory"
	goto_if_unset 0x2A, Route114_EventScript_DragonStatue1_2
# 582 "data/maps/Route114/scripts.pory"
	goto_if_unset FLAG_DRAGON_BREATH_DISCOVERED, Route114_EventScript_DragonStatue1_3
# 631 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_DRAGON_BREATH_DISCOVERED, Route114_EventScript_DragonStatue1_9
Route114_EventScript_DragonStatue1_7:
# 635 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_DRAGON_BREATH_DISCOVERED, Route114_EventScript_DragonStatue1_6
Route114_EventScript_DragonStatue1_1:
# 663 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_EventScript_DragonStatue1_2:
# 575 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_DragonStatue1_Text_0
# 578 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_EventScript_DragonStatue1_3:
# 583 "data/maps/Route114/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_NOIBAT
# 584 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonSpecies
# 585 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_DragonStatue1_14
# 624 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_DragonStatue1_Text_0
	goto Route114_EventScript_DragonStatue1_1

Route114_EventScript_DragonStatue1_4:
# 632 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_DragonStatue1_Text_10
	goto Route114_EventScript_DragonStatue1_1

Route114_EventScript_DragonStatue1_5:
# 636 "data/maps/Route114/scripts.pory"
	checkspecies SPECIES_NOIBAT
# 637 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_DragonStatue1_17
# 646 "data/maps/Route114/scripts.pory"
	checkspecies SPECIES_NOIVERN
# 647 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_DragonStatue1_28
# 657 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_DragonStatue1_Text_11
	goto Route114_EventScript_DragonStatue1_1

Route114_EventScript_DragonStatue1_6:
# 635 "data/maps/Route114/scripts.pory"
	goto_if_unset FLAG_TEMP_1, Route114_EventScript_DragonStatue1_5
	goto Route114_EventScript_DragonStatue1_1

Route114_EventScript_DragonStatue1_9:
# 631 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route114_EventScript_DragonStatue1_4
	goto Route114_EventScript_DragonStatue1_7

Route114_EventScript_DragonStatue1_14:
# 586 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_DragonStatue1_Text_1
# 588 "data/maps/Route114/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Route114_EventScript_DragonStatue1_Text_2, Route114_EventScript_DragonStatue1_Text_3, Route114_EventScript_DragonStatue1_Text_4, Route114_EventScript_DragonStatue1_Text_5
# 589 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route114_EventScript_DragonStatue1_20
# 595 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route114_EventScript_DragonStatue1_21
# 600 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route114_EventScript_DragonStatue1_22
# 605 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route114_EventScript_DragonStatue1_23
	goto Route114_EventScript_DragonStatue1_1

Route114_EventScript_DragonStatue1_17:
# 638 "data/maps/Route114/scripts.pory"
	msgbox MoveStatueNoibat, MSGBOX_YESNO
# 639 "data/maps/Route114/scripts.pory"
	delay 16
# 640 "data/maps/Route114/scripts.pory"
	setflag FLAG_TEMP_1
# 641 "data/maps/Route114/scripts.pory"
	applymovement LOCALID_DRAGONSTATUE1, StatueShift
# 642 "data/maps/Route114/scripts.pory"
	setobjectxyperm LOCALID_DRAGONSTATUE1, 5, 48
# 643 "data/maps/Route114/scripts.pory"
	delay 16
	goto Route114_EventScript_DragonStatue1_1

Route114_EventScript_DragonStatue1_20:
# 590 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_DragonStatue1_Text_6
	goto Route114_EventScript_DragonStatue1_1

Route114_EventScript_DragonStatue1_21:
# 596 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_DragonStatue1_Text_7
	goto Route114_EventScript_DragonStatue1_1

Route114_EventScript_DragonStatue1_22:
# 601 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_DragonStatue1_Text_8
	goto Route114_EventScript_DragonStatue1_1

Route114_EventScript_DragonStatue1_23:
# 606 "data/maps/Route114/scripts.pory"
	delay 16
# 607 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_NOIBAT, CRY_MODE_NORMAL
# 608 "data/maps/Route114/scripts.pory"
	waitmoncry
# 609 "data/maps/Route114/scripts.pory"
	delay 8
# 610 "data/maps/Route114/scripts.pory"
	playse SE_M_DRAGON_RAGE
# 611 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_DragonStatue1_Text_9
# 614 "data/maps/Route114/scripts.pory"
	setflag FLAG_DRAGON_BREATH_DISCOVERED
# 615 "data/maps/Route114/scripts.pory"
	setflag FLAG_TEMP_1
# 616 "data/maps/Route114/scripts.pory"
	applymovement LOCALID_DRAGONSTATUE1, StatueShift
# 617 "data/maps/Route114/scripts.pory"
	setobjectxyperm LOCALID_DRAGONSTATUE1, 5, 48
# 618 "data/maps/Route114/scripts.pory"
	delay 16
	goto Route114_EventScript_DragonStatue1_1

Route114_EventScript_DragonStatue1_28:
# 648 "data/maps/Route114/scripts.pory"
	msgbox MoveStatueNoivern, MSGBOX_YESNO
# 649 "data/maps/Route114/scripts.pory"
	delay 16
# 650 "data/maps/Route114/scripts.pory"
	setflag FLAG_TEMP_1
# 651 "data/maps/Route114/scripts.pory"
	applymovement LOCALID_DRAGONSTATUE1, StatueShift
# 652 "data/maps/Route114/scripts.pory"
	setobjectxyperm LOCALID_DRAGONSTATUE1, 5, 48
# 653 "data/maps/Route114/scripts.pory"
	delay 16
	goto Route114_EventScript_DragonStatue1_1


# 667 "data/maps/Route114/scripts.pory"
NoibatMove:
# 668 "data/maps/Route114/scripts.pory"
	emote_exclamation_mark
# 669 "data/maps/Route114/scripts.pory"
	delay_16
# 670 "data/maps/Route114/scripts.pory"
	walk_left
# 670 "data/maps/Route114/scripts.pory"
	walk_left
# 670 "data/maps/Route114/scripts.pory"
	walk_left
# 671 "data/maps/Route114/scripts.pory"
	face_up
	step_end

# 674 "data/maps/Route114/scripts.pory"
NoibatFacePlayer:
# 675 "data/maps/Route114/scripts.pory"
	delay_8
# 676 "data/maps/Route114/scripts.pory"
	face_up
	step_end

# 679 "data/maps/Route114/scripts.pory"
StatueShift:
# 680 "data/maps/Route114/scripts.pory"
	walk_left
	step_end

EventScript_WaterIsIcy_Text_0:
# 266 "data/maps/Route114/scripts.pory"
	.string "The water here is icy.$"

Route114_EventScript_FirstFreezeDry_Text_0:
# 277 "data/maps/Route114/scripts.pory"
	.string "The water here is icy.\n"
	.string "Have Eevee use a move?$"

Route114_EventScript_FirstFreezeDry_Text_1:
# 279 "data/maps/Route114/scripts.pory"
	.string "Mirror Move$"

Route114_EventScript_FirstFreezeDry_Text_2:
# 279 "data/maps/Route114/scripts.pory"
	.string "Helping Hand$"

Route114_EventScript_FirstFreezeDry_Text_3:
# 279 "data/maps/Route114/scripts.pory"
	.string "Bite$"

Route114_EventScript_FirstFreezeDry_Text_4:
# 279 "data/maps/Route114/scripts.pory"
	.string "Freeze Dry$"

Route114_EventScript_FirstFreezeDry_Text_5:
# 281 "data/maps/Route114/scripts.pory"
	.string "Eevee used the water's reflection to do\n"
	.string "its hair.$"

Route114_EventScript_FirstFreezeDry_Text_6:
# 285 "data/maps/Route114/scripts.pory"
	.string "Eevee used the Help action. You\n"
	.string "gain advantage on your next d20 test!$"

Route114_EventScript_FirstFreezeDry_Text_7:
# 289 "data/maps/Route114/scripts.pory"
	.string "Eevee bit the water.\n"
	.string "The water did not respond.$"

Route114_EventScript_FirstFreezeDry_Text_8:
# 307 "data/maps/Route114/scripts.pory"
	.string "Eevee made a bridge with Freeze Dry!$"

Route114_EventScript_FirstFreezeDry_Text_9:
# 311 "data/maps/Route114/scripts.pory"
	.string "It didn't seem to have any effect.$"

Route114_EventScript_SecretDoor_Text_0:
# 471 "data/maps/Route114/scripts.pory"
	.string "The gate is locked.$"

Route114_EventScript_BerryPedestal_Text_0:
# 494 "data/maps/Route114/scripts.pory"
	.string "A stone pedestal. It appears to be\n"
	.string "stained with juice.$"

Route114_EventScript_BerryPedestal_Text_1:
# 504 "data/maps/Route114/scripts.pory"
	.string "A stone pedestal, stained with juice.$"

Route114_EventScript_NoibatBerry_Text_0:
# 518 "data/maps/Route114/scripts.pory"
	.string "A Noibat perches on the pedestal\n"
	.string "and happily eats the berry.$"

Route114_EventScript_NoibatJoin_Text_0:
# 541 "data/maps/Route114/scripts.pory"
	.string "Noibat joined the party!$"

Route114_EventScript_NoibatJoin_Text_1:
# 546 "data/maps/Route114/scripts.pory"
	.string "Noibat eyes you closely. It seems\n"
	.string "like it wants to join your party, but\l"
	.string "you don't have any Poké Balls.$"

Route114_EventScript_WrongItem_Text_0:
# 555 "data/maps/Route114/scripts.pory"
	.string "Nothing happened.$"

NicknameNoibat_Text_0:
# 561 "data/maps/Route114/scripts.pory"
	.string "Give Noibat a nickname?$"

Route114_EventScript_DragonStatue1_Text_0:
# 575 "data/maps/Route114/scripts.pory"
	.string "A menacing dragon statue blocks the\n"
	.string "path to Meteor Falls. Its eyes are\l"
	.string "dull and grey.$"

Route114_EventScript_DragonStatue1_Text_1:
# 586 "data/maps/Route114/scripts.pory"
	.string "A dragon statue blocks the path.\n"
	.string "Have Noibat use a move?$"

Route114_EventScript_DragonStatue1_Text_2:
# 588 "data/maps/Route114/scripts.pory"
	.string "Absorb$"

Route114_EventScript_DragonStatue1_Text_3:
# 588 "data/maps/Route114/scripts.pory"
	.string "Dragon Breath$"

Route114_EventScript_DragonStatue1_Text_4:
# 588 "data/maps/Route114/scripts.pory"
	.string "Roost$"

Route114_EventScript_DragonStatue1_Text_5:
# 588 "data/maps/Route114/scripts.pory"
	.string "Leech Life$"

Route114_EventScript_DragonStatue1_Text_6:
# 590 "data/maps/Route114/scripts.pory"
	.string "Noibat tried to absorb the statue.\n"
	.string "Even though the statue is made of\l"
	.string "rock, it had no effect.$"

Route114_EventScript_DragonStatue1_Text_7:
# 596 "data/maps/Route114/scripts.pory"
	.string "Noibat found a nook in the statue and\n"
	.string "took a nap.$"

Route114_EventScript_DragonStatue1_Text_8:
# 601 "data/maps/Route114/scripts.pory"
	.string "Noibat ran a blood test on the statue.\p"
	.string "Its white blood cell count is a bit low.$"

Route114_EventScript_DragonStatue1_Text_9:
# 611 "data/maps/Route114/scripts.pory"
	.string "With proof of Noibat's draconic power,\n"
	.string "the statue's eyes glow red, and it\l"
	.string "shifts aside.$"

Route114_EventScript_DragonStatue1_Text_10:
# 632 "data/maps/Route114/scripts.pory"
	.string "The statue's eyes are glowing red.$"

Route114_EventScript_DragonStatue1_Text_11:
# 657 "data/maps/Route114/scripts.pory"
	.string "A dragon statue blocks the path.$"

MoveStatueNoibat::
# 683 "data/maps/Route114/scripts.pory"
	.string "A dragon statue blocks the path.\p"
	.string "Have Noibat use Dragon Breath?$"

MoveStatueNoivern::
# 688 "data/maps/Route114/scripts.pory"
	.string "A dragon statue blocks the path.\p"
	.string "Have Noivern use Dragon Pulse?$"

NoibatJoin::
# 693 "data/maps/Route114/scripts.pory"
	.string "Noibat eyes you closely. It seems\n"
	.string "like it wants to join your party.\p"
	.string "Use a Poké Ball?$"

MakeBridgeEevee::
# 699 "data/maps/Route114/scripts.pory"
	.string "The water here is icy.\n"
	.string "Have Eevee use Freeze Dry?$"

MakeBridgeGlaceon::
# 704 "data/maps/Route114/scripts.pory"
	.string "The water here is icy.\n"
	.string "Have Glaceon use Sheer Cold?$"

OpenDoor::
# 709 "data/maps/Route114/scripts.pory"
	.string "The gate is locked. Try the Berry Key?$"

PlaceItem::
# 713 "data/maps/Route114/scripts.pory"
	.string "A stone pedestal. It appears to be\n"
	.string "stained with juice.\p"
	.string "Place an item?$"

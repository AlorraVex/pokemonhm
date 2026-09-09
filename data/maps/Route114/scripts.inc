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
# 191 "data/maps/Route114/scripts.pory"
	goto_if_set 0x29, Route114_OnTransition_1
	return

Route114_OnTransition_1:
# 192 "data/maps/Route114/scripts.pory"
	setmetatile 30, 39, 0x001, 0
	return


Route114_OnResume::
# 197 "data/maps/Route114/scripts.pory"
	goto_if_set 0x29, Route114_OnResume_1
	return

Route114_OnResume_1:
# 198 "data/maps/Route114/scripts.pory"
	setmetatile 30, 39, 0x001, 0
	return


EventScript_CreateIceBridge::
# 203 "data/maps/Route114/scripts.pory"
	lockall
# 204 "data/maps/Route114/scripts.pory"
	checkspecies SPECIES_EEVEE
# 205 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_CreateIceBridge_2
# 220 "data/maps/Route114/scripts.pory"
	checkspecies SPECIES_GLACEON
# 221 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_CreateIceBridge_7
EventScript_CreateIceBridge_1:
# 237 "data/maps/Route114/scripts.pory"
	releaseall
	end

EventScript_CreateIceBridge_2:
# 206 "data/maps/Route114/scripts.pory"
	msgbox MakeBridgeEevee, MSGBOX_YESNO
# 207 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_CreateIceBridge_5
	goto EventScript_CreateIceBridge_1

EventScript_CreateIceBridge_5:
# 208 "data/maps/Route114/scripts.pory"
	delay 16
# 209 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
# 210 "data/maps/Route114/scripts.pory"
	waitmoncry
# 211 "data/maps/Route114/scripts.pory"
	delay 8
# 212 "data/maps/Route114/scripts.pory"
	playse SE_M_BLIZZARD2
# 213 "data/maps/Route114/scripts.pory"
	delay 16
# 214 "data/maps/Route114/scripts.pory"
	callnative CreateIceBridge
# 215 "data/maps/Route114/scripts.pory"
	delay 16
	goto EventScript_CreateIceBridge_1

EventScript_CreateIceBridge_7:
# 222 "data/maps/Route114/scripts.pory"
	msgbox MakeBridgeGlaceon, MSGBOX_YESNO
# 223 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_CreateIceBridge_9
	goto EventScript_CreateIceBridge_1

EventScript_CreateIceBridge_9:
# 224 "data/maps/Route114/scripts.pory"
	delay 16
# 225 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_GLACEON, CRY_MODE_NORMAL
# 226 "data/maps/Route114/scripts.pory"
	waitmoncry
# 227 "data/maps/Route114/scripts.pory"
	delay 8
# 228 "data/maps/Route114/scripts.pory"
	playse SE_M_BLIZZARD2
# 229 "data/maps/Route114/scripts.pory"
	delay 16
# 230 "data/maps/Route114/scripts.pory"
	callnative CreateIceBridge
# 231 "data/maps/Route114/scripts.pory"
	delay 16
	goto EventScript_CreateIceBridge_1


EventScript_WaterIsIcy::
# 243 "data/maps/Route114/scripts.pory"
	lock
# 244 "data/maps/Route114/scripts.pory"
	msgbox EventScript_WaterIsIcy_Text_0
# 245 "data/maps/Route114/scripts.pory"
	release
	end


Route114_EventScript_FirstFreezeDry::
# 250 "data/maps/Route114/scripts.pory"
	lock
# 251 "data/maps/Route114/scripts.pory"
	goto_if_unset FLAG_FREEZE_DRY_DISCOVERED, Route114_EventScript_FirstFreezeDry_2
Route114_EventScript_FirstFreezeDry_1:
# 299 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_EventScript_FirstFreezeDry_2:
# 252 "data/maps/Route114/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_EEVEE
# 253 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonSpecies
# 254 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_FirstFreezeDry_4
# 293 "data/maps/Route114/scripts.pory"
	msgbox EventScript_WaterIsIcy_Text_0
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_4:
# 255 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_0
# 257 "data/maps/Route114/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Route114_EventScript_FirstFreezeDry_Text_1, Route114_EventScript_FirstFreezeDry_Text_2, Route114_EventScript_FirstFreezeDry_Text_3, Route114_EventScript_FirstFreezeDry_Text_4
# 258 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route114_EventScript_FirstFreezeDry_7
# 262 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route114_EventScript_FirstFreezeDry_8
# 266 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route114_EventScript_FirstFreezeDry_9
# 270 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route114_EventScript_FirstFreezeDry_10
# 289 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_9
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_7:
# 259 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_5
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_8:
# 263 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_6
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_9:
# 267 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_7
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_10:
# 271 "data/maps/Route114/scripts.pory"
	delay 16
# 272 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
# 273 "data/maps/Route114/scripts.pory"
	waitmoncry
# 274 "data/maps/Route114/scripts.pory"
	delay 8
# 275 "data/maps/Route114/scripts.pory"
	playse SE_M_BLIZZARD2
# 276 "data/maps/Route114/scripts.pory"
	delay 16
# 277 "data/maps/Route114/scripts.pory"
	setmetatile 12, 13, 0x135, 0
# 278 "data/maps/Route114/scripts.pory"
	setmetatile 11, 13, 0x135, 0
# 279 "data/maps/Route114/scripts.pory"
	setmetatile 10, 13, 0x135, 0
# 280 "data/maps/Route114/scripts.pory"
	setmetatile 9, 13, 0x135, 0
# 281 "data/maps/Route114/scripts.pory"
	setflag FLAG_FREEZE_DRY_DISCOVERED
# 282 "data/maps/Route114/scripts.pory"
	removeobject 6
# 283 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 284 "data/maps/Route114/scripts.pory"
	delay 16
# 285 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_8
	goto Route114_EventScript_FirstFreezeDry_1


Route114_Trigger_Bridge1Surf::
# 308 "data/maps/Route114/scripts.pory"
	lockall
# 309 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_X, 11
# 310 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_Y, 13
# 311 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, IsBridgeBuilt
# 312 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_Trigger_Bridge1Surf_2
# 319 "data/maps/Route114/scripts.pory"
	setmetatile 12, 13, 0x1B6, 0
# 320 "data/maps/Route114/scripts.pory"
	setmetatile 11, 13, 0x000, 0
# 321 "data/maps/Route114/scripts.pory"
	setmetatile 10, 13, 0x000, 0
# 322 "data/maps/Route114/scripts.pory"
	setmetatile 9, 13, 0x1A2, 0
Route114_Trigger_Bridge1Surf_1:
# 325 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 326 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_Trigger_Bridge1Surf_2:
# 313 "data/maps/Route114/scripts.pory"
	setmetatile 12, 13, 0x135, 1
# 314 "data/maps/Route114/scripts.pory"
	setmetatile 11, 13, 0x135, 1
# 315 "data/maps/Route114/scripts.pory"
	setmetatile 10, 13, 0x135, 1
# 316 "data/maps/Route114/scripts.pory"
	setmetatile 9, 13, 0x135, 1
	goto Route114_Trigger_Bridge1Surf_1


Route114_Trigger_Bridge1Land::
# 333 "data/maps/Route114/scripts.pory"
	lockall
# 334 "data/maps/Route114/scripts.pory"
	releaseall
	end


Route114_Trigger_Bridge2Surf::
# 343 "data/maps/Route114/scripts.pory"
	lockall
# 344 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_X, 3
# 345 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_Y, 17
# 346 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, IsBridgeBuilt
# 347 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_Trigger_Bridge2Surf_2
# 353 "data/maps/Route114/scripts.pory"
	setmetatile 12, 16, 0x1E3, 0
# 354 "data/maps/Route114/scripts.pory"
	setmetatile 11, 17, 0x000, 0
# 355 "data/maps/Route114/scripts.pory"
	setmetatile 10, 18, 0x000, 0
Route114_Trigger_Bridge2Surf_1:
# 358 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 359 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_Trigger_Bridge2Surf_2:
# 348 "data/maps/Route114/scripts.pory"
	setmetatile 3, 16, 0x135, 1
# 349 "data/maps/Route114/scripts.pory"
	setmetatile 3, 17, 0x135, 1
# 350 "data/maps/Route114/scripts.pory"
	setmetatile 3, 18, 0x135, 1
	goto Route114_Trigger_Bridge2Surf_1


Route114_Trigger_Bridge2Land::
# 366 "data/maps/Route114/scripts.pory"
	lockall
# 367 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_X, 3
# 368 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_Y, 17
# 369 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, IsBridgeBuilt
# 370 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_Trigger_Bridge2Land_2
# 376 "data/maps/Route114/scripts.pory"
	setmetatile 3, 16, 0x1E3, 1
# 377 "data/maps/Route114/scripts.pory"
	setmetatile 3, 17, 0x000, 1
# 378 "data/maps/Route114/scripts.pory"
	setmetatile 3, 18, 0x000, 1
Route114_Trigger_Bridge2Land_1:
# 381 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 382 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_Trigger_Bridge2Land_2:
# 371 "data/maps/Route114/scripts.pory"
	setmetatile 3, 16, 0x135, 0
# 372 "data/maps/Route114/scripts.pory"
	setmetatile 3, 17, 0x135, 0
# 373 "data/maps/Route114/scripts.pory"
	setmetatile 3, 18, 0x135, 0
	goto Route114_Trigger_Bridge2Land_1


Route114_Trigger_Bridge3Surf::
# 391 "data/maps/Route114/scripts.pory"
	lockall
# 392 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_X, 8
# 393 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_Y, 27
# 394 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, IsBridgeBuilt
# 395 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_Trigger_Bridge3Surf_2
# 400 "data/maps/Route114/scripts.pory"
	setmetatile 8, 27, 0x1A2, 0
# 401 "data/maps/Route114/scripts.pory"
	setmetatile 9, 27, 0x1B6, 0
Route114_Trigger_Bridge3Surf_1:
# 404 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 405 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_Trigger_Bridge3Surf_2:
# 396 "data/maps/Route114/scripts.pory"
	setmetatile 8, 27, 0x135, 1
# 397 "data/maps/Route114/scripts.pory"
	setmetatile 9, 27, 0x135, 1
	goto Route114_Trigger_Bridge3Surf_1


Route114_Trigger_Bridge3Land::
# 412 "data/maps/Route114/scripts.pory"
	lockall
# 413 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_X, 8
# 414 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_Y, 27
# 415 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, IsBridgeBuilt
# 416 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_Trigger_Bridge3Land_2
# 421 "data/maps/Route114/scripts.pory"
	setmetatile 8, 27, 0x1A2, 1
# 422 "data/maps/Route114/scripts.pory"
	setmetatile 9, 27, 0x1B6, 1
Route114_Trigger_Bridge3Land_1:
# 425 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 426 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_Trigger_Bridge3Land_2:
# 417 "data/maps/Route114/scripts.pory"
	setmetatile 8, 27, 0x135, 0
# 418 "data/maps/Route114/scripts.pory"
	setmetatile 9, 27, 0x135, 0
	goto Route114_Trigger_Bridge3Land_1


Route114_EventScript_SecretDoor::
# 432 "data/maps/Route114/scripts.pory"
	lockall
# 433 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_BERRY_KEY, Route114_EventScript_SecretDoor_2
# 449 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_SecretDoor_Text_0
# 450 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_EventScript_SecretDoor_1:
# 453 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_EventScript_SecretDoor_2:
# 434 "data/maps/Route114/scripts.pory"
	msgbox OpenDoor, MSGBOX_YESNO
# 435 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route114_EventScript_SecretDoor_5
# 445 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_EventScript_SecretDoor_5:
# 436 "data/maps/Route114/scripts.pory"
	playse SE_DOOR
# 437 "data/maps/Route114/scripts.pory"
	waitse
# 438 "data/maps/Route114/scripts.pory"
	setmetatile 30, 39, 0x001, 0
# 439 "data/maps/Route114/scripts.pory"
	setmetatile 30, 38, 0x133, 0
# 440 "data/maps/Route114/scripts.pory"
	removeobject 7
# 441 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 442 "data/maps/Route114/scripts.pory"
	setflag 0x29
	goto Route114_EventScript_SecretDoor_1


EventScript_WaterIsIcy_Text_0:
# 244 "data/maps/Route114/scripts.pory"
	.string "The water here is icy.$"

Route114_EventScript_FirstFreezeDry_Text_0:
# 255 "data/maps/Route114/scripts.pory"
	.string "The water here is icy.\n"
	.string "Have Eevee use a move?$"

Route114_EventScript_FirstFreezeDry_Text_1:
# 257 "data/maps/Route114/scripts.pory"
	.string "Mirror Move$"

Route114_EventScript_FirstFreezeDry_Text_2:
# 257 "data/maps/Route114/scripts.pory"
	.string "Helping Hand$"

Route114_EventScript_FirstFreezeDry_Text_3:
# 257 "data/maps/Route114/scripts.pory"
	.string "Bite$"

Route114_EventScript_FirstFreezeDry_Text_4:
# 257 "data/maps/Route114/scripts.pory"
	.string "Freeze Dry$"

Route114_EventScript_FirstFreezeDry_Text_5:
# 259 "data/maps/Route114/scripts.pory"
	.string "Eevee used the water's reflection to do\n"
	.string "its hair.$"

Route114_EventScript_FirstFreezeDry_Text_6:
# 263 "data/maps/Route114/scripts.pory"
	.string "Eevee used the Help action. You\n"
	.string "gain advantage on your next d20 test!$"

Route114_EventScript_FirstFreezeDry_Text_7:
# 267 "data/maps/Route114/scripts.pory"
	.string "Eevee bites the water.\n"
	.string "The water does not respond.$"

Route114_EventScript_FirstFreezeDry_Text_8:
# 285 "data/maps/Route114/scripts.pory"
	.string "Eevee made a bridge with Freeze Dry!$"

Route114_EventScript_FirstFreezeDry_Text_9:
# 289 "data/maps/Route114/scripts.pory"
	.string "It didn't seem to have any effect.$"

Route114_EventScript_SecretDoor_Text_0:
# 449 "data/maps/Route114/scripts.pory"
	.string "The gate is locked.$"

MakeBridgeEevee::
# 457 "data/maps/Route114/scripts.pory"
	.string "The water here is icy.\n"
	.string "Have Eevee use Freeze Dry?$"

MakeBridgeGlaceon::
# 462 "data/maps/Route114/scripts.pory"
	.string "The water here is icy.\n"
	.string "Have Glaceon use Sheer Cold?$"

OpenDoor::
# 467 "data/maps/Route114/scripts.pory"
	.string "The gate is locked. Try the Berry Key?$"

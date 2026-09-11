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
# 193 "data/maps/Route114/scripts.pory"
	setmetatile 30, 38, 0x133, 1
	return


Route114_OnResume::
# 198 "data/maps/Route114/scripts.pory"
	goto_if_set 0x29, Route114_OnResume_1
	return

Route114_OnResume_1:
# 199 "data/maps/Route114/scripts.pory"
	setmetatile 30, 39, 0x001, 0
# 200 "data/maps/Route114/scripts.pory"
	setmetatile 30, 38, 0x133, 1
	return


EventScript_CreateIceBridge::
# 205 "data/maps/Route114/scripts.pory"
	lockall
# 206 "data/maps/Route114/scripts.pory"
	checkspecies SPECIES_EEVEE
# 207 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_CreateIceBridge_2
# 222 "data/maps/Route114/scripts.pory"
	checkspecies SPECIES_GLACEON
# 223 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq EventScript_CreateIceBridge_7
EventScript_CreateIceBridge_1:
# 239 "data/maps/Route114/scripts.pory"
	releaseall
	end

EventScript_CreateIceBridge_2:
# 208 "data/maps/Route114/scripts.pory"
	msgbox MakeBridgeEevee, MSGBOX_YESNO
# 209 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_CreateIceBridge_5
	goto EventScript_CreateIceBridge_1

EventScript_CreateIceBridge_5:
# 210 "data/maps/Route114/scripts.pory"
	delay 16
# 211 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
# 212 "data/maps/Route114/scripts.pory"
	waitmoncry
# 213 "data/maps/Route114/scripts.pory"
	delay 8
# 214 "data/maps/Route114/scripts.pory"
	playse SE_M_BLIZZARD2
# 215 "data/maps/Route114/scripts.pory"
	delay 16
# 216 "data/maps/Route114/scripts.pory"
	callnative CreateIceBridge
# 217 "data/maps/Route114/scripts.pory"
	delay 16
	goto EventScript_CreateIceBridge_1

EventScript_CreateIceBridge_7:
# 224 "data/maps/Route114/scripts.pory"
	msgbox MakeBridgeGlaceon, MSGBOX_YESNO
# 225 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_CreateIceBridge_9
	goto EventScript_CreateIceBridge_1

EventScript_CreateIceBridge_9:
# 226 "data/maps/Route114/scripts.pory"
	delay 16
# 227 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_GLACEON, CRY_MODE_NORMAL
# 228 "data/maps/Route114/scripts.pory"
	waitmoncry
# 229 "data/maps/Route114/scripts.pory"
	delay 8
# 230 "data/maps/Route114/scripts.pory"
	playse SE_M_BLIZZARD2
# 231 "data/maps/Route114/scripts.pory"
	delay 16
# 232 "data/maps/Route114/scripts.pory"
	callnative CreateIceBridge
# 233 "data/maps/Route114/scripts.pory"
	delay 16
	goto EventScript_CreateIceBridge_1


EventScript_WaterIsIcy::
# 245 "data/maps/Route114/scripts.pory"
	lock
# 246 "data/maps/Route114/scripts.pory"
	msgbox EventScript_WaterIsIcy_Text_0
# 247 "data/maps/Route114/scripts.pory"
	release
	end


Route114_EventScript_FirstFreezeDry::
# 252 "data/maps/Route114/scripts.pory"
	lock
# 253 "data/maps/Route114/scripts.pory"
	goto_if_unset FLAG_FREEZE_DRY_DISCOVERED, Route114_EventScript_FirstFreezeDry_2
Route114_EventScript_FirstFreezeDry_1:
# 301 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_EventScript_FirstFreezeDry_2:
# 254 "data/maps/Route114/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_EEVEE
# 255 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, CheckLeadMonSpecies
# 256 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_FirstFreezeDry_4
# 295 "data/maps/Route114/scripts.pory"
	msgbox EventScript_WaterIsIcy_Text_0
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_4:
# 257 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_0
# 259 "data/maps/Route114/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, Route114_EventScript_FirstFreezeDry_Text_1, Route114_EventScript_FirstFreezeDry_Text_2, Route114_EventScript_FirstFreezeDry_Text_3, Route114_EventScript_FirstFreezeDry_Text_4
# 260 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route114_EventScript_FirstFreezeDry_7
# 264 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route114_EventScript_FirstFreezeDry_8
# 268 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Route114_EventScript_FirstFreezeDry_9
# 272 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq Route114_EventScript_FirstFreezeDry_10
# 291 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_9
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_7:
# 261 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_5
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_8:
# 265 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_6
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_9:
# 269 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_7
	goto Route114_EventScript_FirstFreezeDry_1

Route114_EventScript_FirstFreezeDry_10:
# 273 "data/maps/Route114/scripts.pory"
	delay 16
# 274 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
# 275 "data/maps/Route114/scripts.pory"
	waitmoncry
# 276 "data/maps/Route114/scripts.pory"
	delay 8
# 277 "data/maps/Route114/scripts.pory"
	playse SE_M_BLIZZARD2
# 278 "data/maps/Route114/scripts.pory"
	delay 16
# 279 "data/maps/Route114/scripts.pory"
	setmetatile 12, 13, 0x135, 0
# 280 "data/maps/Route114/scripts.pory"
	setmetatile 11, 13, 0x135, 0
# 281 "data/maps/Route114/scripts.pory"
	setmetatile 10, 13, 0x135, 0
# 282 "data/maps/Route114/scripts.pory"
	setmetatile 9, 13, 0x135, 0
# 283 "data/maps/Route114/scripts.pory"
	setflag FLAG_FREEZE_DRY_DISCOVERED
# 284 "data/maps/Route114/scripts.pory"
	removeobject 6
# 285 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 286 "data/maps/Route114/scripts.pory"
	delay 16
# 287 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_FirstFreezeDry_Text_8
	goto Route114_EventScript_FirstFreezeDry_1


Route114_Trigger_Bridge1Surf::
# 310 "data/maps/Route114/scripts.pory"
	lockall
# 311 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_X, 11
# 312 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_Y, 13
# 313 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, IsBridgeBuilt
# 314 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_Trigger_Bridge1Surf_2
# 321 "data/maps/Route114/scripts.pory"
	setmetatile 12, 13, 0x1B6, 0
# 322 "data/maps/Route114/scripts.pory"
	setmetatile 11, 13, 0x000, 0
# 323 "data/maps/Route114/scripts.pory"
	setmetatile 10, 13, 0x000, 0
# 324 "data/maps/Route114/scripts.pory"
	setmetatile 9, 13, 0x1A2, 0
Route114_Trigger_Bridge1Surf_1:
# 327 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 328 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_Trigger_Bridge1Surf_2:
# 315 "data/maps/Route114/scripts.pory"
	setmetatile 12, 13, 0x135, 1
# 316 "data/maps/Route114/scripts.pory"
	setmetatile 11, 13, 0x135, 1
# 317 "data/maps/Route114/scripts.pory"
	setmetatile 10, 13, 0x135, 1
# 318 "data/maps/Route114/scripts.pory"
	setmetatile 9, 13, 0x135, 1
	goto Route114_Trigger_Bridge1Surf_1


Route114_Trigger_Bridge1Land::
# 335 "data/maps/Route114/scripts.pory"
	lockall
# 336 "data/maps/Route114/scripts.pory"
	releaseall
	end


Route114_Trigger_Bridge2Surf::
# 345 "data/maps/Route114/scripts.pory"
	lockall
# 346 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_X, 3
# 347 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_Y, 17
# 348 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, IsBridgeBuilt
# 349 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_Trigger_Bridge2Surf_2
# 355 "data/maps/Route114/scripts.pory"
	setmetatile 12, 16, 0x1E3, 0
# 356 "data/maps/Route114/scripts.pory"
	setmetatile 11, 17, 0x000, 0
# 357 "data/maps/Route114/scripts.pory"
	setmetatile 10, 18, 0x000, 0
Route114_Trigger_Bridge2Surf_1:
# 360 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 361 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_Trigger_Bridge2Surf_2:
# 350 "data/maps/Route114/scripts.pory"
	setmetatile 3, 16, 0x135, 1
# 351 "data/maps/Route114/scripts.pory"
	setmetatile 3, 17, 0x135, 1
# 352 "data/maps/Route114/scripts.pory"
	setmetatile 3, 18, 0x135, 1
	goto Route114_Trigger_Bridge2Surf_1


Route114_Trigger_Bridge2Land::
# 368 "data/maps/Route114/scripts.pory"
	lockall
# 369 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_X, 3
# 370 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_Y, 17
# 371 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, IsBridgeBuilt
# 372 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_Trigger_Bridge2Land_2
# 378 "data/maps/Route114/scripts.pory"
	setmetatile 3, 16, 0x1E3, 1
# 379 "data/maps/Route114/scripts.pory"
	setmetatile 3, 17, 0x000, 1
# 380 "data/maps/Route114/scripts.pory"
	setmetatile 3, 18, 0x000, 1
Route114_Trigger_Bridge2Land_1:
# 383 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 384 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_Trigger_Bridge2Land_2:
# 373 "data/maps/Route114/scripts.pory"
	setmetatile 3, 16, 0x135, 0
# 374 "data/maps/Route114/scripts.pory"
	setmetatile 3, 17, 0x135, 0
# 375 "data/maps/Route114/scripts.pory"
	setmetatile 3, 18, 0x135, 0
	goto Route114_Trigger_Bridge2Land_1


Route114_Trigger_Bridge3Surf::
# 393 "data/maps/Route114/scripts.pory"
	lockall
# 394 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_X, 8
# 395 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_Y, 27
# 396 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, IsBridgeBuilt
# 397 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_Trigger_Bridge3Surf_2
# 402 "data/maps/Route114/scripts.pory"
	setmetatile 8, 27, 0x1A2, 0
# 403 "data/maps/Route114/scripts.pory"
	setmetatile 9, 27, 0x1B6, 0
Route114_Trigger_Bridge3Surf_1:
# 406 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 407 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_Trigger_Bridge3Surf_2:
# 398 "data/maps/Route114/scripts.pory"
	setmetatile 8, 27, 0x135, 1
# 399 "data/maps/Route114/scripts.pory"
	setmetatile 9, 27, 0x135, 1
	goto Route114_Trigger_Bridge3Surf_1


Route114_Trigger_Bridge3Land::
# 414 "data/maps/Route114/scripts.pory"
	lockall
# 415 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_X, 8
# 416 "data/maps/Route114/scripts.pory"
	setvar VAR_ICE_BRIDGE_Y, 27
# 417 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, IsBridgeBuilt
# 418 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_Trigger_Bridge3Land_2
# 423 "data/maps/Route114/scripts.pory"
	setmetatile 8, 27, 0x1A2, 1
# 424 "data/maps/Route114/scripts.pory"
	setmetatile 9, 27, 0x1B6, 1
Route114_Trigger_Bridge3Land_1:
# 427 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 428 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_Trigger_Bridge3Land_2:
# 419 "data/maps/Route114/scripts.pory"
	setmetatile 8, 27, 0x135, 0
# 420 "data/maps/Route114/scripts.pory"
	setmetatile 9, 27, 0x135, 0
	goto Route114_Trigger_Bridge3Land_1


Route114_EventScript_SecretDoor::
# 434 "data/maps/Route114/scripts.pory"
	lockall
# 435 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_BERRY_KEY, Route114_EventScript_SecretDoor_2
# 451 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_SecretDoor_Text_0
# 452 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_EventScript_SecretDoor_1:
# 455 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_EventScript_SecretDoor_2:
# 436 "data/maps/Route114/scripts.pory"
	msgbox OpenDoor, MSGBOX_YESNO
# 437 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route114_EventScript_SecretDoor_5
# 447 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_EventScript_SecretDoor_5:
# 438 "data/maps/Route114/scripts.pory"
	playse SE_DOOR
# 439 "data/maps/Route114/scripts.pory"
	waitse
# 440 "data/maps/Route114/scripts.pory"
	setmetatile 30, 39, 0x001, 0
# 441 "data/maps/Route114/scripts.pory"
	setmetatile 30, 38, 0x133, 1
# 442 "data/maps/Route114/scripts.pory"
	removeobject 7
# 443 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 444 "data/maps/Route114/scripts.pory"
	setflag 0x29
	goto Route114_EventScript_SecretDoor_1


Route114_EventScript_BerryPedestal::
# 460 "data/maps/Route114/scripts.pory"
	lockall
# 461 "data/maps/Route114/scripts.pory"
	goto_if_unset FLAG_NOIBAT_BERRY, Route114_EventScript_BerryPedestal_2
# 477 "data/maps/Route114/scripts.pory"
	goto_if_unset FLAG_NOIBAT_OBTAINED, Route114_EventScript_BerryPedestal_3
# 481 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_BerryPedestal_Text_1
Route114_EventScript_BerryPedestal_1:
# 483 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_EventScript_BerryPedestal_2:
# 462 "data/maps/Route114/scripts.pory"
	checkitem ITEM_PERSIM_BERRY, 1
# 463 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_BerryPedestal_7
	goto Route114_EventScript_BerryPedestal_1

Route114_EventScript_BerryPedestal_3:
# 478 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_NoibatJoin
	goto Route114_EventScript_BerryPedestal_1

Route114_EventScript_BerryPedestal_7:
# 464 "data/maps/Route114/scripts.pory"
	msgbox PlaceItem, MSGBOX_YESNO
# 465 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route114_EventScript_BerryPedestal_9
# 471 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_BerryPedestal_Text_0
	goto Route114_EventScript_BerryPedestal_1

Route114_EventScript_BerryPedestal_9:
# 466 "data/maps/Route114/scripts.pory"
	chooseitem
# 467 "data/maps/Route114/scripts.pory"
	goto_if_eq VAR_ITEM_ID, ITEM_PERSIM_BERRY, Route114_EventScript_NoibatBerry
# 468 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_WrongItem
	goto Route114_EventScript_BerryPedestal_1


Route114_EventScript_NoibatBerry::
# 488 "data/maps/Route114/scripts.pory"
	removeitem ITEM_PERSIM_BERRY
# 489 "data/maps/Route114/scripts.pory"
	delay 30
# 490 "data/maps/Route114/scripts.pory"
	applymovement LOCALID_NOIBAT, NoibatMove
# 491 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 492 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_NOIBAT, CRY_MODE_NORMAL
# 493 "data/maps/Route114/scripts.pory"
	delay 60
# 494 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_NoibatBerry_Text_0
# 496 "data/maps/Route114/scripts.pory"
	setflag FLAG_NOIBAT_BERRY
# 497 "data/maps/Route114/scripts.pory"
	goto Route114_EventScript_NoibatJoin
	return


Route114_EventScript_NoibatJoin::
# 501 "data/maps/Route114/scripts.pory"
	lockall
# 502 "data/maps/Route114/scripts.pory"
	checkitem ITEM_POKE_BALL, 1
# 503 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route114_EventScript_NoibatJoin_2
# 517 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_NoibatJoin_Text_1
Route114_EventScript_NoibatJoin_1:
# 521 "data/maps/Route114/scripts.pory"
	releaseall
	end

Route114_EventScript_NoibatJoin_2:
# 504 "data/maps/Route114/scripts.pory"
	msgbox NoibatJoin, MSGBOX_YESNO
# 505 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route114_EventScript_NoibatJoin_5
	goto Route114_EventScript_NoibatJoin_1

Route114_EventScript_NoibatJoin_5:
# 506 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_NOIBAT, CRY_MODE_NORMAL
# 507 "data/maps/Route114/scripts.pory"
	removeobject 5
# 508 "data/maps/Route114/scripts.pory"
	special DrawWholeMapView
# 509 "data/maps/Route114/scripts.pory"
	setflag FLAG_NOIBAT_OBTAINED
# 510 "data/maps/Route114/scripts.pory"
	givemon SPECIES_NOIBAT, 5, ITEM_NONE, move1 = MOVE_ABSORB, move2 = MOVE_DRAGON_BREATH, move3 = MOVE_ROOST, move4 = MOVE_LEECH_LIFE
# 511 "data/maps/Route114/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 512 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_NoibatJoin_Text_0
# 513 "data/maps/Route114/scripts.pory"
	call NicknameNoibat
	goto Route114_EventScript_NoibatJoin_1


Route114_EventScript_WrongItem::
# 526 "data/maps/Route114/scripts.pory"
	msgbox Route114_EventScript_WrongItem_Text_0
# 527 "data/maps/Route114/scripts.pory"
	releaseall
	end


NicknameNoibat::
# 532 "data/maps/Route114/scripts.pory"
	msgbox NicknameNoibat_Text_0, MSGBOX_YESNO
# 533 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameNoibat_1
# 538 "data/maps/Route114/scripts.pory"
	releaseall
	end

NicknameNoibat_1:
# 534 "data/maps/Route114/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 535 "data/maps/Route114/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


# 543 "data/maps/Route114/scripts.pory"
NoibatMove:
# 544 "data/maps/Route114/scripts.pory"
	emote_exclamation_mark
# 545 "data/maps/Route114/scripts.pory"
	delay_16
# 546 "data/maps/Route114/scripts.pory"
	walk_left
# 546 "data/maps/Route114/scripts.pory"
	walk_left
# 546 "data/maps/Route114/scripts.pory"
	walk_left
# 547 "data/maps/Route114/scripts.pory"
	face_up
	step_end

EventScript_WaterIsIcy_Text_0:
# 246 "data/maps/Route114/scripts.pory"
	.string "The water here is icy.$"

Route114_EventScript_FirstFreezeDry_Text_0:
# 257 "data/maps/Route114/scripts.pory"
	.string "The water here is icy.\n"
	.string "Have Eevee use a move?$"

Route114_EventScript_FirstFreezeDry_Text_1:
# 259 "data/maps/Route114/scripts.pory"
	.string "Mirror Move$"

Route114_EventScript_FirstFreezeDry_Text_2:
# 259 "data/maps/Route114/scripts.pory"
	.string "Helping Hand$"

Route114_EventScript_FirstFreezeDry_Text_3:
# 259 "data/maps/Route114/scripts.pory"
	.string "Bite$"

Route114_EventScript_FirstFreezeDry_Text_4:
# 259 "data/maps/Route114/scripts.pory"
	.string "Freeze Dry$"

Route114_EventScript_FirstFreezeDry_Text_5:
# 261 "data/maps/Route114/scripts.pory"
	.string "Eevee used the water's reflection to do\n"
	.string "its hair.$"

Route114_EventScript_FirstFreezeDry_Text_6:
# 265 "data/maps/Route114/scripts.pory"
	.string "Eevee used the Help action. You\n"
	.string "gain advantage on your next d20 test!$"

Route114_EventScript_FirstFreezeDry_Text_7:
# 269 "data/maps/Route114/scripts.pory"
	.string "Eevee bites the water.\n"
	.string "The water does not respond.$"

Route114_EventScript_FirstFreezeDry_Text_8:
# 287 "data/maps/Route114/scripts.pory"
	.string "Eevee made a bridge with Freeze Dry!$"

Route114_EventScript_FirstFreezeDry_Text_9:
# 291 "data/maps/Route114/scripts.pory"
	.string "It didn't seem to have any effect.$"

Route114_EventScript_SecretDoor_Text_0:
# 451 "data/maps/Route114/scripts.pory"
	.string "The gate is locked.$"

Route114_EventScript_BerryPedestal_Text_0:
# 471 "data/maps/Route114/scripts.pory"
	.string "A stone pedestal. It appears to be\n"
	.string "stained with juice.$"

Route114_EventScript_BerryPedestal_Text_1:
# 481 "data/maps/Route114/scripts.pory"
	.string "A stone pedestal, stained with juice.$"

Route114_EventScript_NoibatBerry_Text_0:
# 494 "data/maps/Route114/scripts.pory"
	.string "A Noibat perches on the pedestal\n"
	.string "and happily eats the berry.$"

Route114_EventScript_NoibatJoin_Text_0:
# 512 "data/maps/Route114/scripts.pory"
	.string "Noibat joined the party!$"

Route114_EventScript_NoibatJoin_Text_1:
# 517 "data/maps/Route114/scripts.pory"
	.string "Noibat eyes you closely. It seems\n"
	.string "like it wants to join your party, but\l"
	.string "you don't have any Poké Balls.$"

Route114_EventScript_WrongItem_Text_0:
# 526 "data/maps/Route114/scripts.pory"
	.string "Nothing happened.$"

NicknameNoibat_Text_0:
# 532 "data/maps/Route114/scripts.pory"
	.string "Give Noibat a nickname?$"

NoibatJoin::
# 550 "data/maps/Route114/scripts.pory"
	.string "Noibat eyes you closely. It seems\n"
	.string "like it wants to join you.\p"
	.string "Use a Poké Ball?$"

MakeBridgeEevee::
# 556 "data/maps/Route114/scripts.pory"
	.string "The water here is icy.\n"
	.string "Have Eevee use Freeze Dry?$"

MakeBridgeGlaceon::
# 561 "data/maps/Route114/scripts.pory"
	.string "The water here is icy.\n"
	.string "Have Glaceon use Sheer Cold?$"

OpenDoor::
# 566 "data/maps/Route114/scripts.pory"
	.string "The gate is locked. Try the Berry Key?$"

PlaceItem::
# 570 "data/maps/Route114/scripts.pory"
	.string "The pedestal is stained with juice.\p"
	.string "Place an item?$"

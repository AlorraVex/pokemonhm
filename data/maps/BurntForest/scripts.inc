BurntForest_MapScripts::
	.byte 0


BurntForest_EventScript_Ball::
# 8 "data/maps/BurntForest/scripts.pory"
	lockall
# 9 "data/maps/BurntForest/scripts.pory"
	msgbox TakeBall, MSGBOX_YESNO
# 10 "data/maps/BurntForest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BurntForest_EventScript_Ball_1
# 21 "data/maps/BurntForest/scripts.pory"
	msgbox LeftBall
# 22 "data/maps/BurntForest/scripts.pory"
	waitmessage
# 23 "data/maps/BurntForest/scripts.pory"
	releaseall
	end

BurntForest_EventScript_Ball_1:
# 11 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EventScript_Ball_Text_0
# 13 "data/maps/BurntForest/scripts.pory"
	additem ITEM_POKE_BALL
# 14 "data/maps/BurntForest/scripts.pory"
	setflag 0x21
# 15 "data/maps/BurntForest/scripts.pory"
	removeobject 1
# 16 "data/maps/BurntForest/scripts.pory"
	waitmessage
# 17 "data/maps/BurntForest/scripts.pory"
	releaseall
	end


BurntForest_EventScript_Eevee::
# 31 "data/maps/BurntForest/scripts.pory"
	lockall
# 32 "data/maps/BurntForest/scripts.pory"
	faceplayer
# 33 "data/maps/BurntForest/scripts.pory"
	goto_if_set 0x21, BurntForest_EventScript_Eevee_1
# 54 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EventScript_Eevee_Text_1
# 57 "data/maps/BurntForest/scripts.pory"
	waitmessage
# 58 "data/maps/BurntForest/scripts.pory"
	releaseall
	end

BurntForest_EventScript_Eevee_1:
# 34 "data/maps/BurntForest/scripts.pory"
	msgbox EeveeBallUse, MSGBOX_YESNO
# 35 "data/maps/BurntForest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BurntForest_EventScript_Eevee_5
# 47 "data/maps/BurntForest/scripts.pory"
	releaseall
BurntForest_EventScript_Eevee_4:
	end

BurntForest_EventScript_Eevee_5:
# 36 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EventScript_Eevee_Text_0
# 39 "data/maps/BurntForest/scripts.pory"
	setfollowernpc 2 0x0 BurntForest_EventScript_EeveeFollow
# 40 "data/maps/BurntForest/scripts.pory"
	setvar 0x40F7, 1
# 41 "data/maps/BurntForest/scripts.pory"
	removeobject 0
# 42 "data/maps/BurntForest/scripts.pory"
	setflag 0x25
# 43 "data/maps/BurntForest/scripts.pory"
	releaseall
	goto BurntForest_EventScript_Eevee_4


BurntForest_Trigger_BlockExit::
# 65 "data/maps/BurntForest/scripts.pory"
	lockall
# 66 "data/maps/BurntForest/scripts.pory"
	hidefollowernpc
# 67 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_Trigger_BlockExit_Text_0
# 69 "data/maps/BurntForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BlockExit
# 70 "data/maps/BurntForest/scripts.pory"
	waitmovement 0
# 71 "data/maps/BurntForest/scripts.pory"
	releaseall
	return


BurntForest_EeeveeTrainerSceneLeft::
# 75 "data/maps/BurntForest/scripts.pory"
	lockall
# 76 "data/maps/BurntForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, TrainerFindLeft
# 77 "data/maps/BurntForest/scripts.pory"
	waitmovement 0
# 78 "data/maps/BurntForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerShiftLeft
# 79 "data/maps/BurntForest/scripts.pory"
	waitmovement
# 80 "data/maps/BurntForest/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
# 81 "data/maps/BurntForest/scripts.pory"
	waitmoncry
# 82 "data/maps/BurntForest/scripts.pory"
	delay 16
# 83 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EeeveeTrainerSceneLeft_Text_0
# 87 "data/maps/BurntForest/scripts.pory"
	waitmessage
# 88 "data/maps/BurntForest/scripts.pory"
	waitbuttonpress
# 89 "data/maps/BurntForest/scripts.pory"
	closemessage
# 90 "data/maps/BurntForest/scripts.pory"
	delay 16
# 91 "data/maps/BurntForest/scripts.pory"
	delay 16
# 92 "data/maps/BurntForest/scripts.pory"
	delay 16
# 93 "data/maps/BurntForest/scripts.pory"
	delay 16
# 94 "data/maps/BurntForest/scripts.pory"
	playse SE_PIN
# 95 "data/maps/BurntForest/scripts.pory"
	delay 8
# 96 "data/maps/BurntForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Ghost
# 97 "data/maps/BurntForest/scripts.pory"
	waitmovement 0
# 98 "data/maps/BurntForest/scripts.pory"
	delay 16
# 99 "data/maps/BurntForest/scripts.pory"
	delay 16
# 100 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EeeveeTrainerSceneLeft_Text_1
# 103 "data/maps/BurntForest/scripts.pory"
	waitmessage
# 104 "data/maps/BurntForest/scripts.pory"
	waitbuttonpress
# 105 "data/maps/BurntForest/scripts.pory"
	closemessage
# 106 "data/maps/BurntForest/scripts.pory"
	delay 16
# 107 "data/maps/BurntForest/scripts.pory"
	delay 16
# 108 "data/maps/BurntForest/scripts.pory"
	delay 16
# 109 "data/maps/BurntForest/scripts.pory"
	delay 16
# 110 "data/maps/BurntForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, EeveeJoin
# 111 "data/maps/BurntForest/scripts.pory"
	waitmovement 0
# 112 "data/maps/BurntForest/scripts.pory"
	delay 16
# 113 "data/maps/BurntForest/scripts.pory"
	delay 16
# 114 "data/maps/BurntForest/scripts.pory"
	delay 16
# 115 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EeeveeTrainerSceneLeft_Text_2
# 118 "data/maps/BurntForest/scripts.pory"
	delay 16
# 119 "data/maps/BurntForest/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
# 120 "data/maps/BurntForest/scripts.pory"
	waitmoncry
# 121 "data/maps/BurntForest/scripts.pory"
	delay 16
# 122 "data/maps/BurntForest/scripts.pory"
	destroyfollowernpc
# 123 "data/maps/BurntForest/scripts.pory"
	setvar 0x40F7, 0
# 124 "data/maps/BurntForest/scripts.pory"
	removeitem ITEM_POKE_BALL
# 125 "data/maps/BurntForest/scripts.pory"
	setflag FLAG_EEVEE_OBTAINED
# 126 "data/maps/BurntForest/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE, move1 = MOVE_MIRROR_MOVE, move2 = MOVE_HELPING_HAND, move3 = MOVE_BITE, move4 = MOVE_FREEZE_DRY
# 127 "data/maps/BurntForest/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 128 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EeeveeTrainerSceneLeft_Text_3
# 129 "data/maps/BurntForest/scripts.pory"
	call NicknameEevee
	end


BurntForest_EeeveeTrainerSceneRight::
# 134 "data/maps/BurntForest/scripts.pory"
	lockall
# 135 "data/maps/BurntForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, TrainerFindRight
# 136 "data/maps/BurntForest/scripts.pory"
	waitmovement 0
# 137 "data/maps/BurntForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerShiftRight
# 138 "data/maps/BurntForest/scripts.pory"
	waitmovement
# 139 "data/maps/BurntForest/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
# 140 "data/maps/BurntForest/scripts.pory"
	waitmoncry
# 141 "data/maps/BurntForest/scripts.pory"
	delay 16
# 142 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EeeveeTrainerSceneLeft_Text_0
# 146 "data/maps/BurntForest/scripts.pory"
	waitmessage
# 147 "data/maps/BurntForest/scripts.pory"
	waitbuttonpress
# 148 "data/maps/BurntForest/scripts.pory"
	closemessage
# 149 "data/maps/BurntForest/scripts.pory"
	delay 16
# 150 "data/maps/BurntForest/scripts.pory"
	delay 16
# 151 "data/maps/BurntForest/scripts.pory"
	delay 16
# 152 "data/maps/BurntForest/scripts.pory"
	delay 16
# 153 "data/maps/BurntForest/scripts.pory"
	playse SE_PIN
# 154 "data/maps/BurntForest/scripts.pory"
	delay 8
# 155 "data/maps/BurntForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Ghost
# 156 "data/maps/BurntForest/scripts.pory"
	waitmovement 0
# 157 "data/maps/BurntForest/scripts.pory"
	delay 16
# 158 "data/maps/BurntForest/scripts.pory"
	delay 16
# 159 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EeeveeTrainerSceneLeft_Text_1
# 162 "data/maps/BurntForest/scripts.pory"
	waitmessage
# 163 "data/maps/BurntForest/scripts.pory"
	waitbuttonpress
# 164 "data/maps/BurntForest/scripts.pory"
	closemessage
# 165 "data/maps/BurntForest/scripts.pory"
	delay 16
# 166 "data/maps/BurntForest/scripts.pory"
	delay 16
# 167 "data/maps/BurntForest/scripts.pory"
	delay 16
# 168 "data/maps/BurntForest/scripts.pory"
	delay 16
# 169 "data/maps/BurntForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, EeveeJoin
# 170 "data/maps/BurntForest/scripts.pory"
	waitmovement 0
# 171 "data/maps/BurntForest/scripts.pory"
	delay 16
# 172 "data/maps/BurntForest/scripts.pory"
	delay 16
# 173 "data/maps/BurntForest/scripts.pory"
	delay 16
# 174 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EeeveeTrainerSceneLeft_Text_2
# 177 "data/maps/BurntForest/scripts.pory"
	waitmessage
# 178 "data/maps/BurntForest/scripts.pory"
	waitbuttonpress
# 179 "data/maps/BurntForest/scripts.pory"
	closemessage
# 180 "data/maps/BurntForest/scripts.pory"
	delay 16
# 181 "data/maps/BurntForest/scripts.pory"
	delay 16
# 182 "data/maps/BurntForest/scripts.pory"
	destroyfollowernpc
# 183 "data/maps/BurntForest/scripts.pory"
	setvar 0x40F7, 0
# 184 "data/maps/BurntForest/scripts.pory"
	removeitem ITEM_POKE_BALL
# 185 "data/maps/BurntForest/scripts.pory"
	setflag FLAG_EEVEE_OBTAINED
# 186 "data/maps/BurntForest/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE, move1 = MOVE_MIRROR_MOVE, move2 = MOVE_HELPING_HAND, move3 = MOVE_BITE, move4 = MOVE_FREEZE_DRY
# 187 "data/maps/BurntForest/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 188 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EeeveeTrainerSceneLeft_Text_3
# 189 "data/maps/BurntForest/scripts.pory"
	call NicknameEevee
	end


# 193 "data/maps/BurntForest/scripts.pory"
TrainerFindLeft:
# 194 "data/maps/BurntForest/scripts.pory"
	walk_right
# 195 "data/maps/BurntForest/scripts.pory"
	walk_up
# 196 "data/maps/BurntForest/scripts.pory"
	walk_up
# 197 "data/maps/BurntForest/scripts.pory"
	walk_up
# 198 "data/maps/BurntForest/scripts.pory"
	face_left
# 199 "data/maps/BurntForest/scripts.pory"
	delay_16
	step_end

# 202 "data/maps/BurntForest/scripts.pory"
TrainerFindRight:
# 203 "data/maps/BurntForest/scripts.pory"
	walk_left
# 204 "data/maps/BurntForest/scripts.pory"
	walk_up
# 205 "data/maps/BurntForest/scripts.pory"
	walk_up
# 206 "data/maps/BurntForest/scripts.pory"
	walk_right
# 207 "data/maps/BurntForest/scripts.pory"
	walk_up
# 208 "data/maps/BurntForest/scripts.pory"
	face_left
# 209 "data/maps/BurntForest/scripts.pory"
	delay_16
	step_end

# 212 "data/maps/BurntForest/scripts.pory"
PlayerShiftLeft:
# 213 "data/maps/BurntForest/scripts.pory"
	walk_up
# 214 "data/maps/BurntForest/scripts.pory"
	delay_16
	step_end

# 217 "data/maps/BurntForest/scripts.pory"
PlayerShiftRight:
# 218 "data/maps/BurntForest/scripts.pory"
	walk_left
# 219 "data/maps/BurntForest/scripts.pory"
	walk_up
# 220 "data/maps/BurntForest/scripts.pory"
	delay_16
	step_end

# 223 "data/maps/BurntForest/scripts.pory"
Ghost:
# 224 "data/maps/BurntForest/scripts.pory"
	emote_exclamation_mark
# 225 "data/maps/BurntForest/scripts.pory"
	delay_16
# 226 "data/maps/BurntForest/scripts.pory"
	delay_16
# 227 "data/maps/BurntForest/scripts.pory"
	delay_16
# 228 "data/maps/BurntForest/scripts.pory"
	delay_16
# 229 "data/maps/BurntForest/scripts.pory"
	face_right
# 230 "data/maps/BurntForest/scripts.pory"
	delay_16
# 231 "data/maps/BurntForest/scripts.pory"
	delay_16
# 232 "data/maps/BurntForest/scripts.pory"
	face_left
# 233 "data/maps/BurntForest/scripts.pory"
	delay_16
# 234 "data/maps/BurntForest/scripts.pory"
	delay_16
# 235 "data/maps/BurntForest/scripts.pory"
	face_up
# 236 "data/maps/BurntForest/scripts.pory"
	delay_16
# 237 "data/maps/BurntForest/scripts.pory"
	delay_16
# 238 "data/maps/BurntForest/scripts.pory"
	jump_in_place_up
# 239 "data/maps/BurntForest/scripts.pory"
	delay_8
# 240 "data/maps/BurntForest/scripts.pory"
	jump_in_place_up
# 241 "data/maps/BurntForest/scripts.pory"
	delay_8
# 242 "data/maps/BurntForest/scripts.pory"
	jump_in_place_up
# 243 "data/maps/BurntForest/scripts.pory"
	delay_16
# 244 "data/maps/BurntForest/scripts.pory"
	delay_16
	step_end

# 247 "data/maps/BurntForest/scripts.pory"
EeveeJoin:
# 248 "data/maps/BurntForest/scripts.pory"
	walk_down
# 249 "data/maps/BurntForest/scripts.pory"
	face_left
	step_end

# 252 "data/maps/BurntForest/scripts.pory"
EeveeShift:
# 253 "data/maps/BurntForest/scripts.pory"
	walk_down
	step_end

# 256 "data/maps/BurntForest/scripts.pory"
BlockExit:
# 257 "data/maps/BurntForest/scripts.pory"
	walk_right
	step_end

BurntForest_EventScript_EeveeFollow::
# 278 "data/maps/BurntForest/scripts.pory"
	lockall
# 279 "data/maps/BurntForest/scripts.pory"
	faceplayer
# 280 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EventScript_EeveeFollow_Text_0
# 281 "data/maps/BurntForest/scripts.pory"
	waitmessage
# 282 "data/maps/BurntForest/scripts.pory"
	releaseall
	end


BurntForest_EventScript_EeveeTrainer::
# 288 "data/maps/BurntForest/scripts.pory"
	lockall
# 289 "data/maps/BurntForest/scripts.pory"
	goto_if_set FLAG_EEVEE_OBTAINED, BurntForest_EventScript_EeveeTrainer_1
# 296 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EventScript_EeveeTrainer_Text_1
# 299 "data/maps/BurntForest/scripts.pory"
	waitmessage
# 300 "data/maps/BurntForest/scripts.pory"
	releaseall
	end

BurntForest_EventScript_EeveeTrainer_1:
# 290 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EventScript_EeveeTrainer_Text_0
# 291 "data/maps/BurntForest/scripts.pory"
	waitmessage
# 292 "data/maps/BurntForest/scripts.pory"
	releaseall
	end


NicknameEevee::
# 306 "data/maps/BurntForest/scripts.pory"
	msgbox NicknameEevee_Text_0, MSGBOX_YESNO
# 307 "data/maps/BurntForest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameEevee_1
# 312 "data/maps/BurntForest/scripts.pory"
	releaseall
	end

NicknameEevee_1:
# 308 "data/maps/BurntForest/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 309 "data/maps/BurntForest/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


BurntForest_EventScript_Ball_Text_0:
# 11 "data/maps/BurntForest/scripts.pory"
	.string "You take the pokeball. \n"
	.string "It is cold to the touch.$"

BurntForest_EventScript_Eevee_Text_0:
# 36 "data/maps/BurntForest/scripts.pory"
	.string "At the sight of the ball, Eevee's\n"
	.string "ears perk up.\p"
	.string "It begins to follow you.$"

BurntForest_EventScript_Eevee_Text_1:
# 54 "data/maps/BurntForest/scripts.pory"
	.string "It's a strange, blue eevee.\p"
	.string "You try to approach, but it shies\n"
	.string "away from you.$"

BurntForest_Trigger_BlockExit_Text_0:
# 67 "data/maps/BurntForest/scripts.pory"
	.string "Eevee doesn't seem ready to leave\n"
	.string "the forest yet.$"

BurntForest_EeeveeTrainerSceneLeft_Text_0:
# 83 "data/maps/BurntForest/scripts.pory"
	.string "Upon seeing its former trainer,\n"
	.string "Eevee's ears fall low.\p"
	.string "Eevee gives its trainer and nudge, then\n"
	.string "settles down beside him.$"

BurntForest_EeeveeTrainerSceneLeft_Text_1:
# 100 "data/maps/BurntForest/scripts.pory"
	.string "Although you don't hear anything,\n"
	.string "Eevee's ears twitch as if it is listening\l"
	.string "to something.$"

BurntForest_EeeveeTrainerSceneLeft_Text_2:
# 115 "data/maps/BurntForest/scripts.pory"
	.string "Eevee looks at the empty pokeball in\n"
	.string "your hand.\p"
	.string "It seems like it wants to join you.$"

BurntForest_EeeveeTrainerSceneLeft_Text_3:
# 128 "data/maps/BurntForest/scripts.pory"
	.string "Eevee joined the party!$"

BurntForest_EventScript_EeveeFollow_Text_0:
# 280 "data/maps/BurntForest/scripts.pory"
	.string "Eevee is following you cautiously.$"

BurntForest_EventScript_EeveeTrainer_Text_0:
# 290 "data/maps/BurntForest/scripts.pory"
	.string "It's Eevee's original trainer.$"

BurntForest_EventScript_EeveeTrainer_Text_1:
# 296 "data/maps/BurntForest/scripts.pory"
	.string "A pokemon trainer, succumbed to the\n"
	.string "oppressive heat of the forest.\p"
	.string "He is not breathing.$"

NicknameEevee_Text_0:
# 306 "data/maps/BurntForest/scripts.pory"
	.string "Give Eevee a nickname?$"

TakeBall::
# 261 "data/maps/BurntForest/scripts.pory"
	.string "It's an abandoned pokeball.\n"
	.string "Take it?$"

LeftBall::
# 266 "data/maps/BurntForest/scripts.pory"
	.string "You decide to leave it.$"

EeveeBallUse::
# 270 "data/maps/BurntForest/scripts.pory"
	.string "It's a strange, blue eevee.\p"
	.string "Even through the heat of the forest,\n"
	.string "cold air radiates off it.\p"
	.string "Show Eevee the pokeball?$"

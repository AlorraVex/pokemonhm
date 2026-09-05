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
# 29 "data/maps/BurntForest/scripts.pory"
	lockall
# 30 "data/maps/BurntForest/scripts.pory"
	faceplayer
# 31 "data/maps/BurntForest/scripts.pory"
	goto_if_set 0x21, BurntForest_EventScript_Eevee_1
# 52 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EventScript_Eevee_Text_1
# 55 "data/maps/BurntForest/scripts.pory"
	waitmessage
# 56 "data/maps/BurntForest/scripts.pory"
	releaseall
	end

BurntForest_EventScript_Eevee_1:
# 32 "data/maps/BurntForest/scripts.pory"
	msgbox EeveeBallUse, MSGBOX_YESNO
# 33 "data/maps/BurntForest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BurntForest_EventScript_Eevee_5
# 45 "data/maps/BurntForest/scripts.pory"
	releaseall
BurntForest_EventScript_Eevee_4:
	end

BurntForest_EventScript_Eevee_5:
# 34 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EventScript_Eevee_Text_0
# 37 "data/maps/BurntForest/scripts.pory"
	setfollowernpc 2 0x0 BurntForest_EventScript_EeveeFollow
# 38 "data/maps/BurntForest/scripts.pory"
	setvar 0x40F7, 1
# 39 "data/maps/BurntForest/scripts.pory"
	removeobject 0
# 40 "data/maps/BurntForest/scripts.pory"
	setflag 0x25
# 41 "data/maps/BurntForest/scripts.pory"
	releaseall
	goto BurntForest_EventScript_Eevee_4


BurntForest_Trigger_BlockExit::
# 63 "data/maps/BurntForest/scripts.pory"
	lockall
# 64 "data/maps/BurntForest/scripts.pory"
	hidefollowernpc
# 65 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_Trigger_BlockExit_Text_0
# 67 "data/maps/BurntForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BlockExit
# 68 "data/maps/BurntForest/scripts.pory"
	waitmovement 0
# 69 "data/maps/BurntForest/scripts.pory"
	releaseall
	return


BurntForest_EeeveeTrainerScene::
# 73 "data/maps/BurntForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 74 "data/maps/BurntForest/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq BurntForest_EeeveeTrainerScene_4
BurntForest_EeeveeTrainerScene_3:
# 81 "data/maps/BurntForest/scripts.pory"
	lockall
# 82 "data/maps/BurntForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, TrainerFindRight
# 83 "data/maps/BurntForest/scripts.pory"
	waitmovement 0
# 84 "data/maps/BurntForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerShiftRight
# 85 "data/maps/BurntForest/scripts.pory"
	waitmovement
BurntForest_EeeveeTrainerScene_1:
# 87 "data/maps/BurntForest/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
# 88 "data/maps/BurntForest/scripts.pory"
	waitmoncry
# 89 "data/maps/BurntForest/scripts.pory"
	delay 16
# 90 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EeeveeTrainerScene_Text_0
# 94 "data/maps/BurntForest/scripts.pory"
	waitmessage
# 95 "data/maps/BurntForest/scripts.pory"
	waitbuttonpress
# 96 "data/maps/BurntForest/scripts.pory"
	closemessage
# 97 "data/maps/BurntForest/scripts.pory"
	delay 16
# 98 "data/maps/BurntForest/scripts.pory"
	delay 16
# 99 "data/maps/BurntForest/scripts.pory"
	delay 16
# 100 "data/maps/BurntForest/scripts.pory"
	delay 16
# 101 "data/maps/BurntForest/scripts.pory"
	playse SE_PIN
# 102 "data/maps/BurntForest/scripts.pory"
	delay 8
# 103 "data/maps/BurntForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Ghost
# 104 "data/maps/BurntForest/scripts.pory"
	waitmovement 0
# 105 "data/maps/BurntForest/scripts.pory"
	delay 16
# 106 "data/maps/BurntForest/scripts.pory"
	delay 16
# 107 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EeeveeTrainerScene_Text_1
# 110 "data/maps/BurntForest/scripts.pory"
	waitmessage
# 111 "data/maps/BurntForest/scripts.pory"
	waitbuttonpress
# 112 "data/maps/BurntForest/scripts.pory"
	closemessage
# 113 "data/maps/BurntForest/scripts.pory"
	delay 16
# 114 "data/maps/BurntForest/scripts.pory"
	delay 16
# 115 "data/maps/BurntForest/scripts.pory"
	delay 16
# 116 "data/maps/BurntForest/scripts.pory"
	delay 16
# 117 "data/maps/BurntForest/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, EeveeJoin
# 118 "data/maps/BurntForest/scripts.pory"
	waitmovement 0
# 119 "data/maps/BurntForest/scripts.pory"
	delay 16
# 120 "data/maps/BurntForest/scripts.pory"
	delay 16
# 121 "data/maps/BurntForest/scripts.pory"
	delay 16
# 122 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EeeveeTrainerScene_Text_2
# 125 "data/maps/BurntForest/scripts.pory"
	delay 16
# 126 "data/maps/BurntForest/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
# 127 "data/maps/BurntForest/scripts.pory"
	waitmoncry
# 128 "data/maps/BurntForest/scripts.pory"
	delay 16
# 129 "data/maps/BurntForest/scripts.pory"
	destroyfollowernpc
# 130 "data/maps/BurntForest/scripts.pory"
	setvar 0x40F7, 0
# 131 "data/maps/BurntForest/scripts.pory"
	removeitem ITEM_POKE_BALL
# 132 "data/maps/BurntForest/scripts.pory"
	setflag FLAG_EEVEE_OBTAINED
# 133 "data/maps/BurntForest/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE, move1 = MOVE_MIRROR_MOVE, move2 = MOVE_HELPING_HAND, move3 = MOVE_BITE, move4 = MOVE_FREEZE_DRY
# 134 "data/maps/BurntForest/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 135 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EeeveeTrainerScene_Text_3
# 136 "data/maps/BurntForest/scripts.pory"
	call NicknameEevee
	end

BurntForest_EeeveeTrainerScene_2:
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
	goto BurntForest_EeeveeTrainerScene_1

BurntForest_EeeveeTrainerScene_4:
# 74 "data/maps/BurntForest/scripts.pory"
	compare VAR_TEMP_1, 7
	goto_if_eq BurntForest_EeeveeTrainerScene_2
	goto BurntForest_EeeveeTrainerScene_3


# 140 "data/maps/BurntForest/scripts.pory"
TrainerFindLeft:
# 141 "data/maps/BurntForest/scripts.pory"
	walk_right
# 142 "data/maps/BurntForest/scripts.pory"
	walk_up
# 143 "data/maps/BurntForest/scripts.pory"
	walk_up
# 144 "data/maps/BurntForest/scripts.pory"
	walk_up
# 145 "data/maps/BurntForest/scripts.pory"
	face_left
# 146 "data/maps/BurntForest/scripts.pory"
	delay_16
	step_end

# 149 "data/maps/BurntForest/scripts.pory"
TrainerFindRight:
# 150 "data/maps/BurntForest/scripts.pory"
	walk_left
# 151 "data/maps/BurntForest/scripts.pory"
	walk_up
# 152 "data/maps/BurntForest/scripts.pory"
	walk_up
# 153 "data/maps/BurntForest/scripts.pory"
	walk_right
# 154 "data/maps/BurntForest/scripts.pory"
	walk_up
# 155 "data/maps/BurntForest/scripts.pory"
	face_left
# 156 "data/maps/BurntForest/scripts.pory"
	delay_16
	step_end

# 159 "data/maps/BurntForest/scripts.pory"
PlayerShiftLeft:
# 160 "data/maps/BurntForest/scripts.pory"
	walk_up
# 161 "data/maps/BurntForest/scripts.pory"
	delay_16
	step_end

# 164 "data/maps/BurntForest/scripts.pory"
PlayerShiftRight:
# 165 "data/maps/BurntForest/scripts.pory"
	walk_left
# 166 "data/maps/BurntForest/scripts.pory"
	walk_up
# 167 "data/maps/BurntForest/scripts.pory"
	delay_16
	step_end

# 170 "data/maps/BurntForest/scripts.pory"
Ghost:
# 171 "data/maps/BurntForest/scripts.pory"
	emote_exclamation_mark
# 172 "data/maps/BurntForest/scripts.pory"
	delay_16
# 173 "data/maps/BurntForest/scripts.pory"
	delay_16
# 174 "data/maps/BurntForest/scripts.pory"
	delay_16
# 175 "data/maps/BurntForest/scripts.pory"
	delay_16
# 176 "data/maps/BurntForest/scripts.pory"
	face_right
# 177 "data/maps/BurntForest/scripts.pory"
	delay_16
# 178 "data/maps/BurntForest/scripts.pory"
	delay_16
# 179 "data/maps/BurntForest/scripts.pory"
	face_left
# 180 "data/maps/BurntForest/scripts.pory"
	delay_16
# 181 "data/maps/BurntForest/scripts.pory"
	delay_16
# 182 "data/maps/BurntForest/scripts.pory"
	face_up
# 183 "data/maps/BurntForest/scripts.pory"
	delay_16
# 184 "data/maps/BurntForest/scripts.pory"
	delay_16
# 185 "data/maps/BurntForest/scripts.pory"
	jump_in_place_up
# 186 "data/maps/BurntForest/scripts.pory"
	delay_8
# 187 "data/maps/BurntForest/scripts.pory"
	jump_in_place_up
# 188 "data/maps/BurntForest/scripts.pory"
	delay_8
# 189 "data/maps/BurntForest/scripts.pory"
	jump_in_place_up
# 190 "data/maps/BurntForest/scripts.pory"
	delay_16
# 191 "data/maps/BurntForest/scripts.pory"
	delay_16
	step_end

# 194 "data/maps/BurntForest/scripts.pory"
EeveeJoin:
# 195 "data/maps/BurntForest/scripts.pory"
	walk_down
# 196 "data/maps/BurntForest/scripts.pory"
	face_left
	step_end

# 199 "data/maps/BurntForest/scripts.pory"
EeveeShift:
# 200 "data/maps/BurntForest/scripts.pory"
	walk_down
	step_end

# 203 "data/maps/BurntForest/scripts.pory"
BlockExit:
# 204 "data/maps/BurntForest/scripts.pory"
	walk_right
	step_end

BurntForest_EventScript_EeveeFollow::
# 221 "data/maps/BurntForest/scripts.pory"
	lockall
# 222 "data/maps/BurntForest/scripts.pory"
	faceplayer
# 223 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EventScript_EeveeFollow_Text_0
# 224 "data/maps/BurntForest/scripts.pory"
	waitmessage
# 225 "data/maps/BurntForest/scripts.pory"
	releaseall
	end


BurntForest_EventScript_EeveeTrainer::
# 231 "data/maps/BurntForest/scripts.pory"
	lockall
# 232 "data/maps/BurntForest/scripts.pory"
	goto_if_set FLAG_EEVEE_OBTAINED, BurntForest_EventScript_EeveeTrainer_1
# 239 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EventScript_EeveeTrainer_Text_1
# 242 "data/maps/BurntForest/scripts.pory"
	waitmessage
# 243 "data/maps/BurntForest/scripts.pory"
	releaseall
	end

BurntForest_EventScript_EeveeTrainer_1:
# 233 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EventScript_EeveeTrainer_Text_0
# 234 "data/maps/BurntForest/scripts.pory"
	waitmessage
# 235 "data/maps/BurntForest/scripts.pory"
	releaseall
	end


NicknameEevee::
# 249 "data/maps/BurntForest/scripts.pory"
	msgbox NicknameEevee_Text_0, MSGBOX_YESNO
# 250 "data/maps/BurntForest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameEevee_1
# 255 "data/maps/BurntForest/scripts.pory"
	releaseall
	end

NicknameEevee_1:
# 251 "data/maps/BurntForest/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 252 "data/maps/BurntForest/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


BurntForest_EventScript_Ball_Text_0:
# 11 "data/maps/BurntForest/scripts.pory"
	.string "You take the Poké Ball. \n"
	.string "It is cold to the touch.$"

BurntForest_EventScript_Eevee_Text_0:
# 34 "data/maps/BurntForest/scripts.pory"
	.string "At the sight of the ball, Eevee's\n"
	.string "ears perk up.\p"
	.string "It begins to follow you.$"

BurntForest_EventScript_Eevee_Text_1:
# 52 "data/maps/BurntForest/scripts.pory"
	.string "It's a strange, blue Eevee.\p"
	.string "You try to approach, but it shies\n"
	.string "away from you.$"

BurntForest_Trigger_BlockExit_Text_0:
# 65 "data/maps/BurntForest/scripts.pory"
	.string "Eevee doesn't seem ready to\n"
	.string "leave the forest yet.$"

BurntForest_EeeveeTrainerScene_Text_0:
# 90 "data/maps/BurntForest/scripts.pory"
	.string "Upon seeing its former trainer,\n"
	.string "Eevee's ears fall low.\p"
	.string "Eevee gives the body a nudge,\n"
	.string "then settles down beside it.$"

BurntForest_EeeveeTrainerScene_Text_1:
# 107 "data/maps/BurntForest/scripts.pory"
	.string "Although you don't hear anything,\n"
	.string "Eevee's ears twitch as if it is\l"
	.string "listening to something.$"

BurntForest_EeeveeTrainerScene_Text_2:
# 122 "data/maps/BurntForest/scripts.pory"
	.string "Eevee looks at the empty Poké Ball\n"
	.string "in your hand.\p"
	.string "It seems like it wants to join you.$"

BurntForest_EeeveeTrainerScene_Text_3:
# 135 "data/maps/BurntForest/scripts.pory"
	.string "Eevee joined the party!$"

BurntForest_EventScript_EeveeFollow_Text_0:
# 223 "data/maps/BurntForest/scripts.pory"
	.string "Eevee is following you cautiously.$"

BurntForest_EventScript_EeveeTrainer_Text_0:
# 233 "data/maps/BurntForest/scripts.pory"
	.string "It's Eevee's original trainer.$"

BurntForest_EventScript_EeveeTrainer_Text_1:
# 239 "data/maps/BurntForest/scripts.pory"
	.string "A Pokémon trainer, succumbed to the\n"
	.string "oppressive heat of the forest.\p"
	.string "He is not breathing.$"

NicknameEevee_Text_0:
# 249 "data/maps/BurntForest/scripts.pory"
	.string "Give Eevee a nickname?$"

TakeBall::
# 208 "data/maps/BurntForest/scripts.pory"
	.string "It's an abandoned Poké Ball.\n"
	.string "Take it?$"

EeveeBallUse::
# 213 "data/maps/BurntForest/scripts.pory"
	.string "It's a strange, blue Eevee.\p"
	.string "Even through the heat of the forest,\n"
	.string "cold air radiates off it.\p"
	.string "Show Eevee the Poké Ball?$"

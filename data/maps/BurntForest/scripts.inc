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
# 48 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EventScript_Eevee_Text_1
# 51 "data/maps/BurntForest/scripts.pory"
	waitmessage
# 52 "data/maps/BurntForest/scripts.pory"
	releaseall
	end

BurntForest_EventScript_Eevee_1:
# 34 "data/maps/BurntForest/scripts.pory"
	msgbox EeveeBallUse, MSGBOX_YESNO
# 35 "data/maps/BurntForest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BurntForest_EventScript_Eevee_5
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
# 59 "data/maps/BurntForest/scripts.pory"
	lockall
# 60 "data/maps/BurntForest/scripts.pory"
	hidefollowernpc
# 61 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_Trigger_BlockExit_Text_0
# 63 "data/maps/BurntForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BlockExit
# 64 "data/maps/BurntForest/scripts.pory"
	waitmovement 0
# 65 "data/maps/BurntForest/scripts.pory"
	releaseall
	return


# 68 "data/maps/BurntForest/scripts.pory"
EeveeShift:
# 69 "data/maps/BurntForest/scripts.pory"
	walk_down
	step_end

# 72 "data/maps/BurntForest/scripts.pory"
BlockExit:
# 73 "data/maps/BurntForest/scripts.pory"
	walk_right
	step_end

BurntForest_EventScript_EeveeFollow::
# 94 "data/maps/BurntForest/scripts.pory"
	lockall
# 95 "data/maps/BurntForest/scripts.pory"
	faceplayer
# 96 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EventScript_EeveeFollow_Text_0
# 97 "data/maps/BurntForest/scripts.pory"
	waitmessage
# 98 "data/maps/BurntForest/scripts.pory"
	releaseall
	end


BurntForest_EventScript_EeveeTrainer::
# 104 "data/maps/BurntForest/scripts.pory"
	lockall
# 105 "data/maps/BurntForest/scripts.pory"
	msgbox BurntForest_EventScript_EeveeTrainer_Text_0
# 108 "data/maps/BurntForest/scripts.pory"
	waitmessage
# 109 "data/maps/BurntForest/scripts.pory"
	releaseall
	end


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
# 48 "data/maps/BurntForest/scripts.pory"
	.string "It's a strange, blue eevee.\p"
	.string "You try to approach, but it shies\n"
	.string "away from you.$"

BurntForest_Trigger_BlockExit_Text_0:
# 61 "data/maps/BurntForest/scripts.pory"
	.string "Eevee doesn't seem ready to leave\n"
	.string "the forest.$"

BurntForest_EventScript_EeveeFollow_Text_0:
# 96 "data/maps/BurntForest/scripts.pory"
	.string "Eevee is following you cautiously.$"

BurntForest_EventScript_EeveeTrainer_Text_0:
# 105 "data/maps/BurntForest/scripts.pory"
	.string "A pokemon trainer, succumbed to the\n"
	.string "oppressive heat of the forest.\p"
	.string "He is not breathing.$"

TakeBall::
# 77 "data/maps/BurntForest/scripts.pory"
	.string "It's an abandoned pokeball.\n"
	.string "Take it?$"

LeftBall::
# 82 "data/maps/BurntForest/scripts.pory"
	.string "You decide to leave it.$"

EeveeBallUse::
# 86 "data/maps/BurntForest/scripts.pory"
	.string "It's a strange, blue eevee.\p"
	.string "Even through the heat of the forest,\n"
	.string "cold air radiates off it.\p"
	.string "Show Eevee the pokeball?$"

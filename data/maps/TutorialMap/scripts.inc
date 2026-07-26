TutorialMap_MapScripts::
	.byte 0


Wooden_Sign::
# 4 "data/maps/TutorialMap/scripts.pory"
	lockall
# 5 "data/maps/TutorialMap/scripts.pory"
	msgbox Wooden_Sign_Text_0
# 6 "data/maps/TutorialMap/scripts.pory"
	releaseall
	end


Metal_Sign::
# 11 "data/maps/TutorialMap/scripts.pory"
	lockall
# 12 "data/maps/TutorialMap/scripts.pory"
	msgbox Metal_Sign_Text_0
# 14 "data/maps/TutorialMap/scripts.pory"
	releaseall
	end


Master_Balls::
# 19 "data/maps/TutorialMap/scripts.pory"
	lockall
# 20 "data/maps/TutorialMap/scripts.pory"
	msgbox Master_Balls_Text_0
# 22 "data/maps/TutorialMap/scripts.pory"
	giveitem ITEM_MASTER_BALL, 10
# 23 "data/maps/TutorialMap/scripts.pory"
	removeobject 1
# 24 "data/maps/TutorialMap/scripts.pory"
	setflag FLAG_HIDE_BALL_BAG
# 25 "data/maps/TutorialMap/scripts.pory"
	releaseall
	end


Wooden_Sign_Text_0:
# 5 "data/maps/TutorialMap/scripts.pory"
	.string "You found the secret village. Congrats!$"

Metal_Sign_Text_0:
# 12 "data/maps/TutorialMap/scripts.pory"
	.string "Wow, you found the secret area \n"
	.string "of the secret village! Well done!$"

Master_Balls_Text_0:
# 20 "data/maps/TutorialMap/scripts.pory"
	.string "Someone left a bunch of Master\n"
	.string "Balls in this bag. How convenient!$"

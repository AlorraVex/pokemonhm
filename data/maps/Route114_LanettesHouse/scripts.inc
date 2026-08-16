# 1 "data/maps/Route114_LanettesHouse/scripts.pory"

# 2 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_Notebook::
# 3 "data/maps/Route114_LanettesHouse/scripts.pory"
	lockall
# 4 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage1, MSGBOX_YESNO
# 5 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route114_LanettesHouse_EventScript_NotebookPage2
# 6 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ClosedTheNotebook, MSGBOX_DEFAULT
# 7 "data/maps/Route114_LanettesHouse/scripts.pory"
	releaseall
# 8 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 9 "data/maps/Route114_LanettesHouse/scripts.pory"

# 10 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_NotebookPage2::
# 11 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage2, MSGBOX_YESNO
# 12 "data/maps/Route114_LanettesHouse/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route114_LanettesHouse_EventScript_NotebookPage3
# 13 "data/maps/Route114_LanettesHouse/scripts.pory"
	releaseall
# 14 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 15 "data/maps/Route114_LanettesHouse/scripts.pory"

# 16 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_NotebookPage3::
# 17 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage3, MSGBOX_DEFAULT
# 18 "data/maps/Route114_LanettesHouse/scripts.pory"
	return
# 19 "data/maps/Route114_LanettesHouse/scripts.pory"

# 20 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_PC::
# 21 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_EmailFromBill, MSGBOX_SIGN
# 22 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 23 "data/maps/Route114_LanettesHouse/scripts.pory"

# 24 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage1:
# 25 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "It's LANETTE's notebook.\p"
# 26 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Meteor Falls has become a popular\n"
# 27 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "gathering place for DRAGON trainers.\p"
# 28 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Someone even set up a statue to keep out\n"
# 29 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "trainers who don't have a DRAGON move!\p"
# 30 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Keep reading?$"
# 31 "data/maps/Route114_LanettesHouse/scripts.pory"

# 32 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage2:
# 33 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Aspiring DRAGON trainers keep breaking\n"
# 34 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "into my berry garden to feed the local\l"
# 35 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "NOIBATS.\p"
# 36 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "I've put up some fences and hidden the\n"
# 37 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "garden's key on a ledge in the mountains.\p"
# 38 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Keep reading?$"
# 39 "data/maps/Route114_LanettesHouse/scripts.pory"

# 40 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage3:
# 41 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "A group of people dressed in orange\n"
# 42 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "and white have moved into Meteor Falls.\p"
# 43 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "They call themselves TEAM RADIANT.\l"
# 44 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Brought a bunch of high-tech equipment\n"
# 45 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "with them. Setting up a lab of some\l"
# 46 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "kind? I'd love to get a look at it.\p"
# 47 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "PS: The DRAGON trainers are very\n"
# 48 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "upset.$"
# 49 "data/maps/Route114_LanettesHouse/scripts.pory"

# 50 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ClosedTheNotebook:
# 51 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "You closed the notebook.$"
# 52 "data/maps/Route114_LanettesHouse/scripts.pory"

# 53 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_EmailFromBill:
# 54 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Hey Lanette, what's going on over in\n"
# 55 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Hoenn?\p"
# 56 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "The news is saying there's a hurricane,\n"
# 57 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "or maybe an earthquake?\p"
# 58 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "I haven't been able to get in touch\n"
# 59 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "with anyone in the region.\p"
# 60 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "We're preparing a team to come and\n"
# 61 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "investigate whatever is happening.\p"
# 62 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Let me know if there's anything else\n"
# 63 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "I can do to help.\p"
# 64 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "From BILL$"

Route114_LanettesHouse_MapScripts::
# 68 "data/maps/Route114_LanettesHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LanettesHouse_OnTransition
	.byte 0


LanettesHouse_OnTransition::
# 72 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_set FLAG_BERRY_GARDEN_OPEN, LanettesHouse_OnTransition_1
	return

LanettesHouse_OnTransition_1:
# 73 "data/maps/Route114_LanettesHouse/scripts.pory"
	setmetatile 10, 4, 0x296, 0
	return


Route114_EventScript_SecretDoor::
# 78 "data/maps/Route114_LanettesHouse/scripts.pory"
	lockall
# 79 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_BERRY_KEY, Route114_EventScript_SecretDoor_2
# 93 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_EventScript_SecretDoor_Text_0
# 94 "data/maps/Route114_LanettesHouse/scripts.pory"
	releaseall
	end

Route114_EventScript_SecretDoor_1:
# 97 "data/maps/Route114_LanettesHouse/scripts.pory"
	releaseall
	end

Route114_EventScript_SecretDoor_2:
# 80 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox OpenDoor, MSGBOX_YESNO
# 81 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route114_EventScript_SecretDoor_5
# 89 "data/maps/Route114_LanettesHouse/scripts.pory"
	releaseall
	end

Route114_EventScript_SecretDoor_5:
# 82 "data/maps/Route114_LanettesHouse/scripts.pory"
	playse SE_PIN
# 83 "data/maps/Route114_LanettesHouse/scripts.pory"
	waitse
# 84 "data/maps/Route114_LanettesHouse/scripts.pory"
	setmetatile 10, 4, 0x296, 0
# 85 "data/maps/Route114_LanettesHouse/scripts.pory"
	special DrawWholeMapView
# 86 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_BERRY_GARDEN_OPEN
	goto Route114_EventScript_SecretDoor_1


Route114_EventScript_SecretDoor_Text_0:
# 93 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "There's a locked door here.$"

OpenDoor::
# 101 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "There's a locked door here. Try the\n"
	.string "Berry Key?$"

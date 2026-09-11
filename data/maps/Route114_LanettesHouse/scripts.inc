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
Route114_LanettesHouse_Text_ResearchNotesPage1:
# 21 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "It's LANETTE's notebook.\p"
# 22 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Meteor Falls has become a popular\n"
# 23 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "gathering place for DRAGON trainers.\p"
# 24 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "They have even set up a statue to\n"
# 25 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "keep out anyone who doesn't have\l"
# 26 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "a DRAGON Pokémon!\p"
# 27 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Keep reading?$"
# 28 "data/maps/Route114_LanettesHouse/scripts.pory"

# 29 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage2:
# 30 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Aspiring DRAGON trainers keep\n"
# 31 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "breaking into my berry garden to\l"
# 32 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "feed the local NOIBAT.\p"
# 33 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "I've put up some fences and hidden\n"
# 34 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "the garden's spare key on a ledge\l"
# 35 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "in the mountains.\p"
# 36 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Keep reading?$"
# 37 "data/maps/Route114_LanettesHouse/scripts.pory"

# 38 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage3:
# 39 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "A group of people dressed in orange\n"
# 40 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "and white have moved into Meteor Falls.\p"
# 41 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "They call themselves TEAM RADIANT.\p"
# 42 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "There was a lot of high-tech equipment\n"
# 43 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "with them. Setting up a lab of some\l"
# 44 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "kind? I'd love to get a look at it.\p"
# 45 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "PS: The DRAGON trainers are very upset.$"
# 46 "data/maps/Route114_LanettesHouse/scripts.pory"

# 47 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ClosedTheNotebook:
# 48 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "You closed the notebook.$"

Route114_LanettesHouse_MapScripts::
	.byte 0


Route114_LanettesHouse_EventScript_PC::
# 55 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox MessageFromBill, MSGBOX_SIGN
	end


Route114_LanettesHouse_PokeBall::
# 61 "data/maps/Route114_LanettesHouse/scripts.pory"
	lockall
# 62 "data/maps/Route114_LanettesHouse/scripts.pory"
	giveitem ITEM_POKE_BALL
# 63 "data/maps/Route114_LanettesHouse/scripts.pory"
	releaseall
	end


MessageFromBill::
# 67 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "There's an email open on the computer.\p"
	.string "“Hey Lanette, what's going on over\n"
	.string "in Hoenn?\p"
	.string "The news is saying there's a hurricane,\n"
	.string "or maybe an earthquake?\p"
	.string "I haven't been able to get in touch\n"
	.string "with anyone in the region.\p"
	.string "We're preparing a team to come and\n"
	.string "investigate whatever is happening.\p"
	.string "Let me know if there's anything else\n"
	.string "I can do to help.\p"
	.string "From BILL”$"

RadiantBunker_MapScripts::
# 2 "data/maps/RadiantBunker/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RadiantBunker_OnTransition
# 3 "data/maps/RadiantBunker/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RadiantBunker_OnResume
	.byte 0


RadiantBunker_OnTransition::
# 10 "data/maps/RadiantBunker/scripts.pory"
	goto_if_set 0x22, RadiantBunker_OnTransition_2
# 20 "data/maps/RadiantBunker/scripts.pory"
	setflashlevel 7
RadiantBunker_OnTransition_1:
# 23 "data/maps/RadiantBunker/scripts.pory"
	goto_if_set 0x20, RadiantBunker_OnTransition_5
	return

RadiantBunker_OnTransition_2:
# 11 "data/maps/RadiantBunker/scripts.pory"
	setflashlevel 0
# 12 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 4, 9, 0x2E7, 0
# 13 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 5, 9, 0x2E7, 0
# 14 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 6, 9, 0x2E7, 0
# 15 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 4, 10, 0x2E6, 0
# 16 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 5, 10, 0x2E6, 0
# 17 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 6, 10, 0x2E6, 0
	goto RadiantBunker_OnTransition_1

RadiantBunker_OnTransition_5:
# 24 "data/maps/RadiantBunker/scripts.pory"
	removeobject 1
	return


RadiantBunker_OnResume::
# 30 "data/maps/RadiantBunker/scripts.pory"
	goto_if_set 0x22, RadiantBunker_OnResume_1
	return

RadiantBunker_OnResume_1:
# 31 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 4, 9, 0x2E7, 0
# 32 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 5, 9, 0x2E7, 0
# 33 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 6, 9, 0x2E7, 0
# 34 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 4, 10, 0x2E6, 0
# 35 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 5, 10, 0x2E6, 0
# 36 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 6, 10, 0x2E6, 0
	return


RadiantBunker_EventScript_Password::
# 44 "data/maps/RadiantBunker/scripts.pory"
	lockall
# 45 "data/maps/RadiantBunker/scripts.pory"
	msgbox Computer, MSGBOX_YESNO
# 46 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RadiantBunker_EventScript_Password_1
# 58 "data/maps/RadiantBunker/scripts.pory"
	releaseall
	end

RadiantBunker_EventScript_Password_1:
# 47 "data/maps/RadiantBunker/scripts.pory"
	special EnterCode
# 48 "data/maps/RadiantBunker/scripts.pory"
	waitstate
# 49 "data/maps/RadiantBunker/scripts.pory"
	special GetPasswordFeedback
# 50 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RadiantBunker_EventScript_Password_5
RadiantBunker_EventScript_Password_4:
# 54 "data/maps/RadiantBunker/scripts.pory"
	releaseall
	end

RadiantBunker_EventScript_Password_5:
# 51 "data/maps/RadiantBunker/scripts.pory"
	setflag FLAG_PASSWORD_ENTERED
# 52 "data/maps/RadiantBunker/scripts.pory"
	msgbox RadiantBunker_EventScript_Password_Text_0
	goto RadiantBunker_EventScript_Password_4


RadiantBunker_EventScript_Starter::
# 66 "data/maps/RadiantBunker/scripts.pory"
	lockall
# 67 "data/maps/RadiantBunker/scripts.pory"
	msgbox StarterChoice, MSGBOX_YESNO
# 68 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RadiantBunker_EventScript_Starter_1
# 82 "data/maps/RadiantBunker/scripts.pory"
	msgbox Starter_NotChosen
# 83 "data/maps/RadiantBunker/scripts.pory"
	waitmessage
# 84 "data/maps/RadiantBunker/scripts.pory"
	releaseall
	end

RadiantBunker_EventScript_Starter_1:
# 69 "data/maps/RadiantBunker/scripts.pory"
	givemon SPECIES_PICHU_SPIKY_EARED, 5, ITEM_NONE, move1 = MOVE_TAIL_WHIP, move2 = MOVE_THUNDERSHOCK, move3 = MOVE_SWEET_KISS, move4 = MOVE_WISH
# 70 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RadiantBunker_EventScript_Starter_5
RadiantBunker_EventScript_Starter_4:
	end

RadiantBunker_EventScript_Starter_5:
# 71 "data/maps/RadiantBunker/scripts.pory"
	msgbox RadiantBunker_EventScript_Starter_Text_0
# 72 "data/maps/RadiantBunker/scripts.pory"
	removeobject 1
# 73 "data/maps/RadiantBunker/scripts.pory"
	setflag 0x20
# 74 "data/maps/RadiantBunker/scripts.pory"
	setflag FLAG_SYS_BAG_GET
# 75 "data/maps/RadiantBunker/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 76 "data/maps/RadiantBunker/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 77 "data/maps/RadiantBunker/scripts.pory"
	call NicknamePichu
	goto RadiantBunker_EventScript_Starter_4


RadiantBunker_EventScript_Generator::
# 91 "data/maps/RadiantBunker/scripts.pory"
	lockall
# 92 "data/maps/RadiantBunker/scripts.pory"
	goto_if_unset 0x20, RadiantBunker_EventScript_Generator_1
# 97 "data/maps/RadiantBunker/scripts.pory"
	goto_if_unset 0x22, RadiantBunker_EventScript_Generator_2
	return

RadiantBunker_EventScript_Generator_1:
# 93 "data/maps/RadiantBunker/scripts.pory"
	msgbox RadiantBunker_EventScript_Generator_Text_0
# 95 "data/maps/RadiantBunker/scripts.pory"
	releaseall
	end

RadiantBunker_EventScript_Generator_2:
# 98 "data/maps/RadiantBunker/scripts.pory"
	msgbox PowerGenerator, MSGBOX_YESNO
# 99 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RadiantBunker_EventScript_Generator_6
RadiantBunker_EventScript_Generator_5:
# 137 "data/maps/RadiantBunker/scripts.pory"
	releaseall
	end

RadiantBunker_EventScript_Generator_6:
# 100 "data/maps/RadiantBunker/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RadiantBunker_EventScript_Generator_Text_1, RadiantBunker_EventScript_Generator_Text_2, RadiantBunker_EventScript_Generator_Text_3, RadiantBunker_EventScript_Generator_Text_4
# 101 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RadiantBunker_EventScript_Generator_8
# 106 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RadiantBunker_EventScript_Generator_9
# 111 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RadiantBunker_EventScript_Generator_10
# 116 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RadiantBunker_EventScript_Generator_11
	goto RadiantBunker_EventScript_Generator_5

RadiantBunker_EventScript_Generator_8:
# 102 "data/maps/RadiantBunker/scripts.pory"
	msgbox RadiantBunker_EventScript_Generator_Text_5
	goto RadiantBunker_EventScript_Generator_5

RadiantBunker_EventScript_Generator_9:
# 107 "data/maps/RadiantBunker/scripts.pory"
	msgbox RadiantBunker_EventScript_Generator_Text_6
	goto RadiantBunker_EventScript_Generator_5

RadiantBunker_EventScript_Generator_10:
# 112 "data/maps/RadiantBunker/scripts.pory"
	msgbox RadiantBunker_EventScript_Generator_Text_7
	goto RadiantBunker_EventScript_Generator_5

RadiantBunker_EventScript_Generator_11:
# 117 "data/maps/RadiantBunker/scripts.pory"
	delay 16
# 118 "data/maps/RadiantBunker/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 119 "data/maps/RadiantBunker/scripts.pory"
	waitmoncry
# 120 "data/maps/RadiantBunker/scripts.pory"
	delay 16
# 121 "data/maps/RadiantBunker/scripts.pory"
	playse SE_M_THUNDERBOLT
# 122 "data/maps/RadiantBunker/scripts.pory"
	delay 16
# 123 "data/maps/RadiantBunker/scripts.pory"
	msgbox UseThundershock
# 124 "data/maps/RadiantBunker/scripts.pory"
	animateflash 0
# 125 "data/maps/RadiantBunker/scripts.pory"
	setflashlevel 0
# 126 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 4, 9, 0x2E7, 0
# 127 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 5, 9, 0x2E7, 0
# 128 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 6, 9, 0x2E7, 0
# 129 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 4, 10, 0x2E6, 0
# 130 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 5, 10, 0x2E6, 0
# 131 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 6, 10, 0x2E6, 0
# 132 "data/maps/RadiantBunker/scripts.pory"
	special DrawWholeMapView
# 133 "data/maps/RadiantBunker/scripts.pory"
	setflag 0x22
	goto RadiantBunker_EventScript_Generator_5


NicknamePichu::
# 159 "data/maps/RadiantBunker/scripts.pory"
	msgbox NicknamePichu_Text_0, MSGBOX_YESNO
# 160 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePichu_1
# 164 "data/maps/RadiantBunker/scripts.pory"
	updatefollowingmon
# 165 "data/maps/RadiantBunker/scripts.pory"
	releaseall
	end

NicknamePichu_1:
# 161 "data/maps/RadiantBunker/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 162 "data/maps/RadiantBunker/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 173 "data/maps/RadiantBunker/scripts.pory"
	msgbox NicknamePichu_Text_0, MSGBOX_YESNO
# 174 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 177 "data/maps/RadiantBunker/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 175 "data/maps/RadiantBunker/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


RadiantBunker_EventScript_Password_Text_0:
# 52 "data/maps/RadiantBunker/scripts.pory"
	.string "Password successfully entered.$"

RadiantBunker_EventScript_Starter_Text_0:
# 71 "data/maps/RadiantBunker/scripts.pory"
	.string "You received a Pichu and the Bag.$"

RadiantBunker_EventScript_Generator_Text_0:
# 93 "data/maps/RadiantBunker/scripts.pory"
	.string "It's a generator.\n"
	.string "It does not seem to be powered.$"

RadiantBunker_EventScript_Generator_Text_1:
# 100 "data/maps/RadiantBunker/scripts.pory"
	.string "Tail Whip$"

RadiantBunker_EventScript_Generator_Text_2:
# 100 "data/maps/RadiantBunker/scripts.pory"
	.string "Thundershock$"

RadiantBunker_EventScript_Generator_Text_3:
# 100 "data/maps/RadiantBunker/scripts.pory"
	.string "Sweet Kiss$"

RadiantBunker_EventScript_Generator_Text_4:
# 100 "data/maps/RadiantBunker/scripts.pory"
	.string "Wish$"

RadiantBunker_EventScript_Generator_Text_5:
# 102 "data/maps/RadiantBunker/scripts.pory"
	.string "Pichu whipped the generator with its\n"
	.string "tail.\p"
	.string "The generator seems unimpressed.$"

RadiantBunker_EventScript_Generator_Text_6:
# 107 "data/maps/RadiantBunker/scripts.pory"
	.string "Pichu gave the generator a little kiss.\p"
	.string "Although flattered, the generator\n"
	.string "remains off.$"

RadiantBunker_EventScript_Generator_Text_7:
# 112 "data/maps/RadiantBunker/scripts.pory"
	.string "Pichu wished for the generator to turn\n"
	.string "on.\p"
	.string "Unfortunately, Jirachi did not hear it.$"

NicknamePichu_Text_0:
# 159 "data/maps/RadiantBunker/scripts.pory"
	.string "Give Pichu a nickname?$"

NicknameBoxMon_Text_0:
# 177 "data/maps/RadiantBunker/scripts.pory"
	.string "Pichu was transferred to the PC.$"

PowerGenerator::
# 143 "data/maps/RadiantBunker/scripts.pory"
	.string "It's an unpowered generator.\n"
	.string "Have Pichu use a move?$"

UseThundershock::
# 148 "data/maps/RadiantBunker/scripts.pory"
	.string "Pichu powered up the generator with\n"
	.string "Thundershock!$"

StarterChoice::
# 153 "data/maps/RadiantBunker/scripts.pory"
	.string "There's a Poké Ball in the bag. \n"
	.string "Take it?$"

Starter_NotChosen::
# 181 "data/maps/RadiantBunker/scripts.pory"
	.string "You decided to leave it.$"

Computer::
# 185 "data/maps/RadiantBunker/scripts.pory"
	.string "Teleporter Status: Off\n"
	.string "Underpass Passage: Closed\p"
	.string "Enter password?$"

Correct_Password::
# 191 "data/maps/RadiantBunker/scripts.pory"
	.string "Eternity$"

RadiantBunker_MapScripts::
# 2 "data/maps/RadiantBunker/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RadiantBunker_OnTransition
# 3 "data/maps/RadiantBunker/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, RadiantBunker_OnResume
	.byte 0


RadiantBunker_OnTransition::
# 10 "data/maps/RadiantBunker/scripts.pory"
	goto_if_set 0x22, RadiantBunker_OnTransition_1
# 20 "data/maps/RadiantBunker/scripts.pory"
	setflashlevel 7
	return

RadiantBunker_OnTransition_1:
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
	return


RadiantBunker_OnResume::
# 26 "data/maps/RadiantBunker/scripts.pory"
	goto_if_set 0x22, RadiantBunker_OnResume_1
	return

RadiantBunker_OnResume_1:
# 27 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 4, 9, 0x2E7, 0
# 28 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 5, 9, 0x2E7, 0
# 29 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 6, 9, 0x2E7, 0
# 30 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 4, 10, 0x2E6, 0
# 31 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 5, 10, 0x2E6, 0
# 32 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 6, 10, 0x2E6, 0
	return


RadiantBunker_EventScript_Password::
# 40 "data/maps/RadiantBunker/scripts.pory"
	lockall
# 41 "data/maps/RadiantBunker/scripts.pory"
	msgbox Computer, MSGBOX_YESNO
# 42 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RadiantBunker_EventScript_Password_1
# 54 "data/maps/RadiantBunker/scripts.pory"
	releaseall
	end

RadiantBunker_EventScript_Password_1:
# 43 "data/maps/RadiantBunker/scripts.pory"
	special EnterCode
# 44 "data/maps/RadiantBunker/scripts.pory"
	waitstate
# 45 "data/maps/RadiantBunker/scripts.pory"
	special GetPasswordFeedback
# 46 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RadiantBunker_EventScript_Password_5
RadiantBunker_EventScript_Password_4:
# 50 "data/maps/RadiantBunker/scripts.pory"
	releaseall
	end

RadiantBunker_EventScript_Password_5:
# 47 "data/maps/RadiantBunker/scripts.pory"
	setflag FLAG_PASSWORD_ENTERED
# 48 "data/maps/RadiantBunker/scripts.pory"
	msgbox RadiantBunker_EventScript_Password_Text_0
	goto RadiantBunker_EventScript_Password_4


RadiantBunker_EventScript_Starter::
# 62 "data/maps/RadiantBunker/scripts.pory"
	lockall
# 63 "data/maps/RadiantBunker/scripts.pory"
	msgbox StarterChoice, MSGBOX_YESNO
# 64 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RadiantBunker_EventScript_Starter_1
# 78 "data/maps/RadiantBunker/scripts.pory"
	msgbox Starter_NotChosen
# 79 "data/maps/RadiantBunker/scripts.pory"
	waitmessage
# 80 "data/maps/RadiantBunker/scripts.pory"
	releaseall
	end

RadiantBunker_EventScript_Starter_1:
# 65 "data/maps/RadiantBunker/scripts.pory"
	givemon SPECIES_PICHU_SPIKY_EARED, 5, ITEM_NONE, move1 = MOVE_TAIL_WHIP, move2 = MOVE_THUNDERSHOCK, move3 = MOVE_SWEET_KISS, move4 = MOVE_WISH
# 66 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RadiantBunker_EventScript_Starter_5
RadiantBunker_EventScript_Starter_4:
	end

RadiantBunker_EventScript_Starter_5:
# 67 "data/maps/RadiantBunker/scripts.pory"
	msgbox RadiantBunker_EventScript_Starter_Text_0
# 68 "data/maps/RadiantBunker/scripts.pory"
	removeobject 1
# 69 "data/maps/RadiantBunker/scripts.pory"
	setflag 0x20
# 70 "data/maps/RadiantBunker/scripts.pory"
	setflag FLAG_SYS_BAG_GET
# 71 "data/maps/RadiantBunker/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 72 "data/maps/RadiantBunker/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 73 "data/maps/RadiantBunker/scripts.pory"
	call NicknamePichu
	goto RadiantBunker_EventScript_Starter_4


RadiantBunker_EventScript_Generator::
# 87 "data/maps/RadiantBunker/scripts.pory"
	lockall
# 88 "data/maps/RadiantBunker/scripts.pory"
	goto_if_unset 0x20, RadiantBunker_EventScript_Generator_1
# 93 "data/maps/RadiantBunker/scripts.pory"
	goto_if_unset 0x22, RadiantBunker_EventScript_Generator_2
	return

RadiantBunker_EventScript_Generator_1:
# 89 "data/maps/RadiantBunker/scripts.pory"
	msgbox RadiantBunker_EventScript_Generator_Text_0
# 91 "data/maps/RadiantBunker/scripts.pory"
	releaseall
	end

RadiantBunker_EventScript_Generator_2:
# 94 "data/maps/RadiantBunker/scripts.pory"
	msgbox PowerGenerator, MSGBOX_YESNO
# 95 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RadiantBunker_EventScript_Generator_6
RadiantBunker_EventScript_Generator_5:
# 133 "data/maps/RadiantBunker/scripts.pory"
	releaseall
	end

RadiantBunker_EventScript_Generator_6:
# 96 "data/maps/RadiantBunker/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RadiantBunker_EventScript_Generator_Text_1, RadiantBunker_EventScript_Generator_Text_2, RadiantBunker_EventScript_Generator_Text_3, RadiantBunker_EventScript_Generator_Text_4
# 97 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RadiantBunker_EventScript_Generator_8
# 102 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RadiantBunker_EventScript_Generator_9
# 107 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RadiantBunker_EventScript_Generator_10
# 112 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RadiantBunker_EventScript_Generator_11
	goto RadiantBunker_EventScript_Generator_5

RadiantBunker_EventScript_Generator_8:
# 98 "data/maps/RadiantBunker/scripts.pory"
	msgbox RadiantBunker_EventScript_Generator_Text_5
	goto RadiantBunker_EventScript_Generator_5

RadiantBunker_EventScript_Generator_9:
# 103 "data/maps/RadiantBunker/scripts.pory"
	msgbox RadiantBunker_EventScript_Generator_Text_6
	goto RadiantBunker_EventScript_Generator_5

RadiantBunker_EventScript_Generator_10:
# 108 "data/maps/RadiantBunker/scripts.pory"
	msgbox RadiantBunker_EventScript_Generator_Text_7
	goto RadiantBunker_EventScript_Generator_5

RadiantBunker_EventScript_Generator_11:
# 113 "data/maps/RadiantBunker/scripts.pory"
	delay 16
# 114 "data/maps/RadiantBunker/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 115 "data/maps/RadiantBunker/scripts.pory"
	waitmoncry
# 116 "data/maps/RadiantBunker/scripts.pory"
	delay 16
# 117 "data/maps/RadiantBunker/scripts.pory"
	playse SE_M_THUNDERBOLT
# 118 "data/maps/RadiantBunker/scripts.pory"
	delay 16
# 119 "data/maps/RadiantBunker/scripts.pory"
	msgbox UseThundershock
# 120 "data/maps/RadiantBunker/scripts.pory"
	animateflash 0
# 121 "data/maps/RadiantBunker/scripts.pory"
	setflashlevel 0
# 122 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 4, 9, 0x2E7, 0
# 123 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 5, 9, 0x2E7, 0
# 124 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 6, 9, 0x2E7, 0
# 125 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 4, 10, 0x2E6, 0
# 126 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 5, 10, 0x2E6, 0
# 127 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 6, 10, 0x2E6, 0
# 128 "data/maps/RadiantBunker/scripts.pory"
	special DrawWholeMapView
# 129 "data/maps/RadiantBunker/scripts.pory"
	setflag 0x22
# 130 "data/maps/RadiantBunker/scripts.pory"
	removeobject 2
	goto RadiantBunker_EventScript_Generator_5


NicknamePichu::
# 154 "data/maps/RadiantBunker/scripts.pory"
	msgbox NicknamePichu_Text_0, MSGBOX_YESNO
# 155 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePichu_1
# 159 "data/maps/RadiantBunker/scripts.pory"
	updatefollowingmon
# 160 "data/maps/RadiantBunker/scripts.pory"
	releaseall
	end

NicknamePichu_1:
# 156 "data/maps/RadiantBunker/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 157 "data/maps/RadiantBunker/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 168 "data/maps/RadiantBunker/scripts.pory"
	msgbox NicknamePichu_Text_0, MSGBOX_YESNO
# 169 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 172 "data/maps/RadiantBunker/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 170 "data/maps/RadiantBunker/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


RadiantBunker_EventScript_Password_Text_0:
# 48 "data/maps/RadiantBunker/scripts.pory"
	.string "Password successfully entered.$"

RadiantBunker_EventScript_Starter_Text_0:
# 67 "data/maps/RadiantBunker/scripts.pory"
	.string "You received a Pichu and the Bag.$"

RadiantBunker_EventScript_Generator_Text_0:
# 89 "data/maps/RadiantBunker/scripts.pory"
	.string "It's a generator.\n"
	.string "It does not seem to be powered.$"

RadiantBunker_EventScript_Generator_Text_1:
# 96 "data/maps/RadiantBunker/scripts.pory"
	.string "Tail Whip$"

RadiantBunker_EventScript_Generator_Text_2:
# 96 "data/maps/RadiantBunker/scripts.pory"
	.string "Thundershock$"

RadiantBunker_EventScript_Generator_Text_3:
# 96 "data/maps/RadiantBunker/scripts.pory"
	.string "Sweet Kiss$"

RadiantBunker_EventScript_Generator_Text_4:
# 96 "data/maps/RadiantBunker/scripts.pory"
	.string "Wish$"

RadiantBunker_EventScript_Generator_Text_5:
# 98 "data/maps/RadiantBunker/scripts.pory"
	.string "Pichu whipped the generator\n"
	.string "with its tail.\p"
	.string "The generator seems unimpressed.$"

RadiantBunker_EventScript_Generator_Text_6:
# 103 "data/maps/RadiantBunker/scripts.pory"
	.string "Pichu gave the generator a little kiss.\p"
	.string "Although flattered, the generator\n"
	.string "remains off.$"

RadiantBunker_EventScript_Generator_Text_7:
# 108 "data/maps/RadiantBunker/scripts.pory"
	.string "Pichu wished for the generator\n"
	.string "to turn on.\p"
	.string "Unfortunately, Jirachi did not hear it.$"

NicknamePichu_Text_0:
# 154 "data/maps/RadiantBunker/scripts.pory"
	.string "Give Pichu a nickname?$"

NicknameBoxMon_Text_0:
# 172 "data/maps/RadiantBunker/scripts.pory"
	.string "Pichu was transferred to the PC.$"

PowerGenerator::
# 138 "data/maps/RadiantBunker/scripts.pory"
	.string "It's an unpowered generator.\n"
	.string "Have Pichu use a move?$"

UseThundershock::
# 143 "data/maps/RadiantBunker/scripts.pory"
	.string "Pichu powered up the generator with\n"
	.string "Thundershock!$"

StarterChoice::
# 148 "data/maps/RadiantBunker/scripts.pory"
	.string "There's a Poké Ball in the bag. \n"
	.string "Take it?$"

Starter_NotChosen::
# 176 "data/maps/RadiantBunker/scripts.pory"
	.string "You decided to leave it.$"

Computer::
# 180 "data/maps/RadiantBunker/scripts.pory"
	.string "Teleporter Status: Off\n"
	.string "Underpass Passage: Closed\p"
	.string "Enter password?$"

Correct_Password::
# 186 "data/maps/RadiantBunker/scripts.pory"
	.string "Eternity$"

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
# 42 "data/maps/RadiantBunker/scripts.pory"
	lockall
# 43 "data/maps/RadiantBunker/scripts.pory"
	msgbox Computer, MSGBOX_YESNO
# 44 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RadiantBunker_EventScript_Password_1
# 56 "data/maps/RadiantBunker/scripts.pory"
	releaseall
	end

RadiantBunker_EventScript_Password_1:
# 45 "data/maps/RadiantBunker/scripts.pory"
	special EnterCode
# 46 "data/maps/RadiantBunker/scripts.pory"
	waitstate
# 47 "data/maps/RadiantBunker/scripts.pory"
	special GetPasswordFeedback
# 48 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RadiantBunker_EventScript_Password_5
RadiantBunker_EventScript_Password_4:
# 52 "data/maps/RadiantBunker/scripts.pory"
	releaseall
	end

RadiantBunker_EventScript_Password_5:
# 49 "data/maps/RadiantBunker/scripts.pory"
	setflag FLAG_PASSWORD_ENTERED
# 50 "data/maps/RadiantBunker/scripts.pory"
	msgbox RadiantBunker_EventScript_Password_Text_0
	goto RadiantBunker_EventScript_Password_4


RadiantBunker_EventScript_Starter::
# 64 "data/maps/RadiantBunker/scripts.pory"
	lockall
# 65 "data/maps/RadiantBunker/scripts.pory"
	msgbox StarterChoice, MSGBOX_YESNO
# 66 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RadiantBunker_EventScript_Starter_1
# 80 "data/maps/RadiantBunker/scripts.pory"
	msgbox Starter_NotChosen
# 81 "data/maps/RadiantBunker/scripts.pory"
	waitmessage
# 82 "data/maps/RadiantBunker/scripts.pory"
	releaseall
	end

RadiantBunker_EventScript_Starter_1:
# 67 "data/maps/RadiantBunker/scripts.pory"
	givemon SPECIES_PICHU_SPIKY_EARED, 5, ITEM_NONE, move1 = MOVE_TAIL_WHIP, move2 = MOVE_THUNDERSHOCK, move3 = MOVE_SWEET_KISS, move4 = MOVE_WISH
# 68 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq RadiantBunker_EventScript_Starter_5
RadiantBunker_EventScript_Starter_4:
	end

RadiantBunker_EventScript_Starter_5:
# 69 "data/maps/RadiantBunker/scripts.pory"
	msgbox RadiantBunker_EventScript_Starter_Text_0
# 70 "data/maps/RadiantBunker/scripts.pory"
	removeobject 1
# 71 "data/maps/RadiantBunker/scripts.pory"
	setflag 0x20
# 72 "data/maps/RadiantBunker/scripts.pory"
	setflag FLAG_SYS_BAG_GET
# 73 "data/maps/RadiantBunker/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 74 "data/maps/RadiantBunker/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 75 "data/maps/RadiantBunker/scripts.pory"
	call NicknamePichu
	goto RadiantBunker_EventScript_Starter_4


RadiantBunker_EventScript_Generator::
# 89 "data/maps/RadiantBunker/scripts.pory"
	lockall
# 90 "data/maps/RadiantBunker/scripts.pory"
	goto_if_unset 0x20, RadiantBunker_EventScript_Generator_1
# 95 "data/maps/RadiantBunker/scripts.pory"
	goto_if_unset 0x22, RadiantBunker_EventScript_Generator_2
	return

RadiantBunker_EventScript_Generator_1:
# 91 "data/maps/RadiantBunker/scripts.pory"
	msgbox RadiantBunker_EventScript_Generator_Text_0
# 93 "data/maps/RadiantBunker/scripts.pory"
	releaseall
	end

RadiantBunker_EventScript_Generator_2:
# 96 "data/maps/RadiantBunker/scripts.pory"
	msgbox PowerGenerator, MSGBOX_YESNO
# 97 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RadiantBunker_EventScript_Generator_6
RadiantBunker_EventScript_Generator_5:
# 135 "data/maps/RadiantBunker/scripts.pory"
	releaseall
	end

RadiantBunker_EventScript_Generator_6:
# 98 "data/maps/RadiantBunker/scripts.pory"
	dynmultichoice 0, 0, TRUE, 4, 0, DYN_MULTICHOICE_CB_NONE, RadiantBunker_EventScript_Generator_Text_1, RadiantBunker_EventScript_Generator_Text_2, RadiantBunker_EventScript_Generator_Text_3, RadiantBunker_EventScript_Generator_Text_4
# 99 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RadiantBunker_EventScript_Generator_8
# 104 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq RadiantBunker_EventScript_Generator_9
# 109 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq RadiantBunker_EventScript_Generator_10
# 114 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RadiantBunker_EventScript_Generator_11
	goto RadiantBunker_EventScript_Generator_5

RadiantBunker_EventScript_Generator_8:
# 100 "data/maps/RadiantBunker/scripts.pory"
	msgbox RadiantBunker_EventScript_Generator_Text_5
	goto RadiantBunker_EventScript_Generator_5

RadiantBunker_EventScript_Generator_9:
# 105 "data/maps/RadiantBunker/scripts.pory"
	msgbox RadiantBunker_EventScript_Generator_Text_6
	goto RadiantBunker_EventScript_Generator_5

RadiantBunker_EventScript_Generator_10:
# 110 "data/maps/RadiantBunker/scripts.pory"
	msgbox RadiantBunker_EventScript_Generator_Text_7
	goto RadiantBunker_EventScript_Generator_5

RadiantBunker_EventScript_Generator_11:
# 115 "data/maps/RadiantBunker/scripts.pory"
	delay 16
# 116 "data/maps/RadiantBunker/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_NORMAL
# 117 "data/maps/RadiantBunker/scripts.pory"
	waitmoncry
# 118 "data/maps/RadiantBunker/scripts.pory"
	delay 16
# 119 "data/maps/RadiantBunker/scripts.pory"
	playse SE_M_THUNDERBOLT
# 120 "data/maps/RadiantBunker/scripts.pory"
	delay 16
# 121 "data/maps/RadiantBunker/scripts.pory"
	msgbox UseThundershock
# 122 "data/maps/RadiantBunker/scripts.pory"
	animateflash 0
# 123 "data/maps/RadiantBunker/scripts.pory"
	setflashlevel 0
# 124 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 4, 9, 0x2E7, 0
# 125 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 5, 9, 0x2E7, 0
# 126 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 6, 9, 0x2E7, 0
# 127 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 4, 10, 0x2E6, 0
# 128 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 5, 10, 0x2E6, 0
# 129 "data/maps/RadiantBunker/scripts.pory"
	setmetatile 6, 10, 0x2E6, 0
# 130 "data/maps/RadiantBunker/scripts.pory"
	special DrawWholeMapView
# 131 "data/maps/RadiantBunker/scripts.pory"
	setflag 0x22
	goto RadiantBunker_EventScript_Generator_5


NicknamePichu::
# 157 "data/maps/RadiantBunker/scripts.pory"
	msgbox NicknamePichu_Text_0, MSGBOX_YESNO
# 158 "data/maps/RadiantBunker/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePichu_1
# 162 "data/maps/RadiantBunker/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 163 "data/maps/RadiantBunker/scripts.pory"
	warpsilent MAP_RADIANT_BUNKER, 1, 7
# 164 "data/maps/RadiantBunker/scripts.pory"
	waitstate
# 165 "data/maps/RadiantBunker/scripts.pory"
	releaseall
	end

NicknamePichu_1:
# 159 "data/maps/RadiantBunker/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 160 "data/maps/RadiantBunker/scripts.pory"
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
# 50 "data/maps/RadiantBunker/scripts.pory"
	.string "Password successfully entered.$"

RadiantBunker_EventScript_Starter_Text_0:
# 69 "data/maps/RadiantBunker/scripts.pory"
	.string "You received a pichu and the bag.$"

RadiantBunker_EventScript_Generator_Text_0:
# 91 "data/maps/RadiantBunker/scripts.pory"
	.string "It's a generator.\n"
	.string "It does not seem to be powered.$"

RadiantBunker_EventScript_Generator_Text_1:
# 98 "data/maps/RadiantBunker/scripts.pory"
	.string "Tail Whip$"

RadiantBunker_EventScript_Generator_Text_2:
# 98 "data/maps/RadiantBunker/scripts.pory"
	.string "Thundershock$"

RadiantBunker_EventScript_Generator_Text_3:
# 98 "data/maps/RadiantBunker/scripts.pory"
	.string "Sweet Kiss$"

RadiantBunker_EventScript_Generator_Text_4:
# 98 "data/maps/RadiantBunker/scripts.pory"
	.string "Wish$"

RadiantBunker_EventScript_Generator_Text_5:
# 100 "data/maps/RadiantBunker/scripts.pory"
	.string "Pichu whipped the generator with its\n"
	.string "tail.\p"
	.string "The generator seems unimpressed.$"

RadiantBunker_EventScript_Generator_Text_6:
# 105 "data/maps/RadiantBunker/scripts.pory"
	.string "Pichu gave the generator a little kiss.\p"
	.string "Although flattered, the generator\n"
	.string "remains off.$"

RadiantBunker_EventScript_Generator_Text_7:
# 110 "data/maps/RadiantBunker/scripts.pory"
	.string "Pichu wished for the generator to turn\n"
	.string "on.\p"
	.string "Unfortunately, Jirachi did not hear it.$"

NicknamePichu_Text_0:
# 157 "data/maps/RadiantBunker/scripts.pory"
	.string "Give Pichu a nickname?$"

NicknameBoxMon_Text_0:
# 177 "data/maps/RadiantBunker/scripts.pory"
	.string "Pichu was transferred to the PC.$"

PowerGenerator::
# 141 "data/maps/RadiantBunker/scripts.pory"
	.string "It's an unpowered generator.\n"
	.string "Have Pichu use a move?$"

UseThundershock::
# 146 "data/maps/RadiantBunker/scripts.pory"
	.string "Pichu powered up the generator with\n"
	.string "Thundershock!$"

StarterChoice::
# 151 "data/maps/RadiantBunker/scripts.pory"
	.string "There's a pokeball in the bag. \n"
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

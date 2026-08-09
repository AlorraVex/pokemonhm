DesertUnderpass_MapScripts::
# 2 "data/maps/DesertUnderpass/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DesertUnderpass_OnTransition
# 3 "data/maps/DesertUnderpass/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, DesertUnderpass_OnResume
	.byte 0


DesertUnderpass_OnTransition::
# 10 "data/maps/DesertUnderpass/scripts.pory"
	goto_if_set 0x22, DesertUnderpass_OnTransition_2
# 20 "data/maps/DesertUnderpass/scripts.pory"
	setflashlevel 7
DesertUnderpass_OnTransition_1:
# 23 "data/maps/DesertUnderpass/scripts.pory"
	goto_if_set 0x20, DesertUnderpass_OnTransition_5
	return

DesertUnderpass_OnTransition_2:
# 11 "data/maps/DesertUnderpass/scripts.pory"
	setflashlevel 0
# 12 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 4, 9, 0x2E7, 0
# 13 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 5, 9, 0x2E7, 0
# 14 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 6, 9, 0x2E7, 0
# 15 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 4, 10, 0x2E6, 0
# 16 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 5, 10, 0x2E6, 0
# 17 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 6, 10, 0x2E6, 0
	goto DesertUnderpass_OnTransition_1

DesertUnderpass_OnTransition_5:
# 24 "data/maps/DesertUnderpass/scripts.pory"
	removeobject 1
	return


DesertUnderpass_OnResume::
# 30 "data/maps/DesertUnderpass/scripts.pory"
	goto_if_set 0x22, DesertUnderpass_OnResume_1
	return

DesertUnderpass_OnResume_1:
# 31 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 4, 9, 0x2E7, 0
# 32 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 5, 9, 0x2E7, 0
# 33 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 6, 9, 0x2E7, 0
# 34 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 4, 10, 0x2E6, 0
# 35 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 5, 10, 0x2E6, 0
# 36 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 6, 10, 0x2E6, 0
	return


DesertUnderpass_EventScript_Starter::
# 43 "data/maps/DesertUnderpass/scripts.pory"
	lockall
# 44 "data/maps/DesertUnderpass/scripts.pory"
	msgbox StarterChoice, MSGBOX_YESNO
# 45 "data/maps/DesertUnderpass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DesertUnderpass_EventScript_Starter_1
# 59 "data/maps/DesertUnderpass/scripts.pory"
	msgbox Starter_NotChosen
# 60 "data/maps/DesertUnderpass/scripts.pory"
	waitmessage
# 61 "data/maps/DesertUnderpass/scripts.pory"
	releaseall
	end

DesertUnderpass_EventScript_Starter_1:
# 46 "data/maps/DesertUnderpass/scripts.pory"
	givemon SPECIES_PICHU_SPIKY_EARED, 5, ITEM_NONE
# 47 "data/maps/DesertUnderpass/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq DesertUnderpass_EventScript_Starter_5
DesertUnderpass_EventScript_Starter_4:
	end

DesertUnderpass_EventScript_Starter_5:
# 48 "data/maps/DesertUnderpass/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 49 "data/maps/DesertUnderpass/scripts.pory"
	msgbox DesertUnderpass_EventScript_Starter_Text_0
# 50 "data/maps/DesertUnderpass/scripts.pory"
	removeobject 1
# 51 "data/maps/DesertUnderpass/scripts.pory"
	setflag 0x20
# 52 "data/maps/DesertUnderpass/scripts.pory"
	setflag FLAG_SYS_BAG_GET
# 53 "data/maps/DesertUnderpass/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 54 "data/maps/DesertUnderpass/scripts.pory"
	call NicknamePichu
	goto DesertUnderpass_EventScript_Starter_4


DesertUnderpass_EventScript_Generator::
# 68 "data/maps/DesertUnderpass/scripts.pory"
	lockall
# 69 "data/maps/DesertUnderpass/scripts.pory"
	goto_if_unset 0x20, DesertUnderpass_EventScript_Generator_1
# 74 "data/maps/DesertUnderpass/scripts.pory"
	goto_if_unset 0x22, DesertUnderpass_EventScript_Generator_2
	return

DesertUnderpass_EventScript_Generator_1:
# 70 "data/maps/DesertUnderpass/scripts.pory"
	msgbox DesertUnderpass_EventScript_Generator_Text_0
# 72 "data/maps/DesertUnderpass/scripts.pory"
	releaseall
	end

DesertUnderpass_EventScript_Generator_2:
# 76 "data/maps/DesertUnderpass/scripts.pory"
	msgbox PowerGenerator, MSGBOX_YESNO
# 77 "data/maps/DesertUnderpass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DesertUnderpass_EventScript_Generator_6
DesertUnderpass_EventScript_Generator_5:
# 90 "data/maps/DesertUnderpass/scripts.pory"
	releaseall
	end

DesertUnderpass_EventScript_Generator_6:
# 78 "data/maps/DesertUnderpass/scripts.pory"
	msgbox UseThundershock
# 79 "data/maps/DesertUnderpass/scripts.pory"
	animateflash 0
# 80 "data/maps/DesertUnderpass/scripts.pory"
	setflashlevel 0
# 81 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 4, 9, 0x2E7, 0
# 82 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 5, 9, 0x2E7, 0
# 83 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 6, 9, 0x2E7, 0
# 84 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 4, 10, 0x2E6, 0
# 85 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 5, 10, 0x2E6, 0
# 86 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 6, 10, 0x2E6, 0
# 87 "data/maps/DesertUnderpass/scripts.pory"
	special DrawWholeMapView
# 88 "data/maps/DesertUnderpass/scripts.pory"
	setflag 0x22
	goto DesertUnderpass_EventScript_Generator_5


NicknamePichu::
# 111 "data/maps/DesertUnderpass/scripts.pory"
	msgbox NicknamePichu_Text_0, MSGBOX_YESNO
# 112 "data/maps/DesertUnderpass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePichu_1
# 116 "data/maps/DesertUnderpass/scripts.pory"
	setflag FLAG_REMOVE_WARP_FADE
# 117 "data/maps/DesertUnderpass/scripts.pory"
	warpsilent MAP_DESERT_UNDERPASS, 1, 7
# 118 "data/maps/DesertUnderpass/scripts.pory"
	waitstate
# 119 "data/maps/DesertUnderpass/scripts.pory"
	releaseall
	end

NicknamePichu_1:
# 113 "data/maps/DesertUnderpass/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 114 "data/maps/DesertUnderpass/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 127 "data/maps/DesertUnderpass/scripts.pory"
	msgbox NicknamePichu_Text_0, MSGBOX_YESNO
# 128 "data/maps/DesertUnderpass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 131 "data/maps/DesertUnderpass/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 129 "data/maps/DesertUnderpass/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


DesertUnderpass_EventScript_Starter_Text_0:
# 49 "data/maps/DesertUnderpass/scripts.pory"
	.string "You received a pichu and the bag.$"

DesertUnderpass_EventScript_Generator_Text_0:
# 70 "data/maps/DesertUnderpass/scripts.pory"
	.string "It's a generator.\n"
	.string "It does not seem to be powered.$"

NicknamePichu_Text_0:
# 111 "data/maps/DesertUnderpass/scripts.pory"
	.string "Give Pichu a nickname?$"

NicknameBoxMon_Text_0:
# 131 "data/maps/DesertUnderpass/scripts.pory"
	.string "Pichu was transferred to the PC.$"

PowerGenerator::
# 96 "data/maps/DesertUnderpass/scripts.pory"
	.string "It's an unpowered generator.\n"
	.string "Have Pichu use Thundershock?$"

UseThundershock::
# 101 "data/maps/DesertUnderpass/scripts.pory"
	.string "Pichu powered up the generator!$"

StarterChoice::
# 105 "data/maps/DesertUnderpass/scripts.pory"
	.string "There's a pokeball in the bag. \n"
	.string "Take it?$"

Starter_NotChosen::
# 135 "data/maps/DesertUnderpass/scripts.pory"
	.string "You decided to leave it.$"

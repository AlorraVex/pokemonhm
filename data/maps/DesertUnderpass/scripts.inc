DesertUnderpass_MapScripts::
	.byte 0


DesertUnderpass_EventScript_Starter::
# 5 "data/maps/DesertUnderpass/scripts.pory"
	lockall
# 6 "data/maps/DesertUnderpass/scripts.pory"
	msgbox StarterChoice, MSGBOX_YESNO
# 7 "data/maps/DesertUnderpass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DesertUnderpass_EventScript_Starter_2
# 29 "data/maps/DesertUnderpass/scripts.pory"
	msgbox Starter_NotChosen
DesertUnderpass_EventScript_Starter_1:
# 31 "data/maps/DesertUnderpass/scripts.pory"
	waitmessage
# 32 "data/maps/DesertUnderpass/scripts.pory"
	releaseall
	end

DesertUnderpass_EventScript_Starter_2:
# 8 "data/maps/DesertUnderpass/scripts.pory"
	givemon SPECIES_PICHU, 5, ITEM_NONE
# 9 "data/maps/DesertUnderpass/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq DesertUnderpass_EventScript_Starter_5
# 18 "data/maps/DesertUnderpass/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq DesertUnderpass_EventScript_Starter_6
# 25 "data/maps/DesertUnderpass/scripts.pory"
	msgbox DesertUnderpass_EventScript_Starter_Text_2
	goto DesertUnderpass_EventScript_Starter_1

DesertUnderpass_EventScript_Starter_5:
# 10 "data/maps/DesertUnderpass/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 11 "data/maps/DesertUnderpass/scripts.pory"
	msgbox DesertUnderpass_EventScript_Starter_Text_0
# 12 "data/maps/DesertUnderpass/scripts.pory"
	removeobject 1
# 13 "data/maps/DesertUnderpass/scripts.pory"
	setflag FLAG_HIDE_STARTER_BAG
# 14 "data/maps/DesertUnderpass/scripts.pory"
	setflag FLAG_SYS_BAG_GET
# 15 "data/maps/DesertUnderpass/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 16 "data/maps/DesertUnderpass/scripts.pory"
	call NicknamePartyMon
	goto DesertUnderpass_EventScript_Starter_1

DesertUnderpass_EventScript_Starter_6:
# 19 "data/maps/DesertUnderpass/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 20 "data/maps/DesertUnderpass/scripts.pory"
	msgbox DesertUnderpass_EventScript_Starter_Text_1
# 21 "data/maps/DesertUnderpass/scripts.pory"
	removeobject 1
# 22 "data/maps/DesertUnderpass/scripts.pory"
	call NicknameBoxMon
	goto DesertUnderpass_EventScript_Starter_1


DesertUnderpass_EventScript_Generator::
# 39 "data/maps/DesertUnderpass/scripts.pory"
	lockall
# 40 "data/maps/DesertUnderpass/scripts.pory"
	msgbox PowerGenerator, MSGBOX_YESNO
# 41 "data/maps/DesertUnderpass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DesertUnderpass_EventScript_Generator_2
DesertUnderpass_EventScript_Generator_1:
# 54 "data/maps/DesertUnderpass/scripts.pory"
	releaseall
	end

DesertUnderpass_EventScript_Generator_2:
# 42 "data/maps/DesertUnderpass/scripts.pory"
	msgbox UseThundershock
# 43 "data/maps/DesertUnderpass/scripts.pory"
	animateflash 0
# 44 "data/maps/DesertUnderpass/scripts.pory"
	setflashlevel 0
# 45 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 4, 9, 0x2E7, 0
# 46 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 5, 9, 0x2E7, 0
# 47 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 6, 9, 0x2E7, 0
# 48 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 4, 10, 0x2E6, 0
# 49 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 5, 10, 0x2E6, 0
# 50 "data/maps/DesertUnderpass/scripts.pory"
	setmetatile 6, 10, 0x2E6, 0
# 51 "data/maps/DesertUnderpass/scripts.pory"
	special DrawWholeMapView
	goto DesertUnderpass_EventScript_Generator_1


NicknamePartyMon::
# 76 "data/maps/DesertUnderpass/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 77 "data/maps/DesertUnderpass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 78 "data/maps/DesertUnderpass/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 79 "data/maps/DesertUnderpass/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 86 "data/maps/DesertUnderpass/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 87 "data/maps/DesertUnderpass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 90 "data/maps/DesertUnderpass/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 88 "data/maps/DesertUnderpass/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


DesertUnderpass_EventScript_Starter_Text_0:
# 11 "data/maps/DesertUnderpass/scripts.pory"
	.string "You recieved a Pichu and the Bag.$"

DesertUnderpass_EventScript_Starter_Text_1:
# 20 "data/maps/DesertUnderpass/scripts.pory"
	.string "Pichu was sent to the PC.$"

DesertUnderpass_EventScript_Starter_Text_2:
# 25 "data/maps/DesertUnderpass/scripts.pory"
	.string "You don't have room.$"

NicknamePartyMon_Text_0:
# 76 "data/maps/DesertUnderpass/scripts.pory"
	.string "Give Pichu a nickname?$"

NicknameBoxMon_Text_0:
# 90 "data/maps/DesertUnderpass/scripts.pory"
	.string "Pichu was transferred to the PC.$"

PowerGenerator::
# 60 "data/maps/DesertUnderpass/scripts.pory"
	.string "Pichu wants to use Thundershock. \n"
	.string "Let it?$"

UseThundershock::
# 65 "data/maps/DesertUnderpass/scripts.pory"
	.string "Pichu powered up the generator\n"
	.string "with Thundershock.$"

StarterChoice::
# 70 "data/maps/DesertUnderpass/scripts.pory"
	.string "There's a Pokeball in the bag. \n"
	.string "Take it?$"

Starter_NotChosen::
# 94 "data/maps/DesertUnderpass/scripts.pory"
	.string "You decided to leave it.$"

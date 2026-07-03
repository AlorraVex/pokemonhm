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


NicknamePartyMon::
# 44 "data/maps/DesertUnderpass/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 45 "data/maps/DesertUnderpass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 46 "data/maps/DesertUnderpass/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 47 "data/maps/DesertUnderpass/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 54 "data/maps/DesertUnderpass/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 55 "data/maps/DesertUnderpass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 58 "data/maps/DesertUnderpass/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 56 "data/maps/DesertUnderpass/scripts.pory"
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
# 44 "data/maps/DesertUnderpass/scripts.pory"
	.string "Give Pichu a nickname?$"

NicknameBoxMon_Text_0:
# 58 "data/maps/DesertUnderpass/scripts.pory"
	.string "Pichu was transferred to the PC.$"

StarterChoice::
# 38 "data/maps/DesertUnderpass/scripts.pory"
	.string "There's a Pokeball in the bag. \n"
	.string "Take it?$"

Starter_NotChosen::
# 62 "data/maps/DesertUnderpass/scripts.pory"
	.string "You decided to leave it.$"

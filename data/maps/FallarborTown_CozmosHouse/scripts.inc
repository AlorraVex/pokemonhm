FallarborTown_CozmosHouse_MapScripts::
	.byte 0

FallarborTown_EventScript_Starter::

lock
faceplayer
msgbox Text_TakePokemon, MSGBOX_DEFAULT
getpartysize
compare VAR_RESULT, 6
goto_if_eq Script_FullParty
givemon SPECIES_PICHU, 5, ITEM_NONE
playfanfare MUS_FANFA4
msgbox Text_ReceivedPichu, MSGBOX_DEFAULT
setflag FLAG_SYS_POKEMON_GET
waitfanfare
	release
	end

Text_TakePokemon:
	.string "There's a Pokeball inside. Take it?$"

Text_ReceivedPichu:
	.string "{PLAYER} received a Pichu!$"

Text_FullParty:
	.string "Oh no, your party is full.$"
	
	
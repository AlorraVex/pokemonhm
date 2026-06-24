FallarborTown_CozmosHouse_MapScripts::
	.byte 0

FallarborTown_EventScript_Starter::

lock
faceplayer
msgbox Text_TakePokemon, MSGBOX_DEFAULT
givemon SPECIES_PICHU, 5, ITEM_NONE
msgbox Text_ReceivedPichu, MSGBOX_DEFAULT
setflag FLAG_SYS_POKEMON_GET
waitfanfare
	release
	end

Text_TakePokemon:
	.string "There's a Pokeball inside. Take it?$"

Text_ReceivedPichu:
	.string "{PLAYER} received a Pichu!$"
	
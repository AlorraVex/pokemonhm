FallarborTown_CozmosHouse_MapScripts::
	.byte 0

FallarborTown_EventScript_Starter::

lock
faceplayer
msgbox Text_TakePokemon, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Script_AnswerNo
msgbox Text_AnswerYes, MSGBOX_DEFAULT
givemon SPECIES_PICHU, 5, ITEM_NONE
setflag FLAG_SYS_POKEMON_GET
removeobject LOCALID_Starter_Bag
setflag HIDE_STARTER_BAG
waitfanfare
	release
	end

Text_TakePokemon:
	.string "There's a Pokeball inside. Take it?$"

Text_AnswerYes:
	.string "{PLAYER} received a Pichu!$"

Text_AnswerNo:
	.string "You decided not to take the Pokeball.$"
	

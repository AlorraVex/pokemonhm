FallarborTown_CozmosHouse_MapScripts::
	.byte 0

FallarborTown_EventScript_Starter::

lock
faceplayer
msgbox Text_TakePokemon, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Event_AnswerNo
goto Event_AnswerYes

Event_AnswerNo:
    msgbox Text_ChoiceNo, MSGBOX_DEFAULT
    release
    end

Event_AnswerYes:
    msgbox Text_ChoiceYes, MSGBOX_DEFAULT
givemon SPECIES_PICHU, 5, ITEM_NONE
setflag FLAG_SYS_POKEMON_GET
removeobject 1
setflag FLAG_HIDE_STARTER_BAG
waitfanfare
    release
    end

Text_TakePokemon:
	.string "There's a Pokeball inside. Take it?$"

Text_ChoiceYes:
	.string "{PLAYER} received a Pichu!$"

Text_ChoiceNo:
	.string "You decided not to take the Pokeball.$"
	

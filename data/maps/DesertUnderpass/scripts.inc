DesertUnderpass_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DesertUnderpass_OnTransition
	.byte 0

DesertUnderpass_EventScript_Starter::

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
givemon SPECIES_PICHU, 5, ITEM_NONE
setflag FLAG_SYS_POKEMON_GET
setflag FLAG_SYS_BAG_GET

removeobject 1
setflag FLAG_HIDE_STARTER_BAG
playfanfare MUS_OBTAIN_ITEM
    msgbox Text_ChoiceYes, MSGBOX_DEFAULT
    waitfanfare

    release
    end

Text_TakePokemon:
	.string "There's a bag with a Pokeball inside.\n"
	.string "Take it?\l$"

Text_ChoiceYes:
	.string "{PLAYER} received a Pichu and the Bag!$"

Text_ChoiceNo:
	.string "You decided not to take it.$"


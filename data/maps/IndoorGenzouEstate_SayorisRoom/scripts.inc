# 1 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"

# 2 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"
IndoorGenzouEstate_SayorisRoom_MapScripts::
# 3 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IndoorGenzouEstate_SayorisRoom_OnTransition
# 4 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, IndoorGenzouEstate_SayorisRoom_OnFrame
# 5 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"
    .byte 0
# 6 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"

# 7 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"
IndoorGenzouEstate_SayorisRoom_OnTransition:
# 8 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"
    setflag FLAG_SYS_PREVENT_MAP_FADE
# 9 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"
    end
# 10 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"

# 11 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"
IndoorGenzouEstate_SayorisRoom_OnFrame:
# 12 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"
    map_script_2 VAR_TEMP_0, 0, IndoorGenzouEstate_SayorisRoom_EventScript_SayoriIntro
# 13 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"
    .2byte 0
# 14 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"

# 15 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"
IndoorGenzouEstate_SayorisRoom_EventScript_SayoriIntro::
# 16 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"
	playse SE_SHIP
# 17 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"
	waitsound
# 18 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"
    msgbox IndoorGenzouEstate_SayorisRoom_Text_Sayori, MSGBOX_NPC
# 19 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"
    fadescreen FADE_FROM_BLACK
# 20 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"
    clearflag FLAG_SYS_PREVENT_MAP_FADE
# 21 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"
    setvar VAR_TEMP_0, 1
# 22 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"
    end
# 23 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"

# 24 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"
IndoorGenzouEstate_SayorisRoom_Text_Sayori:
# 25 "data/maps/IndoorGenzouEstate_SayorisRoom/scripts.pory"
    .string "Sayori: holi$"

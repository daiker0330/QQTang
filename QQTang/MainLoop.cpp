#include "MainLoop.h"
#include "Actor.h"

void MainLoop::Begin_Main_Loop(){
	//long Frame_Begin_Time = GetTickCount();
	Handle_Input();
	Interaction();
	//bomb.Detection();
	//Rendering();
	//long Frame_End_Time = GetTickCount();
	//sleep(FRAME_TIME - (Frame_End_Time - Frame_Begin_Time));
}

void MainLoop::Handle_Input(){
	if (in.Is_Num()){
		/*
		for (int i = 0; i < NUM_MAX; i++){
			if (in.Get_Num() && tools.Get_Tools_Index() != TOOLS_NO_OBJECT){
				map.Set_Tools_Index(tools.Get_Tools_Index(i), actor.Get_Y(), actor.Get_X());
				tools.Set_Tools_Index(TOOLS_NO_OBJECT, i);
				in.Set_Num(false,i);
			}
		}
		*/
	}
	else if (in.Is_Direction()){
		if (map.Is_Block(actor.Get_Y() / MAP_GRID_PIXEL, actor.Get_X() / MAP_GRID_PIXEL)){

		}
		else{
			if (in.Get_Up()){
				actor.Set_Y(actor.Get_Y()+actor.Get_Y_Speed());
			}
			else if(in.Get_Down()){
				actor.Set_Y(actor.Get_Y() - actor.Get_Y_Speed());
			}
			else if (in.Get_Left()){
				actor.Set_X(actor.Get_X() - actor.Get_X_Speed());
			}
			else if (in.Get_Right()){
				actor.Set_X(actor.Get_X() + actor.Get_X_Speed());
			}
		}
	}
	else if (in.Get_Space()){
		map.Set_Bomb_Index(1);
		in.Set_Space(false);
	}
}

void MainLoop::Interaction(){

}
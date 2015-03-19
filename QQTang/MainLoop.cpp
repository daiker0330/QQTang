#include "MainLoop.h"
#include "Player.h"

void CGame::MainLoop(){

	Handle_Input();
	Interaction();
	//bomb.Detection(); // reduce the remain time of all bombs, explode if necessary
	//Render();


}

void CGame::Handle_Input(){
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
	else if (in.Is_Direction())
	{
		for(int i=0; i<=3; i++)
		{
			if (in.GetDirection() == i)
			{
				CPoint next_grid = player.NextGrid(i);
				if(!map.Is_Block(next_grid.y, next_grid.x))
					player.Move(i);
			}
		}
		
	}
	else if (in.Get_Space())
	{
		//map.Set_Bomb_Index(1);
		in.Set_Space(false);
	}
}

void CGame::Interaction(){

}
#include "stdio.h"
#include "MainLoop.h"

using namespace std;

MainLoop::MainLoop(){

}

void MainLoop::Begin_Main_Loop(){
	
}

void MainLoop::Handle_Input(){
	if (in.Is_Num()){
		for (int i = 0; i < NUM_MAX; i++){
			if (in.Get_Num() && tools.Get_Tools_Index() != TOOLS_NO_OBJECT){
				map.Set_Tools_Index(tools.Get_Tools_Index(i), actor.Get_Y(), actor.Get_X());
				tools.Set_Tools_Index(TOOLS_NO_OBJECT, i);
				in.Set_Num(false,i);
			}
		}
	}
}
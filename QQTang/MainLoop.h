#include "Input.h"
//#include "Tools.h"
#include "Map.h"
//#include "Actor.h"

#define FRAME_TIME 20

class MainLoop{
private:
	Input in;
	//Tools tools;
	Map map;
	//Actor actor;
	//Bomb bomb;
public:
	void Begin_Main_Loop();
	void Handle_Input();
	void Interaction();

};
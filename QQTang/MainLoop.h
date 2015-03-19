#include "Input.h"

class MainLoop{
private:
	Input in;
	Tools tools;
public:
	MainLoop();
	void Begin_Main_Loop();
	void Handle_Input();
};
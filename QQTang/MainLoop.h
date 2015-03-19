#include "Input.h"
//#include "Tools.h"
#include "Map.h"
#include "Player.h"
#include "Bomb.h"

class CGame
{
private:
	Input in;
	//Tools tools;
	Map map;
	CPlayer player;
	CBomb bomb;
public:
	void MainLoop();
	void Handle_Input();
	void Interaction();

};
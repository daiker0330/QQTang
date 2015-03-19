#pragma once
class CPlayer
{
	CPoint pos;
	int status;
	int bomb_capacity;
	int bomb_power;
	CPoint speed;

	bool hover, reverse;
	int type;


public:
	CPlayer(void);
	~CPlayer(void);
	CPlayer(double x, double y, int type);

	CPoint GetPosPixel();
	CPoint GetPosGrid();
	/*Get the X in pixel of the player, max is 900*/
	int GetXPixel();
	int GetYPixel();
	/*Get the X in grid of the player, max is 30*/
	int GetXGrid();
	int GetYGrid();

	int GetStatus();
	int GetBombPower();
	int GetBombCapacity();
	/*Get the speed in pixels*/
	CPoint GetSpeed();
	/*pixels*/
	double GetXSpeed();
	double GetYSpeed();
	bool Hover();
	bool Reverse();
	bool Type();
	
	void SetHover(bool x);
	void SetReverse(bool x);
	void SetXSpeed(double x);
	void SetYSpeed(double y);
	void SetSpeed(double x, double y);
	void SetBombPower(int r);
	void SetBombCapacity(int r);
	
	void Move(int direction);
	CPoint NextGrid(int direction);

};


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
	CPoint GetPosPanel();
	int GetStatus();
	int GetBombPower();
	int GetBombCapacity();
	CPoint GetSpeed();
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


};


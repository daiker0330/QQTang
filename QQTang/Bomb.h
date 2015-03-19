#pragma once
#include<stdio.h>
using namespace std;

#pragma once
class CBomb
{
	CPoint pos;
	double remain_time;
	int power;

public:
	CBomb();
	~CBomb();
	/*Create a new bomb with position x,y, _remain_time (in ms), power*/
	CBomb(int x, int y, double _remain_time, int _power);
	
	/*Get the position of the bomb, in grids, max is (30,20)*/
	CPoint GetPos();
	int GetX();
	int GetY();
	/*Get remain time, in ms*/
	double GetRemainTime();
	int GetPower();

	void SetX(int x);
	void SetY(int y);
	void SetPos(int x, int y);
	void SetRemainRime(int r);
	void SetPower(int p);
};


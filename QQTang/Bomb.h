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
	CBomb(int x, int y, double _r, int _p);
	
	CPoint GetPos();
	double GetRemainTime();
	int GetPower();
};


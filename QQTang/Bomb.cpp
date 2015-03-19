#include "stdafx.h"
#include "Bomb.h"


CBomb::CBomb()
{
}


CBomb::~CBomb()
{
}

CBomb::CBomb(int x, int y, double _r, int _p)
{
	pos.SetPoint(x,y);
	remain_time = _r;
	power = _p;
}

CPoint CBomb::GetPos()
{
	return pos;
}

int CBomb::GetPower()
{
	return power;
}

double CBomb::GetRemainTime()
{
	return remain_time;
}
#include "stdafx.h"
#include "Player.h"


CPlayer::CPlayer(void)
{
}


CPlayer::~CPlayer(void)
{
}

CPlayer::CPlayer(double x, double y, int type)
{
	pos.SetPoint(x,y);
	this->type = type;
}

CPoint CPlayer::GetPosPixel()
{
	return pos;
}


CPoint CPlayer::GetPosPanel()
{
	double tmp_x = pos.x / PANEL_WIDTH;
	double tmp_y = pos.y / PANEL_HEIGHT;
	return CPoint( int(tmp_x + 0.5), int(tmp_y + 0.5) );
}

int CPlayer::GetStatus()
{
	return status;
}

int CPlayer::GetBombPower()
{
	return bomb_power;
}

int CPlayer::GetBombCapacity()
{
	return bomb_capacity;
}

CPoint CPlayer::GetSpeed()
{
	return speed;
}

bool CPlayer::Hover()
{
	return hover;
}

bool CPlayer::Reverse()
{
	return reverse;
}

bool CPlayer::Type()
{
	return type;
}

void CPlayer::SetHover(bool x)
{
	hover = x;
}
void CPlayer::SetReverse(bool x)
{
	reverse = x;
}

void CPlayer::SetXSpeed(double x)
{
	speed.x=x;
}
void CPlayer::SetYSpeed(double y)
{
	speed.y=y;
}

void CPlayer::SetSpeed(double x, double y)
{
	SetXSpeed(x);
	SetYSpeed(y);
}

void CPlayer::SetBombPower(int r)
{
	bomb_power = r;
}
void CPlayer::SetBombCapacity(int r)
{
	bomb_capacity = r;
}
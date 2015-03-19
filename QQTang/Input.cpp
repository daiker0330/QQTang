#include "stdio.h"
#include "Input.h"

using namespace std;

bool Input::Get_Up(){
	return Direction[BUTTON_UP];
}

void Input::Set_Up(bool _button){
	Direction[BUTTON_UP] = _button;
}

bool Input::Get_Down(){
	return Direction[BUTTON_DOWN];
}

void Input::Set_Down(bool _button){
	Direction[BUTTON_DOWN] = _button;
}

bool Input::Get_Left(){
	return Direction[BUTTON_LEFT];
}

void Input::Set_Left(bool _button){
	Direction[BUTTON_LEFT] = _button;
}

bool Input::Get_Right(){
	return Direction[BUTTON_RIGHT];
}

void Input::Set_Right(bool _button){
	Direction[BUTTON_RIGHT] = _button;
}

bool Input::Get_Space(){
	return Space;
}

void Input::Set_Space(bool _button){
	Space = _button;
}

bool Input::Get_Num(int _index){
	return Num[_index];
}

void Input::Set_Num(bool _button, int _index){
	Num[_index] = _button;
}

bool Input::Is_Num(){
	for (int i = 0; i < NUM_MAX; i++){
		if (Num[i])
			return true;
	}
	return false;
}

bool Input::Is_Direction(){
	for (int i = 0; i < NUM_MAX; i++){
		if (Direction[i])
			return true;
	}
	return false;
}

int Input::GetDirection(){
	for (int i = 0; i < 4; i++){
		if (Direction[i]){
			return i;
		}
	}
}
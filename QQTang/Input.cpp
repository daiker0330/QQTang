#include "stdio.h"
#include "Input.h"

using namespace std;

bool Input::Get_Up(){
	return Up;
}

void Input::Set_Up(bool _button){
	Up = _button;
}

bool Input::Get_Down(){
	return Down;
}

void Input::Set_Down(bool _button){
	Down = _button;
}

bool Input::Get_Left(){
	return Left;
}

void Input::Set_Left(bool _button){
	Left = _button;
}

bool Input::Get_Right(){
	return Right;
}

void Input::Set_Right(bool _button){
	Right = _button;
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
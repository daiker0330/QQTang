#include "stdio.h"
#include "Map.h"

using namespace std;

int Map::Get_Background_Index(int _h, int _l){
	return Background_Index[_h][_l];
}

int Map::Get_Destroyable_Object_Index(int _h, int _l){
	return Destroyable_Object_Index[_h][_l];
}

int Map::Get_Undestroyable_Object_Index(int _h, int _l){
	return Undestroyable_Object_Index[_h][_l];
}

void Map::Set_Background_Index(int _index, int _h, int _l){
	Background_Index[_h][_l] = _index;
}

void Map::Set_Destroyable_Object_Index(int _index, int _h, int _l){
	Destroyable_Object_Index[_h][_l] = _index;
}

void Map::Set_Undestroyable_Object_Index(int _index, int _h, int _l){
	Undestroyable_Object_Index[_h][_l] = _index;
}

void Map::Set_Tool_Object_Index(int _index, int _h, int _l){
	Tool_Object_Index[_h][_l] = _index;
}

void Map::Set_Tool_Object_Index(int _index, int _h, int _l){
	Tool_Object_Index[_h][_l] = _index;
}

void Map::Set_Bomb_Object_Index(int _index, int _h, int _l){
	Bomb_Object_Index[_h][_l] = _index;
}

void Map::Set_Bomb_Object_Index(int _index, int _h, int _l){
	Bomb_Object_Index[_h][_l] = _index;
}

void Map::Set_Actor_Object_Index(int _index, int _h, int _l){
	Actor_Object_Index[_h][_l] = _index;
}

void Map::Set_Actor_Object_Index(int _index, int _h, int _l){
	Actor_Object_Index[_h][_l] = _index;
}

bool Map::Is_Block(int _h, int _l){
	if (Destroyable_Object_Index[_h][_l] != MAP_NO_OBJECT){
		return true;
	}
	else if (Undestroyable_Object_Index[_h][_l] != MAP_NO_OBJECT){
		return true;
	}
	else if (Bomb_Object_Index[_h][_l] != MAP_NO_OBJECT){
		return true;
	}
	else{
		return false;
	}
}
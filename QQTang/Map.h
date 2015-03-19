#define MAP_L_MAX 100
#define MAP_H_MAX 100
#define MAP_NO_OBJECT -1

class Map{
private:
	int Background_Index[MAP_H_MAX][MAP_L_MAX];
	int Destroyable_Object_Index[MAP_H_MAX][MAP_L_MAX];
	int Undestroyable_Object_Index[MAP_H_MAX][MAP_L_MAX];
	int Tool_Object_Index[MAP_H_MAX][MAP_L_MAX];
	int Bomb_Object_Index[MAP_H_MAX][MAP_L_MAX];
	int Actor_Object_Index[MAP_H_MAX][MAP_L_MAX];
public:
	Map();
	int Get_Background_Index(int _h,int _l);
	void Set_Background_Index(int _index, int _h, int _l);
	int Get_Destroyable_Object_Index(int _h, int _l);
	void Set_Destroyable_Object_Index(int _index, int _h, int _l);
	int Get_Undestroyable_Object_Index(int _h, int _l);
	void Set_Undestroyable_Object_Index(int _index, int _h, int _l);
	int Get_Tool_Object_Index(int _h, int _l);
	void Set_Tool_Object_Index(int _index, int _h, int _l);
	int Get_Bomb_Object_Index(int _h, int _l);
	void Set_Bomb_Object_Index(int _index, int _h, int _l);
	int Get_Actor_Object_Index(int _h, int _l);
	void Set_Actor_Object_Index(int _index, int _h, int _l);
};
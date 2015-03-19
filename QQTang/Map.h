#define MAP_L_MAX 100
#define MAP_H_MAX 100
#define MAP_NO_OBJECT -1
#define MAP_GRID_PIXEL 30

class Map{
private:
	int Background_Index[MAP_H_MAX][MAP_L_MAX];
	int Destroyable_Object_Index[MAP_H_MAX][MAP_L_MAX];
	int Undestroyable_Object_Index[MAP_H_MAX][MAP_L_MAX];
	int Tool_Object_Index[MAP_H_MAX][MAP_L_MAX];
	int Bomb_Object_Index[MAP_H_MAX][MAP_L_MAX];
	int Actor_Object_Index[MAP_H_MAX][MAP_L_MAX];
public:
	Map(){
		for (int i = 0; i < MAP_H_MAX; i++){
			for (int j = 0; j < MAP_L_MAX; j++){
				Background_Index[i][j] = MAP_NO_OBJECT;
				Destroyable_Object_Index[i][j] = MAP_NO_OBJECT;
				Undestroyable_Object_Index[i][j] = MAP_NO_OBJECT;
			}
		}
	}
	int Get_Background_Index(int _h,int _l);
	void Set_Background_Index(int _index, int _h, int _l);
	int Get_Destroyable_Object_Index(int _h, int _l);
	void Set_Destroyable_Object_Index(int _index, int _h, int _l);
	int Get_Undestroyable_Object_Index(int _h, int _l);
	void Set_Undestroyable_Object_Index(int _index, int _h, int _l);
	int Get_Tools_Object_Index(int _h, int _l);
	void Set_Tools_Object_Index(int _index, int _h, int _l);
	int Get_Bomb_Object_Index(int _h, int _l);
	void Set_Bomb_Object_Index(int _index, int _h, int _l);
	int Get_Actor_Object_Index(int _h, int _l);
	void Set_Actor_Object_Index(int _index, int _h, int _l);
	bool Is_Block(int _h, int _l);
};
#define NUM_MAX 6
#define BUTTON_UP 0
#define BUTTON_DOWN 1
#define BUTTON_LEFT 2
#define BUTTON_RIGHT 3

class Input{
private:
	bool Direction[4];
	bool Space;
	bool Num[NUM_MAX];
public:
	Input(){
		for (int i = 0; i < 4; i++){
			Direction[i] = false;
		}
		Space = false;
		for (int i = 0; i < NUM_MAX; i++){
			Num[i] = false;
		}
	}
	bool Get_Up();
	void Set_Up(bool _button);
	bool Get_Down();
	void Set_Down(bool _button);
	bool Get_Left();
	void Set_Left(bool _button);
	bool Get_Right();
	void Set_Right(bool _button);
	bool Get_Space();
	void Set_Space(bool _button);
	bool Get_Num(int _index);
	void Set_Num(bool _button, int _index);
	bool Is_Num();
	bool Is_Direction();

	int GetDirection();
};
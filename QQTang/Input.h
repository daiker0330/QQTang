#define NUM_MAX 6

class Input{
private:
	bool Up;
	bool Down;
	bool left;
	bool Right;
	bool Space;
	bool Num[NUM_MAX];
public:
	Input();
	bool Get_Up();
	void Set_Up(int _button);
	bool Get_Down();
	void Set_Down(int _button);
	bool Get_Left();
	void Set_Left(int _button);
	bool Get_Right();
	void Set_Right(int _button);
	bool Get_Space();
	void Set_Space(int _button);
	bool Get_Num(int _index);
	void Set_Num(int _button,int _index);
	bool Is_Num();
};
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
};
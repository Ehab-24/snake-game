#include<iostream>
#include<conio.h>
#include<time.h>	
#include<windows.h>
#include<string>

#define BLACK 0
#define DBLUE 1
#define GREEN 2
#define LBLUE 3
#define RED 4
#define PURPLE 5
#define YELLOW 6
#define GERY_WHITE 7
#define GREY 8
#define BLUE 9
#define LGREEN 10
#define CYAN 11
#define LRED 12
#define MAGENTA 13
#define SKIN 14
#define WHITE 15


using namespace std;




void SetColor(int tcl, int bcl = 0)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (tcl + (bcl * 16)));
}

void cursorPosition(int cpos, int rpos)
{
	COORD scrn = {};
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = cpos;
	scrn.Y = rpos;
	SetConsoleCursorPosition(hOuput, scrn);
}

void ShowConsoleCursor(bool showFlag)
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO     cursorInfo;

	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = showFlag;
	SetConsoleCursorInfo(out, &cursorInfo);
}




void symbol(int count)
{
	char sym = -37;

	for (int i = 0; i < count; i++)
	{
		cout << sym;
	}
}
void l(int x, int y, int count)
{
	for (int i = 0; i < count; i++)
	{
		cursorPosition(x, y - i);	symbol(1);
	}
}


void QuestionMark(int x, int y)
{
	cursorPosition(x, y);			symbol(1);

	cursorPosition(x, y - 2);		symbol(1);

	cursorPosition(x, y - 3);		symbol(3);

	cursorPosition(x + 2, y - 4);	symbol(1);

	cursorPosition(x, y - 5);		symbol(3);
}
void ExclamationMark(int x, int y)
{
	l(x, y - 2, 4);
	cursorPosition(x, y);		symbol(1);
}

void S(int x, int y)
{
	l(x, y - 2, 3);

	l(x + 2, y, 3);

	cursorPosition(x, y);	symbol(2);

	cursorPosition(x + 1, y - 2);	symbol(1);

	cursorPosition(x + 1, y - 4);	symbol(2);
}

void A(int x, int y)
{
	l(x, y, 4);

	l(x + 2, y, 4);

	cursorPosition(x + 1, y - 1);	symbol(1);

	cursorPosition(x + 1, y - 4);	symbol(1);
}

void V(int x, int y)
{
	l(x, y - 1, 4);

	l(x + 2, y - 1, 4);

	cursorPosition(x + 1, y);	symbol(1);
}

void L(int x, int y)
{
	l(x, y, 5);

	cursorPosition(x + 1, y);	symbol(2);
}

void E(int x, int y)
{
	L(x, y);

	cursorPosition(x + 1, y - 2);	symbol(2);

	cursorPosition(x + 1, y - 4);	symbol(2);
}

void O(int x, int y)
{
	L(x, y);

	l(x + 2, y, 5);

	cursorPosition(x + 1, y - 4);	symbol(1);
}

void D(int x, int y)
{
	L(x, y);

	cursorPosition(x + 1, y - 4);	symbol(2);

	l(x + 3, y - 1, 3);
}

void X(int x, int y)
{
	l(x, y, 2);

	l(x + 2, y, 2);

	l(x, y - 3, 2);

	l(x + 2, y - 3, 2);

	cursorPosition(x + 1, y - 2);	symbol(1);
}

void T(int x, int y)
{
	cursorPosition(x, y - 4);	symbol(3);

	l(x + 1, y, 4);
}

void I(int x, int y)
{
	T(x, y);

	cursorPosition(x, y);	symbol(3);

}

void P(int x, int y)
{
	l(x, y, 5);

	l(x + 2, y - 2, 3);

	cursorPosition(x + 1, y - 2);	symbol(1);

	cursorPosition(x + 1, y - 4);	symbol(1);
}

void R(int x, int y)
{
	l(x, y, 5);

	l(x + 2, y, 2);

	l(x + 2, y - 3, 2);

	cursorPosition(x + 2, y - 3);	symbol(1);

	cursorPosition(x + 1, y - 2);	symbol(1);

	cursorPosition(x + 1, y - 4);	symbol(1);

}

void Y(int x, int y)
{
	l(x + 1, y, 3);

	l(x, y - 2, 3);

	l(x + 2, y - 2, 3);
}

void B(int x, int y)
{
	E(x, y);

	cursorPosition(x + 3, y - 1);	symbol(1);

	cursorPosition(x + 3, y - 3);	symbol(1);
}

void C(int x, int y)
{
	cursorPosition(x + 1, y);	symbol(2);

	l(x, y - 1, 3);

	cursorPosition(x + 1, y - 4);	symbol(2);
}

void F(int x, int y)
{
	l(x, y, 5);

	cursorPosition(x + 1, y - 2);	symbol(2);

	cursorPosition(x + 1, y - 4);	symbol(2);
}

void G(int x, int y)
{
	C(x, y);

	l(x + 3, y, 3);

	cursorPosition(x + 2, y - 2);	symbol(1);
}

void H(int x, int y)
{
	X(x, y);

	cursorPosition(x, y - 2);	symbol(1);

	cursorPosition(x + 2, y - 2);	symbol(1);
}

void J(int x, int y)
{
	T(x, y);

	cursorPosition(x, y);	symbol(1);
}

void K(int x, int y)
{
	X(x, y);

	cursorPosition(x, y - 2);	symbol(1);
}

void N(int x, int y)
{
	l(x, y, 5);

	l(x + 4, y, 5);

	l(x + 2, y - 1, 3);

	cursorPosition(x + 1, y - 4);	symbol(1);

	cursorPosition(x + 3, y);		symbol(1);
}

void M(int x, int y)
{
	l(x, y, 5);

	l(x + 4, y, 5);

	l(x + 2, y - 2, 2);

	cursorPosition(x + 1, y - 4);	symbol(1);

	cursorPosition(x + 3, y - 4);	symbol(1);
}

void Q(int x, int y)
{
	O(x, y);

	cursorPosition(x + 3, y + 1);	symbol(1);
}

void U(int x, int y)
{
	L(x, y);

	l(x + 2, y - 1, 4);
}

void W(int x, int y)
{
	l(x, y, 5);

	l(x + 4, y, 5);

	cursorPosition(x + 1, y - 1);	symbol(1);

	cursorPosition(x + 2, y - 2);	symbol(1);

	cursorPosition(x + 3, y - 1);	symbol(1);
}

void Z(int x, int y)
{
	cursorPosition(x, y);		symbol(3);
	cursorPosition(x, y - 4);	symbol(3);

	cursorPosition(x, y - 1);		symbol(1);
	cursorPosition(x + 1, y - 2);	symbol(1);
	cursorPosition(x + 2, y - 3);	symbol(1);
}

void text_1(int x, int y)
{
	cursorPosition(x, y);	symbol(3);
	cursorPosition(x, y - 3); symbol(1);

	l(x + 1, y - 1, 4);
}
void text_2(int x, int y)
{
	cursorPosition(x, y);		symbol(3);
	cursorPosition(x, y - 2);	symbol(3);
	cursorPosition(x, y - 4);	symbol(3);

	cursorPosition(x, y - 1);		symbol(1);
	cursorPosition(x + 2, y - 3);	symbol(1);


}
void text_3(int x, int y)
{
	l(x + 2, y, 5);
	cursorPosition(x, y);			symbol(2);
	cursorPosition(x, y - 2);		symbol(2);
	cursorPosition(x, y - 4);		symbol(2);
}
void text_4(int x, int y)
{
	l(x, y - 2, 3);
	l(x + 2, y, 5);
	cursorPosition(x + 1, y - 2);		symbol(1);
}
void text_5(int x, int y)
{
	cursorPosition(x, y);		symbol(3);
	cursorPosition(x, y - 2);	symbol(3);
	cursorPosition(x, y - 4);	symbol(3);

	cursorPosition(x + 2, y - 1);	symbol(1);
	cursorPosition(x, y - 3);	symbol(1);
}
void text_6(int x, int y)
{
	l(x, y, 5);
	cursorPosition(x + 1, y);			symbol(2);
	cursorPosition(x + 1, y - 2);		symbol(2);
	cursorPosition(x + 1, y - 4);		symbol(2);
	cursorPosition(x + 2, y - 1);			symbol(1);
}
void text_7(int x, int y)
{
	l(x + 2, y, 5);
	cursorPosition(x, y - 4);		symbol(2);
}
void text_8(int x, int y)
{
	O(x, y);
	cursorPosition(x + 1, y - 2);		symbol(1);
}
void text_9(int x, int y)
{
	l(x + 2, y, 5);
	cursorPosition(x, y - 2);		symbol(2);
	cursorPosition(x, y - 4);		symbol(2);
	cursorPosition(x, y - 3);		symbol(1);
}


void K_Alpha(int x, int y)
{
	//
	cursorPosition(x, y);	symbol(5);
	cursorPosition(x, y - 28);	symbol(1);
	l(x + 1, y - 1, 10);
	l(x + 1, y - 24, 5);
	l(x + 2, y - 1, 28);
	l(x + 3, y - 1, 2);
	l(x + 3, y - 27, 2);
	//
	cursorPosition(x + 3, y - 17);	symbol(3);
	cursorPosition(x + 6, y - 18);	symbol(2);
	cursorPosition(x + 8, y - 19);	symbol(3);
	cursorPosition(x + 10, y - 20);	symbol(4);
	cursorPosition(x + 12, y - 21);	symbol(4);
	cursorPosition(x + 13, y - 22);	symbol(5);
	cursorPosition(x + 14, y - 23);	symbol(1);
	l(x + 15, y - 23, 2);
	l(x + 16, y - 23, 3);
	l(x + 17, y - 23, 4);
	l(x + 18, y - 23, 6);
	l(x + 19, y - 24, 9);
	l(x + 20, y - 24, 8);
	l(x + 21, y - 25, 7);
	l(x + 22, y - 26, 5);
	//
	l(x + 3, y - 15, 2);
	l(x + 4, y - 13, 2);
	l(x + 5, y - 10, 3);
	l(x + 6, y - 8, 3);
	l(x + 7, y - 6, 4);
	l(x + 8, y - 5, 4);
	l(x + 9, y - 3, 5);
	l(x + 10, y - 2, 5);
	cursorPosition(x + 11, y - 5);	symbol(1);
	cursorPosition(x + 11, y - 4);	symbol(2);
	cursorPosition(x + 11, y - 3);	symbol(3);
	cursorPosition(x + 11, y - 2);	symbol(5);
	cursorPosition(x + 11, y - 1);	symbol(7);
	cursorPosition(x + 11, y);		symbol(11);
	cursorPosition(x + 13, y + 1);	symbol(11);
	cursorPosition(x + 15, y + 2);	symbol(8);
	cursorPosition(x + 17, y + 3);	symbol(4);
}
void i_Alpha(int x, int y)
{
	cursorPosition(x + 1, y - 16);	symbol(3);
	cursorPosition(x, y - 17);		symbol(5);
	cursorPosition(x + 1, y - 18);	symbol(3);
	//
	l(x, y - 2, 4);
	l(x, y - 10, 2);
	l(x + 1, y - 1, 7);
	l(x + 1, y - 11, 2);
	l(x + 2, y, 13);
	l(x + 3, y, 5);
	l(x + 3, y - 8, 5);
	l(x + 4, y, 4);
	l(x + 5, y - 1, 3);
	l(x + 6, y - 1, 4);
	l(x + 7, y - 2, 4);
	l(x + 8, y - 5, 2);
}
void W_Alpha(int x, int y)
{
	cursorPosition(x + 1, y - 16);	symbol(1);
	cursorPosition(x, y - 15);		symbol(1);
	l(x + 6, y, 21);
	l(x + 5, y - 7, 15);
	l(x + 4, y - 17, 4);
	l(x + 3, y - 16, 4);
	l(x + 2, y - 16, 2);
	//
	l(x + 7, y - 1, 5);
	l(x + 8, y - 2, 3);
	l(x + 9, y - 3, 3);
	l(x + 10, y - 4, 2);
	l(x + 11, y - 5, 2);
	l(x + 12, y - 6, 2);
	l(x + 13, y - 7, 2);
	l(x + 14, y - 8, 3);
	l(x + 15, y - 9, 4);
	l(x + 16, y - 10, 5);

	l(x + 17, y - 10, 7);

	l(x + 18, y - 10, 5);
	l(x + 19, y - 9, 4);
	l(x + 20, y - 7, 4);
	l(x + 21, y - 5, 4);
	l(x + 22, y - 4, 3);
	l(x + 23, y - 2, 4);
	l(x + 24, y - 1, 3);
	l(x + 25, y + 1, 4);
	l(x + 26, y + 2, 3);
	l(x + 27, y + 5, 5);
	l(x + 28, y + 7, 5);
	l(x + 29, y + 9, 6);
	l(x + 30, y + 10, 17);
	l(x + 31, y + 1, 13);
	l(x + 32, y - 7, 10);
	l(x + 33, y - 12, 7);
	l(x + 34, y - 15, 7);
	l(x + 35, y - 17, 7);
	l(x + 36, y - 18, 7);
	l(x + 37, y - 19, 7);

	cursorPosition(x + 38, y - 20);	symbol(1);
	cursorPosition(x + 38, y - 21);	symbol(2);
	cursorPosition(x + 38, y - 22);	symbol(3);
	cursorPosition(x + 38, y - 23);	symbol(4);
	cursorPosition(x + 38, y - 24);	symbol(6);
	cursorPosition(x + 38, y - 25);	symbol(7);
	cursorPosition(x + 38, y - 26);	symbol(12);

	cursorPosition(x + 39, y - 27);	symbol(10);
	cursorPosition(x + 40, y - 28);	symbol(8);
	cursorPosition(x + 42, y - 29);	symbol(4);
}


void A_KIWI_PRODUCTION(int x, int y, int color)
{
	SetColor(CYAN);

	A(x, y - 25);

	SetColor(color);

	K_Alpha(x + 8, y + 7);
	i_Alpha(x + 34, y + 7);
	W_Alpha(x + 45, y + 7);
	i_Alpha(x + 88, y + 7);

	SetColor(CYAN);

	x += 49, y += 25;
	P(x + 25, y);
	R(x + 30, y);
	O(x + 35, y);
	D(x + 40, y);
	U(x + 46, y);
	C(x + 51, y);
	T(x + 56, y);
	I(x + 61, y);
	O(x + 66, y);
	N(x + 71, y);

	cursorPosition(x + 159, y);	symbol(1);

	char c = _getch();
}

void HOW_MANY_PLAYERS(int x, int y, int color)
{
	H(x, y);
	O(x + 4, y);
	W(x + 9, y);
	M(x + 17, y);
	A(x + 23, y);
	N(x + 28, y);
	Y(x + 34, y);
	P(x + 41, y);
	L(x + 45, y);
	A(x + 49, y);
	Y(x + 54, y);
	E(x + 58, y);
	R(x + 62, y);
	S(x + 67, y);
	QuestionMark(x + 72, y);

	y += 7;
	M(x + 25, y);
	A(x + 32, y);
	X(x + 36, y);
	text_4(x + 43, y);
	ExclamationMark(x + 49, y);
}

void GAME_OVER(int x, int y, int color)
{
	SetColor(color);
	G(x, y);
	A(x + 5, y);
	M(x + 10, y);
	E(x + 16, y);
	O(x + 23, y);
	V(x + 27, y);
	E(x + 31, y);
	R(x + 35, y);
	ExclamationMark(x + 40, y);
	ExclamationMark(x + 42, y);
	ExclamationMark(x + 44, y);
}


int getBits(int x) {

	int b = 0;
	if (x == 0)
		return 1;
	while (x > 0)
	{
		x /= 10;
		b++;
	}
	return b;
}
void IntConverter(int a, int x, int y) {

	int arr[10] = {};
	int bits = getBits(a);
	for (int i = bits - 1; i >= 0; i--)
	{
		arr[i] = a % 10;
		a /= 10;
	}
	for (int i = 0; i < bits; i++)
	{
		switch (arr[i])
		{
		case 1:
			text_1(x, y);	x += 4;
			break;

		case 2:
			text_2(x, y);	x += 4;
			break;

		case 3:
			text_3(x, y);	x += 4;
			break;

		case 4:
			text_4(x, y);	x += 4;
			break;

		case 5:
			text_5(x, y);	x += 4;
			break;

		case 6:
			text_6(x, y);	x += 4;
			break;

		case 7:
			text_7(x, y);	x += 4;
			break;

		case 8:
			text_8(x, y);	x += 4;
			break;

		case 9:
			text_9(x, y);	x += 4;
			break;

		case 0:
			O(x, y);	x += 4;
			break;
		}
	}
}

void FontConverter(string n, int& x, int y)
{
	for (int i = 0; n[i] != '\0'; i++)
	{
		switch (n[i])
		{
		case 'a':
		case 'A':
			A(x, y);	x += 4;
			break;

		case 'b':
		case 'B':
			B(x, y);	x += 5;
			break;

		case 'c':
		case 'C':
			C(x, y);	x += 5;
			break;

		case 'd':
		case 'D':
			D(x, y);	x += 5;
			break;

		case 'e':
		case 'E':
			E(x, y);	x += 4;
			break;

		case 'f':
		case 'F':
			F(x, y);	x += 4;
			break;

		case 'g':
		case 'G':
			G(x, y);	x += 5;
			break;

		case 'h':
		case 'H':
			H(x, y);	x += 4;
			break;

		case 'i':
		case 'I':
			I(x, y);	x += 4;
			break;

		case 'j':
		case 'J':
			J(x, y);	x += 4;
			break;

		case 'k':
		case 'K':
			K(x, y);	x += 4;
			break;

		case 'l':
		case 'L':
			L(x, y);	x += 4;
			break;

		case 'm':
		case 'M':
			M(x, y);	x += 6;
			break;

		case 'n':
		case 'N':
			N(x, y);	x += 6;
			break;

		case 'o':
		case 'O':
			O(x, y);	x += 4;
			break;

		case 'p':
		case 'P':
			P(x, y);	x += 4;
			break;

		case 'q':
		case 'Q':
			Q(x, y);	x += 5;
			break;

		case 'r':
		case 'R':
			R(x, y);	x += 4;
			break;

		case 's':
		case 'S':
			S(x, y);	x += 4;
			break;

		case 't':
		case 'T':
			T(x, y);	x += 4;
			break;

		case 'u':
		case 'U':
			U(x, y);	x += 4;
			break;

		case 'v':
		case 'V':
			V(x, y);	x += 4;
			break;

		case 'w':
		case 'W':
			W(x, y);	x += 6;
			break;

		case 'x':
		case 'X':
			X(x, y);	x += 4;
			break;

		case 'y':
		case 'Y':
			Y(x, y);	x += 4;
			break;

		case 'z':
		case 'Z':
			Z(x, y);	x += 4;
			break;
		}
	}
}






















enum { MAXLENGTH = 300, ROWS = 86, COLS = 166 };
struct Pos {
	int x;
	int y;
};
struct Food {
	Pos pos;
	int color;
	char sym;
	int size;
	bool eaten;
};
struct Snake {

	Pos p[MAXLENGTH], tail;
	int size, color, speed, score, dir, UP, DOWN, LEFT, RIGHT;
	bool alive;
	string name;
};
struct Obstacle {

	Pos** cord;
	int xsize, ysize, color;
	char sym;
};


void CreateObstacles(Pos**& obs, int& size) {

	obs = new Pos * [2];
	obs[0] = new Pos[size];
	obs[1] = new Pos[size];
	//1:-
	int cpos = 7 * COLS / 8, rpos = ROWS / 5;
	for (int i = 0; i < size / 5; i++)
	{
		obs[0][i] = { cpos - i , rpos };
		obs[0][i + size / 5] = { cpos - (size / 5) - i , rpos };
		obs[0][i + 2 * size / 5] = { cpos - (2 * size / 5) - i , rpos };
		obs[0][i + 3 * size / 5] = { cpos , rpos + i };
		obs[0][i + 4 * size / 5] = { cpos , rpos + (size / 5) + i };
	}
	obs[0][size - 1] = { 145,56 };

	//2:-
	cpos = COLS / 8, rpos = 4 * ROWS / 5;
	for (int i = 0; i < size / 5; i++)
	{
		obs[1][i] = { cpos + i , rpos };
		obs[1][i + size / 5] = { cpos + (size / 5) + i , rpos };
		obs[1][i + 2 * size / 5] = { cpos + (2 * size / 5) + i , rpos };
		obs[1][i + 3 * size / 5] = { cpos , rpos - i };
		obs[1][i + 4 * size / 5] = { cpos , rpos - (size / 5) - i };
	}
	obs[1][size - 1] = { 20,29 };
}

void DisplayObstacles(Pos**& obstacles, int& size) {

	for (int oi = 0; oi < 2; oi++)
		for (int i = 0; i < size; i++)
		{
			SetColor(14);	cursorPosition(obstacles[oi][i].x, obstacles[oi][i].y);	cout << char(-37);
		}
}

void GenerateObstacles(Pos**& obstacles, int& obsSize) {

	CreateObstacles(obstacles, obsSize);

	DisplayObstacles(obstacles, obsSize);
}



bool ValidMove(Snake S, int k1, int k2) {

	if (k1 == S.UP && k2 == S.DOWN || k2 == S.UP && k1 == S.DOWN
		|| k1 == S.RIGHT && k2 == S.LEFT || k2 == S.RIGHT && k1 == S.LEFT)
		return false;

	return true;
}

void Direction(Snake* S, int key, int Ps)
{
	for (int i = 0; i < Ps; i++)
	{
		if (S[i].alive)
		{
			if (key == S[i].UP && S[i].dir != S[i].DOWN)
			{
				S[i].dir = S[i].UP;
				break;
			}
			if (key == S[i].DOWN && S[i].dir != S[i].UP)
			{
				S[i].dir = S[i].DOWN;
				break;
			}
			if (key == S[i].LEFT && S[i].dir != S[i].RIGHT)
			{
				S[i].dir = S[i].LEFT;
				break;
			}
			if (key == S[i].RIGHT && S[i].dir != S[i].LEFT)
			{
				S[i].dir = S[i].RIGHT;
				break;
			}
		}
	}
}
void SnakeDirection(Snake& S) {

	if (S.dir == S.UP)
	{
		S.p[0].y--;
		if (S.p[0].y <= 0)
			S.p[0].y = ROWS;
	}
	else if (S.dir == S.RIGHT)
	{
		S.p[0].x++;
		if (S.p[0].x >= COLS)
			S.p[0].x = 1;
	}
	else if (S.dir == S.LEFT)
	{
		S.p[0].x--;
		if (S.p[0].x <= 0)
			S.p[0].x = COLS;
	}
	else if (S.dir == S.DOWN)
	{
		S.p[0].y++;
		if (S.p[0].y >= ROWS)
			S.p[0].y = 1;
	}
}

void SnakesMovements(Snake* S, int Ps) {

	for (int i = 0; i < Ps; i++)
		if (S[i].alive)
		{
			for (int j = S[i].size - 1; j > 0; j--)
				S[i].p[j] = S[i].p[j - 1];

			SnakeDirection(S[i]);
		}
}


void DisplayScores(string name, int score, int Ps, int i, int color) {

	cursorPosition((COLS / Ps * i) + 10, 87);
	SetColor(color);
	cout << name << ": " << score;
}

bool OnObstacle(Pos p, Pos**& obs, int& size)
{
	for (int oi = 0; oi < 2; oi++)
		for (int i = 0; i < size; i++)
			if (p.x == obs[oi][i].x && p.y == obs[oi][i].y)
				return true;
	return false;
}

bool ValidFoodPos(Snake* S, Food* food, int t, int Ps, Pos**& obs, int& size) {

	for (int k = 0; k < Ps; k++)
		for (int i = 0; i < S[k].size; i++)
			if (food[t].pos.x == S[k].p[i].x && food[t].pos.y == S[k].p[i].y)
				return false;

	if (food[t].pos.x <= 0 or food[t].pos.x >= COLS or food[t].pos.y <= 0 or food[t].pos.y >= ROWS)
		return false;

	for (int i = 0; i < food[0].size; i++)
		if (food[t].pos.x == food[i].pos.x && food[t].pos.y == food[i].pos.y && i != t)
			return false;

	if (OnObstacle(food[t].pos, obs, size))
		return false;

	return true;
}
void GenerateFood(Snake* S, Food* food, int Ps, int type, Pos**& obs, int& size) {

	do {
		//srand(time(0));
		food[type].pos.x = rand() % COLS;
		food[type].pos.y = rand() % ROWS;

	} while (!ValidFoodPos(S, food, type, Ps, obs, size));

	cursorPosition(food[type].pos.x, food[type].pos.y);
	SetColor(food[type].color);
	cout << food[type].sym;

	food[type].eaten = false;
}
void GenerateFoods(Snake* S, int Ps, Food* foods, Pos**& obs, int& size) {

	time_t current_time = time(0);
	static time_t start_time1 = time(0), start_time2 = time(0);
	time_t time_diff1 = current_time - start_time1, time_diff2 = current_time - start_time2;

	if (time_diff2 > 20 && foods[2].eaten)
	{
		start_time2 = time(0);
		GenerateFood(S, foods, Ps, 2, obs, size);
	}
	if (time_diff1 > 8 && foods[1].eaten)
	{
		start_time1 = time(0);
		GenerateFood(S, foods, Ps, 1, obs, size);
	}
	else if (foods[0].eaten)
	{
		GenerateFood(S, foods, Ps, 0, obs, size);
	}
}

void SnakeGrowth(Snake S[], Food* foods, int Ps, Pos**& obs, int& size) {

	for (int i = 0; i < Ps; i++)
	{
		if (S[i].alive && S[i].p[0].x == foods[2].pos.x && S[i].p[0].y == foods[2].pos.y)
		{
			S[i].size += 10;
			for (int j = 1; j <= 10; j++)
			{
				S[i].p[S[i].size - j].x = S[i].tail.x;
				S[i].p[S[i].size - j].y = S[i].tail.y;
			}

			S[i].score += 10;

			DisplayScores(S[i].name, S[i].score, Ps, i, S[i].color);

			foods[2].pos.x = 0, foods[2].pos.y = 0;
			foods[2].eaten = true;

			GenerateFoods(S, Ps, foods, obs, size);
		}
		else if (S[i].alive && S[i].p[0].x == foods[1].pos.x && S[i].p[0].y == foods[1].pos.y)
		{
			S[i].size += 5;
			for (int j = 1; j <= 5; j++)
			{
				S[i].p[S[i].size - j].x = S[i].tail.x;
				S[i].p[S[i].size - j].y = S[i].tail.y;
			}

			S[i].score += 5;

			DisplayScores(S[i].name, S[i].score, Ps, i, S[i].color);

			foods[1].pos.x = 0, foods[1].pos.y = 0;
			foods[1].eaten = true;

			GenerateFoods(S, Ps, foods, obs, size);
		}
		else if (S[i].alive && S[i].p[0].x == foods[0].pos.x && S[i].p[0].y == foods[0].pos.y)
		{
			S[i].size += 1;
			S[i].p[S[i].size - 1].x = S[i].tail.x;
			S[i].p[S[i].size - 1].y = S[i].tail.y;

			S[i].score++;

			DisplayScores(S[i].name, S[i].score, Ps, i, S[i].color);

			foods[0].pos.x = 0, foods[0].pos.y = 0;
			foods[0].eaten = true;

			GenerateFoods(S, Ps, foods, obs, size);
		}
	}
}

int SnakeIsDead(Snake S[], int Ps, Pos**& obs, int& size) {

	for (int i = 0; i < Ps; i++)
		if (S[i].alive)
		{
			if (OnObstacle(S[i].p[0], obs, size))
				return i;

			for (int j = 0; j < Ps; j++)
				for (int k = 0; k < S[j].size; k++)
					if (S[i].p[0].x == S[j].p[k].x and S[i].p[0].y == S[j].p[k].y
						and !(i == j && k == 0))
						return i;
		}
	return 4;
}

void SnakeTails(Snake* S) {

	if (S[0].alive)
		S[0].tail = S[0].p[S[0].size - 1];

	if (S[1].alive)
		S[1].tail = S[1].p[S[1].size - 1];

	if (S[2].alive)
		S[2].tail = S[2].p[S[2].size - 1];

	if (S[3].alive)
		S[3].tail = S[3].p[S[3].size - 1];
}



void DisplaySnake(Snake S, char c = 177, bool head = true, int color = 0) {

	for (int j = 0; j < S.size; j++)
	{
		cursorPosition(S.p[j].x, S.p[j].y);
		if (color == 0)
			SetColor(S.color);
		else
			SetColor(color);

		if (!head && j == 0)
			continue;
		else
			cout << c;
	}
}
void DisplayCompleteSnakes(Snake* S, int Ps) {

	for (int i = 0; i < Ps; i++)
		DisplaySnake(S[i]);
}
void DisplaySnakes(Snake* S, int Ps) {

	for (int i = 0; i < Ps; i++)
		if (S[i].alive)
		{
			cursorPosition(S[i].p[0].x, S[i].p[0].y);
			SetColor(S[i].color);
			cout << char(-37);
		}
}

void EraseSnakes(Snake* S, int Ps) {

	for (int i = 0; i < Ps; i++)
		if (S[i].alive)
		{
			cursorPosition(S[i].p[S[i].size - 1].x, S[i].p[S[i].size - 1].y);
			cout << ' ';
		}
}

void RemoveSnake(Snake* S, int i)
{
	S[i].alive = false;

	DisplaySnake(S[i], 177, false, RED);

	Sleep(1000);

	DisplaySnake(S[i], ' ', false);

	for (int pi = 0; pi < S[i].size; pi++)
		S[i].p[pi].x = 0, S[i].p[pi].y = 0;
}


int Speed(int tscore, int& d) {

	int speed = tscore;

	if (d - speed <= 0)
		return d - 1;
	return speed;
}


void Start_Screen() {

	A_KIWI_PRODUCTION(25, 45, LGREEN);

	system("cls");

	HOW_MANY_PLAYERS(44, ROWS / 2 - 8, CYAN);

	cursorPosition(COLS / 2 - 15, ROWS / 3);
	cout << "Welcome to MODERN SNAKES!";

	cursorPosition(COLS / 2, ROWS / 2 + 3);
}

void End_Screen(const Snake* S, int Ps) {

	int x = COLS / 2 - 28, y = 20;
	GAME_OVER(x, y, RED);

	for (int i = 0; i < Ps; i++)
	{
		x = COLS / 2 - 20;
		y = 40 + (i * 10);

		SetColor(S[i].color);
		FontConverter(S[i].name, x, y);
		cursorPosition(x + 2, y - 1);	symbol(1);		cursorPosition(x + 2, y - 3);	symbol(1);
		IntConverter(S[i].score, x + 5, y);
	}
	_getch();
}

void GameOver(const Snake* S, int Ps) {

	if (!S[0].alive && !S[1].alive && !S[2].alive && !S[3].alive)
	{
		system("cls");
		End_Screen(S, Ps);
		exit(0);
	}
}

void GetNames(Snake* S, int Ps) {

	for (int i = 0; i < Ps; i++)
	{
		cursorPosition(COLS / 2 - 8, 53 + (i * 3));
		cout << "Player" << i + 1 << " name: ";
		cin >> S[i].name;
	}
}
void init(Snake S[], Food* foods, int& Ps, Pos**& obs, int& size, int& delay) {

	do {
		cin >> Ps;
	} while (Ps < 1 or Ps > 4);

	GetNames(S, Ps);
	for (int i = 0; i < 4; i++)
		S[i].alive = false;

	switch (Ps)
	{
	case 4:
		S[3].alive = true;
		S[3].UP = 72, S[3].DOWN = 80, S[3].LEFT = 75, S[3].RIGHT = 77,
			S[3].color = CYAN;		S[3].dir = S[3].DOWN;
	case 3:
		S[2].alive = true;
		S[2].UP = 'g', S[2].DOWN = 'b', S[2].LEFT = 'v', S[2].RIGHT = 'n',
			S[2].color = MAGENTA;		S[2].dir = S[2].DOWN;

	case 2:
		S[1].alive = true;
		S[1].UP = 'w', S[1].DOWN = 's', S[1].LEFT = 'a', S[1].RIGHT = 'd',
			S[1].color = LGREEN;		S[1].dir = S[1].DOWN;

	case 1:
		S[0].alive = true;
		S[0].UP = 'i', S[0].DOWN = 'k', S[0].LEFT = 'j', S[0].RIGHT = 'l',
			S[0].color = DBLUE;			S[0].dir = S[0].DOWN;
	}

	S[0].score = 0, S[1].score = 0, S[2].score = 0, S[3].score = 0;
	delay = 150 - (Ps * 15);

	system("cls");

	GenerateObstacles(obs, size);

	for (int k = 0; k < Ps; k++)
	{
		S[k].size = 5;

		for (int i = 0; i < S[k].size; i++) {

			S[k].p[i].x = COLS / (k + 1) - i;
			S[k].p[i].y = ROWS / (k + 1);
		}

		DisplayScores(S[k].name, S[k].score, Ps, k, S[k].color);
	}

	foods[0].color = YELLOW, foods[1].color = LGREEN, foods[2].color = LRED, foods[3].color = MAGENTA,
		foods[0].sym = 176, foods[1].sym = 5, foods[2].sym = 2, foods[3].sym = 6,
		foods[0].size = 3;

	GenerateFood(S, foods, Ps, 0, obs, size);

	DisplayCompleteSnakes(S, Ps);

}

int main() {

	Snake S[4];
	Food foods[4];
	Pos** obstacles = nullptr;
	int Players = 0, noOfObstacles = 0, obsSize = 100, delay = 0;


	Start_Screen();

	init(S, foods, Players, obstacles, obsSize, delay);

	ShowConsoleCursor(false);

	while (1)
	{
		SnakeTails(S);

		if (_kbhit())
		{
			char ch = _getch();
			int key = int(ch);

			Direction(S, key, Players);
		}

		EraseSnakes(S, Players);

		SnakesMovements(S, Players);

		int playerNo = SnakeIsDead(S, Players, obstacles, obsSize);
		if (playerNo < 4 && S[playerNo].alive)
		{
			RemoveSnake(S, playerNo);

			GameOver(S, Players);
		}

		DisplaySnakes(S, Players);

		SnakeGrowth(S, foods, Players, obstacles, obsSize);

		int speed = Speed(S[0].score + S[1].score + S[2].score + S[3].score, delay);
		Sleep(delay - speed);
	}
}
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int lok;
struct Point
{
	short x, y;
};
struct Figure
{
	Point body[4];
	byte size;
	int type;
};
struct Ground
{
	Point * body;
	bool filled[10][10];
	int groundHeight;
	int size;
};
struct Wall
{
	Point gates[20];
	short size;
};
void draw(Point & p, char sign)
{
	COORD position = { p.x, p.y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
	cout << sign;
}
void drawEverything(Figure & f, Wall & w, Ground & g)
{
	for (byte i = 0; i < f.size; ++i)
	{
		draw(f.body[i], '#');
	}
	for (short i = 0; i < w.size; ++i) {
		draw(w.gates[i], '|');
	}
}
void init(Figure & f, Wall & w, Ground & g) {

	//int lok;
	//srand(time(NULL));
	//lok = rand() % 7+1 ;

	if (lok == 1)
	{
		f.body[0].x = 2;
		f.body[0].y = 1;
		f.body[1].x = 2;
		f.body[1].y = 2;
		f.body[2].x = 2;
		f.body[2].y = 3;
		f.body[3].x = 2;
		f.body[3].y = 4;
		f.size = 4;
		f.type = 1;
	}
	else if (lok == 2)
	{
		f.body[0].x = 2;
		f.body[0].y = 2;
		f.body[1].x = 3;
		f.body[1].y = 2;
		f.body[2].x = 4;
		f.body[2].y = 2;
		f.body[3].x = 5;
		f.body[3].y = 2;
		f.size = 4;
		f.type = 1;
	}
	else if (lok == 3)
	{
		f.body[0].x = 2;
		f.body[0].y = 4;
		f.body[1].x = 2;
		f.body[1].y = 3;
		f.body[2].x = 3;
		f.body[2].y = 3;
		f.body[3].x = 3;
		f.body[3].y = 2;
		f.size = 4;
		f.type = 2;
	}
	else if (lok == 4)
	{
		f.body[0].x = 2;
		f.body[0].y = 3;
		f.body[1].x = 3;
		f.body[1].y = 3;
		f.body[2].x = 3;
		f.body[2].y = 4;
		f.body[3].x = 4;
		f.body[3].y = 4;
		f.size = 4;
		f.type = 2;
	}
	else if (lok == 5)
	{
		f.body[0].x = 3;
		f.body[0].y = 4;
		f.body[1].x = 3;
		f.body[1].y = 3;
		f.body[2].x = 2;
		f.body[2].y = 3;
		f.body[3].x = 2;
		f.body[3].y = 2;
		f.size = 4;
		f.type = 3;
	}
	else if (lok == 6)
	{
		f.body[0].x = 2;
		f.body[0].y = 2;
		f.body[1].x = 2;
		f.body[1].y = 3;
		f.body[2].x = 3;
		f.body[2].y = 3;
		f.body[3].x = 3;
		f.body[3].y = 4;
		f.size = 4;
		f.type = 3;
	}
	else if (lok == 7)//kvadrat
	{
		f.body[0].x = 2;
		f.body[0].y = 2;
		f.body[1].x = 3;
		f.body[1].y = 2;
		f.body[2].x = 2;
		f.body[2].y = 3;
		f.body[3].x = 3;
		f.body[3].y = 3;
		f.size = 4;
		f.type = 4;
	}//kvadrat
	else if (lok == 8)
	{
		f.body[0].x = 3;
		f.body[0].y = 2;
		f.body[1].x = 2;
		f.body[1].y = 2;
		f.body[2].x = 2;
		f.body[2].y = 3;
		f.body[3].x = 2;
		f.body[3].y = 4;
		f.size = 4;
		f.type = 5;
	}
	else if (lok == 9)
	{
		f.body[0].x = 4;
		f.body[0].y = 3;
		f.body[1].x = 4;
		f.body[1].y = 2;
		f.body[2].x = 3;
		f.body[2].y = 2;
		f.body[3].x = 2;
		f.body[3].y = 2;
		f.size = 4;
		f.type = 5;
	}
	else if (lok == 10)
	{
		f.body[0].x = 2;
		f.body[0].y = 2;
		f.body[1].x = 3;
		f.body[1].y = 2;
		f.body[2].x = 3;
		f.body[2].y = 3;
		f.body[3].x = 3;
		f.body[3].y = 4;
		f.size = 4;
		f.type = 6;
	}
	else if (lok == 11)
	{
		f.body[0].x = 3;
		f.body[0].y = 3;
		f.body[1].x = 3;
		f.body[1].y = 2;
		f.body[2].x = 4;
		f.body[2].y = 2;
		f.body[3].x = 5;
		f.body[3].y = 2;
		f.size = 4;
		f.type = 6;
	}
	else if (lok == 12)
	{
		f.body[0].x = 3;
		f.body[0].y = 2;
		f.body[1].x = 2;
		f.body[1].y = 3;
		f.body[2].x = 3;
		f.body[2].y = 3;
		f.body[3].x = 4;
		f.body[3].y = 3;
		f.size = 4;
		f.type = 7;
	}
	else if (lok == 13)
	{
		f.body[0].x = 4;
		f.body[0].y = 3;
		f.body[1].x = 3;
		f.body[1].y = 2;
		f.body[2].x = 3;
		f.body[2].y = 3;
		f.body[3].x = 3;
		f.body[3].y = 4;
		f.size = 4;
		f.type = 7;
	}
	else if (lok == 14)
	{
		f.body[0].x = 3;
		f.body[0].y = 4;
		f.body[1].x = 4;
		f.body[1].y = 3;
		f.body[2].x = 3;
		f.body[2].y = 3;
		f.body[3].x = 2;
		f.body[3].y = 3;
		f.size = 4;
		f.type = 7;
	}
	else if (lok == 15)
	{
		f.body[0].x = 2;
		f.body[0].y = 3;
		f.body[1].x = 3;
		f.body[1].y = 4;
		f.body[2].x = 3;
		f.body[2].y = 3;
		f.body[3].x = 3;
		f.body[3].y = 2;
		f.size = 4;
		f.type = 7;
	}
	//
	//
	g.body = new Point[20];
	g.size = 0;
	w.size = 20;
	for (int i = 0; i < 10; ++i) {
		w.gates[i].x = 1;
		w.gates[i].y = i;
		w.gates[i + 10].x = 10;
		w.gates[i + 10].y = i;
	}
}
void move(Figure & f, int dx)
{
	for (byte i = 0; i < f.size; ++i)
	{
		f.body[i].x += dx;
		++f.body[i].y;
	}
}
void rotate(Figure & f)
{
	if (lok == 1)
	{
		f.body[0].x -= 2;
		f.body[0].y += 2;
		f.body[1].x--;
		f.body[1].y++;
		f.body[3].x++;
		f.body[3].y--;
		lok++;
	}
	else if (lok == 2)
	{
		f.body[0].x += 2;
		f.body[0].y -= 2;
		f.body[1].x++;
		f.body[1].y--;
		f.body[3].x--;
		f.body[3].y++;
		lok--;
	}
	else if (lok == 3)
	{
		f.body[0].x;
		f.body[0].y -= 2;
		f.body[1].x++;
		f.body[1].y--;
		f.body[3].x++;
		f.body[3].y++;
		lok++;
	}
	else if (lok == 4)
	{
		f.body[0].x;
		f.body[0].y += 2;
		f.body[1].x--;
		f.body[1].y++;
		f.body[3].x--;
		f.body[3].y--;
		lok--;
	}
	else if (lok == 5)
	{
		f.body[0].x--;
		f.body[0].y--;
		f.body[2].x++;
		f.body[2].y--;
		f.body[3].x += 2;
		f.body[3].y;
		lok++;
	}
	else if (lok == 6)
	{
		f.body[0].x++;
		f.body[0].y++;
		f.body[2].x--;
		f.body[2].y++;
		f.body[3].x -= 2;
		f.body[3].y;
		lok--;
	}
	else if (lok == 8)
	{
		f.body[0].x--;
		f.body[0].y++;
		f.body[2].x--;
		f.body[2].y--;
		f.body[3].x -= 2;
		f.body[3].y -= 2;
		lok++;
	}
	else if (lok == 9)
	{
		f.body[0].x++;
		f.body[0].y--;
		f.body[2].x++;
		f.body[2].y++;
		f.body[3].x += 2;
		f.body[3].y += 2;
		lok--;
	}
	else if (lok == 10)
	{
		f.body[0].x++;
		f.body[0].y++;
		f.body[2].x++;
		f.body[2].y--;
		f.body[3].x += 2;
		f.body[3].y -= 2;
		lok++;
	}
	else if (lok == 11)
	{
		f.body[0].x--;
		f.body[0].y--;
		f.body[2].x--;
		f.body[2].y++;
		f.body[3].x -= 2;
		f.body[3].y += 2;
		lok--;
	}
	else if (lok == 12)
	{
		f.body[0].x++;
		f.body[0].y++;
		f.body[1].x++;
		f.body[1].y--;
		f.body[3].x--;
		f.body[3].y++;
		lok++;
	}
	else if (lok == 13)
	{
		f.body[0].x--;
		f.body[0].y++;
		f.body[1].x++;
		f.body[1].y++;
		f.body[3].x--;
		f.body[3].y--;
		lok++;
	}
	else if (lok == 14)
	{
		f.body[0].x--;
		f.body[0].y--;
		f.body[1].x--;
		f.body[1].y++;
		f.body[3].x++;
		f.body[3].y--;
		lok++;
	}
	else if (lok == 15)
	{
		f.body[0].x++;
		f.body[0].y--;
		f.body[1].x--;
		f.body[1].y--;
		f.body[3].x++;
		f.body[3].y++;
		lok -= 3;
	}
}
void landing()
{

}
void game()
{
	Figure figure;
	Wall wall;
	Ground ground;
	bool isActive = true;
	init(figure, wall, ground);
	while (isActive)
	{
		system("cls");
		drawEverything(figure, wall, ground);
		int dx = 0;
		if (_kbhit())
		{
			dx = 0;
			char action = _getch();
			switch (action)
			{
			case 'a':
				dx = -1;
				break;
			case 'd':
				dx = 1;
				break;
			case 'w':
				rotate(figure);
				break;
			case 's':
				break;
			default:
				break;
			}
		}
		move(figure, dx);
		Sleep(1000);
	}
	delete[] ground.body;
}
int main()
{

	srand(time(NULL));
	lok = rand() % 15 + 1;

	game();
	return 0;
}
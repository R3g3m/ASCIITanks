#include <iostream>
#include <ctime>
#include <math.h>
#include <windows.h>
using namespace std;

bool exitGame = false;
HANDLE consoleHandle = 0;

void render() {

}

void input() {
	char symbol;
	cin >> symbol;
	switch (symbol)
	{
	case 27:
		exitGame = true;
		break;

	default:
		break;
	}


}

int main() {

	//Initialization
	srand(time(0));
	consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = 0;
	SetConsoleCursorInfo(consoleHandle, &cursorInfo);

	COORD coord;
	coord.X = 0;
	coord.Y = 0;
	SetConsoleCursorPosition(consoleHandle, coord);

	// Main game cycle
	while (!exitGame)
	{
		input();
		render();
	}

	system("pause");
	return 0;
}
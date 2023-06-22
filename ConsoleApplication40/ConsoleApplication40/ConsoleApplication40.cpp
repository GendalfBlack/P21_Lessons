#include <Windows.h>
#include <iostream>
#include <chrono>
#define TOP_LEFT 9488
#define TOP_RIGHT 9492
#define BOTTOM_LEFT 9496
#define BOTTOM_RIGHT 9500
#define HORIZONTAL 9473
#define VERTICAL 9475

#define TOP 9600
#define DOWN 9604
#define FULL 9608
#define T3 9617
#define T2 9618
#define T1 9619
using namespace std;

int main()
{
	srand(time(0));
	SetConsoleOutputCP(437);
	auto tp1 = chrono::system_clock::now();	auto tp2 = chrono::system_clock::now();
	wchar_t* screen = new wchar_t[120 * 30];
	HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL); //handler for console
	SetConsoleActiveScreenBuffer(hConsole);	DWORD dwBytesWritten = 0;
	for (int i = 0; i < 3600; i++)
	{
		screen[i] = 14400 +i;
		/*int rnd = rand() % 5;
		switch (rnd)
		{
		case 0: screen[i] = FULL; i++; screen[i] = FULL; break;
		case 1: screen[i] = T1; i++; screen[i] = T1; break;
		case 2: screen[i] = T2; i++; screen[i] = T2; break;
		case 3: screen[i] = T3; i++; screen[i] = T3; break;
		case 4: screen[i] = ' '; i++; screen[i] = ' '; break;
		default: break;
		}*/
	}
	screen[3599] = '\0';

	while (true) {
		tp2 = chrono::system_clock::now();
		chrono::duration<float> elapsetTime = tp2 - tp1;
		tp1 = tp2;
		float deltaTime = elapsetTime.count();
		//swprintf_s(screen, 12, L"FPS=%3.2f", 1.0f / deltaTime);
		WriteConsoleOutputCharacter(hConsole, screen, 3600, { 0, 0 }, &dwBytesWritten);
	}
}
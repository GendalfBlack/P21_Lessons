#include <Windows.h>
#include <iostream>
#define UKR SetConsoleOutputCP(1251)
#define ASCII SetConsoleOutputCP(437);
#define TOP_LEFT ASCII cout << char(218); UKR
#define TOP_RIGHT ASCII cout << char(191); UKR
#define BOTTOM_LEFT ASCII cout << char(192); UKR
#define BOTTOM_RIGHT ASCII cout << char(217); UKR
#define HORIZONTAL ASCII cout << char(196); UKR
#define VERTICAL ASCII cout << char(179); UKR

#define TOP ASCII cout << char(223); UKR
#define DOWN ASCII cout << char(220); UKR
#define FULL ASCII cout << char(219); UKR
#define T3 ASCII cout << char(178); UKR
#define T2 ASCII cout << char(177); UKR
#define T1 ASCII cout << char(176); UKR
#define RAND_COLOR SetConsoleTextAttribute(hld, (i*60+j)%17)
using namespace std;
HANDLE hld = GetStdHandle(STD_OUTPUT_HANDLE);

void goto1(int x, int y) {
    SetConsoleCursorPosition(hld, {(short)x, (short)y});
}

int main()
{
    srand(time(0));
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 51; j++)
        {
            int rnd = rand() % 5;
            RAND_COLOR; T3; T3;
        }
    }

}

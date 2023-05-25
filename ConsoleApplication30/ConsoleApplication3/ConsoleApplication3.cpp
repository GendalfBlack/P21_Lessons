#include <iostream>
#include <Windows.h>
using namespace std;

enum {
    BLACK, DARK_BLUE, DARK_GREEN, DARK_CYAN, DARK_RED, PURPLE, DARK_YELLOW, WHITE,
    GREY, BLUE, GREEN, CYAN, RED, PINK, YELLOW, EXTRA_WHITE
};
enum {
    BG_BLACK, BG_DARK_BLUE = 16, BG_DARK_GREEN = 32, BG_DARK_CYAN = 48, BG_DARK_RED = 64, BG_PURPLE = 80, BG_DARK_YELLOW = 96, BG_WHITE = 112,
    BG_GREY = 128, BG_BLUE = 144, BG_GREEN = 160, BG_CYAN = 176, BG_RED = 192, BG_PINK= 208, BG_YELLOW = 224, BG_EXTRA_WHITE = 240
};
struct Rectangle_ // структура
{
    short x;        // координата по горизонталі
    short y;        // координата по вуртикалі
    short w;        // ширина прямокутника 
    short h;        // висота прямокутника
    short c;        // колір прямокутника
    char s;         // символ з яких складається прямокутник
};

void show(Rectangle_ r) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), r.c); // мінять колір консолі
    for (short i = 0; i < r.h; i++) // для всієї висоти (для кожного рядка прямокутника)
    {
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { r.x, r.y + i }); // перемістити місце виводу
        for (short i = 0; i < r.w; i++)
        {
            cout << r.s;
        }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); // мінять колір консолі на дефолтний
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Rectangle_ r = { 5,5,50,5,BLUE | BG_DARK_BLUE, '*'};
    show(r);
    Rectangle_ r2 = { 5,10,50,5,YELLOW | BG_DARK_YELLOW, '@' };
    show(r2);
}

#include <iostream>
#define comp_type _CoreCrtNonSecureSearchSortCompareFunction

#define Pi 3.141539 // препроцесорна команда на заміну певним виразом заданого ім'я. 

using namespace std;
// Препроцесорна команда виконується над файлом коду до моменту компіляції цього коду(вносить зміни/підстановки
// та інш. перед тим як віддати файл на компіляцію в бінарний код))
struct Point {
    char name;
    int x;
    int y;
};

int comaratorPoint(Point a, Point b) {
    if (a.name > b.name) { return 1; } // ЯКЩО ЕЛЕМЕНТИ СТОЯТЬ В НЕПРАВИЛЬНОМУ ПОРЯДКУ, ПОВЕРТАЄМО 1
    else if (a.name < b.name) { return -1; } // ЯКЩО ЕЛЕМЕНТИ СТОЯТЬ В ПРАВИЛЬНОМУ ПОРЯДКУ, ПОВЕРТАЄМО -1
    else { return 0; } // ЯКЩО ЕЛЕМЕНТИ РІВНІ, ПОВЕРТАЄМО 0
}

int main()
{
    Point* s = new Point[10];
    for (int i = 0; i < 10; i++)
    {
        int  x, y;
        s[i] = {(char)(rand()%26+'a'), rand()%10-5,rand()%10-5};
        cout << s[i].name << ' ' << s[i].x << ',' << s[i].y << endl;
    }

    qsort(s, 10, sizeof(Point), (comp_type)comaratorPoint);
   
    cout << Pi;

    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << s[i].name << ' ' << s[i].x << ',' << s[i].y << endl;
    }
}
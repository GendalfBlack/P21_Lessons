/* Урок 40. Показчики */
#include <iostream>
using namespace std;

// Задача 2. Створити змінну з цілим значенням, що написав користувач.
// створити функцію що змінює це значення на найближче кратне 5.
// Округлює значення до найближчого кратного 5 значення

void round5(int* px) {
    int x = *px % 5;
    if (x > 2)
    {
        *px = *px - x + 5;
    }else{
        *px = *px - x;
    }
}

int main()
{
    int a;
    cin >> a;
    round5(&a);
    cout << a;
}

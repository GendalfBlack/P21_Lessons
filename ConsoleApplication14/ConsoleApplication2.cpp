#include <iostream>
#include <Windows.h>
using namespace std;

// Функції всередині інших функції не дозволяються синтаксисом
// Функції не можуть мати однаковиг сігнатур
// Сігнатура функції - це її тип даних, її назва та її набір параметрів

int D(int a, int b, int c) {
    int d = b * b - 4 * a * c;
    return d;
}

// передати перший від'ємний елемент у відповідь
int firstNeg(int arr[10]) {
    int fn = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < 0)
        {
            fn = arr[i];
            break;
        }
    }
    return fn;
}

int main()
{
    int d = D(5, 2, 1);
    cout << d;
}

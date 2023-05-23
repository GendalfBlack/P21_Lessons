#include <iostream>
using namespace std;

// Структура.
// Структура - це сукупність змінних, що об'єднані під одним 
// спільним ім'ям і можуть використовуватись як користувацькі
// типи данних.

struct Fraction
{
    int whole;
    int numerator;
    int denominator;
    
};
void print(Fraction f) {
    printf("\n%3c%3d\n%3d%3c\n%3c%3d\n", 
        ' ', f.numerator, f.whole, '-', ' ', f.denominator);
}
Fraction create(int a, int b, int c) {
    Fraction f = { a,b,c };
    return f;
}

int main()
{
    Fraction d1 = { 0, 1, 2 }; // ініціалізація структури через
                               // перерахування
    Fraction d2;               // неініціалізована структур (пуста)
    d2.whole = 1;              // ініціалізація структури через
    d2.numerator = 4;          // її змінні
    d2.denominator = 5;

    Fraction d3{1, 2, 3};      // пряма ініціалізація 
    print(d1);
    print(d2);
    print(d3);

    // БІНАРНИЙ ОПЕРАТОР ДОСТУПУ '.'
    // надає доступ у сукупності даних(тощо) зліва через назву змінних зправа
    // СТРУКТУРА.ЗМІННА
}

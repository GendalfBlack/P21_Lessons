#include <iostream>
using namespace std;

/*const у показчиках. */

int main()
{
    const bool da = true;
    int a = 123, b = 456;
    const int* pa = &a; // показчик доступу до змінної
    int const* pa2 = &a; // показчик доступу до змінної
    int* const pa3 = &a; // константний показчик (не змінна адреса)
    const int* const pa4 = &a; // константний (незмінний) показчик доступу до змінної
    // *pa2 = 456; // error 'const int* ' -> по адресі не можна змінити значення
    pa = &b;
    // pa3 = &b; // error 'int* const' -> адреса у позчику незмінна
    *pa3 = 789;
    // pa4 = &b;   // error 'const int* const' -> адреса у позчику незмінна
    // *pa4 = 789; // error 'const int* const' -> по адресі не можна змінити значення
    cout << *pa << '\n';
    cout << a << '\n';
}

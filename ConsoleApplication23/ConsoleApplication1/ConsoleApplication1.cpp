#include <iostream>
using namespace std;

// ref, Reference, посилання, ссилка - це псевдонім для змінної. Це змінна, що копіює адресу іншої змінної,
//                                     записуючи себе в те ж саме місце, що і оригінальна змінна (додає 
//                                     одній і тій самій комірці пам'яті ще одну назву)

// 

int main()
{
    int x = 10;
    int* px = &x;
    int& rx = x;

    cout << *px << endl;
    cout << rx << endl;

    *px = 11;
    rx = 12;

    cout << x << endl;
}
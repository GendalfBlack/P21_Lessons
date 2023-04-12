#include <iostream>
#include <Windows.h>
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int one_h = 60;

    float amount;
    cout << "¬вед≥ть час у формат≥ год.хв (14.51): ";
    cin >> amount;

    int h = amount;
    float m = (amount - h) * one_h;
    int m2 = m;
    float s = (m - m2) * one_h;
    printf("¬аша сумма %d год. %.2f хв. %.2f сек.", h, m, s);
}


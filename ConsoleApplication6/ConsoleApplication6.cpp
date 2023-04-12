#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    srand(time(NULL));

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    // while, do while
    /*
    while умова:             while(умова){
    --->код тіла циклу       код тіла циклу
                             }
    */
    int min = 0, max = 320;

    int i = 0;
    while (i < 500)
    {
        int x = rand() % (max - min + 1) + min;
        cout << x << ' ';
        i++;
    }
}
#include <iostream>
using namespace std;
/*Задача 1. Створено два статичних масива на 10 елементів.
Необхідно почергово зробити суму, різницю, добуток, частку та піднесення
до степеня попарно для кожного елементу на тому самому місці з обох массивів
*/
double _add(int a, int b) { return a + b; }
double _sub(int a, int b) { return a - b; }
double _mul(int a, int b) { return a * b; }
double _div(int a, int b) { return a / b; }
double _pow(int a, int b) { return pow(a, b); }

double (*actions[5]) (int, int) = {_add, _sub, _mul,_div, _pow};
/*статичний масив що зберігає 5 функцій, до яких можна звернутись і використати їх за індексом*/

int main()
{
    const int size = 10;
    int arr1[size] = { 1,2,3,4,5,6,7,8,9,10 };
    int arr2[size] = { 10,9,8,7,6,5,4,3,2,1 };
    int c;
    cout << "0. +" << endl;
    cout << "1. -" << endl;
    cout << "2. *" << endl;
    cout << "3. /" << endl;
    cout << "4. ^" << endl;
    cin >> c;
    for (int i = 0; i < size; i++)
    {
        printf("+%5.0lf, ", actions[c](arr1[i], arr2[i]));
    }
}

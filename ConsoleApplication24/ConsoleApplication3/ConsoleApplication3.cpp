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
double _pow(int a, int b) { return pow(a,b); }

double (*action) (int, int); // показчик на функцію
// double    - тип значення що повертається функцією на яку вказує показчик
// (*action) - назва показчика
// (int,int) - набір параметрів що приймає функція на яку вказує показчик

void print_all_pairs(int arr1[], int arr2[], int size, double (*action) (int, int))
{
    for (int i = 0; i < size; i++)
    {
        printf("+%5.0lf, ", action(arr1[i], arr2[i]));
    }
}

int main()
{
    const int size = 10;
    int arr1[size] = { 1,2,3,4,5,6,7,8,9,10 };
    int arr2[size] = { 10,9,8,7,6,5,4,3,2,1 };
    int c;
    cout << "1. +" << endl;
    cout << "2. -" << endl;
    cout << "3. *" << endl;
    cout << "4. /" << endl;
    cout << "5. ^" << endl;
    cin >> c;
    switch (c)
    {
    case 1: action = _add; break;
    case 2: action = _sub; break;
    case 3: action = _mul; break;
    case 4: action = _div; break;
    case 5: action = _pow; break;
    default: break;
    }
    print_all_pairs(arr1, arr2, size, action);
}

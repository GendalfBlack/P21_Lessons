#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " type array size: ";
    cin >> n;
    // int *    -> покажчик на int (коректний тип даних для динамічних масивів)
    // new      -> оператор що динамічно виділяє пам'ять 
    // int[n]   -> під необхідну кількість елементів необхідного типу
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 10;
        cout << arr[i] << ' ';
    }
    cout << '\n' << n;
}

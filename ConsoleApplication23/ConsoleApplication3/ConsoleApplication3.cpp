#include <iostream>
using namespace std;

// Задача 2. Функція має повертати елемент масиву що дорівнює 0. 
// Потім за допомогою цієї функції змінити всі значення нулів на 1.

int counter = 0;

// простий спосіб без показчиків та посилань
int searchIndexZero(int* arr, int n) {
    for (int i = 0; i < n; i++)
    {
        counter++;
        if (arr[i] == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) { arr[i] = rand() % 5 - 2; cout << arr[i] << ' '; }
    cout << endl;
    
    while (searchIndexZero(arr, n) != -1) { arr[searchIndexZero(arr, n)] = 1; }
    

    for (int i = 0; i < n; i++) { cout << arr[i] << ' '; }
    cout << endl << endl << counter;
}

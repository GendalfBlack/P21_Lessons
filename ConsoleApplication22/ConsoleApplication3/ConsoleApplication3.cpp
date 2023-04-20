#include <iostream>
using namespace std;

// Задача 1. Створити функцію що приймає два показчики на елементи масива
// та повертає відстань між цими елементами в масиві

// Задача 2. Створити функцію що приймає масив та його розмір та повертає
// відстань між найменшим та найбільшим елементами

int f1(int* pa, int* pb) {
    return pb - pa;
}
int _abs(int n) {
    return n >= 0 ? n : -n;
}
int* pmin(int* arr, int n) {
    int imin = 0;
    for (int i = 1; i < n; i++) { if (arr[i] < arr[imin]) { imin = i; } } return &arr[imin];
}
int* pmax(int* arr, int n) {
    int imax = 0;
    for (int i = 1; i < n; i++) { if (arr[i] > arr[imax]) { imax = i; } }return &arr[imax];
}
int f2(int* arr, int n) {
    return _abs(pmax(arr, n) - pmin(arr, n));
}

int main()
{
    srand(time(0));
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) { arr[i] = rand() % 10 + 1; cout << arr[i] << ' '; }
    cout << endl;
    cout << f2(arr, n);
}
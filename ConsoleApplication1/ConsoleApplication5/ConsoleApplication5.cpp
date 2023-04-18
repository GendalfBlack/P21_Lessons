#include <iostream>
using namespace std;

// Задача 4. Створити функцію що дозволить отримати доступ до місця в 
// пам'яті де знаходиться перший ноль масиву, для того, щоб перезаписати 
// його на новий елемент. Використовуючи показчики.

int* firstZero(int* arr, int n) {
    int* p0 = nullptr;
    int j = -1;
    for (int i = 0; i < n; i++) { if (arr[i] == 0) { j = i; break; } }
    if (j > 0) { p0 = &arr[j]; }
    return p0;
}

int main()
{
    int arr[10] = { 12,4,235,34,0,45,67,45,0,65 };
    for (int i = 0; i < 10; i++) { cout << arr[i] << ' '; }cout << '\n'; // вивести масив
    // Задача 4.1 Записати в перше місце масиву де зустрічається ноль число 10.
    if (firstZero(arr, 10) != nullptr) { *firstZero(arr, 10) = 10; } // спроба поміняти 0 на 10
    for (int i = 0; i < 10; i++) { cout << arr[i] << ' '; }cout << '\n';// вивести масив
    if (firstZero(arr, 10) != nullptr){ *firstZero(arr, 10) = 55;} // спроба поміняти 0 на 55
    for (int i = 0; i < 10; i++){cout << arr[i] << ' ';}cout << '\n';// вивести масив
    if (firstZero(arr, 10) != nullptr) { *firstZero(arr, 10) = 99; } // спроба поміняти 0 на 99
    for (int i = 0; i < 10; i++) { cout << arr[i] << ' '; }cout << '\n';// вивести масив
}
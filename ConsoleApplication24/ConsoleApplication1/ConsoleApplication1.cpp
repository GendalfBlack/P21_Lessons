
#include <iostream>
using namespace std;

/*Завдання 4: Напишіть програму, яка просить користувача ввести речення,
а потім змінює порядок слів у реченні. Використовуйте динамічні масиви
для зберігання слів у реченні.*/

/*Завдання 2. Напишіть функцію, що по аналогії з завданням що ми
розглянули на уроці (int* append(int * arr, int n)), що приймає два масива і
створює та повертає новий масив який складається тільки з унікальних
елементів які зустрічаються лише 1 раз в обої масивах*/

int* dupes(int* arr1, int* arr2, int n1, int n2, int & count) {
    count = 0;
    for (int i = 0; i < n1; i++)
    {
        bool f = true;
        for (int j = 0; j < n1; j++) { if (arr1[j] == arr1[i] && i != j) { f = false; break; } }
        for (int j = 0; j < n2; j++) { if (arr2[j] == arr1[i]) { f = false; break; } }
        if (f) { count++; }
    }
    for (int i = 0; i < n2; i++)
    {
        bool f = true;
        for (int j = 0; j < n2; j++) { if (arr2[j] == arr2[i] && i != j) { f = false; break; } }
        for (int j = 0; j < n2; j++) { if (arr1[j] == arr2[i]) { f = false; break; } }
        if (f) { count++; }
    }
    int* arr3 = new int[count];
    int k = 0;
    for (int i = 0; i < n1; i++)
    {
        bool f = true;
        for (int j = 0; j < n1; j++) { if (arr1[j] == arr1[i] && i != j) { f = false; break; } }
        for (int j = 0; j < n2; j++) { if (arr2[j] == arr1[i]) { f = false; break; } }
        if (f) { arr3[k] = arr1[i]; k++; }
    }
    for (int i = 0; i < n2; i++)
    {
        bool f = true;
        for (int j = 0; j < n2; j++) { if (arr2[j] == arr2[i] && i != j) { f = false; break; } }
        for (int j = 0; j < n2; j++) { if (arr1[j] == arr2[i]) { f = false; break; } }
        if (f) { arr3[k] = arr2[i]; k++; }
    }
    return arr3;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int* arr1 = new int[n1];
    int* arr2 = new int[n2];
    for (int i = 0; i < n1; i++) { arr1[i] = rand() % 10 + 1; }
    for (int i = 0; i < n1; i++) { cout << arr1[i] << ' '; } cout << endl;

    for (int i = 0; i < n2; i++) { arr2[i] = rand() % 10 + 1; } 
    for (int i = 0; i < n2; i++) { cout << arr2[i] << ' '; } cout << endl;

    int count;
    int* arr3 = dupes(arr1, arr2, n1, n2, count);
    for (int i = 0; i < count; i++) { cout << arr3[i] << ' '; } cout << endl;
}

#include <iostream>
using namespace std;
/*
    Задача 3. Порахувати в рядку що ввів користувач кількість великих літер
    
    Задача 4. Порахувати в рядку що ввів користувач кількість крапок
    використовуючи strchr

    Задача 5. Порахувати в рядку що ввів користувач кількість слів "this"
    використовуючи strstr

    */

// Задача. Дано масив цілих чисел без від'ємних, але з 0, треба знайти найменше ненульове значення.
char* min(char* arr[]) {
    char* min = nullptr;
    for (int i = 0; arr[i] != nullptr; i++)
    {
        if (arr[i] != nullptr && min == nullptr) { min = arr[i]; }
        if (arr[i] != nullptr && arr[i] < min) { min = arr[i]; }
    }
    return min;
}


int main()
{
    /*
    int arr[] = { 1,2,3,3,45,6,123,87 };

    cout << arr[2]; // запис доступа до масива по індексу
    // [] - оператор, що іттерує масив
    cout << *(arr+2); // запис доступу до масиву за допомогою арифметики показчиків
    // *(arr+2) -> arr[2];
    // *a - оператор розіменування показчика "а". доступ до значення по адресі
    */
    char* str = new char[150];
    fgets(str, 150, stdin);
    /*
    * task 3
    int n = 0;
    for (int i = 0; i < 150 || str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 90) { n++; }
    }
    cout << n;

    */
    /*
    * task 4
    int n = 0;
    char* pos = str;
    while (true)
    {
        pos = strchr(pos, '.');
        if (pos == nullptr) { break; }
        n++;
        pos++;
    }

    cout << n;*/
    /*
    * task 4.2
    int n = 0;
    for (char* pos = str; ; n++, pos++)
    {
        pos = strchr(pos, '.');
        if (pos == nullptr) { break; }
    }*/
    int n = 0;
    char* pos = str;
    if (strstr(str, "this ") == str || strstr(str, "this,") == str || strstr(str, "this\0") == str) { n++; }
    while (true) {
        char* vars[] = { strstr(pos, " this "),strstr(pos, " this,"),strstr(pos, " this\0"), nullptr };
        pos = min(vars);
        if (pos == nullptr) { break; }
        n++;
        pos++;
    }
    cout << n;
}

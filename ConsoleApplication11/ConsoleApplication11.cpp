#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Що таке алгоритм сортування?
    // сортування може бути не тільки чисельне (зростання/спадання)
    // воно також може бути на основі будь-якого правила зміни позиції
    // двох чи більше елементів у масиві
    // 
    // Які алгоритми є в с++ ?
    // Приклади і побудова алгоритмів ?
    // SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
    const int size = 30;
    srand(5689);
    int arr[size] = {};
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 1000;
        printf("%3d ", arr[i]);
    }
    cout << '\n' << '\n';
    int prysvoyennya = 0;
    int porivnyannya = 0;

    //
    //// БУЛЬБАШКОВИЙ АЛГОРИТМ ЗЛІВА НАПРАВО 
    //// ДЕ НАЙМЕНШЕ ЧИСЛО РУХАЄТЬСЯ НА ПОЧАТОК
    //for (int i = 0; i < size; i++)
    //{
    //    for (int j = size - 1; j > i; j--)
    //    {
    //        porivnyannya++;
    //        if (arr[j] < arr[j - 1])
    //        {
    //            int temp = arr[j];
    //            arr[j] = arr[j - 1];
    //            arr[j - 1] = temp;
    //            prysvoyennya ++;
    //        }
    //    }
    //}

    //for (int i = 0; i < size; i++)
    //{
    //    printf("%3d ", arr[i]);
    //}
    //printf("\nПорівнянь: %d. Заміна: %d", porivnyannya, prysvoyennya);
    //
    /*
    const int size2 = 12;
    int arr2[size2] = {};
    for (int i = 0; i < size2; i++)
    {
        arr2[i] = rand() % (size2 * 2);
        cout << arr2[i] << ' ';
    }
    cout << '\n' << '\n';

    bool sorted = false;
    while (!sorted) {
        int e1 = rand() % size2;
        int e2 = rand() % size2;

        int temp = arr2[e1];
        arr2[e1] = arr2[e2];
        arr2[e2] = temp;
        prysvoyennya += 3;
        for (int i = 0; i < size2-1; i++)
        {
            porivnyannya++;
            if (arr2[i] <= arr2[i + 1])
            {
                sorted = true;
            }
            else {
                sorted = false;
                break;
            }
        }
        
    }
    cout << '\n';
    for (int i = 0; i < size2; i++)
    {
        cout << arr2[i] << ' ';
    }
    printf("\nПорівнянь: %d. Присвоєнь: %d", porivnyannya, prysvoyennya);
    */

    //prysvoyennya = 0;
    //porivnyannya = 0;
    //// АЛГОРИТМ СОРТУВАННЯ ВСТАВКАМИ ЗЛІВА НАПРАВО
    //// У ПОРЯДКУ ЗРОСТАННЯ
    //for (int i = 1; i < size; i++)
    //{
    //    for (int j = i; arr2[j] < arr2[j - 1] && j > 0; j--)
    //    {
    //        porivnyannya++;
    //        int temp = arr2[j];
    //        arr2[j] = arr2[j-1];
    //        arr2[j-1] = temp;
    //        prysvoyennya++;
    //    }
    //}
    //
    
    // АЛГОРИТМ ВИБІРКОЮ ЗЛІВА НАПРАВО
    // В ПОРЯДКУ ЗРОСТАННЯ
    for (int index = 0; index < size; index++)
    {
        int imin = index;
        for (int i = index; i < size; i++)
        {
            porivnyannya++;
            if (arr[i] < arr[imin])
            {
                imin = i;
            }
        }
        int temp = arr[index];
        arr[index] = arr[imin];
        arr[imin] = temp;
        prysvoyennya++;
    }

    cout << '\n';
    for (int i = 0; i < size; i++)
    {
        printf("%3d ", arr[i]);
    }
    printf("\nПорівнянь: %d. Заміна: %d", porivnyannya, prysvoyennya);
    
}

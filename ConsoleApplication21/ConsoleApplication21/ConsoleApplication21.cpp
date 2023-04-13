/* Урок 40. Розбір задачи урока 39*/
#include <iostream>
using namespace std;

/* Задача 2. Створити двовимірний динамічний масив нецілих чисел.
   Заповнити його за правилом:
   кожний елмент дорівнює "номер рядка. номер стовпчика"
   наприклад елемент в 4 рядку і 7 стовпчику буде нецілим числом 3.6
   вивести на екран за допомогою функції
*/

void printMDA(double** arr, int m, int n) {
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%1.1lf ", arr[i][j]);
        }
        cout << '\n';
    }
}

int main()
{
    int n, m;
    cin >> m >> n;
    double** arr = new double*[m];
    for (int i = 0; i < m; i++) { arr[i] = new double[n]; } /* СТВОРИЛИ МАСИВ */

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = i + j / 10.0;
        }
    }
    printMDA(arr, m, n);
}
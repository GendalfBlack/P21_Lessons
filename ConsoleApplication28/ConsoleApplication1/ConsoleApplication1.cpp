#include <iostream>
using namespace std;

// Зміна розмірів двовимірного динамічного масиву

/* 

Задача 1. Додати стовпець на початок матриці.
*/
void addAtBegin(int**& matrix, int& n, int& m) {
    int** new_matrix = new int* [n];
    for (int i = 0; i < n; i++) { new_matrix[i] = new int[m + 1]; }
    for (int i = 0; i < n; i++)
    {
        new_matrix[i][0] = 0;
        for (int j = 0; j < m; j++)
        {
            new_matrix[i][j+1] = matrix[i][j];
        }
    }
    m++;
    for (int i = 0; i < n; i++) { delete[] matrix[i]; }
    delete[] matrix;
    matrix = new_matrix;
}

/*
Задача 2. Видалити стовпець з кінця матриці.
*/

void removeLast(int**& matrix, int& n, int& m) {
    int** new_matrix = new int* [n];
    for (int i = 0; i < n; i++) { new_matrix[i] = new int[m - 1]; }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m-1; j++)
        {
            new_matrix[i][j] = matrix[i][j];
        }
    }
    m--;
    for (int i = 0; i < n; i++) { delete[] matrix[i]; }
    delete[] matrix;
    matrix = new_matrix;
}

/*
Задача 3. Зробити зсув рядків в двовимірному динамічному массиві на K рядків. 
(1 рядок массива має опинитись на місці K, а 
всі рядкі з останніх місць рухаються на початок массиву)
*/

void shiftVerticaly(int** matrix, int n, int m) {
    int* lastRow = matrix[n - 1];
    for (int i = n-2; i >= 0; i--)
    {
        matrix[i + 1] = matrix[i];
    }
    matrix[0] = lastRow;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) { matrix[i] = new int[m]; }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = rand() % 9 + 1;
            cout << matrix[i][j] << ' ';
        } cout << endl;
    }
    cout << endl;

    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        shiftVerticaly(matrix, n, m);
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << ' ';
        } cout << endl;
    }

}

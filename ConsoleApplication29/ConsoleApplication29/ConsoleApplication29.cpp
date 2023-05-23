#include <iostream>
using namespace std;

// Задача 1. Зсув стовпців двовимірного динамічного массива вліво.

void printArray(int** arr, int n, int m) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;
}

void shiftVerticaly(int** arr, int n, int m) {
	int* firstColumn = new int[n];
	for (int i = 0; i < n; i++)
	{
		firstColumn[i] = arr[i][0]; 
		// запам'ятовуємо ПЕРШИЙ елемент КОЖНОГО рядка (перший стовпчик)
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < m; j++)
		{
			arr[i][j - 1] = arr[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		arr[i][m - 1] = firstColumn[i];
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	
	int** arr = new int* [n]; // створення массиву показчиків на майбутні рядки
	for (int i = 0; i < n; i++) { arr[i] = new int[m]; } // виділення пам'яті під елементи
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand() % 9 + 1;
		}
	}
	printArray(arr, n, m);
	shiftVerticaly(arr, n, m);
	printArray(arr, n, m);
}
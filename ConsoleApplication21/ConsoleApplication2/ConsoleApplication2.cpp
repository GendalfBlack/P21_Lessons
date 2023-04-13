#include <iostream>
using namespace std;

// Задача 1. Створити функцію що видалить із динамічного масива останній елемент.

int* pop(int* arr, int* n) {
    int* arr2 = new int[*n - 1];
	for (int i = 0; i < *n-1; i++)
	{
		arr2[i] = arr[i];
	}
	delete[] arr;
	--*n;
	return arr2;
}


int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
	arr = pop(arr, &n);
	cout << '\n';
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
}

#include <iostream>
using namespace std;

// Задача 2. Функція має повертати елемент масиву що дорівнює 0. 
// Потім за допомогою цієї функції змінити всі значення нулів на 1.

// "простий" спосіб з посиланнями

bool getAddressZero(int* end, int*& last) {
	for (int i = 0; last <= end; i++)
	{
		if (*last == 0) { return true; }
		++last;
	}
	return false;
}

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) { arr[i] = rand() % 5 - 2; cout << arr[i] << ' '; }
	cout << endl;
	int* last = arr;
	while (getAddressZero(&arr[n - 1], last)) { *last++ = 1; }

	for (int i = 0; i < n; i++) { cout << arr[i] << ' '; }
}
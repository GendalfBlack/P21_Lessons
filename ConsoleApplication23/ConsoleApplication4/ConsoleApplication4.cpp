#include <iostream>
using namespace std;

// Задача 2. Функція має повертати елемент масиву що дорівнює 0. 
// Потім за допомогою цієї функції змінити всі значення нулів на 1.

// "простий" спосіб з показчиками

bool getAddressZero(int* end, int** plast) {
	for (int i = 0; *plast <= end; i++)
	{
		if (*(*plast) == 0) { return true; }
		++*plast;
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
	int** plast = &last;
	while (getAddressZero(&arr[n-1], plast)) { *last++ = 1; }

	for (int i = 0; i < n; i++) { cout << arr[i] << ' '; }
}
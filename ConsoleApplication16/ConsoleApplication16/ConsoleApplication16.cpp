#include <iostream>
using namespace std;

// Рекурсивна функція - це функція що при певних умовах
// може викликати сама себе під час виконання

void fillArray(int arr[3], int i) {
	arr[i] = rand() % 10;
	if (i < 2) { fillArray(arr, ++i); }
}

int main()
{
    int arr[3] ={};
	// for (int i = 0; i < 10; i++){ arr[i] = rand() % 10; }
	fillArray(arr, 0);
	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << ' ';
	}
}
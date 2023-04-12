#include <iostream>
using namespace std;

//лінійний пошук повертає індекс елемента Х у масиві, за наявності
int linearSearch(int *arr, int n, int x) {
	int i = -1;
	for (int j = 0; j < n; j++)
	{ if (arr[j] == x) { i = j; return i; }	}
	return i;
}
int* removeX(int* arr, int n, int x) {
	int index = linearSearch(arr, n, x);
	if (index < 0) { return arr; }
	else {
		int* arr2 = new int[n - 1];
		for (int i = 0; i < n; i++)
		{
			if (i < index) { arr2[i] = arr[i]; }
			else if (i > index) { arr2[i - 1] = arr[i]; }
		}
		delete[] arr;
		return arr2;
	}
}
void printArray(int* arr, int n) {
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ' ';
	}
}
void inputArray(int* arr, int n) {
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}
int* addArrays(int* A, int* B, int n1, int n2) {
	int* C = new int[n1 + n2];
	for (int i = 0; i < n1; i++) { C[i] = A[i]; }
	for (int i = 0; i < n2; i++) { C[i + n1] = B[i]; }
	return C;
}
void printPositive(int* arr, int n) {
	int* arr2;
	int p = 0;
	for (int i = 0; i < n; i++) { if (arr[i] > 0) { p++; } } // знайти кількість додатніх
	arr2 = new int[p]; // створити відповідної довжини масив
	for (int i = 0, i2 = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			arr2[i2] = arr[i]; i2++; // перепасати в потрібне місце тільки додатні
			cout << arr2[i2] << ' '; // вивести тільки додатні
		}
	}
}

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	int n2;
	cin >> n2;
	int* arr2 = new int[n2];
	inputArray(arr, n);
	inputArray(arr2, n2);
	int* C = addArrays(arr, arr2, n, n2);
	printArray(C, n+n2);
}
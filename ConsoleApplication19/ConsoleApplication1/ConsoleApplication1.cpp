#include <iostream>
using namespace std;
template <typename T>
void printArray(T* arr, int n);
template <typename T>
void fillArray(T* arr, int n);
// Задача 1. Функція що приймає динамічний масив arr, його розмір 
// n та нове число x, що треба додати в кінець масива і повертає 
// новий розширений масив з цим елементом як результат.
template <typename T>
T* appendArray(T* arr, int n, T x)
{
    int* arr2 = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		arr2[i] = arr[i];
	}
	arr2[n] = x;
	delete[] arr;
	return arr2;
}
// Задача 2. Функція що приймає динамічний масив arr, його розмір
// n та індекс елементу i, що видаляє відповідний елемент з масиву
// за індексом.

template <typename T>
T* removeElement(T* arr, int n, int i) {
	int* arr2 = new int[n - 1];
	for (int j = 0; j < i; j++)
	{
		arr2[j] = arr[j];
	}
	for (int j = i + 1; j < n; j++)
	{
		arr2[j - 1] = arr[j];
	}
	delete[] arr;
	return arr2;
}
int main()
{
	cout << "Type array size: ";
	int n;;
	cin >> n;
	int* arr = new int[n];
	fillArray(arr, n);
	arr = removeElement(arr, n, 3);
	n--;
	printArray(arr, n);
}


template <typename T>
void printArray(T* arr, int n) {
    for (int i = 0; i < n; i++) { cout << arr[i] << ' '; } cout << '\n';
}
template <typename T>
void fillArray(T* arr, int n) {
    for (int i = 0; i < n; i++) { cin >> arr[i]; }
}
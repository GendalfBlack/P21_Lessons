#include <iostream>
using namespace std;
int* append(int* arr, int x, int n) {
	int* arr2 = new int[n + 1];
	for (int i = 0; i < n; i++)
	{
		arr2[i] = arr[i];
	}
	arr2[n] = x;
	delete(arr);
	return arr2;
}
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
int* arrMergeUnique(int*arr1, int* arr2, int n1, int n2, int* n) {
	int* arr3 = new int[0];

	for (int i = 0; i < n1; i++)
	{
		arr3 = append(arr3, arr1[i], *n); ++*n;
	}
	for (int i = 0; i < n2; i++)
	{
		arr3 = append(arr3, arr2[i], *n); ++*n;
	}
	for (int i = 0; i < *n; i++)
	{
		bool is_Unique = true;
		for (int j = i+1; j < *n; j++)
		{
			if (arr3[i] == arr3[j])
			{
				is_Unique = false; break;
			}
		}
		if (!is_Unique)
		{
			arr3 = removeElement(arr3, *n, i); --*n;
		}
	}
	return arr3;
}

//Завдання 2. Напишіть функцію, що по аналогії з завданням що ми
//розглянули на уроці(int* append(int* arr, int n)), що приймає два масива і
//створює та повертає новий масив який складається тільки з унікальних
//елементів які зустрічаються лише 1 раз в обої масивах.
int main()
{
    int n, m; // підготовка до виконання функції
    cin >> n >> m;

	int* arr = new int[n];
	int* arr2 = new int[m];

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%10+1;
		cout << arr[i] << ' ';
	}
	cout << '\n';
	for (int i = 0; i < m; i++)
	{
		arr2[i] = rand() % 10 + 1;
		cout << arr2[i] << ' ';
	}
	cout << '\n';
	int n2 = 0;
	int* arr3 = arrMergeUnique(arr, arr2, n, m, &n2);
	for (int i = 0; i < n2; i++)
	{
		cout << arr3[i] << ' ';
	}
}
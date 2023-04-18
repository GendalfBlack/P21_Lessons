#include <iostream>
using namespace std;

int* arrMergeUnique(int*arr1, int* arr2, int n1, int n2) {

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
	int* arr3 = arrMergeUnique(arr, arr2, n, m);
	for (int i = 0; i < n+m; i++)
	{
		cout << arr3[i] << ' ';
	}
}
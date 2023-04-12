#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	// Задача 1. Користувач вводить 5 чисел з консолі. Порахувати сумму та середнє арифметичне
	/*
	int a, sum = 0;
	float avrg;
	int i = 0;
	while (i < 5)
	{
		cin >> a;
		sum += a;
		i++;
	}
	avrg = sum / 5.0;
	cout << sum << ' ' << avrg;
	*/
	// Задача 2. Користувач має ввести 5 чисел. Програма має вивести в прямому та оберненому порядку
	// ці елементи в 2 рядка.
	/*
	int a1, a2, a3, a4, a5;
	cin >> a1 >> a2 >> a3 >> a4 >> a5;
	cout << a5 << ' ' << a4 << ' ' << a3 << ' ' << a2 << ' ' << a1 << '\n';
	cout << a1 << ' ' << a2 << ' ' << a3 << ' ' << a4 << ' ' << a5 << '\n';
	*/
	// Задача 3. Програма генерує 150 чисел. Програма має вивести в прямому та оберненому порядку
	// ці елементи в 2 рядка.
	/*srand(time(0));

	int arr[30];
	for (int i = 0; i < 30; i++)
	{
		arr[i] = rand()%90+10;
	}

	for (int i = 0; i < 30; i++)
	{
		cout << arr[i] << ' ';
		if( arr[i] < 0){
		indexstart = i; break;
		}
	}
	cout << '\n';
	for (int i = 29; i >= 0; i--)
	{
		cout << arr[i] << ' ';
		if(arr[i] < 0) {
		indexend = i; break;
		}
	}*/
	// Задача 4. Користувач вводить кількість своїх оцінок, після чого програма має отримати всю кількість
	// записати в массив і вивести всі оцінки більші за 7 у відповідь в рядок

	const int limit = 21;
	/*
	int n;
	do {
		cout << "Введіть кількість оцінок: ";
		cin >> n;
	} while (n > 21 || n < 1);

	int a[limit];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] > 7)
		{
			cout << a[i] << ' ';
		}
	}
	*/
}

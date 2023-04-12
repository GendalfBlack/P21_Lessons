#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	// Оператори розгалудження коду С
	// switch, if, else if, else
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	// Задача 3. Користувач вводить п'ятизначне число. Вивести це число з цифрами в 
	// зворотньому порядку.Якщо користувач ввів НЕ п'ятизначне число — 
	// повідомлення про помилку

	int x;
	cout << "Введіть число: ";
	cin >> x;
	if (x >= 10000 && x < 100000)
	{
		int n1, n2, n3, n4, n5;
		n1 = x % 10;
		n2 = x / 10 % 10;
		n3 = x / 100 % 10;
		n4 = x / 1000 % 10;
		n5 = x / 10000;

		cout << n5 << n4 << n3 << n2 << n1;

		int y = n5 + n4 * 10 + n3 * 100 + n2 * 1000 + n1 * 10000;
		cout << y;
	}
	else {
		cout << "повідомлення про помилку";
	}
}

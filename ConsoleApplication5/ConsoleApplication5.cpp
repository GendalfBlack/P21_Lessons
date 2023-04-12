#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	// Оператори розгалудження коду С
	// switch, if, else if, else
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Задача 1. В залежності від вибора користувача, 
	// після введення двох чисел, відбувається або дія +, -, *, /

	// switch - це оператор розгалудження який працює з ЦІЛИМИ
	//			числами і перевіряє іх значення, і в залежності
	//			від значення виконує відповідний блок програми

	int a, b;
	cout << "Введіть перше число: "; cin >> a;
	cout << "Введіть друге число: "; cin >> b;

	cout << "1. +\n2. -\n3. *\n4. /\n";
	int answ;
	cin >> answ;
	/*
	if (answ == 1) { cout << a + b; }
	else if (answ == 2){ cout << a - b; }
	else if (answ == 3){ cout << a * b; }
	else if (answ == 4){ cout << a / b; }
	else { cout << "Такої дії не передбачено!";}
	*/
	switch (answ)
	{
	case 1: cout << a + b; break;
	case 2: cout << a - b; break;
	case 3: cout << a * b; break;
	case 4: cout << a / b; break;
	default: cout << "Такої дії не передбачено!"; break;
	}
}
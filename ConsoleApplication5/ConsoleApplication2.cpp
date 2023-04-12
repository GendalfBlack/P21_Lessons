#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	// Оператори розгалудження коду С
	// switch, if, else if, else
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int answ;
	cout << "1.Напої\n2.Перші страви\n3.Десерти\n";
	cin >> answ;

	switch (answ)
	{
	case 1: cout << "1.Чай\n2.Кола\n3.Кава\n"; cin >> answ;
		switch (answ)
		{
		case 1: cout << "8 грн"; break;
		case 2: cout << "15 грн"; break;
		case 3: cout << "10 грн"; break;
		default: cout << "Такого в меню немає!"; break;
		} break;
	case 2: cout << "1.Борщ\n2.Картопля\n3.Рибний суп\n"; cin >> answ;
		switch (answ)
		{
		case 1: cout << "40 грн"; break;
		case 2: cout << "35 грн"; break;
		case 3: cout << "20 грн"; break;
		default: cout << "Такого в меню немає!"; break;
		} break;
	case 3: cout << "1.Тістечко\n2.Морозиво\n3.Торт\n"; cin >> answ;
		switch (answ)
		{
		case 1: cout << "15 грн"; break;
		case 2: cout << "8 грн"; break;
		case 3: cout << "13 грн"; break;
		default: cout << "Такого в меню немає!"; break;
		} break;
	default:cout << "Такого в меню немає!"; break;
	}
	/*
	if (answ == 1)
	{
		cout << "1.Чай\n2.Кола\n3.Кава\n";
		cin >> answ;
		if (answ == 1) { cout << "8 грн"; }
		else if (answ == 2) { cout << "15 грн"; }
		else if (answ == 3) { cout << "10 грн"; }
		else { cout << "Такого в меню немає!"; }
	}
	else if (answ == 2)
	{
		cout << "1.Борщ\n2.Картопля\n3.Рибний суп\n";
		cin >> answ;
		if (answ == 1) { cout << "40 грн"; }
		else if (answ == 2) { cout << "35 грн"; }
		else if (answ == 3) { cout << "20 грн"; }
		else { cout << "Такого в меню немає!"; }
	}
	else if (answ == 3)
	{
		cout << "1.Тістечко\n2.Морозиво\n3.Торт\n";
		cin >> answ;
		if (answ == 1) { cout << "15 грн"; }
		else if (answ == 2) { cout << "8 грн"; }
		else if (answ == 3) { cout << "13 грн"; }
		else { cout << "Такого в меню немає!"; }
	}
	else {
		cout << "Такого в меню немає!";
	}*/
}

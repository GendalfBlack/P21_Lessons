#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	// Оператори розгалудження коду С
	// switch, if, else if, else
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Задача 2. Користувач має обрати правильну букву при
	// заданому питанні та варіантах відповіді.

	cout << "Як звуть викладача?\n";
	cout << "a. Олександр\nb. Віталій\nc. Богдан\nd. Світлана\n";
	
	char answ;
	cin >> answ;
	/*
	if (answ == 'a') { cout << "Ви вгадали!"; }
	else { cout << "Ви не вгадали! Два."; }
	*/
	switch (answ)
	{
	case 'a': cout << "Ви вгадали!"; break;
	default:"Ви не вгадали! Два."; break;
	}
}

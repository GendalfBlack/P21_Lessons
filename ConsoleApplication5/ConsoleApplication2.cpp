#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	// ��������� ������������� ���� �
	// switch, if, else if, else
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int answ;
	cout << "1.����\n2.����� ������\n3.�������\n";
	cin >> answ;

	switch (answ)
	{
	case 1: cout << "1.���\n2.����\n3.����\n"; cin >> answ;
		switch (answ)
		{
		case 1: cout << "8 ���"; break;
		case 2: cout << "15 ���"; break;
		case 3: cout << "10 ���"; break;
		default: cout << "������ � ���� ����!"; break;
		} break;
	case 2: cout << "1.����\n2.��������\n3.������ ���\n"; cin >> answ;
		switch (answ)
		{
		case 1: cout << "40 ���"; break;
		case 2: cout << "35 ���"; break;
		case 3: cout << "20 ���"; break;
		default: cout << "������ � ���� ����!"; break;
		} break;
	case 3: cout << "1.ҳ������\n2.��������\n3.����\n"; cin >> answ;
		switch (answ)
		{
		case 1: cout << "15 ���"; break;
		case 2: cout << "8 ���"; break;
		case 3: cout << "13 ���"; break;
		default: cout << "������ � ���� ����!"; break;
		} break;
	default:cout << "������ � ���� ����!"; break;
	}
	/*
	if (answ == 1)
	{
		cout << "1.���\n2.����\n3.����\n";
		cin >> answ;
		if (answ == 1) { cout << "8 ���"; }
		else if (answ == 2) { cout << "15 ���"; }
		else if (answ == 3) { cout << "10 ���"; }
		else { cout << "������ � ���� ����!"; }
	}
	else if (answ == 2)
	{
		cout << "1.����\n2.��������\n3.������ ���\n";
		cin >> answ;
		if (answ == 1) { cout << "40 ���"; }
		else if (answ == 2) { cout << "35 ���"; }
		else if (answ == 3) { cout << "20 ���"; }
		else { cout << "������ � ���� ����!"; }
	}
	else if (answ == 3)
	{
		cout << "1.ҳ������\n2.��������\n3.����\n";
		cin >> answ;
		if (answ == 1) { cout << "15 ���"; }
		else if (answ == 2) { cout << "8 ���"; }
		else if (answ == 3) { cout << "13 ���"; }
		else { cout << "������ � ���� ����!"; }
	}
	else {
		cout << "������ � ���� ����!";
	}*/
}

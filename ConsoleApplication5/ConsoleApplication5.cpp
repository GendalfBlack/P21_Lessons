#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	// ��������� ������������� ���� �
	// switch, if, else if, else
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// ������ 1. � ��������� �� ������ �����������, 
	// ���� �������� ���� �����, ���������� ��� �� +, -, *, /

	// switch - �� �������� ������������� ���� ������ � ֲ����
	//			������� � �������� �� ��������, � � ���������
	//			�� �������� ������ ��������� ���� ��������

	int a, b;
	cout << "������ ����� �����: "; cin >> a;
	cout << "������ ����� �����: "; cin >> b;

	cout << "1. +\n2. -\n3. *\n4. /\n";
	int answ;
	cin >> answ;
	/*
	if (answ == 1) { cout << a + b; }
	else if (answ == 2){ cout << a - b; }
	else if (answ == 3){ cout << a * b; }
	else if (answ == 4){ cout << a / b; }
	else { cout << "���� 䳿 �� �����������!";}
	*/
	switch (answ)
	{
	case 1: cout << a + b; break;
	case 2: cout << a - b; break;
	case 3: cout << a * b; break;
	case 4: cout << a / b; break;
	default: cout << "���� 䳿 �� �����������!"; break;
	}
}
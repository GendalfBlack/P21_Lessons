#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	// ��������� ������������� ���� �
	// switch, if, else if, else
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// ������ 2. ���������� �� ������ ��������� ����� ���
	// �������� ������ �� �������� ������.

	cout << "�� ����� ���������?\n";
	cout << "a. ���������\nb. ³����\nc. ������\nd. �������\n";
	
	char answ;
	cin >> answ;
	/*
	if (answ == 'a') { cout << "�� �������!"; }
	else { cout << "�� �� �������! ���."; }
	*/
	switch (answ)
	{
	case 'a': cout << "�� �������!"; break;
	default:"�� �� �������! ���."; break;
	}
}

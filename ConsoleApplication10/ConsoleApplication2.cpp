#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	// ������ 1. ���������� ������� 5 ����� � ������. ���������� ����� �� ������ �����������
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
	// ������ 2. ���������� �� ������ 5 �����. �������� �� ������� � ������� �� ���������� �������
	// �� �������� � 2 �����.
	/*
	int a1, a2, a3, a4, a5;
	cin >> a1 >> a2 >> a3 >> a4 >> a5;
	cout << a5 << ' ' << a4 << ' ' << a3 << ' ' << a2 << ' ' << a1 << '\n';
	cout << a1 << ' ' << a2 << ' ' << a3 << ' ' << a4 << ' ' << a5 << '\n';
	*/
	// ������ 3. �������� ������ 150 �����. �������� �� ������� � ������� �� ���������� �������
	// �� �������� � 2 �����.
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
	// ������ 4. ���������� ������� ������� ���� ������, ���� ���� �������� �� �������� ��� �������
	// �������� � ������ � ������� �� ������ ����� �� 7 � ������� � �����

	const int limit = 21;
	/*
	int n;
	do {
		cout << "������ ������� ������: ";
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

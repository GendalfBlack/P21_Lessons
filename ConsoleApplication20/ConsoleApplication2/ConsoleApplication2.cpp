#include <iostream>
using namespace std;
// ��� ����
// ���� 40. ������ ��� ����������� ���������� ��������.

// ������ 1. �������� ���������� ��������� ����� �������. �� ��������� ���� �� �������:
// �� �������� �� ����� ������ ����� � �������� �������� = '@'
// �� �������� �� ����� �������� ����� � �������� �������� = '.'
// �� �������� �� ����� ����� ����� � ������ �������� = '.'
// �� �������� �� ����� �������� ����� � ������ �������� = '@'
// ������� ����� �� ����� �� ��������� �������

void printMultyDimentionalArray(char** arr, int m, int n) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << arr[i][j];
		}
		cout << '\n';
	}
}

int main()
{
	int m;
	cin >> m;
	int n;
	cin >> n;
	char** arr = new char* [m];
	for (int i = 0; i < m; i++)
	{
		arr[i] = new char[n];
		for (int j = 0; j < n; j++)
		{
			if (i % 2 == 0 && j % 2 != 0) { arr[i][j] = char(219); }
			if (i % 2 != 0 && j % 2 != 0) { arr[i][j] = char(176); }
			if (i % 2 == 0 && j % 2 == 0) { arr[i][j] = char(176); }
			if (i % 2 != 0 && j % 2 == 0) { arr[i][j] = char(219); }
		}
	}
	printMultyDimentionalArray(arr, m, n);
}

// ������ 2. �������� ���������� ��������� ����� ������� �����.
// ��������� ���� �� ��������:
// ������ ������ ������� "����� �����. ����� ���������"
// ��������� ������� � 4 ����� � 7 ��������� ���� ������� ������ 4.7
// ������� �� ����� �� ��������� �������